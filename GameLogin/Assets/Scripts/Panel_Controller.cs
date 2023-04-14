using UnityEngine;
using UnityEngine.UI;
using TMPro;
using PlayFab;
using PlayFab.ClientModels;
using System;

public class Panel_Controller : MonoBehaviour
{
    public GameObject loginPanel, registerPanel, profilePanel, forgetPswdPanel, notificationPanel;
    public TMP_InputField loginEmail, loginPassword, signupName, signupEmail, signupPassword, signupCFMPassword, forgetpswdEmail;
    public TMP_Text notification_Title, notification_Msg, profile_UserName, profile_PlayerID;
    public GameObject loader;

    public void OpenLoginPanel()
    {
        loginPanel.SetActive(true);
        registerPanel.SetActive(false);
        profilePanel.SetActive(false);
        forgetPswdPanel.SetActive(false);

        signupName.text = "";
        signupEmail.text = "";
        signupPassword.text = "";
        signupCFMPassword.text = "";

        forgetpswdEmail.text = "";
    }

    public void OpenRegisterPanel()
    {
        loginPanel.SetActive(false);
        registerPanel.SetActive(true);
        profilePanel.SetActive(false);
        forgetPswdPanel.SetActive(false);

        loginEmail.text = "";
        loginPassword.text = "";
    }

    public void OpenProfilePanel()
    {
        loginPanel.SetActive(false);
        registerPanel.SetActive(false);
        profilePanel.SetActive(true);
        forgetPswdPanel.SetActive(false);

        loader.SetActive(false);
        loginEmail.text = "";
        loginPassword.text = "";
    }

    public void OpenForgetPswdPanel()
    {
        loginPanel.SetActive(false);
        registerPanel.SetActive(false);
        profilePanel.SetActive(false);
        forgetPswdPanel.SetActive(true);

        loginEmail.text = "";
        loginPassword.text = "";
    }

    public void LoginUser()
    {
        if (string.IsNullOrEmpty(loginEmail.text)&&string.IsNullOrEmpty(loginPassword.text))
        {
            loader.SetActive(false);
            showNotificationMsg("ERROR", "Field Empty");
            return; 
        }

        loader.SetActive(true);
        //do login
        var req = new LoginWithEmailAddressRequest
        {
            Email = loginEmail.text,
            Password = loginPassword.text,

            InfoRequestParameters = new GetPlayerCombinedInfoRequestParams
            {
                GetPlayerProfile = true
            }
        };

        PlayFabClientAPI.LoginWithEmailAddress(req, OnLoginSuccess, OnError);
    }

    private void OnLoginSuccess(LoginResult Result)
    {
        showNotificationMsg("SUCCESS", "You Logged In To Your Account");
        profile_UserName.text = Result.InfoResultPayload.PlayerProfile.DisplayName;
        profile_PlayerID.text = Result.InfoResultPayload.PlayerProfile.PlayerId;
        OpenProfilePanel();
    }

    public void RegisterUser()
    {
        if (string.IsNullOrEmpty(signupEmail.text) && string.IsNullOrEmpty(signupName.text) && string.IsNullOrEmpty(signupPassword.text) && string.IsNullOrEmpty(signupCFMPassword.text))
        {
            showNotificationMsg("ERROR", "Field Empty");
            return;
        }

        //do registration
        if (signupPassword.text == signupCFMPassword.text)
        {
            var req = new RegisterPlayFabUserRequest
            {
                DisplayName = signupName.text,
                Email = signupEmail.text,
                Password = signupPassword.text,

                RequireBothUsernameAndEmail = false
            };

            PlayFabClientAPI.RegisterPlayFabUser(req, OnRegisterSuccess, OnError);
        }
    }

    private void OnRegisterSuccess(RegisterPlayFabUserResult Result)
    {
        showNotificationMsg("SUCCESS", "New Account Was Created");
        OpenLoginPanel();
    }

    public void ForgetPassword()
    {
        if (string.IsNullOrEmpty(forgetpswdEmail.text))
        {
            showNotificationMsg("ERROR", "Forget Email Empty");
            return;
        }

        //reset password
        var req = new SendAccountRecoveryEmailRequest
        {
            Email = forgetpswdEmail.text,
            TitleId = "86AE6",
        };

        PlayFabClientAPI.SendAccountRecoveryEmail(req, OnSent, OnError);
    }

    private void OnSent(SendAccountRecoveryEmailResult Result)
    {
        showNotificationMsg("SUCCESS", "Password Reset Link Has Been Send To Your Registered Mail ID");
        OpenLoginPanel();
    }

    private void OnError(PlayFabError Error)
    {
        showNotificationMsg("ERROR", Error.GenerateErrorReport());
    }
    public void LogOut()
    {
        profile_UserName.text = "";
        profile_PlayerID.text = "";

        PlayFabClientAPI.ForgetAllCredentials();
        OpenLoginPanel();
    }

    private void showNotificationMsg(string title, string message)
    {
        notification_Title.text = "" + title;
        notification_Msg.text = "" + message;

        notificationPanel.SetActive(true);
    }

    public void closeNotificationPanel()
    {
        notification_Title.text = "";
        notification_Msg.text = "";

        notificationPanel.SetActive(false);
    }
}
