#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// System.Configuration.AppSettingsReader
struct AppSettingsReader_t5319223C8B108FEDFE14AA9DBC18C16C68E62F8F;
// System.Configuration.ApplicationScopedSettingAttribute
struct ApplicationScopedSettingAttribute_tFDF4A38023B8C450903F1A6ED55BA0BB9DA148C4;
// System.Configuration.ApplicationSettingsBase
struct ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605;
// System.Configuration.ApplicationSettingsGroup
struct ApplicationSettingsGroup_t6CBD33D350E767299BFAE5CD39F063885DA1DAD0;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Net.Configuration.AuthenticationModuleElement
struct AuthenticationModuleElement_tA0344044E429FCDA9A085EAF4A1471720CB5DB17;
// System.Net.Configuration.AuthenticationModuleElementCollection
struct AuthenticationModuleElementCollection_t9DA54FD43022F3E9733ECB60C2B93DD11E17E8D2;
// System.Net.Configuration.AuthenticationModulesSection
struct AuthenticationModulesSection_t3A675E838686A766DCE07BEAB36EA46A62316C69;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Net.Configuration.BypassElement
struct BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC;
// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.ComponentModel.CancelEventArgs
struct CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Collections.CaseInsensitiveComparer
struct CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281;
// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F;
// System.IO.ChunkedMemoryStream
struct ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65;
// System.Configuration.ClientSettingsSection
struct ClientSettingsSection_t0E32E0B5F47E3A0002AACBE5430ADFFBC98D08B3;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Collections.Specialized.CompatibleComparer
struct CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E;
// System.Configuration.ConfigXmlDocument
struct ConfigXmlDocument_tFAB7D1C598C58E82F4ACA33C01010D5FA557E7C1;
// System.Configuration.Configuration
struct Configuration_t76590F71F1AB7F5CC4BCC02EC0CDBF4449CDAEC1;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E;
// System.Configuration.ConfigurationException
struct ConfigurationException_t6DEA92A8714A1377436DFC82D7B07AEB93FFFC30;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93;
// System.Configuration.ConfigurationSettings
struct ConfigurationSettings_t57AE17F7C36F57E13C36525C73CAAC1063BF5C9E;
// System.Net.Configuration.ConnectionManagementElement
struct ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353;
// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1;
// System.Net.Configuration.ConnectionManagementSection
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34;
// System.Configuration.DefaultSettingValueAttribute
struct DefaultSettingValueAttribute_t09EF0413EA1808C230248DF4AA5F706565E2BABB;
// System.IO.Compression.DeflateStream
struct DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104;
// System.IO.Compression.DeflateStreamNative
struct DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7;
// System.Configuration.DictionarySectionHandler
struct DictionarySectionHandler_t9116E1380B3B7888E01C23FF1A97D809DC982868;
// System.Net.DnsPermission
struct DnsPermission_tEE0908CF002881CB0021F55AF338730B91661CDE;
// System.Net.DnsPermissionAttribute
struct DnsPermissionAttribute_t234623CDA9C21DA481E4ED50178ACDB3D8BCFF1A;
// System.Xml.EmptyEnumerator
struct EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.Net.Configuration.FtpCachePolicyElement
struct FtpCachePolicyElement_t12FAC54618469F19DD0D3AF0486F173A540D7F2D;
// System.IO.Compression.GZipStream
struct GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Net.Configuration.HttpCachePolicyElement
struct HttpCachePolicyElement_t6DC6A3BE41501894BA9B880CD58048B6AC7929D7;
// System.Net.Configuration.HttpListenerElement
struct HttpListenerElement_t559D7C83361157D2F59976CF87A8D8CD7DC5CF27;
// System.Net.Configuration.HttpListenerTimeoutsElement
struct HttpListenerTimeoutsElement_tDA5910F568E8832AC1B99AE56E79902B0451406E;
// System.Net.Configuration.HttpWebRequestElement
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IComparer
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
// System.ComponentModel.IComponent
struct IComponent_t0D1EA18B207431B187FBE8ECE5D3BC551877419E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t4D2DC61F0664F305059641FF6BDA07DF2141236C;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t20C0BA2FB19CAD6D3BD432B033BC560186E574C1;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.Security.IPermission
struct IPermission_t1FC61281490693550E8BDEE554C88F4EE7F847C6;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_tF7DB6310A471259B33C4081B30E73925164204DB;
// System.Configuration.IdnElement
struct IdnElement_t1600A7D1444637603C2BC0E9BEFC45D7600D0701;
// System.Configuration.IgnoreSectionHandler
struct IgnoreSectionHandler_t1CCE5D49101273B02080F629ECC0C3043AB3C9F2;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Net.Configuration.Ipv6Element
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932;
// System.Configuration.IriParsingElement
struct IriParsingElement_t86D7FA77708517AE2C872C0066EF231A7640D03A;
// System.Configuration.LocalFileSettingsProvider
struct LocalFileSettingsProvider_tB7C50B1046CB3E0D047401CAA0F15BA685E3FDAA;
// System.Net.Configuration.MailSettingsSectionGroup
struct MailSettingsSectionGroup_tF4FBFB4BD7658F6EB57894999F3B7F467F7C8426;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Net.Configuration.ModuleElement
struct ModuleElement_t5FB2A9AA5D7E90EE133790B8E2D805559A93EF96;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7;
// System.Configuration.NameValueFileSectionHandler
struct NameValueFileSectionHandler_t61902306D7C2879596427206C06D2BD821990A1F;
// System.Configuration.NameValueSectionHandler
struct NameValueSectionHandler_t17CD98BF7CED41908FB5117CA6E34B1174C824FF;
// System.Net.Configuration.NetSectionGroup
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F;
// System.Configuration.NoSettingsVersionUpgradeAttribute
struct NoSettingsVersionUpgradeAttribute_t1C90B0358F5B27707CDA7BE9411B146C4B98596A;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// System.Net.Configuration.PerformanceCountersElement
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.Configuration.Provider.ProviderBase
struct ProviderBase_tD7C429AEFAAEC072F1365F93DFF92E394A07B4D3;
// System.Net.Configuration.ProxyElement
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65;
// System.Net.Configuration.RequestCachingSection
struct RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Configuration.SchemeSettingElement
struct SchemeSettingElement_t381D9E6F03CAFE26FA63025881BCE86299E390CB;
// System.Configuration.SchemeSettingElementCollection
struct SchemeSettingElementCollection_tF4E9F58B4F8A8303363BEEE235E2F7954884D179;
// System.Security.SecurityElement
struct SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2;
// System.Configuration.SettingAttribute
struct SettingAttribute_t3B8E2A245E0945C8B8622310C24385C38D1D2DD4;
// System.Configuration.SettingChangingEventArgs
struct SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF;
// System.Configuration.SettingChangingEventHandler
struct SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E;
// System.Configuration.SettingElement
struct SettingElement_tDCCC43AE6FDABB9B4DBE1482582ED201B3D39377;
// System.Configuration.SettingElementCollection
struct SettingElementCollection_t36782DF73BF1703C70B7C094DC43E3F4D6AF40B6;
// System.Configuration.SettingValueElement
struct SettingValueElement_tC085F18817546877AFD1369659F50EB679700B42;
// System.Configuration.SettingsAttributeDictionary
struct SettingsAttributeDictionary_t5830B52750D090766BE7A83FF116CD223DBB511D;
// System.Configuration.SettingsBase
struct SettingsBase_t1ECBB76CB08D593098166B1C8D62053E51997BEF;
// System.Configuration.SettingsContext
struct SettingsContext_tE2A8637CE8FECB35A8FB44136C440FA37ACD2AFE;
// System.Configuration.SettingsDescriptionAttribute
struct SettingsDescriptionAttribute_t52FAAE809A9E9CDD1047A13FB5F88D2027E73189;
// System.Configuration.SettingsGroupDescriptionAttribute
struct SettingsGroupDescriptionAttribute_t9762F0903C14A794A754EDCA52C127B266ABCD23;
// System.Configuration.SettingsGroupNameAttribute
struct SettingsGroupNameAttribute_t36D45534354DF5B010238F82C267C7B11ECDD109;
// System.Configuration.SettingsLoadedEventArgs
struct SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5;
// System.Configuration.SettingsLoadedEventHandler
struct SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE;
// System.Configuration.SettingsManageabilityAttribute
struct SettingsManageabilityAttribute_t7FECB07177F7823FFBFCC4A747C3202B0B3C8115;
// System.Configuration.SettingsProperty
struct SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7;
// System.Configuration.SettingsPropertyCollection
struct SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3;
// System.Configuration.SettingsPropertyIsReadOnlyException
struct SettingsPropertyIsReadOnlyException_t223E92F0E23CEAC3EF58F4376D97640EBA6B15DA;
// System.Configuration.SettingsPropertyNotFoundException
struct SettingsPropertyNotFoundException_tB33F26B74AEF727762C689F39F106128FA96F614;
// System.Configuration.SettingsPropertyValue
struct SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19;
// System.Configuration.SettingsPropertyValueCollection
struct SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262;
// System.Configuration.SettingsPropertyWrongTypeException
struct SettingsPropertyWrongTypeException_t0CC979B0253762CE0113ABB94F3E41B0ABF7E706;
// System.Configuration.SettingsProvider
struct SettingsProvider_t47362C2066368337AE4B0802A9463B9BF9629653;
// System.Configuration.SettingsProviderAttribute
struct SettingsProviderAttribute_tA4B17535ADC920B0D9B0E2C5F3F4DC14C37648D1;
// System.Configuration.SettingsProviderCollection
struct SettingsProviderCollection_tA874FD5CCC7B667159CCFF34D055516DBAAD39FF;
// System.Configuration.SettingsSavingEventHandler
struct SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23;
// System.Net.Configuration.SettingsSection
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12;
// System.Configuration.SettingsSerializeAsAttribute
struct SettingsSerializeAsAttribute_tBDD4F5B8C3633C9EE50BB457E0388A13B12B7107;
// System.Configuration.SingleTagSectionHandler
struct SingleTagSectionHandler_t7FACC290CDE2B6DA919D09E1B05820BBA68C95EC;
// System.Net.Configuration.SmtpNetworkElement
struct SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD;
// System.Net.Configuration.SmtpSection
struct SmtpSection_tB52CE0EE7FAD32EBBB0C19ECD42AEF95D5CF5DBC;
// System.Net.Configuration.SmtpSpecifiedPickupDirectoryElement
struct SmtpSpecifiedPickupDirectoryElement_tB884FF2CF82666E01FEB0C50F909B68367868F9D;
// System.Net.Configuration.SocketElement
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6;
// System.Configuration.SpecialSettingAttribute
struct SpecialSettingAttribute_t6A0390FA21E4837E2581530B6716201FA4D9D323;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.Runtime.InteropServices.StandardOleMarshalObject
struct StandardOleMarshalObject_tB4B30E2C7691AC07C48EA8F43E05528759107D1A;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Configuration.UriSection
struct UriSection_tA65A84F103669739EEE6C50C25A9374FA23C66F6;
// System.Configuration.UserScopedSettingAttribute
struct UserScopedSettingAttribute_t056010F834245FA728C1118C82AC7BE7611EE92B;
// System.Configuration.UserSettingsGroup
struct UserSettingsGroup_t7B3574CA02AC6CD059BA1CE31517B50071796B94;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8;
// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167;
// System.Net.Configuration.WebRequestModuleElement
struct WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD;
// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463;
// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00;
// System.Net.Configuration.WebUtilityElement
struct WebUtilityElement_t6FA063D8F157F6F4F73ED8E5006213C44591C1E0;
// System.Net.Configuration.WindowsAuthenticationElement
struct WindowsAuthenticationElement_tC96EDD442C67FE43F7F3B3EDC9BAFB7C9009E13B;
// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD;
// System.Xml.XmlTextReader
struct XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B;
// System.Xml.XmlWriter
struct XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F;
// System.IO.ChunkedMemoryStream/MemoryChunk
struct MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284;
// System.IO.Compression.DeflateStream/ReadMethod
struct ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6;
// System.IO.Compression.DeflateStream/WriteMethod
struct WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9;
// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle
struct SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8;
// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator
struct NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F;
IL2CPP_EXTERN_C String_t* _stringLiteral05EB610FCC2B53833966AA8CE4B029154C502A88;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral16770065DAB8E218EBB0B0BB3BC4FE763DF3C18B;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2523CBFED84EF78578D85909448E8C0C4ECDA163;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2DA0AC110457767EB539C31A3B243D2C4C5C2D9D;
IL2CPP_EXTERN_C String_t* _stringLiteral34AE52A4D26F1742129FB49939AAFD990890D6C0;
IL2CPP_EXTERN_C String_t* _stringLiteral3C850BA1FC7F3581DBA2DD6DDF642D5C34A8C120;
IL2CPP_EXTERN_C String_t* _stringLiteral3FB7B372D879A173F88B1B57D2B19E95BABF6F3A;
IL2CPP_EXTERN_C String_t* _stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5;
IL2CPP_EXTERN_C String_t* _stringLiteral45F384B655DDF6A33BF7B0E551F80B07399CA472;
IL2CPP_EXTERN_C String_t* _stringLiteral53549F14C4C0C01E846937308C01413567514ED9;
IL2CPP_EXTERN_C String_t* _stringLiteral53B6A8F4629CFB02CF5AFB3B1D3C6A5584EB8548;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral547999BA16094C3536189EA1CC631B96EFC47117;
IL2CPP_EXTERN_C String_t* _stringLiteral59BD369CF985844B111CA4447943A285D359441C;
IL2CPP_EXTERN_C String_t* _stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F;
IL2CPP_EXTERN_C String_t* _stringLiteral606F0CC71C796275607A15AAF1A3AA6B5E27B434;
IL2CPP_EXTERN_C String_t* _stringLiteral61A2E25EECE5CA17D408DC393538F1767DE78408;
IL2CPP_EXTERN_C String_t* _stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97;
IL2CPP_EXTERN_C String_t* _stringLiteral690BF02630AC0BD6AA6BD08D2C36A28E1FC54F3E;
IL2CPP_EXTERN_C String_t* _stringLiteral78875BB01F47001614AE95132434E503D00EA404;
IL2CPP_EXTERN_C String_t* _stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7;
IL2CPP_EXTERN_C String_t* _stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705;
IL2CPP_EXTERN_C String_t* _stringLiteral88E3C436425EACB2A5AAA1F1DAA0E9E15389128D;
IL2CPP_EXTERN_C String_t* _stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288;
IL2CPP_EXTERN_C String_t* _stringLiteral95B4432B3C3526A7D6F1251C0238760D017B4551;
IL2CPP_EXTERN_C String_t* _stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralE290FE00878B1C01707983AAF8A6BB8464DFAB6D;
IL2CPP_EXTERN_C String_t* _stringLiteralE2E90A74AF10748DDAB6F42388BD10A4D42D95BB;
IL2CPP_EXTERN_C String_t* _stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37;
IL2CPP_EXTERN_C String_t* _stringLiteralF678DBEEE39BA115BA762E7766D189E0CD47CD41;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618;
IL2CPP_EXTERN_C String_t* _stringLiteralFC82027EEEA4BFAD4FE7FBFDD886E7D82ADBEA69;
IL2CPP_EXTERN_C const RuntimeMethod* AppSettingsReader_GetValue_m36F122024E1753B34509EA75BEABDEDB62913BC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppSettingsReader__ctor_mD30A51687A2598D7E61DCDCA6BE85E0BA2D8B75B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_GetPreviousVersion_m562438A2E536B861EDE77F6C32FABEA8DEE7E883_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_OnPropertyChanged_m08B3CDD10CB5705156FB2312703C5A16C1F2E753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_OnSettingChanging_mEBF79F9E3BF4ED2E7753F426507AC1DFE1B095B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_OnSettingsLoaded_m63816D506B6433465EE71D54424FFA1B7B0E6D6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_OnSettingsSaving_mDA4357E720C2A8AAFB5017D94BBD5B92E948313E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_Reload_m7DEE188BF14842B5E84DF950625A9C98ADAF8C13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_Reset_m02BC6992D50F1ACB0461DF64F5F22E92D4178E56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_Save_mE72FA4FDE239FF77F507AC40CAF46728F5B2AD00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_Upgrade_m5B4D5FDC587DC5C0158EB37D4ABE8AB5FCA84A6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase__ctor_m3F2CDF34D312C0991510D007E32701DDB98CC49E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase__ctor_m6DC02BFBA7D3EF2B8A531D44C77367CE2C108246_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase__ctor_m8081C8CE5B15E9B29D2C250BBF69C0B7B43F4392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase__ctor_mA18F3B768C5B41AC0EF5356BC582619B20414440_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_add_PropertyChanged_m0015B9C93D03F1A105274A3BA79793326F47B164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_add_SettingChanging_mCE39E23069269C842B8E4607363F40AAFA339C4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_add_SettingsLoaded_m12E753F2B0F07ADBFB2D1F12804092E90C6A66AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_add_SettingsSaving_m1BEE0D4A98156B88424BA2406F08F299FC18AE81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_get_Context_m6F3C90BF60F6FFB1B494E7B15D73FDB9BC0FB6B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_get_Item_m4BF53A18BEF424C2A6C26B8FD4D49B6D269B010E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_get_Properties_mEC0C95270132B01B60E9BBE5C75AA69DA594868A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_get_PropertyValues_mCB474259BFE8927B1D6F0164D73DB366179F5909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_get_Providers_m21645731DAAF0836241E51461A6CD293AC9B488C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_get_SettingsKey_mE2F1B22F58A376AE60C263F31DFDA08DC1D3CDE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_remove_PropertyChanged_m887D101192D0F39848A6ABCAE911C1D031BCD039_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_remove_SettingChanging_m713869A729222495B81AD8BF70C8B65F4B11A2B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_remove_SettingsLoaded_mAD8F3CED75F39A0C20F657C2B96B3C7FD4B5DC12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_remove_SettingsSaving_m4A9631E74E26A1618E9CB6BE9DE5008810010469_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_set_Item_mF4FA78724480283884C7EA797C4C7D1E715D8457_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsBase_set_SettingsKey_mE6079EE1D620A39F2E838F7CF44AFE28034C1807_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationSettingsGroup__ctor_mDF459B8EEF55BD98A6DA27C3999C9A868F8E95DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElementCollection_Add_mCB49C37E047F947A2192D05706540A05E35789A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElementCollection_Clear_m38B73C30074EC8373A7E109C16C1416652CEEF35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElementCollection_CreateNewElement_mC63B405B67D665FF3A2EDC6AF3281927E8F18B99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElementCollection_GetElementKey_mE159FD55D6927CA0AA264D070EB7FBB9DC02CA1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElementCollection_IndexOf_mB153E501DF421CA8F833E78C0A0A555CED18AA54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElementCollection_RemoveAt_mC44403D3C43C0DD8AF6BB8BCD8A312D9BAA19C4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElementCollection_Remove_m291B705E9C85334EB6E17CCC64BB4B9A443611A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElementCollection_Remove_mB8BA78F90525210AEEE3F04D0CABAEDE0BC63F53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElementCollection__ctor_m38DED99E270FE78399DDA5B9ED1ADA439C5320BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElementCollection_get_Item_m20551A2C4B3E7634A2B23DC564619E397809A80C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElementCollection_get_Item_mE77991B1AEEAB38E7E7820D4458905D541D6557B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElementCollection_set_Item_mC94C7398F3B998279E12809B8804D2B75861369D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElementCollection_set_Item_mCEBFD885C24E7012ACD2552BE7C7B1FDA822E9A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElement__ctor_m13EC618F56F31C50453D48AF72DFBA6FB683D97C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElement__ctor_m5FD2342616A496ABD2DE944E1F53A691C0A3028B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElement_get_Properties_mACD6B2480AC5A9A89217790E641FD57B2E4A6D0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElement_get_Type_m4A5D81943EE38BA704622F98152F6B08A30419DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModuleElement_set_Type_m99CC267C858640E623DFE8AA5F857FDCF6783E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModulesSection_InitializeDefault_m1042865B0B56666B8C5F29F5A5DEDA87C2C110F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModulesSection_PostDeserialize_m0943D114562D21AAC4E097A2FA3E35C6263A1002_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModulesSection__ctor_mD17CBBE5BAC4698F553DA6DA0FF1C5ECEA31729D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModulesSection_get_AuthenticationModules_m223C41E7166EDB17B65C179A92016D585B5900C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationModulesSection_get_Properties_mBD13B686CE841F1C79C5FAF76361D6BD57693BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection_Add_m42EE2ACBFE7445F50F5E5B344109E92FBA9415BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection_Clear_m181A0405DF5C3E30AF46734AE615FA0D81DE3583_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection_CreateNewElement_mC3B21211C223DD7F66C15734F2BD6642F845C842_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection_GetElementKey_m719BF9A81D9AE4137E5BAEB2F1319F4332124932_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection_IndexOf_m6840401E71E9EDA8D7A162935DC48FF8A9E780DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection_RemoveAt_m99C5584FB5A419397A7CD6BBD53321DB39B36F39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection_Remove_m8B3BD5C5074AF6438F5E72CEB3CB13DD05964409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection_Remove_mD5E4427B35C0E2C2082F1AA890F5C4147E822BA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection_get_Item_m4DC6C3BB102101B4903234A44BD61C0F98A13089_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection_get_Item_mC66863D480CAB5309CD75C3E2CD4E78B737F47EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection_get_ThrowOnDuplicate_m7992D2F3F1CB4D69F3A377892B8A9F9CE0545E20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection_set_Item_mA26E89239956D1E20BE4B6B2FCC373D6B1245594_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection_set_Item_mF46B4A57F0A93DDAF3963232445E08E555BADFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElement__ctor_m51C13A7F3038DEC58B7E1B7FFCAF49A0D3169496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElement__ctor_m8CC6AB091B7E23552837F5E02233181167B1AE96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElement_get_Address_mA56874F3889B01F431CA5588CE8EEA24F1DC9172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElement_get_Properties_m370AF1DF7B89FF6D91EC9EA0FC157D0E3902C327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElement_set_Address_m1FC455871E7D361C5868917E3F90A39ED0F2F049_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChunkedMemoryStream_Read_m2042D39F9FBD477FAD69D245C61920296CE1F270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChunkedMemoryStream_Seek_m7CC32A231927DE789E85C7746A2BEF73A8AB7A45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChunkedMemoryStream_SetLength_m2E2B42F9185A886CAF8A44C8F651651085ED9D94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChunkedMemoryStream_get_Position_m8F6A93B8926AA08FE79A8A316AA8A6541953AE50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChunkedMemoryStream_set_Position_mAB1DD0EDE2FFB31B4410526588626F03AA5AC54E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClientSettingsSection__ctor_m2AA5827DFBC5647BE31EFD6DFB54EFA123F8235A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClientSettingsSection_get_Properties_mB33C0A88562ED0A10917F0CB73A717A3B806AC4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClientSettingsSection_get_Settings_m648B6D9A59AD175EFA257250E9E83541126DDAC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompatibleComparer_GetHashCode_mE88BB0E4CC1A615946A43A8DE75B6F1F57B1CDAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigXmlDocument_LoadSingleElement_m68DD189FE379E5B27E5FC204918EDDB63C2E7CDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigXmlDocument_System_Configuration_Internal_IConfigErrorInfo_get_Filename_mD6C3344DA88EAB4C6237318705A0A34930DEC558_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigXmlDocument_System_Configuration_Internal_IConfigErrorInfo_get_LineNumber_m2F5A8CD090CD6EA19CCB986D247DD1FE1209AACF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigXmlDocument__ctor_mEA8D1F1134E0D385B831171528D75FA8F7B96572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigXmlDocument_get_Filename_mFA3503168E8983BFCB4DB9400D1080829D99D0D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigXmlDocument_get_LineNumber_m53E5C046AA423D2868E7ED9E979BB2999376324C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigurationException_GetXmlNodeFilename_m4D67F72D4D04A929A036F7BDF3B05DFC9C542CD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigurationException_GetXmlNodeLineNumber_m073E2256B874BF48C0465592B64D415DCE7B4036_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigurationException__ctor_m4EABBBC8C0A996CA1E4B29DEE0F8F050E72B359A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigurationException__ctor_m72C69635FB6F5CA5FEEBAE3075E4B85D82213408_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigurationException__ctor_mAD37E420B69955D38616E7DAF28130D09BE2B354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigurationException__ctor_mADD98558BB6B39A212067EC4FDC5D315AB41A4B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigurationException__ctor_mB57430D165F4E87787FE2C00D4D5821656FB3B01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigurationException__ctor_mC4D5DB30C0BCEBA5C8B632909E46F429605C312F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigurationException__ctor_mD234A8C7FFF72B29BEDCC1621165028A0FF4B8C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigurationException__ctor_mD2CC0BE020C42476E7039ECE00873FEE89BF0AA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigurationException_get_BareMessage_mF7AF4B07C27CB39CF6E53D5B04842773DB5DC1C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigurationException_get_Filename_mEC11ACE5BE4566D6359DB5B3C357BFDEE511FC59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigurationException_get_Line_m97C6A9EA28B62A02CFD5C6F4AC8A865C090BA7E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigurationSettings_GetConfig_m0F5421941C15B1DC6B9485974E0346FDE386DB93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigurationSettings__ctor_mAF1877860BD5C91E7FDAF5D23DFF6A24D468C052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigurationSettings_get_AppSettings_mD06F5FDAC4BD9690B8C5F462CE23C60953D6452F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection_Add_m86C338A16AAC79C882B1D397C23285304113B1ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection_Clear_m74A283DF1A0CD34C20B0AED7FBFD4698282E5816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection_CreateNewElement_mE483ED3D1EABD7BBF635124087A8AD12796C6297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection_GetElementKey_mFA3BE3371C02E7C6883994C3C2245FB41A9F20B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection_IndexOf_m9C9F891C0978BF3F186940188B6DA1C93B1C25F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection_RemoveAt_m055098B46DDD916C1BDE855CA36254EC7109CDFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection_Remove_m1DC3D5F85A457DEC1C56FCC58125E6E71BFD1DDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection_Remove_mCD4D868DE7D10893A0845EB86C6E057F857C26DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection_get_Item_m43D81735028106A141049B4F2AAC593FE981901A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection_get_Item_m92E5A6457A23ED54908A832ADB8CD3077255A73A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection_set_Item_m7999F6847DE1435DD6C9AA02D2B6FD3CFA77B4D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection_set_Item_mAC0D7AAFE17E56C8B952632C7A15A558A18563C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElement__ctor_m1A3F0A70FA020EC2A22F686F62F7BF2874319C6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElement__ctor_mAB0DC19DF165D808985C0F02B751F8F0BDADC38B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElement_get_Address_m2981F0182DB4CF16736B315E8CD50DF095784783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElement_get_MaxConnection_m6EB1D7CAB134A12DAA6B8C226350EE109CCBC087_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElement_get_Properties_mA086EE9EB757B70298A5B82FC68162B9DF52E8A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElement_set_Address_m5A18B1FF3263F9A9C62EA86C1F83E0849C167938_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElement_set_MaxConnection_m0F9425BBCB52DC78F75CA54CDC5AC6272F81A8A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection_get_ConnectionManagement_mB6AA0D663BE248AECB8D37344B03ABCDD4EEDBA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_PostDeserialize_m1CD7AE41D781E5AC1A6EA82674DD86650DEE593F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_get_BypassList_mE98AAAC667B7040CC62A6274584D89A5F0CF8095_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_get_Enabled_mC46CD7537422499B7E44C15CD3C94E344D33FFF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_get_Module_m72EABA0B5AB9E3C9D98FE49C82217B0868952E1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_get_Proxy_mA457C7777BB424414099F2490F4DB74AD9EA8AC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_get_UseDefaultCredentials_mAE82165A163C83521AE65BC5E621AFE98DDB838A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_set_Enabled_m2441F444E01188481C429A159EE16FF476A35EBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_set_UseDefaultCredentials_m9E978FFD2E464FBDE65A123F84113AF617E5DA65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultSettingValueAttribute_get_Value_m0F2F1D2ED3429F1640F720B377CD9B7644592DC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Flush_mE12E917486F3EA41FE453945AA5B5617F80E6D0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Seek_mCABEFA32513E0858BC7A98F05AAA217A09C65B16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_SetLength_mC18B3CCD1225B3C3A15EF54830C44236670F63F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Length_m8C7CE98029153C5065D28496ACE3F99CB644897C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Position_mA6B4FE66DBE953C5504A3561AD75FCC87718F376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_Position_m9BA570C4BF91C325EFE8E6BEAF40E6AB54BCC885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictionarySectionHandler_Create_m094285E8BC684D5BAB1875B87B836D1D19045D84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictionarySectionHandler__ctor_m46C0DED69B2EEFE6D05C67C5AEBEBE2893024D78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictionarySectionHandler_get_KeyAttributeName_mECA293A08F2A4DF8D40563505CBB7BE7C5772BB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictionarySectionHandler_get_ValueAttributeName_m24049DAB6176CF13ABF538D798A7B7E7590D907D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DnsPermissionAttribute_CreatePermission_m658E6BF4FB2A748037A90FDCA4AD264EA10859D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DnsPermission_Copy_mD5FB6C3EC9C9D610118CAD156207D7C77C4B198C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DnsPermission_FromXml_mD18BBB4AA2F16DF86E6C172AB3B4EBC7FB8A3591_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DnsPermission_Intersect_mCC5E68B8D9A37075C42008BE8576A9235F2EE539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DnsPermission_IsSubsetOf_m27898F3FFF9FC196CCBB4915121692DD4430E44F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DnsPermission_IsUnrestricted_mC3177D390CD790032AA578CC1499FEE77F03415C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DnsPermission_ToXml_m4ECFF909AE100B44977463EE36DF0A9D021BF260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DnsPermission__ctor_m2CEB99C07EB5C638121AD9421023253A41CA1BA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FtpCachePolicyElement_DeserializeElement_mF8C7EAAE573C8AA5380123B8B8F68D0FEEB9278B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FtpCachePolicyElement_Reset_mE7645FA7C99BCA2684617B467A240ADC36DCD323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FtpCachePolicyElement__ctor_m06E0F57C7B906BE61221D558652EBD16FB9CF283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FtpCachePolicyElement_get_PolicyLevel_m2ECEE5F471B9AFD896E18E3130805A6C273F4897_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FtpCachePolicyElement_get_Properties_m3198BEDC4CC5E16CCC64C16129AAE6A5BE18BD31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FtpCachePolicyElement_set_PolicyLevel_m31A779AF3CB5175C45314E7A2201FD452CB28334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Seek_m72909F60549EAB072B86484A1E80BA15D4352E66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_SetLength_m5DCF13005B2AB45961D14230670698CBAF93D0C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_ThrowStreamClosedException_m36E38FF71D68FFDE6707E3691F06929BE72713C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_Length_mCBA17CDD8925825AC2EB07E04CDE391B8E46C583_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_Position_m934BD5709034CAAEE05A6BCF382D1FEB0314C420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_set_Position_m7FEEE9F3845C130340DC5E1DF984ACB2CD53E957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpCachePolicyElement_DeserializeElement_m93929E364070CF1E6523727C6E5660921F7DAC11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpCachePolicyElement_Reset_mED231986D0B1598611FDFC75E5ED7489F10D8B28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpCachePolicyElement__ctor_mFF7DAD2FE7E7A2F02C17E815DCD3B58ABE446C63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpCachePolicyElement_get_MaximumAge_mC2A903C08BC4D7E978CFC6634746A423A8999EB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpCachePolicyElement_get_MaximumStale_m426E57642FCC9ECB09093460D2BD81A094A6CBB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpCachePolicyElement_get_MinimumFresh_m7DA8650C7C26818D37365BAE9B9DEC351DD55A7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpCachePolicyElement_get_PolicyLevel_mB319B8785794AE482687E5B60E6FB5F7AF10A726_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpCachePolicyElement_get_Properties_m4A57C2EF8AA6B1ABB180FBBE8869B5C9CA8B5146_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpCachePolicyElement_set_MaximumAge_m1402D30E0A27C5E3D4F0E28523C61C6DAACF73EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpCachePolicyElement_set_MaximumStale_m1083BE2D21816DA9E09C762DD0F097369B7B9CCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpCachePolicyElement_set_MinimumFresh_mEB23463027DC8E9338DB7F411B0FCDCD4B07EB59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpCachePolicyElement_set_PolicyLevel_mBDA701D94328F1FAE85982A0941647220481F171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpListenerElement__ctor_m7B3E8B55DCF00955CB78DD0AA1387AE523DAE2FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpListenerElement_get_Properties_m28B45D2F83707FCE01B5CD826B6EFFC015C0D0F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpListenerElement_get_Timeouts_m03B4B91DE1ECA916DD0EB5AE3FD21E594C9A2677_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpListenerElement_get_UnescapeRequestUrl_mD9F799EEC84EE8D07E396C3343E36F19637F302A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpListenerTimeoutsElement__ctor_m3C840D755AA1F28AAE5FC0C59256F36CC5F3C8A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpListenerTimeoutsElement_get_DrainEntityBody_m836AA436EF59541EC1F5BEBB63B2F2E1BB8BC8D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpListenerTimeoutsElement_get_EntityBody_m7B1D8F12F5067BD540FB1521C91D0BBF2A3CA705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpListenerTimeoutsElement_get_HeaderWait_m6BF6E01A03C131991396A1407615615DD12CC97F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpListenerTimeoutsElement_get_IdleConnection_mEC264218C3086F7A6188011D365A09D312E56D19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpListenerTimeoutsElement_get_MinSendBytesPerSecond_mDAD77638E4B164675622BBB9807FE819A04D621B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpListenerTimeoutsElement_get_Properties_mB4F8948E895404155961EEBE27C50858FF110047_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpListenerTimeoutsElement_get_RequestQueue_m4D9C7580C69B6AC583C25838FDF3B9B803FE1882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_PostDeserialize_m9D884AD55845D6CA3FA9BC0ED93E687382ABE94F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_get_MaximumErrorResponseLength_mAD2CEBCBDD398C4CEF1C6E98A9737F4D4A10BC28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_get_MaximumResponseHeadersLength_m13289CE961DB708367948A2EECBC7433C4D39C58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_get_MaximumUnauthorizedUploadLength_mCC0713EDC731FE3A36EB38B0B662B584F605BE70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_get_UseUnsafeHeaderParsing_m653C396F6652C6B6AADBA7047B4489D79D6DC59B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_set_MaximumErrorResponseLength_m67C97317833EF7B9B79AA55502EC39BE91CFDAE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_set_MaximumResponseHeadersLength_mAE339471E3F5B9939D43428B0E52063821E1A430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_set_MaximumUnauthorizedUploadLength_m08DC2C23918CC1A25BD3B537ABCC9D4DE88857FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_set_UseUnsafeHeaderParsing_mBDBAD843047635C5DF631554249FE09B3C127B99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IdnElement__ctor_m6A85B045DB04D1C680367D3B099CCFC2614EB067_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IdnElement_get_Enabled_m682FBD02B138890D14B08F516377CFF4F7308104_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IdnElement_get_Properties_m112CE3617880A7D7B3221B62D9E739CA8A30BD11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IdnElement_set_Enabled_m6275391F668964CAF840474777218BA16FC0BAC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IgnoreSectionHandler_Create_m5F28B8221C6148BB93158FB4A1261A9F9FE070B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IgnoreSectionHandler__ctor_mDA7F62DBA1DE04E823CAF604A531EA9257318764_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element_get_Enabled_mC62B072A122F0D03995218184825FF0912213BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element_set_Enabled_mB802AA5876D6A28E8A99741E59E9DBC792EFB455_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IriParsingElement__ctor_m67611053C6DE1A6F53D6095CB4783194C80A4D71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IriParsingElement_get_Enabled_m38900C22D2BD9F997C8672C6767169612EBF08FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IriParsingElement_get_Properties_m3C38B06DBC61F496AA82C0BA88DE25CBBD27290B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IriParsingElement_set_Enabled_m6DC66A4EFBE3FE8213D4AE054CCD7AA85524C173_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeysCollection__ctor_m8E73B12D23C242C0B41933D8500EB7B1C0F129CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalFileSettingsProvider_GetPreviousVersion_mD0419A3AF177D09738C31834319045F734A62293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalFileSettingsProvider_GetPropertyValues_m42B0EE32827B0F7BB3ED9DE15A812EC10869E709_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalFileSettingsProvider_Initialize_m80691D519DF9D3FB0777AFABD4E6E0241B6F76E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalFileSettingsProvider_Reset_mCF00DA7B126F1228D867F84D505058420DC920E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalFileSettingsProvider_SetPropertyValues_m923EAC651151464E230DEED0431E44DF59BEE19C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalFileSettingsProvider_Upgrade_mBCE0229FCC5F85D5E36FF283421BB860E6C1A520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalFileSettingsProvider__ctor_m8BE727C974D8BC36C066AA5625CADAEAD33E48B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalFileSettingsProvider_get_ApplicationName_m835BA6FC08B2D78DE2BFBCFCECA57CFF11C905B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalFileSettingsProvider_set_ApplicationName_m6CA4E855095340586A208D5C00D678978E438941_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MailSettingsSectionGroup__ctor_mFFA038C4F32A9759817D5594A268F81AF419BBDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MailSettingsSectionGroup_get_Smtp_m0F7928BB7DBA52A8F9E9179E53253B09AA079EC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleElement__ctor_mCCD0A5D194C60632528B4BA63E962FE233F61AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleElement_get_Properties_mEBD179E935049433045FC4F9AF5AB0E9E63ACF5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleElement_get_Type_m78354AC048D6F7D23D9790ABA43DCD57EF14F7B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleElement_set_Type_m10C51C31D050ED5A6B7265DDC60EA81A24B404E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectKeysEnumerator_MoveNext_m8800474BD1E5F24E4B88D1E33ABA793CB05DD540_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectKeysEnumerator_Reset_m548902A21282FB0766D833231BE700069DA316A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectKeysEnumerator_get_Current_m23AC7A2525995AC67EF4002996653748F33F6096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameValueFileSectionHandler_Create_m32DE75BD8E49555814B0D24CD9A0DAE8B40F90FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameValueFileSectionHandler__ctor_m63250F269D7C48D035A20DFB333D9C9F3FF286C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameValueSectionHandler_Create_mE8810940370107E7CF7DBC7E996C3EE5270941EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameValueSectionHandler__ctor_mA0807ACFE357646902FD4CFB819861AF9FAB13B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameValueSectionHandler_get_KeyAttributeName_m310CA964A5D3419C272B4D1D23EF00ADABD007A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameValueSectionHandler_get_ValueAttributeName_mD7DC41ABB787F7253E126B9ADFFA573F548F27B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup_GetSectionGroup_mB365D84045B47F37CBC51B19FA4FCF7789A40534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup_get_AuthenticationModules_m2266B92D456F596482FD58A66564A8C66CE0678E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup_get_ConnectionManagement_m9CBE0E2AA629807E547E71A42677666403F75B0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup_get_DefaultProxy_mDFB16FD78D6F16272B868DECAD4B2D6CA0029626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup_get_MailSettings_m061EF5997B2ADC36605125874A9EBCD336E155C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup_get_RequestCaching_m1C4D250A58F7E58E392D5293B850E54E516F1980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup_get_Settings_m9478377C3C07EF944C6B3428CE7DA1D90E0C05E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup_get_WebRequestModules_m55EBE5D63BE2FBF4FDB47B38AF880F9175EB40EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement_get_Enabled_m5BE4C7AE4BDE434A3E8FD4F6223461F721C1612E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement_set_Enabled_m4FCE96FC62C5580EBC92E771B79B56CDD0644540_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_get_AutoDetect_m203A63761F46B668596654C7E8515273D71AE7F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_get_BypassOnLocal_m2BC55997DC6E1235B4C09101DC2E902DC65E9225_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_get_ProxyAddress_mB27FA0151586BEAFFD124F1B24F25B4458C204F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_get_ScriptLocation_m35F6A6F61FAB09328F34D778713832B00BD5934C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_get_UseSystemDefault_m616785A6338FA35CC5D2FEBB0BAD0E7D3926449C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_set_AutoDetect_m67E9CE7EB0CF082F1BFB97B8C1803754C7E8329A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_set_BypassOnLocal_m13CDA5423DA7E5758EA8E542771B41A2715A3828_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_set_ProxyAddress_m2A6865758FC9D55DE5EC777057A84D250EEC825B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_set_ScriptLocation_m5546DE805D575177201B1E9CFF999EAF155E1DBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_set_UseSystemDefault_m561F1E68624D9FAB8086E4C43DA2FC814D18C07A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestCachingSection_DeserializeElement_m0FC0D231EA5E20DC3FC6F6850876A0447C2845EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestCachingSection_PostDeserialize_m9341CDB5931002D76B1CD38A4D60A732549A6A39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestCachingSection__ctor_m492CDBD5071E558E611DB3B464D3406BC468532D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestCachingSection_get_DefaultFtpCachePolicy_m6156411957E4B580665E24F646C55EEFB9C03D91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestCachingSection_get_DefaultHttpCachePolicy_mCC1951084BD1753884DC700D760B49F900D3F810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestCachingSection_get_DefaultPolicyLevel_mC5EC2F5BBC31CF2F1D5E9AC1EA1BA34A29E662FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestCachingSection_get_DisableAllCaching_m880E1629352AC0B9AF4C6DFD2A4FA472ACC7483B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestCachingSection_get_IsPrivateCache_m51BD06919A5DB7FBEBC7489725B16F6448B7F43A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestCachingSection_get_Properties_m380A033BF2302CEE41A9C4D05793205AFCAE1310_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestCachingSection_get_UnspecifiedMaximumAge_m68CAC1EB7E24A3DA7A5B9A21FAD75437F7B65CB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestCachingSection_set_DefaultPolicyLevel_mCE38163685856A75D3994722D7FBDFE2C8A04756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestCachingSection_set_DisableAllCaching_m7D9FD5D20A4972B47C1E7DD938888F49D392000A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestCachingSection_set_IsPrivateCache_m23E1E9635F532065DC3FF8D3D2209C960AFA2DAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestCachingSection_set_UnspecifiedMaximumAge_m383C4C9177D2D84452BA03C2434683291207DEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SchemeSettingElementCollection_CreateNewElement_mA032431A7C56B5F605E050D5E33F3393AFCBDEE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SchemeSettingElementCollection_GetElementKey_mD46CD378307C31244B90C0A50513BFF5CC00CC2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SchemeSettingElementCollection_IndexOf_mCC7A2A0024A1013647F08AC6BA20832C4318D79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SchemeSettingElementCollection__ctor_m2BA88E460B482C1412B8231D8222C413BB0A2F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SchemeSettingElementCollection_get_CollectionType_mDB6595916975862AB1BEF56275F44C6758800FDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SchemeSettingElementCollection_get_Item_m15ACF5ABEE01DBF0E12EE75BCC37148148D93D98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SchemeSettingElementCollection_get_Item_mFFE548F9225C86D2665B30BC9FCB0A328C7E858C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SchemeSettingElement__ctor_mB827797F0B9CE11E4CCD5045F60A96DFCFCEF476_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SchemeSettingElement_get_GenericUriParserOptions_m2CAB93EC6328391D0B2EACEE9D88F40302A7B9EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SchemeSettingElement_get_Name_mCF4A5DD0E6BE5D20CD735E516C05A496CE6E5EE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SchemeSettingElement_get_Properties_mD4403A6764B1B5FF29C5ED02693625607D824C44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_PostDeserialize_m902512F2562E0505AD50E93F1FB8F0B97C2B6727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_CheckCertificateName_m93EF583F234799FD3457FD347F064866FBA1C83F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_CheckCertificateRevocationList_m7A72730A6EB04CC11953189E20B9DA39B8B9D812_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_DnsRefreshTimeout_mCA5740E1DA151B21CF5D20E0B98C6139FACFDDB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_EnableDnsRoundRobin_m6A1AD9A4FE669AC18D9196910B524D2FFD6CC2C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_EncryptionPolicy_mF3805EB4253D2329369D5228A6D6FBA77FFBBDB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_Expect100Continue_m991850D531870E8360F07ADCF8C2F459584EC5AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_UseNagleAlgorithm_mBA586932F9FDE593CBE69B8D67A6A6ED48338165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_set_CheckCertificateName_m530AEAE236C8B6ADB4C372F8680F36EFAE663846_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_set_CheckCertificateRevocationList_m8958E8118076E0E7198754FA5C1F1529A98843DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_set_DnsRefreshTimeout_m2B262BA9203F2F413FB4DB5421D404DFC083B704_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_set_EnableDnsRoundRobin_m4E2674CD115E2089DDFA420AB61031435353D539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_set_EncryptionPolicy_m9FA825DC4CCF6D1B1A9D57DD68056D9665EAA2DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_set_Expect100Continue_mAE30C444FD6987C2389C5F89CF448D6F5EEBDBFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_set_UseNagleAlgorithm_m00139235D683F5DC58D2D954A7F39A0A4DD429E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingChangingEventArgs__ctor_m8DD7C0E3EAB83BA2860BE6AB3B823390CACC8657_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingChangingEventArgs_get_NewValue_m0F87D622C8DC0DCC2EBA7125CF5EFF2E92722AF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingChangingEventArgs_get_SettingClass_m8A2ABA01C8D7EA16716A1A3584EBB23FA7974EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingChangingEventArgs_get_SettingKey_m982F3CE2880592FBD740DC06FA01C9DEC0FAB4A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingChangingEventArgs_get_SettingName_m8CD7AD669BDECFD6525A0CC9975263486126A3DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingChangingEventHandler_BeginInvoke_m16E308828FFB41A42AACC6BCA2A486E36BAB84F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingChangingEventHandler_EndInvoke_m53EC36C901A1D849DED282157120DDD7F8FDABF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingChangingEventHandler_Invoke_m459F2ECF9F38448545C84F2B6A491E6E1D667A0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingChangingEventHandler__ctor_mBA2621F60A2289F0A6972DD224FE6C05110CA227_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElementCollection_Add_m01C390ED9310FE7A4E815626A2281CB340113447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElementCollection_Clear_m4383970C5677842CC1126C459A5EC8902391ED5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElementCollection_CreateNewElement_mD6BCECDBF37A956642E2F336BBB0F932556EAAE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElementCollection_GetElementKey_mE0CA4E55008EE0AA2B19B799556B56371E79199B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElementCollection_Get_mE5D2048A79642CC115CD969984F2318ED7C854A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElementCollection_Remove_mD093E229D90ED0DACBCD54246299D4AB177812DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElementCollection__ctor_mDC071BAB402D8585B6C9DFE00E329A2CECB6C2A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElementCollection_get_CollectionType_m111974AD7284918F456BC1716896830E29AF2EA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElementCollection_get_ElementName_m7D8F46BB15DE713DDF1A18152FBAD06DBC3C81DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElement__ctor_m5FDE2175DB5C3F6D4A0E7BBA5CFA73624D337F5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElement__ctor_mC6F16AFE9B5A1B7FC2508EDA31A352BE437D9E66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElement_get_Name_m4DB6E41CE420D3AAB18075B7828FAA7D464CC6C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElement_get_Properties_m59A5FBFF4C6BD9F986A07D8FB2FD91A3354535CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElement_get_SerializeAs_mAB42F99A936F3CF30929012B7E2C0A16410BD028_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElement_get_Value_m87104B214EB643D15CA15DBBCB666986BDD7ECF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElement_set_Name_mD867EC8187999C27FD7EDB871B1D6E4F763A1112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElement_set_SerializeAs_m8B7DDE2E8ADB2B17F4B839A6A8EF79EB4677DAB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingElement_set_Value_mBE9714167AC6668C648F9829E813C8E4F9983558_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingValueElement_DeserializeElement_mF8A5ABC1FA2EA1AA0E7862B7656636E8B6B3C048_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingValueElement_IsModified_mCE51DDDFBFFA80DE7B3E92911A3A998FB583673F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingValueElement_ResetModified_mEEF4C0F704B1CDBF4235A51E5B0ABF1220A34E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingValueElement_Reset_mD3E7B525D67AB20859E1EBFFF0EEFDCB16457BB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingValueElement_SerializeToXmlElement_m443D5FF91EEFF8DADF96B799A0ED77169DEDCA53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingValueElement_Unmerge_mD62E87BDDDDB6E556E02F62E37814088CEE4F069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingValueElement__ctor_m458D85BDC3AF9D4AB0123A07FC465D1F69445734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingValueElement_get_Properties_mCD91BA38A09C09C8662711B449DC239D241FC385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingValueElement_get_ValueXml_m8EDDC605E83C73141C6202AFFA7827BF1F3318C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingValueElement_set_ValueXml_m1CFA9EDC205BF19713DE59C43078E68B81F25231_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsAttributeDictionary__ctor_m3FC47B889CB5FEC5D86055C95A873E3808735CB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsAttributeDictionary__ctor_m68CED8CC25F088C9D6A294E240BDF592DD85AA02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsBase_Initialize_mAA3F185BDC6FC0ACE53BF48B10E3B7B8810CE18C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsBase_Save_mC2C9AFE95FBD3AE6DDD7EDCB4B963FA27E5C7CC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsBase_Synchronized_mFC15FE3105B39B5C98F8EACB1FC14A02C91FE78B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsBase__ctor_m1B51F925B74248D1CA24A1989E2EDA99E2FED8C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsBase_get_Context_mCAA6C5DD74B0C4F494247135BA3E15E4A1A23BAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsBase_get_IsSynchronized_m9E8CB0B4DF0FDE8C5CCEE648648DB298361AD657_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsBase_get_Item_m89E2FF524A6059C417C77DC53F9CCA238B6261F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsBase_get_Properties_mDFAC673BD89D0919C7BD4AB6F4C9A5D0E16219EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsBase_get_PropertyValues_m0EE56441FF39C2C39825AA688ADB25B850B3A984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsBase_get_Providers_mDA6FBF448F23836E69D0D32BA87B925B59FE19C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsBase_set_Item_m17EEF6ABC01A275425B10E0AF56BD3025B5DBFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsContext__ctor_m94CCD5EF845C832048404D2AFBB73E0045A1F17D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsDescriptionAttribute_get_Description_mE7D4E1CC752D61778AE9B44BAA3879F97EDFC3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsGroupDescriptionAttribute_get_Description_mB12BEC4B560D8CC17A0DC98B2A9C6B6F6704A8E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsGroupNameAttribute_get_GroupName_mD90DB047688B38EB5792486D8F01BA7AA7AC3DB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsLoadedEventArgs__ctor_mFD247F881034B6C0A9437D5DACADF6539128D73B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsLoadedEventArgs_get_Provider_mE335E7E0181BD3C900B116C1822168BBFB68106B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsLoadedEventHandler_BeginInvoke_mBF422646ABB323D1B2ECBF1C540B39DFA122AE02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsLoadedEventHandler_EndInvoke_mCA672DAB2277F5255328D65BAE57F29B26D15167_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsLoadedEventHandler_Invoke_m48CEE093BB5AA05567DAE32E937936BED945F7C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsLoadedEventHandler__ctor_mBAB35DCA30EAFD6D40566CD2930A97EF357E798D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsManageabilityAttribute_get_Manageability_m2490D01C3DA3622F323B761FD5E59412A8E287F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection_Add_mF1CDB181F10CD58975846165B120746A7E5F66AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection_Clear_m0CCAF2C1877F5916A4B796F7910875B44397452F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection_Clone_mA5ADADB742B2E42F31BC383490E35458156B161A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection_CopyTo_mE6919B85827B9C3353F08716B5B243E27F251650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection_GetEnumerator_mEB8EF3EAD28620107E54CB0D55B079574E40EE97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection_OnAddComplete_mE26A290C46FAB87813843D077137EDAA3C2BC555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection_OnAdd_m71D8A44002CAF012DD0CDE9ACB6F832F0D2D5C82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection_OnClearComplete_m9B49797B841C4FFA456256F63039E7E57EDCBBD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection_OnClear_m0CEFCBD60C8E513F23E3BB193A070F36D49E86EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection_OnRemoveComplete_mAE53EFB51614E87674E8ED5328C700B846E0AD62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection_OnRemove_mF21C3B0ACD4C19EACE867624C6AA8ECC65E15FA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection_Remove_m4F77A12167FA3ADFC3735CA6D3D6CCB481018024_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection_SetReadOnly_m325E469CC6F8643FFB2C229C4A21327C641BEFA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection__ctor_m8B8FA72E8E81C0279E732B947E4B83657C3C8260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection_get_Count_mA9A3D42971791B050022BFBCBD16E8D9B892359E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection_get_IsSynchronized_mC13D9B8E10B2514B56EB1A9C04FC919DA85352B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection_get_Item_m3A3B1DB9D807F575183FFCE86681E4E48F55456F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyCollection_get_SyncRoot_m11F7E7BD0002106BDB63B8FDB99FDC90C4687B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyIsReadOnlyException__ctor_m233783D5D2C712922A18830E6A9C4F4BB6817CE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyIsReadOnlyException__ctor_m88F217F7C73B320D48074558C94AA5EEC9418609_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyIsReadOnlyException__ctor_m93C834976EDE29C31E86FFBE29C70FD2CBDE9F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyIsReadOnlyException__ctor_mD1210736C31F0A28BAF6306665BFA5292CC42C9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyNotFoundException__ctor_m1601472DAB755C91F7CB425862103A3234FE4D82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyNotFoundException__ctor_m24F6F7CCC62652D18F2D33D70A4EBDCECD53BD7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyNotFoundException__ctor_m31829DC5B49B2121E897FB106F74EE3975AB4AE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyNotFoundException__ctor_m4966866223D7506DF141D026DF415F07B7DED7AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValueCollection_Add_m85F440CD77E39C29C2400176DDD45E561740ACB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValueCollection_Clear_mAC939B58FC610CB9AE53B58BB22042B81C80689A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValueCollection_Clone_mB7685B59701FECE120BD01A9798D814092946FA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValueCollection_CopyTo_m0025C27DD6EAAC1AF11D7231DAD3E6268208FDEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValueCollection_GetEnumerator_m6BCB6E2968B43B538577B5372E4DC164DFC5596F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValueCollection_Remove_m2F1D5A11493C781652747AFEEA309145EB829506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValueCollection_SetReadOnly_m013843DEAA416B815B498C1887487B9FF8427474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValueCollection__ctor_m5CF0F24B9B5C2E804CFECA73464D62C5BA2ECF34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValueCollection_get_Count_mC6CEF66A6A78E7B4F70C2DFD153B7DC805D6E934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValueCollection_get_IsSynchronized_m4B407CA1EA7A54435C20DC83D36813E729578EB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValueCollection_get_Item_m24D93D0AA81F38B111F41E593CCB335FAFB6CDF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValueCollection_get_SyncRoot_m467F9B6DA74CE3515BA6E4E6789BAE1448EE21E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValue__ctor_mB2CFE37E18F3D718C5B50FE3DD2D7C5E0ABB878E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValue_get_Deserialized_m7DA5BED44A2F6499EDCCABD7C09F2930012FE1CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValue_get_IsDirty_mC96D15C2EA5AC390032530772200569E2CFEA9E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValue_get_Name_mD76190962FEAEF33485F2A1E8F55751E1D42AD91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValue_get_PropertyValue_m627459CF6901EBBF997444B62D0BC50C0A901761_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValue_get_Property_m545831C09714369257C8A8FE35ABB849EA0A25BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValue_get_SerializedValue_m81E8DB9F1857ADCA1C896D510F580D66556C03AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValue_get_UsingDefaultValue_m7445C7B53E36E18C833DB74F27453C1DDFF595FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValue_set_Deserialized_m19AE9F8A5532C3B225B38DEBDE84C544A621FA42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValue_set_IsDirty_m0A077DC0E477DD36281CA1F9618D52E8EF9067C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValue_set_PropertyValue_mE3163F9DB2FC916CF5610CE80854DDCF7D2D2329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyValue_set_SerializedValue_mBD39059387052B000801D2B87AE502CE85F458A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyWrongTypeException__ctor_m0071321F3413E22D52E003A4E9F7C8A1272172CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyWrongTypeException__ctor_m018C6B8E4E1D76B1D171F0000995543731FCF1F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyWrongTypeException__ctor_m588E5032E696D816EE7C25999421D94C88551787_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsPropertyWrongTypeException__ctor_mD5370D3BAF61F0E38AF7E79795135298A8CA758D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty__ctor_m43F58F4170F26602C5C52130A900254529B7B09F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty__ctor_mE88BCE75FEEE68C18C0584E32537B10A5A0AFF83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty__ctor_mEBC5ACA5A8FDAB8E6D2206E5CACE5CE90D0F8D43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty_get_Attributes_m8008A385B4D1240563FD56C7A6BBD310682A7820_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty_get_DefaultValue_m572F8146FACA8A64455B0E63A27711D6747D095A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty_get_IsReadOnly_m45C0868ACACBB3C1454D815A0C45A4B7D94A9C23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty_get_Name_m4969F3A7B80742AD828C2A984041D21EE8868630_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty_get_PropertyType_m07E906202B0C0148B6D80BE884EC9DDA3A9B8486_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty_get_Provider_m8F54310F4F9EE73CDB3FFBD2C831BAA6363082DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty_get_SerializeAs_mA52409456773D43A4704EC931CCEE3A6821B1DDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty_get_ThrowOnErrorDeserializing_mE1D7ECC65549BE31A1B1B5E1F4B2E47CFF5FBAF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty_get_ThrowOnErrorSerializing_mA876498CFFC334E6CABC034DF1DBB012CB465895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty_set_DefaultValue_mAA8C8454F1E1B99B2D340281825703A502BCBE16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty_set_IsReadOnly_mE3192DE88AF1D611A6C6C0A42E37F3AB2CF7EDEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty_set_Name_m2C8493B19A3082FBCAE8CBED5C8B7C72C2AC2F8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty_set_PropertyType_m1814CDF848CEDC2EE3858B0E56074087390C3C97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty_set_Provider_m7CE138B78E7F3B54F0C506120A6A932F3E0A1CDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty_set_SerializeAs_mDEDB4FCCDF6E45CA8256AF828331168466714590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty_set_ThrowOnErrorDeserializing_mBAD5795A17C84132EA194A154575401A62C86D04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProperty_set_ThrowOnErrorSerializing_m10E96E67341F50521FCF240DADD1C876DF541C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProviderAttribute_get_ProviderTypeName_m20C4D8F8ECE1569879F0B4EE782E36ED94928B75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProviderCollection_Add_mB6E74B5BBA28AF9971E600BBB53A2DBC06ECC92F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProviderCollection__ctor_m2A55C87D8FDB77D6BAFD49A923C6DC6ADE07DD96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProviderCollection_get_Item_m9617E89229F4CA7BE76A5ACF22D69D993205D08F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsProvider__ctor_m4288CD75EEBF4F871713B0482AF4D619E167BA0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSavingEventHandler_BeginInvoke_mA74755BEDC2D983D011C05B657F34A2F0531C0D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSavingEventHandler_EndInvoke_mDDA425B8F9409570EA14D62B7448EBAD15BA77BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSavingEventHandler_Invoke_mF9F1A5C193A58CB76D0AB0B5403DA4110E0F049A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSavingEventHandler__ctor_mAFD8C606C5BEF2F9D879179E3568C882B1A89565_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_HttpListener_mED29DE54BD03661334A79DCD3CF4B09E0C851CE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_HttpWebRequest_mBE81AA51E269D29FE517F6B8F475FB52984F2A23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_Ipv6_mA006DD8D732839D151E44C1B68C05309937AC30E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_PerformanceCounters_mCFA1A5F427054AE2AA39602892AC6F0BE7FFCD53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_ServicePointManager_m07C0AE14661EC5866ECF56566C7C36831F9D597A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_Socket_mE77BF68792B0B1479FCB1E349AD470A8A9DCE171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_WebProxyScript_m466A2A9AA8357CBF233FCDEF201B2B5EFBAAAAF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_WebUtility_m2D1E31AA087C50BB1CCE762E516253AB2D6BD3B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_WindowsAuthentication_m10A9B3260BB9FFF3213A77218772DFFC4F8B9BDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSerializeAsAttribute_get_SerializeAs_m22095AD8156A9F017C6ED81ED5B5741730D061BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingleTagSectionHandler_Create_m85AFEB25B7962390CF8EA87CC4C1EDE26B6004E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingleTagSectionHandler__ctor_m46BF030D906E598EF83F75A4BFC7887151130069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_PostDeserialize_mB36F488C3C6EE6687771C8034D465A2BB34BE05D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement__ctor_mB26BD971ACC48BEB0502EF44C0A217D1CF0F7DAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_get_ClientDomain_mDD748DA4546EEAC364DF3D0EA52103242A10B540_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_get_DefaultCredentials_m393CA94C583AF1F7B76C3614F4126521A4D596D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_get_EnableSsl_m9D18C93E041C80264B70D0FDC7F33C096A9D5D8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_get_Host_m6DB435ADE75A4191158438AE75C6C575D1EEE063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_get_Password_mC0567A10342566402AA41044114D88018C5C8C96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_get_Port_mCC464CCA12CB0571E3681EEBB16FD864B6AA279C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_get_Properties_m0E1FAB91F381B508249EFBA133427B2EC825E699_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_get_TargetName_mABBA1E06217856B27C2EEF1D297A455142836183_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_get_UserName_mC94AD57F2D59D6F648241ABB5C8894B55EAE5813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_set_ClientDomain_m24922A673D90DAF8D55A3D513EAC0814DB3AF9EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_set_DefaultCredentials_m5FAB983BCEA2BF284244A8F02A36A7578A2D55EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_set_EnableSsl_m02112895F4E257233DC3D1EA55A2AEABA9193243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_set_Host_mD092F4D663919BEA374D640237CADB0432B3F649_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_set_Password_m41CDD86CB823C73583C2AEB2511AF6F0A437A996_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_set_Port_m6F592A8F591F25925168FDFE666442C20DADEBA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_set_TargetName_mCDC35C44C1C53AD6396D4C686FE8E3C36292BFEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpNetworkElement_set_UserName_m8B6A970B7991A7723051BA3B0F1627665E2B355B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpSection__ctor_m44D8A85D0BDE374C13600FC10F894C9EDC236780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpSection_get_DeliveryFormat_mC6B57D103E455EED8C201B8BEA37BC8761DD657E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpSection_get_DeliveryMethod_m1EA4FB981A8EAC587415B2CB7F20A575A1DFE7A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpSection_get_From_mC132CA847A4D65AB7CED0A9401F12C4943DDBECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpSection_get_Network_m383111DF22672E3209450D7AD1460BBC774F8866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpSection_get_Properties_m1C2786FC180A4B21AABF7CF76CC1F4050502C4CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpSection_get_SpecifiedPickupDirectory_m3C08952E9E5C1C7EF94907C3EAFD56B4B5A55B95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpSection_set_DeliveryFormat_m5BCE38E659F0FEFD98A51A24493AE11B1434A79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpSection_set_DeliveryMethod_mAFD74D0B7B0AFFA08ADC26963925004F12D437C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpSection_set_From_m79776D970AEDE7CF8AFF8355B9FACE301A01AA43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpSpecifiedPickupDirectoryElement__ctor_m778F796D9EDE9516D87202371364C21829EF7B0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpSpecifiedPickupDirectoryElement_get_PickupDirectoryLocation_m8FF4EBED8D7966329F958F8C69EEBB98F6B2279F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpSpecifiedPickupDirectoryElement_get_Properties_m2F90A06B9600227CB386C97264FBBCE4AC8146BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmtpSpecifiedPickupDirectoryElement_set_PickupDirectoryLocation_m14A0A9864A55416BB0F0F1E02003A61382D14C76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_PostDeserialize_m5312655E1CFAC9B0B24769CFFA11CE8DC5D6A366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_get_AlwaysUseCompletionPortsForAccept_m462DFDB23E0D4C28280C3E92AF9ABE0D928F8FA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_get_AlwaysUseCompletionPortsForConnect_m3F1B3E197EFAF517E0F2E6D4FCA0903E6DDAE47E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_get_IPProtectionLevel_m4743BA5CCFCC0478CB43259DC834221E7E1C7F1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_set_AlwaysUseCompletionPortsForAccept_m2B8D5D91CCF934A2081701977A6C4149E7EA35E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_set_AlwaysUseCompletionPortsForConnect_m617DAE11E817A18FFA4C0EB99F2181EDFD23B822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_set_IPProtectionLevel_mF34B2FCCAB45AAC1DDE6D5959AED616F864B190D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpecialSettingAttribute_get_SpecialSetting_m793F1C10FFE78117B0715B2D803D8A8EF839D56C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandardOleMarshalObject__ctor_m61A7F765BCC9E46F7C0448F1F682FFE3979FA73D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UriSection__ctor_m08251EAB0CF500E0EA505D38CDF46E08FC44F800_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UriSection_get_Idn_m1C586878C9C605F3E6529F1305CCC7B14D8413B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UriSection_get_IriParsing_m6F2BFD044D235FF7953B78ADF881055125B227F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UriSection_get_Properties_mBD0B9A9124F8992B54BEC7E0C55D32EFE09A7C0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UriSection_get_SchemeSettings_mE045C1DAB803F6C7E58154A44D085515439053F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UserSettingsGroup__ctor_mB04FF355CC357373890B7D076355D9D6457C970F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement_PostDeserialize_m42815AE19FB06043AFE775AA84B683B16B503246_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement_get_AutoConfigUrlRetryInterval_m29A4613754E6586CD3409A68C63266F3E42D810F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement_get_DownloadTimeout_m4FA990F095B2CD306CD65205A492D5688959F899_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement_set_AutoConfigUrlRetryInterval_m4974ADE6DBA722887617C6678F7862EAA85F5AC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement_set_DownloadTimeout_m9064C0685C3EA7CE727C7E823019D015C9065363_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection_Add_m1B266D818C6F5A8999F457BB34BA30305739477E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection_Clear_m1405A4DF1AC009FEDABC6038C139BEF305CED96C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection_CreateNewElement_m397F68DF0A36AB391A404123CF8CF510CC03825E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection_GetElementKey_m431F14EFB3211279E674EEF1BA70479934D48474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection_IndexOf_mDA01842DD42B18BAA3497D46EA6A1BEFA0625D59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection_RemoveAt_mCFD44DD167CEBA89E629FDB1C8159BF95ECCBF1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection_Remove_m03E0DABEA39A2EDB435AE2BEC0D13AC83A2AC776_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection_Remove_m7DD3D64ED15E14AF0169514FC2565DDE46D8E312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection_get_Item_m2E1FD419BDC43901B86273EAAE12C1192C0942F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection_get_Item_mE8ADB47358C80584A9A5C8D829CDDC0572BA28F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection_set_Item_mBFB801CF7ECCDC4C29FDFE98B69BDFC79D19B62C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection_set_Item_mC5E2D50F75EA6DEE744191B58334F92CEFB796BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElement__ctor_m33C495B62224AD7B42D0C51A80BEDA02282C1EA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElement__ctor_m3A1CA3F314D9999776377B46359BBCA244C16E81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElement__ctor_m4324DC3F3C281570B8F38DE3B11CC48480B8E5E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElement_get_Prefix_m9ABF6D76655D4A853F97AB945A06C0C989204225_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElement_get_Properties_m784E006115FDEDCE5C8830D1571101F0E391B82C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElement_get_Type_m735160844499572763B638B083544BF83BFC76FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElement_set_Prefix_mB0173D91DEDE335215B6D453443E854BE546B4BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElement_set_Type_m41DF196D0F67E8A331C6B9FF0DEC932023B777A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection_InitializeDefault_mE69CB230862709EEB90114E19D8465272EEA3CB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection_PostDeserialize_m8DF8F4A7D4E016EA0539FC8DB42BD137CA3C0ED0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection_get_WebRequestModules_m220E91992D98AAE2DF929B9F22387E1A96CC0549_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebUtilityElement__ctor_m5456C0D33DA65AE83E07F4B06CD2F4922FB4187C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebUtilityElement_get_Properties_m4D37738DB7CEE8FD598A3DBE137857166E16B20C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebUtilityElement_get_UnicodeDecodingConformance_mBBCDC2E53F9945D3E1F454810DDF5D665BCA4532_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebUtilityElement_get_UnicodeEncodingConformance_mBFEB047F95922D312EBBC42CC4D666272E179796_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebUtilityElement_set_UnicodeDecodingConformance_m8AE1BA3CC9E814C33D258DF3DDCFD364EFD893C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebUtilityElement_set_UnicodeEncodingConformance_m00E9B06E1D664543F83CDB2482B65ADE027D604C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsAuthenticationElement__ctor_mF5E036D7DF3EFB966AC0D44779A323A31B93D4A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsAuthenticationElement_get_DefaultCredentialsHandleCacheSize_m8EC1415284E9EC0E1EECC9EFFEA6FA85D5CBD256_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsAuthenticationElement_get_Properties_mB55BBFB85DF91400C178178E53FA090A5226A5A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsAuthenticationElement_set_DefaultCredentialsHandleCacheSize_mB0B1D1EF070852435E4FE672B19FD79FA22C6158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_com;
struct MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_pinvoke;
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.AppSettingsReader
struct AppSettingsReader_t5319223C8B108FEDFE14AA9DBC18C16C68E62F8F  : public RuntimeObject
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Collections.CaseInsensitiveComparer
struct CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281  : public RuntimeObject
{
	// System.Globalization.CompareInfo System.Collections.CaseInsensitiveComparer::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_0;
};

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F  : public RuntimeObject
{
	// System.Globalization.CompareInfo System.Collections.CaseInsensitiveHashCodeProvider::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_0;
};

// System.Security.CodeAccessPermission
struct CodeAccessPermission_t6BE947E3C453E05B6C9DC30B8FA33A29DEB5209A  : public RuntimeObject
{
};

// System.Collections.Specialized.CompatibleComparer
struct CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E  : public RuntimeObject
{
	// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::_comparer
	RuntimeObject* ____comparer_0;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::_hcp
	RuntimeObject* ____hcp_2;
};

// System.Configuration.Configuration
struct Configuration_t76590F71F1AB7F5CC4BCC02EC0CDBF4449CDAEC1  : public RuntimeObject
{
};

// System.Configuration.ConfigurationElement
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E  : public RuntimeObject
{
};

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93  : public RuntimeObject
{
};

// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863  : public RuntimeObject
{
};

// System.Configuration.ConfigurationSettings
struct ConfigurationSettings_t57AE17F7C36F57E13C36525C73CAAC1063BF5C9E  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7  : public RuntimeObject
{
};

// System.Configuration.DictionarySectionHandler
struct DictionarySectionHandler_t9116E1380B3B7888E01C23FF1A97D809DC982868  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

// System.Configuration.IgnoreSectionHandler
struct IgnoreSectionHandler_t1CCE5D49101273B02080F629ECC0C3043AB3C9F2  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC  : public RuntimeObject
{
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_8;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____entriesArray_9;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_10;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____entriesTable_11;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* ____nullKeyEntry_12;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::_keys
	KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* ____keys_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____serializationInfo_14;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_15;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject* ____syncRoot_16;
};

// System.Configuration.NameValueFileSectionHandler
struct NameValueFileSectionHandler_t61902306D7C2879596427206C06D2BD821990A1F  : public RuntimeObject
{
};

// System.Configuration.NameValueSectionHandler
struct NameValueSectionHandler_t17CD98BF7CED41908FB5117CA6E34B1174C824FF  : public RuntimeObject
{
};

// System.Configuration.Provider.ProviderBase
struct ProviderBase_tD7C429AEFAAEC072F1365F93DFF92E394A07B4D3  : public RuntimeObject
{
};

// System.Configuration.Provider.ProviderCollection
struct ProviderCollection_tBEA3037B4CB4B36E6449E5D7225A7D21807D216D  : public RuntimeObject
{
};

// System.Security.SecurityElement
struct SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55  : public RuntimeObject
{
	// System.String System.Security.SecurityElement::text
	String_t* ___text_0;
	// System.String System.Security.SecurityElement::tag
	String_t* ___tag_1;
	// System.Collections.ArrayList System.Security.SecurityElement::attributes
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___attributes_2;
	// System.Collections.ArrayList System.Security.SecurityElement::children
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___children_3;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.Configuration.SettingsBase
struct SettingsBase_t1ECBB76CB08D593098166B1C8D62053E51997BEF  : public RuntimeObject
{
};

// System.Configuration.SettingsProperty
struct SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7  : public RuntimeObject
{
};

// System.Configuration.SettingsPropertyCollection
struct SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3  : public RuntimeObject
{
};

// System.Configuration.SettingsPropertyValue
struct SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19  : public RuntimeObject
{
};

// System.Configuration.SettingsPropertyValueCollection
struct SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262  : public RuntimeObject
{
};

// System.Configuration.SingleTagSectionHandler
struct SingleTagSectionHandler_t7FACC290CDE2B6DA919D09E1B05820BBA68C95EC  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
};

// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD  : public RuntimeObject
{
};

// System.Xml.XmlWriter
struct XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F  : public RuntimeObject
{
};

// System.IO.ChunkedMemoryStream/MemoryChunk
struct MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284  : public RuntimeObject
{
	// System.Byte[] System.IO.ChunkedMemoryStream/MemoryChunk::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_0;
	// System.Int32 System.IO.ChunkedMemoryStream/MemoryChunk::_freeOffset
	int32_t ____freeOffset_1;
	// System.IO.ChunkedMemoryStream/MemoryChunk System.IO.ChunkedMemoryStream/MemoryChunk::_next
	MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* ____next_2;
};

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81  : public RuntimeObject
{
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::_coll
	NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* ____coll_0;
};

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2  : public RuntimeObject
{
	// System.String System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::Key
	String_t* ___Key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::Value
	RuntimeObject* ___Value_1;
};

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator
struct NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0  : public RuntimeObject
{
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_pos
	int32_t ____pos_0;
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_coll
	NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* ____coll_1;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_version
	int32_t ____version_2;
};

// System.Memory`1<System.Byte>
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_38;
};

// System.Threading.Tasks.ValueTask`1<System.Int32>
struct ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 
{
	// System.Object System.Threading.Tasks.ValueTask`1::_obj
	RuntimeObject* ____obj_1;
	// TResult System.Threading.Tasks.ValueTask`1::_result
	int32_t ____result_2;
	// System.Int16 System.Threading.Tasks.ValueTask`1::_token
	int16_t ____token_3;
	// System.Boolean System.Threading.Tasks.ValueTask`1::_continueOnCapturedContext
	bool ____continueOnCapturedContext_4;
};

// System.Configuration.ApplicationSettingsBase
struct ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605  : public SettingsBase_t1ECBB76CB08D593098166B1C8D62053E51997BEF
{
};

// System.Configuration.ApplicationSettingsGroup
struct ApplicationSettingsGroup_t6CBD33D350E767299BFAE5CD39F063885DA1DAD0  : public ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863
{
};

// System.Net.Configuration.AuthenticationModuleElement
struct AuthenticationModuleElement_tA0344044E429FCDA9A085EAF4A1471720CB5DB17  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Net.Configuration.BypassElement
struct BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.ComponentModel.CancelEventArgs
struct CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Boolean System.ComponentModel.CancelEventArgs::<Cancel>k__BackingField
	bool ___U3CCancelU3Ek__BackingField_1;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Configuration.ConfigurationSection
struct ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.ConnectionManagementElement
struct ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Configuration.DefaultSettingValueAttribute
struct DefaultSettingValueAttribute_t09EF0413EA1808C230248DF4AA5F706565E2BABB  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Net.DnsPermission
struct DnsPermission_tEE0908CF002881CB0021F55AF338730B91661CDE  : public CodeAccessPermission_t6BE947E3C453E05B6C9DC30B8FA33A29DEB5209A
{
};

// System.Net.Configuration.FtpCachePolicyElement
struct FtpCachePolicyElement_t12FAC54618469F19DD0D3AF0486F173A540D7F2D  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.HttpCachePolicyElement
struct HttpCachePolicyElement_t6DC6A3BE41501894BA9B880CD58048B6AC7929D7  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.HttpListenerElement
struct HttpListenerElement_t559D7C83361157D2F59976CF87A8D8CD7DC5CF27  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.HttpListenerTimeoutsElement
struct HttpListenerTimeoutsElement_tDA5910F568E8832AC1B99AE56E79902B0451406E  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.HttpWebRequestElement
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Configuration.IdnElement
struct IdnElement_t1600A7D1444637603C2BC0E9BEFC45D7600D0701  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Net.Configuration.Ipv6Element
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Configuration.IriParsingElement
struct IriParsingElement_t86D7FA77708517AE2C872C0066EF231A7640D03A  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.MailSettingsSectionGroup
struct MailSettingsSectionGroup_tF4FBFB4BD7658F6EB57894999F3B7F467F7C8426  : public ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863
{
};

// System.Net.Configuration.ModuleElement
struct ModuleElement_t5FB2A9AA5D7E90EE133790B8E2D805559A93EF96  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7  : public NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC
{
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____all_18;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____allKeys_19;
};

// System.Net.Configuration.NetSectionGroup
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F  : public ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863
{
};

// System.Configuration.NoSettingsVersionUpgradeAttribute
struct NoSettingsVersionUpgradeAttribute_t1C90B0358F5B27707CDA7BE9411B146C4B98596A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Net.Configuration.PerformanceCountersElement
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String System.ComponentModel.PropertyChangedEventArgs::_propertyName
	String_t* ____propertyName_1;
};

// System.Net.Configuration.ProxyElement
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Configuration.SchemeSettingElement
struct SchemeSettingElement_t381D9E6F03CAFE26FA63025881BCE86299E390CB  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Security.Permissions.SecurityAttribute
struct SecurityAttribute_tB79F828B77F1B081DD57CEF810E748C7C871D7C5  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Security.Permissions.SecurityAction System.Security.Permissions.SecurityAttribute::m_Action
	int32_t ___m_Action_0;
	// System.Boolean System.Security.Permissions.SecurityAttribute::m_Unrestricted
	bool ___m_Unrestricted_1;
};

// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Configuration.SettingAttribute
struct SettingAttribute_t3B8E2A245E0945C8B8622310C24385C38D1D2DD4  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Configuration.SettingElement
struct SettingElement_tDCCC43AE6FDABB9B4DBE1482582ED201B3D39377  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Configuration.SettingValueElement
struct SettingValueElement_tC085F18817546877AFD1369659F50EB679700B42  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Configuration.SettingsAttributeDictionary
struct SettingsAttributeDictionary_t5830B52750D090766BE7A83FF116CD223DBB511D  : public Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D
{
};

// System.Configuration.SettingsContext
struct SettingsContext_tE2A8637CE8FECB35A8FB44136C440FA37ACD2AFE  : public Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D
{
};

// System.Configuration.SettingsDescriptionAttribute
struct SettingsDescriptionAttribute_t52FAAE809A9E9CDD1047A13FB5F88D2027E73189  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Configuration.SettingsGroupDescriptionAttribute
struct SettingsGroupDescriptionAttribute_t9762F0903C14A794A754EDCA52C127B266ABCD23  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Configuration.SettingsGroupNameAttribute
struct SettingsGroupNameAttribute_t36D45534354DF5B010238F82C267C7B11ECDD109  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Configuration.SettingsLoadedEventArgs
struct SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
};

// System.Configuration.SettingsManageabilityAttribute
struct SettingsManageabilityAttribute_t7FECB07177F7823FFBFCC4A747C3202B0B3C8115  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Configuration.SettingsProvider
struct SettingsProvider_t47362C2066368337AE4B0802A9463B9BF9629653  : public ProviderBase_tD7C429AEFAAEC072F1365F93DFF92E394A07B4D3
{
};

// System.Configuration.SettingsProviderAttribute
struct SettingsProviderAttribute_tA4B17535ADC920B0D9B0E2C5F3F4DC14C37648D1  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Configuration.SettingsProviderCollection
struct SettingsProviderCollection_tA874FD5CCC7B667159CCFF34D055516DBAAD39FF  : public ProviderCollection_tBEA3037B4CB4B36E6449E5D7225A7D21807D216D
{
};

// System.Configuration.SettingsSerializeAsAttribute
struct SettingsSerializeAsAttribute_tBDD4F5B8C3633C9EE50BB457E0388A13B12B7107  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Net.Configuration.SmtpNetworkElement
struct SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.SmtpSpecifiedPickupDirectoryElement
struct SmtpSpecifiedPickupDirectoryElement_tB884FF2CF82666E01FEB0C50F909B68367868F9D  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.SocketElement
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Configuration.SpecialSettingAttribute
struct SpecialSettingAttribute_t6A0390FA21E4837E2581530B6716201FA4D9D323  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Runtime.InteropServices.StandardOleMarshalObject
struct StandardOleMarshalObject_tB4B30E2C7691AC07C48EA8F43E05528759107D1A  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Configuration.UserSettingsGroup
struct UserSettingsGroup_t7B3574CA02AC6CD059BA1CE31517B50071796B94  : public ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863
{
};

// System.Threading.Tasks.ValueTask
struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F 
{
	// System.Object System.Threading.Tasks.ValueTask::_obj
	RuntimeObject* ____obj_1;
	// System.Int16 System.Threading.Tasks.ValueTask::_token
	int16_t ____token_2;
	// System.Boolean System.Threading.Tasks.ValueTask::_continueOnCapturedContext
	bool ____continueOnCapturedContext_3;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.WebRequestModuleElement
struct WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.WebUtilityElement
struct WebUtilityElement_t6FA063D8F157F6F4F73ED8E5006213C44591C1E0  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.WindowsAuthenticationElement
struct WindowsAuthenticationElement_tC96EDD442C67FE43F7F3B3EDC9BAFB7C9009E13B  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Xml.XmlDocument
struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
};

// System.Xml.XmlTextReader
struct XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B  : public XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD
{
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct __StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800__padding[10];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t32C4FAAB522AC6551334F4E397A28A8CF95552DD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t32C4FAAB522AC6551334F4E397A28A8CF95552DD__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
struct __StaticArrayInitTypeSizeU3D14_t5A7362C844CE0A2E27C9434CD029FA82339CFF26 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t5A7362C844CE0A2E27C9434CD029FA82339CFF26__padding[14];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2024
struct __StaticArrayInitTypeSizeU3D2024_t1536C3F57703805DD50451E5E64D6F90250E3909 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2024_t1536C3F57703805DD50451E5E64D6F90250E3909__padding[2024];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_tD401FB34D66ACCFAD94A32F8001469D038F350C8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_tD401FB34D66ACCFAD94A32F8001469D038F350C8__padding[256];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct __StaticArrayInitTypeSizeU3D44_tDBE82A359520A01FA0C117855F1C3185BA1AEB0F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_tDBE82A359520A01FA0C117855F1C3185BA1AEB0F__padding[44];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5
struct __StaticArrayInitTypeSizeU3D5_tD269A738C32D0AEFDEAC103C3804F6E70D7A033A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5_tD269A738C32D0AEFDEAC103C3804F6E70D7A033A__padding[5];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=506
struct __StaticArrayInitTypeSizeU3D506_tFCED12C50099B3C9105966D1231E379030BFBE06 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D506_tFCED12C50099B3C9105966D1231E379030BFBE06__padding[506];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct __StaticArrayInitTypeSizeU3D6_tA4881AF2477A5E66902A636B307315D4FA964D8D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_tA4881AF2477A5E66902A636B307315D4FA964D8D__padding[6];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=65
struct __StaticArrayInitTypeSizeU3D65_t0911A4F45967796E1FAE2E633D7903FDB8DACCD2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D65_t0911A4F45967796E1FAE2E633D7903FDB8DACCD2__padding[65];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct __StaticArrayInitTypeSizeU3D9_tE2A1104C752B51004E61139D4615CC263948C4A7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_tE2A1104C752B51004E61139D4615CC263948C4A7__padding[9];
	};
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3  : public RuntimeObject
{
};

// System.Configuration.ApplicationScopedSettingAttribute
struct ApplicationScopedSettingAttribute_tFDF4A38023B8C450903F1A6ED55BA0BB9DA148C4  : public SettingAttribute_t3B8E2A245E0945C8B8622310C24385C38D1D2DD4
{
};

// System.Net.Configuration.AuthenticationModuleElementCollection
struct AuthenticationModuleElementCollection_t9DA54FD43022F3E9733ECB60C2B93DD11E17E8D2  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.AuthenticationModulesSection
struct AuthenticationModulesSection_t3A675E838686A766DCE07BEAB36EA46A62316C69  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.IO.ChunkedMemoryStream
struct ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.ChunkedMemoryStream/MemoryChunk System.IO.ChunkedMemoryStream::_headChunk
	MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* ____headChunk_5;
	// System.IO.ChunkedMemoryStream/MemoryChunk System.IO.ChunkedMemoryStream::_currentChunk
	MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* ____currentChunk_6;
	// System.Int32 System.IO.ChunkedMemoryStream::_totalLength
	int32_t ____totalLength_7;
};

// System.Configuration.ClientSettingsSection
struct ClientSettingsSection_t0E32E0B5F47E3A0002AACBE5430ADFFBC98D08B3  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Security.Permissions.CodeAccessSecurityAttribute
struct CodeAccessSecurityAttribute_tE7EEC93676A4CB9CEE9050F6CC2B97E1C2E210CE  : public SecurityAttribute_tB79F828B77F1B081DD57CEF810E748C7C871D7C5
{
};

// System.Configuration.ConfigXmlDocument
struct ConfigXmlDocument_tFAB7D1C598C58E82F4ACA33C01010D5FA557E7C1  : public XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B
{
};

// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.ConnectionManagementSection
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.IO.Compression.DeflateStream
struct DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___base_stream_5;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode_6;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen_7;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed_8;
	// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStream::native
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* ___native_9;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.IO.Compression.GZipStream
struct GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::_deflateStream
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* ____deflateStream_5;
};

// System.Configuration.LocalFileSettingsProvider
struct LocalFileSettingsProvider_tB7C50B1046CB3E0D047401CAA0F15BA685E3FDAA  : public SettingsProvider_t47362C2066368337AE4B0802A9463B9BF9629653
{
};

// System.Net.Configuration.RequestCachingSection
struct RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// System.Configuration.SchemeSettingElementCollection
struct SchemeSettingElementCollection_tF4E9F58B4F8A8303363BEEE235E2F7954884D179  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Configuration.SettingChangingEventArgs
struct SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF  : public CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6
{
};

// System.Configuration.SettingElementCollection
struct SettingElementCollection_t36782DF73BF1703C70B7C094DC43E3F4D6AF40B6  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.SettingsSection
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Net.Configuration.SmtpSection
struct SmtpSection_tB52CE0EE7FAD32EBBB0C19ECD42AEF95D5CF5DBC  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Configuration.UriSection
struct UriSection_tA65A84F103669739EEE6C50C25A9374FA23C66F6  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Configuration.UserScopedSettingAttribute
struct UserScopedSettingAttribute_t056010F834245FA728C1118C82AC7BE7611EE92B  : public SettingAttribute_t3B8E2A245E0945C8B8622310C24385C38D1D2DD4
{
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	// System.IntPtr System.Array/RawData::Bounds
	intptr_t ___Bounds_0;
	// System.IntPtr System.Array/RawData::Count
	intptr_t ___Count_1;
	// System.Byte System.Array/RawData::Data
	uint8_t ___Data_2;
};
// Native definition for P/Invoke marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
// Native definition for COM marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760  : public RuntimeObject
{
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_state
	RuntimeObject* ___async_state_0;
	// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::handle
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* ___handle_1;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_delegate
	RuntimeObject* ___async_delegate_2;
	// System.IntPtr System.Runtime.Remoting.Messaging.AsyncResult::data
	intptr_t ___data_3;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::object_data
	RuntimeObject* ___object_data_4;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::sync_completed
	bool ___sync_completed_5;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::completed
	bool ___completed_6;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::endinvoke_called
	bool ___endinvoke_called_7;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_callback
	RuntimeObject* ___async_callback_8;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::current
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___current_9;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::original
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___original_10;
	// System.Int64 System.Runtime.Remoting.Messaging.AsyncResult::add_time
	int64_t ___add_time_11;
	// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::call_message
	MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601* ___call_message_12;
	// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::message_ctrl
	RuntimeObject* ___message_ctrl_13;
	// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::reply_message
	RuntimeObject* ___reply_message_14;
	// System.Threading.WaitCallback System.Runtime.Remoting.Messaging.AsyncResult::orig_cb
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___orig_cb_15;
};
// Native definition for P/Invoke marshalling of System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshaled_pinvoke
{
	Il2CppIUnknown* ___async_state_0;
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke ___handle_1;
	Il2CppIUnknown* ___async_delegate_2;
	intptr_t ___data_3;
	Il2CppIUnknown* ___object_data_4;
	int32_t ___sync_completed_5;
	int32_t ___completed_6;
	int32_t ___endinvoke_called_7;
	Il2CppIUnknown* ___async_callback_8;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___current_9;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___original_10;
	int64_t ___add_time_11;
	MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_pinvoke* ___call_message_12;
	RuntimeObject* ___message_ctrl_13;
	RuntimeObject* ___reply_message_14;
	Il2CppMethodPointer ___orig_cb_15;
};
// Native definition for COM marshalling of System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshaled_com
{
	Il2CppIUnknown* ___async_state_0;
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com* ___handle_1;
	Il2CppIUnknown* ___async_delegate_2;
	intptr_t ___data_3;
	Il2CppIUnknown* ___object_data_4;
	int32_t ___sync_completed_5;
	int32_t ___completed_6;
	int32_t ___endinvoke_called_7;
	Il2CppIUnknown* ___async_callback_8;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___current_9;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___original_10;
	int64_t ___add_time_11;
	MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_com* ___call_message_12;
	RuntimeObject* ___message_ctrl_13;
	RuntimeObject* ___reply_message_14;
	Il2CppMethodPointer ___orig_cb_15;
};

// System.IO.Compression.DeflateStreamNative
struct DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD  : public RuntimeObject
{
	// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite System.IO.Compression.DeflateStreamNative::feeder
	UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* ___feeder_0;
	// System.IO.Stream System.IO.Compression.DeflateStreamNative::base_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___base_stream_1;
	// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle System.IO.Compression.DeflateStreamNative::z_stream
	SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___z_stream_2;
	// System.Runtime.InteropServices.GCHandle System.IO.Compression.DeflateStreamNative::data
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___data_3;
	// System.Boolean System.IO.Compression.DeflateStreamNative::disposed
	bool ___disposed_4;
	// System.Byte[] System.IO.Compression.DeflateStreamNative::io_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___io_buffer_5;
	// System.Exception System.IO.Compression.DeflateStreamNative::last_error
	Exception_t* ___last_error_6;
};

// System.Net.DnsPermissionAttribute
struct DnsPermissionAttribute_t234623CDA9C21DA481E4ED50178ACDB3D8BCFF1A  : public CodeAccessSecurityAttribute_tE7EEC93676A4CB9CEE9050F6CC2B97E1C2E210CE
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Configuration.SettingsPropertyIsReadOnlyException
struct SettingsPropertyIsReadOnlyException_t223E92F0E23CEAC3EF58F4376D97640EBA6B15DA  : public Exception_t
{
};

// System.Configuration.SettingsPropertyNotFoundException
struct SettingsPropertyNotFoundException_tB33F26B74AEF727762C689F39F106128FA96F614  : public Exception_t
{
};

// System.Configuration.SettingsPropertyWrongTypeException
struct SettingsPropertyWrongTypeException_t0CC979B0253762CE0113ABB94F3E41B0ABF7E706  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle
struct SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.Configuration.ConfigurationException
struct ConfigurationException_t6DEA92A8714A1377436DFC82D7B07AEB93FFFC30  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA  : public MulticastDelegate_t
{
};

// System.Configuration.SettingChangingEventHandler
struct SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E  : public MulticastDelegate_t
{
};

// System.Configuration.SettingsLoadedEventHandler
struct SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE  : public MulticastDelegate_t
{
};

// System.Configuration.SettingsSavingEventHandler
struct SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23  : public MulticastDelegate_t
{
};

// System.IO.Compression.DeflateStream/ReadMethod
struct ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6  : public MulticastDelegate_t
{
};

// System.IO.Compression.DeflateStream/WriteMethod
struct WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9  : public MulticastDelegate_t
{
};

// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};

// Unity.ThrowStub
struct ThrowStub_tA028CA7941154A8E0F17F9AD0563D538617A7A47  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};

// System.Configuration.AppSettingsReader

// System.Configuration.AppSettingsReader

// System.Attribute

// System.Attribute

// System.Collections.CaseInsensitiveComparer

// System.Collections.CaseInsensitiveComparer

// System.Collections.CaseInsensitiveHashCodeProvider

// System.Collections.CaseInsensitiveHashCodeProvider

// System.Security.CodeAccessPermission

// System.Security.CodeAccessPermission

// System.Collections.Specialized.CompatibleComparer
struct CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields
{
	// System.Collections.IComparer modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.CompatibleComparer::defaultComparer
	RuntimeObject* ___defaultComparer_1;
	// System.Collections.IHashCodeProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.CompatibleComparer::defaultHashProvider
	RuntimeObject* ___defaultHashProvider_3;
};

// System.Collections.Specialized.CompatibleComparer

// System.Configuration.Configuration

// System.Configuration.Configuration

// System.Configuration.ConfigurationElement

// System.Configuration.ConfigurationElement

// System.Configuration.ConfigurationPropertyCollection

// System.Configuration.ConfigurationPropertyCollection

// System.Configuration.ConfigurationSectionGroup

// System.Configuration.ConfigurationSectionGroup

// System.Configuration.ConfigurationSettings

// System.Configuration.ConfigurationSettings

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// System.Diagnostics.DiagnosticsConfigurationHandler

// System.Diagnostics.DiagnosticsConfigurationHandler

// System.Configuration.DictionarySectionHandler

// System.Configuration.DictionarySectionHandler

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.Collections.Hashtable

// System.Configuration.IgnoreSectionHandler

// System.Configuration.IgnoreSectionHandler

// System.MarshalByRefObject

// System.MarshalByRefObject

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields
{
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___defaultComparer_17;
};

// System.Collections.Specialized.NameObjectCollectionBase

// System.Configuration.NameValueFileSectionHandler

// System.Configuration.NameValueFileSectionHandler

// System.Configuration.NameValueSectionHandler

// System.Configuration.NameValueSectionHandler

// System.Configuration.Provider.ProviderBase

// System.Configuration.Provider.ProviderBase

// System.Configuration.Provider.ProviderCollection

// System.Configuration.Provider.ProviderCollection

// System.Security.SecurityElement
struct SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55_StaticFields
{
	// System.Char[] System.Security.SecurityElement::invalid_tag_chars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___invalid_tag_chars_4;
	// System.Char[] System.Security.SecurityElement::invalid_text_chars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___invalid_text_chars_5;
	// System.Char[] System.Security.SecurityElement::invalid_attr_name_chars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___invalid_attr_name_chars_6;
	// System.Char[] System.Security.SecurityElement::invalid_attr_value_chars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___invalid_attr_value_chars_7;
	// System.Char[] System.Security.SecurityElement::invalid_chars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___invalid_chars_8;
};

// System.Security.SecurityElement

// System.Runtime.Serialization.SerializationInfo

// System.Runtime.Serialization.SerializationInfo

// System.Configuration.SettingsBase

// System.Configuration.SettingsBase

// System.Configuration.SettingsProperty

// System.Configuration.SettingsProperty

// System.Configuration.SettingsPropertyCollection

// System.Configuration.SettingsPropertyCollection

// System.Configuration.SettingsPropertyValue

// System.Configuration.SettingsPropertyValue

// System.Configuration.SettingsPropertyValueCollection

// System.Configuration.SettingsPropertyValueCollection

// System.Configuration.SingleTagSectionHandler

// System.Configuration.SingleTagSectionHandler

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
};

// System.Uri

// System.ValueType

// System.ValueType

// System.Xml.XmlNode

// System.Xml.XmlNode

// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields
{
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;
};

// System.Xml.XmlReader

// System.Xml.XmlWriter

// System.Xml.XmlWriter

// System.IO.ChunkedMemoryStream/MemoryChunk

// System.IO.ChunkedMemoryStream/MemoryChunk

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator

// System.Memory`1<System.Byte>

// System.Memory`1<System.Byte>

// System.ReadOnlyMemory`1<System.Byte>

// System.ReadOnlyMemory`1<System.Byte>

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Int32>

// System.Threading.Tasks.ValueTask`1<System.Int32>
struct ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.ValueTask`1::s_canceledTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_canceledTask_0;
};

// System.Threading.Tasks.ValueTask`1<System.Int32>

// System.Configuration.ApplicationSettingsBase

// System.Configuration.ApplicationSettingsBase

// System.Configuration.ApplicationSettingsGroup

// System.Configuration.ApplicationSettingsGroup

// System.Net.Configuration.AuthenticationModuleElement

// System.Net.Configuration.AuthenticationModuleElement

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Net.Configuration.BypassElement

// System.Net.Configuration.BypassElement

// System.Byte

// System.Byte

// System.ComponentModel.CancelEventArgs

// System.ComponentModel.CancelEventArgs

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Configuration.ConfigurationElementCollection

// System.Configuration.ConfigurationElementCollection

// System.Configuration.ConfigurationSection

// System.Configuration.ConfigurationSection

// System.Net.Configuration.ConnectionManagementElement

// System.Net.Configuration.ConnectionManagementElement

// System.Configuration.DefaultSettingValueAttribute

// System.Configuration.DefaultSettingValueAttribute

// System.Net.DnsPermission

// System.Net.DnsPermission

// System.Net.Configuration.FtpCachePolicyElement

// System.Net.Configuration.FtpCachePolicyElement

// System.Net.Configuration.HttpCachePolicyElement

// System.Net.Configuration.HttpCachePolicyElement

// System.Net.Configuration.HttpListenerElement

// System.Net.Configuration.HttpListenerElement

// System.Net.Configuration.HttpListenerTimeoutsElement

// System.Net.Configuration.HttpListenerTimeoutsElement

// System.Net.Configuration.HttpWebRequestElement

// System.Net.Configuration.HttpWebRequestElement

// System.Configuration.IdnElement

// System.Configuration.IdnElement

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Net.Configuration.Ipv6Element

// System.Net.Configuration.Ipv6Element

// System.Configuration.IriParsingElement

// System.Configuration.IriParsingElement

// System.Net.Configuration.MailSettingsSectionGroup

// System.Net.Configuration.MailSettingsSectionGroup

// System.Net.Configuration.ModuleElement

// System.Net.Configuration.ModuleElement

// System.Collections.Specialized.NameValueCollection

// System.Collections.Specialized.NameValueCollection

// System.Net.Configuration.NetSectionGroup

// System.Net.Configuration.NetSectionGroup

// System.Configuration.NoSettingsVersionUpgradeAttribute

// System.Configuration.NoSettingsVersionUpgradeAttribute

// System.Net.Configuration.PerformanceCountersElement

// System.Net.Configuration.PerformanceCountersElement

// System.ComponentModel.PropertyChangedEventArgs

// System.ComponentModel.PropertyChangedEventArgs

// System.Net.Configuration.ProxyElement

// System.Net.Configuration.ProxyElement

// System.Configuration.SchemeSettingElement

// System.Configuration.SchemeSettingElement

// System.Security.Permissions.SecurityAttribute

// System.Security.Permissions.SecurityAttribute

// System.Net.Configuration.ServicePointManagerElement

// System.Net.Configuration.ServicePointManagerElement

// System.Configuration.SettingAttribute

// System.Configuration.SettingAttribute

// System.Configuration.SettingElement

// System.Configuration.SettingElement

// System.Configuration.SettingValueElement

// System.Configuration.SettingValueElement

// System.Configuration.SettingsAttributeDictionary

// System.Configuration.SettingsAttributeDictionary

// System.Configuration.SettingsContext

// System.Configuration.SettingsContext

// System.Configuration.SettingsDescriptionAttribute

// System.Configuration.SettingsDescriptionAttribute

// System.Configuration.SettingsGroupDescriptionAttribute

// System.Configuration.SettingsGroupDescriptionAttribute

// System.Configuration.SettingsGroupNameAttribute

// System.Configuration.SettingsGroupNameAttribute

// System.Configuration.SettingsLoadedEventArgs

// System.Configuration.SettingsLoadedEventArgs

// System.Configuration.SettingsManageabilityAttribute

// System.Configuration.SettingsManageabilityAttribute

// System.Configuration.SettingsProvider

// System.Configuration.SettingsProvider

// System.Configuration.SettingsProviderAttribute

// System.Configuration.SettingsProviderAttribute

// System.Configuration.SettingsProviderCollection

// System.Configuration.SettingsProviderCollection

// System.Configuration.SettingsSerializeAsAttribute

// System.Configuration.SettingsSerializeAsAttribute

// System.Net.Configuration.SmtpNetworkElement

// System.Net.Configuration.SmtpNetworkElement

// System.Net.Configuration.SmtpSpecifiedPickupDirectoryElement

// System.Net.Configuration.SmtpSpecifiedPickupDirectoryElement

// System.Net.Configuration.SocketElement

// System.Net.Configuration.SocketElement

// System.Configuration.SpecialSettingAttribute

// System.Configuration.SpecialSettingAttribute

// System.Runtime.InteropServices.StandardOleMarshalObject

// System.Runtime.InteropServices.StandardOleMarshalObject

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.Runtime.Serialization.StreamingContext

// System.Runtime.Serialization.StreamingContext

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.UInt32

// System.UInt32

// System.Configuration.UserSettingsGroup

// System.Configuration.UserSettingsGroup

// System.Threading.Tasks.ValueTask
struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F_StaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::s_canceledTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___s_canceledTask_0;
};

// System.Threading.Tasks.ValueTask

// System.Void

// System.Void

// System.Net.Configuration.WebProxyScriptElement

// System.Net.Configuration.WebProxyScriptElement

// System.Net.Configuration.WebRequestModuleElement

// System.Net.Configuration.WebRequestModuleElement

// System.Net.Configuration.WebUtilityElement

// System.Net.Configuration.WebUtilityElement

// System.Net.Configuration.WindowsAuthenticationElement

// System.Net.Configuration.WindowsAuthenticationElement

// System.Xml.XmlDocument
struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_StaticFields
{
	// System.Xml.EmptyEnumerator System.Xml.XmlDocument::EmptyEnumerator
	EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA* ___EmptyEnumerator_0;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::NotKnownSchemaInfo
	RuntimeObject* ___NotKnownSchemaInfo_1;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::ValidSchemaInfo
	RuntimeObject* ___ValidSchemaInfo_2;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::InvalidSchemaInfo
	RuntimeObject* ___InvalidSchemaInfo_3;
};

// System.Xml.XmlDocument

// System.Xml.XmlTextReader

// System.Xml.XmlTextReader

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2024

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2024

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=506

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=506

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=65

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=65

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9

// System.ByReference`1<System.Byte>

// System.ByReference`1<System.Byte>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::00C700F38385659BA060672F86D4A9A5376EADF9ED1CABB1C63290A0FDEFE36A
	__StaticArrayInitTypeSizeU3D256_tD401FB34D66ACCFAD94A32F8001469D038F350C8 ___00C700F38385659BA060672F86D4A9A5376EADF9ED1CABB1C63290A0FDEFE36A_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::063691760A57230E8119DF650327304D68AE1C009E476E48BE8C73DCA199D374
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___063691760A57230E8119DF650327304D68AE1C009E476E48BE8C73DCA199D374_2;
	// System.Int64 <PrivateImplementationDetails>::1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B
	int64_t ___1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
	__StaticArrayInitTypeSizeU3D9_tE2A1104C752B51004E61139D4615CC263948C4A7 ___27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70_5;
	// System.Int64 <PrivateImplementationDetails>::3505B8A2248AC03FE41ACADF8F29294572BBADEE1DD2E1A45D025766681C012C
	int64_t ___3505B8A2248AC03FE41ACADF8F29294572BBADEE1DD2E1A45D025766681C012C_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::356A582FCE68ACAE8FC944F7B4F0C0DA2BFF4A90D3767C75905F3EDE2E4E66CF
	__StaticArrayInitTypeSizeU3D12_t32C4FAAB522AC6551334F4E397A28A8CF95552DD ___356A582FCE68ACAE8FC944F7B4F0C0DA2BFF4A90D3767C75905F3EDE2E4E66CF_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::3981C8DFF7DC0FD5962B5FB863DD1A0D4119D320706BFF88FD6F636AC6B93AFF
	__StaticArrayInitTypeSizeU3D6_tA4881AF2477A5E66902A636B307315D4FA964D8D ___3981C8DFF7DC0FD5962B5FB863DD1A0D4119D320706BFF88FD6F636AC6B93AFF_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2024 <PrivateImplementationDetails>::4186171278342045F6399928145039267A761B52DE295D22617755191250963B
	__StaticArrayInitTypeSizeU3D2024_t1536C3F57703805DD50451E5E64D6F90250E3909 ___4186171278342045F6399928145039267A761B52DE295D22617755191250963B_9;
	// System.Int64 <PrivateImplementationDetails>::6C8F647E1FCD63826D12272FF0930E9C16F1FFEF719948703A4C0F3B90052885
	int64_t ___6C8F647E1FCD63826D12272FF0930E9C16F1FFEF719948703A4C0F3B90052885_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::8109EF063456779751E8A4AEE94A0BE9AE32827B6EB153ABD7F40057FF2C9CE3
	__StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E ___8109EF063456779751E8A4AEE94A0BE9AE32827B6EB153ABD7F40057FF2C9CE3_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::9001C3EDE1D7E939C07996B84F82F7CBE59A7266C1FC2735E959E3C8609602E8
	__StaticArrayInitTypeSizeU3D44_tDBE82A359520A01FA0C117855F1C3185BA1AEB0F ___9001C3EDE1D7E939C07996B84F82F7CBE59A7266C1FC2735E959E3C8609602E8_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5 <PrivateImplementationDetails>::933B971C6388D594A23FA1559825DB5BEC8ADE2DB1240AA8FC9D0C684949E8C9
	__StaticArrayInitTypeSizeU3D5_tD269A738C32D0AEFDEAC103C3804F6E70D7A033A ___933B971C6388D594A23FA1559825DB5BEC8ADE2DB1240AA8FC9D0C684949E8C9_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::9F58F1261D211553DE8FBC1AFA477C84EA3974B9BFF38223D771D0CDA787E15A
	__StaticArrayInitTypeSizeU3D6_tA4881AF2477A5E66902A636B307315D4FA964D8D ___9F58F1261D211553DE8FBC1AFA477C84EA3974B9BFF38223D771D0CDA787E15A_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C
	__StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E ___B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C_15;
	// System.Int64 <PrivateImplementationDetails>::BB6BB42AC5453BD8AA992CCB8929F1CB7D4E112E3FC56E57D711E106D1F72859
	int64_t ___BB6BB42AC5453BD8AA992CCB8929F1CB7D4E112E3FC56E57D711E106D1F72859_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::DFA7289CF8D8029ACEE90F30530C6926950E8DD20285772458F271AFD015BAD5
	__StaticArrayInitTypeSizeU3D14_t5A7362C844CE0A2E27C9434CD029FA82339CFF26 ___DFA7289CF8D8029ACEE90F30530C6926950E8DD20285772458F271AFD015BAD5_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=506 <PrivateImplementationDetails>::E1284F363C1A2B6A4343050EF21AEF5522855D9D77B656F54D1933235476FADC
	__StaticArrayInitTypeSizeU3D506_tFCED12C50099B3C9105966D1231E379030BFBE06 ___E1284F363C1A2B6A4343050EF21AEF5522855D9D77B656F54D1933235476FADC_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=65 <PrivateImplementationDetails>::E173D43DE98094098259467FF632B4FC61496AF96F3A354A006360D246E8166F
	__StaticArrayInitTypeSizeU3D65_t0911A4F45967796E1FAE2E633D7903FDB8DACCD2 ___E173D43DE98094098259467FF632B4FC61496AF96F3A354A006360D246E8166F_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::E478CC6C0579E2198C99BFDE0ABAADC66644AF69312CB9D6E94E2D4E3559482A
	__StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800 ___E478CC6C0579E2198C99BFDE0ABAADC66644AF69312CB9D6E94E2D4E3559482A_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
	__StaticArrayInitTypeSizeU3D256_tD401FB34D66ACCFAD94A32F8001469D038F350C8 ___F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8_21;
};

// <PrivateImplementationDetails>

// System.Configuration.ApplicationScopedSettingAttribute

// System.Configuration.ApplicationScopedSettingAttribute

// System.Net.Configuration.AuthenticationModuleElementCollection

// System.Net.Configuration.AuthenticationModuleElementCollection

// System.Net.Configuration.AuthenticationModulesSection

// System.Net.Configuration.AuthenticationModulesSection

// System.Net.Configuration.BypassElementCollection

// System.Net.Configuration.BypassElementCollection

// System.IO.ChunkedMemoryStream

// System.IO.ChunkedMemoryStream

// System.Configuration.ClientSettingsSection

// System.Configuration.ClientSettingsSection

// System.Security.Permissions.CodeAccessSecurityAttribute

// System.Security.Permissions.CodeAccessSecurityAttribute

// System.Configuration.ConfigXmlDocument

// System.Configuration.ConfigXmlDocument

// System.Net.Configuration.ConnectionManagementElementCollection

// System.Net.Configuration.ConnectionManagementElementCollection

// System.Net.Configuration.ConnectionManagementSection

// System.Net.Configuration.ConnectionManagementSection

// System.Net.Configuration.DefaultProxySection

// System.Net.Configuration.DefaultProxySection

// System.IO.Compression.DeflateStream

// System.IO.Compression.DeflateStream

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// System.IO.Compression.GZipStream

// System.IO.Compression.GZipStream

// System.Configuration.LocalFileSettingsProvider

// System.Configuration.LocalFileSettingsProvider

// System.Net.Configuration.RequestCachingSection

// System.Net.Configuration.RequestCachingSection

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Runtime.InteropServices.SafeHandle

// System.Runtime.InteropServices.SafeHandle

// System.Configuration.SchemeSettingElementCollection

// System.Configuration.SchemeSettingElementCollection

// System.Configuration.SettingChangingEventArgs

// System.Configuration.SettingChangingEventArgs

// System.Configuration.SettingElementCollection

// System.Configuration.SettingElementCollection

// System.Net.Configuration.SettingsSection

// System.Net.Configuration.SettingsSection

// System.Net.Configuration.SmtpSection

// System.Net.Configuration.SmtpSection

// System.Configuration.UriSection

// System.Configuration.UriSection

// System.Configuration.UserScopedSettingAttribute

// System.Configuration.UserScopedSettingAttribute

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};

// System.Threading.WaitHandle

// System.Net.Configuration.WebRequestModuleElementCollection

// System.Net.Configuration.WebRequestModuleElementCollection

// System.Net.Configuration.WebRequestModulesSection

// System.Net.Configuration.WebRequestModulesSection

// System.Array/RawData

// System.Array/RawData

// System.ReadOnlySpan`1<System.Byte>

// System.ReadOnlySpan`1<System.Byte>

// System.Span`1<System.Byte>

// System.Span`1<System.Byte>

// System.Runtime.Remoting.Messaging.AsyncResult

// System.Runtime.Remoting.Messaging.AsyncResult

// System.IO.Compression.DeflateStreamNative

// System.IO.Compression.DeflateStreamNative

// System.Net.DnsPermissionAttribute

// System.Net.DnsPermissionAttribute

// System.MulticastDelegate

// System.MulticastDelegate

// System.Configuration.SettingsPropertyIsReadOnlyException

// System.Configuration.SettingsPropertyIsReadOnlyException

// System.Configuration.SettingsPropertyNotFoundException

// System.Configuration.SettingsPropertyNotFoundException

// System.Configuration.SettingsPropertyWrongTypeException

// System.Configuration.SettingsPropertyWrongTypeException

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle

// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// System.Configuration.ConfigurationException

// System.Configuration.ConfigurationException

// System.IO.IOException

// System.IO.IOException

// System.InvalidOperationException

// System.InvalidOperationException

// System.NotImplementedException

// System.NotImplementedException

// System.NotSupportedException

// System.NotSupportedException

// System.ComponentModel.PropertyChangedEventHandler

// System.ComponentModel.PropertyChangedEventHandler

// System.Configuration.SettingChangingEventHandler

// System.Configuration.SettingChangingEventHandler

// System.Configuration.SettingsLoadedEventHandler

// System.Configuration.SettingsLoadedEventHandler

// System.Configuration.SettingsSavingEventHandler

// System.Configuration.SettingsSavingEventHandler

// System.IO.Compression.DeflateStream/ReadMethod

// System.IO.Compression.DeflateStream/ReadMethod

// System.IO.Compression.DeflateStream/WriteMethod

// System.IO.Compression.DeflateStream/WriteMethod

// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite

// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.ObjectDisposedException

// System.ObjectDisposedException

// System.PlatformNotSupportedException

// System.PlatformNotSupportedException

// Unity.ThrowStub

// Unity.ThrowStub
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// TResult System.Threading.Tasks.TaskToApm::End<System.Int32>(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_gshared (RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
// System.Span`1<T> System.MemoryExtensions::AsSpan<System.Byte>(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) ;
// T[] System.ReadOnlySpan`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::.ctor(System.Collections.Specialized.NameObjectCollectionBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectKeysEnumerator__ctor_mF3026FAD0A80AADFBC11888DCB0FDF7C2DD71801 (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* __this, NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* ___0_coll, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B (int32_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.String SR::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m56640423E54C5F10BFDEF27B7E692A33745EB696 (String_t* ___0_name, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeysCollection_GetEnumerator_mF70147620B0FD9164D584FDD297BE3CFF78DB4EB (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, const RuntimeMethod* method) ;
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___0_value, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Void System.Collections.CaseInsensitiveComparer::.ctor(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaseInsensitiveComparer__ctor_mCB4043516ED08874EE7AA38C56A3C3E016F4DA1E (CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_culture, const RuntimeMethod* method) ;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaseInsensitiveHashCodeProvider__ctor_mE5326CFE4A3269CC813CCF1ADF2E57529E902C4B (CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_culture, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void System.IO.ChunkedMemoryStream::AppendChunk(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkedMemoryStream_AppendChunk_m3AE37DABF70C1E7BE1C5C3E24E2450795604AD22 (ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65* __this, int64_t ___0_count, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::FromCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_FromCanceled_m2C682C247C1D89F6DD5A186BBBFEC1544921308E (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) ;
// System.Int64 System.Math::Min(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Min_mD731E8A02F13C67C1EAC7C1E7F81909FE466F079 (int64_t ___0_val1, int64_t ___1_val2, const RuntimeMethod* method) ;
// System.Void System.IO.ChunkedMemoryStream/MemoryChunk::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryChunk__ctor_m21C82E49277C04300B83F353787A64062A24FD8E (MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* __this, int32_t ___0_bufferSize, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_mode, bool ___2_leaveOpen, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mFA0036CA1C1411FBED2DDFB2B563635F4755078C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_mode, bool ___2_leaveOpen, int32_t ___3_windowsBits, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.GZipStream::CheckDeflateStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53 (const RuntimeMethod* method) ;
// System.IAsyncResult System.Threading.Tasks.TaskToApm::Begin(System.Threading.Tasks.Task,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToApm_Begin_mA26D2A4F6EE0582B181AFD83B913916909D02777 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_state, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToApm::End<System.Int32>(System.IAsyncResult)
inline int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED (RuntimeObject* ___0_asyncResult, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_gshared)(___0_asyncResult, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Int32 System.IO.Stream::Read(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stream_Read_m655A5A3FE25BD7A2D965154D753DB5F360AD46FE (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_buffer, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStream::ReadCore(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadCore_m58E605C082DCF3455C4D56EBEBB8F2ABECCC9B40 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToApm::End(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToApm_End_mDFB29EEE501409834D464F4C249A535723B7E6ED (RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Write(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Write_m84BD9BD831FAC81EAC315389E51E958F4BAA25E8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_buffer, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream::WriteCore(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteCore_mC6ADF328D0A66CAFEEC9B23F89A22C223DFF3730 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Stream::ReadAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 Stream_ReadAsync_m1AA84A1F2DD3C7555BFC97A636E1CE56EB106B98 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_buffer, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Compression.DeflateStream::ReadAsyncMemory(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 DeflateStream_ReadAsyncMemory_m1FC9EB7B2284773AA527913018FEA9EB82965327 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_destination, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask System.IO.Stream::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F Stream_WriteAsync_m31847C7A29AAFDA503991986F2BC02367F7A1C34 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_buffer, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask System.IO.Compression.DeflateStream::WriteAsyncMemory(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F DeflateStream_WriteAsyncMemory_mDEFCEC8FAA595B11419D022F351AD825C01AFCE6 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.GZipStream::ThrowStreamClosedException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GZipStream_ThrowStreamClosedException_m36E38FF71D68FFDE6707E3691F06929BE72713C8 (const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_compressedStream, int32_t ___1_mode, bool ___2_leaveOpen, bool ___3_gzip, const RuntimeMethod* method) ;
// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStreamNative::Create(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* DeflateStreamNative_Create_m94968BF2895D7838185DE455772F3CDDD6E6F4A6 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_compressedStream, int32_t ___1_mode, bool ___2_gzip, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_m64072AF17150906ED32D871778DC5EF313FADD9F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
// System.Span`1<T> System.MemoryExtensions::AsSpan<System.Byte>(T[],System.Int32,System.Int32)
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_gshared_inline)(___0_array, ___1_start, ___2_length, method);
}
// System.Void System.Span`1<System.Byte>::CopyTo(System.Span`1<T>)
inline void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared)(__this, ___0_destination, method);
}
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::WriteZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_WriteZStream_m4B066C7A2E031A2CA6EE0FE876A9611242630F18 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) ;
// T[] System.ReadOnlySpan`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_gshared)(__this, method);
}
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline)(__this, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Flush_m60D8D1C3DEBB720E402625ECFA9A0CFCA69E8F6F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream/ReadMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadMethod__ctor_mA65629D1C063B5E57095F952077323B5CE96C396 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.IAsyncResult System.IO.Compression.DeflateStream/ReadMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadMethod_BeginInvoke_mE465A26187BE3F1829ECA0C02AFAEFCA6D2F6EEF (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod__ctor_mBE4CCCE38227B2D866CB539879255AD8B0C2B51A (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.IAsyncResult System.IO.Compression.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteMethod_BeginInvoke_m4A29F5255900687782F0A92A0A4D043AEA2C982C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadMethod_EndInvoke_mBCA4D1483C0504BF239C2305B7201E1EC72ED6F7 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod_EndInvoke_mFDA332678A1FD46BAE42F3A0DF2073FD9CC6628C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3 (intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52 (intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative__ctor_mCDA4F9E1FF67EFCE84EBB8889DDDD30F4A12BB0E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6 (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___0_value, const RuntimeMethod* method) ;
// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle System.IO.Compression.DeflateStreamNative::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* DeflateStreamNative_CreateZStream_m41CBCDEB95EA9C72B49374B3EFA96709C97A5F01 (int32_t ___0_compress, bool ___1_gzip, UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* ___2_feeder, intptr_t ___3_data, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::Flush(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_Flush_m7E8FA114A01ED15906DC66D6086E41DF2EAB4E50 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___0_stream, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::CheckResult(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, int32_t ___0_result, String_t* ___1_where, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_mF14CF4F54AE09805AA81A61FB6D04D6EA1E397FE (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___0_stream, intptr_t ___1_buffer, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::WriteZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_WriteZStream_m78EAA03E23C1445D652F936373061207CE50579F (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___0_stream, intptr_t ___1_buffer, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC (intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_mC17A13844F4560E954F816037B0A5C04FFEDECB1 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_startIndex, intptr_t ___2_destination, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_m73ADBE62E8371FFDFFB380F568A8510E8644B1BD (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___0_source, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeDeflateStreamHandle__ctor_mBDF78EC52524A938914F593AF5C198C9F7632E41 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___0_success, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___0_invalidHandleValue, bool ___1_ownsHandle, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::CloseZStream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_CloseZStream_m6FB720C1050656B8E8CF3BB53856D407509D6D0A (intptr_t ___0_stream, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
// System.Byte& System.Array::GetRawSzArrayData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C void* CDECL CreateZStream(int32_t, int32_t, Il2CppMethodPointer, intptr_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL CloseZStream(intptr_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL Flush(void*);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ReadZStream(void*, intptr_t, int32_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL WriteZStream(void*, intptr_t, int32_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectEntry__ctor_m36EA15EE18936FA78B2E4E29C63311E03221F513 (NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* __this, String_t* ___0_name, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_name;
		__this->___Key_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Key_0), (void*)L_0);
		RuntimeObject* L_1 = ___1_value;
		__this->___Value_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Value_1), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::.ctor(System.Collections.Specialized.NameObjectCollectionBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectKeysEnumerator__ctor_mF3026FAD0A80AADFBC11888DCB0FDF7C2DD71801 (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* __this, NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* ___0_coll, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_0 = ___0_coll;
		__this->____coll_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coll_1), (void*)L_0);
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_1 = __this->____coll_1;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_15;
		__this->____version_2 = L_2;
		__this->____pos_0 = (-1);
		return;
	}
}
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameObjectKeysEnumerator_MoveNext_m8800474BD1E5F24E4B88D1E33ABA793CB05DD540 (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_2;
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_1 = __this->____coll_1;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_15;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectKeysEnumerator_MoveNext_m8800474BD1E5F24E4B88D1E33ABA793CB05DD540_RuntimeMethod_var)));
	}

IL_0023:
	{
		int32_t L_5 = __this->____pos_0;
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_6 = __this->____coll_1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_6);
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1)))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_8 = __this->____pos_0;
		__this->____pos_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return (bool)1;
	}

IL_0048:
	{
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_9 = __this->____coll_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_9);
		__this->____pos_0 = L_10;
		return (bool)0;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectKeysEnumerator_Reset_m548902A21282FB0766D833231BE700069DA316A5 (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_2;
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_1 = __this->____coll_1;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_15;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectKeysEnumerator_Reset_m548902A21282FB0766D833231BE700069DA316A5_RuntimeMethod_var)));
	}

IL_0023:
	{
		__this->____pos_0 = (-1);
		return;
	}
}
// System.Object System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameObjectKeysEnumerator_get_Current_m23AC7A2525995AC67EF4002996653748F33F6096 (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pos_0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_1 = __this->____pos_0;
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_2 = __this->____coll_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_4 = __this->____coll_1;
		int32_t L_5 = __this->____pos_0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6(L_4, L_5, NULL);
		return L_6;
	}

IL_002e:
	{
		String_t* L_7;
		L_7 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectKeysEnumerator_get_Current_m23AC7A2525995AC67EF4002996653748F33F6096_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::.ctor(System.Collections.Specialized.NameObjectCollectionBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeysCollection__ctor_m1C4BBB21102A9153DD07811B62900528EFB2E286 (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* ___0_coll, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_0 = ___0_coll;
		__this->____coll_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coll_0), (void*)L_0);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeysCollection_GetEnumerator_mF70147620B0FD9164D584FDD297BE3CFF78DB4EB (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_0 = __this->____coll_0;
		NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* L_1 = (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0*)il2cpp_codegen_object_new(NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NameObjectKeysEnumerator__ctor_mF3026FAD0A80AADFBC11888DCB0FDF7C2DD71801(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeysCollection_get_Count_mFCE07990FBE528B3E7E2A61DFB98CDD5C4499845 (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, const RuntimeMethod* method) 
{
	{
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_0 = __this->____coll_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_4;
		L_4 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45F384B655DDF6A33BF7B0E551F80B07399CA472)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_6 = ___1_index;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9;
		L_9 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_10;
		L_10 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&___1_index), L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		String_t* L_11;
		L_11 = SR_GetString_m56640423E54C5F10BFDEF27B7E692A33745EB696(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3FB7B372D879A173F88B1B57D2B19E95BABF6F3A)), L_8, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC_RuntimeMethod_var)));
	}

IL_0055:
	{
		RuntimeArray* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_13, NULL);
		int32_t L_15 = ___1_index;
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_16 = __this->____coll_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_16);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_15))) >= ((int32_t)L_17)))
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_18;
		L_18 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34AE52A4D26F1742129FB49939AAFD990890D6C0)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC_RuntimeMethod_var)));
	}

IL_007a:
	{
		RuntimeObject* L_20;
		L_20 = KeysCollection_GetEnumerator_mF70147620B0FD9164D584FDD297BE3CFF78DB4EB(__this, NULL);
		V_0 = L_20;
		goto IL_0095;
	}

IL_0083:
	{
		RuntimeArray* L_21 = ___0_array;
		RuntimeObject* L_22 = V_0;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
		int32_t L_24 = ___1_index;
		int32_t L_25 = L_24;
		___1_index = ((int32_t)il2cpp_codegen_add(L_25, 1));
		NullCheck(L_21);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_21, L_23, L_25, NULL);
	}

IL_0095:
	{
		RuntimeObject* L_26 = V_0;
		NullCheck(L_26);
		bool L_27;
		L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
		if (L_27)
		{
			goto IL_0083;
		}
	}
	{
		return;
	}
}
// System.Object System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeysCollection_System_Collections_ICollection_get_SyncRoot_m37BE37DA43215029140183C22A297186DAE6B44C (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_0 = __this->____coll_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeysCollection_System_Collections_ICollection_get_IsSynchronized_m0FB5A86FED023E58C1A2774C2FDA4724058CB50D (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeysCollection__ctor_m8E73B12D23C242C0B41933D8500EB7B1C0F129CF (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeysCollection__ctor_m8E73B12D23C242C0B41933D8500EB7B1C0F129CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(KeysCollection__ctor_m8E73B12D23C242C0B41933D8500EB7B1C0F129CF_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Specialized.CompatibleComparer::.ctor(System.Collections.IComparer,System.Collections.IHashCodeProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompatibleComparer__ctor_m9F601617145FDFCA25983415C4427C47E5C170A7 (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, RuntimeObject* ___0_comparer, RuntimeObject* ___1_hashCodeProvider, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		__this->____comparer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_0), (void*)L_0);
		RuntimeObject* L_1 = ___1_hashCodeProvider;
		__this->____hcp_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hcp_2), (void*)L_1);
		return;
	}
}
// System.Boolean System.Collections.Specialized.CompatibleComparer::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompatibleComparer_Equals_m09CF7F036688C2E00C8BF5618C0528BA8D8C40D5 (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, RuntimeObject* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_a;
		RuntimeObject* L_1 = ___1_b;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_2 = ___0_a;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		RuntimeObject* L_3 = ___1_b;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return (bool)0;
	}

IL_000e:
	{
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_4 = __this->____comparer_0;
			if (!L_4)
			{
				goto IL_002a_1;
			}
		}
		{
			RuntimeObject* L_5 = __this->____comparer_0;
			RuntimeObject* L_6 = ___0_a;
			RuntimeObject* L_7 = ___1_b;
			NullCheck(L_5);
			int32_t L_8;
			L_8 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_5, L_6, L_7);
			V_1 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
			goto IL_0050;
		}

IL_002a_1:
		{
			RuntimeObject* L_9 = ___0_a;
			V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var));
			RuntimeObject* L_10 = V_0;
			if (!L_10)
			{
				goto IL_0041_1;
			}
		}
		{
			RuntimeObject* L_11 = V_0;
			RuntimeObject* L_12 = ___1_b;
			NullCheck(L_11);
			int32_t L_13;
			L_13 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var, L_11, L_12);
			V_1 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
			goto IL_0050;
		}

IL_0041_1:
		{
			goto IL_0048;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0043;
		}
		throw e;
	}

CATCH_0043:
	{// begin catch(System.ArgumentException)
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0050;
	}// end catch (depth: 1)

IL_0048:
	{
		RuntimeObject* L_14 = ___0_a;
		RuntimeObject* L_15 = ___1_b;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_14, L_15);
		return L_16;
	}

IL_0050:
	{
		bool L_17 = V_1;
		return L_17;
	}
}
// System.Int32 System.Collections.Specialized.CompatibleComparer::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompatibleComparer_GetHashCode_mE88BB0E4CC1A615946A43A8DE75B6F1F57B1CDAF (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral690BF02630AC0BD6AA6BD08D2C36A28E1FC54F3E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompatibleComparer_GetHashCode_mE88BB0E4CC1A615946A43A8DE75B6F1F57B1CDAF_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = __this->____hcp_2;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = __this->____hcp_2;
		RuntimeObject* L_4 = ___0_obj;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IHashCodeProvider::GetHashCode(System.Object) */, IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var, L_3, L_4);
		return L_5;
	}

IL_0023:
	{
		RuntimeObject* L_6 = ___0_obj;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		return L_7;
	}
}
// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_Comparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_Comparer_mFA7D1FF54540B95FED7C58DBCDB7ACC037FD3DF9 (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer_0;
		return L_0;
	}
}
// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_HashCodeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_HashCodeProvider_m1085836D796353C24686CF56026EB89D783BBFC4 (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____hcp_2;
		return L_0;
	}
}
// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_DefaultComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_DefaultComparer_m1764CA10BF8362FE4B86743BC5450ACF9F33AC77 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultComparer_1;
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281* L_2 = (CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281*)il2cpp_codegen_object_new(CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CaseInsensitiveComparer__ctor_mCB4043516ED08874EE7AA38C56A3C3E016F4DA1E(L_2, L_1, NULL);
		il2cpp_codegen_memory_barrier();
		((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultComparer_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultComparer_1), (void*)L_2);
	}

IL_001a:
	{
		RuntimeObject* L_3 = ((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultComparer_1;
		il2cpp_codegen_memory_barrier();
		return L_3;
	}
}
// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_DefaultHashCodeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_DefaultHashCodeProvider_m0DEC6F17BB96B8492250DCC38617890C4417E284 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultHashProvider_3;
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F* L_2 = (CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F*)il2cpp_codegen_object_new(CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CaseInsensitiveHashCodeProvider__ctor_mE5326CFE4A3269CC813CCF1ADF2E57529E902C4B(L_2, L_1, NULL);
		il2cpp_codegen_memory_barrier();
		((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultHashProvider_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultHashProvider_3), (void*)L_2);
	}

IL_001a:
	{
		RuntimeObject* L_3 = ((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultHashProvider_3;
		il2cpp_codegen_memory_barrier();
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.ChunkedMemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkedMemoryStream__ctor_mEF519D0C0CDCB172216AC76F8EFEA0EC201C2581 (ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		return;
	}
}
// System.Byte[] System.IO.ChunkedMemoryStream::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ChunkedMemoryStream_ToArray_mB56DD1958748B5DE3D434E0F68FBA0496BA88CE7 (ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* V_2 = NULL;
	{
		int32_t L_0 = __this->____totalLength_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_2 = __this->____headChunk_5;
		V_2 = L_2;
		goto IL_003b;
	}

IL_0017:
	{
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_3 = V_2;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3->____buffer_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6 = V_1;
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->____freeOffset_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, L_6, L_8, NULL);
		int32_t L_9 = V_1;
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->____freeOffset_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, L_11));
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_12 = V_2;
		NullCheck(L_12);
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_13 = L_12->____next_2;
		V_2 = L_13;
	}

IL_003b:
	{
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_14 = V_2;
		if (L_14)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		return L_15;
	}
}
// System.Void System.IO.ChunkedMemoryStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkedMemoryStream_Write_mC0873B30F3494AC2A1E076538489BDCFF9232DF7 (ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_0086;
	}

IL_0005:
	{
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_0 = __this->____currentChunk_6;
		if (!L_0)
		{
			goto IL_007e;
		}
	}
	{
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_1 = __this->____currentChunk_6;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1->____buffer_0;
		NullCheck(L_2);
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_3 = __this->____currentChunk_6;
		NullCheck(L_3);
		int32_t L_4 = L_3->____freeOffset_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), L_4));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_6, L_7, NULL);
		V_1 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_buffer;
		int32_t L_10 = ___1_offset;
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_11 = __this->____currentChunk_6;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_11->____buffer_0;
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_13 = __this->____currentChunk_6;
		NullCheck(L_13);
		int32_t L_14 = L_13->____freeOffset_1;
		int32_t L_15 = V_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_12, L_14, L_15, NULL);
		int32_t L_16 = ___2_count;
		int32_t L_17 = V_1;
		___2_count = ((int32_t)il2cpp_codegen_subtract(L_16, L_17));
		int32_t L_18 = ___1_offset;
		int32_t L_19 = V_1;
		___1_offset = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		int32_t L_20 = __this->____totalLength_7;
		int32_t L_21 = V_1;
		__this->____totalLength_7 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_22 = __this->____currentChunk_6;
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_23 = L_22;
		NullCheck(L_23);
		int32_t L_24 = L_23->____freeOffset_1;
		int32_t L_25 = V_1;
		NullCheck(L_23);
		L_23->____freeOffset_1 = ((int32_t)il2cpp_codegen_add(L_24, L_25));
		goto IL_0086;
	}

IL_007e:
	{
		int32_t L_26 = ___2_count;
		ChunkedMemoryStream_AppendChunk_m3AE37DABF70C1E7BE1C5C3E24E2450795604AD22(__this, ((int64_t)L_26), NULL);
	}

IL_0086:
	{
		int32_t L_27 = ___2_count;
		if ((((int32_t)L_27) > ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Threading.Tasks.Task System.IO.ChunkedMemoryStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ChunkedMemoryStream_WriteAsync_m0B3F3145D7D94A9C52A5E524A69B757F958615DF (ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___3_cancellationToken), NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___3_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = Task_FromCanceled_m2C682C247C1D89F6DD5A186BBBFEC1544921308E(L_1, NULL);
		return L_2;
	}

IL_0011:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		int32_t L_5 = ___2_count;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_3, L_4, L_5);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_6;
	}
}
// System.Void System.IO.ChunkedMemoryStream::AppendChunk(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkedMemoryStream_AppendChunk_m3AE37DABF70C1E7BE1C5C3E24E2450795604AD22 (ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65* __this, int64_t ___0_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* V_1 = NULL;
	MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_0 = __this->____currentChunk_6;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		G_B3_0 = ((int32_t)1024);
		goto IL_001e;
	}

IL_000f:
	{
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_1 = __this->____currentChunk_6;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1->____buffer_0;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_2)->max_length)), 2));
	}

IL_001e:
	{
		V_0 = G_B3_0;
		int64_t L_3 = ___0_count;
		int32_t L_4 = V_0;
		if ((((int64_t)L_3) <= ((int64_t)((int64_t)L_4))))
		{
			goto IL_0032;
		}
	}
	{
		int64_t L_5 = ___0_count;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int64_t L_6;
		L_6 = Math_Min_mD731E8A02F13C67C1EAC7C1E7F81909FE466F079(L_5, ((int64_t)((int32_t)1048576)), NULL);
		V_0 = ((int32_t)L_6);
	}

IL_0032:
	{
		int32_t L_7 = V_0;
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_8 = (MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284*)il2cpp_codegen_object_new(MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		MemoryChunk__ctor_m21C82E49277C04300B83F353787A64062A24FD8E(L_8, L_7, NULL);
		V_1 = L_8;
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_9 = __this->____currentChunk_6;
		if (L_9)
		{
			goto IL_0052;
		}
	}
	{
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_10 = V_1;
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_11 = L_10;
		V_2 = L_11;
		__this->____currentChunk_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentChunk_6), (void*)L_11);
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_12 = V_2;
		__this->____headChunk_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____headChunk_5), (void*)L_12);
		return;
	}

IL_0052:
	{
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_13 = __this->____currentChunk_6;
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_14 = V_1;
		NullCheck(L_13);
		L_13->____next_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____next_2), (void*)L_14);
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_15 = V_1;
		__this->____currentChunk_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentChunk_6), (void*)L_15);
		return;
	}
}
// System.Boolean System.IO.ChunkedMemoryStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChunkedMemoryStream_get_CanRead_m8062C6C79A09621AD5D55556F3565A67175349E6 (ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.ChunkedMemoryStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChunkedMemoryStream_get_CanSeek_mC5DCC7E98E9EAAB1E37F640D67EEB57DE4121D0C (ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.ChunkedMemoryStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChunkedMemoryStream_get_CanWrite_m53D088B9E558C1105E878447BAD55EAD562EEDF3 (ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Int64 System.IO.ChunkedMemoryStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ChunkedMemoryStream_get_Length_m7D28D044E9D814BE5FAE14C5B9B29B630FA7FCB8 (ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____totalLength_7;
		return ((int64_t)L_0);
	}
}
// System.Void System.IO.ChunkedMemoryStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkedMemoryStream_Flush_mFE199DFC085231424EF95969F4C8AA765C8FF71E (ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Threading.Tasks.Task System.IO.ChunkedMemoryStream::FlushAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ChunkedMemoryStream_FlushAsync_m5AB8D2D46485AB602E20A138F11C1B8498232055 (ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0;
		L_0 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_0;
	}
}
// System.Int64 System.IO.ChunkedMemoryStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ChunkedMemoryStream_get_Position_m8F6A93B8926AA08FE79A8A316AA8A6541953AE50 (ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChunkedMemoryStream_get_Position_m8F6A93B8926AA08FE79A8A316AA8A6541953AE50_RuntimeMethod_var)));
	}
}
// System.Void System.IO.ChunkedMemoryStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkedMemoryStream_set_Position_mAB1DD0EDE2FFB31B4410526588626F03AA5AC54E (ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChunkedMemoryStream_set_Position_mAB1DD0EDE2FFB31B4410526588626F03AA5AC54E_RuntimeMethod_var)));
	}
}
// System.Int32 System.IO.ChunkedMemoryStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChunkedMemoryStream_Read_m2042D39F9FBD477FAD69D245C61920296CE1F270 (ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChunkedMemoryStream_Read_m2042D39F9FBD477FAD69D245C61920296CE1F270_RuntimeMethod_var)));
	}
}
// System.Int64 System.IO.ChunkedMemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ChunkedMemoryStream_Seek_m7CC32A231927DE789E85C7746A2BEF73A8AB7A45 (ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65* __this, int64_t ___0_offset, int32_t ___1_origin, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChunkedMemoryStream_Seek_m7CC32A231927DE789E85C7746A2BEF73A8AB7A45_RuntimeMethod_var)));
	}
}
// System.Void System.IO.ChunkedMemoryStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkedMemoryStream_SetLength_m2E2B42F9185A886CAF8A44C8F651651085ED9D94 (ChunkedMemoryStream_t68F2BB72546A21C24B54ED6D6CF7710BE4E40F65* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* L_0 = __this->____currentChunk_6;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChunkedMemoryStream_SetLength_m2E2B42F9185A886CAF8A44C8F651651085ED9D94_RuntimeMethod_var)));
	}

IL_000e:
	{
		int64_t L_2 = ___0_value;
		ChunkedMemoryStream_AppendChunk_m3AE37DABF70C1E7BE1C5C3E24E2450795604AD22(__this, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.ChunkedMemoryStream/MemoryChunk::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryChunk__ctor_m21C82E49277C04300B83F353787A64062A24FD8E (MemoryChunk_t5C7073EF7636689BD6629B65825EB2CC2EA9D284* __this, int32_t ___0_bufferSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_bufferSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buffer_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_0), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m25053634B041374B528EB0F01612B072A9AF2E05 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_mode, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		int32_t L_1 = ___1_mode;
		GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_mode, bool ___2_leaveOpen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		int32_t L_1 = ___1_mode;
		bool L_2 = ___2_leaveOpen;
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_3 = (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104*)il2cpp_codegen_object_new(DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DeflateStream__ctor_mFA0036CA1C1411FBED2DDFB2B563635F4755078C(L_3, L_0, L_1, L_2, ((int32_t)31), NULL);
		__this->____deflateStream_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____deflateStream_5), (void*)L_3);
		return;
	}
}
// System.Boolean System.IO.Compression.GZipStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanRead_mFF4A941C8BD1D9C3A249A084C4335EFF8FAD47BB (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B2_0 = NULL;
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B1_0 = NULL;
	{
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, G_B2_0);
		return L_2;
	}
}
// System.Boolean System.IO.Compression.GZipStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanWrite_m0A3EC64CE819F978DE34A8477FAAA82889AE7248 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B2_0 = NULL;
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B1_0 = NULL;
	{
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, G_B2_0);
		return L_2;
	}
}
// System.Boolean System.IO.Compression.GZipStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanSeek_m530B997FC6D2144F7B73E708903E6E9F39E304DD (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B2_0 = NULL;
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B1_0 = NULL;
	{
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, G_B2_0);
		return L_2;
	}
}
// System.Int64 System.IO.Compression.GZipStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Length_mCBA17CDD8925825AC2EB07E04CDE391B8E46C583 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_Length_mCBA17CDD8925825AC2EB07E04CDE391B8E46C583_RuntimeMethod_var)));
	}
}
// System.Int64 System.IO.Compression.GZipStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Position_m934BD5709034CAAEE05A6BCF382D1FEB0314C420 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_Position_m934BD5709034CAAEE05A6BCF382D1FEB0314C420_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.GZipStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_Position_m7FEEE9F3845C130340DC5E1DF984ACB2CD53E957 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_Position_m7FEEE9F3845C130340DC5E1DF984ACB2CD53E957_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.GZipStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Flush_m8D38670B3BE0472E83AA60F783A8EF3E1C1F01A0 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(20 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int64 System.IO.Compression.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_Seek_m72909F60549EAB072B86484A1E80BA15D4352E66 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, int64_t ___0_offset, int32_t ___1_origin, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Seek_m72909F60549EAB072B86484A1E80BA15D4352E66_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.GZipStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_SetLength_m5DCF13005B2AB45961D14230670698CBAF93D0C1 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_SetLength_m5DCF13005B2AB45961D14230670698CBAF93D0C1_RuntimeMethod_var)));
	}
}
// System.Int32 System.IO.Compression.GZipStream::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_ReadByte_m486ACD72754C08B02CF1B90A71A744EE92F4D42C (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		return L_1;
	}
}
// System.IAsyncResult System.IO.Compression.GZipStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GZipStream_BeginRead_mDD211249BF8242D28889645A05453C3D89C6B0F1 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_asyncCallback, RuntimeObject* ___4_asyncState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		int32_t L_1 = ___1_offset;
		int32_t L_2 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_4;
		L_4 = VirtualFuncInvoker4< Task_1_t4C228DE57804012969575431CFF12D57C875552D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(24 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, __this, L_0, L_1, L_2, L_3);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_5 = ___3_asyncCallback;
		RuntimeObject* L_6 = ___4_asyncState;
		RuntimeObject* L_7;
		L_7 = TaskToApm_Begin_mA26D2A4F6EE0582B181AFD83B913916909D02777(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.IO.Compression.GZipStream::EndRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_EndRead_m8245FEE8D2B21A169DD1A40A67B5D398DD6005D2 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		int32_t L_1;
		L_1 = TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED(L_0, TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 System.IO.Compression.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_Read_m41EC5D087FD227D05C8435E8704C9F0F6A7E2F9D (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 System.IO.Compression.GZipStream::Read(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_Read_mBC83A9A584B5A2DC2B08B044E96C0E8AF33723D5 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4 = ___0_buffer;
		int32_t L_5;
		L_5 = Stream_Read_m655A5A3FE25BD7A2D965154D753DB5F360AD46FE(__this, L_4, NULL);
		return L_5;
	}

IL_001f:
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_6 = __this->____deflateStream_5;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7 = ___0_buffer;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = DeflateStream_ReadCore_m58E605C082DCF3455C4D56EBEBB8F2ABECCC9B40(L_6, L_7, NULL);
		return L_8;
	}
}
// System.IAsyncResult System.IO.Compression.GZipStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GZipStream_BeginWrite_mB80B01F99925CF4A6B201E77B54E7656A40474B8 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_asyncCallback, RuntimeObject* ___4_asyncState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		int32_t L_1 = ___1_offset;
		int32_t L_2 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(28 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, __this, L_0, L_1, L_2, L_3);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_5 = ___3_asyncCallback;
		RuntimeObject* L_6 = ___4_asyncState;
		RuntimeObject* L_7;
		L_7 = TaskToApm_Begin_mA26D2A4F6EE0582B181AFD83B913916909D02777(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void System.IO.Compression.GZipStream::EndWrite(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_EndWrite_m7FC15F1CD67B5C6977FEB16E630545AD6E020C91 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		TaskToApm_End_mDFB29EEE501409834D464F4C249A535723B7E6ED(L_0, NULL);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Write_mCA30092CA9BEFD7425587337A5C4451866E1EB34 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		NullCheck(L_0);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::Write(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Write_mF25D52D7EC30B244830E14477D047FC5028E51D3 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4 = ___0_buffer;
		Stream_Write_m84BD9BD831FAC81EAC315389E51E958F4BAA25E8(__this, L_4, NULL);
		return;
	}

IL_001f:
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_5 = __this->____deflateStream_5;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6 = ___0_buffer;
		NullCheck(L_5);
		DeflateStream_WriteCore_mC6ADF328D0A66CAFEEC9B23F89A22C223DFF3730(L_5, L_6, NULL);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Dispose_mD369BCB8951329CEE518D159BB1D16BBC0C709E3 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				bool L_0 = ___0_disposing;
				Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_0, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				bool L_1 = ___0_disposing;
				if (!L_1)
				{
					goto IL_0016_1;
				}
			}
			{
				DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_2 = __this->____deflateStream_5;
				if (!L_2)
				{
					goto IL_0016_1;
				}
			}
			{
				DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_3 = __this->____deflateStream_5;
				NullCheck(L_3);
				Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_3, NULL);
			}

IL_0016_1:
			{
				__this->____deflateStream_5 = (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____deflateStream_5), (void*)(DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104*)NULL);
				goto IL_0027;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0027:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> System.IO.Compression.GZipStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* GZipStream_ReadAsync_mACECFB99609D4696156F98AE738B2038E6663471 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___3_cancellationToken;
		NullCheck(L_0);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_5;
		L_5 = VirtualFuncInvoker4< Task_1_t4C228DE57804012969575431CFF12D57C875552D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(24 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Compression.GZipStream::ReadAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 GZipStream_ReadAsync_mCFF5156AFDFF16B472A323F2D1BA86BFE13C7358 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_buffer, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_4 = ___0_buffer;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = ___1_cancellationToken;
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_6;
		L_6 = Stream_ReadAsync_m1AA84A1F2DD3C7555BFC97A636E1CE56EB106B98(__this, L_4, L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_7 = __this->____deflateStream_5;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_8 = ___0_buffer;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = ___1_cancellationToken;
		NullCheck(L_7);
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_10;
		L_10 = DeflateStream_ReadAsyncMemory_m1FC9EB7B2284773AA527913018FEA9EB82965327(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Threading.Tasks.Task System.IO.Compression.GZipStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* GZipStream_WriteAsync_m2CB67E3DB87DFC01588B604C8E2D60EE1AE27EF7 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___3_cancellationToken;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(28 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.ValueTask System.IO.Compression.GZipStream::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F GZipStream_WriteAsync_m43C1DEA3F232AFD6036CB0637831887E93488000 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_buffer, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_4 = ___0_buffer;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = ___1_cancellationToken;
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_6;
		L_6 = Stream_WriteAsync_m31847C7A29AAFDA503991986F2BC02367F7A1C34(__this, L_4, L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_7 = __this->____deflateStream_5;
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_8 = ___0_buffer;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = ___1_cancellationToken;
		NullCheck(L_7);
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_10;
		L_10 = DeflateStream_WriteAsyncMemory_mDEFCEC8FAA595B11419D022F351AD825C01AFCE6(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Threading.Tasks.Task System.IO.Compression.GZipStream::FlushAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* GZipStream_FlushAsync_m4464D3AD21EE7393A37FE61CC2232CB19A575136 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___0_cancellationToken;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = VirtualFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(21 /* System.Threading.Tasks.Task System.IO.Stream::FlushAsync(System.Threading.CancellationToken) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.IO.Compression.GZipStream::CheckDeflateStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		GZipStream_ThrowStreamClosedException_m36E38FF71D68FFDE6707E3691F06929BE72713C8(NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::ThrowStreamClosedException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GZipStream_ThrowStreamClosedException_m36E38FF71D68FFDE6707E3691F06929BE72713C8 (const RuntimeMethod* method) 
{
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_0 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84(L_0, (String_t*)NULL, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78875BB01F47001614AE95132434E503D00EA404)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_ThrowStreamClosedException_m36E38FF71D68FFDE6707E3691F06929BE72713C8_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m344C1EF8B83E612C4FC662F0152DF1D2A5636829 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_mode, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		int32_t L_1 = ___1_mode;
		DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36(__this, L_0, L_1, (bool)0, (bool)0, NULL);
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mFA0036CA1C1411FBED2DDFB2B563635F4755078C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_mode, bool ___2_leaveOpen, int32_t ___3_windowsBits, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		int32_t L_1 = ___1_mode;
		bool L_2 = ___2_leaveOpen;
		DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36(__this, L_0, L_1, L_2, (bool)1, NULL);
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_compressedStream, int32_t ___1_mode, bool ___2_leaveOpen, bool ___3_gzip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_compressedStream;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59BD369CF985844B111CA4447943A285D359441C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___1_mode;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___1_mode;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var)));
	}

IL_0026:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___0_compressedStream;
		__this->___base_stream_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base_stream_5), (void*)L_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_compressedStream;
		int32_t L_7 = ___1_mode;
		bool L_8 = ___3_gzip;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_9;
		L_9 = DeflateStreamNative_Create_m94968BF2895D7838185DE455772F3CDDD6E6F4A6(L_6, L_7, L_8, NULL);
		__this->___native_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___native_9), (void*)L_9);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_10 = __this->___native_9;
		if (L_10)
		{
			goto IL_004f;
		}
	}
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_11 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95B4432B3C3526A7D6F1251C0238760D017B4551)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var)));
	}

IL_004f:
	{
		int32_t L_12 = ___1_mode;
		__this->___mode_6 = L_12;
		bool L_13 = ___2_leaveOpen;
		__this->___leaveOpen_7 = L_13;
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Finalize_mAFF7BCEF197A6549D13572A0AFD326CD995EA7AC (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(19 /* System.Void System.IO.Stream::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Dispose_m85096A7176C94248E02CE7E9DA78338C45B2F746 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B4_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B3_0 = NULL;
	{
		bool L_0 = ___0_disposing;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
	}

IL_0009:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_1 = __this->___native_9;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0015;
		}
	}
	{
		goto IL_001b;
	}

IL_0015:
	{
		bool L_3 = ___0_disposing;
		NullCheck(G_B4_0);
		DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E(G_B4_0, L_3, NULL);
	}

IL_001b:
	{
		bool L_4 = ___0_disposing;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		bool L_5 = __this->___disposed_8;
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		__this->___disposed_8 = (bool)1;
		bool L_6 = __this->___leaveOpen_7;
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___base_stream_5;
		V_0 = L_7;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = V_0;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, L_9);
	}

IL_0045:
	{
		__this->___base_stream_5 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base_stream_5), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
	}

IL_004c:
	{
		bool L_10 = ___0_disposing;
		Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_10, NULL);
		return;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___2_count;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_1 = L_2;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_001d;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		V_0 = (uint8_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001d:
	{
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___1_offset;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&V_2), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), NULL);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_7 = __this->___native_9;
		intptr_t L_8 = V_2;
		int32_t L_9 = ___2_count;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = DeflateStreamNative_ReadZStream_m64072AF17150906ED32D871778DC5EF313FADD9F(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Compression.DeflateStream::ReadAsyncMemory(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 DeflateStream_ReadAsyncMemory_m1FC9EB7B2284773AA527913018FEA9EB82965327 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_destination, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_0 = ___0_destination;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_2;
		L_2 = Stream_ReadAsync_m1AA84A1F2DD3C7555BFC97A636E1CE56EB106B98(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::ReadCore(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadCore_m58E605C082DCF3455C4D56EBEBB8F2ABECCC9B40 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)));
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6 = V_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_inline(L_5, 0, L_6, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_RuntimeMethod_var);
		V_2 = L_7;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8 = ___0_destination;
		Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542((&V_2), L_8, Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->___disposed_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16770065DAB8E218EBB0B0BB3BC4FE763DF3C18B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0027:
	{
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, __this);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral547999BA16094C3536189EA1CC631B96EFC47117)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_003a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_array;
		NullCheck(L_8);
		V_0 = ((int32_t)(((RuntimeArray*)L_8)->max_length));
		int32_t L_9 = ___1_offset;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_10 = ___2_count;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}

IL_0046:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C850BA1FC7F3581DBA2DD6DDF642D5C34A8C120)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0051:
	{
		int32_t L_12 = ___1_offset;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_0060;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFC82027EEEA4BFAD4FE7FBFDD886E7D82ADBEA69)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0060:
	{
		int32_t L_15 = ___1_offset;
		int32_t L_16 = ___2_count;
		int32_t L_17 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_15, L_16))) <= ((int32_t)L_17)))
		{
			goto IL_0071;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53549F14C4C0C01E846937308C01413567514ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0071:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___0_array;
		int32_t L_20 = ___1_offset;
		int32_t L_21 = ___2_count;
		int32_t L_22;
		L_22 = DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C(__this, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___2_count;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_1 = L_2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0013;
		}
	}

IL_000e:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_001c;
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		V_0 = (uint8_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001c:
	{
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___1_offset;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&V_2), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), NULL);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_7 = __this->___native_9;
		intptr_t L_8 = V_2;
		int32_t L_9 = ___2_count;
		NullCheck(L_7);
		DeflateStreamNative_WriteZStream_m4B066C7A2E031A2CA6EE0FE876A9611242630F18(L_7, L_8, L_9, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		return;
	}
}
// System.Threading.Tasks.ValueTask System.IO.Compression.DeflateStream::WriteAsyncMemory(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F DeflateStream_WriteAsyncMemory_mDEFCEC8FAA595B11419D022F351AD825C01AFCE6 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_2;
		L_2 = Stream_WriteAsync_m31847C7A29AAFDA503991986F2BC02367F7A1C34(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void System.IO.Compression.DeflateStream::WriteCore(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteCore_mC6ADF328D0A66CAFEEC9B23F89A22C223DFF3730 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E((&___0_source), ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_RuntimeMethod_var);
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_source), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_0, 0, L_1);
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_6 = ___1_offset;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_8 = ___2_count;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0045:
	{
		bool L_10;
		L_10 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		if (L_10)
		{
			goto IL_0058;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_11 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral606F0CC71C796275607A15AAF1A3AA6B5E27B434)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0058:
	{
		int32_t L_12 = ___1_offset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = ___2_count;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)))))
		{
			goto IL_006b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_array;
		int32_t L_17 = ___1_offset;
		int32_t L_18 = ___2_count;
		DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845(__this, L_16, L_17, L_18, NULL);
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Flush_mE12E917486F3EA41FE453945AA5B5617F80E6D0C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Flush_mE12E917486F3EA41FE453945AA5B5617F80E6D0C_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_5 = __this->___native_9;
		NullCheck(L_5);
		DeflateStreamNative_Flush_m60D8D1C3DEBB720E402625ECFA9A0CFCA69E8F6F(L_5, NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_asyncCallback, RuntimeObject* ___4_asyncState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___disposed_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, __this);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_5 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05EB610FCC2B53833966AA8CE4B029154C502A88)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_003a:
	{
		int32_t L_8 = ___2_count;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_004e:
	{
		int32_t L_10 = ___1_offset;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_0062:
	{
		int32_t L_12 = ___2_count;
		int32_t L_13 = ___1_offset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_array;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_12, L_13))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_0075:
	{
		ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* L_16 = (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6*)il2cpp_codegen_object_new(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ReadMethod__ctor_mA65629D1C063B5E57095F952077323B5CE96C396(L_16, __this, (intptr_t)((void*)DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C_RuntimeMethod_var), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_array;
		int32_t L_18 = ___1_offset;
		int32_t L_19 = ___2_count;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_20 = ___3_asyncCallback;
		RuntimeObject* L_21 = ___4_asyncState;
		NullCheck(L_16);
		RuntimeObject* L_22;
		L_22 = ReadMethod_BeginInvoke_mE465A26187BE3F1829ECA0C02AFAEFCA6D2F6EEF(L_16, L_17, L_18, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_asyncCallback, RuntimeObject* ___4_asyncState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___disposed_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88E3C436425EACB2A5AAA1F1DAA0E9E15389128D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_003a:
	{
		int32_t L_8 = ___2_count;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_004e:
	{
		int32_t L_10 = ___1_offset;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_0062:
	{
		int32_t L_12 = ___2_count;
		int32_t L_13 = ___1_offset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_array;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_12, L_13))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_0075:
	{
		WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* L_16 = (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9*)il2cpp_codegen_object_new(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WriteMethod__ctor_mBE4CCCE38227B2D866CB539879255AD8B0C2B51A(L_16, __this, (intptr_t)((void*)DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845_RuntimeMethod_var), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_array;
		int32_t L_18 = ___1_offset;
		int32_t L_19 = ___2_count;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_20 = ___3_asyncCallback;
		RuntimeObject* L_21 = ___4_asyncState;
		NullCheck(L_16);
		RuntimeObject* L_22;
		L_22 = WriteMethod_BeginInvoke_m4A29F5255900687782F0A92A0A4D043AEA2C982C(L_16, L_17, L_18, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::EndRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B4_0 = NULL;
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B3_0 = NULL;
	ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* G_B6_0 = NULL;
	ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_asyncResult;
		AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* L_3 = ((AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760*)IsInstClass((RuntimeObject*)L_2, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var));
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var)));
	}

IL_0027:
	{
		NullCheck(G_B4_0);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate() */, G_B4_0);
		ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* L_6 = ((ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6*)IsInstSealed((RuntimeObject*)L_5, ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var));
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var)));
	}

IL_0044:
	{
		RuntimeObject* L_8 = ___0_asyncResult;
		NullCheck(G_B6_0);
		int32_t L_9;
		L_9 = ReadMethod_EndInvoke_mBCA4D1483C0504BF239C2305B7201E1EC72ED6F7(G_B6_0, L_8, NULL);
		return L_9;
	}
}
// System.Void System.IO.Compression.DeflateStream::EndWrite(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B4_0 = NULL;
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B3_0 = NULL;
	WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* G_B6_0 = NULL;
	WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_asyncResult;
		AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* L_3 = ((AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760*)IsInstClass((RuntimeObject*)L_2, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var));
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var)));
	}

IL_0027:
	{
		NullCheck(G_B4_0);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate() */, G_B4_0);
		WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* L_6 = ((WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9*)IsInstSealed((RuntimeObject*)L_5, WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var));
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var)));
	}

IL_0044:
	{
		RuntimeObject* L_8 = ___0_asyncResult;
		NullCheck(G_B6_0);
		WriteMethod_EndInvoke_mFDA332678A1FD46BAE42F3A0DF2073FD9CC6628C(G_B6_0, L_8, NULL);
		return;
	}
}
// System.Int64 System.IO.Compression.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_Seek_mCABEFA32513E0858BC7A98F05AAA217A09C65B16 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, int64_t ___0_offset, int32_t ___1_origin, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Seek_mCABEFA32513E0858BC7A98F05AAA217A09C65B16_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.DeflateStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_SetLength_mC18B3CCD1225B3C3A15EF54830C44236670F63F3 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_SetLength_mC18B3CCD1225B3C3A15EF54830C44236670F63F3_RuntimeMethod_var)));
	}
}
// System.Boolean System.IO.Compression.DeflateStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanRead_mDDA3C3CEE73CFCD62DE14F5DE9F27C7A5615976E (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_8;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = __this->___mode_6;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___base_stream_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_2);
		return L_3;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.Compression.DeflateStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanSeek_m93DEADA4FB38CBBAB266F8B7DBAFE508AEC222E4 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.Compression.DeflateStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanWrite_m95EB501342F11B287A529DE15089097EDF7C215F (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_8;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = __this->___mode_6;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___base_stream_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_2);
		return L_3;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Int64 System.IO.Compression.DeflateStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Length_m8C7CE98029153C5065D28496ACE3F99CB644897C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Length_m8C7CE98029153C5065D28496ACE3F99CB644897C_RuntimeMethod_var)));
	}
}
// System.Int64 System.IO.Compression.DeflateStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Position_mA6B4FE66DBE953C5504A3561AD75FCC87718F376 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Position_mA6B4FE66DBE953C5504A3561AD75FCC87718F376_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.DeflateStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_Position_m9BA570C4BF91C325EFE8E6BEAF40E6AB54BCC885 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_Position_m9BA570C4BF91C325EFE8E6BEAF40E6AB54BCC885_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_Multicast(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* currentDelegate = reinterpret_cast<ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_array, ___1_offset, ___2_count, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenInst(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	NullCheck(___0_array);
	typedef int32_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_array, ___1_offset, ___2_count, method);
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStatic(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_array, ___1_offset, ___2_count, method);
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStaticInvoker(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_array, ___1_offset, ___2_count);
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_ClosedStaticInvoker(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_array, ___1_offset, ___2_count);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_array' to native representation
	uint8_t* ____0_array_marshaled = NULL;
	if (___0_array != NULL)
	{
		____0_array_marshaled = reinterpret_cast<uint8_t*>((___0_array)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____0_array_marshaled, ___1_offset, ___2_count);

	return returnValue;
}
// System.Void System.IO.Compression.DeflateStream/ReadMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadMethod__ctor_mA65629D1C063B5E57095F952077323B5CE96C396 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_Multicast;
}
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::Invoke(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_array, ___1_offset, ___2_count, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult System.IO.Compression.DeflateStream/ReadMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadMethod_BeginInvoke_mE465A26187BE3F1829ECA0C02AFAEFCA6D2F6EEF (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_array;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_offset);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_count);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadMethod_EndInvoke_mBCA4D1483C0504BF239C2305B7201E1EC72ED6F7 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_Multicast(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* currentDelegate = reinterpret_cast<WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_array, ___1_offset, ___2_count, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenInst(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	NullCheck(___0_array);
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_array, ___1_offset, ___2_count, method);
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStatic(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_array, ___1_offset, ___2_count, method);
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStaticInvoker(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	InvokerActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_array, ___1_offset, ___2_count);
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_ClosedStaticInvoker(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_array, ___1_offset, ___2_count);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9 (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_array' to native representation
	uint8_t* ____0_array_marshaled = NULL;
	if (___0_array != NULL)
	{
		____0_array_marshaled = reinterpret_cast<uint8_t*>((___0_array)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____0_array_marshaled, ___1_offset, ___2_count);

}
// System.Void System.IO.Compression.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod__ctor_mBE4CCCE38227B2D866CB539879255AD8B0C2B51A (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_Multicast;
}
// System.Void System.IO.Compression.DeflateStream/WriteMethod::Invoke(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1 (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_array, ___1_offset, ___2_count, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult System.IO.Compression.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteMethod_BeginInvoke_m4A29F5255900687782F0A92A0A4D043AEA2C982C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_array;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_offset);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_count);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void System.IO.Compression.DeflateStream/WriteMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod_EndInvoke_mFDA332678A1FD46BAE42F3A0DF2073FD9CC6628C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3(intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3(___0_buffer, ___1_length, ___2_data, NULL);

	return returnValue;
}
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52(intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52(___0_buffer, ___1_length, ___2_data, NULL);

	return returnValue;
}
// System.Void System.IO.Compression.DeflateStreamNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative__ctor_mCDA4F9E1FF67EFCE84EBB8889DDDD30F4A12BB0E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStreamNative::Create(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* DeflateStreamNative_Create_m94968BF2895D7838185DE455772F3CDDD6E6F4A6 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_compressedStream, int32_t ___1_mode, bool ___2_gzip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* V_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B2_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B1_0 = NULL;
	UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* G_B3_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B3_1 = NULL;
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_0 = (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)il2cpp_codegen_object_new(DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DeflateStreamNative__ctor_mCDA4F9E1FF67EFCE84EBB8889DDDD30F4A12BB0E(L_0, NULL);
		V_0 = L_0;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_1 = V_0;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_2 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3;
		L_3 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(L_2, NULL);
		NullCheck(L_1);
		L_1->___data_3 = L_3;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_4 = V_0;
		int32_t L_5 = ___1_mode;
		G_B1_0 = L_4;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			G_B2_0 = L_4;
			goto IL_0025;
		}
	}
	{
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* L_6 = (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA*)il2cpp_codegen_object_new(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6(L_6, NULL, (intptr_t)((void*)DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3_RuntimeMethod_var), NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0025:
	{
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* L_7 = (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA*)il2cpp_codegen_object_new(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6(L_7, NULL, (intptr_t)((void*)DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52_RuntimeMethod_var), NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		G_B3_1->___feeder_0 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___feeder_0), (void*)G_B3_0);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_8 = V_0;
		int32_t L_9 = ___1_mode;
		bool L_10 = ___2_gzip;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_11 = V_0;
		NullCheck(L_11);
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* L_12 = L_11->___feeder_0;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_13 = V_0;
		NullCheck(L_13);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_14 = L_13->___data_3;
		intptr_t L_15;
		L_15 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_14, NULL);
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_16;
		L_16 = DeflateStreamNative_CreateZStream_m41CBCDEB95EA9C72B49374B3EFA96709C97A5F01(L_9, L_10, L_12, L_15, NULL);
		NullCheck(L_8);
		L_8->___z_stream_2 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___z_stream_2), (void*)L_16);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_17 = V_0;
		NullCheck(L_17);
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_18 = L_17->___z_stream_2;
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_18);
		if (!L_19)
		{
			goto IL_006a;
		}
	}
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_20 = V_0;
		NullCheck(L_20);
		DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E(L_20, (bool)1, NULL);
		return (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)NULL;
	}

IL_006a:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_21 = V_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22 = ___0_compressedStream;
		NullCheck(L_21);
		L_21->___base_stream_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___base_stream_1), (void*)L_22);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_23 = V_0;
		return L_23;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Finalize_mE02A29EE58E329CFC439284070FF87A31B18C701 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E(__this, (bool)0, NULL);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_disposing;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		bool L_1 = __this->___disposed_4;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		__this->___disposed_4 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		goto IL_0025;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ((Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields*)il2cpp_codegen_static_fields_for(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var))->___Null_1;
		__this->___base_stream_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base_stream_1), (void*)L_2);
	}

IL_0025:
	{
		__this->___io_buffer_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___io_buffer_5), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_3 = __this->___z_stream_2;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_4 = __this->___z_stream_2;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_4);
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_6 = __this->___z_stream_2;
		NullCheck(L_6);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_6, NULL);
	}

IL_004c:
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_7 = __this->___data_3;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_8 = (&__this->___data_3);
		bool L_9;
		L_9 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_8, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_10 = (&__this->___data_3);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_10, NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Flush_m60D8D1C3DEBB720E402625ECFA9A0CFCA69E8F6F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_0 = __this->___z_stream_2;
		int32_t L_1;
		L_1 = DeflateStreamNative_Flush_m7E8FA114A01ED15906DC66D6086E41DF2EAB4E50(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47(__this, L_2, _stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6, NULL);
		return;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_m64072AF17150906ED32D871778DC5EF313FADD9F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_0 = __this->___z_stream_2;
		intptr_t L_1 = ___0_buffer;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = DeflateStreamNative_ReadZStream_mF14CF4F54AE09805AA81A61FB6D04D6EA1E397FE(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47(__this, L_4, _stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F, NULL);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::WriteZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_WriteZStream_m4B066C7A2E031A2CA6EE0FE876A9611242630F18 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_0 = __this->___z_stream_2;
		intptr_t L_1 = ___0_buffer;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = DeflateStreamNative_WriteZStream_m78EAA03E23C1445D652F936373061207CE50579F(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47(__this, L_4, _stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F, NULL);
		return;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3 (intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* V_1 = NULL;
	{
		intptr_t L_0 = ___2_data;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)IsInstClass((RuntimeObject*)L_2, DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var));
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_3 = V_1;
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return (-1);
	}

IL_0019:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_4 = V_1;
		intptr_t L_5 = ___0_buffer;
		int32_t L_6 = ___1_length;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = DeflateStreamNative_UnmanagedRead_mC17A13844F4560E954F816037B0A5C04FFEDECB1(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_mC17A13844F4560E954F816037B0A5C04FFEDECB1 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___io_buffer_5;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___io_buffer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___io_buffer_5), (void*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = ___1_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___io_buffer_5;
		NullCheck(L_3);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		V_0 = L_4;
	}
	try
	{// begin try (depth: 1)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->___base_stream_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___io_buffer_5;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8;
		L_8 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, L_7);
		V_1 = L_8;
		goto IL_004a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003d;
		}
		throw e;
	}

CATCH_003d:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_9 = V_2;
		__this->___last_error_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___last_error_6), (void*)L_9);
		V_3 = ((int32_t)-12);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005e;
	}// end catch (depth: 1)

IL_004a:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___io_buffer_5;
		intptr_t L_12 = ___0_buffer;
		int32_t L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_11, 0, L_12, L_13, NULL);
	}

IL_005c:
	{
		int32_t L_14 = V_1;
		return L_14;
	}

IL_005e:
	{
		int32_t L_15 = V_3;
		return L_15;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52 (intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* V_1 = NULL;
	{
		intptr_t L_0 = ___2_data;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)IsInstClass((RuntimeObject*)L_2, DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var));
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_3 = V_1;
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return (-1);
	}

IL_0019:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_4 = V_1;
		intptr_t L_5 = ___0_buffer;
		int32_t L_6 = ___1_length;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = DeflateStreamNative_UnmanagedWrite_m73ADBE62E8371FFDFFB380F568A8510E8644B1BD(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_m73ADBE62E8371FFDFFB380F568A8510E8644B1BD (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = 0;
		goto IL_0074;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___io_buffer_5;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___io_buffer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___io_buffer_5), (void*)L_1);
	}

IL_001c:
	{
		int32_t L_2 = ___1_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___io_buffer_5;
		NullCheck(L_3);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		V_1 = L_4;
		intptr_t L_5 = ___0_buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___io_buffer_5;
		int32_t L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_5, L_6, 0, L_7, NULL);
	}
	try
	{// begin try (depth: 1)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->___base_stream_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___io_buffer_5;
		int32_t L_10 = V_1;
		NullCheck(L_8);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, L_10);
		goto IL_005b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004e;
		}
		throw e;
	}

CATCH_004e:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_11 = V_2;
		__this->___last_error_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___last_error_6), (void*)L_11);
		V_3 = ((int32_t)-12);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_007a;
	}// end catch (depth: 1)

IL_005b:
	{
		void* L_12;
		L_12 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___0_buffer), NULL);
		int32_t L_13 = V_1;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&___0_buffer), ((void*)il2cpp_codegen_add((intptr_t)L_12, L_13)), NULL);
		int32_t L_14 = ___1_length;
		int32_t L_15 = V_1;
		___1_length = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
	}

IL_0074:
	{
		int32_t L_18 = ___1_length;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_19 = V_0;
		return L_19;
	}

IL_007a:
	{
		int32_t L_20 = V_3;
		return L_20;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::CheckResult(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, int32_t ___0_result, String_t* ___1_where, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = ___0_result;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		Exception_t** L_1 = (&__this->___last_error_6);
		Exception_t* L_2;
		L_2 = InterlockedExchangeImpl<Exception_t*>(L_1, (Exception_t*)NULL);
		V_0 = L_2;
		Exception_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t* L_4 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47_RuntimeMethod_var)));
	}

IL_0017:
	{
		int32_t L_5 = ___0_result;
		switch (((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)-11))))
		{
			case 0:
			{
				goto IL_0086;
			}
			case 1:
			{
				goto IL_007e;
			}
			case 2:
			{
				goto IL_008e;
			}
			case 3:
			{
				goto IL_008e;
			}
			case 4:
			{
				goto IL_008e;
			}
			case 5:
			{
				goto IL_0076;
			}
			case 6:
			{
				goto IL_006e;
			}
			case 7:
			{
				goto IL_0066;
			}
			case 8:
			{
				goto IL_005e;
			}
			case 9:
			{
				goto IL_0056;
			}
			case 10:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_008e;
	}

IL_004e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37));
		goto IL_0094;
	}

IL_0056:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2523CBFED84EF78578D85909448E8C0C4ECDA163));
		goto IL_0094;
	}

IL_005e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2E90A74AF10748DDAB6F42388BD10A4D42D95BB));
		goto IL_0094;
	}

IL_0066:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF678DBEEE39BA115BA762E7766D189E0CD47CD41));
		goto IL_0094;
	}

IL_006e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE290FE00878B1C01707983AAF8A6BB8464DFAB6D));
		goto IL_0094;
	}

IL_0076:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DA0AC110457767EB539C31A3B243D2C4C5C2D9D));
		goto IL_0094;
	}

IL_007e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral61A2E25EECE5CA17D408DC393538F1767DE78408));
		goto IL_0094;
	}

IL_0086:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53B6A8F4629CFB02CF5AFB3B1D3C6A5584EB8548));
		goto IL_0094;
	}

IL_008e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37));
	}

IL_0094:
	{
		String_t* L_6 = V_1;
		String_t* L_7 = ___1_where;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)), L_7, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_9 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47_RuntimeMethod_var)));
	}
}
// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle System.IO.Compression.DeflateStreamNative::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* DeflateStreamNative_CreateZStream_m41CBCDEB95EA9C72B49374B3EFA96709C97A5F01 (int32_t ___0_compress, bool ___1_gzip, UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* ___2_feeder, intptr_t ___3_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (CDECL *PInvokeFunc) (int32_t, int32_t, Il2CppMethodPointer, intptr_t);

	// Marshaling of parameter '___2_feeder' to native representation
	Il2CppMethodPointer ____2_feeder_marshaled = NULL;
	____2_feeder_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_feeder));

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(CreateZStream)(___0_compress, static_cast<int32_t>(___1_gzip), ____2_feeder_marshaled, ___3_data);

	// Marshaling of return value back from native representation
	SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* _returnValue_unmarshaled = (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8*)il2cpp_codegen_object_new(SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8_il2cpp_TypeInfo_var);
	SafeDeflateStreamHandle__ctor_mBDF78EC52524A938914F593AF5C198C9F7632E41(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::CloseZStream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_CloseZStream_m6FB720C1050656B8E8CF3BB53856D407509D6D0A (intptr_t ___0_stream, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CloseZStream)(___0_stream);

	return returnValue;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::Flush(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_Flush_m7E8FA114A01ED15906DC66D6086E41DF2EAB4E50 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___0_stream, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);

	// Marshaling of parameter '___0_stream' to native representation
	void* ____0_stream_marshaled = NULL;
	if (___0_stream == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____0_stream = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_stream, (&___safeHandle_reference_incremented_for____0_stream), NULL);
	____0_stream_marshaled = reinterpret_cast<void*>((___0_stream)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Flush)(____0_stream_marshaled);

	// Marshaling cleanup of parameter '___0_stream' native representation
	if (___safeHandle_reference_incremented_for____0_stream)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_stream, NULL);
	}

	return returnValue;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_mF14CF4F54AE09805AA81A61FB6D04D6EA1E397FE (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___0_stream, intptr_t ___1_buffer, int32_t ___2_length, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, intptr_t, int32_t);

	// Marshaling of parameter '___0_stream' to native representation
	void* ____0_stream_marshaled = NULL;
	if (___0_stream == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____0_stream = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_stream, (&___safeHandle_reference_incremented_for____0_stream), NULL);
	____0_stream_marshaled = reinterpret_cast<void*>((___0_stream)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ReadZStream)(____0_stream_marshaled, ___1_buffer, ___2_length);

	// Marshaling cleanup of parameter '___0_stream' native representation
	if (___safeHandle_reference_incremented_for____0_stream)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_stream, NULL);
	}

	return returnValue;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::WriteZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_WriteZStream_m78EAA03E23C1445D652F936373061207CE50579F (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___0_stream, intptr_t ___1_buffer, int32_t ___2_length, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, intptr_t, int32_t);

	// Marshaling of parameter '___0_stream' to native representation
	void* ____0_stream_marshaled = NULL;
	if (___0_stream == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____0_stream = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_stream, (&___safeHandle_reference_incremented_for____0_stream), NULL);
	____0_stream_marshaled = reinterpret_cast<void*>((___0_stream)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WriteZStream)(____0_stream_marshaled, ___1_buffer, ___2_length);

	// Marshaling cleanup of parameter '___0_stream' native representation
	if (___safeHandle_reference_incremented_for____0_stream)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_stream, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_Multicast(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* currentDelegate = reinterpret_cast<UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_buffer, ___1_length, ___2_data, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenInst(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_buffer, ___1_length, ___2_data, method);
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStatic(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_buffer, ___1_length, ___2_data, method);
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStaticInvoker(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_buffer, ___1_length, ___2_data);
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_ClosedStaticInvoker(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_buffer, ___1_length, ___2_data);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_buffer, ___1_length, ___2_data);

	return returnValue;
}
// System.Void System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6 (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_Multicast;
}
// System.Int32 System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite::Invoke(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22 (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_buffer, ___1_length, ___2_data, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeDeflateStreamHandle_get_IsInvalid_m8220E0B23A6DE1C8171ADDD78B30FBC346F1D1D1 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeDeflateStreamHandle__ctor_mBDF78EC52524A938914F593AF5C198C9F7632E41 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Boolean System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeDeflateStreamHandle_ReleaseHandle_m8A0A695A4A1C2F46C8BFBE3BD1526BCDC6066704 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		int32_t L_1;
		L_1 = DeflateStreamNative_CloseZStream_m6FB720C1050656B8E8CF3BB53856D407509D6D0A(L_0, NULL);
		goto IL_0011;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0011;
	}// end catch (depth: 1)

IL_0011:
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m171C269D828658C44041FA68B6DE8CA290ED517F (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.ConfigurationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationException__ctor_mC4D5DB30C0BCEBA5C8B632909E46F429605C312F (ConfigurationException_t6DEA92A8714A1377436DFC82D7B07AEB93FFFC30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationException__ctor_mC4D5DB30C0BCEBA5C8B632909E46F429605C312F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigurationException__ctor_mC4D5DB30C0BCEBA5C8B632909E46F429605C312F_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ConfigurationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationException__ctor_m4EABBBC8C0A996CA1E4B29DEE0F8F050E72B359A (ConfigurationException_t6DEA92A8714A1377436DFC82D7B07AEB93FFFC30* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationException__ctor_m4EABBBC8C0A996CA1E4B29DEE0F8F050E72B359A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigurationException__ctor_m4EABBBC8C0A996CA1E4B29DEE0F8F050E72B359A_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ConfigurationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationException__ctor_m72C69635FB6F5CA5FEEBAE3075E4B85D82213408 (ConfigurationException_t6DEA92A8714A1377436DFC82D7B07AEB93FFFC30* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationException__ctor_m72C69635FB6F5CA5FEEBAE3075E4B85D82213408_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigurationException__ctor_m72C69635FB6F5CA5FEEBAE3075E4B85D82213408_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationException__ctor_mD234A8C7FFF72B29BEDCC1621165028A0FF4B8C8 (ConfigurationException_t6DEA92A8714A1377436DFC82D7B07AEB93FFFC30* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationException__ctor_mD234A8C7FFF72B29BEDCC1621165028A0FF4B8C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigurationException__ctor_mD234A8C7FFF72B29BEDCC1621165028A0FF4B8C8_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Exception,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationException__ctor_mAD37E420B69955D38616E7DAF28130D09BE2B354 (ConfigurationException_t6DEA92A8714A1377436DFC82D7B07AEB93FFFC30* __this, String_t* ___0_message, Exception_t* ___1_inner, String_t* ___2_filename, int32_t ___3_line, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationException__ctor_mAD37E420B69955D38616E7DAF28130D09BE2B354_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigurationException__ctor_mAD37E420B69955D38616E7DAF28130D09BE2B354_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Exception,System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationException__ctor_mADD98558BB6B39A212067EC4FDC5D315AB41A4B7 (ConfigurationException_t6DEA92A8714A1377436DFC82D7B07AEB93FFFC30* __this, String_t* ___0_message, Exception_t* ___1_inner, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___2_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationException__ctor_mADD98558BB6B39A212067EC4FDC5D315AB41A4B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigurationException__ctor_mADD98558BB6B39A212067EC4FDC5D315AB41A4B7_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationException__ctor_mD2CC0BE020C42476E7039ECE00873FEE89BF0AA3 (ConfigurationException_t6DEA92A8714A1377436DFC82D7B07AEB93FFFC30* __this, String_t* ___0_message, String_t* ___1_filename, int32_t ___2_line, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationException__ctor_mD2CC0BE020C42476E7039ECE00873FEE89BF0AA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigurationException__ctor_mD2CC0BE020C42476E7039ECE00873FEE89BF0AA3_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationException__ctor_mB57430D165F4E87787FE2C00D4D5821656FB3B01 (ConfigurationException_t6DEA92A8714A1377436DFC82D7B07AEB93FFFC30* __this, String_t* ___0_message, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___1_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationException__ctor_mB57430D165F4E87787FE2C00D4D5821656FB3B01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigurationException__ctor_mB57430D165F4E87787FE2C00D4D5821656FB3B01_RuntimeMethod_var);
		return;
	}
}
// System.String System.Configuration.ConfigurationException::get_BareMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationException_get_BareMessage_mF7AF4B07C27CB39CF6E53D5B04842773DB5DC1C3 (ConfigurationException_t6DEA92A8714A1377436DFC82D7B07AEB93FFFC30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationException_get_BareMessage_mF7AF4B07C27CB39CF6E53D5B04842773DB5DC1C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigurationException_get_BareMessage_mF7AF4B07C27CB39CF6E53D5B04842773DB5DC1C3_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.String System.Configuration.ConfigurationException::get_Filename()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationException_get_Filename_mEC11ACE5BE4566D6359DB5B3C357BFDEE511FC59 (ConfigurationException_t6DEA92A8714A1377436DFC82D7B07AEB93FFFC30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationException_get_Filename_mEC11ACE5BE4566D6359DB5B3C357BFDEE511FC59_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigurationException_get_Filename_mEC11ACE5BE4566D6359DB5B3C357BFDEE511FC59_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Int32 System.Configuration.ConfigurationException::get_Line()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigurationException_get_Line_m97C6A9EA28B62A02CFD5C6F4AC8A865C090BA7E7 (ConfigurationException_t6DEA92A8714A1377436DFC82D7B07AEB93FFFC30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationException_get_Line_m97C6A9EA28B62A02CFD5C6F4AC8A865C090BA7E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(ConfigurationException_get_Line_m97C6A9EA28B62A02CFD5C6F4AC8A865C090BA7E7_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.String System.Configuration.ConfigurationException::GetXmlNodeFilename(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationException_GetXmlNodeFilename_m4D67F72D4D04A929A036F7BDF3B05DFC9C542CD8 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationException_GetXmlNodeFilename_m4D67F72D4D04A929A036F7BDF3B05DFC9C542CD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigurationException_GetXmlNodeFilename_m4D67F72D4D04A929A036F7BDF3B05DFC9C542CD8_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Int32 System.Configuration.ConfigurationException::GetXmlNodeLineNumber(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigurationException_GetXmlNodeLineNumber_m073E2256B874BF48C0465592B64D415DCE7B4036 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationException_GetXmlNodeLineNumber_m073E2256B874BF48C0465592B64D415DCE7B4036_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(ConfigurationException_GetXmlNodeLineNumber_m073E2256B874BF48C0465592B64D415DCE7B4036_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.InteropServices.StandardOleMarshalObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardOleMarshalObject__ctor_m61A7F765BCC9E46F7C0448F1F682FFE3979FA73D (StandardOleMarshalObject_tB4B30E2C7691AC07C48EA8F43E05528759107D1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardOleMarshalObject__ctor_m61A7F765BCC9E46F7C0448F1F682FFE3979FA73D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(StandardOleMarshalObject__ctor_m61A7F765BCC9E46F7C0448F1F682FFE3979FA73D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsBase__ctor_m1B51F925B74248D1CA24A1989E2EDA99E2FED8C7 (SettingsBase_t1ECBB76CB08D593098166B1C8D62053E51997BEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsBase__ctor_m1B51F925B74248D1CA24A1989E2EDA99E2FED8C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsBase__ctor_m1B51F925B74248D1CA24A1989E2EDA99E2FED8C7_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.SettingsContext System.Configuration.SettingsBase::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsContext_tE2A8637CE8FECB35A8FB44136C440FA37ACD2AFE* SettingsBase_get_Context_mCAA6C5DD74B0C4F494247135BA3E15E4A1A23BAE (SettingsBase_t1ECBB76CB08D593098166B1C8D62053E51997BEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsBase_get_Context_mCAA6C5DD74B0C4F494247135BA3E15E4A1A23BAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsBase_get_Context_mCAA6C5DD74B0C4F494247135BA3E15E4A1A23BAE_RuntimeMethod_var);
		return (SettingsContext_tE2A8637CE8FECB35A8FB44136C440FA37ACD2AFE*)NULL;
	}
}
// System.Boolean System.Configuration.SettingsBase::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SettingsBase_get_IsSynchronized_m9E8CB0B4DF0FDE8C5CCEE648648DB298361AD657 (SettingsBase_t1ECBB76CB08D593098166B1C8D62053E51997BEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsBase_get_IsSynchronized_m9E8CB0B4DF0FDE8C5CCEE648648DB298361AD657_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(SettingsBase_get_IsSynchronized_m9E8CB0B4DF0FDE8C5CCEE648648DB298361AD657_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Object System.Configuration.SettingsBase::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingsBase_get_Item_m89E2FF524A6059C417C77DC53F9CCA238B6261F1 (SettingsBase_t1ECBB76CB08D593098166B1C8D62053E51997BEF* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsBase_get_Item_m89E2FF524A6059C417C77DC53F9CCA238B6261F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsBase_get_Item_m89E2FF524A6059C417C77DC53F9CCA238B6261F1_RuntimeMethod_var);
		return NULL;
	}
}
// System.Void System.Configuration.SettingsBase::set_Item(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsBase_set_Item_m17EEF6ABC01A275425B10E0AF56BD3025B5DBFDF (SettingsBase_t1ECBB76CB08D593098166B1C8D62053E51997BEF* __this, String_t* ___0_propertyName, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsBase_set_Item_m17EEF6ABC01A275425B10E0AF56BD3025B5DBFDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsBase_set_Item_m17EEF6ABC01A275425B10E0AF56BD3025B5DBFDF_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.SettingsPropertyCollection System.Configuration.SettingsBase::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* SettingsBase_get_Properties_mDFAC673BD89D0919C7BD4AB6F4C9A5D0E16219EC (SettingsBase_t1ECBB76CB08D593098166B1C8D62053E51997BEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsBase_get_Properties_mDFAC673BD89D0919C7BD4AB6F4C9A5D0E16219EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsBase_get_Properties_mDFAC673BD89D0919C7BD4AB6F4C9A5D0E16219EC_RuntimeMethod_var);
		return (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3*)NULL;
	}
}
// System.Configuration.SettingsPropertyValueCollection System.Configuration.SettingsBase::get_PropertyValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262* SettingsBase_get_PropertyValues_m0EE56441FF39C2C39825AA688ADB25B850B3A984 (SettingsBase_t1ECBB76CB08D593098166B1C8D62053E51997BEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsBase_get_PropertyValues_m0EE56441FF39C2C39825AA688ADB25B850B3A984_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsBase_get_PropertyValues_m0EE56441FF39C2C39825AA688ADB25B850B3A984_RuntimeMethod_var);
		return (SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262*)NULL;
	}
}
// System.Configuration.SettingsProviderCollection System.Configuration.SettingsBase::get_Providers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsProviderCollection_tA874FD5CCC7B667159CCFF34D055516DBAAD39FF* SettingsBase_get_Providers_mDA6FBF448F23836E69D0D32BA87B925B59FE19C7 (SettingsBase_t1ECBB76CB08D593098166B1C8D62053E51997BEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsBase_get_Providers_mDA6FBF448F23836E69D0D32BA87B925B59FE19C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsBase_get_Providers_mDA6FBF448F23836E69D0D32BA87B925B59FE19C7_RuntimeMethod_var);
		return (SettingsProviderCollection_tA874FD5CCC7B667159CCFF34D055516DBAAD39FF*)NULL;
	}
}
// System.Void System.Configuration.SettingsBase::Initialize(System.Configuration.SettingsContext,System.Configuration.SettingsPropertyCollection,System.Configuration.SettingsProviderCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsBase_Initialize_mAA3F185BDC6FC0ACE53BF48B10E3B7B8810CE18C (SettingsBase_t1ECBB76CB08D593098166B1C8D62053E51997BEF* __this, SettingsContext_tE2A8637CE8FECB35A8FB44136C440FA37ACD2AFE* ___0_context, SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* ___1_properties, SettingsProviderCollection_tA874FD5CCC7B667159CCFF34D055516DBAAD39FF* ___2_providers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsBase_Initialize_mAA3F185BDC6FC0ACE53BF48B10E3B7B8810CE18C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsBase_Initialize_mAA3F185BDC6FC0ACE53BF48B10E3B7B8810CE18C_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsBase::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsBase_Save_mC2C9AFE95FBD3AE6DDD7EDCB4B963FA27E5C7CC5 (SettingsBase_t1ECBB76CB08D593098166B1C8D62053E51997BEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsBase_Save_mC2C9AFE95FBD3AE6DDD7EDCB4B963FA27E5C7CC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsBase_Save_mC2C9AFE95FBD3AE6DDD7EDCB4B963FA27E5C7CC5_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.SettingsBase System.Configuration.SettingsBase::Synchronized(System.Configuration.SettingsBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsBase_t1ECBB76CB08D593098166B1C8D62053E51997BEF* SettingsBase_Synchronized_mFC15FE3105B39B5C98F8EACB1FC14A02C91FE78B (SettingsBase_t1ECBB76CB08D593098166B1C8D62053E51997BEF* ___0_settingsBase, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsBase_Synchronized_mFC15FE3105B39B5C98F8EACB1FC14A02C91FE78B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsBase_Synchronized_mFC15FE3105B39B5C98F8EACB1FC14A02C91FE78B_RuntimeMethod_var);
		return (SettingsBase_t1ECBB76CB08D593098166B1C8D62053E51997BEF*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsContext__ctor_m94CCD5EF845C832048404D2AFBB73E0045A1F17D (SettingsContext_tE2A8637CE8FECB35A8FB44136C440FA37ACD2AFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsContext__ctor_m94CCD5EF845C832048404D2AFBB73E0045A1F17D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsContext__ctor_m94CCD5EF845C832048404D2AFBB73E0045A1F17D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsPropertyCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyCollection__ctor_m8B8FA72E8E81C0279E732B947E4B83657C3C8260 (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection__ctor_m8B8FA72E8E81C0279E732B947E4B83657C3C8260_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection__ctor_m8B8FA72E8E81C0279E732B947E4B83657C3C8260_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Configuration.SettingsPropertyCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SettingsPropertyCollection_get_Count_mA9A3D42971791B050022BFBCBD16E8D9B892359E (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection_get_Count_mA9A3D42971791B050022BFBCBD16E8D9B892359E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection_get_Count_mA9A3D42971791B050022BFBCBD16E8D9B892359E_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean System.Configuration.SettingsPropertyCollection::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SettingsPropertyCollection_get_IsSynchronized_mC13D9B8E10B2514B56EB1A9C04FC919DA85352B8 (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection_get_IsSynchronized_mC13D9B8E10B2514B56EB1A9C04FC919DA85352B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection_get_IsSynchronized_mC13D9B8E10B2514B56EB1A9C04FC919DA85352B8_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Configuration.SettingsProperty System.Configuration.SettingsPropertyCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* SettingsPropertyCollection_get_Item_m3A3B1DB9D807F575183FFCE86681E4E48F55456F (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection_get_Item_m3A3B1DB9D807F575183FFCE86681E4E48F55456F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection_get_Item_m3A3B1DB9D807F575183FFCE86681E4E48F55456F_RuntimeMethod_var);
		return (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7*)NULL;
	}
}
// System.Object System.Configuration.SettingsPropertyCollection::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingsPropertyCollection_get_SyncRoot_m11F7E7BD0002106BDB63B8FDB99FDC90C4687B5D (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection_get_SyncRoot_m11F7E7BD0002106BDB63B8FDB99FDC90C4687B5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection_get_SyncRoot_m11F7E7BD0002106BDB63B8FDB99FDC90C4687B5D_RuntimeMethod_var);
		return NULL;
	}
}
// System.Void System.Configuration.SettingsPropertyCollection::Add(System.Configuration.SettingsProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyCollection_Add_mF1CDB181F10CD58975846165B120746A7E5F66AE (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* ___0_property, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection_Add_mF1CDB181F10CD58975846165B120746A7E5F66AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection_Add_mF1CDB181F10CD58975846165B120746A7E5F66AE_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyCollection_Clear_m0CCAF2C1877F5916A4B796F7910875B44397452F (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection_Clear_m0CCAF2C1877F5916A4B796F7910875B44397452F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection_Clear_m0CCAF2C1877F5916A4B796F7910875B44397452F_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Configuration.SettingsPropertyCollection::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingsPropertyCollection_Clone_mA5ADADB742B2E42F31BC383490E35458156B161A (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection_Clone_mA5ADADB742B2E42F31BC383490E35458156B161A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection_Clone_mA5ADADB742B2E42F31BC383490E35458156B161A_RuntimeMethod_var);
		return NULL;
	}
}
// System.Void System.Configuration.SettingsPropertyCollection::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyCollection_CopyTo_mE6919B85827B9C3353F08716B5B243E27F251650 (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection_CopyTo_mE6919B85827B9C3353F08716B5B243E27F251650_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection_CopyTo_mE6919B85827B9C3353F08716B5B243E27F251650_RuntimeMethod_var);
		return;
	}
}
// System.Collections.IEnumerator System.Configuration.SettingsPropertyCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingsPropertyCollection_GetEnumerator_mEB8EF3EAD28620107E54CB0D55B079574E40EE97 (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection_GetEnumerator_mEB8EF3EAD28620107E54CB0D55B079574E40EE97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection_GetEnumerator_mEB8EF3EAD28620107E54CB0D55B079574E40EE97_RuntimeMethod_var);
		return (RuntimeObject*)NULL;
	}
}
// System.Void System.Configuration.SettingsPropertyCollection::OnAdd(System.Configuration.SettingsProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyCollection_OnAdd_m71D8A44002CAF012DD0CDE9ACB6F832F0D2D5C82 (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* ___0_property, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection_OnAdd_m71D8A44002CAF012DD0CDE9ACB6F832F0D2D5C82_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection_OnAdd_m71D8A44002CAF012DD0CDE9ACB6F832F0D2D5C82_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyCollection::OnAddComplete(System.Configuration.SettingsProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyCollection_OnAddComplete_mE26A290C46FAB87813843D077137EDAA3C2BC555 (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* ___0_property, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection_OnAddComplete_mE26A290C46FAB87813843D077137EDAA3C2BC555_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection_OnAddComplete_mE26A290C46FAB87813843D077137EDAA3C2BC555_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyCollection::OnClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyCollection_OnClear_m0CEFCBD60C8E513F23E3BB193A070F36D49E86EB (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection_OnClear_m0CEFCBD60C8E513F23E3BB193A070F36D49E86EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection_OnClear_m0CEFCBD60C8E513F23E3BB193A070F36D49E86EB_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyCollection::OnClearComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyCollection_OnClearComplete_m9B49797B841C4FFA456256F63039E7E57EDCBBD1 (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection_OnClearComplete_m9B49797B841C4FFA456256F63039E7E57EDCBBD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection_OnClearComplete_m9B49797B841C4FFA456256F63039E7E57EDCBBD1_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyCollection::OnRemove(System.Configuration.SettingsProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyCollection_OnRemove_mF21C3B0ACD4C19EACE867624C6AA8ECC65E15FA9 (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* ___0_property, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection_OnRemove_mF21C3B0ACD4C19EACE867624C6AA8ECC65E15FA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection_OnRemove_mF21C3B0ACD4C19EACE867624C6AA8ECC65E15FA9_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyCollection::OnRemoveComplete(System.Configuration.SettingsProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyCollection_OnRemoveComplete_mAE53EFB51614E87674E8ED5328C700B846E0AD62 (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* ___0_property, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection_OnRemoveComplete_mAE53EFB51614E87674E8ED5328C700B846E0AD62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection_OnRemoveComplete_mAE53EFB51614E87674E8ED5328C700B846E0AD62_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyCollection::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyCollection_Remove_m4F77A12167FA3ADFC3735CA6D3D6CCB481018024 (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection_Remove_m4F77A12167FA3ADFC3735CA6D3D6CCB481018024_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection_Remove_m4F77A12167FA3ADFC3735CA6D3D6CCB481018024_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyCollection::SetReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyCollection_SetReadOnly_m325E469CC6F8643FFB2C229C4A21327C641BEFA7 (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyCollection_SetReadOnly_m325E469CC6F8643FFB2C229C4A21327C641BEFA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyCollection_SetReadOnly_m325E469CC6F8643FFB2C229C4A21327C641BEFA7_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsProperty::.ctor(System.Configuration.SettingsProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsProperty__ctor_mE88BCE75FEEE68C18C0584E32537B10A5A0AFF83 (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* ___0_propertyToCopy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty__ctor_mE88BCE75FEEE68C18C0584E32537B10A5A0AFF83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty__ctor_mE88BCE75FEEE68C18C0584E32537B10A5A0AFF83_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsProperty::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsProperty__ctor_m43F58F4170F26602C5C52130A900254529B7B09F (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty__ctor_m43F58F4170F26602C5C52130A900254529B7B09F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty__ctor_m43F58F4170F26602C5C52130A900254529B7B09F_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsProperty::.ctor(System.String,System.Type,System.Configuration.SettingsProvider,System.Boolean,System.Object,System.Configuration.SettingsSerializeAs,System.Configuration.SettingsAttributeDictionary,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsProperty__ctor_mEBC5ACA5A8FDAB8E6D2206E5CACE5CE90D0F8D43 (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, String_t* ___0_name, Type_t* ___1_propertyType, SettingsProvider_t47362C2066368337AE4B0802A9463B9BF9629653* ___2_provider, bool ___3_isReadOnly, RuntimeObject* ___4_defaultValue, int32_t ___5_serializeAs, SettingsAttributeDictionary_t5830B52750D090766BE7A83FF116CD223DBB511D* ___6_attributes, bool ___7_throwOnErrorDeserializing, bool ___8_throwOnErrorSerializing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty__ctor_mEBC5ACA5A8FDAB8E6D2206E5CACE5CE90D0F8D43_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty__ctor_mEBC5ACA5A8FDAB8E6D2206E5CACE5CE90D0F8D43_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.SettingsAttributeDictionary System.Configuration.SettingsProperty::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsAttributeDictionary_t5830B52750D090766BE7A83FF116CD223DBB511D* SettingsProperty_get_Attributes_m8008A385B4D1240563FD56C7A6BBD310682A7820 (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty_get_Attributes_m8008A385B4D1240563FD56C7A6BBD310682A7820_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty_get_Attributes_m8008A385B4D1240563FD56C7A6BBD310682A7820_RuntimeMethod_var);
		return (SettingsAttributeDictionary_t5830B52750D090766BE7A83FF116CD223DBB511D*)NULL;
	}
}
// System.Object System.Configuration.SettingsProperty::get_DefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingsProperty_get_DefaultValue_m572F8146FACA8A64455B0E63A27711D6747D095A (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty_get_DefaultValue_m572F8146FACA8A64455B0E63A27711D6747D095A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty_get_DefaultValue_m572F8146FACA8A64455B0E63A27711D6747D095A_RuntimeMethod_var);
		return NULL;
	}
}
// System.Void System.Configuration.SettingsProperty::set_DefaultValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsProperty_set_DefaultValue_mAA8C8454F1E1B99B2D340281825703A502BCBE16 (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty_set_DefaultValue_mAA8C8454F1E1B99B2D340281825703A502BCBE16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty_set_DefaultValue_mAA8C8454F1E1B99B2D340281825703A502BCBE16_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Configuration.SettingsProperty::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SettingsProperty_get_IsReadOnly_m45C0868ACACBB3C1454D815A0C45A4B7D94A9C23 (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty_get_IsReadOnly_m45C0868ACACBB3C1454D815A0C45A4B7D94A9C23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty_get_IsReadOnly_m45C0868ACACBB3C1454D815A0C45A4B7D94A9C23_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Configuration.SettingsProperty::set_IsReadOnly(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsProperty_set_IsReadOnly_mE3192DE88AF1D611A6C6C0A42E37F3AB2CF7EDEA (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty_set_IsReadOnly_mE3192DE88AF1D611A6C6C0A42E37F3AB2CF7EDEA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty_set_IsReadOnly_mE3192DE88AF1D611A6C6C0A42E37F3AB2CF7EDEA_RuntimeMethod_var);
		return;
	}
}
// System.String System.Configuration.SettingsProperty::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SettingsProperty_get_Name_m4969F3A7B80742AD828C2A984041D21EE8868630 (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty_get_Name_m4969F3A7B80742AD828C2A984041D21EE8868630_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty_get_Name_m4969F3A7B80742AD828C2A984041D21EE8868630_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Configuration.SettingsProperty::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsProperty_set_Name_m2C8493B19A3082FBCAE8CBED5C8B7C72C2AC2F8C (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty_set_Name_m2C8493B19A3082FBCAE8CBED5C8B7C72C2AC2F8C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty_set_Name_m2C8493B19A3082FBCAE8CBED5C8B7C72C2AC2F8C_RuntimeMethod_var);
		return;
	}
}
// System.Type System.Configuration.SettingsProperty::get_PropertyType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SettingsProperty_get_PropertyType_m07E906202B0C0148B6D80BE884EC9DDA3A9B8486 (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty_get_PropertyType_m07E906202B0C0148B6D80BE884EC9DDA3A9B8486_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty_get_PropertyType_m07E906202B0C0148B6D80BE884EC9DDA3A9B8486_RuntimeMethod_var);
		return (Type_t*)NULL;
	}
}
// System.Void System.Configuration.SettingsProperty::set_PropertyType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsProperty_set_PropertyType_m1814CDF848CEDC2EE3858B0E56074087390C3C97 (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty_set_PropertyType_m1814CDF848CEDC2EE3858B0E56074087390C3C97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty_set_PropertyType_m1814CDF848CEDC2EE3858B0E56074087390C3C97_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.SettingsProvider System.Configuration.SettingsProperty::get_Provider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsProvider_t47362C2066368337AE4B0802A9463B9BF9629653* SettingsProperty_get_Provider_m8F54310F4F9EE73CDB3FFBD2C831BAA6363082DC (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty_get_Provider_m8F54310F4F9EE73CDB3FFBD2C831BAA6363082DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty_get_Provider_m8F54310F4F9EE73CDB3FFBD2C831BAA6363082DC_RuntimeMethod_var);
		return (SettingsProvider_t47362C2066368337AE4B0802A9463B9BF9629653*)NULL;
	}
}
// System.Void System.Configuration.SettingsProperty::set_Provider(System.Configuration.SettingsProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsProperty_set_Provider_m7CE138B78E7F3B54F0C506120A6A932F3E0A1CDF (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, SettingsProvider_t47362C2066368337AE4B0802A9463B9BF9629653* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty_set_Provider_m7CE138B78E7F3B54F0C506120A6A932F3E0A1CDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty_set_Provider_m7CE138B78E7F3B54F0C506120A6A932F3E0A1CDF_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.SettingsSerializeAs System.Configuration.SettingsProperty::get_SerializeAs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SettingsProperty_get_SerializeAs_mA52409456773D43A4704EC931CCEE3A6821B1DDE (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty_get_SerializeAs_mA52409456773D43A4704EC931CCEE3A6821B1DDE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty_get_SerializeAs_mA52409456773D43A4704EC931CCEE3A6821B1DDE_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Configuration.SettingsProperty::set_SerializeAs(System.Configuration.SettingsSerializeAs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsProperty_set_SerializeAs_mDEDB4FCCDF6E45CA8256AF828331168466714590 (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty_set_SerializeAs_mDEDB4FCCDF6E45CA8256AF828331168466714590_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty_set_SerializeAs_mDEDB4FCCDF6E45CA8256AF828331168466714590_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Configuration.SettingsProperty::get_ThrowOnErrorDeserializing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SettingsProperty_get_ThrowOnErrorDeserializing_mE1D7ECC65549BE31A1B1B5E1F4B2E47CFF5FBAF2 (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty_get_ThrowOnErrorDeserializing_mE1D7ECC65549BE31A1B1B5E1F4B2E47CFF5FBAF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty_get_ThrowOnErrorDeserializing_mE1D7ECC65549BE31A1B1B5E1F4B2E47CFF5FBAF2_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Configuration.SettingsProperty::set_ThrowOnErrorDeserializing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsProperty_set_ThrowOnErrorDeserializing_mBAD5795A17C84132EA194A154575401A62C86D04 (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty_set_ThrowOnErrorDeserializing_mBAD5795A17C84132EA194A154575401A62C86D04_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty_set_ThrowOnErrorDeserializing_mBAD5795A17C84132EA194A154575401A62C86D04_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Configuration.SettingsProperty::get_ThrowOnErrorSerializing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SettingsProperty_get_ThrowOnErrorSerializing_mA876498CFFC334E6CABC034DF1DBB012CB465895 (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty_get_ThrowOnErrorSerializing_mA876498CFFC334E6CABC034DF1DBB012CB465895_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty_get_ThrowOnErrorSerializing_mA876498CFFC334E6CABC034DF1DBB012CB465895_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Configuration.SettingsProperty::set_ThrowOnErrorSerializing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsProperty_set_ThrowOnErrorSerializing_m10E96E67341F50521FCF240DADD1C876DF541C5B (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProperty_set_ThrowOnErrorSerializing_m10E96E67341F50521FCF240DADD1C876DF541C5B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProperty_set_ThrowOnErrorSerializing_m10E96E67341F50521FCF240DADD1C876DF541C5B_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsProvider__ctor_m4288CD75EEBF4F871713B0482AF4D619E167BA0D (SettingsProvider_t47362C2066368337AE4B0802A9463B9BF9629653* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProvider__ctor_m4288CD75EEBF4F871713B0482AF4D619E167BA0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProvider__ctor_m4288CD75EEBF4F871713B0482AF4D619E167BA0D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsPropertyValueCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyValueCollection__ctor_m5CF0F24B9B5C2E804CFECA73464D62C5BA2ECF34 (SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValueCollection__ctor_m5CF0F24B9B5C2E804CFECA73464D62C5BA2ECF34_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValueCollection__ctor_m5CF0F24B9B5C2E804CFECA73464D62C5BA2ECF34_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Configuration.SettingsPropertyValueCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SettingsPropertyValueCollection_get_Count_mC6CEF66A6A78E7B4F70C2DFD153B7DC805D6E934 (SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValueCollection_get_Count_mC6CEF66A6A78E7B4F70C2DFD153B7DC805D6E934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValueCollection_get_Count_mC6CEF66A6A78E7B4F70C2DFD153B7DC805D6E934_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean System.Configuration.SettingsPropertyValueCollection::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SettingsPropertyValueCollection_get_IsSynchronized_m4B407CA1EA7A54435C20DC83D36813E729578EB8 (SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValueCollection_get_IsSynchronized_m4B407CA1EA7A54435C20DC83D36813E729578EB8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValueCollection_get_IsSynchronized_m4B407CA1EA7A54435C20DC83D36813E729578EB8_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Configuration.SettingsPropertyValue System.Configuration.SettingsPropertyValueCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19* SettingsPropertyValueCollection_get_Item_m24D93D0AA81F38B111F41E593CCB335FAFB6CDF2 (SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValueCollection_get_Item_m24D93D0AA81F38B111F41E593CCB335FAFB6CDF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValueCollection_get_Item_m24D93D0AA81F38B111F41E593CCB335FAFB6CDF2_RuntimeMethod_var);
		return (SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19*)NULL;
	}
}
// System.Object System.Configuration.SettingsPropertyValueCollection::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingsPropertyValueCollection_get_SyncRoot_m467F9B6DA74CE3515BA6E4E6789BAE1448EE21E9 (SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValueCollection_get_SyncRoot_m467F9B6DA74CE3515BA6E4E6789BAE1448EE21E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValueCollection_get_SyncRoot_m467F9B6DA74CE3515BA6E4E6789BAE1448EE21E9_RuntimeMethod_var);
		return NULL;
	}
}
// System.Void System.Configuration.SettingsPropertyValueCollection::Add(System.Configuration.SettingsPropertyValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyValueCollection_Add_m85F440CD77E39C29C2400176DDD45E561740ACB6 (SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262* __this, SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19* ___0_property, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValueCollection_Add_m85F440CD77E39C29C2400176DDD45E561740ACB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValueCollection_Add_m85F440CD77E39C29C2400176DDD45E561740ACB6_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyValueCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyValueCollection_Clear_mAC939B58FC610CB9AE53B58BB22042B81C80689A (SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValueCollection_Clear_mAC939B58FC610CB9AE53B58BB22042B81C80689A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValueCollection_Clear_mAC939B58FC610CB9AE53B58BB22042B81C80689A_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Configuration.SettingsPropertyValueCollection::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingsPropertyValueCollection_Clone_mB7685B59701FECE120BD01A9798D814092946FA8 (SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValueCollection_Clone_mB7685B59701FECE120BD01A9798D814092946FA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValueCollection_Clone_mB7685B59701FECE120BD01A9798D814092946FA8_RuntimeMethod_var);
		return NULL;
	}
}
// System.Void System.Configuration.SettingsPropertyValueCollection::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyValueCollection_CopyTo_m0025C27DD6EAAC1AF11D7231DAD3E6268208FDEB (SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValueCollection_CopyTo_m0025C27DD6EAAC1AF11D7231DAD3E6268208FDEB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValueCollection_CopyTo_m0025C27DD6EAAC1AF11D7231DAD3E6268208FDEB_RuntimeMethod_var);
		return;
	}
}
// System.Collections.IEnumerator System.Configuration.SettingsPropertyValueCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingsPropertyValueCollection_GetEnumerator_m6BCB6E2968B43B538577B5372E4DC164DFC5596F (SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValueCollection_GetEnumerator_m6BCB6E2968B43B538577B5372E4DC164DFC5596F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValueCollection_GetEnumerator_m6BCB6E2968B43B538577B5372E4DC164DFC5596F_RuntimeMethod_var);
		return (RuntimeObject*)NULL;
	}
}
// System.Void System.Configuration.SettingsPropertyValueCollection::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyValueCollection_Remove_m2F1D5A11493C781652747AFEEA309145EB829506 (SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValueCollection_Remove_m2F1D5A11493C781652747AFEEA309145EB829506_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValueCollection_Remove_m2F1D5A11493C781652747AFEEA309145EB829506_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyValueCollection::SetReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyValueCollection_SetReadOnly_m013843DEAA416B815B498C1887487B9FF8427474 (SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValueCollection_SetReadOnly_m013843DEAA416B815B498C1887487B9FF8427474_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValueCollection_SetReadOnly_m013843DEAA416B815B498C1887487B9FF8427474_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsPropertyValue::.ctor(System.Configuration.SettingsProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyValue__ctor_mB2CFE37E18F3D718C5B50FE3DD2D7C5E0ABB878E (SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19* __this, SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* ___0_property, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValue__ctor_mB2CFE37E18F3D718C5B50FE3DD2D7C5E0ABB878E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValue__ctor_mB2CFE37E18F3D718C5B50FE3DD2D7C5E0ABB878E_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Configuration.SettingsPropertyValue::get_Deserialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SettingsPropertyValue_get_Deserialized_m7DA5BED44A2F6499EDCCABD7C09F2930012FE1CC (SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValue_get_Deserialized_m7DA5BED44A2F6499EDCCABD7C09F2930012FE1CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValue_get_Deserialized_m7DA5BED44A2F6499EDCCABD7C09F2930012FE1CC_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Configuration.SettingsPropertyValue::set_Deserialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyValue_set_Deserialized_m19AE9F8A5532C3B225B38DEBDE84C544A621FA42 (SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValue_set_Deserialized_m19AE9F8A5532C3B225B38DEBDE84C544A621FA42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValue_set_Deserialized_m19AE9F8A5532C3B225B38DEBDE84C544A621FA42_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Configuration.SettingsPropertyValue::get_IsDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SettingsPropertyValue_get_IsDirty_mC96D15C2EA5AC390032530772200569E2CFEA9E7 (SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValue_get_IsDirty_mC96D15C2EA5AC390032530772200569E2CFEA9E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValue_get_IsDirty_mC96D15C2EA5AC390032530772200569E2CFEA9E7_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Configuration.SettingsPropertyValue::set_IsDirty(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyValue_set_IsDirty_m0A077DC0E477DD36281CA1F9618D52E8EF9067C3 (SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValue_set_IsDirty_m0A077DC0E477DD36281CA1F9618D52E8EF9067C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValue_set_IsDirty_m0A077DC0E477DD36281CA1F9618D52E8EF9067C3_RuntimeMethod_var);
		return;
	}
}
// System.String System.Configuration.SettingsPropertyValue::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SettingsPropertyValue_get_Name_mD76190962FEAEF33485F2A1E8F55751E1D42AD91 (SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValue_get_Name_mD76190962FEAEF33485F2A1E8F55751E1D42AD91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValue_get_Name_mD76190962FEAEF33485F2A1E8F55751E1D42AD91_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Configuration.SettingsProperty System.Configuration.SettingsPropertyValue::get_Property()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* SettingsPropertyValue_get_Property_m545831C09714369257C8A8FE35ABB849EA0A25BD (SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValue_get_Property_m545831C09714369257C8A8FE35ABB849EA0A25BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValue_get_Property_m545831C09714369257C8A8FE35ABB849EA0A25BD_RuntimeMethod_var);
		return (SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7*)NULL;
	}
}
// System.Object System.Configuration.SettingsPropertyValue::get_PropertyValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingsPropertyValue_get_PropertyValue_m627459CF6901EBBF997444B62D0BC50C0A901761 (SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValue_get_PropertyValue_m627459CF6901EBBF997444B62D0BC50C0A901761_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValue_get_PropertyValue_m627459CF6901EBBF997444B62D0BC50C0A901761_RuntimeMethod_var);
		return NULL;
	}
}
// System.Void System.Configuration.SettingsPropertyValue::set_PropertyValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyValue_set_PropertyValue_mE3163F9DB2FC916CF5610CE80854DDCF7D2D2329 (SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValue_set_PropertyValue_mE3163F9DB2FC916CF5610CE80854DDCF7D2D2329_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValue_set_PropertyValue_mE3163F9DB2FC916CF5610CE80854DDCF7D2D2329_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Configuration.SettingsPropertyValue::get_SerializedValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingsPropertyValue_get_SerializedValue_m81E8DB9F1857ADCA1C896D510F580D66556C03AA (SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValue_get_SerializedValue_m81E8DB9F1857ADCA1C896D510F580D66556C03AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValue_get_SerializedValue_m81E8DB9F1857ADCA1C896D510F580D66556C03AA_RuntimeMethod_var);
		return NULL;
	}
}
// System.Void System.Configuration.SettingsPropertyValue::set_SerializedValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyValue_set_SerializedValue_mBD39059387052B000801D2B87AE502CE85F458A3 (SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValue_set_SerializedValue_mBD39059387052B000801D2B87AE502CE85F458A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValue_set_SerializedValue_mBD39059387052B000801D2B87AE502CE85F458A3_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Configuration.SettingsPropertyValue::get_UsingDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SettingsPropertyValue_get_UsingDefaultValue_m7445C7B53E36E18C833DB74F27453C1DDFF595FA (SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyValue_get_UsingDefaultValue_m7445C7B53E36E18C833DB74F27453C1DDFF595FA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyValue_get_UsingDefaultValue_m7445C7B53E36E18C833DB74F27453C1DDFF595FA_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsAttributeDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsAttributeDictionary__ctor_m68CED8CC25F088C9D6A294E240BDF592DD85AA02 (SettingsAttributeDictionary_t5830B52750D090766BE7A83FF116CD223DBB511D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsAttributeDictionary__ctor_m68CED8CC25F088C9D6A294E240BDF592DD85AA02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsAttributeDictionary__ctor_m68CED8CC25F088C9D6A294E240BDF592DD85AA02_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsAttributeDictionary::.ctor(System.Configuration.SettingsAttributeDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsAttributeDictionary__ctor_m3FC47B889CB5FEC5D86055C95A873E3808735CB6 (SettingsAttributeDictionary_t5830B52750D090766BE7A83FF116CD223DBB511D* __this, SettingsAttributeDictionary_t5830B52750D090766BE7A83FF116CD223DBB511D* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsAttributeDictionary__ctor_m3FC47B889CB5FEC5D86055C95A873E3808735CB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsAttributeDictionary__ctor_m3FC47B889CB5FEC5D86055C95A873E3808735CB6_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsProviderCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsProviderCollection__ctor_m2A55C87D8FDB77D6BAFD49A923C6DC6ADE07DD96 (SettingsProviderCollection_tA874FD5CCC7B667159CCFF34D055516DBAAD39FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProviderCollection__ctor_m2A55C87D8FDB77D6BAFD49A923C6DC6ADE07DD96_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProviderCollection__ctor_m2A55C87D8FDB77D6BAFD49A923C6DC6ADE07DD96_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.SettingsProvider System.Configuration.SettingsProviderCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsProvider_t47362C2066368337AE4B0802A9463B9BF9629653* SettingsProviderCollection_get_Item_m9617E89229F4CA7BE76A5ACF22D69D993205D08F (SettingsProviderCollection_tA874FD5CCC7B667159CCFF34D055516DBAAD39FF* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProviderCollection_get_Item_m9617E89229F4CA7BE76A5ACF22D69D993205D08F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProviderCollection_get_Item_m9617E89229F4CA7BE76A5ACF22D69D993205D08F_RuntimeMethod_var);
		return (SettingsProvider_t47362C2066368337AE4B0802A9463B9BF9629653*)NULL;
	}
}
// System.Void System.Configuration.SettingsProviderCollection::Add(System.Configuration.Provider.ProviderBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsProviderCollection_Add_mB6E74B5BBA28AF9971E600BBB53A2DBC06ECC92F (SettingsProviderCollection_tA874FD5CCC7B667159CCFF34D055516DBAAD39FF* __this, ProviderBase_tD7C429AEFAAEC072F1365F93DFF92E394A07B4D3* ___0_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProviderCollection_Add_mB6E74B5BBA28AF9971E600BBB53A2DBC06ECC92F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProviderCollection_Add_mB6E74B5BBA28AF9971E600BBB53A2DBC06ECC92F_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.DnsPermission::.ctor(System.Security.Permissions.PermissionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsPermission__ctor_m2CEB99C07EB5C638121AD9421023253A41CA1BA7 (DnsPermission_tEE0908CF002881CB0021F55AF338730B91661CDE* __this, int32_t ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsPermission__ctor_m2CEB99C07EB5C638121AD9421023253A41CA1BA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DnsPermission__ctor_m2CEB99C07EB5C638121AD9421023253A41CA1BA7_RuntimeMethod_var);
		return;
	}
}
// System.Security.IPermission System.Net.DnsPermission::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DnsPermission_Copy_mD5FB6C3EC9C9D610118CAD156207D7C77C4B198C (DnsPermission_tEE0908CF002881CB0021F55AF338730B91661CDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsPermission_Copy_mD5FB6C3EC9C9D610118CAD156207D7C77C4B198C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DnsPermission_Copy_mD5FB6C3EC9C9D610118CAD156207D7C77C4B198C_RuntimeMethod_var);
		return (RuntimeObject*)NULL;
	}
}
// System.Void System.Net.DnsPermission::FromXml(System.Security.SecurityElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsPermission_FromXml_mD18BBB4AA2F16DF86E6C172AB3B4EBC7FB8A3591 (DnsPermission_tEE0908CF002881CB0021F55AF338730B91661CDE* __this, SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* ___0_securityElement, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsPermission_FromXml_mD18BBB4AA2F16DF86E6C172AB3B4EBC7FB8A3591_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DnsPermission_FromXml_mD18BBB4AA2F16DF86E6C172AB3B4EBC7FB8A3591_RuntimeMethod_var);
		return;
	}
}
// System.Security.IPermission System.Net.DnsPermission::Intersect(System.Security.IPermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DnsPermission_Intersect_mCC5E68B8D9A37075C42008BE8576A9235F2EE539 (DnsPermission_tEE0908CF002881CB0021F55AF338730B91661CDE* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsPermission_Intersect_mCC5E68B8D9A37075C42008BE8576A9235F2EE539_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DnsPermission_Intersect_mCC5E68B8D9A37075C42008BE8576A9235F2EE539_RuntimeMethod_var);
		return (RuntimeObject*)NULL;
	}
}
// System.Boolean System.Net.DnsPermission::IsSubsetOf(System.Security.IPermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DnsPermission_IsSubsetOf_m27898F3FFF9FC196CCBB4915121692DD4430E44F (DnsPermission_tEE0908CF002881CB0021F55AF338730B91661CDE* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsPermission_IsSubsetOf_m27898F3FFF9FC196CCBB4915121692DD4430E44F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(DnsPermission_IsSubsetOf_m27898F3FFF9FC196CCBB4915121692DD4430E44F_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean System.Net.DnsPermission::IsUnrestricted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DnsPermission_IsUnrestricted_mC3177D390CD790032AA578CC1499FEE77F03415C (DnsPermission_tEE0908CF002881CB0021F55AF338730B91661CDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsPermission_IsUnrestricted_mC3177D390CD790032AA578CC1499FEE77F03415C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(DnsPermission_IsUnrestricted_mC3177D390CD790032AA578CC1499FEE77F03415C_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Security.SecurityElement System.Net.DnsPermission::ToXml()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* DnsPermission_ToXml_m4ECFF909AE100B44977463EE36DF0A9D021BF260 (DnsPermission_tEE0908CF002881CB0021F55AF338730B91661CDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsPermission_ToXml_m4ECFF909AE100B44977463EE36DF0A9D021BF260_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DnsPermission_ToXml_m4ECFF909AE100B44977463EE36DF0A9D021BF260_RuntimeMethod_var);
		return (SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.DnsPermissionAttribute::.ctor(System.Security.Permissions.SecurityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsPermissionAttribute__ctor_mF5579848C5A5357F90601A70C2A285379792E850 (DnsPermissionAttribute_t234623CDA9C21DA481E4ED50178ACDB3D8BCFF1A* __this, int32_t ___0_action, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Security.IPermission System.Net.DnsPermissionAttribute::CreatePermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DnsPermissionAttribute_CreatePermission_m658E6BF4FB2A748037A90FDCA4AD264EA10859D4 (DnsPermissionAttribute_t234623CDA9C21DA481E4ED50178ACDB3D8BCFF1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsPermissionAttribute_CreatePermission_m658E6BF4FB2A748037A90FDCA4AD264EA10859D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DnsPermissionAttribute_CreatePermission_m658E6BF4FB2A748037A90FDCA4AD264EA10859D4_RuntimeMethod_var);
		return (RuntimeObject*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.AuthenticationModuleElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModuleElement__ctor_m5FD2342616A496ABD2DE944E1F53A691C0A3028B (AuthenticationModuleElement_tA0344044E429FCDA9A085EAF4A1471720CB5DB17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElement__ctor_m5FD2342616A496ABD2DE944E1F53A691C0A3028B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElement__ctor_m5FD2342616A496ABD2DE944E1F53A691C0A3028B_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.AuthenticationModuleElement::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModuleElement__ctor_m13EC618F56F31C50453D48AF72DFBA6FB683D97C (AuthenticationModuleElement_tA0344044E429FCDA9A085EAF4A1471720CB5DB17* __this, String_t* ___0_typeName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElement__ctor_m13EC618F56F31C50453D48AF72DFBA6FB683D97C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElement__ctor_m13EC618F56F31C50453D48AF72DFBA6FB683D97C_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.AuthenticationModuleElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* AuthenticationModuleElement_get_Properties_mACD6B2480AC5A9A89217790E641FD57B2E4A6D0A (AuthenticationModuleElement_tA0344044E429FCDA9A085EAF4A1471720CB5DB17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElement_get_Properties_mACD6B2480AC5A9A89217790E641FD57B2E4A6D0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElement_get_Properties_mACD6B2480AC5A9A89217790E641FD57B2E4A6D0A_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.String System.Net.Configuration.AuthenticationModuleElement::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationModuleElement_get_Type_m4A5D81943EE38BA704622F98152F6B08A30419DB (AuthenticationModuleElement_tA0344044E429FCDA9A085EAF4A1471720CB5DB17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElement_get_Type_m4A5D81943EE38BA704622F98152F6B08A30419DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElement_get_Type_m4A5D81943EE38BA704622F98152F6B08A30419DB_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Net.Configuration.AuthenticationModuleElement::set_Type(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModuleElement_set_Type_m99CC267C858640E623DFE8AA5F857FDCF6783E83 (AuthenticationModuleElement_tA0344044E429FCDA9A085EAF4A1471720CB5DB17* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElement_set_Type_m99CC267C858640E623DFE8AA5F857FDCF6783E83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElement_set_Type_m99CC267C858640E623DFE8AA5F857FDCF6783E83_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModuleElementCollection__ctor_m38DED99E270FE78399DDA5B9ED1ADA439C5320BA (AuthenticationModuleElementCollection_t9DA54FD43022F3E9733ECB60C2B93DD11E17E8D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElementCollection__ctor_m38DED99E270FE78399DDA5B9ED1ADA439C5320BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElementCollection__ctor_m38DED99E270FE78399DDA5B9ED1ADA439C5320BA_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.AuthenticationModuleElement System.Net.Configuration.AuthenticationModuleElementCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationModuleElement_tA0344044E429FCDA9A085EAF4A1471720CB5DB17* AuthenticationModuleElementCollection_get_Item_mE77991B1AEEAB38E7E7820D4458905D541D6557B (AuthenticationModuleElementCollection_t9DA54FD43022F3E9733ECB60C2B93DD11E17E8D2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElementCollection_get_Item_mE77991B1AEEAB38E7E7820D4458905D541D6557B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElementCollection_get_Item_mE77991B1AEEAB38E7E7820D4458905D541D6557B_RuntimeMethod_var);
		return (AuthenticationModuleElement_tA0344044E429FCDA9A085EAF4A1471720CB5DB17*)NULL;
	}
}
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::set_Item(System.Int32,System.Net.Configuration.AuthenticationModuleElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModuleElementCollection_set_Item_mCEBFD885C24E7012ACD2552BE7C7B1FDA822E9A5 (AuthenticationModuleElementCollection_t9DA54FD43022F3E9733ECB60C2B93DD11E17E8D2* __this, int32_t ___0_index, AuthenticationModuleElement_tA0344044E429FCDA9A085EAF4A1471720CB5DB17* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElementCollection_set_Item_mCEBFD885C24E7012ACD2552BE7C7B1FDA822E9A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElementCollection_set_Item_mCEBFD885C24E7012ACD2552BE7C7B1FDA822E9A5_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.AuthenticationModuleElement System.Net.Configuration.AuthenticationModuleElementCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationModuleElement_tA0344044E429FCDA9A085EAF4A1471720CB5DB17* AuthenticationModuleElementCollection_get_Item_m20551A2C4B3E7634A2B23DC564619E397809A80C (AuthenticationModuleElementCollection_t9DA54FD43022F3E9733ECB60C2B93DD11E17E8D2* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElementCollection_get_Item_m20551A2C4B3E7634A2B23DC564619E397809A80C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElementCollection_get_Item_m20551A2C4B3E7634A2B23DC564619E397809A80C_RuntimeMethod_var);
		return (AuthenticationModuleElement_tA0344044E429FCDA9A085EAF4A1471720CB5DB17*)NULL;
	}
}
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::set_Item(System.String,System.Net.Configuration.AuthenticationModuleElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModuleElementCollection_set_Item_mC94C7398F3B998279E12809B8804D2B75861369D (AuthenticationModuleElementCollection_t9DA54FD43022F3E9733ECB60C2B93DD11E17E8D2* __this, String_t* ___0_name, AuthenticationModuleElement_tA0344044E429FCDA9A085EAF4A1471720CB5DB17* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElementCollection_set_Item_mC94C7398F3B998279E12809B8804D2B75861369D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElementCollection_set_Item_mC94C7398F3B998279E12809B8804D2B75861369D_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::Add(System.Net.Configuration.AuthenticationModuleElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModuleElementCollection_Add_mCB49C37E047F947A2192D05706540A05E35789A4 (AuthenticationModuleElementCollection_t9DA54FD43022F3E9733ECB60C2B93DD11E17E8D2* __this, AuthenticationModuleElement_tA0344044E429FCDA9A085EAF4A1471720CB5DB17* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElementCollection_Add_mCB49C37E047F947A2192D05706540A05E35789A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElementCollection_Add_mCB49C37E047F947A2192D05706540A05E35789A4_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModuleElementCollection_Clear_m38B73C30074EC8373A7E109C16C1416652CEEF35 (AuthenticationModuleElementCollection_t9DA54FD43022F3E9733ECB60C2B93DD11E17E8D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElementCollection_Clear_m38B73C30074EC8373A7E109C16C1416652CEEF35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElementCollection_Clear_m38B73C30074EC8373A7E109C16C1416652CEEF35_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationElement System.Net.Configuration.AuthenticationModuleElementCollection::CreateNewElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* AuthenticationModuleElementCollection_CreateNewElement_mC63B405B67D665FF3A2EDC6AF3281927E8F18B99 (AuthenticationModuleElementCollection_t9DA54FD43022F3E9733ECB60C2B93DD11E17E8D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElementCollection_CreateNewElement_mC63B405B67D665FF3A2EDC6AF3281927E8F18B99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElementCollection_CreateNewElement_mC63B405B67D665FF3A2EDC6AF3281927E8F18B99_RuntimeMethod_var);
		return (ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E*)NULL;
	}
}
// System.Object System.Net.Configuration.AuthenticationModuleElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationModuleElementCollection_GetElementKey_mE159FD55D6927CA0AA264D070EB7FBB9DC02CA1B (AuthenticationModuleElementCollection_t9DA54FD43022F3E9733ECB60C2B93DD11E17E8D2* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElementCollection_GetElementKey_mE159FD55D6927CA0AA264D070EB7FBB9DC02CA1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElementCollection_GetElementKey_mE159FD55D6927CA0AA264D070EB7FBB9DC02CA1B_RuntimeMethod_var);
		return NULL;
	}
}
// System.Int32 System.Net.Configuration.AuthenticationModuleElementCollection::IndexOf(System.Net.Configuration.AuthenticationModuleElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticationModuleElementCollection_IndexOf_mB153E501DF421CA8F833E78C0A0A555CED18AA54 (AuthenticationModuleElementCollection_t9DA54FD43022F3E9733ECB60C2B93DD11E17E8D2* __this, AuthenticationModuleElement_tA0344044E429FCDA9A085EAF4A1471720CB5DB17* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElementCollection_IndexOf_mB153E501DF421CA8F833E78C0A0A555CED18AA54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElementCollection_IndexOf_mB153E501DF421CA8F833E78C0A0A555CED18AA54_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::Remove(System.Net.Configuration.AuthenticationModuleElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModuleElementCollection_Remove_mB8BA78F90525210AEEE3F04D0CABAEDE0BC63F53 (AuthenticationModuleElementCollection_t9DA54FD43022F3E9733ECB60C2B93DD11E17E8D2* __this, AuthenticationModuleElement_tA0344044E429FCDA9A085EAF4A1471720CB5DB17* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElementCollection_Remove_mB8BA78F90525210AEEE3F04D0CABAEDE0BC63F53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElementCollection_Remove_mB8BA78F90525210AEEE3F04D0CABAEDE0BC63F53_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModuleElementCollection_Remove_m291B705E9C85334EB6E17CCC64BB4B9A443611A2 (AuthenticationModuleElementCollection_t9DA54FD43022F3E9733ECB60C2B93DD11E17E8D2* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElementCollection_Remove_m291B705E9C85334EB6E17CCC64BB4B9A443611A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElementCollection_Remove_m291B705E9C85334EB6E17CCC64BB4B9A443611A2_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModuleElementCollection_RemoveAt_mC44403D3C43C0DD8AF6BB8BCD8A312D9BAA19C4F (AuthenticationModuleElementCollection_t9DA54FD43022F3E9733ECB60C2B93DD11E17E8D2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModuleElementCollection_RemoveAt_mC44403D3C43C0DD8AF6BB8BCD8A312D9BAA19C4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModuleElementCollection_RemoveAt_mC44403D3C43C0DD8AF6BB8BCD8A312D9BAA19C4F_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.AuthenticationModulesSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModulesSection__ctor_mD17CBBE5BAC4698F553DA6DA0FF1C5ECEA31729D (AuthenticationModulesSection_t3A675E838686A766DCE07BEAB36EA46A62316C69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModulesSection__ctor_mD17CBBE5BAC4698F553DA6DA0FF1C5ECEA31729D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModulesSection__ctor_mD17CBBE5BAC4698F553DA6DA0FF1C5ECEA31729D_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.AuthenticationModuleElementCollection System.Net.Configuration.AuthenticationModulesSection::get_AuthenticationModules()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationModuleElementCollection_t9DA54FD43022F3E9733ECB60C2B93DD11E17E8D2* AuthenticationModulesSection_get_AuthenticationModules_m223C41E7166EDB17B65C179A92016D585B5900C6 (AuthenticationModulesSection_t3A675E838686A766DCE07BEAB36EA46A62316C69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModulesSection_get_AuthenticationModules_m223C41E7166EDB17B65C179A92016D585B5900C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModulesSection_get_AuthenticationModules_m223C41E7166EDB17B65C179A92016D585B5900C6_RuntimeMethod_var);
		return (AuthenticationModuleElementCollection_t9DA54FD43022F3E9733ECB60C2B93DD11E17E8D2*)NULL;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.AuthenticationModulesSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* AuthenticationModulesSection_get_Properties_mBD13B686CE841F1C79C5FAF76361D6BD57693BC4 (AuthenticationModulesSection_t3A675E838686A766DCE07BEAB36EA46A62316C69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModulesSection_get_Properties_mBD13B686CE841F1C79C5FAF76361D6BD57693BC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModulesSection_get_Properties_mBD13B686CE841F1C79C5FAF76361D6BD57693BC4_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Void System.Net.Configuration.AuthenticationModulesSection::InitializeDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModulesSection_InitializeDefault_m1042865B0B56666B8C5F29F5A5DEDA87C2C110F2 (AuthenticationModulesSection_t3A675E838686A766DCE07BEAB36EA46A62316C69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModulesSection_InitializeDefault_m1042865B0B56666B8C5F29F5A5DEDA87C2C110F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModulesSection_InitializeDefault_m1042865B0B56666B8C5F29F5A5DEDA87C2C110F2_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.AuthenticationModulesSection::PostDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModulesSection_PostDeserialize_m0943D114562D21AAC4E097A2FA3E35C6263A1002 (AuthenticationModulesSection_t3A675E838686A766DCE07BEAB36EA46A62316C69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModulesSection_PostDeserialize_m0943D114562D21AAC4E097A2FA3E35C6263A1002_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AuthenticationModulesSection_PostDeserialize_m0943D114562D21AAC4E097A2FA3E35C6263A1002_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.BypassElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElement__ctor_m8CC6AB091B7E23552837F5E02233181167B1AE96 (BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElement__ctor_m8CC6AB091B7E23552837F5E02233181167B1AE96_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElement__ctor_m8CC6AB091B7E23552837F5E02233181167B1AE96_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.BypassElement::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElement__ctor_m51C13A7F3038DEC58B7E1B7FFCAF49A0D3169496 (BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC* __this, String_t* ___0_address, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElement__ctor_m51C13A7F3038DEC58B7E1B7FFCAF49A0D3169496_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElement__ctor_m51C13A7F3038DEC58B7E1B7FFCAF49A0D3169496_RuntimeMethod_var);
		return;
	}
}
// System.String System.Net.Configuration.BypassElement::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BypassElement_get_Address_mA56874F3889B01F431CA5588CE8EEA24F1DC9172 (BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElement_get_Address_mA56874F3889B01F431CA5588CE8EEA24F1DC9172_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElement_get_Address_mA56874F3889B01F431CA5588CE8EEA24F1DC9172_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Net.Configuration.BypassElement::set_Address(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElement_set_Address_m1FC455871E7D361C5868917E3F90A39ED0F2F049 (BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElement_set_Address_m1FC455871E7D361C5868917E3F90A39ED0F2F049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElement_set_Address_m1FC455871E7D361C5868917E3F90A39ED0F2F049_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.BypassElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* BypassElement_get_Properties_m370AF1DF7B89FF6D91EC9EA0FC157D0E3902C327 (BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElement_get_Properties_m370AF1DF7B89FF6D91EC9EA0FC157D0E3902C327_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElement_get_Properties_m370AF1DF7B89FF6D91EC9EA0FC157D0E3902C327_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.BypassElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.BypassElement System.Net.Configuration.BypassElementCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC* BypassElementCollection_get_Item_m4DC6C3BB102101B4903234A44BD61C0F98A13089 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection_get_Item_m4DC6C3BB102101B4903234A44BD61C0F98A13089_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection_get_Item_m4DC6C3BB102101B4903234A44BD61C0F98A13089_RuntimeMethod_var);
		return (BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC*)NULL;
	}
}
// System.Void System.Net.Configuration.BypassElementCollection::set_Item(System.Int32,System.Net.Configuration.BypassElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection_set_Item_mF46B4A57F0A93DDAF3963232445E08E555BADFDF (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, int32_t ___0_index, BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection_set_Item_mF46B4A57F0A93DDAF3963232445E08E555BADFDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection_set_Item_mF46B4A57F0A93DDAF3963232445E08E555BADFDF_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.BypassElement System.Net.Configuration.BypassElementCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC* BypassElementCollection_get_Item_mC66863D480CAB5309CD75C3E2CD4E78B737F47EF (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection_get_Item_mC66863D480CAB5309CD75C3E2CD4E78B737F47EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection_get_Item_mC66863D480CAB5309CD75C3E2CD4E78B737F47EF_RuntimeMethod_var);
		return (BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC*)NULL;
	}
}
// System.Void System.Net.Configuration.BypassElementCollection::set_Item(System.String,System.Net.Configuration.BypassElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection_set_Item_mA26E89239956D1E20BE4B6B2FCC373D6B1245594 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, String_t* ___0_name, BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection_set_Item_mA26E89239956D1E20BE4B6B2FCC373D6B1245594_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection_set_Item_mA26E89239956D1E20BE4B6B2FCC373D6B1245594_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Net.Configuration.BypassElementCollection::get_ThrowOnDuplicate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BypassElementCollection_get_ThrowOnDuplicate_m7992D2F3F1CB4D69F3A377892B8A9F9CE0545E20 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection_get_ThrowOnDuplicate_m7992D2F3F1CB4D69F3A377892B8A9F9CE0545E20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection_get_ThrowOnDuplicate_m7992D2F3F1CB4D69F3A377892B8A9F9CE0545E20_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.BypassElementCollection::Add(System.Net.Configuration.BypassElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection_Add_m42EE2ACBFE7445F50F5E5B344109E92FBA9415BA (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection_Add_m42EE2ACBFE7445F50F5E5B344109E92FBA9415BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection_Add_m42EE2ACBFE7445F50F5E5B344109E92FBA9415BA_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.BypassElementCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection_Clear_m181A0405DF5C3E30AF46734AE615FA0D81DE3583 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection_Clear_m181A0405DF5C3E30AF46734AE615FA0D81DE3583_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection_Clear_m181A0405DF5C3E30AF46734AE615FA0D81DE3583_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationElement System.Net.Configuration.BypassElementCollection::CreateNewElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* BypassElementCollection_CreateNewElement_mC3B21211C223DD7F66C15734F2BD6642F845C842 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection_CreateNewElement_mC3B21211C223DD7F66C15734F2BD6642F845C842_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection_CreateNewElement_mC3B21211C223DD7F66C15734F2BD6642F845C842_RuntimeMethod_var);
		return (ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E*)NULL;
	}
}
// System.Object System.Net.Configuration.BypassElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BypassElementCollection_GetElementKey_m719BF9A81D9AE4137E5BAEB2F1319F4332124932 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection_GetElementKey_m719BF9A81D9AE4137E5BAEB2F1319F4332124932_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection_GetElementKey_m719BF9A81D9AE4137E5BAEB2F1319F4332124932_RuntimeMethod_var);
		return NULL;
	}
}
// System.Int32 System.Net.Configuration.BypassElementCollection::IndexOf(System.Net.Configuration.BypassElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BypassElementCollection_IndexOf_m6840401E71E9EDA8D7A162935DC48FF8A9E780DD (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection_IndexOf_m6840401E71E9EDA8D7A162935DC48FF8A9E780DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection_IndexOf_m6840401E71E9EDA8D7A162935DC48FF8A9E780DD_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.BypassElementCollection::Remove(System.Net.Configuration.BypassElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection_Remove_m8B3BD5C5074AF6438F5E72CEB3CB13DD05964409 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection_Remove_m8B3BD5C5074AF6438F5E72CEB3CB13DD05964409_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection_Remove_m8B3BD5C5074AF6438F5E72CEB3CB13DD05964409_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.BypassElementCollection::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection_Remove_mD5E4427B35C0E2C2082F1AA890F5C4147E822BA9 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection_Remove_mD5E4427B35C0E2C2082F1AA890F5C4147E822BA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection_Remove_mD5E4427B35C0E2C2082F1AA890F5C4147E822BA9_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.BypassElementCollection::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection_RemoveAt_m99C5584FB5A419397A7CD6BBD53321DB39B36F39 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection_RemoveAt_m99C5584FB5A419397A7CD6BBD53321DB39B36F39_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection_RemoveAt_m99C5584FB5A419397A7CD6BBD53321DB39B36F39_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ConnectionManagementElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElement__ctor_m1A3F0A70FA020EC2A22F686F62F7BF2874319C6C (ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElement__ctor_m1A3F0A70FA020EC2A22F686F62F7BF2874319C6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElement__ctor_m1A3F0A70FA020EC2A22F686F62F7BF2874319C6C_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.ConnectionManagementElement::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElement__ctor_mAB0DC19DF165D808985C0F02B751F8F0BDADC38B (ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353* __this, String_t* ___0_address, int32_t ___1_maxConnection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElement__ctor_mAB0DC19DF165D808985C0F02B751F8F0BDADC38B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElement__ctor_mAB0DC19DF165D808985C0F02B751F8F0BDADC38B_RuntimeMethod_var);
		return;
	}
}
// System.String System.Net.Configuration.ConnectionManagementElement::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionManagementElement_get_Address_m2981F0182DB4CF16736B315E8CD50DF095784783 (ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElement_get_Address_m2981F0182DB4CF16736B315E8CD50DF095784783_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElement_get_Address_m2981F0182DB4CF16736B315E8CD50DF095784783_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Net.Configuration.ConnectionManagementElement::set_Address(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElement_set_Address_m5A18B1FF3263F9A9C62EA86C1F83E0849C167938 (ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElement_set_Address_m5A18B1FF3263F9A9C62EA86C1F83E0849C167938_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElement_set_Address_m5A18B1FF3263F9A9C62EA86C1F83E0849C167938_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Net.Configuration.ConnectionManagementElement::get_MaxConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionManagementElement_get_MaxConnection_m6EB1D7CAB134A12DAA6B8C226350EE109CCBC087 (ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElement_get_MaxConnection_m6EB1D7CAB134A12DAA6B8C226350EE109CCBC087_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElement_get_MaxConnection_m6EB1D7CAB134A12DAA6B8C226350EE109CCBC087_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.ConnectionManagementElement::set_MaxConnection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElement_set_MaxConnection_m0F9425BBCB52DC78F75CA54CDC5AC6272F81A8A0 (ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElement_set_MaxConnection_m0F9425BBCB52DC78F75CA54CDC5AC6272F81A8A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElement_set_MaxConnection_m0F9425BBCB52DC78F75CA54CDC5AC6272F81A8A0_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ConnectionManagementElement_get_Properties_mA086EE9EB757B70298A5B82FC68162B9DF52E8A5 (ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElement_get_Properties_mA086EE9EB757B70298A5B82FC68162B9DF52E8A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElement_get_Properties_mA086EE9EB757B70298A5B82FC68162B9DF52E8A5_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3 (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.ConnectionManagementElement System.Net.Configuration.ConnectionManagementElementCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353* ConnectionManagementElementCollection_get_Item_m92E5A6457A23ED54908A832ADB8CD3077255A73A (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection_get_Item_m92E5A6457A23ED54908A832ADB8CD3077255A73A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection_get_Item_m92E5A6457A23ED54908A832ADB8CD3077255A73A_RuntimeMethod_var);
		return (ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353*)NULL;
	}
}
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::set_Item(System.Int32,System.Net.Configuration.ConnectionManagementElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection_set_Item_mAC0D7AAFE17E56C8B952632C7A15A558A18563C0 (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, int32_t ___0_index, ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection_set_Item_mAC0D7AAFE17E56C8B952632C7A15A558A18563C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection_set_Item_mAC0D7AAFE17E56C8B952632C7A15A558A18563C0_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.ConnectionManagementElement System.Net.Configuration.ConnectionManagementElementCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353* ConnectionManagementElementCollection_get_Item_m43D81735028106A141049B4F2AAC593FE981901A (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection_get_Item_m43D81735028106A141049B4F2AAC593FE981901A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection_get_Item_m43D81735028106A141049B4F2AAC593FE981901A_RuntimeMethod_var);
		return (ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353*)NULL;
	}
}
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::set_Item(System.String,System.Net.Configuration.ConnectionManagementElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection_set_Item_m7999F6847DE1435DD6C9AA02D2B6FD3CFA77B4D0 (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, String_t* ___0_name, ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection_set_Item_m7999F6847DE1435DD6C9AA02D2B6FD3CFA77B4D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection_set_Item_m7999F6847DE1435DD6C9AA02D2B6FD3CFA77B4D0_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Add(System.Net.Configuration.ConnectionManagementElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection_Add_m86C338A16AAC79C882B1D397C23285304113B1ED (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection_Add_m86C338A16AAC79C882B1D397C23285304113B1ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection_Add_m86C338A16AAC79C882B1D397C23285304113B1ED_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection_Clear_m74A283DF1A0CD34C20B0AED7FBFD4698282E5816 (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection_Clear_m74A283DF1A0CD34C20B0AED7FBFD4698282E5816_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection_Clear_m74A283DF1A0CD34C20B0AED7FBFD4698282E5816_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationElement System.Net.Configuration.ConnectionManagementElementCollection::CreateNewElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ConnectionManagementElementCollection_CreateNewElement_mE483ED3D1EABD7BBF635124087A8AD12796C6297 (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection_CreateNewElement_mE483ED3D1EABD7BBF635124087A8AD12796C6297_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection_CreateNewElement_mE483ED3D1EABD7BBF635124087A8AD12796C6297_RuntimeMethod_var);
		return (ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E*)NULL;
	}
}
// System.Object System.Net.Configuration.ConnectionManagementElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionManagementElementCollection_GetElementKey_mFA3BE3371C02E7C6883994C3C2245FB41A9F20B5 (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection_GetElementKey_mFA3BE3371C02E7C6883994C3C2245FB41A9F20B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection_GetElementKey_mFA3BE3371C02E7C6883994C3C2245FB41A9F20B5_RuntimeMethod_var);
		return NULL;
	}
}
// System.Int32 System.Net.Configuration.ConnectionManagementElementCollection::IndexOf(System.Net.Configuration.ConnectionManagementElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionManagementElementCollection_IndexOf_m9C9F891C0978BF3F186940188B6DA1C93B1C25F6 (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection_IndexOf_m9C9F891C0978BF3F186940188B6DA1C93B1C25F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection_IndexOf_m9C9F891C0978BF3F186940188B6DA1C93B1C25F6_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Remove(System.Net.Configuration.ConnectionManagementElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection_Remove_mCD4D868DE7D10893A0845EB86C6E057F857C26DD (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection_Remove_mCD4D868DE7D10893A0845EB86C6E057F857C26DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection_Remove_mCD4D868DE7D10893A0845EB86C6E057F857C26DD_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection_Remove_m1DC3D5F85A457DEC1C56FCC58125E6E71BFD1DDD (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection_Remove_m1DC3D5F85A457DEC1C56FCC58125E6E71BFD1DDD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection_Remove_m1DC3D5F85A457DEC1C56FCC58125E6E71BFD1DDD_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection_RemoveAt_m055098B46DDD916C1BDE855CA36254EC7109CDFB (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection_RemoveAt_m055098B46DDD916C1BDE855CA36254EC7109CDFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection_RemoveAt_m055098B46DDD916C1BDE855CA36254EC7109CDFB_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ConnectionManagementSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.ConnectionManagementElementCollection System.Net.Configuration.ConnectionManagementSection::get_ConnectionManagement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* ConnectionManagementSection_get_ConnectionManagement_mB6AA0D663BE248AECB8D37344B03ABCDD4EEDBA2 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection_get_ConnectionManagement_mB6AA0D663BE248AECB8D37344B03ABCDD4EEDBA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection_get_ConnectionManagement_mB6AA0D663BE248AECB8D37344B03ABCDD4EEDBA2_RuntimeMethod_var);
		return (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1*)NULL;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.DefaultProxySection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.BypassElementCollection System.Net.Configuration.DefaultProxySection::get_BypassList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* DefaultProxySection_get_BypassList_mE98AAAC667B7040CC62A6274584D89A5F0CF8095 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_get_BypassList_mE98AAAC667B7040CC62A6274584D89A5F0CF8095_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_get_BypassList_mE98AAAC667B7040CC62A6274584D89A5F0CF8095_RuntimeMethod_var);
		return (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE*)NULL;
	}
}
// System.Boolean System.Net.Configuration.DefaultProxySection::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultProxySection_get_Enabled_mC46CD7537422499B7E44C15CD3C94E344D33FFF9 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_get_Enabled_mC46CD7537422499B7E44C15CD3C94E344D33FFF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_get_Enabled_mC46CD7537422499B7E44C15CD3C94E344D33FFF9_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.DefaultProxySection::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection_set_Enabled_m2441F444E01188481C429A159EE16FF476A35EBE (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_set_Enabled_m2441F444E01188481C429A159EE16FF476A35EBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_set_Enabled_m2441F444E01188481C429A159EE16FF476A35EBE_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.ModuleElement System.Net.Configuration.DefaultProxySection::get_Module()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleElement_t5FB2A9AA5D7E90EE133790B8E2D805559A93EF96* DefaultProxySection_get_Module_m72EABA0B5AB9E3C9D98FE49C82217B0868952E1D (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_get_Module_m72EABA0B5AB9E3C9D98FE49C82217B0868952E1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_get_Module_m72EABA0B5AB9E3C9D98FE49C82217B0868952E1D_RuntimeMethod_var);
		return (ModuleElement_t5FB2A9AA5D7E90EE133790B8E2D805559A93EF96*)NULL;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Net.Configuration.ProxyElement System.Net.Configuration.DefaultProxySection::get_Proxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* DefaultProxySection_get_Proxy_mA457C7777BB424414099F2490F4DB74AD9EA8AC4 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_get_Proxy_mA457C7777BB424414099F2490F4DB74AD9EA8AC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_get_Proxy_mA457C7777BB424414099F2490F4DB74AD9EA8AC4_RuntimeMethod_var);
		return (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65*)NULL;
	}
}
// System.Boolean System.Net.Configuration.DefaultProxySection::get_UseDefaultCredentials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultProxySection_get_UseDefaultCredentials_mAE82165A163C83521AE65BC5E621AFE98DDB838A (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_get_UseDefaultCredentials_mAE82165A163C83521AE65BC5E621AFE98DDB838A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_get_UseDefaultCredentials_mAE82165A163C83521AE65BC5E621AFE98DDB838A_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.DefaultProxySection::set_UseDefaultCredentials(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection_set_UseDefaultCredentials_m9E978FFD2E464FBDE65A123F84113AF617E5DA65 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_set_UseDefaultCredentials_m9E978FFD2E464FBDE65A123F84113AF617E5DA65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_set_UseDefaultCredentials_m9E978FFD2E464FBDE65A123F84113AF617E5DA65_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.DefaultProxySection::PostDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection_PostDeserialize_m1CD7AE41D781E5AC1A6EA82674DD86650DEE593F (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_PostDeserialize_m1CD7AE41D781E5AC1A6EA82674DD86650DEE593F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_PostDeserialize_m1CD7AE41D781E5AC1A6EA82674DD86650DEE593F_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.DefaultProxySection::Reset(System.Configuration.ConfigurationElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___0_parentElement, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ModuleElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleElement__ctor_mCCD0A5D194C60632528B4BA63E962FE233F61AD0 (ModuleElement_t5FB2A9AA5D7E90EE133790B8E2D805559A93EF96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleElement__ctor_mCCD0A5D194C60632528B4BA63E962FE233F61AD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ModuleElement__ctor_mCCD0A5D194C60632528B4BA63E962FE233F61AD0_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ModuleElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ModuleElement_get_Properties_mEBD179E935049433045FC4F9AF5AB0E9E63ACF5D (ModuleElement_t5FB2A9AA5D7E90EE133790B8E2D805559A93EF96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleElement_get_Properties_mEBD179E935049433045FC4F9AF5AB0E9E63ACF5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ModuleElement_get_Properties_mEBD179E935049433045FC4F9AF5AB0E9E63ACF5D_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.String System.Net.Configuration.ModuleElement::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleElement_get_Type_m78354AC048D6F7D23D9790ABA43DCD57EF14F7B5 (ModuleElement_t5FB2A9AA5D7E90EE133790B8E2D805559A93EF96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleElement_get_Type_m78354AC048D6F7D23D9790ABA43DCD57EF14F7B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ModuleElement_get_Type_m78354AC048D6F7D23D9790ABA43DCD57EF14F7B5_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Net.Configuration.ModuleElement::set_Type(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleElement_set_Type_m10C51C31D050ED5A6B7265DDC60EA81A24B404E9 (ModuleElement_t5FB2A9AA5D7E90EE133790B8E2D805559A93EF96* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleElement_set_Type_m10C51C31D050ED5A6B7265DDC60EA81A24B404E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ModuleElement_set_Type_m10C51C31D050ED5A6B7265DDC60EA81A24B404E9_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ProxyElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70 (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.ProxyElement/AutoDetectValues System.Net.Configuration.ProxyElement::get_AutoDetect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProxyElement_get_AutoDetect_m203A63761F46B668596654C7E8515273D71AE7F5 (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_get_AutoDetect_m203A63761F46B668596654C7E8515273D71AE7F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_get_AutoDetect_m203A63761F46B668596654C7E8515273D71AE7F5_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.ProxyElement::set_AutoDetect(System.Net.Configuration.ProxyElement/AutoDetectValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyElement_set_AutoDetect_m67E9CE7EB0CF082F1BFB97B8C1803754C7E8329A (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_set_AutoDetect_m67E9CE7EB0CF082F1BFB97B8C1803754C7E8329A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_set_AutoDetect_m67E9CE7EB0CF082F1BFB97B8C1803754C7E8329A_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.ProxyElement/BypassOnLocalValues System.Net.Configuration.ProxyElement::get_BypassOnLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProxyElement_get_BypassOnLocal_m2BC55997DC6E1235B4C09101DC2E902DC65E9225 (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_get_BypassOnLocal_m2BC55997DC6E1235B4C09101DC2E902DC65E9225_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_get_BypassOnLocal_m2BC55997DC6E1235B4C09101DC2E902DC65E9225_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.ProxyElement::set_BypassOnLocal(System.Net.Configuration.ProxyElement/BypassOnLocalValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyElement_set_BypassOnLocal_m13CDA5423DA7E5758EA8E542771B41A2715A3828 (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_set_BypassOnLocal_m13CDA5423DA7E5758EA8E542771B41A2715A3828_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_set_BypassOnLocal_m13CDA5423DA7E5758EA8E542771B41A2715A3828_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Uri System.Net.Configuration.ProxyElement::get_ProxyAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ProxyElement_get_ProxyAddress_mB27FA0151586BEAFFD124F1B24F25B4458C204F0 (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_get_ProxyAddress_mB27FA0151586BEAFFD124F1B24F25B4458C204F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_get_ProxyAddress_mB27FA0151586BEAFFD124F1B24F25B4458C204F0_RuntimeMethod_var);
		return (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL;
	}
}
// System.Void System.Net.Configuration.ProxyElement::set_ProxyAddress(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyElement_set_ProxyAddress_m2A6865758FC9D55DE5EC777057A84D250EEC825B (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_set_ProxyAddress_m2A6865758FC9D55DE5EC777057A84D250EEC825B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_set_ProxyAddress_m2A6865758FC9D55DE5EC777057A84D250EEC825B_RuntimeMethod_var);
		return;
	}
}
// System.Uri System.Net.Configuration.ProxyElement::get_ScriptLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ProxyElement_get_ScriptLocation_m35F6A6F61FAB09328F34D778713832B00BD5934C (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_get_ScriptLocation_m35F6A6F61FAB09328F34D778713832B00BD5934C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_get_ScriptLocation_m35F6A6F61FAB09328F34D778713832B00BD5934C_RuntimeMethod_var);
		return (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL;
	}
}
// System.Void System.Net.Configuration.ProxyElement::set_ScriptLocation(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyElement_set_ScriptLocation_m5546DE805D575177201B1E9CFF999EAF155E1DBB (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_set_ScriptLocation_m5546DE805D575177201B1E9CFF999EAF155E1DBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_set_ScriptLocation_m5546DE805D575177201B1E9CFF999EAF155E1DBB_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.ProxyElement/UseSystemDefaultValues System.Net.Configuration.ProxyElement::get_UseSystemDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProxyElement_get_UseSystemDefault_m616785A6338FA35CC5D2FEBB0BAD0E7D3926449C (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_get_UseSystemDefault_m616785A6338FA35CC5D2FEBB0BAD0E7D3926449C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_get_UseSystemDefault_m616785A6338FA35CC5D2FEBB0BAD0E7D3926449C_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.ProxyElement::set_UseSystemDefault(System.Net.Configuration.ProxyElement/UseSystemDefaultValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyElement_set_UseSystemDefault_m561F1E68624D9FAB8086E4C43DA2FC814D18C07A (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_set_UseSystemDefault_m561F1E68624D9FAB8086E4C43DA2FC814D18C07A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_set_UseSystemDefault_m561F1E68624D9FAB8086E4C43DA2FC814D18C07A_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.FtpCachePolicyElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FtpCachePolicyElement__ctor_m06E0F57C7B906BE61221D558652EBD16FB9CF283 (FtpCachePolicyElement_t12FAC54618469F19DD0D3AF0486F173A540D7F2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FtpCachePolicyElement__ctor_m06E0F57C7B906BE61221D558652EBD16FB9CF283_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(FtpCachePolicyElement__ctor_m06E0F57C7B906BE61221D558652EBD16FB9CF283_RuntimeMethod_var);
		return;
	}
}
// System.Net.Cache.RequestCacheLevel System.Net.Configuration.FtpCachePolicyElement::get_PolicyLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FtpCachePolicyElement_get_PolicyLevel_m2ECEE5F471B9AFD896E18E3130805A6C273F4897 (FtpCachePolicyElement_t12FAC54618469F19DD0D3AF0486F173A540D7F2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FtpCachePolicyElement_get_PolicyLevel_m2ECEE5F471B9AFD896E18E3130805A6C273F4897_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(FtpCachePolicyElement_get_PolicyLevel_m2ECEE5F471B9AFD896E18E3130805A6C273F4897_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.FtpCachePolicyElement::set_PolicyLevel(System.Net.Cache.RequestCacheLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FtpCachePolicyElement_set_PolicyLevel_m31A779AF3CB5175C45314E7A2201FD452CB28334 (FtpCachePolicyElement_t12FAC54618469F19DD0D3AF0486F173A540D7F2D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FtpCachePolicyElement_set_PolicyLevel_m31A779AF3CB5175C45314E7A2201FD452CB28334_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(FtpCachePolicyElement_set_PolicyLevel_m31A779AF3CB5175C45314E7A2201FD452CB28334_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.FtpCachePolicyElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* FtpCachePolicyElement_get_Properties_m3198BEDC4CC5E16CCC64C16129AAE6A5BE18BD31 (FtpCachePolicyElement_t12FAC54618469F19DD0D3AF0486F173A540D7F2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FtpCachePolicyElement_get_Properties_m3198BEDC4CC5E16CCC64C16129AAE6A5BE18BD31_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(FtpCachePolicyElement_get_Properties_m3198BEDC4CC5E16CCC64C16129AAE6A5BE18BD31_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Void System.Net.Configuration.FtpCachePolicyElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FtpCachePolicyElement_DeserializeElement_mF8C7EAAE573C8AA5380123B8B8F68D0FEEB9278B (FtpCachePolicyElement_t12FAC54618469F19DD0D3AF0486F173A540D7F2D* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___0_reader, bool ___1_serializeCollectionKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FtpCachePolicyElement_DeserializeElement_mF8C7EAAE573C8AA5380123B8B8F68D0FEEB9278B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(FtpCachePolicyElement_DeserializeElement_mF8C7EAAE573C8AA5380123B8B8F68D0FEEB9278B_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.FtpCachePolicyElement::Reset(System.Configuration.ConfigurationElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FtpCachePolicyElement_Reset_mE7645FA7C99BCA2684617B467A240ADC36DCD323 (FtpCachePolicyElement_t12FAC54618469F19DD0D3AF0486F173A540D7F2D* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___0_parentElement, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FtpCachePolicyElement_Reset_mE7645FA7C99BCA2684617B467A240ADC36DCD323_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(FtpCachePolicyElement_Reset_mE7645FA7C99BCA2684617B467A240ADC36DCD323_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.HttpCachePolicyElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpCachePolicyElement__ctor_mFF7DAD2FE7E7A2F02C17E815DCD3B58ABE446C63 (HttpCachePolicyElement_t6DC6A3BE41501894BA9B880CD58048B6AC7929D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpCachePolicyElement__ctor_mFF7DAD2FE7E7A2F02C17E815DCD3B58ABE446C63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpCachePolicyElement__ctor_mFF7DAD2FE7E7A2F02C17E815DCD3B58ABE446C63_RuntimeMethod_var);
		return;
	}
}
// System.TimeSpan System.Net.Configuration.HttpCachePolicyElement::get_MaximumAge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A HttpCachePolicyElement_get_MaximumAge_mC2A903C08BC4D7E978CFC6634746A423A8999EB4 (HttpCachePolicyElement_t6DC6A3BE41501894BA9B880CD58048B6AC7929D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpCachePolicyElement_get_MaximumAge_mC2A903C08BC4D7E978CFC6634746A423A8999EB4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_raise_profile_exception(HttpCachePolicyElement_get_MaximumAge_mC2A903C08BC4D7E978CFC6634746A423A8999EB4_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.HttpCachePolicyElement::set_MaximumAge(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpCachePolicyElement_set_MaximumAge_m1402D30E0A27C5E3D4F0E28523C61C6DAACF73EB (HttpCachePolicyElement_t6DC6A3BE41501894BA9B880CD58048B6AC7929D7* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpCachePolicyElement_set_MaximumAge_m1402D30E0A27C5E3D4F0E28523C61C6DAACF73EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpCachePolicyElement_set_MaximumAge_m1402D30E0A27C5E3D4F0E28523C61C6DAACF73EB_RuntimeMethod_var);
		return;
	}
}
// System.TimeSpan System.Net.Configuration.HttpCachePolicyElement::get_MaximumStale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A HttpCachePolicyElement_get_MaximumStale_m426E57642FCC9ECB09093460D2BD81A094A6CBB6 (HttpCachePolicyElement_t6DC6A3BE41501894BA9B880CD58048B6AC7929D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpCachePolicyElement_get_MaximumStale_m426E57642FCC9ECB09093460D2BD81A094A6CBB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_raise_profile_exception(HttpCachePolicyElement_get_MaximumStale_m426E57642FCC9ECB09093460D2BD81A094A6CBB6_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.HttpCachePolicyElement::set_MaximumStale(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpCachePolicyElement_set_MaximumStale_m1083BE2D21816DA9E09C762DD0F097369B7B9CCF (HttpCachePolicyElement_t6DC6A3BE41501894BA9B880CD58048B6AC7929D7* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpCachePolicyElement_set_MaximumStale_m1083BE2D21816DA9E09C762DD0F097369B7B9CCF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpCachePolicyElement_set_MaximumStale_m1083BE2D21816DA9E09C762DD0F097369B7B9CCF_RuntimeMethod_var);
		return;
	}
}
// System.TimeSpan System.Net.Configuration.HttpCachePolicyElement::get_MinimumFresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A HttpCachePolicyElement_get_MinimumFresh_m7DA8650C7C26818D37365BAE9B9DEC351DD55A7F (HttpCachePolicyElement_t6DC6A3BE41501894BA9B880CD58048B6AC7929D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpCachePolicyElement_get_MinimumFresh_m7DA8650C7C26818D37365BAE9B9DEC351DD55A7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_raise_profile_exception(HttpCachePolicyElement_get_MinimumFresh_m7DA8650C7C26818D37365BAE9B9DEC351DD55A7F_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.HttpCachePolicyElement::set_MinimumFresh(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpCachePolicyElement_set_MinimumFresh_mEB23463027DC8E9338DB7F411B0FCDCD4B07EB59 (HttpCachePolicyElement_t6DC6A3BE41501894BA9B880CD58048B6AC7929D7* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpCachePolicyElement_set_MinimumFresh_mEB23463027DC8E9338DB7F411B0FCDCD4B07EB59_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpCachePolicyElement_set_MinimumFresh_mEB23463027DC8E9338DB7F411B0FCDCD4B07EB59_RuntimeMethod_var);
		return;
	}
}
// System.Net.Cache.HttpRequestCacheLevel System.Net.Configuration.HttpCachePolicyElement::get_PolicyLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HttpCachePolicyElement_get_PolicyLevel_mB319B8785794AE482687E5B60E6FB5F7AF10A726 (HttpCachePolicyElement_t6DC6A3BE41501894BA9B880CD58048B6AC7929D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpCachePolicyElement_get_PolicyLevel_mB319B8785794AE482687E5B60E6FB5F7AF10A726_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(HttpCachePolicyElement_get_PolicyLevel_mB319B8785794AE482687E5B60E6FB5F7AF10A726_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.HttpCachePolicyElement::set_PolicyLevel(System.Net.Cache.HttpRequestCacheLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpCachePolicyElement_set_PolicyLevel_mBDA701D94328F1FAE85982A0941647220481F171 (HttpCachePolicyElement_t6DC6A3BE41501894BA9B880CD58048B6AC7929D7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpCachePolicyElement_set_PolicyLevel_mBDA701D94328F1FAE85982A0941647220481F171_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpCachePolicyElement_set_PolicyLevel_mBDA701D94328F1FAE85982A0941647220481F171_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpCachePolicyElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* HttpCachePolicyElement_get_Properties_m4A57C2EF8AA6B1ABB180FBBE8869B5C9CA8B5146 (HttpCachePolicyElement_t6DC6A3BE41501894BA9B880CD58048B6AC7929D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpCachePolicyElement_get_Properties_m4A57C2EF8AA6B1ABB180FBBE8869B5C9CA8B5146_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpCachePolicyElement_get_Properties_m4A57C2EF8AA6B1ABB180FBBE8869B5C9CA8B5146_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Void System.Net.Configuration.HttpCachePolicyElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpCachePolicyElement_DeserializeElement_m93929E364070CF1E6523727C6E5660921F7DAC11 (HttpCachePolicyElement_t6DC6A3BE41501894BA9B880CD58048B6AC7929D7* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___0_reader, bool ___1_serializeCollectionKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpCachePolicyElement_DeserializeElement_m93929E364070CF1E6523727C6E5660921F7DAC11_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpCachePolicyElement_DeserializeElement_m93929E364070CF1E6523727C6E5660921F7DAC11_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.HttpCachePolicyElement::Reset(System.Configuration.ConfigurationElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpCachePolicyElement_Reset_mED231986D0B1598611FDFC75E5ED7489F10D8B28 (HttpCachePolicyElement_t6DC6A3BE41501894BA9B880CD58048B6AC7929D7* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___0_parentElement, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpCachePolicyElement_Reset_mED231986D0B1598611FDFC75E5ED7489F10D8B28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpCachePolicyElement_Reset_mED231986D0B1598611FDFC75E5ED7489F10D8B28_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.HttpListenerElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListenerElement__ctor_m7B3E8B55DCF00955CB78DD0AA1387AE523DAE2FC (HttpListenerElement_t559D7C83361157D2F59976CF87A8D8CD7DC5CF27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpListenerElement__ctor_m7B3E8B55DCF00955CB78DD0AA1387AE523DAE2FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpListenerElement__ctor_m7B3E8B55DCF00955CB78DD0AA1387AE523DAE2FC_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpListenerElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* HttpListenerElement_get_Properties_m28B45D2F83707FCE01B5CD826B6EFFC015C0D0F9 (HttpListenerElement_t559D7C83361157D2F59976CF87A8D8CD7DC5CF27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpListenerElement_get_Properties_m28B45D2F83707FCE01B5CD826B6EFFC015C0D0F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpListenerElement_get_Properties_m28B45D2F83707FCE01B5CD826B6EFFC015C0D0F9_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Net.Configuration.HttpListenerTimeoutsElement System.Net.Configuration.HttpListenerElement::get_Timeouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpListenerTimeoutsElement_tDA5910F568E8832AC1B99AE56E79902B0451406E* HttpListenerElement_get_Timeouts_m03B4B91DE1ECA916DD0EB5AE3FD21E594C9A2677 (HttpListenerElement_t559D7C83361157D2F59976CF87A8D8CD7DC5CF27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpListenerElement_get_Timeouts_m03B4B91DE1ECA916DD0EB5AE3FD21E594C9A2677_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpListenerElement_get_Timeouts_m03B4B91DE1ECA916DD0EB5AE3FD21E594C9A2677_RuntimeMethod_var);
		return (HttpListenerTimeoutsElement_tDA5910F568E8832AC1B99AE56E79902B0451406E*)NULL;
	}
}
// System.Boolean System.Net.Configuration.HttpListenerElement::get_UnescapeRequestUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpListenerElement_get_UnescapeRequestUrl_mD9F799EEC84EE8D07E396C3343E36F19637F302A (HttpListenerElement_t559D7C83361157D2F59976CF87A8D8CD7DC5CF27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpListenerElement_get_UnescapeRequestUrl_mD9F799EEC84EE8D07E396C3343E36F19637F302A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(HttpListenerElement_get_UnescapeRequestUrl_mD9F799EEC84EE8D07E396C3343E36F19637F302A_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.HttpListenerTimeoutsElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListenerTimeoutsElement__ctor_m3C840D755AA1F28AAE5FC0C59256F36CC5F3C8A4 (HttpListenerTimeoutsElement_tDA5910F568E8832AC1B99AE56E79902B0451406E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpListenerTimeoutsElement__ctor_m3C840D755AA1F28AAE5FC0C59256F36CC5F3C8A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpListenerTimeoutsElement__ctor_m3C840D755AA1F28AAE5FC0C59256F36CC5F3C8A4_RuntimeMethod_var);
		return;
	}
}
// System.TimeSpan System.Net.Configuration.HttpListenerTimeoutsElement::get_DrainEntityBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A HttpListenerTimeoutsElement_get_DrainEntityBody_m836AA436EF59541EC1F5BEBB63B2F2E1BB8BC8D7 (HttpListenerTimeoutsElement_tDA5910F568E8832AC1B99AE56E79902B0451406E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpListenerTimeoutsElement_get_DrainEntityBody_m836AA436EF59541EC1F5BEBB63B2F2E1BB8BC8D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_raise_profile_exception(HttpListenerTimeoutsElement_get_DrainEntityBody_m836AA436EF59541EC1F5BEBB63B2F2E1BB8BC8D7_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = V_0;
		return L_0;
	}
}
// System.TimeSpan System.Net.Configuration.HttpListenerTimeoutsElement::get_EntityBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A HttpListenerTimeoutsElement_get_EntityBody_m7B1D8F12F5067BD540FB1521C91D0BBF2A3CA705 (HttpListenerTimeoutsElement_tDA5910F568E8832AC1B99AE56E79902B0451406E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpListenerTimeoutsElement_get_EntityBody_m7B1D8F12F5067BD540FB1521C91D0BBF2A3CA705_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_raise_profile_exception(HttpListenerTimeoutsElement_get_EntityBody_m7B1D8F12F5067BD540FB1521C91D0BBF2A3CA705_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = V_0;
		return L_0;
	}
}
// System.TimeSpan System.Net.Configuration.HttpListenerTimeoutsElement::get_HeaderWait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A HttpListenerTimeoutsElement_get_HeaderWait_m6BF6E01A03C131991396A1407615615DD12CC97F (HttpListenerTimeoutsElement_tDA5910F568E8832AC1B99AE56E79902B0451406E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpListenerTimeoutsElement_get_HeaderWait_m6BF6E01A03C131991396A1407615615DD12CC97F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_raise_profile_exception(HttpListenerTimeoutsElement_get_HeaderWait_m6BF6E01A03C131991396A1407615615DD12CC97F_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = V_0;
		return L_0;
	}
}
// System.TimeSpan System.Net.Configuration.HttpListenerTimeoutsElement::get_IdleConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A HttpListenerTimeoutsElement_get_IdleConnection_mEC264218C3086F7A6188011D365A09D312E56D19 (HttpListenerTimeoutsElement_tDA5910F568E8832AC1B99AE56E79902B0451406E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpListenerTimeoutsElement_get_IdleConnection_mEC264218C3086F7A6188011D365A09D312E56D19_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_raise_profile_exception(HttpListenerTimeoutsElement_get_IdleConnection_mEC264218C3086F7A6188011D365A09D312E56D19_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = V_0;
		return L_0;
	}
}
// System.Int64 System.Net.Configuration.HttpListenerTimeoutsElement::get_MinSendBytesPerSecond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t HttpListenerTimeoutsElement_get_MinSendBytesPerSecond_mDAD77638E4B164675622BBB9807FE819A04D621B (HttpListenerTimeoutsElement_tDA5910F568E8832AC1B99AE56E79902B0451406E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpListenerTimeoutsElement_get_MinSendBytesPerSecond_mDAD77638E4B164675622BBB9807FE819A04D621B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(HttpListenerTimeoutsElement_get_MinSendBytesPerSecond_mDAD77638E4B164675622BBB9807FE819A04D621B_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		int64_t L_0 = V_0;
		return L_0;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpListenerTimeoutsElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* HttpListenerTimeoutsElement_get_Properties_mB4F8948E895404155961EEBE27C50858FF110047 (HttpListenerTimeoutsElement_tDA5910F568E8832AC1B99AE56E79902B0451406E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpListenerTimeoutsElement_get_Properties_mB4F8948E895404155961EEBE27C50858FF110047_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpListenerTimeoutsElement_get_Properties_mB4F8948E895404155961EEBE27C50858FF110047_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.TimeSpan System.Net.Configuration.HttpListenerTimeoutsElement::get_RequestQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A HttpListenerTimeoutsElement_get_RequestQueue_m4D9C7580C69B6AC583C25838FDF3B9B803FE1882 (HttpListenerTimeoutsElement_tDA5910F568E8832AC1B99AE56E79902B0451406E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpListenerTimeoutsElement_get_RequestQueue_m4D9C7580C69B6AC583C25838FDF3B9B803FE1882_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_raise_profile_exception(HttpListenerTimeoutsElement_get_RequestQueue_m4D9C7580C69B6AC583C25838FDF3B9B803FE1882_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.HttpWebRequestElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717 (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Net.Configuration.HttpWebRequestElement::get_MaximumErrorResponseLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HttpWebRequestElement_get_MaximumErrorResponseLength_mAD2CEBCBDD398C4CEF1C6E98A9737F4D4A10BC28 (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_get_MaximumErrorResponseLength_mAD2CEBCBDD398C4CEF1C6E98A9737F4D4A10BC28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_get_MaximumErrorResponseLength_mAD2CEBCBDD398C4CEF1C6E98A9737F4D4A10BC28_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.HttpWebRequestElement::set_MaximumErrorResponseLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequestElement_set_MaximumErrorResponseLength_m67C97317833EF7B9B79AA55502EC39BE91CFDAE2 (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_set_MaximumErrorResponseLength_m67C97317833EF7B9B79AA55502EC39BE91CFDAE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_set_MaximumErrorResponseLength_m67C97317833EF7B9B79AA55502EC39BE91CFDAE2_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Net.Configuration.HttpWebRequestElement::get_MaximumResponseHeadersLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HttpWebRequestElement_get_MaximumResponseHeadersLength_m13289CE961DB708367948A2EECBC7433C4D39C58 (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_get_MaximumResponseHeadersLength_m13289CE961DB708367948A2EECBC7433C4D39C58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_get_MaximumResponseHeadersLength_m13289CE961DB708367948A2EECBC7433C4D39C58_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.HttpWebRequestElement::set_MaximumResponseHeadersLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequestElement_set_MaximumResponseHeadersLength_mAE339471E3F5B9939D43428B0E52063821E1A430 (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_set_MaximumResponseHeadersLength_mAE339471E3F5B9939D43428B0E52063821E1A430_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_set_MaximumResponseHeadersLength_mAE339471E3F5B9939D43428B0E52063821E1A430_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Net.Configuration.HttpWebRequestElement::get_MaximumUnauthorizedUploadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HttpWebRequestElement_get_MaximumUnauthorizedUploadLength_mCC0713EDC731FE3A36EB38B0B662B584F605BE70 (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_get_MaximumUnauthorizedUploadLength_mCC0713EDC731FE3A36EB38B0B662B584F605BE70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_get_MaximumUnauthorizedUploadLength_mCC0713EDC731FE3A36EB38B0B662B584F605BE70_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.HttpWebRequestElement::set_MaximumUnauthorizedUploadLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequestElement_set_MaximumUnauthorizedUploadLength_m08DC2C23918CC1A25BD3B537ABCC9D4DE88857FA (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_set_MaximumUnauthorizedUploadLength_m08DC2C23918CC1A25BD3B537ABCC9D4DE88857FA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_set_MaximumUnauthorizedUploadLength_m08DC2C23918CC1A25BD3B537ABCC9D4DE88857FA_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Boolean System.Net.Configuration.HttpWebRequestElement::get_UseUnsafeHeaderParsing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpWebRequestElement_get_UseUnsafeHeaderParsing_m653C396F6652C6B6AADBA7047B4489D79D6DC59B (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_get_UseUnsafeHeaderParsing_m653C396F6652C6B6AADBA7047B4489D79D6DC59B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_get_UseUnsafeHeaderParsing_m653C396F6652C6B6AADBA7047B4489D79D6DC59B_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.HttpWebRequestElement::set_UseUnsafeHeaderParsing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequestElement_set_UseUnsafeHeaderParsing_mBDBAD843047635C5DF631554249FE09B3C127B99 (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_set_UseUnsafeHeaderParsing_mBDBAD843047635C5DF631554249FE09B3C127B99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_set_UseUnsafeHeaderParsing_mBDBAD843047635C5DF631554249FE09B3C127B99_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.HttpWebRequestElement::PostDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequestElement_PostDeserialize_m9D884AD55845D6CA3FA9BC0ED93E687382ABE94F (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_PostDeserialize_m9D884AD55845D6CA3FA9BC0ED93E687382ABE94F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_PostDeserialize_m9D884AD55845D6CA3FA9BC0ED93E687382ABE94F_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.Ipv6Element::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Net.Configuration.Ipv6Element::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ipv6Element_get_Enabled_mC62B072A122F0D03995218184825FF0912213BF2 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element_get_Enabled_mC62B072A122F0D03995218184825FF0912213BF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element_get_Enabled_mC62B072A122F0D03995218184825FF0912213BF2_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.Ipv6Element::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ipv6Element_set_Enabled_mB802AA5876D6A28E8A99741E59E9DBC792EFB455 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element_set_Enabled_mB802AA5876D6A28E8A99741E59E9DBC792EFB455_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element_set_Enabled_mB802AA5876D6A28E8A99741E59E9DBC792EFB455_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.MailSettingsSectionGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MailSettingsSectionGroup__ctor_mFFA038C4F32A9759817D5594A268F81AF419BBDA (MailSettingsSectionGroup_tF4FBFB4BD7658F6EB57894999F3B7F467F7C8426* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MailSettingsSectionGroup__ctor_mFFA038C4F32A9759817D5594A268F81AF419BBDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(MailSettingsSectionGroup__ctor_mFFA038C4F32A9759817D5594A268F81AF419BBDA_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.SmtpSection System.Net.Configuration.MailSettingsSectionGroup::get_Smtp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SmtpSection_tB52CE0EE7FAD32EBBB0C19ECD42AEF95D5CF5DBC* MailSettingsSectionGroup_get_Smtp_m0F7928BB7DBA52A8F9E9179E53253B09AA079EC4 (MailSettingsSectionGroup_tF4FBFB4BD7658F6EB57894999F3B7F467F7C8426* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MailSettingsSectionGroup_get_Smtp_m0F7928BB7DBA52A8F9E9179E53253B09AA079EC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(MailSettingsSectionGroup_get_Smtp_m0F7928BB7DBA52A8F9E9179E53253B09AA079EC4_RuntimeMethod_var);
		return (SmtpSection_tB52CE0EE7FAD32EBBB0C19ECD42AEF95D5CF5DBC*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.SmtpSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmtpSection__ctor_m44D8A85D0BDE374C13600FC10F894C9EDC236780 (SmtpSection_tB52CE0EE7FAD32EBBB0C19ECD42AEF95D5CF5DBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpSection__ctor_m44D8A85D0BDE374C13600FC10F894C9EDC236780_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpSection__ctor_m44D8A85D0BDE374C13600FC10F894C9EDC236780_RuntimeMethod_var);
		return;
	}
}
// System.Net.Mail.SmtpDeliveryFormat System.Net.Configuration.SmtpSection::get_DeliveryFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmtpSection_get_DeliveryFormat_mC6B57D103E455EED8C201B8BEA37BC8761DD657E (SmtpSection_tB52CE0EE7FAD32EBBB0C19ECD42AEF95D5CF5DBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpSection_get_DeliveryFormat_mC6B57D103E455EED8C201B8BEA37BC8761DD657E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(SmtpSection_get_DeliveryFormat_mC6B57D103E455EED8C201B8BEA37BC8761DD657E_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.SmtpSection::set_DeliveryFormat(System.Net.Mail.SmtpDeliveryFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmtpSection_set_DeliveryFormat_m5BCE38E659F0FEFD98A51A24493AE11B1434A79B (SmtpSection_tB52CE0EE7FAD32EBBB0C19ECD42AEF95D5CF5DBC* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpSection_set_DeliveryFormat_m5BCE38E659F0FEFD98A51A24493AE11B1434A79B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpSection_set_DeliveryFormat_m5BCE38E659F0FEFD98A51A24493AE11B1434A79B_RuntimeMethod_var);
		return;
	}
}
// System.Net.Mail.SmtpDeliveryMethod System.Net.Configuration.SmtpSection::get_DeliveryMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmtpSection_get_DeliveryMethod_m1EA4FB981A8EAC587415B2CB7F20A575A1DFE7A4 (SmtpSection_tB52CE0EE7FAD32EBBB0C19ECD42AEF95D5CF5DBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpSection_get_DeliveryMethod_m1EA4FB981A8EAC587415B2CB7F20A575A1DFE7A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(SmtpSection_get_DeliveryMethod_m1EA4FB981A8EAC587415B2CB7F20A575A1DFE7A4_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.SmtpSection::set_DeliveryMethod(System.Net.Mail.SmtpDeliveryMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmtpSection_set_DeliveryMethod_mAFD74D0B7B0AFFA08ADC26963925004F12D437C2 (SmtpSection_tB52CE0EE7FAD32EBBB0C19ECD42AEF95D5CF5DBC* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpSection_set_DeliveryMethod_mAFD74D0B7B0AFFA08ADC26963925004F12D437C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpSection_set_DeliveryMethod_mAFD74D0B7B0AFFA08ADC26963925004F12D437C2_RuntimeMethod_var);
		return;
	}
}
// System.String System.Net.Configuration.SmtpSection::get_From()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SmtpSection_get_From_mC132CA847A4D65AB7CED0A9401F12C4943DDBECB (SmtpSection_tB52CE0EE7FAD32EBBB0C19ECD42AEF95D5CF5DBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpSection_get_From_mC132CA847A4D65AB7CED0A9401F12C4943DDBECB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpSection_get_From_mC132CA847A4D65AB7CED0A9401F12C4943DDBECB_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Net.Configuration.SmtpSection::set_From(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmtpSection_set_From_m79776D970AEDE7CF8AFF8355B9FACE301A01AA43 (SmtpSection_tB52CE0EE7FAD32EBBB0C19ECD42AEF95D5CF5DBC* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpSection_set_From_m79776D970AEDE7CF8AFF8355B9FACE301A01AA43_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpSection_set_From_m79776D970AEDE7CF8AFF8355B9FACE301A01AA43_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.SmtpNetworkElement System.Net.Configuration.SmtpSection::get_Network()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* SmtpSection_get_Network_m383111DF22672E3209450D7AD1460BBC774F8866 (SmtpSection_tB52CE0EE7FAD32EBBB0C19ECD42AEF95D5CF5DBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpSection_get_Network_m383111DF22672E3209450D7AD1460BBC774F8866_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpSection_get_Network_m383111DF22672E3209450D7AD1460BBC774F8866_RuntimeMethod_var);
		return (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD*)NULL;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SmtpSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SmtpSection_get_Properties_m1C2786FC180A4B21AABF7CF76CC1F4050502C4CC (SmtpSection_tB52CE0EE7FAD32EBBB0C19ECD42AEF95D5CF5DBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpSection_get_Properties_m1C2786FC180A4B21AABF7CF76CC1F4050502C4CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpSection_get_Properties_m1C2786FC180A4B21AABF7CF76CC1F4050502C4CC_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Net.Configuration.SmtpSpecifiedPickupDirectoryElement System.Net.Configuration.SmtpSection::get_SpecifiedPickupDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SmtpSpecifiedPickupDirectoryElement_tB884FF2CF82666E01FEB0C50F909B68367868F9D* SmtpSection_get_SpecifiedPickupDirectory_m3C08952E9E5C1C7EF94907C3EAFD56B4B5A55B95 (SmtpSection_tB52CE0EE7FAD32EBBB0C19ECD42AEF95D5CF5DBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpSection_get_SpecifiedPickupDirectory_m3C08952E9E5C1C7EF94907C3EAFD56B4B5A55B95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpSection_get_SpecifiedPickupDirectory_m3C08952E9E5C1C7EF94907C3EAFD56B4B5A55B95_RuntimeMethod_var);
		return (SmtpSpecifiedPickupDirectoryElement_tB884FF2CF82666E01FEB0C50F909B68367868F9D*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.SmtpNetworkElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmtpNetworkElement__ctor_mB26BD971ACC48BEB0502EF44C0A217D1CF0F7DAD (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement__ctor_mB26BD971ACC48BEB0502EF44C0A217D1CF0F7DAD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement__ctor_mB26BD971ACC48BEB0502EF44C0A217D1CF0F7DAD_RuntimeMethod_var);
		return;
	}
}
// System.String System.Net.Configuration.SmtpNetworkElement::get_ClientDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SmtpNetworkElement_get_ClientDomain_mDD748DA4546EEAC364DF3D0EA52103242A10B540 (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_get_ClientDomain_mDD748DA4546EEAC364DF3D0EA52103242A10B540_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_get_ClientDomain_mDD748DA4546EEAC364DF3D0EA52103242A10B540_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Net.Configuration.SmtpNetworkElement::set_ClientDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmtpNetworkElement_set_ClientDomain_m24922A673D90DAF8D55A3D513EAC0814DB3AF9EA (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_set_ClientDomain_m24922A673D90DAF8D55A3D513EAC0814DB3AF9EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_set_ClientDomain_m24922A673D90DAF8D55A3D513EAC0814DB3AF9EA_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Net.Configuration.SmtpNetworkElement::get_DefaultCredentials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SmtpNetworkElement_get_DefaultCredentials_m393CA94C583AF1F7B76C3614F4126521A4D596D8 (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_get_DefaultCredentials_m393CA94C583AF1F7B76C3614F4126521A4D596D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_get_DefaultCredentials_m393CA94C583AF1F7B76C3614F4126521A4D596D8_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.SmtpNetworkElement::set_DefaultCredentials(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmtpNetworkElement_set_DefaultCredentials_m5FAB983BCEA2BF284244A8F02A36A7578A2D55EE (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_set_DefaultCredentials_m5FAB983BCEA2BF284244A8F02A36A7578A2D55EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_set_DefaultCredentials_m5FAB983BCEA2BF284244A8F02A36A7578A2D55EE_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Net.Configuration.SmtpNetworkElement::get_EnableSsl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SmtpNetworkElement_get_EnableSsl_m9D18C93E041C80264B70D0FDC7F33C096A9D5D8E (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_get_EnableSsl_m9D18C93E041C80264B70D0FDC7F33C096A9D5D8E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_get_EnableSsl_m9D18C93E041C80264B70D0FDC7F33C096A9D5D8E_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.SmtpNetworkElement::set_EnableSsl(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmtpNetworkElement_set_EnableSsl_m02112895F4E257233DC3D1EA55A2AEABA9193243 (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_set_EnableSsl_m02112895F4E257233DC3D1EA55A2AEABA9193243_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_set_EnableSsl_m02112895F4E257233DC3D1EA55A2AEABA9193243_RuntimeMethod_var);
		return;
	}
}
// System.String System.Net.Configuration.SmtpNetworkElement::get_Host()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SmtpNetworkElement_get_Host_m6DB435ADE75A4191158438AE75C6C575D1EEE063 (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_get_Host_m6DB435ADE75A4191158438AE75C6C575D1EEE063_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_get_Host_m6DB435ADE75A4191158438AE75C6C575D1EEE063_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Net.Configuration.SmtpNetworkElement::set_Host(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmtpNetworkElement_set_Host_mD092F4D663919BEA374D640237CADB0432B3F649 (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_set_Host_mD092F4D663919BEA374D640237CADB0432B3F649_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_set_Host_mD092F4D663919BEA374D640237CADB0432B3F649_RuntimeMethod_var);
		return;
	}
}
// System.String System.Net.Configuration.SmtpNetworkElement::get_Password()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SmtpNetworkElement_get_Password_mC0567A10342566402AA41044114D88018C5C8C96 (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_get_Password_mC0567A10342566402AA41044114D88018C5C8C96_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_get_Password_mC0567A10342566402AA41044114D88018C5C8C96_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Net.Configuration.SmtpNetworkElement::set_Password(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmtpNetworkElement_set_Password_m41CDD86CB823C73583C2AEB2511AF6F0A437A996 (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_set_Password_m41CDD86CB823C73583C2AEB2511AF6F0A437A996_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_set_Password_m41CDD86CB823C73583C2AEB2511AF6F0A437A996_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Net.Configuration.SmtpNetworkElement::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmtpNetworkElement_get_Port_mCC464CCA12CB0571E3681EEBB16FD864B6AA279C (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_get_Port_mCC464CCA12CB0571E3681EEBB16FD864B6AA279C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_get_Port_mCC464CCA12CB0571E3681EEBB16FD864B6AA279C_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.SmtpNetworkElement::set_Port(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmtpNetworkElement_set_Port_m6F592A8F591F25925168FDFE666442C20DADEBA7 (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_set_Port_m6F592A8F591F25925168FDFE666442C20DADEBA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_set_Port_m6F592A8F591F25925168FDFE666442C20DADEBA7_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SmtpNetworkElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SmtpNetworkElement_get_Properties_m0E1FAB91F381B508249EFBA133427B2EC825E699 (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_get_Properties_m0E1FAB91F381B508249EFBA133427B2EC825E699_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_get_Properties_m0E1FAB91F381B508249EFBA133427B2EC825E699_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.String System.Net.Configuration.SmtpNetworkElement::get_TargetName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SmtpNetworkElement_get_TargetName_mABBA1E06217856B27C2EEF1D297A455142836183 (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_get_TargetName_mABBA1E06217856B27C2EEF1D297A455142836183_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_get_TargetName_mABBA1E06217856B27C2EEF1D297A455142836183_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Net.Configuration.SmtpNetworkElement::set_TargetName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmtpNetworkElement_set_TargetName_mCDC35C44C1C53AD6396D4C686FE8E3C36292BFEF (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_set_TargetName_mCDC35C44C1C53AD6396D4C686FE8E3C36292BFEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_set_TargetName_mCDC35C44C1C53AD6396D4C686FE8E3C36292BFEF_RuntimeMethod_var);
		return;
	}
}
// System.String System.Net.Configuration.SmtpNetworkElement::get_UserName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SmtpNetworkElement_get_UserName_mC94AD57F2D59D6F648241ABB5C8894B55EAE5813 (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_get_UserName_mC94AD57F2D59D6F648241ABB5C8894B55EAE5813_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_get_UserName_mC94AD57F2D59D6F648241ABB5C8894B55EAE5813_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Net.Configuration.SmtpNetworkElement::set_UserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmtpNetworkElement_set_UserName_m8B6A970B7991A7723051BA3B0F1627665E2B355B (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_set_UserName_m8B6A970B7991A7723051BA3B0F1627665E2B355B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_set_UserName_m8B6A970B7991A7723051BA3B0F1627665E2B355B_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.SmtpNetworkElement::PostDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmtpNetworkElement_PostDeserialize_mB36F488C3C6EE6687771C8034D465A2BB34BE05D (SmtpNetworkElement_t1A33866F291A08896BEAF6CDCAEA68EB89F160DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpNetworkElement_PostDeserialize_mB36F488C3C6EE6687771C8034D465A2BB34BE05D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpNetworkElement_PostDeserialize_mB36F488C3C6EE6687771C8034D465A2BB34BE05D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.SmtpSpecifiedPickupDirectoryElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmtpSpecifiedPickupDirectoryElement__ctor_m778F796D9EDE9516D87202371364C21829EF7B0E (SmtpSpecifiedPickupDirectoryElement_tB884FF2CF82666E01FEB0C50F909B68367868F9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpSpecifiedPickupDirectoryElement__ctor_m778F796D9EDE9516D87202371364C21829EF7B0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpSpecifiedPickupDirectoryElement__ctor_m778F796D9EDE9516D87202371364C21829EF7B0E_RuntimeMethod_var);
		return;
	}
}
// System.String System.Net.Configuration.SmtpSpecifiedPickupDirectoryElement::get_PickupDirectoryLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SmtpSpecifiedPickupDirectoryElement_get_PickupDirectoryLocation_m8FF4EBED8D7966329F958F8C69EEBB98F6B2279F (SmtpSpecifiedPickupDirectoryElement_tB884FF2CF82666E01FEB0C50F909B68367868F9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpSpecifiedPickupDirectoryElement_get_PickupDirectoryLocation_m8FF4EBED8D7966329F958F8C69EEBB98F6B2279F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpSpecifiedPickupDirectoryElement_get_PickupDirectoryLocation_m8FF4EBED8D7966329F958F8C69EEBB98F6B2279F_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Net.Configuration.SmtpSpecifiedPickupDirectoryElement::set_PickupDirectoryLocation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmtpSpecifiedPickupDirectoryElement_set_PickupDirectoryLocation_m14A0A9864A55416BB0F0F1E02003A61382D14C76 (SmtpSpecifiedPickupDirectoryElement_tB884FF2CF82666E01FEB0C50F909B68367868F9D* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpSpecifiedPickupDirectoryElement_set_PickupDirectoryLocation_m14A0A9864A55416BB0F0F1E02003A61382D14C76_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpSpecifiedPickupDirectoryElement_set_PickupDirectoryLocation_m14A0A9864A55416BB0F0F1E02003A61382D14C76_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SmtpSpecifiedPickupDirectoryElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SmtpSpecifiedPickupDirectoryElement_get_Properties_m2F90A06B9600227CB386C97264FBBCE4AC8146BE (SmtpSpecifiedPickupDirectoryElement_tB884FF2CF82666E01FEB0C50F909B68367868F9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmtpSpecifiedPickupDirectoryElement_get_Properties_m2F90A06B9600227CB386C97264FBBCE4AC8146BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SmtpSpecifiedPickupDirectoryElement_get_Properties_m2F90A06B9600227CB386C97264FBBCE4AC8146BE_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.NetSectionGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.AuthenticationModulesSection System.Net.Configuration.NetSectionGroup::get_AuthenticationModules()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationModulesSection_t3A675E838686A766DCE07BEAB36EA46A62316C69* NetSectionGroup_get_AuthenticationModules_m2266B92D456F596482FD58A66564A8C66CE0678E (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup_get_AuthenticationModules_m2266B92D456F596482FD58A66564A8C66CE0678E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup_get_AuthenticationModules_m2266B92D456F596482FD58A66564A8C66CE0678E_RuntimeMethod_var);
		return (AuthenticationModulesSection_t3A675E838686A766DCE07BEAB36EA46A62316C69*)NULL;
	}
}
// System.Net.Configuration.ConnectionManagementSection System.Net.Configuration.NetSectionGroup::get_ConnectionManagement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* NetSectionGroup_get_ConnectionManagement_m9CBE0E2AA629807E547E71A42677666403F75B0A (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup_get_ConnectionManagement_m9CBE0E2AA629807E547E71A42677666403F75B0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup_get_ConnectionManagement_m9CBE0E2AA629807E547E71A42677666403F75B0A_RuntimeMethod_var);
		return (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2*)NULL;
	}
}
// System.Net.Configuration.DefaultProxySection System.Net.Configuration.NetSectionGroup::get_DefaultProxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* NetSectionGroup_get_DefaultProxy_mDFB16FD78D6F16272B868DECAD4B2D6CA0029626 (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup_get_DefaultProxy_mDFB16FD78D6F16272B868DECAD4B2D6CA0029626_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup_get_DefaultProxy_mDFB16FD78D6F16272B868DECAD4B2D6CA0029626_RuntimeMethod_var);
		return (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34*)NULL;
	}
}
// System.Net.Configuration.MailSettingsSectionGroup System.Net.Configuration.NetSectionGroup::get_MailSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MailSettingsSectionGroup_tF4FBFB4BD7658F6EB57894999F3B7F467F7C8426* NetSectionGroup_get_MailSettings_m061EF5997B2ADC36605125874A9EBCD336E155C6 (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup_get_MailSettings_m061EF5997B2ADC36605125874A9EBCD336E155C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup_get_MailSettings_m061EF5997B2ADC36605125874A9EBCD336E155C6_RuntimeMethod_var);
		return (MailSettingsSectionGroup_tF4FBFB4BD7658F6EB57894999F3B7F467F7C8426*)NULL;
	}
}
// System.Net.Configuration.RequestCachingSection System.Net.Configuration.NetSectionGroup::get_RequestCaching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4* NetSectionGroup_get_RequestCaching_m1C4D250A58F7E58E392D5293B850E54E516F1980 (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup_get_RequestCaching_m1C4D250A58F7E58E392D5293B850E54E516F1980_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup_get_RequestCaching_m1C4D250A58F7E58E392D5293B850E54E516F1980_RuntimeMethod_var);
		return (RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4*)NULL;
	}
}
// System.Net.Configuration.SettingsSection System.Net.Configuration.NetSectionGroup::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* NetSectionGroup_get_Settings_m9478377C3C07EF944C6B3428CE7DA1D90E0C05E4 (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup_get_Settings_m9478377C3C07EF944C6B3428CE7DA1D90E0C05E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup_get_Settings_m9478377C3C07EF944C6B3428CE7DA1D90E0C05E4_RuntimeMethod_var);
		return (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12*)NULL;
	}
}
// System.Net.Configuration.WebRequestModulesSection System.Net.Configuration.NetSectionGroup::get_WebRequestModules()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* NetSectionGroup_get_WebRequestModules_m55EBE5D63BE2FBF4FDB47B38AF880F9175EB40EE (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup_get_WebRequestModules_m55EBE5D63BE2FBF4FDB47B38AF880F9175EB40EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup_get_WebRequestModules_m55EBE5D63BE2FBF4FDB47B38AF880F9175EB40EE_RuntimeMethod_var);
		return (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00*)NULL;
	}
}
// System.Net.Configuration.NetSectionGroup System.Net.Configuration.NetSectionGroup::GetSectionGroup(System.Configuration.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* NetSectionGroup_GetSectionGroup_mB365D84045B47F37CBC51B19FA4FCF7789A40534 (Configuration_t76590F71F1AB7F5CC4BCC02EC0CDBF4449CDAEC1* ___0_config, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup_GetSectionGroup_mB365D84045B47F37CBC51B19FA4FCF7789A40534_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup_GetSectionGroup_mB365D84045B47F37CBC51B19FA4FCF7789A40534_RuntimeMethod_var);
		return (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.RequestCachingSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCachingSection__ctor_m492CDBD5071E558E611DB3B464D3406BC468532D (RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCachingSection__ctor_m492CDBD5071E558E611DB3B464D3406BC468532D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(RequestCachingSection__ctor_m492CDBD5071E558E611DB3B464D3406BC468532D_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.FtpCachePolicyElement System.Net.Configuration.RequestCachingSection::get_DefaultFtpCachePolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FtpCachePolicyElement_t12FAC54618469F19DD0D3AF0486F173A540D7F2D* RequestCachingSection_get_DefaultFtpCachePolicy_m6156411957E4B580665E24F646C55EEFB9C03D91 (RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCachingSection_get_DefaultFtpCachePolicy_m6156411957E4B580665E24F646C55EEFB9C03D91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(RequestCachingSection_get_DefaultFtpCachePolicy_m6156411957E4B580665E24F646C55EEFB9C03D91_RuntimeMethod_var);
		return (FtpCachePolicyElement_t12FAC54618469F19DD0D3AF0486F173A540D7F2D*)NULL;
	}
}
// System.Net.Configuration.HttpCachePolicyElement System.Net.Configuration.RequestCachingSection::get_DefaultHttpCachePolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpCachePolicyElement_t6DC6A3BE41501894BA9B880CD58048B6AC7929D7* RequestCachingSection_get_DefaultHttpCachePolicy_mCC1951084BD1753884DC700D760B49F900D3F810 (RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCachingSection_get_DefaultHttpCachePolicy_mCC1951084BD1753884DC700D760B49F900D3F810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(RequestCachingSection_get_DefaultHttpCachePolicy_mCC1951084BD1753884DC700D760B49F900D3F810_RuntimeMethod_var);
		return (HttpCachePolicyElement_t6DC6A3BE41501894BA9B880CD58048B6AC7929D7*)NULL;
	}
}
// System.Net.Cache.RequestCacheLevel System.Net.Configuration.RequestCachingSection::get_DefaultPolicyLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RequestCachingSection_get_DefaultPolicyLevel_mC5EC2F5BBC31CF2F1D5E9AC1EA1BA34A29E662FB (RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCachingSection_get_DefaultPolicyLevel_mC5EC2F5BBC31CF2F1D5E9AC1EA1BA34A29E662FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(RequestCachingSection_get_DefaultPolicyLevel_mC5EC2F5BBC31CF2F1D5E9AC1EA1BA34A29E662FB_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.RequestCachingSection::set_DefaultPolicyLevel(System.Net.Cache.RequestCacheLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCachingSection_set_DefaultPolicyLevel_mCE38163685856A75D3994722D7FBDFE2C8A04756 (RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCachingSection_set_DefaultPolicyLevel_mCE38163685856A75D3994722D7FBDFE2C8A04756_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(RequestCachingSection_set_DefaultPolicyLevel_mCE38163685856A75D3994722D7FBDFE2C8A04756_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Net.Configuration.RequestCachingSection::get_DisableAllCaching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestCachingSection_get_DisableAllCaching_m880E1629352AC0B9AF4C6DFD2A4FA472ACC7483B (RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCachingSection_get_DisableAllCaching_m880E1629352AC0B9AF4C6DFD2A4FA472ACC7483B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(RequestCachingSection_get_DisableAllCaching_m880E1629352AC0B9AF4C6DFD2A4FA472ACC7483B_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.RequestCachingSection::set_DisableAllCaching(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCachingSection_set_DisableAllCaching_m7D9FD5D20A4972B47C1E7DD938888F49D392000A (RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCachingSection_set_DisableAllCaching_m7D9FD5D20A4972B47C1E7DD938888F49D392000A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(RequestCachingSection_set_DisableAllCaching_m7D9FD5D20A4972B47C1E7DD938888F49D392000A_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Net.Configuration.RequestCachingSection::get_IsPrivateCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestCachingSection_get_IsPrivateCache_m51BD06919A5DB7FBEBC7489725B16F6448B7F43A (RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCachingSection_get_IsPrivateCache_m51BD06919A5DB7FBEBC7489725B16F6448B7F43A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(RequestCachingSection_get_IsPrivateCache_m51BD06919A5DB7FBEBC7489725B16F6448B7F43A_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.RequestCachingSection::set_IsPrivateCache(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCachingSection_set_IsPrivateCache_m23E1E9635F532065DC3FF8D3D2209C960AFA2DAD (RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCachingSection_set_IsPrivateCache_m23E1E9635F532065DC3FF8D3D2209C960AFA2DAD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(RequestCachingSection_set_IsPrivateCache_m23E1E9635F532065DC3FF8D3D2209C960AFA2DAD_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.RequestCachingSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* RequestCachingSection_get_Properties_m380A033BF2302CEE41A9C4D05793205AFCAE1310 (RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCachingSection_get_Properties_m380A033BF2302CEE41A9C4D05793205AFCAE1310_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(RequestCachingSection_get_Properties_m380A033BF2302CEE41A9C4D05793205AFCAE1310_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.TimeSpan System.Net.Configuration.RequestCachingSection::get_UnspecifiedMaximumAge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A RequestCachingSection_get_UnspecifiedMaximumAge_m68CAC1EB7E24A3DA7A5B9A21FAD75437F7B65CB2 (RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCachingSection_get_UnspecifiedMaximumAge_m68CAC1EB7E24A3DA7A5B9A21FAD75437F7B65CB2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_raise_profile_exception(RequestCachingSection_get_UnspecifiedMaximumAge_m68CAC1EB7E24A3DA7A5B9A21FAD75437F7B65CB2_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.RequestCachingSection::set_UnspecifiedMaximumAge(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCachingSection_set_UnspecifiedMaximumAge_m383C4C9177D2D84452BA03C2434683291207DEE8 (RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCachingSection_set_UnspecifiedMaximumAge_m383C4C9177D2D84452BA03C2434683291207DEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(RequestCachingSection_set_UnspecifiedMaximumAge_m383C4C9177D2D84452BA03C2434683291207DEE8_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.RequestCachingSection::DeserializeElement(System.Xml.XmlReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCachingSection_DeserializeElement_m0FC0D231EA5E20DC3FC6F6850876A0447C2845EB (RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___0_reader, bool ___1_serializeCollectionKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCachingSection_DeserializeElement_m0FC0D231EA5E20DC3FC6F6850876A0447C2845EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(RequestCachingSection_DeserializeElement_m0FC0D231EA5E20DC3FC6F6850876A0447C2845EB_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.RequestCachingSection::PostDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCachingSection_PostDeserialize_m9341CDB5931002D76B1CD38A4D60A732549A6A39 (RequestCachingSection_t4BB7D41862ACF0CB8992F8446B4EF550C44429B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCachingSection_PostDeserialize_m9341CDB5931002D76B1CD38A4D60A732549A6A39_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(RequestCachingSection_PostDeserialize_m9341CDB5931002D76B1CD38A4D60A732549A6A39_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.SettingsSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242 (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.HttpListenerElement System.Net.Configuration.SettingsSection::get_HttpListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpListenerElement_t559D7C83361157D2F59976CF87A8D8CD7DC5CF27* SettingsSection_get_HttpListener_mED29DE54BD03661334A79DCD3CF4B09E0C851CE6 (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_HttpListener_mED29DE54BD03661334A79DCD3CF4B09E0C851CE6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_HttpListener_mED29DE54BD03661334A79DCD3CF4B09E0C851CE6_RuntimeMethod_var);
		return (HttpListenerElement_t559D7C83361157D2F59976CF87A8D8CD7DC5CF27*)NULL;
	}
}
// System.Net.Configuration.HttpWebRequestElement System.Net.Configuration.SettingsSection::get_HttpWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* SettingsSection_get_HttpWebRequest_mBE81AA51E269D29FE517F6B8F475FB52984F2A23 (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_HttpWebRequest_mBE81AA51E269D29FE517F6B8F475FB52984F2A23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_HttpWebRequest_mBE81AA51E269D29FE517F6B8F475FB52984F2A23_RuntimeMethod_var);
		return (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3*)NULL;
	}
}
// System.Net.Configuration.Ipv6Element System.Net.Configuration.SettingsSection::get_Ipv6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* SettingsSection_get_Ipv6_mA006DD8D732839D151E44C1B68C05309937AC30E (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_Ipv6_mA006DD8D732839D151E44C1B68C05309937AC30E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_Ipv6_mA006DD8D732839D151E44C1B68C05309937AC30E_RuntimeMethod_var);
		return (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932*)NULL;
	}
}
// System.Net.Configuration.PerformanceCountersElement System.Net.Configuration.SettingsSection::get_PerformanceCounters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* SettingsSection_get_PerformanceCounters_mCFA1A5F427054AE2AA39602892AC6F0BE7FFCD53 (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_PerformanceCounters_mCFA1A5F427054AE2AA39602892AC6F0BE7FFCD53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_PerformanceCounters_mCFA1A5F427054AE2AA39602892AC6F0BE7FFCD53_RuntimeMethod_var);
		return (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30*)NULL;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Net.Configuration.ServicePointManagerElement System.Net.Configuration.SettingsSection::get_ServicePointManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* SettingsSection_get_ServicePointManager_m07C0AE14661EC5866ECF56566C7C36831F9D597A (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_ServicePointManager_m07C0AE14661EC5866ECF56566C7C36831F9D597A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_ServicePointManager_m07C0AE14661EC5866ECF56566C7C36831F9D597A_RuntimeMethod_var);
		return (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2*)NULL;
	}
}
// System.Net.Configuration.SocketElement System.Net.Configuration.SettingsSection::get_Socket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* SettingsSection_get_Socket_mE77BF68792B0B1479FCB1E349AD470A8A9DCE171 (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_Socket_mE77BF68792B0B1479FCB1E349AD470A8A9DCE171_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_Socket_mE77BF68792B0B1479FCB1E349AD470A8A9DCE171_RuntimeMethod_var);
		return (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6*)NULL;
	}
}
// System.Net.Configuration.WebProxyScriptElement System.Net.Configuration.SettingsSection::get_WebProxyScript()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* SettingsSection_get_WebProxyScript_m466A2A9AA8357CBF233FCDEF201B2B5EFBAAAAF5 (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_WebProxyScript_m466A2A9AA8357CBF233FCDEF201B2B5EFBAAAAF5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_WebProxyScript_m466A2A9AA8357CBF233FCDEF201B2B5EFBAAAAF5_RuntimeMethod_var);
		return (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167*)NULL;
	}
}
// System.Net.Configuration.WebUtilityElement System.Net.Configuration.SettingsSection::get_WebUtility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebUtilityElement_t6FA063D8F157F6F4F73ED8E5006213C44591C1E0* SettingsSection_get_WebUtility_m2D1E31AA087C50BB1CCE762E516253AB2D6BD3B8 (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_WebUtility_m2D1E31AA087C50BB1CCE762E516253AB2D6BD3B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_WebUtility_m2D1E31AA087C50BB1CCE762E516253AB2D6BD3B8_RuntimeMethod_var);
		return (WebUtilityElement_t6FA063D8F157F6F4F73ED8E5006213C44591C1E0*)NULL;
	}
}
// System.Net.Configuration.WindowsAuthenticationElement System.Net.Configuration.SettingsSection::get_WindowsAuthentication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsAuthenticationElement_tC96EDD442C67FE43F7F3B3EDC9BAFB7C9009E13B* SettingsSection_get_WindowsAuthentication_m10A9B3260BB9FFF3213A77218772DFFC4F8B9BDB (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_WindowsAuthentication_m10A9B3260BB9FFF3213A77218772DFFC4F8B9BDB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_WindowsAuthentication_m10A9B3260BB9FFF3213A77218772DFFC4F8B9BDB_RuntimeMethod_var);
		return (WindowsAuthenticationElement_tC96EDD442C67FE43F7F3B3EDC9BAFB7C9009E13B*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.PerformanceCountersElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Net.Configuration.PerformanceCountersElement::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PerformanceCountersElement_get_Enabled_m5BE4C7AE4BDE434A3E8FD4F6223461F721C1612E (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement_get_Enabled_m5BE4C7AE4BDE434A3E8FD4F6223461F721C1612E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement_get_Enabled_m5BE4C7AE4BDE434A3E8FD4F6223461F721C1612E_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.PerformanceCountersElement::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceCountersElement_set_Enabled_m4FCE96FC62C5580EBC92E771B79B56CDD0644540 (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement_set_Enabled_m4FCE96FC62C5580EBC92E771B79B56CDD0644540_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement_set_Enabled_m4FCE96FC62C5580EBC92E771B79B56CDD0644540_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ServicePointManagerElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Net.Configuration.ServicePointManagerElement::get_CheckCertificateName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServicePointManagerElement_get_CheckCertificateName_m93EF583F234799FD3457FD347F064866FBA1C83F (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_CheckCertificateName_m93EF583F234799FD3457FD347F064866FBA1C83F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_CheckCertificateName_m93EF583F234799FD3457FD347F064866FBA1C83F_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.ServicePointManagerElement::set_CheckCertificateName(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement_set_CheckCertificateName_m530AEAE236C8B6ADB4C372F8680F36EFAE663846 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_set_CheckCertificateName_m530AEAE236C8B6ADB4C372F8680F36EFAE663846_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_set_CheckCertificateName_m530AEAE236C8B6ADB4C372F8680F36EFAE663846_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Net.Configuration.ServicePointManagerElement::get_CheckCertificateRevocationList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServicePointManagerElement_get_CheckCertificateRevocationList_m7A72730A6EB04CC11953189E20B9DA39B8B9D812 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_CheckCertificateRevocationList_m7A72730A6EB04CC11953189E20B9DA39B8B9D812_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_CheckCertificateRevocationList_m7A72730A6EB04CC11953189E20B9DA39B8B9D812_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.ServicePointManagerElement::set_CheckCertificateRevocationList(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement_set_CheckCertificateRevocationList_m8958E8118076E0E7198754FA5C1F1529A98843DE (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_set_CheckCertificateRevocationList_m8958E8118076E0E7198754FA5C1F1529A98843DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_set_CheckCertificateRevocationList_m8958E8118076E0E7198754FA5C1F1529A98843DE_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Net.Configuration.ServicePointManagerElement::get_DnsRefreshTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServicePointManagerElement_get_DnsRefreshTimeout_mCA5740E1DA151B21CF5D20E0B98C6139FACFDDB5 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_DnsRefreshTimeout_mCA5740E1DA151B21CF5D20E0B98C6139FACFDDB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_DnsRefreshTimeout_mCA5740E1DA151B21CF5D20E0B98C6139FACFDDB5_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.ServicePointManagerElement::set_DnsRefreshTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement_set_DnsRefreshTimeout_m2B262BA9203F2F413FB4DB5421D404DFC083B704 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_set_DnsRefreshTimeout_m2B262BA9203F2F413FB4DB5421D404DFC083B704_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_set_DnsRefreshTimeout_m2B262BA9203F2F413FB4DB5421D404DFC083B704_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Net.Configuration.ServicePointManagerElement::get_EnableDnsRoundRobin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServicePointManagerElement_get_EnableDnsRoundRobin_m6A1AD9A4FE669AC18D9196910B524D2FFD6CC2C0 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_EnableDnsRoundRobin_m6A1AD9A4FE669AC18D9196910B524D2FFD6CC2C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_EnableDnsRoundRobin_m6A1AD9A4FE669AC18D9196910B524D2FFD6CC2C0_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.ServicePointManagerElement::set_EnableDnsRoundRobin(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement_set_EnableDnsRoundRobin_m4E2674CD115E2089DDFA420AB61031435353D539 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_set_EnableDnsRoundRobin_m4E2674CD115E2089DDFA420AB61031435353D539_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_set_EnableDnsRoundRobin_m4E2674CD115E2089DDFA420AB61031435353D539_RuntimeMethod_var);
		return;
	}
}
// System.Net.Security.EncryptionPolicy System.Net.Configuration.ServicePointManagerElement::get_EncryptionPolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServicePointManagerElement_get_EncryptionPolicy_mF3805EB4253D2329369D5228A6D6FBA77FFBBDB3 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_EncryptionPolicy_mF3805EB4253D2329369D5228A6D6FBA77FFBBDB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_EncryptionPolicy_mF3805EB4253D2329369D5228A6D6FBA77FFBBDB3_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.ServicePointManagerElement::set_EncryptionPolicy(System.Net.Security.EncryptionPolicy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement_set_EncryptionPolicy_m9FA825DC4CCF6D1B1A9D57DD68056D9665EAA2DA (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_set_EncryptionPolicy_m9FA825DC4CCF6D1B1A9D57DD68056D9665EAA2DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_set_EncryptionPolicy_m9FA825DC4CCF6D1B1A9D57DD68056D9665EAA2DA_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Net.Configuration.ServicePointManagerElement::get_Expect100Continue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServicePointManagerElement_get_Expect100Continue_m991850D531870E8360F07ADCF8C2F459584EC5AF (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_Expect100Continue_m991850D531870E8360F07ADCF8C2F459584EC5AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_Expect100Continue_m991850D531870E8360F07ADCF8C2F459584EC5AF_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.ServicePointManagerElement::set_Expect100Continue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement_set_Expect100Continue_mAE30C444FD6987C2389C5F89CF448D6F5EEBDBFD (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_set_Expect100Continue_mAE30C444FD6987C2389C5F89CF448D6F5EEBDBFD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_set_Expect100Continue_mAE30C444FD6987C2389C5F89CF448D6F5EEBDBFD_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Boolean System.Net.Configuration.ServicePointManagerElement::get_UseNagleAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServicePointManagerElement_get_UseNagleAlgorithm_mBA586932F9FDE593CBE69B8D67A6A6ED48338165 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_UseNagleAlgorithm_mBA586932F9FDE593CBE69B8D67A6A6ED48338165_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_UseNagleAlgorithm_mBA586932F9FDE593CBE69B8D67A6A6ED48338165_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.ServicePointManagerElement::set_UseNagleAlgorithm(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement_set_UseNagleAlgorithm_m00139235D683F5DC58D2D954A7F39A0A4DD429E0 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_set_UseNagleAlgorithm_m00139235D683F5DC58D2D954A7F39A0A4DD429E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_set_UseNagleAlgorithm_m00139235D683F5DC58D2D954A7F39A0A4DD429E0_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.ServicePointManagerElement::PostDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement_PostDeserialize_m902512F2562E0505AD50E93F1FB8F0B97C2B6727 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_PostDeserialize_m902512F2562E0505AD50E93F1FB8F0B97C2B6727_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_PostDeserialize_m902512F2562E0505AD50E93F1FB8F0B97C2B6727_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.SocketElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Net.Configuration.SocketElement::get_AlwaysUseCompletionPortsForAccept()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketElement_get_AlwaysUseCompletionPortsForAccept_m462DFDB23E0D4C28280C3E92AF9ABE0D928F8FA8 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_get_AlwaysUseCompletionPortsForAccept_m462DFDB23E0D4C28280C3E92AF9ABE0D928F8FA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_get_AlwaysUseCompletionPortsForAccept_m462DFDB23E0D4C28280C3E92AF9ABE0D928F8FA8_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.SocketElement::set_AlwaysUseCompletionPortsForAccept(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketElement_set_AlwaysUseCompletionPortsForAccept_m2B8D5D91CCF934A2081701977A6C4149E7EA35E7 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_set_AlwaysUseCompletionPortsForAccept_m2B8D5D91CCF934A2081701977A6C4149E7EA35E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_set_AlwaysUseCompletionPortsForAccept_m2B8D5D91CCF934A2081701977A6C4149E7EA35E7_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Net.Configuration.SocketElement::get_AlwaysUseCompletionPortsForConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketElement_get_AlwaysUseCompletionPortsForConnect_m3F1B3E197EFAF517E0F2E6D4FCA0903E6DDAE47E (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_get_AlwaysUseCompletionPortsForConnect_m3F1B3E197EFAF517E0F2E6D4FCA0903E6DDAE47E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_get_AlwaysUseCompletionPortsForConnect_m3F1B3E197EFAF517E0F2E6D4FCA0903E6DDAE47E_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.SocketElement::set_AlwaysUseCompletionPortsForConnect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketElement_set_AlwaysUseCompletionPortsForConnect_m617DAE11E817A18FFA4C0EB99F2181EDFD23B822 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_set_AlwaysUseCompletionPortsForConnect_m617DAE11E817A18FFA4C0EB99F2181EDFD23B822_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_set_AlwaysUseCompletionPortsForConnect_m617DAE11E817A18FFA4C0EB99F2181EDFD23B822_RuntimeMethod_var);
		return;
	}
}
// System.Net.Sockets.IPProtectionLevel System.Net.Configuration.SocketElement::get_IPProtectionLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketElement_get_IPProtectionLevel_m4743BA5CCFCC0478CB43259DC834221E7E1C7F1A (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_get_IPProtectionLevel_m4743BA5CCFCC0478CB43259DC834221E7E1C7F1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_get_IPProtectionLevel_m4743BA5CCFCC0478CB43259DC834221E7E1C7F1A_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.SocketElement::set_IPProtectionLevel(System.Net.Sockets.IPProtectionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketElement_set_IPProtectionLevel_mF34B2FCCAB45AAC1DDE6D5959AED616F864B190D (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_set_IPProtectionLevel_mF34B2FCCAB45AAC1DDE6D5959AED616F864B190D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_set_IPProtectionLevel_mF34B2FCCAB45AAC1DDE6D5959AED616F864B190D_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Void System.Net.Configuration.SocketElement::PostDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketElement_PostDeserialize_m5312655E1CFAC9B0B24769CFFA11CE8DC5D6A366 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_PostDeserialize_m5312655E1CFAC9B0B24769CFFA11CE8DC5D6A366_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_PostDeserialize_m5312655E1CFAC9B0B24769CFFA11CE8DC5D6A366_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.WebProxyScriptElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821 (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Net.Configuration.WebProxyScriptElement::get_AutoConfigUrlRetryInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebProxyScriptElement_get_AutoConfigUrlRetryInterval_m29A4613754E6586CD3409A68C63266F3E42D810F (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement_get_AutoConfigUrlRetryInterval_m29A4613754E6586CD3409A68C63266F3E42D810F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement_get_AutoConfigUrlRetryInterval_m29A4613754E6586CD3409A68C63266F3E42D810F_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.WebProxyScriptElement::set_AutoConfigUrlRetryInterval(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebProxyScriptElement_set_AutoConfigUrlRetryInterval_m4974ADE6DBA722887617C6678F7862EAA85F5AC0 (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement_set_AutoConfigUrlRetryInterval_m4974ADE6DBA722887617C6678F7862EAA85F5AC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement_set_AutoConfigUrlRetryInterval_m4974ADE6DBA722887617C6678F7862EAA85F5AC0_RuntimeMethod_var);
		return;
	}
}
// System.TimeSpan System.Net.Configuration.WebProxyScriptElement::get_DownloadTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A WebProxyScriptElement_get_DownloadTimeout_m4FA990F095B2CD306CD65205A492D5688959F899 (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement_get_DownloadTimeout_m4FA990F095B2CD306CD65205A492D5688959F899_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement_get_DownloadTimeout_m4FA990F095B2CD306CD65205A492D5688959F899_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.WebProxyScriptElement::set_DownloadTimeout(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebProxyScriptElement_set_DownloadTimeout_m9064C0685C3EA7CE727C7E823019D015C9065363 (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement_set_DownloadTimeout_m9064C0685C3EA7CE727C7E823019D015C9065363_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement_set_DownloadTimeout_m9064C0685C3EA7CE727C7E823019D015C9065363_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Void System.Net.Configuration.WebProxyScriptElement::PostDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebProxyScriptElement_PostDeserialize_m42815AE19FB06043AFE775AA84B683B16B503246 (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement_PostDeserialize_m42815AE19FB06043AFE775AA84B683B16B503246_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement_PostDeserialize_m42815AE19FB06043AFE775AA84B683B16B503246_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.WebUtilityElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebUtilityElement__ctor_m5456C0D33DA65AE83E07F4B06CD2F4922FB4187C (WebUtilityElement_t6FA063D8F157F6F4F73ED8E5006213C44591C1E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebUtilityElement__ctor_m5456C0D33DA65AE83E07F4B06CD2F4922FB4187C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebUtilityElement__ctor_m5456C0D33DA65AE83E07F4B06CD2F4922FB4187C_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebUtilityElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebUtilityElement_get_Properties_m4D37738DB7CEE8FD598A3DBE137857166E16B20C (WebUtilityElement_t6FA063D8F157F6F4F73ED8E5006213C44591C1E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebUtilityElement_get_Properties_m4D37738DB7CEE8FD598A3DBE137857166E16B20C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebUtilityElement_get_Properties_m4D37738DB7CEE8FD598A3DBE137857166E16B20C_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Net.Configuration.UnicodeDecodingConformance System.Net.Configuration.WebUtilityElement::get_UnicodeDecodingConformance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebUtilityElement_get_UnicodeDecodingConformance_mBBCDC2E53F9945D3E1F454810DDF5D665BCA4532 (WebUtilityElement_t6FA063D8F157F6F4F73ED8E5006213C44591C1E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebUtilityElement_get_UnicodeDecodingConformance_mBBCDC2E53F9945D3E1F454810DDF5D665BCA4532_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(WebUtilityElement_get_UnicodeDecodingConformance_mBBCDC2E53F9945D3E1F454810DDF5D665BCA4532_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.WebUtilityElement::set_UnicodeDecodingConformance(System.Net.Configuration.UnicodeDecodingConformance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebUtilityElement_set_UnicodeDecodingConformance_m8AE1BA3CC9E814C33D258DF3DDCFD364EFD893C3 (WebUtilityElement_t6FA063D8F157F6F4F73ED8E5006213C44591C1E0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebUtilityElement_set_UnicodeDecodingConformance_m8AE1BA3CC9E814C33D258DF3DDCFD364EFD893C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebUtilityElement_set_UnicodeDecodingConformance_m8AE1BA3CC9E814C33D258DF3DDCFD364EFD893C3_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.UnicodeEncodingConformance System.Net.Configuration.WebUtilityElement::get_UnicodeEncodingConformance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebUtilityElement_get_UnicodeEncodingConformance_mBFEB047F95922D312EBBC42CC4D666272E179796 (WebUtilityElement_t6FA063D8F157F6F4F73ED8E5006213C44591C1E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebUtilityElement_get_UnicodeEncodingConformance_mBFEB047F95922D312EBBC42CC4D666272E179796_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(WebUtilityElement_get_UnicodeEncodingConformance_mBFEB047F95922D312EBBC42CC4D666272E179796_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.WebUtilityElement::set_UnicodeEncodingConformance(System.Net.Configuration.UnicodeEncodingConformance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebUtilityElement_set_UnicodeEncodingConformance_m00E9B06E1D664543F83CDB2482B65ADE027D604C (WebUtilityElement_t6FA063D8F157F6F4F73ED8E5006213C44591C1E0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebUtilityElement_set_UnicodeEncodingConformance_m00E9B06E1D664543F83CDB2482B65ADE027D604C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebUtilityElement_set_UnicodeEncodingConformance_m00E9B06E1D664543F83CDB2482B65ADE027D604C_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.WindowsAuthenticationElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsAuthenticationElement__ctor_mF5E036D7DF3EFB966AC0D44779A323A31B93D4A9 (WindowsAuthenticationElement_tC96EDD442C67FE43F7F3B3EDC9BAFB7C9009E13B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsAuthenticationElement__ctor_mF5E036D7DF3EFB966AC0D44779A323A31B93D4A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WindowsAuthenticationElement__ctor_mF5E036D7DF3EFB966AC0D44779A323A31B93D4A9_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Net.Configuration.WindowsAuthenticationElement::get_DefaultCredentialsHandleCacheSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsAuthenticationElement_get_DefaultCredentialsHandleCacheSize_m8EC1415284E9EC0E1EECC9EFFEA6FA85D5CBD256 (WindowsAuthenticationElement_tC96EDD442C67FE43F7F3B3EDC9BAFB7C9009E13B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsAuthenticationElement_get_DefaultCredentialsHandleCacheSize_m8EC1415284E9EC0E1EECC9EFFEA6FA85D5CBD256_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(WindowsAuthenticationElement_get_DefaultCredentialsHandleCacheSize_m8EC1415284E9EC0E1EECC9EFFEA6FA85D5CBD256_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.WindowsAuthenticationElement::set_DefaultCredentialsHandleCacheSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsAuthenticationElement_set_DefaultCredentialsHandleCacheSize_mB0B1D1EF070852435E4FE672B19FD79FA22C6158 (WindowsAuthenticationElement_tC96EDD442C67FE43F7F3B3EDC9BAFB7C9009E13B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsAuthenticationElement_set_DefaultCredentialsHandleCacheSize_mB0B1D1EF070852435E4FE672B19FD79FA22C6158_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WindowsAuthenticationElement_set_DefaultCredentialsHandleCacheSize_mB0B1D1EF070852435E4FE672B19FD79FA22C6158_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WindowsAuthenticationElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WindowsAuthenticationElement_get_Properties_mB55BBFB85DF91400C178178E53FA090A5226A5A1 (WindowsAuthenticationElement_tC96EDD442C67FE43F7F3B3EDC9BAFB7C9009E13B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsAuthenticationElement_get_Properties_mB55BBFB85DF91400C178178E53FA090A5226A5A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WindowsAuthenticationElement_get_Properties_mB55BBFB85DF91400C178178E53FA090A5226A5A1_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.WebRequestModulesSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6 (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Net.Configuration.WebRequestModuleElementCollection System.Net.Configuration.WebRequestModulesSection::get_WebRequestModules()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* WebRequestModulesSection_get_WebRequestModules_m220E91992D98AAE2DF929B9F22387E1A96CC0549 (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection_get_WebRequestModules_m220E91992D98AAE2DF929B9F22387E1A96CC0549_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection_get_WebRequestModules_m220E91992D98AAE2DF929B9F22387E1A96CC0549_RuntimeMethod_var);
		return (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463*)NULL;
	}
}
// System.Void System.Net.Configuration.WebRequestModulesSection::InitializeDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModulesSection_InitializeDefault_mE69CB230862709EEB90114E19D8465272EEA3CB7 (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection_InitializeDefault_mE69CB230862709EEB90114E19D8465272EEA3CB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection_InitializeDefault_mE69CB230862709EEB90114E19D8465272EEA3CB7_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.WebRequestModulesSection::PostDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModulesSection_PostDeserialize_m8DF8F4A7D4E016EA0539FC8DB42BD137CA3C0ED0 (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection_PostDeserialize_m8DF8F4A7D4E016EA0539FC8DB42BD137CA3C0ED0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection_PostDeserialize_m8DF8F4A7D4E016EA0539FC8DB42BD137CA3C0ED0_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.WebRequestModuleElement System.Net.Configuration.WebRequestModuleElementCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD* WebRequestModuleElementCollection_get_Item_mE8ADB47358C80584A9A5C8D829CDDC0572BA28F8 (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection_get_Item_mE8ADB47358C80584A9A5C8D829CDDC0572BA28F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection_get_Item_mE8ADB47358C80584A9A5C8D829CDDC0572BA28F8_RuntimeMethod_var);
		return (WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD*)NULL;
	}
}
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::set_Item(System.Int32,System.Net.Configuration.WebRequestModuleElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection_set_Item_mBFB801CF7ECCDC4C29FDFE98B69BDFC79D19B62C (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, int32_t ___0_index, WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection_set_Item_mBFB801CF7ECCDC4C29FDFE98B69BDFC79D19B62C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection_set_Item_mBFB801CF7ECCDC4C29FDFE98B69BDFC79D19B62C_RuntimeMethod_var);
		return;
	}
}
// System.Net.Configuration.WebRequestModuleElement System.Net.Configuration.WebRequestModuleElementCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD* WebRequestModuleElementCollection_get_Item_m2E1FD419BDC43901B86273EAAE12C1192C0942F8 (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection_get_Item_m2E1FD419BDC43901B86273EAAE12C1192C0942F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection_get_Item_m2E1FD419BDC43901B86273EAAE12C1192C0942F8_RuntimeMethod_var);
		return (WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD*)NULL;
	}
}
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::set_Item(System.String,System.Net.Configuration.WebRequestModuleElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection_set_Item_mC5E2D50F75EA6DEE744191B58334F92CEFB796BD (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, String_t* ___0_name, WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection_set_Item_mC5E2D50F75EA6DEE744191B58334F92CEFB796BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection_set_Item_mC5E2D50F75EA6DEE744191B58334F92CEFB796BD_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Add(System.Net.Configuration.WebRequestModuleElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection_Add_m1B266D818C6F5A8999F457BB34BA30305739477E (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection_Add_m1B266D818C6F5A8999F457BB34BA30305739477E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection_Add_m1B266D818C6F5A8999F457BB34BA30305739477E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection_Clear_m1405A4DF1AC009FEDABC6038C139BEF305CED96C (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection_Clear_m1405A4DF1AC009FEDABC6038C139BEF305CED96C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection_Clear_m1405A4DF1AC009FEDABC6038C139BEF305CED96C_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationElement System.Net.Configuration.WebRequestModuleElementCollection::CreateNewElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* WebRequestModuleElementCollection_CreateNewElement_m397F68DF0A36AB391A404123CF8CF510CC03825E (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection_CreateNewElement_m397F68DF0A36AB391A404123CF8CF510CC03825E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection_CreateNewElement_m397F68DF0A36AB391A404123CF8CF510CC03825E_RuntimeMethod_var);
		return (ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E*)NULL;
	}
}
// System.Object System.Net.Configuration.WebRequestModuleElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRequestModuleElementCollection_GetElementKey_m431F14EFB3211279E674EEF1BA70479934D48474 (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection_GetElementKey_m431F14EFB3211279E674EEF1BA70479934D48474_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection_GetElementKey_m431F14EFB3211279E674EEF1BA70479934D48474_RuntimeMethod_var);
		return NULL;
	}
}
// System.Int32 System.Net.Configuration.WebRequestModuleElementCollection::IndexOf(System.Net.Configuration.WebRequestModuleElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRequestModuleElementCollection_IndexOf_mDA01842DD42B18BAA3497D46EA6A1BEFA0625D59 (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection_IndexOf_mDA01842DD42B18BAA3497D46EA6A1BEFA0625D59_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection_IndexOf_mDA01842DD42B18BAA3497D46EA6A1BEFA0625D59_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Remove(System.Net.Configuration.WebRequestModuleElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection_Remove_m03E0DABEA39A2EDB435AE2BEC0D13AC83A2AC776 (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection_Remove_m03E0DABEA39A2EDB435AE2BEC0D13AC83A2AC776_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection_Remove_m03E0DABEA39A2EDB435AE2BEC0D13AC83A2AC776_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection_Remove_m7DD3D64ED15E14AF0169514FC2565DDE46D8E312 (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection_Remove_m7DD3D64ED15E14AF0169514FC2565DDE46D8E312_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection_Remove_m7DD3D64ED15E14AF0169514FC2565DDE46D8E312_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection_RemoveAt_mCFD44DD167CEBA89E629FDB1C8159BF95ECCBF1D (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection_RemoveAt_mCFD44DD167CEBA89E629FDB1C8159BF95ECCBF1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection_RemoveAt_mCFD44DD167CEBA89E629FDB1C8159BF95ECCBF1D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.WebRequestModuleElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElement__ctor_m3A1CA3F314D9999776377B46359BBCA244C16E81 (WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElement__ctor_m3A1CA3F314D9999776377B46359BBCA244C16E81_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElement__ctor_m3A1CA3F314D9999776377B46359BBCA244C16E81_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.WebRequestModuleElement::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElement__ctor_m33C495B62224AD7B42D0C51A80BEDA02282C1EA6 (WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD* __this, String_t* ___0_prefix, String_t* ___1_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElement__ctor_m33C495B62224AD7B42D0C51A80BEDA02282C1EA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElement__ctor_m33C495B62224AD7B42D0C51A80BEDA02282C1EA6_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Net.Configuration.WebRequestModuleElement::.ctor(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElement__ctor_m4324DC3F3C281570B8F38DE3B11CC48480B8E5E3 (WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD* __this, String_t* ___0_prefix, Type_t* ___1_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElement__ctor_m4324DC3F3C281570B8F38DE3B11CC48480B8E5E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElement__ctor_m4324DC3F3C281570B8F38DE3B11CC48480B8E5E3_RuntimeMethod_var);
		return;
	}
}
// System.String System.Net.Configuration.WebRequestModuleElement::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestModuleElement_get_Prefix_m9ABF6D76655D4A853F97AB945A06C0C989204225 (WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElement_get_Prefix_m9ABF6D76655D4A853F97AB945A06C0C989204225_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElement_get_Prefix_m9ABF6D76655D4A853F97AB945A06C0C989204225_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Net.Configuration.WebRequestModuleElement::set_Prefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElement_set_Prefix_mB0173D91DEDE335215B6D453443E854BE546B4BA (WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElement_set_Prefix_mB0173D91DEDE335215B6D453443E854BE546B4BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElement_set_Prefix_mB0173D91DEDE335215B6D453443E854BE546B4BA_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModuleElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebRequestModuleElement_get_Properties_m784E006115FDEDCE5C8830D1571101F0E391B82C (WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElement_get_Properties_m784E006115FDEDCE5C8830D1571101F0E391B82C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElement_get_Properties_m784E006115FDEDCE5C8830D1571101F0E391B82C_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Type System.Net.Configuration.WebRequestModuleElement::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* WebRequestModuleElement_get_Type_m735160844499572763B638B083544BF83BFC76FB (WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElement_get_Type_m735160844499572763B638B083544BF83BFC76FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElement_get_Type_m735160844499572763B638B083544BF83BFC76FB_RuntimeMethod_var);
		return (Type_t*)NULL;
	}
}
// System.Void System.Net.Configuration.WebRequestModuleElement::set_Type(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElement_set_Type_m41DF196D0F67E8A331C6B9FF0DEC932023B777A0 (WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElement_set_Type_m41DF196D0F67E8A331C6B9FF0DEC932023B777A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElement_set_Type_m41DF196D0F67E8A331C6B9FF0DEC932023B777A0_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3 (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, RuntimeObject* ___0_parent, RuntimeObject* ___1_configContext, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___2_section, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		return NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.ApplicationScopedSettingAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationScopedSettingAttribute__ctor_m9350F37B6DCA17923BFEABD305AFE8B74CF1C826 (ApplicationScopedSettingAttribute_tFDF4A38023B8C450903F1A6ED55BA0BB9DA148C4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingAttribute__ctor_m5CBBC4AD187CD76BB31533CE4F1001237FC64F03 (SettingAttribute_t3B8E2A245E0945C8B8622310C24385C38D1D2DD4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.ApplicationSettingsBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase__ctor_m8081C8CE5B15E9B29D2C250BBF69C0B7B43F4392 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase__ctor_m8081C8CE5B15E9B29D2C250BBF69C0B7B43F4392_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase__ctor_m8081C8CE5B15E9B29D2C250BBF69C0B7B43F4392_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::.ctor(System.ComponentModel.IComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase__ctor_m3F2CDF34D312C0991510D007E32701DDB98CC49E (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, RuntimeObject* ___0_owner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase__ctor_m3F2CDF34D312C0991510D007E32701DDB98CC49E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase__ctor_m3F2CDF34D312C0991510D007E32701DDB98CC49E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::.ctor(System.ComponentModel.IComponent,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase__ctor_mA18F3B768C5B41AC0EF5356BC582619B20414440 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, RuntimeObject* ___0_owner, String_t* ___1_settingsKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase__ctor_mA18F3B768C5B41AC0EF5356BC582619B20414440_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase__ctor_mA18F3B768C5B41AC0EF5356BC582619B20414440_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase__ctor_m6DC02BFBA7D3EF2B8A531D44C77367CE2C108246 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, String_t* ___0_settingsKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase__ctor_m6DC02BFBA7D3EF2B8A531D44C77367CE2C108246_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase__ctor_m6DC02BFBA7D3EF2B8A531D44C77367CE2C108246_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.SettingsContext System.Configuration.ApplicationSettingsBase::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsContext_tE2A8637CE8FECB35A8FB44136C440FA37ACD2AFE* ApplicationSettingsBase_get_Context_m6F3C90BF60F6FFB1B494E7B15D73FDB9BC0FB6B3 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_get_Context_m6F3C90BF60F6FFB1B494E7B15D73FDB9BC0FB6B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_get_Context_m6F3C90BF60F6FFB1B494E7B15D73FDB9BC0FB6B3_RuntimeMethod_var);
		return (SettingsContext_tE2A8637CE8FECB35A8FB44136C440FA37ACD2AFE*)NULL;
	}
}
// System.Object System.Configuration.ApplicationSettingsBase::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ApplicationSettingsBase_get_Item_m4BF53A18BEF424C2A6C26B8FD4D49B6D269B010E (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_get_Item_m4BF53A18BEF424C2A6C26B8FD4D49B6D269B010E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_get_Item_m4BF53A18BEF424C2A6C26B8FD4D49B6D269B010E_RuntimeMethod_var);
		return NULL;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::set_Item(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_set_Item_mF4FA78724480283884C7EA797C4C7D1E715D8457 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, String_t* ___0_propertyName, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_set_Item_mF4FA78724480283884C7EA797C4C7D1E715D8457_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_set_Item_mF4FA78724480283884C7EA797C4C7D1E715D8457_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.SettingsPropertyCollection System.Configuration.ApplicationSettingsBase::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* ApplicationSettingsBase_get_Properties_mEC0C95270132B01B60E9BBE5C75AA69DA594868A (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_get_Properties_mEC0C95270132B01B60E9BBE5C75AA69DA594868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_get_Properties_mEC0C95270132B01B60E9BBE5C75AA69DA594868A_RuntimeMethod_var);
		return (SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3*)NULL;
	}
}
// System.Configuration.SettingsPropertyValueCollection System.Configuration.ApplicationSettingsBase::get_PropertyValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262* ApplicationSettingsBase_get_PropertyValues_mCB474259BFE8927B1D6F0164D73DB366179F5909 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_get_PropertyValues_mCB474259BFE8927B1D6F0164D73DB366179F5909_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_get_PropertyValues_mCB474259BFE8927B1D6F0164D73DB366179F5909_RuntimeMethod_var);
		return (SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262*)NULL;
	}
}
// System.Configuration.SettingsProviderCollection System.Configuration.ApplicationSettingsBase::get_Providers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsProviderCollection_tA874FD5CCC7B667159CCFF34D055516DBAAD39FF* ApplicationSettingsBase_get_Providers_m21645731DAAF0836241E51461A6CD293AC9B488C (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_get_Providers_m21645731DAAF0836241E51461A6CD293AC9B488C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_get_Providers_m21645731DAAF0836241E51461A6CD293AC9B488C_RuntimeMethod_var);
		return (SettingsProviderCollection_tA874FD5CCC7B667159CCFF34D055516DBAAD39FF*)NULL;
	}
}
// System.String System.Configuration.ApplicationSettingsBase::get_SettingsKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApplicationSettingsBase_get_SettingsKey_mE2F1B22F58A376AE60C263F31DFDA08DC1D3CDE3 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_get_SettingsKey_mE2F1B22F58A376AE60C263F31DFDA08DC1D3CDE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_get_SettingsKey_mE2F1B22F58A376AE60C263F31DFDA08DC1D3CDE3_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::set_SettingsKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_set_SettingsKey_mE6079EE1D620A39F2E838F7CF44AFE28034C1807 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_set_SettingsKey_mE6079EE1D620A39F2E838F7CF44AFE28034C1807_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_set_SettingsKey_mE6079EE1D620A39F2E838F7CF44AFE28034C1807_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_add_PropertyChanged_m0015B9C93D03F1A105274A3BA79793326F47B164 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_add_PropertyChanged_m0015B9C93D03F1A105274A3BA79793326F47B164_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_add_PropertyChanged_m0015B9C93D03F1A105274A3BA79793326F47B164_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_remove_PropertyChanged_m887D101192D0F39848A6ABCAE911C1D031BCD039 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_remove_PropertyChanged_m887D101192D0F39848A6ABCAE911C1D031BCD039_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_remove_PropertyChanged_m887D101192D0F39848A6ABCAE911C1D031BCD039_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::add_SettingChanging(System.Configuration.SettingChangingEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_add_SettingChanging_mCE39E23069269C842B8E4607363F40AAFA339C4E (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_add_SettingChanging_mCE39E23069269C842B8E4607363F40AAFA339C4E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_add_SettingChanging_mCE39E23069269C842B8E4607363F40AAFA339C4E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::remove_SettingChanging(System.Configuration.SettingChangingEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_remove_SettingChanging_m713869A729222495B81AD8BF70C8B65F4B11A2B8 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_remove_SettingChanging_m713869A729222495B81AD8BF70C8B65F4B11A2B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_remove_SettingChanging_m713869A729222495B81AD8BF70C8B65F4B11A2B8_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::add_SettingsLoaded(System.Configuration.SettingsLoadedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_add_SettingsLoaded_m12E753F2B0F07ADBFB2D1F12804092E90C6A66AD (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_add_SettingsLoaded_m12E753F2B0F07ADBFB2D1F12804092E90C6A66AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_add_SettingsLoaded_m12E753F2B0F07ADBFB2D1F12804092E90C6A66AD_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::remove_SettingsLoaded(System.Configuration.SettingsLoadedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_remove_SettingsLoaded_mAD8F3CED75F39A0C20F657C2B96B3C7FD4B5DC12 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_remove_SettingsLoaded_mAD8F3CED75F39A0C20F657C2B96B3C7FD4B5DC12_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_remove_SettingsLoaded_mAD8F3CED75F39A0C20F657C2B96B3C7FD4B5DC12_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::add_SettingsSaving(System.Configuration.SettingsSavingEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_add_SettingsSaving_m1BEE0D4A98156B88424BA2406F08F299FC18AE81 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_add_SettingsSaving_m1BEE0D4A98156B88424BA2406F08F299FC18AE81_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_add_SettingsSaving_m1BEE0D4A98156B88424BA2406F08F299FC18AE81_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::remove_SettingsSaving(System.Configuration.SettingsSavingEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_remove_SettingsSaving_m4A9631E74E26A1618E9CB6BE9DE5008810010469 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_remove_SettingsSaving_m4A9631E74E26A1618E9CB6BE9DE5008810010469_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_remove_SettingsSaving_m4A9631E74E26A1618E9CB6BE9DE5008810010469_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Configuration.ApplicationSettingsBase::GetPreviousVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ApplicationSettingsBase_GetPreviousVersion_m562438A2E536B861EDE77F6C32FABEA8DEE7E883 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_GetPreviousVersion_m562438A2E536B861EDE77F6C32FABEA8DEE7E883_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_GetPreviousVersion_m562438A2E536B861EDE77F6C32FABEA8DEE7E883_RuntimeMethod_var);
		return NULL;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::OnPropertyChanged(System.Object,System.ComponentModel.PropertyChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_OnPropertyChanged_m08B3CDD10CB5705156FB2312703C5A16C1F2E753 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, RuntimeObject* ___0_sender, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_OnPropertyChanged_m08B3CDD10CB5705156FB2312703C5A16C1F2E753_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_OnPropertyChanged_m08B3CDD10CB5705156FB2312703C5A16C1F2E753_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::OnSettingChanging(System.Object,System.Configuration.SettingChangingEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_OnSettingChanging_mEBF79F9E3BF4ED2E7753F426507AC1DFE1B095B0 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, RuntimeObject* ___0_sender, SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_OnSettingChanging_mEBF79F9E3BF4ED2E7753F426507AC1DFE1B095B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_OnSettingChanging_mEBF79F9E3BF4ED2E7753F426507AC1DFE1B095B0_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::OnSettingsLoaded(System.Object,System.Configuration.SettingsLoadedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_OnSettingsLoaded_m63816D506B6433465EE71D54424FFA1B7B0E6D6B (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, RuntimeObject* ___0_sender, SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_OnSettingsLoaded_m63816D506B6433465EE71D54424FFA1B7B0E6D6B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_OnSettingsLoaded_m63816D506B6433465EE71D54424FFA1B7B0E6D6B_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::OnSettingsSaving(System.Object,System.ComponentModel.CancelEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_OnSettingsSaving_mDA4357E720C2A8AAFB5017D94BBD5B92E948313E (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, RuntimeObject* ___0_sender, CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_OnSettingsSaving_mDA4357E720C2A8AAFB5017D94BBD5B92E948313E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_OnSettingsSaving_mDA4357E720C2A8AAFB5017D94BBD5B92E948313E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_Reload_m7DEE188BF14842B5E84DF950625A9C98ADAF8C13 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_Reload_m7DEE188BF14842B5E84DF950625A9C98ADAF8C13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_Reload_m7DEE188BF14842B5E84DF950625A9C98ADAF8C13_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_Reset_m02BC6992D50F1ACB0461DF64F5F22E92D4178E56 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_Reset_m02BC6992D50F1ACB0461DF64F5F22E92D4178E56_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_Reset_m02BC6992D50F1ACB0461DF64F5F22E92D4178E56_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_Save_mE72FA4FDE239FF77F507AC40CAF46728F5B2AD00 (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_Save_mE72FA4FDE239FF77F507AC40CAF46728F5B2AD00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_Save_mE72FA4FDE239FF77F507AC40CAF46728F5B2AD00_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.ApplicationSettingsBase::Upgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsBase_Upgrade_m5B4D5FDC587DC5C0158EB37D4ABE8AB5FCA84A6A (ApplicationSettingsBase_tA388C075EFABAD808CEF4E0F1C4CA82E47C25605* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsBase_Upgrade_m5B4D5FDC587DC5C0158EB37D4ABE8AB5FCA84A6A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsBase_Upgrade_m5B4D5FDC587DC5C0158EB37D4ABE8AB5FCA84A6A_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SettingChangingEventHandler_Invoke_m459F2ECF9F38448545C84F2B6A491E6E1D667A0D_Multicast(SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E* __this, RuntimeObject* ___0_sender, SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* ___1_e, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E* currentDelegate = reinterpret_cast<SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SettingChangingEventHandler_Invoke_m459F2ECF9F38448545C84F2B6A491E6E1D667A0D_OpenInst(SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E* __this, RuntimeObject* ___0_sender, SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	typedef void (*FunctionPointerType) (RuntimeObject*, SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_e, method);
}
void SettingChangingEventHandler_Invoke_m459F2ECF9F38448545C84F2B6A491E6E1D667A0D_OpenStatic(SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E* __this, RuntimeObject* ___0_sender, SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* ___1_e, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_e, method);
}
void SettingChangingEventHandler_Invoke_m459F2ECF9F38448545C84F2B6A491E6E1D667A0D_OpenStaticInvoker(SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E* __this, RuntimeObject* ___0_sender, SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* ___1_e, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_sender, ___1_e);
}
void SettingChangingEventHandler_Invoke_m459F2ECF9F38448545C84F2B6A491E6E1D667A0D_ClosedStaticInvoker(SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E* __this, RuntimeObject* ___0_sender, SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* ___1_e, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sender, ___1_e);
}
void SettingChangingEventHandler_Invoke_m459F2ECF9F38448545C84F2B6A491E6E1D667A0D_OpenVirtual(SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E* __this, RuntimeObject* ___0_sender, SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	VirtualActionInvoker1< SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender, ___1_e);
}
void SettingChangingEventHandler_Invoke_m459F2ECF9F38448545C84F2B6A491E6E1D667A0D_OpenInterface(SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E* __this, RuntimeObject* ___0_sender, SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	InterfaceActionInvoker1< SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender, ___1_e);
}
void SettingChangingEventHandler_Invoke_m459F2ECF9F38448545C84F2B6A491E6E1D667A0D_OpenGenericVirtual(SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E* __this, RuntimeObject* ___0_sender, SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericVirtualActionInvoker1< SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* >::Invoke(method, ___0_sender, ___1_e);
}
void SettingChangingEventHandler_Invoke_m459F2ECF9F38448545C84F2B6A491E6E1D667A0D_OpenGenericInterface(SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E* __this, RuntimeObject* ___0_sender, SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericInterfaceActionInvoker1< SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* >::Invoke(method, ___0_sender, ___1_e);
}
// System.Void System.Configuration.SettingChangingEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingChangingEventHandler__ctor_mBA2621F60A2289F0A6972DD224FE6C05110CA227 (SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingChangingEventHandler__ctor_mBA2621F60A2289F0A6972DD224FE6C05110CA227_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingChangingEventHandler__ctor_mBA2621F60A2289F0A6972DD224FE6C05110CA227_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingChangingEventHandler::Invoke(System.Object,System.Configuration.SettingChangingEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingChangingEventHandler_Invoke_m459F2ECF9F38448545C84F2B6A491E6E1D667A0D (SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E* __this, RuntimeObject* ___0_sender, SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingChangingEventHandler_Invoke_m459F2ECF9F38448545C84F2B6A491E6E1D667A0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingChangingEventHandler_Invoke_m459F2ECF9F38448545C84F2B6A491E6E1D667A0D_RuntimeMethod_var);
		return;
	}
}
// System.IAsyncResult System.Configuration.SettingChangingEventHandler::BeginInvoke(System.Object,System.Configuration.SettingChangingEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingChangingEventHandler_BeginInvoke_m16E308828FFB41A42AACC6BCA2A486E36BAB84F6 (SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E* __this, RuntimeObject* ___0_sender, SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* ___1_e, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingChangingEventHandler_BeginInvoke_m16E308828FFB41A42AACC6BCA2A486E36BAB84F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingChangingEventHandler_BeginInvoke_m16E308828FFB41A42AACC6BCA2A486E36BAB84F6_RuntimeMethod_var);
		return (RuntimeObject*)NULL;
	}
}
// System.Void System.Configuration.SettingChangingEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingChangingEventHandler_EndInvoke_m53EC36C901A1D849DED282157120DDD7F8FDABF6 (SettingChangingEventHandler_tF41F025D88BC2A1E426A49C618D5AB76AE99A09E* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingChangingEventHandler_EndInvoke_m53EC36C901A1D849DED282157120DDD7F8FDABF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingChangingEventHandler_EndInvoke_m53EC36C901A1D849DED282157120DDD7F8FDABF6_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingChangingEventArgs::.ctor(System.String,System.String,System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingChangingEventArgs__ctor_m8DD7C0E3EAB83BA2860BE6AB3B823390CACC8657 (SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* __this, String_t* ___0_settingName, String_t* ___1_settingClass, String_t* ___2_settingKey, RuntimeObject* ___3_newValue, bool ___4_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingChangingEventArgs__ctor_m8DD7C0E3EAB83BA2860BE6AB3B823390CACC8657_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingChangingEventArgs__ctor_m8DD7C0E3EAB83BA2860BE6AB3B823390CACC8657_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Configuration.SettingChangingEventArgs::get_NewValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingChangingEventArgs_get_NewValue_m0F87D622C8DC0DCC2EBA7125CF5EFF2E92722AF5 (SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingChangingEventArgs_get_NewValue_m0F87D622C8DC0DCC2EBA7125CF5EFF2E92722AF5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingChangingEventArgs_get_NewValue_m0F87D622C8DC0DCC2EBA7125CF5EFF2E92722AF5_RuntimeMethod_var);
		return NULL;
	}
}
// System.String System.Configuration.SettingChangingEventArgs::get_SettingClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SettingChangingEventArgs_get_SettingClass_m8A2ABA01C8D7EA16716A1A3584EBB23FA7974EDA (SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingChangingEventArgs_get_SettingClass_m8A2ABA01C8D7EA16716A1A3584EBB23FA7974EDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingChangingEventArgs_get_SettingClass_m8A2ABA01C8D7EA16716A1A3584EBB23FA7974EDA_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.String System.Configuration.SettingChangingEventArgs::get_SettingKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SettingChangingEventArgs_get_SettingKey_m982F3CE2880592FBD740DC06FA01C9DEC0FAB4A2 (SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingChangingEventArgs_get_SettingKey_m982F3CE2880592FBD740DC06FA01C9DEC0FAB4A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingChangingEventArgs_get_SettingKey_m982F3CE2880592FBD740DC06FA01C9DEC0FAB4A2_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.String System.Configuration.SettingChangingEventArgs::get_SettingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SettingChangingEventArgs_get_SettingName_m8CD7AD669BDECFD6525A0CC9975263486126A3DA (SettingChangingEventArgs_t6391A22088689F535547827716F9BC4CD23997AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingChangingEventArgs_get_SettingName_m8CD7AD669BDECFD6525A0CC9975263486126A3DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingChangingEventArgs_get_SettingName_m8CD7AD669BDECFD6525A0CC9975263486126A3DA_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SettingsLoadedEventHandler_Invoke_m48CEE093BB5AA05567DAE32E937936BED945F7C9_Multicast(SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE* __this, RuntimeObject* ___0_sender, SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* ___1_e, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE* currentDelegate = reinterpret_cast<SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SettingsLoadedEventHandler_Invoke_m48CEE093BB5AA05567DAE32E937936BED945F7C9_OpenInst(SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE* __this, RuntimeObject* ___0_sender, SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	typedef void (*FunctionPointerType) (RuntimeObject*, SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_e, method);
}
void SettingsLoadedEventHandler_Invoke_m48CEE093BB5AA05567DAE32E937936BED945F7C9_OpenStatic(SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE* __this, RuntimeObject* ___0_sender, SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* ___1_e, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_e, method);
}
void SettingsLoadedEventHandler_Invoke_m48CEE093BB5AA05567DAE32E937936BED945F7C9_OpenStaticInvoker(SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE* __this, RuntimeObject* ___0_sender, SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* ___1_e, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_sender, ___1_e);
}
void SettingsLoadedEventHandler_Invoke_m48CEE093BB5AA05567DAE32E937936BED945F7C9_ClosedStaticInvoker(SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE* __this, RuntimeObject* ___0_sender, SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* ___1_e, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sender, ___1_e);
}
void SettingsLoadedEventHandler_Invoke_m48CEE093BB5AA05567DAE32E937936BED945F7C9_OpenVirtual(SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE* __this, RuntimeObject* ___0_sender, SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	VirtualActionInvoker1< SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender, ___1_e);
}
void SettingsLoadedEventHandler_Invoke_m48CEE093BB5AA05567DAE32E937936BED945F7C9_OpenInterface(SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE* __this, RuntimeObject* ___0_sender, SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	InterfaceActionInvoker1< SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender, ___1_e);
}
void SettingsLoadedEventHandler_Invoke_m48CEE093BB5AA05567DAE32E937936BED945F7C9_OpenGenericVirtual(SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE* __this, RuntimeObject* ___0_sender, SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericVirtualActionInvoker1< SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* >::Invoke(method, ___0_sender, ___1_e);
}
void SettingsLoadedEventHandler_Invoke_m48CEE093BB5AA05567DAE32E937936BED945F7C9_OpenGenericInterface(SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE* __this, RuntimeObject* ___0_sender, SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericInterfaceActionInvoker1< SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* >::Invoke(method, ___0_sender, ___1_e);
}
// System.Void System.Configuration.SettingsLoadedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsLoadedEventHandler__ctor_mBAB35DCA30EAFD6D40566CD2930A97EF357E798D (SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsLoadedEventHandler__ctor_mBAB35DCA30EAFD6D40566CD2930A97EF357E798D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsLoadedEventHandler__ctor_mBAB35DCA30EAFD6D40566CD2930A97EF357E798D_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsLoadedEventHandler::Invoke(System.Object,System.Configuration.SettingsLoadedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsLoadedEventHandler_Invoke_m48CEE093BB5AA05567DAE32E937936BED945F7C9 (SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE* __this, RuntimeObject* ___0_sender, SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsLoadedEventHandler_Invoke_m48CEE093BB5AA05567DAE32E937936BED945F7C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsLoadedEventHandler_Invoke_m48CEE093BB5AA05567DAE32E937936BED945F7C9_RuntimeMethod_var);
		return;
	}
}
// System.IAsyncResult System.Configuration.SettingsLoadedEventHandler::BeginInvoke(System.Object,System.Configuration.SettingsLoadedEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingsLoadedEventHandler_BeginInvoke_mBF422646ABB323D1B2ECBF1C540B39DFA122AE02 (SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE* __this, RuntimeObject* ___0_sender, SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* ___1_e, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsLoadedEventHandler_BeginInvoke_mBF422646ABB323D1B2ECBF1C540B39DFA122AE02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsLoadedEventHandler_BeginInvoke_mBF422646ABB323D1B2ECBF1C540B39DFA122AE02_RuntimeMethod_var);
		return (RuntimeObject*)NULL;
	}
}
// System.Void System.Configuration.SettingsLoadedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsLoadedEventHandler_EndInvoke_mCA672DAB2277F5255328D65BAE57F29B26D15167 (SettingsLoadedEventHandler_t2D1EDFCD4B124572DAA5919CBBEC1E0B49CD06BE* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsLoadedEventHandler_EndInvoke_mCA672DAB2277F5255328D65BAE57F29B26D15167_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsLoadedEventHandler_EndInvoke_mCA672DAB2277F5255328D65BAE57F29B26D15167_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsLoadedEventArgs::.ctor(System.Configuration.SettingsProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsLoadedEventArgs__ctor_mFD247F881034B6C0A9437D5DACADF6539128D73B (SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* __this, SettingsProvider_t47362C2066368337AE4B0802A9463B9BF9629653* ___0_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsLoadedEventArgs__ctor_mFD247F881034B6C0A9437D5DACADF6539128D73B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsLoadedEventArgs__ctor_mFD247F881034B6C0A9437D5DACADF6539128D73B_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.SettingsProvider System.Configuration.SettingsLoadedEventArgs::get_Provider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsProvider_t47362C2066368337AE4B0802A9463B9BF9629653* SettingsLoadedEventArgs_get_Provider_mE335E7E0181BD3C900B116C1822168BBFB68106B (SettingsLoadedEventArgs_t1DC6C1D0AA733DA82468993F74D6CC28EA1FDEF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsLoadedEventArgs_get_Provider_mE335E7E0181BD3C900B116C1822168BBFB68106B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsLoadedEventArgs_get_Provider_mE335E7E0181BD3C900B116C1822168BBFB68106B_RuntimeMethod_var);
		return (SettingsProvider_t47362C2066368337AE4B0802A9463B9BF9629653*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SettingsSavingEventHandler_Invoke_mF9F1A5C193A58CB76D0AB0B5403DA4110E0F049A_Multicast(SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23* __this, RuntimeObject* ___0_sender, CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* ___1_e, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23* currentDelegate = reinterpret_cast<SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SettingsSavingEventHandler_Invoke_mF9F1A5C193A58CB76D0AB0B5403DA4110E0F049A_OpenInst(SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23* __this, RuntimeObject* ___0_sender, CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	typedef void (*FunctionPointerType) (RuntimeObject*, CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_e, method);
}
void SettingsSavingEventHandler_Invoke_mF9F1A5C193A58CB76D0AB0B5403DA4110E0F049A_OpenStatic(SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23* __this, RuntimeObject* ___0_sender, CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* ___1_e, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_e, method);
}
void SettingsSavingEventHandler_Invoke_mF9F1A5C193A58CB76D0AB0B5403DA4110E0F049A_OpenStaticInvoker(SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23* __this, RuntimeObject* ___0_sender, CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* ___1_e, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_sender, ___1_e);
}
void SettingsSavingEventHandler_Invoke_mF9F1A5C193A58CB76D0AB0B5403DA4110E0F049A_ClosedStaticInvoker(SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23* __this, RuntimeObject* ___0_sender, CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* ___1_e, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sender, ___1_e);
}
void SettingsSavingEventHandler_Invoke_mF9F1A5C193A58CB76D0AB0B5403DA4110E0F049A_OpenVirtual(SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23* __this, RuntimeObject* ___0_sender, CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	VirtualActionInvoker1< CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender, ___1_e);
}
void SettingsSavingEventHandler_Invoke_mF9F1A5C193A58CB76D0AB0B5403DA4110E0F049A_OpenInterface(SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23* __this, RuntimeObject* ___0_sender, CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	InterfaceActionInvoker1< CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender, ___1_e);
}
void SettingsSavingEventHandler_Invoke_mF9F1A5C193A58CB76D0AB0B5403DA4110E0F049A_OpenGenericVirtual(SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23* __this, RuntimeObject* ___0_sender, CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericVirtualActionInvoker1< CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* >::Invoke(method, ___0_sender, ___1_e);
}
void SettingsSavingEventHandler_Invoke_mF9F1A5C193A58CB76D0AB0B5403DA4110E0F049A_OpenGenericInterface(SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23* __this, RuntimeObject* ___0_sender, CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericInterfaceActionInvoker1< CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* >::Invoke(method, ___0_sender, ___1_e);
}
// System.Void System.Configuration.SettingsSavingEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsSavingEventHandler__ctor_mAFD8C606C5BEF2F9D879179E3568C882B1A89565 (SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSavingEventHandler__ctor_mAFD8C606C5BEF2F9D879179E3568C882B1A89565_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSavingEventHandler__ctor_mAFD8C606C5BEF2F9D879179E3568C882B1A89565_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsSavingEventHandler::Invoke(System.Object,System.ComponentModel.CancelEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsSavingEventHandler_Invoke_mF9F1A5C193A58CB76D0AB0B5403DA4110E0F049A (SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23* __this, RuntimeObject* ___0_sender, CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSavingEventHandler_Invoke_mF9F1A5C193A58CB76D0AB0B5403DA4110E0F049A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSavingEventHandler_Invoke_mF9F1A5C193A58CB76D0AB0B5403DA4110E0F049A_RuntimeMethod_var);
		return;
	}
}
// System.IAsyncResult System.Configuration.SettingsSavingEventHandler::BeginInvoke(System.Object,System.ComponentModel.CancelEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingsSavingEventHandler_BeginInvoke_mA74755BEDC2D983D011C05B657F34A2F0531C0D6 (SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23* __this, RuntimeObject* ___0_sender, CancelEventArgs_tAD564CEFFA4EF53B4EB4A619443F8E2FE74116A6* ___1_e, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSavingEventHandler_BeginInvoke_mA74755BEDC2D983D011C05B657F34A2F0531C0D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSavingEventHandler_BeginInvoke_mA74755BEDC2D983D011C05B657F34A2F0531C0D6_RuntimeMethod_var);
		return (RuntimeObject*)NULL;
	}
}
// System.Void System.Configuration.SettingsSavingEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsSavingEventHandler_EndInvoke_mDDA425B8F9409570EA14D62B7448EBAD15BA77BB (SettingsSavingEventHandler_tD851065EA87EC73B174C694341F0D11AF80E9D23* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSavingEventHandler_EndInvoke_mDDA425B8F9409570EA14D62B7448EBAD15BA77BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSavingEventHandler_EndInvoke_mDDA425B8F9409570EA14D62B7448EBAD15BA77BB_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.ApplicationSettingsGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationSettingsGroup__ctor_mDF459B8EEF55BD98A6DA27C3999C9A868F8E95DF (ApplicationSettingsGroup_t6CBD33D350E767299BFAE5CD39F063885DA1DAD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationSettingsGroup__ctor_mDF459B8EEF55BD98A6DA27C3999C9A868F8E95DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ApplicationSettingsGroup__ctor_mDF459B8EEF55BD98A6DA27C3999C9A868F8E95DF_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.AppSettingsReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppSettingsReader__ctor_mD30A51687A2598D7E61DCDCA6BE85E0BA2D8B75B (AppSettingsReader_t5319223C8B108FEDFE14AA9DBC18C16C68E62F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppSettingsReader__ctor_mD30A51687A2598D7E61DCDCA6BE85E0BA2D8B75B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AppSettingsReader__ctor_mD30A51687A2598D7E61DCDCA6BE85E0BA2D8B75B_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Configuration.AppSettingsReader::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppSettingsReader_GetValue_m36F122024E1753B34509EA75BEABDEDB62913BC3 (AppSettingsReader_t5319223C8B108FEDFE14AA9DBC18C16C68E62F8F* __this, String_t* ___0_key, Type_t* ___1_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppSettingsReader_GetValue_m36F122024E1753B34509EA75BEABDEDB62913BC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(AppSettingsReader_GetValue_m36F122024E1753B34509EA75BEABDEDB62913BC3_RuntimeMethod_var);
		return NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.ClientSettingsSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSettingsSection__ctor_m2AA5827DFBC5647BE31EFD6DFB54EFA123F8235A (ClientSettingsSection_t0E32E0B5F47E3A0002AACBE5430ADFFBC98D08B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientSettingsSection__ctor_m2AA5827DFBC5647BE31EFD6DFB54EFA123F8235A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ClientSettingsSection__ctor_m2AA5827DFBC5647BE31EFD6DFB54EFA123F8235A_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ClientSettingsSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ClientSettingsSection_get_Properties_mB33C0A88562ED0A10917F0CB73A717A3B806AC4A (ClientSettingsSection_t0E32E0B5F47E3A0002AACBE5430ADFFBC98D08B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientSettingsSection_get_Properties_mB33C0A88562ED0A10917F0CB73A717A3B806AC4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ClientSettingsSection_get_Properties_mB33C0A88562ED0A10917F0CB73A717A3B806AC4A_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Configuration.SettingElementCollection System.Configuration.ClientSettingsSection::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingElementCollection_t36782DF73BF1703C70B7C094DC43E3F4D6AF40B6* ClientSettingsSection_get_Settings_m648B6D9A59AD175EFA257250E9E83541126DDAC8 (ClientSettingsSection_t0E32E0B5F47E3A0002AACBE5430ADFFBC98D08B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientSettingsSection_get_Settings_m648B6D9A59AD175EFA257250E9E83541126DDAC8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ClientSettingsSection_get_Settings_m648B6D9A59AD175EFA257250E9E83541126DDAC8_RuntimeMethod_var);
		return (SettingElementCollection_t36782DF73BF1703C70B7C094DC43E3F4D6AF40B6*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingElementCollection__ctor_mDC071BAB402D8585B6C9DFE00E329A2CECB6C2A3 (SettingElementCollection_t36782DF73BF1703C70B7C094DC43E3F4D6AF40B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElementCollection__ctor_mDC071BAB402D8585B6C9DFE00E329A2CECB6C2A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingElementCollection__ctor_mDC071BAB402D8585B6C9DFE00E329A2CECB6C2A3_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationElementCollectionType System.Configuration.SettingElementCollection::get_CollectionType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SettingElementCollection_get_CollectionType_m111974AD7284918F456BC1716896830E29AF2EA3 (SettingElementCollection_t36782DF73BF1703C70B7C094DC43E3F4D6AF40B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElementCollection_get_CollectionType_m111974AD7284918F456BC1716896830E29AF2EA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(SettingElementCollection_get_CollectionType_m111974AD7284918F456BC1716896830E29AF2EA3_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.String System.Configuration.SettingElementCollection::get_ElementName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SettingElementCollection_get_ElementName_m7D8F46BB15DE713DDF1A18152FBAD06DBC3C81DF (SettingElementCollection_t36782DF73BF1703C70B7C094DC43E3F4D6AF40B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElementCollection_get_ElementName_m7D8F46BB15DE713DDF1A18152FBAD06DBC3C81DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingElementCollection_get_ElementName_m7D8F46BB15DE713DDF1A18152FBAD06DBC3C81DF_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Configuration.SettingElementCollection::Add(System.Configuration.SettingElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingElementCollection_Add_m01C390ED9310FE7A4E815626A2281CB340113447 (SettingElementCollection_t36782DF73BF1703C70B7C094DC43E3F4D6AF40B6* __this, SettingElement_tDCCC43AE6FDABB9B4DBE1482582ED201B3D39377* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElementCollection_Add_m01C390ED9310FE7A4E815626A2281CB340113447_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingElementCollection_Add_m01C390ED9310FE7A4E815626A2281CB340113447_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingElementCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingElementCollection_Clear_m4383970C5677842CC1126C459A5EC8902391ED5A (SettingElementCollection_t36782DF73BF1703C70B7C094DC43E3F4D6AF40B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElementCollection_Clear_m4383970C5677842CC1126C459A5EC8902391ED5A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingElementCollection_Clear_m4383970C5677842CC1126C459A5EC8902391ED5A_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationElement System.Configuration.SettingElementCollection::CreateNewElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* SettingElementCollection_CreateNewElement_mD6BCECDBF37A956642E2F336BBB0F932556EAAE8 (SettingElementCollection_t36782DF73BF1703C70B7C094DC43E3F4D6AF40B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElementCollection_CreateNewElement_mD6BCECDBF37A956642E2F336BBB0F932556EAAE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingElementCollection_CreateNewElement_mD6BCECDBF37A956642E2F336BBB0F932556EAAE8_RuntimeMethod_var);
		return (ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E*)NULL;
	}
}
// System.Configuration.SettingElement System.Configuration.SettingElementCollection::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingElement_tDCCC43AE6FDABB9B4DBE1482582ED201B3D39377* SettingElementCollection_Get_mE5D2048A79642CC115CD969984F2318ED7C854A2 (SettingElementCollection_t36782DF73BF1703C70B7C094DC43E3F4D6AF40B6* __this, String_t* ___0_elementKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElementCollection_Get_mE5D2048A79642CC115CD969984F2318ED7C854A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingElementCollection_Get_mE5D2048A79642CC115CD969984F2318ED7C854A2_RuntimeMethod_var);
		return (SettingElement_tDCCC43AE6FDABB9B4DBE1482582ED201B3D39377*)NULL;
	}
}
// System.Object System.Configuration.SettingElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingElementCollection_GetElementKey_mE0CA4E55008EE0AA2B19B799556B56371E79199B (SettingElementCollection_t36782DF73BF1703C70B7C094DC43E3F4D6AF40B6* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElementCollection_GetElementKey_mE0CA4E55008EE0AA2B19B799556B56371E79199B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingElementCollection_GetElementKey_mE0CA4E55008EE0AA2B19B799556B56371E79199B_RuntimeMethod_var);
		return NULL;
	}
}
// System.Void System.Configuration.SettingElementCollection::Remove(System.Configuration.SettingElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingElementCollection_Remove_mD093E229D90ED0DACBCD54246299D4AB177812DD (SettingElementCollection_t36782DF73BF1703C70B7C094DC43E3F4D6AF40B6* __this, SettingElement_tDCCC43AE6FDABB9B4DBE1482582ED201B3D39377* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElementCollection_Remove_mD093E229D90ED0DACBCD54246299D4AB177812DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingElementCollection_Remove_mD093E229D90ED0DACBCD54246299D4AB177812DD_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingElement__ctor_m5FDE2175DB5C3F6D4A0E7BBA5CFA73624D337F5C (SettingElement_tDCCC43AE6FDABB9B4DBE1482582ED201B3D39377* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElement__ctor_m5FDE2175DB5C3F6D4A0E7BBA5CFA73624D337F5C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingElement__ctor_m5FDE2175DB5C3F6D4A0E7BBA5CFA73624D337F5C_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingElement::.ctor(System.String,System.Configuration.SettingsSerializeAs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingElement__ctor_mC6F16AFE9B5A1B7FC2508EDA31A352BE437D9E66 (SettingElement_tDCCC43AE6FDABB9B4DBE1482582ED201B3D39377* __this, String_t* ___0_name, int32_t ___1_serializeAs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElement__ctor_mC6F16AFE9B5A1B7FC2508EDA31A352BE437D9E66_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingElement__ctor_mC6F16AFE9B5A1B7FC2508EDA31A352BE437D9E66_RuntimeMethod_var);
		return;
	}
}
// System.String System.Configuration.SettingElement::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SettingElement_get_Name_m4DB6E41CE420D3AAB18075B7828FAA7D464CC6C9 (SettingElement_tDCCC43AE6FDABB9B4DBE1482582ED201B3D39377* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElement_get_Name_m4DB6E41CE420D3AAB18075B7828FAA7D464CC6C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingElement_get_Name_m4DB6E41CE420D3AAB18075B7828FAA7D464CC6C9_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Configuration.SettingElement::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingElement_set_Name_mD867EC8187999C27FD7EDB871B1D6E4F763A1112 (SettingElement_tDCCC43AE6FDABB9B4DBE1482582ED201B3D39377* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElement_set_Name_mD867EC8187999C27FD7EDB871B1D6E4F763A1112_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingElement_set_Name_mD867EC8187999C27FD7EDB871B1D6E4F763A1112_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.SettingElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SettingElement_get_Properties_m59A5FBFF4C6BD9F986A07D8FB2FD91A3354535CE (SettingElement_tDCCC43AE6FDABB9B4DBE1482582ED201B3D39377* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElement_get_Properties_m59A5FBFF4C6BD9F986A07D8FB2FD91A3354535CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingElement_get_Properties_m59A5FBFF4C6BD9F986A07D8FB2FD91A3354535CE_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Configuration.SettingsSerializeAs System.Configuration.SettingElement::get_SerializeAs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SettingElement_get_SerializeAs_mAB42F99A936F3CF30929012B7E2C0A16410BD028 (SettingElement_tDCCC43AE6FDABB9B4DBE1482582ED201B3D39377* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElement_get_SerializeAs_mAB42F99A936F3CF30929012B7E2C0A16410BD028_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(SettingElement_get_SerializeAs_mAB42F99A936F3CF30929012B7E2C0A16410BD028_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Configuration.SettingElement::set_SerializeAs(System.Configuration.SettingsSerializeAs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingElement_set_SerializeAs_m8B7DDE2E8ADB2B17F4B839A6A8EF79EB4677DAB6 (SettingElement_tDCCC43AE6FDABB9B4DBE1482582ED201B3D39377* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElement_set_SerializeAs_m8B7DDE2E8ADB2B17F4B839A6A8EF79EB4677DAB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingElement_set_SerializeAs_m8B7DDE2E8ADB2B17F4B839A6A8EF79EB4677DAB6_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.SettingValueElement System.Configuration.SettingElement::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingValueElement_tC085F18817546877AFD1369659F50EB679700B42* SettingElement_get_Value_m87104B214EB643D15CA15DBBCB666986BDD7ECF9 (SettingElement_tDCCC43AE6FDABB9B4DBE1482582ED201B3D39377* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElement_get_Value_m87104B214EB643D15CA15DBBCB666986BDD7ECF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingElement_get_Value_m87104B214EB643D15CA15DBBCB666986BDD7ECF9_RuntimeMethod_var);
		return (SettingValueElement_tC085F18817546877AFD1369659F50EB679700B42*)NULL;
	}
}
// System.Void System.Configuration.SettingElement::set_Value(System.Configuration.SettingValueElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingElement_set_Value_mBE9714167AC6668C648F9829E813C8E4F9983558 (SettingElement_tDCCC43AE6FDABB9B4DBE1482582ED201B3D39377* __this, SettingValueElement_tC085F18817546877AFD1369659F50EB679700B42* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingElement_set_Value_mBE9714167AC6668C648F9829E813C8E4F9983558_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingElement_set_Value_mBE9714167AC6668C648F9829E813C8E4F9983558_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingValueElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingValueElement__ctor_m458D85BDC3AF9D4AB0123A07FC465D1F69445734 (SettingValueElement_tC085F18817546877AFD1369659F50EB679700B42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingValueElement__ctor_m458D85BDC3AF9D4AB0123A07FC465D1F69445734_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingValueElement__ctor_m458D85BDC3AF9D4AB0123A07FC465D1F69445734_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.SettingValueElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SettingValueElement_get_Properties_mCD91BA38A09C09C8662711B449DC239D241FC385 (SettingValueElement_tC085F18817546877AFD1369659F50EB679700B42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingValueElement_get_Properties_mCD91BA38A09C09C8662711B449DC239D241FC385_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingValueElement_get_Properties_mCD91BA38A09C09C8662711B449DC239D241FC385_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Xml.XmlNode System.Configuration.SettingValueElement::get_ValueXml()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* SettingValueElement_get_ValueXml_m8EDDC605E83C73141C6202AFFA7827BF1F3318C9 (SettingValueElement_tC085F18817546877AFD1369659F50EB679700B42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingValueElement_get_ValueXml_m8EDDC605E83C73141C6202AFFA7827BF1F3318C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingValueElement_get_ValueXml_m8EDDC605E83C73141C6202AFFA7827BF1F3318C9_RuntimeMethod_var);
		return (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL;
	}
}
// System.Void System.Configuration.SettingValueElement::set_ValueXml(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingValueElement_set_ValueXml_m1CFA9EDC205BF19713DE59C43078E68B81F25231 (SettingValueElement_tC085F18817546877AFD1369659F50EB679700B42* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingValueElement_set_ValueXml_m1CFA9EDC205BF19713DE59C43078E68B81F25231_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingValueElement_set_ValueXml_m1CFA9EDC205BF19713DE59C43078E68B81F25231_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingValueElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingValueElement_DeserializeElement_mF8A5ABC1FA2EA1AA0E7862B7656636E8B6B3C048 (SettingValueElement_tC085F18817546877AFD1369659F50EB679700B42* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___0_reader, bool ___1_serializeCollectionKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingValueElement_DeserializeElement_mF8A5ABC1FA2EA1AA0E7862B7656636E8B6B3C048_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingValueElement_DeserializeElement_mF8A5ABC1FA2EA1AA0E7862B7656636E8B6B3C048_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Configuration.SettingValueElement::IsModified()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SettingValueElement_IsModified_mCE51DDDFBFFA80DE7B3E92911A3A998FB583673F (SettingValueElement_tC085F18817546877AFD1369659F50EB679700B42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingValueElement_IsModified_mCE51DDDFBFFA80DE7B3E92911A3A998FB583673F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(SettingValueElement_IsModified_mCE51DDDFBFFA80DE7B3E92911A3A998FB583673F_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Configuration.SettingValueElement::Reset(System.Configuration.ConfigurationElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingValueElement_Reset_mD3E7B525D67AB20859E1EBFFF0EEFDCB16457BB9 (SettingValueElement_tC085F18817546877AFD1369659F50EB679700B42* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___0_parentElement, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingValueElement_Reset_mD3E7B525D67AB20859E1EBFFF0EEFDCB16457BB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingValueElement_Reset_mD3E7B525D67AB20859E1EBFFF0EEFDCB16457BB9_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingValueElement::ResetModified()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingValueElement_ResetModified_mEEF4C0F704B1CDBF4235A51E5B0ABF1220A34E53 (SettingValueElement_tC085F18817546877AFD1369659F50EB679700B42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingValueElement_ResetModified_mEEF4C0F704B1CDBF4235A51E5B0ABF1220A34E53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingValueElement_ResetModified_mEEF4C0F704B1CDBF4235A51E5B0ABF1220A34E53_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Configuration.SettingValueElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SettingValueElement_SerializeToXmlElement_m443D5FF91EEFF8DADF96B799A0ED77169DEDCA53 (SettingValueElement_tC085F18817546877AFD1369659F50EB679700B42* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___0_writer, String_t* ___1_elementName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingValueElement_SerializeToXmlElement_m443D5FF91EEFF8DADF96B799A0ED77169DEDCA53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(SettingValueElement_SerializeToXmlElement_m443D5FF91EEFF8DADF96B799A0ED77169DEDCA53_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Configuration.SettingValueElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingValueElement_Unmerge_mD62E87BDDDDB6E556E02F62E37814088CEE4F069 (SettingValueElement_tC085F18817546877AFD1369659F50EB679700B42* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___0_sourceElement, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___1_parentElement, int32_t ___2_saveMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingValueElement_Unmerge_mD62E87BDDDDB6E556E02F62E37814088CEE4F069_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingValueElement_Unmerge_mD62E87BDDDDB6E556E02F62E37814088CEE4F069_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.ConfigurationSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationSettings__ctor_mAF1877860BD5C91E7FDAF5D23DFF6A24D468C052 (ConfigurationSettings_t57AE17F7C36F57E13C36525C73CAAC1063BF5C9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationSettings__ctor_mAF1877860BD5C91E7FDAF5D23DFF6A24D468C052_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigurationSettings__ctor_mAF1877860BD5C91E7FDAF5D23DFF6A24D468C052_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Specialized.NameValueCollection System.Configuration.ConfigurationSettings::get_AppSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ConfigurationSettings_get_AppSettings_mD06F5FDAC4BD9690B8C5F462CE23C60953D6452F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationSettings_get_AppSettings_mD06F5FDAC4BD9690B8C5F462CE23C60953D6452F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigurationSettings_get_AppSettings_mD06F5FDAC4BD9690B8C5F462CE23C60953D6452F_RuntimeMethod_var);
		return (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7*)NULL;
	}
}
// System.Object System.Configuration.ConfigurationSettings::GetConfig(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConfigurationSettings_GetConfig_m0F5421941C15B1DC6B9485974E0346FDE386DB93 (String_t* ___0_sectionName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationSettings_GetConfig_m0F5421941C15B1DC6B9485974E0346FDE386DB93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigurationSettings_GetConfig_m0F5421941C15B1DC6B9485974E0346FDE386DB93_RuntimeMethod_var);
		return NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.ConfigXmlDocument::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigXmlDocument__ctor_mEA8D1F1134E0D385B831171528D75FA8F7B96572 (ConfigXmlDocument_tFAB7D1C598C58E82F4ACA33C01010D5FA557E7C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigXmlDocument__ctor_mEA8D1F1134E0D385B831171528D75FA8F7B96572_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigXmlDocument__ctor_mEA8D1F1134E0D385B831171528D75FA8F7B96572_RuntimeMethod_var);
		return;
	}
}
// System.String System.Configuration.ConfigXmlDocument::get_Filename()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigXmlDocument_get_Filename_mFA3503168E8983BFCB4DB9400D1080829D99D0D0 (ConfigXmlDocument_tFAB7D1C598C58E82F4ACA33C01010D5FA557E7C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigXmlDocument_get_Filename_mFA3503168E8983BFCB4DB9400D1080829D99D0D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigXmlDocument_get_Filename_mFA3503168E8983BFCB4DB9400D1080829D99D0D0_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Int32 System.Configuration.ConfigXmlDocument::get_LineNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigXmlDocument_get_LineNumber_m53E5C046AA423D2868E7ED9E979BB2999376324C (ConfigXmlDocument_tFAB7D1C598C58E82F4ACA33C01010D5FA557E7C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigXmlDocument_get_LineNumber_m53E5C046AA423D2868E7ED9E979BB2999376324C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(ConfigXmlDocument_get_LineNumber_m53E5C046AA423D2868E7ED9E979BB2999376324C_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.String System.Configuration.ConfigXmlDocument::System.Configuration.Internal.IConfigErrorInfo.get_Filename()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigXmlDocument_System_Configuration_Internal_IConfigErrorInfo_get_Filename_mD6C3344DA88EAB4C6237318705A0A34930DEC558 (ConfigXmlDocument_tFAB7D1C598C58E82F4ACA33C01010D5FA557E7C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigXmlDocument_System_Configuration_Internal_IConfigErrorInfo_get_Filename_mD6C3344DA88EAB4C6237318705A0A34930DEC558_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigXmlDocument_System_Configuration_Internal_IConfigErrorInfo_get_Filename_mD6C3344DA88EAB4C6237318705A0A34930DEC558_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Int32 System.Configuration.ConfigXmlDocument::System.Configuration.Internal.IConfigErrorInfo.get_LineNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigXmlDocument_System_Configuration_Internal_IConfigErrorInfo_get_LineNumber_m2F5A8CD090CD6EA19CCB986D247DD1FE1209AACF (ConfigXmlDocument_tFAB7D1C598C58E82F4ACA33C01010D5FA557E7C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigXmlDocument_System_Configuration_Internal_IConfigErrorInfo_get_LineNumber_m2F5A8CD090CD6EA19CCB986D247DD1FE1209AACF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(ConfigXmlDocument_System_Configuration_Internal_IConfigErrorInfo_get_LineNumber_m2F5A8CD090CD6EA19CCB986D247DD1FE1209AACF_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Configuration.ConfigXmlDocument::LoadSingleElement(System.String,System.Xml.XmlTextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigXmlDocument_LoadSingleElement_m68DD189FE379E5B27E5FC204918EDDB63C2E7CDB (ConfigXmlDocument_tFAB7D1C598C58E82F4ACA33C01010D5FA557E7C1* __this, String_t* ___0_filename, XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* ___1_sourceReader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigXmlDocument_LoadSingleElement_m68DD189FE379E5B27E5FC204918EDDB63C2E7CDB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConfigXmlDocument_LoadSingleElement_m68DD189FE379E5B27E5FC204918EDDB63C2E7CDB_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.DefaultSettingValueAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultSettingValueAttribute__ctor_mC2B9D3C48E1C305B539347ED23F364A3D2020FAB (DefaultSettingValueAttribute_t09EF0413EA1808C230248DF4AA5F706565E2BABB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.String System.Configuration.DefaultSettingValueAttribute::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultSettingValueAttribute_get_Value_m0F2F1D2ED3429F1640F720B377CD9B7644592DC6 (DefaultSettingValueAttribute_t09EF0413EA1808C230248DF4AA5F706565E2BABB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultSettingValueAttribute_get_Value_m0F2F1D2ED3429F1640F720B377CD9B7644592DC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultSettingValueAttribute_get_Value_m0F2F1D2ED3429F1640F720B377CD9B7644592DC6_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.DictionarySectionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionarySectionHandler__ctor_m46C0DED69B2EEFE6D05C67C5AEBEBE2893024D78 (DictionarySectionHandler_t9116E1380B3B7888E01C23FF1A97D809DC982868* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionarySectionHandler__ctor_m46C0DED69B2EEFE6D05C67C5AEBEBE2893024D78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DictionarySectionHandler__ctor_m46C0DED69B2EEFE6D05C67C5AEBEBE2893024D78_RuntimeMethod_var);
		return;
	}
}
// System.String System.Configuration.DictionarySectionHandler::get_KeyAttributeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DictionarySectionHandler_get_KeyAttributeName_mECA293A08F2A4DF8D40563505CBB7BE7C5772BB1 (DictionarySectionHandler_t9116E1380B3B7888E01C23FF1A97D809DC982868* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionarySectionHandler_get_KeyAttributeName_mECA293A08F2A4DF8D40563505CBB7BE7C5772BB1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DictionarySectionHandler_get_KeyAttributeName_mECA293A08F2A4DF8D40563505CBB7BE7C5772BB1_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.String System.Configuration.DictionarySectionHandler::get_ValueAttributeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DictionarySectionHandler_get_ValueAttributeName_m24049DAB6176CF13ABF538D798A7B7E7590D907D (DictionarySectionHandler_t9116E1380B3B7888E01C23FF1A97D809DC982868* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionarySectionHandler_get_ValueAttributeName_m24049DAB6176CF13ABF538D798A7B7E7590D907D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DictionarySectionHandler_get_ValueAttributeName_m24049DAB6176CF13ABF538D798A7B7E7590D907D_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Object System.Configuration.DictionarySectionHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionarySectionHandler_Create_m094285E8BC684D5BAB1875B87B836D1D19045D84 (DictionarySectionHandler_t9116E1380B3B7888E01C23FF1A97D809DC982868* __this, RuntimeObject* ___0_parent, RuntimeObject* ___1_context, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___2_section, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionarySectionHandler_Create_m094285E8BC684D5BAB1875B87B836D1D19045D84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DictionarySectionHandler_Create_m094285E8BC684D5BAB1875B87B836D1D19045D84_RuntimeMethod_var);
		return NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.IdnElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdnElement__ctor_m6A85B045DB04D1C680367D3B099CCFC2614EB067 (IdnElement_t1600A7D1444637603C2BC0E9BEFC45D7600D0701* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdnElement__ctor_m6A85B045DB04D1C680367D3B099CCFC2614EB067_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(IdnElement__ctor_m6A85B045DB04D1C680367D3B099CCFC2614EB067_RuntimeMethod_var);
		return;
	}
}
// System.UriIdnScope System.Configuration.IdnElement::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IdnElement_get_Enabled_m682FBD02B138890D14B08F516377CFF4F7308104 (IdnElement_t1600A7D1444637603C2BC0E9BEFC45D7600D0701* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdnElement_get_Enabled_m682FBD02B138890D14B08F516377CFF4F7308104_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(IdnElement_get_Enabled_m682FBD02B138890D14B08F516377CFF4F7308104_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Configuration.IdnElement::set_Enabled(System.UriIdnScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdnElement_set_Enabled_m6275391F668964CAF840474777218BA16FC0BAC0 (IdnElement_t1600A7D1444637603C2BC0E9BEFC45D7600D0701* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdnElement_set_Enabled_m6275391F668964CAF840474777218BA16FC0BAC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(IdnElement_set_Enabled_m6275391F668964CAF840474777218BA16FC0BAC0_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.IdnElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* IdnElement_get_Properties_m112CE3617880A7D7B3221B62D9E739CA8A30BD11 (IdnElement_t1600A7D1444637603C2BC0E9BEFC45D7600D0701* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdnElement_get_Properties_m112CE3617880A7D7B3221B62D9E739CA8A30BD11_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(IdnElement_get_Properties_m112CE3617880A7D7B3221B62D9E739CA8A30BD11_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.IgnoreSectionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreSectionHandler__ctor_mDA7F62DBA1DE04E823CAF604A531EA9257318764 (IgnoreSectionHandler_t1CCE5D49101273B02080F629ECC0C3043AB3C9F2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IgnoreSectionHandler__ctor_mDA7F62DBA1DE04E823CAF604A531EA9257318764_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(IgnoreSectionHandler__ctor_mDA7F62DBA1DE04E823CAF604A531EA9257318764_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Configuration.IgnoreSectionHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IgnoreSectionHandler_Create_m5F28B8221C6148BB93158FB4A1261A9F9FE070B3 (IgnoreSectionHandler_t1CCE5D49101273B02080F629ECC0C3043AB3C9F2* __this, RuntimeObject* ___0_parent, RuntimeObject* ___1_configContext, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___2_section, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IgnoreSectionHandler_Create_m5F28B8221C6148BB93158FB4A1261A9F9FE070B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(IgnoreSectionHandler_Create_m5F28B8221C6148BB93158FB4A1261A9F9FE070B3_RuntimeMethod_var);
		return NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.IriParsingElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IriParsingElement__ctor_m67611053C6DE1A6F53D6095CB4783194C80A4D71 (IriParsingElement_t86D7FA77708517AE2C872C0066EF231A7640D03A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IriParsingElement__ctor_m67611053C6DE1A6F53D6095CB4783194C80A4D71_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(IriParsingElement__ctor_m67611053C6DE1A6F53D6095CB4783194C80A4D71_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Configuration.IriParsingElement::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IriParsingElement_get_Enabled_m38900C22D2BD9F997C8672C6767169612EBF08FC (IriParsingElement_t86D7FA77708517AE2C872C0066EF231A7640D03A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IriParsingElement_get_Enabled_m38900C22D2BD9F997C8672C6767169612EBF08FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(IriParsingElement_get_Enabled_m38900C22D2BD9F997C8672C6767169612EBF08FC_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Configuration.IriParsingElement::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IriParsingElement_set_Enabled_m6DC66A4EFBE3FE8213D4AE054CCD7AA85524C173 (IriParsingElement_t86D7FA77708517AE2C872C0066EF231A7640D03A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IriParsingElement_set_Enabled_m6DC66A4EFBE3FE8213D4AE054CCD7AA85524C173_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(IriParsingElement_set_Enabled_m6DC66A4EFBE3FE8213D4AE054CCD7AA85524C173_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.IriParsingElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* IriParsingElement_get_Properties_m3C38B06DBC61F496AA82C0BA88DE25CBBD27290B (IriParsingElement_t86D7FA77708517AE2C872C0066EF231A7640D03A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IriParsingElement_get_Properties_m3C38B06DBC61F496AA82C0BA88DE25CBBD27290B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(IriParsingElement_get_Properties_m3C38B06DBC61F496AA82C0BA88DE25CBBD27290B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.LocalFileSettingsProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalFileSettingsProvider__ctor_m8BE727C974D8BC36C066AA5625CADAEAD33E48B3 (LocalFileSettingsProvider_tB7C50B1046CB3E0D047401CAA0F15BA685E3FDAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalFileSettingsProvider__ctor_m8BE727C974D8BC36C066AA5625CADAEAD33E48B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(LocalFileSettingsProvider__ctor_m8BE727C974D8BC36C066AA5625CADAEAD33E48B3_RuntimeMethod_var);
		return;
	}
}
// System.String System.Configuration.LocalFileSettingsProvider::get_ApplicationName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalFileSettingsProvider_get_ApplicationName_m835BA6FC08B2D78DE2BFBCFCECA57CFF11C905B9 (LocalFileSettingsProvider_tB7C50B1046CB3E0D047401CAA0F15BA685E3FDAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalFileSettingsProvider_get_ApplicationName_m835BA6FC08B2D78DE2BFBCFCECA57CFF11C905B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(LocalFileSettingsProvider_get_ApplicationName_m835BA6FC08B2D78DE2BFBCFCECA57CFF11C905B9_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Configuration.LocalFileSettingsProvider::set_ApplicationName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalFileSettingsProvider_set_ApplicationName_m6CA4E855095340586A208D5C00D678978E438941 (LocalFileSettingsProvider_tB7C50B1046CB3E0D047401CAA0F15BA685E3FDAA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalFileSettingsProvider_set_ApplicationName_m6CA4E855095340586A208D5C00D678978E438941_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(LocalFileSettingsProvider_set_ApplicationName_m6CA4E855095340586A208D5C00D678978E438941_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.SettingsPropertyValue System.Configuration.LocalFileSettingsProvider::GetPreviousVersion(System.Configuration.SettingsContext,System.Configuration.SettingsProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19* LocalFileSettingsProvider_GetPreviousVersion_mD0419A3AF177D09738C31834319045F734A62293 (LocalFileSettingsProvider_tB7C50B1046CB3E0D047401CAA0F15BA685E3FDAA* __this, SettingsContext_tE2A8637CE8FECB35A8FB44136C440FA37ACD2AFE* ___0_context, SettingsProperty_t2801BCC34B2791DD4D89C4BCAC14D9AF54C016F7* ___1_property, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalFileSettingsProvider_GetPreviousVersion_mD0419A3AF177D09738C31834319045F734A62293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(LocalFileSettingsProvider_GetPreviousVersion_mD0419A3AF177D09738C31834319045F734A62293_RuntimeMethod_var);
		return (SettingsPropertyValue_t116372E7B3BF0D37C8F0FF5906E48ED658790C19*)NULL;
	}
}
// System.Configuration.SettingsPropertyValueCollection System.Configuration.LocalFileSettingsProvider::GetPropertyValues(System.Configuration.SettingsContext,System.Configuration.SettingsPropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262* LocalFileSettingsProvider_GetPropertyValues_m42B0EE32827B0F7BB3ED9DE15A812EC10869E709 (LocalFileSettingsProvider_tB7C50B1046CB3E0D047401CAA0F15BA685E3FDAA* __this, SettingsContext_tE2A8637CE8FECB35A8FB44136C440FA37ACD2AFE* ___0_context, SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* ___1_properties, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalFileSettingsProvider_GetPropertyValues_m42B0EE32827B0F7BB3ED9DE15A812EC10869E709_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(LocalFileSettingsProvider_GetPropertyValues_m42B0EE32827B0F7BB3ED9DE15A812EC10869E709_RuntimeMethod_var);
		return (SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262*)NULL;
	}
}
// System.Void System.Configuration.LocalFileSettingsProvider::Initialize(System.String,System.Collections.Specialized.NameValueCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalFileSettingsProvider_Initialize_m80691D519DF9D3FB0777AFABD4E6E0241B6F76E2 (LocalFileSettingsProvider_tB7C50B1046CB3E0D047401CAA0F15BA685E3FDAA* __this, String_t* ___0_name, NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___1_values, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalFileSettingsProvider_Initialize_m80691D519DF9D3FB0777AFABD4E6E0241B6F76E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(LocalFileSettingsProvider_Initialize_m80691D519DF9D3FB0777AFABD4E6E0241B6F76E2_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.LocalFileSettingsProvider::Reset(System.Configuration.SettingsContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalFileSettingsProvider_Reset_mCF00DA7B126F1228D867F84D505058420DC920E2 (LocalFileSettingsProvider_tB7C50B1046CB3E0D047401CAA0F15BA685E3FDAA* __this, SettingsContext_tE2A8637CE8FECB35A8FB44136C440FA37ACD2AFE* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalFileSettingsProvider_Reset_mCF00DA7B126F1228D867F84D505058420DC920E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(LocalFileSettingsProvider_Reset_mCF00DA7B126F1228D867F84D505058420DC920E2_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.LocalFileSettingsProvider::SetPropertyValues(System.Configuration.SettingsContext,System.Configuration.SettingsPropertyValueCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalFileSettingsProvider_SetPropertyValues_m923EAC651151464E230DEED0431E44DF59BEE19C (LocalFileSettingsProvider_tB7C50B1046CB3E0D047401CAA0F15BA685E3FDAA* __this, SettingsContext_tE2A8637CE8FECB35A8FB44136C440FA37ACD2AFE* ___0_context, SettingsPropertyValueCollection_tB380862AADEACCBF5CF92B071C31B1D85DFA9262* ___1_values, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalFileSettingsProvider_SetPropertyValues_m923EAC651151464E230DEED0431E44DF59BEE19C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(LocalFileSettingsProvider_SetPropertyValues_m923EAC651151464E230DEED0431E44DF59BEE19C_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.LocalFileSettingsProvider::Upgrade(System.Configuration.SettingsContext,System.Configuration.SettingsPropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalFileSettingsProvider_Upgrade_mBCE0229FCC5F85D5E36FF283421BB860E6C1A520 (LocalFileSettingsProvider_tB7C50B1046CB3E0D047401CAA0F15BA685E3FDAA* __this, SettingsContext_tE2A8637CE8FECB35A8FB44136C440FA37ACD2AFE* ___0_context, SettingsPropertyCollection_tC3B1AA961E577D9B99DBA66FDE8E2DC5BFB4ABE3* ___1_properties, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalFileSettingsProvider_Upgrade_mBCE0229FCC5F85D5E36FF283421BB860E6C1A520_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(LocalFileSettingsProvider_Upgrade_mBCE0229FCC5F85D5E36FF283421BB860E6C1A520_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.NameValueFileSectionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueFileSectionHandler__ctor_m63250F269D7C48D035A20DFB333D9C9F3FF286C5 (NameValueFileSectionHandler_t61902306D7C2879596427206C06D2BD821990A1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameValueFileSectionHandler__ctor_m63250F269D7C48D035A20DFB333D9C9F3FF286C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NameValueFileSectionHandler__ctor_m63250F269D7C48D035A20DFB333D9C9F3FF286C5_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Configuration.NameValueFileSectionHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameValueFileSectionHandler_Create_m32DE75BD8E49555814B0D24CD9A0DAE8B40F90FB (NameValueFileSectionHandler_t61902306D7C2879596427206C06D2BD821990A1F* __this, RuntimeObject* ___0_parent, RuntimeObject* ___1_configContext, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___2_section, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameValueFileSectionHandler_Create_m32DE75BD8E49555814B0D24CD9A0DAE8B40F90FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NameValueFileSectionHandler_Create_m32DE75BD8E49555814B0D24CD9A0DAE8B40F90FB_RuntimeMethod_var);
		return NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.NameValueSectionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueSectionHandler__ctor_mA0807ACFE357646902FD4CFB819861AF9FAB13B3 (NameValueSectionHandler_t17CD98BF7CED41908FB5117CA6E34B1174C824FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameValueSectionHandler__ctor_mA0807ACFE357646902FD4CFB819861AF9FAB13B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NameValueSectionHandler__ctor_mA0807ACFE357646902FD4CFB819861AF9FAB13B3_RuntimeMethod_var);
		return;
	}
}
// System.String System.Configuration.NameValueSectionHandler::get_KeyAttributeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueSectionHandler_get_KeyAttributeName_m310CA964A5D3419C272B4D1D23EF00ADABD007A0 (NameValueSectionHandler_t17CD98BF7CED41908FB5117CA6E34B1174C824FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameValueSectionHandler_get_KeyAttributeName_m310CA964A5D3419C272B4D1D23EF00ADABD007A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NameValueSectionHandler_get_KeyAttributeName_m310CA964A5D3419C272B4D1D23EF00ADABD007A0_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.String System.Configuration.NameValueSectionHandler::get_ValueAttributeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueSectionHandler_get_ValueAttributeName_mD7DC41ABB787F7253E126B9ADFFA573F548F27B2 (NameValueSectionHandler_t17CD98BF7CED41908FB5117CA6E34B1174C824FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameValueSectionHandler_get_ValueAttributeName_mD7DC41ABB787F7253E126B9ADFFA573F548F27B2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NameValueSectionHandler_get_ValueAttributeName_mD7DC41ABB787F7253E126B9ADFFA573F548F27B2_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Object System.Configuration.NameValueSectionHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameValueSectionHandler_Create_mE8810940370107E7CF7DBC7E996C3EE5270941EB (NameValueSectionHandler_t17CD98BF7CED41908FB5117CA6E34B1174C824FF* __this, RuntimeObject* ___0_parent, RuntimeObject* ___1_context, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___2_section, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameValueSectionHandler_Create_mE8810940370107E7CF7DBC7E996C3EE5270941EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NameValueSectionHandler_Create_mE8810940370107E7CF7DBC7E996C3EE5270941EB_RuntimeMethod_var);
		return NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.NoSettingsVersionUpgradeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoSettingsVersionUpgradeAttribute__ctor_m4ADE58C855A35FAB51392D42477D7D88522F5418 (NoSettingsVersionUpgradeAttribute_t1C90B0358F5B27707CDA7BE9411B146C4B98596A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SchemeSettingElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchemeSettingElement__ctor_mB827797F0B9CE11E4CCD5045F60A96DFCFCEF476 (SchemeSettingElement_t381D9E6F03CAFE26FA63025881BCE86299E390CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemeSettingElement__ctor_mB827797F0B9CE11E4CCD5045F60A96DFCFCEF476_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SchemeSettingElement__ctor_mB827797F0B9CE11E4CCD5045F60A96DFCFCEF476_RuntimeMethod_var);
		return;
	}
}
// System.GenericUriParserOptions System.Configuration.SchemeSettingElement::get_GenericUriParserOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SchemeSettingElement_get_GenericUriParserOptions_m2CAB93EC6328391D0B2EACEE9D88F40302A7B9EC (SchemeSettingElement_t381D9E6F03CAFE26FA63025881BCE86299E390CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemeSettingElement_get_GenericUriParserOptions_m2CAB93EC6328391D0B2EACEE9D88F40302A7B9EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(SchemeSettingElement_get_GenericUriParserOptions_m2CAB93EC6328391D0B2EACEE9D88F40302A7B9EC_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.String System.Configuration.SchemeSettingElement::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SchemeSettingElement_get_Name_mCF4A5DD0E6BE5D20CD735E516C05A496CE6E5EE3 (SchemeSettingElement_t381D9E6F03CAFE26FA63025881BCE86299E390CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemeSettingElement_get_Name_mCF4A5DD0E6BE5D20CD735E516C05A496CE6E5EE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SchemeSettingElement_get_Name_mCF4A5DD0E6BE5D20CD735E516C05A496CE6E5EE3_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.SchemeSettingElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SchemeSettingElement_get_Properties_mD4403A6764B1B5FF29C5ED02693625607D824C44 (SchemeSettingElement_t381D9E6F03CAFE26FA63025881BCE86299E390CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemeSettingElement_get_Properties_mD4403A6764B1B5FF29C5ED02693625607D824C44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SchemeSettingElement_get_Properties_mD4403A6764B1B5FF29C5ED02693625607D824C44_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SchemeSettingElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchemeSettingElementCollection__ctor_m2BA88E460B482C1412B8231D8222C413BB0A2F8F (SchemeSettingElementCollection_tF4E9F58B4F8A8303363BEEE235E2F7954884D179* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemeSettingElementCollection__ctor_m2BA88E460B482C1412B8231D8222C413BB0A2F8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SchemeSettingElementCollection__ctor_m2BA88E460B482C1412B8231D8222C413BB0A2F8F_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationElementCollectionType System.Configuration.SchemeSettingElementCollection::get_CollectionType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SchemeSettingElementCollection_get_CollectionType_mDB6595916975862AB1BEF56275F44C6758800FDD (SchemeSettingElementCollection_tF4E9F58B4F8A8303363BEEE235E2F7954884D179* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemeSettingElementCollection_get_CollectionType_mDB6595916975862AB1BEF56275F44C6758800FDD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(SchemeSettingElementCollection_get_CollectionType_mDB6595916975862AB1BEF56275F44C6758800FDD_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Configuration.SchemeSettingElement System.Configuration.SchemeSettingElementCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SchemeSettingElement_t381D9E6F03CAFE26FA63025881BCE86299E390CB* SchemeSettingElementCollection_get_Item_mFFE548F9225C86D2665B30BC9FCB0A328C7E858C (SchemeSettingElementCollection_tF4E9F58B4F8A8303363BEEE235E2F7954884D179* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemeSettingElementCollection_get_Item_mFFE548F9225C86D2665B30BC9FCB0A328C7E858C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SchemeSettingElementCollection_get_Item_mFFE548F9225C86D2665B30BC9FCB0A328C7E858C_RuntimeMethod_var);
		return (SchemeSettingElement_t381D9E6F03CAFE26FA63025881BCE86299E390CB*)NULL;
	}
}
// System.Configuration.SchemeSettingElement System.Configuration.SchemeSettingElementCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SchemeSettingElement_t381D9E6F03CAFE26FA63025881BCE86299E390CB* SchemeSettingElementCollection_get_Item_m15ACF5ABEE01DBF0E12EE75BCC37148148D93D98 (SchemeSettingElementCollection_tF4E9F58B4F8A8303363BEEE235E2F7954884D179* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemeSettingElementCollection_get_Item_m15ACF5ABEE01DBF0E12EE75BCC37148148D93D98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SchemeSettingElementCollection_get_Item_m15ACF5ABEE01DBF0E12EE75BCC37148148D93D98_RuntimeMethod_var);
		return (SchemeSettingElement_t381D9E6F03CAFE26FA63025881BCE86299E390CB*)NULL;
	}
}
// System.Configuration.ConfigurationElement System.Configuration.SchemeSettingElementCollection::CreateNewElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* SchemeSettingElementCollection_CreateNewElement_mA032431A7C56B5F605E050D5E33F3393AFCBDEE5 (SchemeSettingElementCollection_tF4E9F58B4F8A8303363BEEE235E2F7954884D179* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemeSettingElementCollection_CreateNewElement_mA032431A7C56B5F605E050D5E33F3393AFCBDEE5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SchemeSettingElementCollection_CreateNewElement_mA032431A7C56B5F605E050D5E33F3393AFCBDEE5_RuntimeMethod_var);
		return (ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E*)NULL;
	}
}
// System.Object System.Configuration.SchemeSettingElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SchemeSettingElementCollection_GetElementKey_mD46CD378307C31244B90C0A50513BFF5CC00CC2C (SchemeSettingElementCollection_tF4E9F58B4F8A8303363BEEE235E2F7954884D179* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemeSettingElementCollection_GetElementKey_mD46CD378307C31244B90C0A50513BFF5CC00CC2C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SchemeSettingElementCollection_GetElementKey_mD46CD378307C31244B90C0A50513BFF5CC00CC2C_RuntimeMethod_var);
		return NULL;
	}
}
// System.Int32 System.Configuration.SchemeSettingElementCollection::IndexOf(System.Configuration.SchemeSettingElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SchemeSettingElementCollection_IndexOf_mCC7A2A0024A1013647F08AC6BA20832C4318D79B (SchemeSettingElementCollection_tF4E9F58B4F8A8303363BEEE235E2F7954884D179* __this, SchemeSettingElement_t381D9E6F03CAFE26FA63025881BCE86299E390CB* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemeSettingElementCollection_IndexOf_mCC7A2A0024A1013647F08AC6BA20832C4318D79B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(SchemeSettingElementCollection_IndexOf_mCC7A2A0024A1013647F08AC6BA20832C4318D79B_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsDescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsDescriptionAttribute__ctor_m12C43903D1613311D8FFA5936394D4BE2A2E2B30 (SettingsDescriptionAttribute_t52FAAE809A9E9CDD1047A13FB5F88D2027E73189* __this, String_t* ___0_description, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.String System.Configuration.SettingsDescriptionAttribute::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SettingsDescriptionAttribute_get_Description_mE7D4E1CC752D61778AE9B44BAA3879F97EDFC3ED (SettingsDescriptionAttribute_t52FAAE809A9E9CDD1047A13FB5F88D2027E73189* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsDescriptionAttribute_get_Description_mE7D4E1CC752D61778AE9B44BAA3879F97EDFC3ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsDescriptionAttribute_get_Description_mE7D4E1CC752D61778AE9B44BAA3879F97EDFC3ED_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsGroupDescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsGroupDescriptionAttribute__ctor_m6CD8A21BDB63252998DCC01E924C4E327827E56F (SettingsGroupDescriptionAttribute_t9762F0903C14A794A754EDCA52C127B266ABCD23* __this, String_t* ___0_description, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.String System.Configuration.SettingsGroupDescriptionAttribute::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SettingsGroupDescriptionAttribute_get_Description_mB12BEC4B560D8CC17A0DC98B2A9C6B6F6704A8E4 (SettingsGroupDescriptionAttribute_t9762F0903C14A794A754EDCA52C127B266ABCD23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsGroupDescriptionAttribute_get_Description_mB12BEC4B560D8CC17A0DC98B2A9C6B6F6704A8E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsGroupDescriptionAttribute_get_Description_mB12BEC4B560D8CC17A0DC98B2A9C6B6F6704A8E4_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsGroupNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsGroupNameAttribute__ctor_mFBA15AD0DF7B3B5FC31E0BBAC36E9223E0985C53 (SettingsGroupNameAttribute_t36D45534354DF5B010238F82C267C7B11ECDD109* __this, String_t* ___0_groupName, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.String System.Configuration.SettingsGroupNameAttribute::get_GroupName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SettingsGroupNameAttribute_get_GroupName_mD90DB047688B38EB5792486D8F01BA7AA7AC3DB5 (SettingsGroupNameAttribute_t36D45534354DF5B010238F82C267C7B11ECDD109* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsGroupNameAttribute_get_GroupName_mD90DB047688B38EB5792486D8F01BA7AA7AC3DB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsGroupNameAttribute_get_GroupName_mD90DB047688B38EB5792486D8F01BA7AA7AC3DB5_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsManageabilityAttribute::.ctor(System.Configuration.SettingsManageability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManageabilityAttribute__ctor_m7A587C5962B89BA8D1196758531C8B7F9E4CDCE7 (SettingsManageabilityAttribute_t7FECB07177F7823FFBFCC4A747C3202B0B3C8115* __this, int32_t ___0_manageability, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Configuration.SettingsManageability System.Configuration.SettingsManageabilityAttribute::get_Manageability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SettingsManageabilityAttribute_get_Manageability_m2490D01C3DA3622F323B761FD5E59412A8E287F6 (SettingsManageabilityAttribute_t7FECB07177F7823FFBFCC4A747C3202B0B3C8115* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsManageabilityAttribute_get_Manageability_m2490D01C3DA3622F323B761FD5E59412A8E287F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(SettingsManageabilityAttribute_get_Manageability_m2490D01C3DA3622F323B761FD5E59412A8E287F6_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsPropertyIsReadOnlyException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyIsReadOnlyException__ctor_m88F217F7C73B320D48074558C94AA5EEC9418609 (SettingsPropertyIsReadOnlyException_t223E92F0E23CEAC3EF58F4376D97640EBA6B15DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyIsReadOnlyException__ctor_m88F217F7C73B320D48074558C94AA5EEC9418609_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyIsReadOnlyException__ctor_m88F217F7C73B320D48074558C94AA5EEC9418609_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyIsReadOnlyException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyIsReadOnlyException__ctor_m93C834976EDE29C31E86FFBE29C70FD2CBDE9F7F (SettingsPropertyIsReadOnlyException_t223E92F0E23CEAC3EF58F4376D97640EBA6B15DA* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyIsReadOnlyException__ctor_m93C834976EDE29C31E86FFBE29C70FD2CBDE9F7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyIsReadOnlyException__ctor_m93C834976EDE29C31E86FFBE29C70FD2CBDE9F7F_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyIsReadOnlyException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyIsReadOnlyException__ctor_m233783D5D2C712922A18830E6A9C4F4BB6817CE8 (SettingsPropertyIsReadOnlyException_t223E92F0E23CEAC3EF58F4376D97640EBA6B15DA* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyIsReadOnlyException__ctor_m233783D5D2C712922A18830E6A9C4F4BB6817CE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyIsReadOnlyException__ctor_m233783D5D2C712922A18830E6A9C4F4BB6817CE8_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyIsReadOnlyException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyIsReadOnlyException__ctor_mD1210736C31F0A28BAF6306665BFA5292CC42C9F (SettingsPropertyIsReadOnlyException_t223E92F0E23CEAC3EF58F4376D97640EBA6B15DA* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyIsReadOnlyException__ctor_mD1210736C31F0A28BAF6306665BFA5292CC42C9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyIsReadOnlyException__ctor_mD1210736C31F0A28BAF6306665BFA5292CC42C9F_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsPropertyNotFoundException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyNotFoundException__ctor_m31829DC5B49B2121E897FB106F74EE3975AB4AE0 (SettingsPropertyNotFoundException_tB33F26B74AEF727762C689F39F106128FA96F614* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyNotFoundException__ctor_m31829DC5B49B2121E897FB106F74EE3975AB4AE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyNotFoundException__ctor_m31829DC5B49B2121E897FB106F74EE3975AB4AE0_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyNotFoundException__ctor_m1601472DAB755C91F7CB425862103A3234FE4D82 (SettingsPropertyNotFoundException_tB33F26B74AEF727762C689F39F106128FA96F614* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyNotFoundException__ctor_m1601472DAB755C91F7CB425862103A3234FE4D82_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyNotFoundException__ctor_m1601472DAB755C91F7CB425862103A3234FE4D82_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyNotFoundException__ctor_m24F6F7CCC62652D18F2D33D70A4EBDCECD53BD7C (SettingsPropertyNotFoundException_tB33F26B74AEF727762C689F39F106128FA96F614* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyNotFoundException__ctor_m24F6F7CCC62652D18F2D33D70A4EBDCECD53BD7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyNotFoundException__ctor_m24F6F7CCC62652D18F2D33D70A4EBDCECD53BD7C_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyNotFoundException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyNotFoundException__ctor_m4966866223D7506DF141D026DF415F07B7DED7AB (SettingsPropertyNotFoundException_tB33F26B74AEF727762C689F39F106128FA96F614* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyNotFoundException__ctor_m4966866223D7506DF141D026DF415F07B7DED7AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyNotFoundException__ctor_m4966866223D7506DF141D026DF415F07B7DED7AB_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsPropertyWrongTypeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyWrongTypeException__ctor_m018C6B8E4E1D76B1D171F0000995543731FCF1F5 (SettingsPropertyWrongTypeException_t0CC979B0253762CE0113ABB94F3E41B0ABF7E706* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyWrongTypeException__ctor_m018C6B8E4E1D76B1D171F0000995543731FCF1F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyWrongTypeException__ctor_m018C6B8E4E1D76B1D171F0000995543731FCF1F5_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyWrongTypeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyWrongTypeException__ctor_m0071321F3413E22D52E003A4E9F7C8A1272172CA (SettingsPropertyWrongTypeException_t0CC979B0253762CE0113ABB94F3E41B0ABF7E706* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyWrongTypeException__ctor_m0071321F3413E22D52E003A4E9F7C8A1272172CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyWrongTypeException__ctor_m0071321F3413E22D52E003A4E9F7C8A1272172CA_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyWrongTypeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyWrongTypeException__ctor_mD5370D3BAF61F0E38AF7E79795135298A8CA758D (SettingsPropertyWrongTypeException_t0CC979B0253762CE0113ABB94F3E41B0ABF7E706* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyWrongTypeException__ctor_mD5370D3BAF61F0E38AF7E79795135298A8CA758D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyWrongTypeException__ctor_mD5370D3BAF61F0E38AF7E79795135298A8CA758D_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Configuration.SettingsPropertyWrongTypeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsPropertyWrongTypeException__ctor_m588E5032E696D816EE7C25999421D94C88551787 (SettingsPropertyWrongTypeException_t0CC979B0253762CE0113ABB94F3E41B0ABF7E706* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsPropertyWrongTypeException__ctor_m588E5032E696D816EE7C25999421D94C88551787_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsPropertyWrongTypeException__ctor_m588E5032E696D816EE7C25999421D94C88551787_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsProviderAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsProviderAttribute__ctor_mF14698448AC1499B624DB4B4E729F89B2B16E6BA (SettingsProviderAttribute_tA4B17535ADC920B0D9B0E2C5F3F4DC14C37648D1* __this, String_t* ___0_providerTypeName, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void System.Configuration.SettingsProviderAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsProviderAttribute__ctor_m9F31563D8412AAF4F752D6965B2B000E5648CDFB (SettingsProviderAttribute_tA4B17535ADC920B0D9B0E2C5F3F4DC14C37648D1* __this, Type_t* ___0_providerType, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.String System.Configuration.SettingsProviderAttribute::get_ProviderTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SettingsProviderAttribute_get_ProviderTypeName_m20C4D8F8ECE1569879F0B4EE782E36ED94928B75 (SettingsProviderAttribute_tA4B17535ADC920B0D9B0E2C5F3F4DC14C37648D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsProviderAttribute_get_ProviderTypeName_m20C4D8F8ECE1569879F0B4EE782E36ED94928B75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsProviderAttribute_get_ProviderTypeName_m20C4D8F8ECE1569879F0B4EE782E36ED94928B75_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SettingsSerializeAsAttribute::.ctor(System.Configuration.SettingsSerializeAs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsSerializeAsAttribute__ctor_m9D8C9CC8D9B262E95E757AF65212057959BA91EA (SettingsSerializeAsAttribute_tBDD4F5B8C3633C9EE50BB457E0388A13B12B7107* __this, int32_t ___0_serializeAs, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Configuration.SettingsSerializeAs System.Configuration.SettingsSerializeAsAttribute::get_SerializeAs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SettingsSerializeAsAttribute_get_SerializeAs_m22095AD8156A9F017C6ED81ED5B5741730D061BB (SettingsSerializeAsAttribute_tBDD4F5B8C3633C9EE50BB457E0388A13B12B7107* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSerializeAsAttribute_get_SerializeAs_m22095AD8156A9F017C6ED81ED5B5741730D061BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(SettingsSerializeAsAttribute_get_SerializeAs_m22095AD8156A9F017C6ED81ED5B5741730D061BB_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SingleTagSectionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleTagSectionHandler__ctor_m46BF030D906E598EF83F75A4BFC7887151130069 (SingleTagSectionHandler_t7FACC290CDE2B6DA919D09E1B05820BBA68C95EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleTagSectionHandler__ctor_m46BF030D906E598EF83F75A4BFC7887151130069_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SingleTagSectionHandler__ctor_m46BF030D906E598EF83F75A4BFC7887151130069_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Configuration.SingleTagSectionHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingleTagSectionHandler_Create_m85AFEB25B7962390CF8EA87CC4C1EDE26B6004E2 (SingleTagSectionHandler_t7FACC290CDE2B6DA919D09E1B05820BBA68C95EC* __this, RuntimeObject* ___0_parent, RuntimeObject* ___1_context, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___2_section, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleTagSectionHandler_Create_m85AFEB25B7962390CF8EA87CC4C1EDE26B6004E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SingleTagSectionHandler_Create_m85AFEB25B7962390CF8EA87CC4C1EDE26B6004E2_RuntimeMethod_var);
		return NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SpecialSettingAttribute::.ctor(System.Configuration.SpecialSetting)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialSettingAttribute__ctor_mD7F9E21749B0F87231EC9DE9571ED55999EDBAA4 (SpecialSettingAttribute_t6A0390FA21E4837E2581530B6716201FA4D9D323* __this, int32_t ___0_specialSetting, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Configuration.SpecialSetting System.Configuration.SpecialSettingAttribute::get_SpecialSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpecialSettingAttribute_get_SpecialSetting_m793F1C10FFE78117B0715B2D803D8A8EF839D56C (SpecialSettingAttribute_t6A0390FA21E4837E2581530B6716201FA4D9D323* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialSettingAttribute_get_SpecialSetting_m793F1C10FFE78117B0715B2D803D8A8EF839D56C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(SpecialSettingAttribute_get_SpecialSetting_m793F1C10FFE78117B0715B2D803D8A8EF839D56C_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.UriSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriSection__ctor_m08251EAB0CF500E0EA505D38CDF46E08FC44F800 (UriSection_tA65A84F103669739EEE6C50C25A9374FA23C66F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriSection__ctor_m08251EAB0CF500E0EA505D38CDF46E08FC44F800_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(UriSection__ctor_m08251EAB0CF500E0EA505D38CDF46E08FC44F800_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.IdnElement System.Configuration.UriSection::get_Idn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IdnElement_t1600A7D1444637603C2BC0E9BEFC45D7600D0701* UriSection_get_Idn_m1C586878C9C605F3E6529F1305CCC7B14D8413B2 (UriSection_tA65A84F103669739EEE6C50C25A9374FA23C66F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriSection_get_Idn_m1C586878C9C605F3E6529F1305CCC7B14D8413B2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(UriSection_get_Idn_m1C586878C9C605F3E6529F1305CCC7B14D8413B2_RuntimeMethod_var);
		return (IdnElement_t1600A7D1444637603C2BC0E9BEFC45D7600D0701*)NULL;
	}
}
// System.Configuration.IriParsingElement System.Configuration.UriSection::get_IriParsing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IriParsingElement_t86D7FA77708517AE2C872C0066EF231A7640D03A* UriSection_get_IriParsing_m6F2BFD044D235FF7953B78ADF881055125B227F9 (UriSection_tA65A84F103669739EEE6C50C25A9374FA23C66F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriSection_get_IriParsing_m6F2BFD044D235FF7953B78ADF881055125B227F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(UriSection_get_IriParsing_m6F2BFD044D235FF7953B78ADF881055125B227F9_RuntimeMethod_var);
		return (IriParsingElement_t86D7FA77708517AE2C872C0066EF231A7640D03A*)NULL;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.UriSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* UriSection_get_Properties_mBD0B9A9124F8992B54BEC7E0C55D32EFE09A7C0D (UriSection_tA65A84F103669739EEE6C50C25A9374FA23C66F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriSection_get_Properties_mBD0B9A9124F8992B54BEC7E0C55D32EFE09A7C0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(UriSection_get_Properties_mBD0B9A9124F8992B54BEC7E0C55D32EFE09A7C0D_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Configuration.SchemeSettingElementCollection System.Configuration.UriSection::get_SchemeSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SchemeSettingElementCollection_tF4E9F58B4F8A8303363BEEE235E2F7954884D179* UriSection_get_SchemeSettings_mE045C1DAB803F6C7E58154A44D085515439053F6 (UriSection_tA65A84F103669739EEE6C50C25A9374FA23C66F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriSection_get_SchemeSettings_mE045C1DAB803F6C7E58154A44D085515439053F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(UriSection_get_SchemeSettings_mE045C1DAB803F6C7E58154A44D085515439053F6_RuntimeMethod_var);
		return (SchemeSettingElementCollection_tF4E9F58B4F8A8303363BEEE235E2F7954884D179*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.UserScopedSettingAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserScopedSettingAttribute__ctor_mEF27FA7321EDCB1C6D2D08633E69FC1995A8E475 (UserScopedSettingAttribute_t056010F834245FA728C1118C82AC7BE7611EE92B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.UserSettingsGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSettingsGroup__ctor_mB04FF355CC357373890B7D076355D9D6457C970F (UserSettingsGroup_t7B3574CA02AC6CD059BA1CE31517B50071796B94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserSettingsGroup__ctor_mB04FF355CC357373890B7D076355D9D6457C970F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(UserSettingsGroup__ctor_mB04FF355CC357373890B7D076355D9D6457C970F_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2 (const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_9 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_array;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_array;
		NullCheck(L_12);
		int32_t L_13 = ___1_start;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_array;
		NullCheck((RuntimeArray*)L_14);
		uint8_t* L_15;
		L_15 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_14, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_as_ref<uint8_t>(L_15);
		int32_t L_17 = ___1_start;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add<uint8_t,int32_t>(L_16, L_17);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_19;
		memset((&L_19), 0, sizeof(L_19));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_19), L_18);
		__this->____pointer_0 = L_19;
		int32_t L_20 = ___2_length;
		__this->____length_1 = L_20;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (&L_0->___Data_2);
		return L_1;
	}
}
