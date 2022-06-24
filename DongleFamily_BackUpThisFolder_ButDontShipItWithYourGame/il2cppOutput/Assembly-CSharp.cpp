#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.List`1<Dongle>
struct List_1_tECCBA39574C60087B55868514633C69C551BD5A6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// Dongle[]
struct DongleU5BU5D_t1B1895BF1D05A6F1DB9FB5C44D13C72DD13F7B92;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// ReadmeBE6/Section[]
struct SectionU5BU5D_tEB9645E6AD05D00741D840D8781841891F4BFEA5;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Dongle
struct Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// ReadmeBE6
struct ReadmeBE6_tD2A0A54EB197CD951E73133FF2FE20CC1F3EB5F1;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Dongle/<AttachRoutine>d__18
struct U3CAttachRoutineU3Ed__18_t8BEC50FF94F1974B4767D4CD2B0ED5B6D4A4407F;
// Dongle/<HideRoutine>d__21
struct U3CHideRoutineU3Ed__21_tB6C40703953E23A8733DF758440117CE4068AA37;
// Dongle/<LevelUpRoutine>d__23
struct U3CLevelUpRoutineU3Ed__23_t8A1EBFF3FE194162F76AE049E11C72B3458C64AB;
// Dongle/<MaxLevelUpRoutine>d__24
struct U3CMaxLevelUpRoutineU3Ed__24_t655DA072E219A2EC1DB63BC5548CB71A866B19FF;
// GameManager/<GameOverRoutine>d__33
struct U3CGameOverRoutineU3Ed__33_t4F102CE97E0A82F2C7311CCD772AFC50151A553A;
// GameManager/<ResetCoroutine>d__35
struct U3CResetCoroutineU3Ed__35_t4262C7C03C7833BEBEB0C488181872BC3951D82D;
// GameManager/<WaitNext>d__29
struct U3CWaitNextU3Ed__29_t2BB9095145B7942A19724648370115E5F1BA9618;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// ReadmeBE6/Section
struct Section_t560344319A65C3C41A3223D044F69D3A3AFE3611;

IL2CPP_EXTERN_C RuntimeClass* List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tECCBA39574C60087B55868514633C69C551BD5A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAttachRoutineU3Ed__18_t8BEC50FF94F1974B4767D4CD2B0ED5B6D4A4407F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGameOverRoutineU3Ed__33_t4F102CE97E0A82F2C7311CCD772AFC50151A553A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CHideRoutineU3Ed__21_tB6C40703953E23A8733DF758440117CE4068AA37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLevelUpRoutineU3Ed__23_t8A1EBFF3FE194162F76AE049E11C72B3458C64AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMaxLevelUpRoutineU3Ed__24_t655DA072E219A2EC1DB63BC5548CB71A866B19FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CResetCoroutineU3Ed__35_t4262C7C03C7833BEBEB0C488181872BC3951D82D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitNextU3Ed__29_t2BB9095145B7942A19724648370115E5F1BA9618_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0DED948F28F76D821EC6125D1CAD3EC1A88A6DA7;
IL2CPP_EXTERN_C String_t* _stringLiteral137AB3E6CD628D78E0304D495391BD17B363E270;
IL2CPP_EXTERN_C String_t* _stringLiteral265958279396D0412F55705E9479ADCBD98E3980;
IL2CPP_EXTERN_C String_t* _stringLiteral3ADEB86295B4AD2CAF5F5890AB66A79793E9E6C3;
IL2CPP_EXTERN_C String_t* _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral579178797B22BCA81EB6F6E1E1B6F403B1151237;
IL2CPP_EXTERN_C String_t* _stringLiteral6376E1DF1E53CE3F0C69EF6F3653984E209E23B6;
IL2CPP_EXTERN_C String_t* _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5;
IL2CPP_EXTERN_C String_t* _stringLiteral84EA46B97ADC9A7DB1B8BC36490F1D636A7DBDCE;
IL2CPP_EXTERN_C String_t* _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674;
IL2CPP_EXTERN_C String_t* _stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B;
IL2CPP_EXTERN_C String_t* _stringLiteralC063C639AE70F3B67ADF2554E2BBBC22ED90DB3D;
IL2CPP_EXTERN_C String_t* _stringLiteralE0A757C45A80FBE4F719FEF43C74B30E6E81CC63;
IL2CPP_EXTERN_C String_t* _stringLiteralF22B0F04E5799D11A8C07A1A569FD3A0E5C9FC81;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_m1E30A71856359306D1F0E9E59CE75B25210FE16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95_mC79380D38C5757F457C7E1FF66E9C09EC5267B28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m732C0B8B5388A5B81C39A2A8969D0C160692A070_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF2C36C7CAE511950255288A3B55D031935E0B34F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m39B562589EB31E915F2D6EFE2A0F6DA287F65651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m960E15B2AF69220E9BB7EE9B11E794E786FE1B85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0489C841C5F215662090B9EFDE70E57407262522_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8703BBD474545AA0D6B24E86A053BB4D936853E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisDongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95_mBE1602039BB5FB804A3492A6537E86D22FF44F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttachRoutineU3Ed__18_System_Collections_IEnumerator_Reset_mB5743713C11520973892A9BC334BECE6BA003FA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGameOverRoutineU3Ed__33_System_Collections_IEnumerator_Reset_mD4AD166EAA354CBDD9F1B1F71A570169EEE30DC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHideRoutineU3Ed__21_System_Collections_IEnumerator_Reset_m3D6ED911640A1E1880C540496002AD1B41B2D4BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLevelUpRoutineU3Ed__23_System_Collections_IEnumerator_Reset_m93021FAA285155BEDC8E689D05A9AA8434422D8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMaxLevelUpRoutineU3Ed__24_System_Collections_IEnumerator_Reset_m039807FE40C8AF0269C756ADE16FAFA7DE4A7419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResetCoroutineU3Ed__35_System_Collections_IEnumerator_Reset_m12FA43270D05B1C522D347027E455E489C2CA33B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitNextU3Ed__29_System_Collections_IEnumerator_Reset_m8B7E7A79C9CF53A4EB50E395D57CCAF08F356DEF_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
struct DongleU5BU5D_t1B1895BF1D05A6F1DB9FB5C44D13C72DD13F7B92;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<Dongle>
struct List_1_tECCBA39574C60087B55868514633C69C551BD5A6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DongleU5BU5D_t1B1895BF1D05A6F1DB9FB5C44D13C72DD13F7B92* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tECCBA39574C60087B55868514633C69C551BD5A6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DongleU5BU5D_t1B1895BF1D05A6F1DB9FB5C44D13C72DD13F7B92* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Dongle/<AttachRoutine>d__18
struct U3CAttachRoutineU3Ed__18_t8BEC50FF94F1974B4767D4CD2B0ED5B6D4A4407F  : public RuntimeObject
{
	// System.Int32 Dongle/<AttachRoutine>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Dongle/<AttachRoutine>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Dongle Dongle/<AttachRoutine>d__18::<>4__this
	Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* ___U3CU3E4__this_2;
};

// Dongle/<LevelUpRoutine>d__23
struct U3CLevelUpRoutineU3Ed__23_t8A1EBFF3FE194162F76AE049E11C72B3458C64AB  : public RuntimeObject
{
	// System.Int32 Dongle/<LevelUpRoutine>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Dongle/<LevelUpRoutine>d__23::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Dongle Dongle/<LevelUpRoutine>d__23::<>4__this
	Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* ___U3CU3E4__this_2;
};

// Dongle/<MaxLevelUpRoutine>d__24
struct U3CMaxLevelUpRoutineU3Ed__24_t655DA072E219A2EC1DB63BC5548CB71A866B19FF  : public RuntimeObject
{
	// System.Int32 Dongle/<MaxLevelUpRoutine>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Dongle/<MaxLevelUpRoutine>d__24::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Dongle Dongle/<MaxLevelUpRoutine>d__24::<>4__this
	Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* ___U3CU3E4__this_2;
};

// GameManager/<GameOverRoutine>d__33
struct U3CGameOverRoutineU3Ed__33_t4F102CE97E0A82F2C7311CCD772AFC50151A553A  : public RuntimeObject
{
	// System.Int32 GameManager/<GameOverRoutine>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<GameOverRoutine>d__33::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<GameOverRoutine>d__33::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
	// Dongle[] GameManager/<GameOverRoutine>d__33::<dongles>5__2
	DongleU5BU5D_t1B1895BF1D05A6F1DB9FB5C44D13C72DD13F7B92* ___U3CdonglesU3E5__2_3;
	// System.Int32 GameManager/<GameOverRoutine>d__33::<index>5__3
	int32_t ___U3CindexU3E5__3_4;
};

// GameManager/<ResetCoroutine>d__35
struct U3CResetCoroutineU3Ed__35_t4262C7C03C7833BEBEB0C488181872BC3951D82D  : public RuntimeObject
{
	// System.Int32 GameManager/<ResetCoroutine>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<ResetCoroutine>d__35::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// GameManager/<WaitNext>d__29
struct U3CWaitNextU3Ed__29_t2BB9095145B7942A19724648370115E5F1BA9618  : public RuntimeObject
{
	// System.Int32 GameManager/<WaitNext>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<WaitNext>d__29::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<WaitNext>d__29::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// ReadmeBE6/Section
struct Section_t560344319A65C3C41A3223D044F69D3A3AFE3611  : public RuntimeObject
{
	// System.String ReadmeBE6/Section::heading
	String_t* ___heading_0;
	// System.String ReadmeBE6/Section::text
	String_t* ___text_1;
	// System.String ReadmeBE6/Section::linkText
	String_t* ___linkText_2;
	// System.String ReadmeBE6/Section::url
	String_t* ___url_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Dongle/<HideRoutine>d__21
struct U3CHideRoutineU3Ed__21_tB6C40703953E23A8733DF758440117CE4068AA37  : public RuntimeObject
{
	// System.Int32 Dongle/<HideRoutine>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Dongle/<HideRoutine>d__21::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Vector3 Dongle/<HideRoutine>d__21::targetPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos_2;
	// Dongle Dongle/<HideRoutine>d__21::<>4__this
	Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* ___U3CU3E4__this_3;
	// System.Int32 Dongle/<HideRoutine>d__21::<frameCount>5__2
	int32_t ___U3CframeCountU3E5__2_4;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ReadmeBE6
struct ReadmeBE6_tD2A0A54EB197CD951E73133FF2FE20CC1F3EB5F1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D ReadmeBE6::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String ReadmeBE6::title
	String_t* ___title_5;
	// ReadmeBE6/Section[] ReadmeBE6::sections
	SectionU5BU5D_tEB9645E6AD05D00741D840D8781841891F4BFEA5* ___sections_6;
	// System.Boolean ReadmeBE6::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// UnityEngine.CircleCollider2D
struct CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// Dongle
struct Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameManager Dongle::manager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___manager_4;
	// UnityEngine.ParticleSystem Dongle::effect
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___effect_5;
	// System.Int32 Dongle::level
	int32_t ___level_6;
	// System.Boolean Dongle::isDrag
	bool ___isDrag_7;
	// System.Boolean Dongle::isMerge
	bool ___isMerge_8;
	// System.Boolean Dongle::isAttach
	bool ___isAttach_9;
	// System.Single Dongle::deadTime
	float ___deadTime_10;
	// UnityEngine.Rigidbody2D Dongle::rigid
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigid_11;
	// UnityEngine.CircleCollider2D Dongle::circle
	CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* ___circle_12;
	// UnityEngine.Animator Dongle::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_13;
	// UnityEngine.SpriteRenderer Dongle::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_14;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean GameManager::isOver
	bool ___isOver_4;
	// System.Int32 GameManager::score
	int32_t ___score_5;
	// System.Int32 GameManager::maxLevel
	int32_t ___maxLevel_6;
	// UnityEngine.GameObject GameManager::donglePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___donglePrefab_7;
	// UnityEngine.Transform GameManager::dongleGroup
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___dongleGroup_8;
	// System.Collections.Generic.List`1<Dongle> GameManager::donglePool
	List_1_tECCBA39574C60087B55868514633C69C551BD5A6* ___donglePool_9;
	// UnityEngine.GameObject GameManager::effectPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___effectPrefab_10;
	// UnityEngine.Transform GameManager::effectGroup
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___effectGroup_11;
	// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> GameManager::effectPool
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* ___effectPool_12;
	// System.Int32 GameManager::poolSize
	int32_t ___poolSize_13;
	// System.Int32 GameManager::poolCursor
	int32_t ___poolCursor_14;
	// Dongle GameManager::lastDongle
	Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* ___lastDongle_15;
	// UnityEngine.AudioSource GameManager::bgmPlayer
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bgmPlayer_16;
	// UnityEngine.AudioSource[] GameManager::sfxPlayer
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___sfxPlayer_17;
	// UnityEngine.AudioClip[] GameManager::sfxClip
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___sfxClip_18;
	// System.Int32 GameManager::sfxCursor
	int32_t ___sfxCursor_19;
	// UnityEngine.GameObject GameManager::StartGroup
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___StartGroup_20;
	// UnityEngine.GameObject GameManager::endGroup
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___endGroup_21;
	// UnityEngine.UI.Text GameManager::scoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreText_22;
	// UnityEngine.UI.Text GameManager::maxScoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___maxScoreText_23;
	// UnityEngine.UI.Text GameManager::subScoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___subScoreText_24;
	// UnityEngine.GameObject GameManager::line
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___line_25;
	// UnityEngine.GameObject GameManager::bottom
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bottom_26;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* m_Items[1];

	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Dongle[]
struct DongleU5BU5D_t1B1895BF1D05A6F1DB9FB5C44D13C72DD13F7B92  : public RuntimeArray
{
	ALIGN_FIELD (8) Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* m_Items[1];

	inline Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;

// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.CircleCollider2D>()
inline CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* Component_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_m1E30A71856359306D1F0E9E59CE75B25210FE16F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_simulated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_simulated_m38E0BD6581E907DD87059034C4B2E8D47BBFE71D (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_angularVelocity_mFC06FB14E69DD4847F27E614900D22317AA5A390 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void Dongle/<AttachRoutine>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttachRoutineU3Ed__18__ctor_m8EDCC890B1B779AC0F2B102F4A58AA4A86EB5725 (U3CAttachRoutineU3Ed__18_t8BEC50FF94F1974B4767D4CD2B0ED5B6D4A4407F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Dongle>()
inline Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* GameObject_GetComponent_TisDongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95_mC79380D38C5757F457C7E1FF66E9C09EC5267B28 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Dongle::Hide(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_Hide_mC010A263D9DD8C888AC8FC555D4B25E8B66432DF (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos0, const RuntimeMethod* method) ;
// System.Void Dongle::LevelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_LevelUp_mCBC48026AF038CD733F6AF16C6E46BA24D618464 (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void Dongle::EffectPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_EffectPlay_m74991178A2B9B35DAD5D7EE68587B81FA75BF035 (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Dongle::HideRoutine(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dongle_HideRoutine_mA750690CB80BD6C548393A53153CACD684117F06 (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Dongle/<HideRoutine>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideRoutineU3Ed__21__ctor_m27560F3886064C488BDF6A4D53B5F546096C707A (U3CHideRoutineU3Ed__21_tB6C40703953E23A8733DF758440117CE4068AA37* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Dongle::LevelUpRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dongle_LevelUpRoutine_mF4BC821475E486535B0EB4671F1BE43DE5BDDEAC (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Dongle::MaxLevelUpRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dongle_MaxLevelUpRoutine_mC8E605D290413F55F2B5952541B46FA12BF6C73A (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) ;
// System.Void Dongle/<LevelUpRoutine>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelUpRoutineU3Ed__23__ctor_mF10B6CA9D79A83563558FCC7C7884C2741E09D17 (U3CLevelUpRoutineU3Ed__23_t8A1EBFF3FE194162F76AE049E11C72B3458C64AB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Dongle/<MaxLevelUpRoutine>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxLevelUpRoutineU3Ed__24__ctor_m3F4F7791E4299DBD3D383E743810AD93BE86FE81 (U3CMaxLevelUpRoutineU3Ed__24_t655DA072E219A2EC1DB63BC5548CB71A866B19FF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void GameManager::sfxPlay(GameManager/Sfx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_sfxPlay_m5F61BEE1035538ED92B7C730225D00904A1FA229 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Dongle>::.ctor()
inline void List_1__ctor_m960E15B2AF69220E9BB7EE9B11E794E786FE1B85 (List_1_tECCBA39574C60087B55868514633C69C551BD5A6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tECCBA39574C60087B55868514633C69C551BD5A6*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor()
inline void List_1__ctor_m39B562589EB31E915F2D6EFE2A0F6DA287F65651 (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Dongle GameManager::MakeDongle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* GameManager_MakeDongle_m89CDE01AA3A8EBE8F2CA2A144E563FD72BC80168 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Count()
inline int32_t List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_inline (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Add(T)
inline void List_1_Add_m732C0B8B5388A5B81C39A2A8969D0C160692A070_inline (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Dongle>::get_Count()
inline int32_t List_1_get_Count_m0489C841C5F215662090B9EFDE70E57407262522_inline (List_1_tECCBA39574C60087B55868514633C69C551BD5A6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tECCBA39574C60087B55868514633C69C551BD5A6*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Dongle>::Add(T)
inline void List_1_Add_mF2C36C7CAE511950255288A3B55D031935E0B34F_inline (List_1_tECCBA39574C60087B55868514633C69C551BD5A6* __this, Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tECCBA39574C60087B55868514633C69C551BD5A6*, Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<Dongle>::get_Item(System.Int32)
inline Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* List_1_get_Item_m8703BBD474545AA0D6B24E86A053BB4D936853E7 (List_1_tECCBA39574C60087B55868514633C69C551BD5A6* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* (*) (List_1_tECCBA39574C60087B55868514633C69C551BD5A6*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// Dongle GameManager::GetDongle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* GameManager_GetDongle_m75DEB90BB644636080BCA751DFBC414526B96878 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void GameManager/<WaitNext>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitNextU3Ed__29__ctor_m80BDAC9595BFF53BC41AE6AACFD8578CFAA8EBB4 (U3CWaitNextU3Ed__29_t2BB9095145B7942A19724648370115E5F1BA9618* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Dongle::Drag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_Drag_m71B14AFBB45804D6948EE5631E360A7F3196EA01 (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) ;
// System.Void Dongle::Drop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_Drop_mBE861FEF5316295085128BCD1DD1AFECDA3DDFE7 (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) ;
// System.Void GameManager/<GameOverRoutine>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverRoutineU3Ed__33__ctor_mA4A30125C7465893B53BF98A5ADA183D36025F08 (U3CGameOverRoutineU3Ed__33_t4F102CE97E0A82F2C7311CCD772AFC50151A553A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameManager/<ResetCoroutine>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetCoroutineU3Ed__35__ctor_m403CC98C2F79B32DF34009061F53A957C7A27880 (U3CResetCoroutineU3Ed__35_t4262C7C03C7833BEBEB0C488181872BC3951D82D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void GameManager::NextDongle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_NextDongle_m4A9B73364AF118C93B28DD2D4E72F9F9FF2E15F3 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<Dongle>()
inline DongleU5BU5D_t1B1895BF1D05A6F1DB9FB5C44D13C72DD13F7B92* Object_FindObjectsOfType_TisDongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95_mBE1602039BB5FB804A3492A6537E86D22FF44F64 (const RuntimeMethod* method)
{
	return ((  DongleU5BU5D_t1B1895BF1D05A6F1DB9FB5C44D13C72DD13F7B92* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
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
// System.Void ReadmeBE6::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadmeBE6__ctor_m429FF1FAF4CF6698B38215B22283C5D23F432E6F (ReadmeBE6_tD2A0A54EB197CD951E73133FF2FE20CC1F3EB5F1* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void ReadmeBE6/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m0B2D42705BBD699184C6DC36764EB64BAEC01E4F (Section_t560344319A65C3C41A3223D044F69D3A3AFE3611* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Dongle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_Awake_m408CD5900E89D97B8AA1DFC27280445F76311640 (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_m1E30A71856359306D1F0E9E59CE75B25210FE16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigid = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rigid_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigid_11), (void*)L_0);
		// circle = GetComponent<CircleCollider2D>();
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_1;
		L_1 = Component_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_m1E30A71856359306D1F0E9E59CE75B25210FE16F(__this, Component_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_m1E30A71856359306D1F0E9E59CE75B25210FE16F_RuntimeMethod_var);
		__this->___circle_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___circle_12), (void*)L_1);
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_13), (void*)L_2);
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_14), (void*)L_3);
		// }
		return;
	}
}
// System.Void Dongle::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_OnEnable_m9E7243F84965A2BAC741CB5438DA7F70A59FB180 (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetInteger("Level", level);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_13;
		int32_t L_1 = __this->___level_6;
		NullCheck(L_0);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_0, _stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, L_1, NULL);
		// }
		return;
	}
}
// System.Void Dongle::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_OnDisable_m96776AB0D649E4EFEB1B16812E2D4E3D4F38355F (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) 
{
	{
		// level = 0;
		__this->___level_6 = 0;
		// isDrag = false;
		__this->___isDrag_7 = (bool)0;
		// isMerge = false;
		__this->___isMerge_8 = (bool)0;
		// isAttach = false;
		__this->___isAttach_9 = (bool)0;
		// transform.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		// transform.localRotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_2);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_2, L_3, NULL);
		// transform.localScale = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_4);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_5, NULL);
		// rigid.simulated = false;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___rigid_11;
		NullCheck(L_6);
		Rigidbody2D_set_simulated_m38E0BD6581E907DD87059034C4B2E8D47BBFE71D(L_6, (bool)0, NULL);
		// rigid.velocity = Vector2.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_7 = __this->___rigid_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_7);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_7, L_8, NULL);
		// rigid.angularVelocity = 0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_9 = __this->___rigid_11;
		NullCheck(L_9);
		Rigidbody2D_set_angularVelocity_mFC06FB14E69DD4847F27E614900D22317AA5A390(L_9, (0.0f), NULL);
		// circle.enabled = true;
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_10 = __this->___circle_12;
		NullCheck(L_10);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Dongle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_Update_m8A0AA5295BB4E1BE54D4BCEFE1EC539FF4A7DF6E (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if(isDrag)
		bool L_0 = __this->___isDrag_7;
		if (!L_0)
		{
			goto IL_00b2;
		}
	}
	{
		// Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_1, L_2, NULL);
		V_0 = L_3;
		// float leftBorder = -4.2f + transform.localScale.x / 2f; // (???? position.x) + (???? ???/2) + (?????? ???/2)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		float L_6 = L_5.___x_2;
		V_1 = ((float)il2cpp_codegen_add((-4.19999981f), ((float)(L_6/(2.0f)))));
		// float rightBorder = 4.2f - transform.localScale.x / 2f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_7, NULL);
		float L_9 = L_8.___x_2;
		V_2 = ((float)il2cpp_codegen_subtract((4.19999981f), ((float)(L_9/(2.0f)))));
		// if (mousePos.x < leftBorder)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___x_2;
		float L_12 = V_1;
		if ((!(((float)L_11) < ((float)L_12))))
		{
			goto IL_0068;
		}
	}
	{
		// mousePos.x = leftBorder;
		float L_13 = V_1;
		(&V_0)->___x_2 = L_13;
		goto IL_0079;
	}

IL_0068:
	{
		// else if (mousePos.x > rightBorder)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		float L_15 = L_14.___x_2;
		float L_16 = V_2;
		if ((!(((float)L_15) > ((float)L_16))))
		{
			goto IL_0079;
		}
	}
	{
		// mousePos.x = rightBorder;
		float L_17 = V_2;
		(&V_0)->___x_2 = L_17;
	}

IL_0079:
	{
		// mousePos.y = 8;
		(&V_0)->___y_3 = (8.0f);
		// mousePos.z = 0;
		(&V_0)->___z_4 = (0.0f);
		// transform.position = Vector3.Lerp(transform.position, mousePos, 0.2f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_20, L_21, (0.200000003f), NULL);
		NullCheck(L_18);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_22, NULL);
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void Dongle::Drag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_Drag_m71B14AFBB45804D6948EE5631E360A7F3196EA01 (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) 
{
	{
		// isDrag = true;
		__this->___isDrag_7 = (bool)1;
		// }
		return;
	}
}
// System.Void Dongle::Drop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_Drop_mBE861FEF5316295085128BCD1DD1AFECDA3DDFE7 (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) 
{
	{
		// isDrag = false;
		__this->___isDrag_7 = (bool)0;
		// rigid.simulated = true;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rigid_11;
		NullCheck(L_0);
		Rigidbody2D_set_simulated_m38E0BD6581E907DD87059034C4B2E8D47BBFE71D(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Dongle::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_OnCollisionEnter2D_m89E92F797EF0D508CC078147E25A9109B2DAEC5A (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DED948F28F76D821EC6125D1CAD3EC1A88A6DA7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine("AttachRoutine");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral0DED948F28F76D821EC6125D1CAD3EC1A88A6DA7, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Dongle::AttachRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dongle_AttachRoutine_m56FE096D6801C17C97619CB99F95E5438DA30EA5 (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAttachRoutineU3Ed__18_t8BEC50FF94F1974B4767D4CD2B0ED5B6D4A4407F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAttachRoutineU3Ed__18_t8BEC50FF94F1974B4767D4CD2B0ED5B6D4A4407F* L_0 = (U3CAttachRoutineU3Ed__18_t8BEC50FF94F1974B4767D4CD2B0ED5B6D4A4407F*)il2cpp_codegen_object_new(U3CAttachRoutineU3Ed__18_t8BEC50FF94F1974B4767D4CD2B0ED5B6D4A4407F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAttachRoutineU3Ed__18__ctor_m8EDCC890B1B779AC0F2B102F4A58AA4A86EB5725(L_0, 0, NULL);
		U3CAttachRoutineU3Ed__18_t8BEC50FF94F1974B4767D4CD2B0ED5B6D4A4407F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Dongle::OnCollisionStay2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_OnCollisionStay2D_mA4D1209D43A1C9E123D2165D4FB5CF9F50E410E9 (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95_mC79380D38C5757F457C7E1FF66E9C09EC5267B28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6376E1DF1E53CE3F0C69EF6F3653984E209E23B6);
		s_Il2CppMethodInitialized = true;
	}
	Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// if(collision.gameObject.tag == "Dongle")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral6376E1DF1E53CE3F0C69EF6F3653984E209E23B6, NULL);
		if (!L_3)
		{
			goto IL_00ae;
		}
	}
	{
		// Dongle other = collision.gameObject.GetComponent<Dongle>();
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_4, NULL);
		NullCheck(L_5);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_6;
		L_6 = GameObject_GetComponent_TisDongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95_mC79380D38C5757F457C7E1FF66E9C09EC5267B28(L_5, GameObject_GetComponent_TisDongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95_mC79380D38C5757F457C7E1FF66E9C09EC5267B28_RuntimeMethod_var);
		V_0 = L_6;
		// if (level == other.level && !isMerge && !other.isMerge)
		int32_t L_7 = __this->___level_6;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___level_6;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_00ae;
		}
	}
	{
		bool L_10 = __this->___isMerge_8;
		if (L_10)
		{
			goto IL_00ae;
		}
	}
	{
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->___isMerge_8;
		if (L_12)
		{
			goto IL_00ae;
		}
	}
	{
		// float posX = transform.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___x_2;
		V_1 = L_15;
		// float posY = transform.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___y_3;
		V_2 = L_18;
		// float otherX = other.transform.position.x;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_19 = V_0;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		float L_22 = L_21.___x_2;
		V_3 = L_22;
		// float otherY = other.transform.position.y;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_23 = V_0;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		float L_26 = L_25.___y_3;
		V_4 = L_26;
		// if (posY < otherY || (posY == otherY && posX > otherX))
		float L_27 = V_2;
		float L_28 = V_4;
		if ((((float)L_27) < ((float)L_28)))
		{
			goto IL_0097;
		}
	}
	{
		float L_29 = V_2;
		float L_30 = V_4;
		if ((!(((float)L_29) == ((float)L_30))))
		{
			goto IL_00ae;
		}
	}
	{
		float L_31 = V_1;
		float L_32 = V_3;
		if ((!(((float)L_31) > ((float)L_32))))
		{
			goto IL_00ae;
		}
	}

IL_0097:
	{
		// other.Hide(transform.position);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_33 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		NullCheck(L_33);
		Dongle_Hide_mC010A263D9DD8C888AC8FC555D4B25E8B66432DF(L_33, L_35, NULL);
		// LevelUp();
		Dongle_LevelUp_mCBC48026AF038CD733F6AF16C6E46BA24D618464(__this, NULL);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void Dongle::Hide(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_Hide_mC010A263D9DD8C888AC8FC555D4B25E8B66432DF (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos0, const RuntimeMethod* method) 
{
	{
		// isMerge = true;
		__this->___isMerge_8 = (bool)1;
		// rigid.simulated = false;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rigid_11;
		NullCheck(L_0);
		Rigidbody2D_set_simulated_m38E0BD6581E907DD87059034C4B2E8D47BBFE71D(L_0, (bool)0, NULL);
		// circle.enabled = false;
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_1 = __this->___circle_12;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// if (targetPos == Vector3.up * 100)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___targetPos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (100.0f), NULL);
		bool L_5;
		L_5 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		// EffectPlay();
		Dongle_EffectPlay_m74991178A2B9B35DAD5D7EE68587B81FA75BF035(__this, NULL);
	}

IL_003c:
	{
		// StartCoroutine(HideRoutine(targetPos));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___targetPos0;
		RuntimeObject* L_7;
		L_7 = Dongle_HideRoutine_mA750690CB80BD6C548393A53153CACD684117F06(__this, L_6, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Dongle::HideRoutine(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dongle_HideRoutine_mA750690CB80BD6C548393A53153CACD684117F06 (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CHideRoutineU3Ed__21_tB6C40703953E23A8733DF758440117CE4068AA37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CHideRoutineU3Ed__21_tB6C40703953E23A8733DF758440117CE4068AA37* L_0 = (U3CHideRoutineU3Ed__21_tB6C40703953E23A8733DF758440117CE4068AA37*)il2cpp_codegen_object_new(U3CHideRoutineU3Ed__21_tB6C40703953E23A8733DF758440117CE4068AA37_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CHideRoutineU3Ed__21__ctor_m27560F3886064C488BDF6A4D53B5F546096C707A(L_0, 0, NULL);
		U3CHideRoutineU3Ed__21_tB6C40703953E23A8733DF758440117CE4068AA37* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CHideRoutineU3Ed__21_tB6C40703953E23A8733DF758440117CE4068AA37* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___targetPos0;
		NullCheck(L_2);
		L_2->___targetPos_2 = L_3;
		return L_2;
	}
}
// System.Void Dongle::LevelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_LevelUp_mCBC48026AF038CD733F6AF16C6E46BA24D618464 (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) 
{
	{
		// isMerge = true;
		__this->___isMerge_8 = (bool)1;
		// rigid.velocity = Vector2.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rigid_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_0, L_1, NULL);
		// rigid.angularVelocity = 0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___rigid_11;
		NullCheck(L_2);
		Rigidbody2D_set_angularVelocity_mFC06FB14E69DD4847F27E614900D22317AA5A390(L_2, (0.0f), NULL);
		// if (level < 7)
		int32_t L_3 = __this->___level_6;
		if ((((int32_t)L_3) >= ((int32_t)7)))
		{
			goto IL_003e;
		}
	}
	{
		// StartCoroutine(LevelUpRoutine());
		RuntimeObject* L_4;
		L_4 = Dongle_LevelUpRoutine_mF4BC821475E486535B0EB4671F1BE43DE5BDDEAC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		return;
	}

IL_003e:
	{
		// StartCoroutine(MaxLevelUpRoutine());
		RuntimeObject* L_6;
		L_6 = Dongle_MaxLevelUpRoutine_mC8E605D290413F55F2B5952541B46FA12BF6C73A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Dongle::LevelUpRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dongle_LevelUpRoutine_mF4BC821475E486535B0EB4671F1BE43DE5BDDEAC (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLevelUpRoutineU3Ed__23_t8A1EBFF3FE194162F76AE049E11C72B3458C64AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLevelUpRoutineU3Ed__23_t8A1EBFF3FE194162F76AE049E11C72B3458C64AB* L_0 = (U3CLevelUpRoutineU3Ed__23_t8A1EBFF3FE194162F76AE049E11C72B3458C64AB*)il2cpp_codegen_object_new(U3CLevelUpRoutineU3Ed__23_t8A1EBFF3FE194162F76AE049E11C72B3458C64AB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLevelUpRoutineU3Ed__23__ctor_mF10B6CA9D79A83563558FCC7C7884C2741E09D17(L_0, 0, NULL);
		U3CLevelUpRoutineU3Ed__23_t8A1EBFF3FE194162F76AE049E11C72B3458C64AB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Dongle::MaxLevelUpRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dongle_MaxLevelUpRoutine_mC8E605D290413F55F2B5952541B46FA12BF6C73A (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMaxLevelUpRoutineU3Ed__24_t655DA072E219A2EC1DB63BC5548CB71A866B19FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMaxLevelUpRoutineU3Ed__24_t655DA072E219A2EC1DB63BC5548CB71A866B19FF* L_0 = (U3CMaxLevelUpRoutineU3Ed__24_t655DA072E219A2EC1DB63BC5548CB71A866B19FF*)il2cpp_codegen_object_new(U3CMaxLevelUpRoutineU3Ed__24_t655DA072E219A2EC1DB63BC5548CB71A866B19FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMaxLevelUpRoutineU3Ed__24__ctor_m3F4F7791E4299DBD3D383E743810AD93BE86FE81(L_0, 0, NULL);
		U3CMaxLevelUpRoutineU3Ed__24_t655DA072E219A2EC1DB63BC5548CB71A866B19FF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Dongle::EffectPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_EffectPlay_m74991178A2B9B35DAD5D7EE68587B81FA75BF035 (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) 
{
	{
		// effect.transform.position = transform.position;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___effect_5;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_3, NULL);
		// effect.transform.localScale = transform.localScale;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4 = __this->___effect_5;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_7, NULL);
		// effect.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = __this->___effect_5;
		NullCheck(L_8);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_8, NULL);
		// }
		return;
	}
}
// System.Void Dongle::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_OnTriggerStay2D_m676E8C452421ADAF2064FA187DFA9C033D011302 (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.tag == "Finish")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5, NULL);
		if (!L_2)
		{
			goto IL_0068;
		}
	}
	{
		// deadTime += Time.deltaTime;
		float L_3 = __this->___deadTime_10;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___deadTime_10 = ((float)il2cpp_codegen_add(L_3, L_4));
		// if (deadTime > 2)
		float L_5 = __this->___deadTime_10;
		if ((!(((float)L_5) > ((float)(2.0f)))))
		{
			goto IL_0050;
		}
	}
	{
		// spriteRenderer.color = new Color(0.9f, 0.2f, 0.2f);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___spriteRenderer_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_7), (0.899999976f), (0.200000003f), (0.200000003f), /*hidden argument*/NULL);
		NullCheck(L_6);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_6, L_7, NULL);
	}

IL_0050:
	{
		// if (deadTime > 3)
		float L_8 = __this->___deadTime_10;
		if ((!(((float)L_8) > ((float)(3.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		// manager.GameOver();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_9 = __this->___manager_4;
		NullCheck(L_9);
		GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625(L_9, NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void Dongle::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle_OnTriggerExit2D_m83C72DA4A215415F6A1ADF5F89945A18B5DCAAC2 (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.tag == "Finish")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// deadTime = 0;
		__this->___deadTime_10 = (0.0f);
		// spriteRenderer.color = Color.white;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___spriteRenderer_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		NullCheck(L_3);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_3, L_4, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Dongle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dongle__ctor_mDC0EAB96A253CC0A8A38DFC23742720AE99CD086 (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Dongle/<AttachRoutine>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttachRoutineU3Ed__18__ctor_m8EDCC890B1B779AC0F2B102F4A58AA4A86EB5725 (U3CAttachRoutineU3Ed__18_t8BEC50FF94F1974B4767D4CD2B0ED5B6D4A4407F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Dongle/<AttachRoutine>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttachRoutineU3Ed__18_System_IDisposable_Dispose_m76A89F0015BFDF64F59284504F82EEAC808AA39B (U3CAttachRoutineU3Ed__18_t8BEC50FF94F1974B4767D4CD2B0ED5B6D4A4407F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Dongle/<AttachRoutine>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttachRoutineU3Ed__18_MoveNext_m5B82888F158FA3D46FE5B20682411321FF79C941 (U3CAttachRoutineU3Ed__18_t8BEC50FF94F1974B4767D4CD2B0ED5B6D4A4407F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0054;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (isAttach)
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->___isAttach_9;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0028:
	{
		// isAttach = true;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_6 = V_1;
		NullCheck(L_6);
		L_6->___isAttach_9 = (bool)1;
		// manager.sfxPlay(GameManager.Sfx.Attach);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_7 = V_1;
		NullCheck(L_7);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = L_7->___manager_4;
		NullCheck(L_8);
		GameManager_sfxPlay_m5F61BEE1035538ED92B7C730225D00904A1FA229(L_8, 2, NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0054:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isAttach = false;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_10 = V_1;
		NullCheck(L_10);
		L_10->___isAttach_9 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object Dongle/<AttachRoutine>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttachRoutineU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCA1B90D8473A487BBAD6A7BBAB970144B43E2C5E (U3CAttachRoutineU3Ed__18_t8BEC50FF94F1974B4767D4CD2B0ED5B6D4A4407F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Dongle/<AttachRoutine>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttachRoutineU3Ed__18_System_Collections_IEnumerator_Reset_mB5743713C11520973892A9BC334BECE6BA003FA1 (U3CAttachRoutineU3Ed__18_t8BEC50FF94F1974B4767D4CD2B0ED5B6D4A4407F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttachRoutineU3Ed__18_System_Collections_IEnumerator_Reset_mB5743713C11520973892A9BC334BECE6BA003FA1_RuntimeMethod_var)));
	}
}
// System.Object Dongle/<AttachRoutine>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttachRoutineU3Ed__18_System_Collections_IEnumerator_get_Current_m53E0E849D9FA4926427F8C79BA86BFC97C279691 (U3CAttachRoutineU3Ed__18_t8BEC50FF94F1974B4767D4CD2B0ED5B6D4A4407F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Dongle/<HideRoutine>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideRoutineU3Ed__21__ctor_m27560F3886064C488BDF6A4D53B5F546096C707A (U3CHideRoutineU3Ed__21_tB6C40703953E23A8733DF758440117CE4068AA37* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Dongle/<HideRoutine>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideRoutineU3Ed__21_System_IDisposable_Dispose_mDB27F373C2EAA3A925DD68858416D9F37B217988 (U3CHideRoutineU3Ed__21_tB6C40703953E23A8733DF758440117CE4068AA37* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Dongle/<HideRoutine>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CHideRoutineU3Ed__21_MoveNext_mE81B3B62835EBC65E4BA3A6C290B472C56141575 (U3CHideRoutineU3Ed__21_tB6C40703953E23A8733DF758440117CE4068AA37* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00d2;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int frameCount = 0;
		__this->___U3CframeCountU3E5__2_4 = 0;
		goto IL_00d9;
	}

IL_002d:
	{
		// frameCount++;
		int32_t L_4 = __this->___U3CframeCountU3E5__2_4;
		V_2 = L_4;
		int32_t L_5 = V_2;
		__this->___U3CframeCountU3E5__2_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if (targetPos != Vector3.up * 100)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___targetPos_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_7, (100.0f), NULL);
		bool L_9;
		L_9 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0081;
		}
	}
	{
		// transform.position = Vector3.Lerp(transform.position, targetPos, 0.5f);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_10 = V_1;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_12 = V_1;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___targetPos_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_14, L_15, (0.5f), NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_16, NULL);
		goto IL_00c2;
	}

IL_0081:
	{
		// else if (targetPos == Vector3.up * 100)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___targetPos_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_18, (100.0f), NULL);
		bool L_20;
		L_20 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_00c2;
		}
	}
	{
		// transform.localScale = Vector3.Lerp(transform.localScale, Vector3.zero, 0.2f);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_21 = V_1;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_23 = V_1;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_25, L_26, (0.200000003f), NULL);
		NullCheck(L_22);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_22, L_27, NULL);
	}

IL_00c2:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00d2:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00d9:
	{
		// while (frameCount < 20)
		int32_t L_28 = __this->___U3CframeCountU3E5__2_4;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)20))))
		{
			goto IL_002d;
		}
	}
	{
		// manager.score += (int)Mathf.Pow(2, level);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_29 = V_1;
		NullCheck(L_29);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_30 = L_29->___manager_4;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_31 = L_30;
		NullCheck(L_31);
		int32_t L_32 = L_31->___score_5;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = L_33->___level_6;
		float L_35;
		L_35 = powf((2.0f), ((float)L_34));
		NullCheck(L_31);
		L_31->___score_5 = ((int32_t)il2cpp_codegen_add(L_32, il2cpp_codegen_cast_double_to_int<int32_t>(L_35)));
		// isMerge = false;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_36 = V_1;
		NullCheck(L_36);
		L_36->___isMerge_8 = (bool)0;
		// gameObject.SetActive(false);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_37 = V_1;
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_37, NULL);
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Dongle/<HideRoutine>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHideRoutineU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8B55AA5CE8B6479113F85143B40BC6C541600C3B (U3CHideRoutineU3Ed__21_tB6C40703953E23A8733DF758440117CE4068AA37* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Dongle/<HideRoutine>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideRoutineU3Ed__21_System_Collections_IEnumerator_Reset_m3D6ED911640A1E1880C540496002AD1B41B2D4BC (U3CHideRoutineU3Ed__21_tB6C40703953E23A8733DF758440117CE4068AA37* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHideRoutineU3Ed__21_System_Collections_IEnumerator_Reset_m3D6ED911640A1E1880C540496002AD1B41B2D4BC_RuntimeMethod_var)));
	}
}
// System.Object Dongle/<HideRoutine>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHideRoutineU3Ed__21_System_Collections_IEnumerator_get_Current_mB57BA2528C3B2138BBDCBF42E76B322172279327 (U3CHideRoutineU3Ed__21_tB6C40703953E23A8733DF758440117CE4068AA37* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Dongle/<LevelUpRoutine>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelUpRoutineU3Ed__23__ctor_mF10B6CA9D79A83563558FCC7C7884C2741E09D17 (U3CLevelUpRoutineU3Ed__23_t8A1EBFF3FE194162F76AE049E11C72B3458C64AB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Dongle/<LevelUpRoutine>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelUpRoutineU3Ed__23_System_IDisposable_Dispose_m5A8425B2AA2DD41D5B5B9ECE1AE346B240649A5B (U3CLevelUpRoutineU3Ed__23_t8A1EBFF3FE194162F76AE049E11C72B3458C64AB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Dongle/<LevelUpRoutine>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLevelUpRoutineU3Ed__23_MoveNext_m118181C82440DDED58223A7D15540DE71FA8121B (U3CLevelUpRoutineU3Ed__23_t8A1EBFF3FE194162F76AE049E11C72B3458C64AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_008c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.2f); // ??????? ???? ????
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// anim.SetInteger("Level", level + 1);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___anim_13;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___level_6;
		NullCheck(L_5);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_5, _stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, ((int32_t)il2cpp_codegen_add(L_7, 1)), NULL);
		// EffectPlay();
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_8 = V_1;
		NullCheck(L_8);
		Dongle_EffectPlay_m74991178A2B9B35DAD5D7EE68587B81FA75BF035(L_8, NULL);
		// manager.sfxPlay(GameManager.Sfx.LevelUp);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_9 = V_1;
		NullCheck(L_9);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_10 = L_9->___manager_4;
		NullCheck(L_10);
		GameManager_sfxPlay_m5F61BEE1035538ED92B7C730225D00904A1FA229(L_10, 0, NULL);
		// yield return new WaitForSeconds(0.2f); // ????????? ?????? ??? ????
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_008c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// level++;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_12 = V_1;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->___level_6;
		NullCheck(L_12);
		L_12->___level_6 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		// manager.maxLevel = Mathf.Max(level, manager.maxLevel);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_15 = V_1;
		NullCheck(L_15);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_16 = L_15->___manager_4;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18 = L_17->___level_6;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_19 = V_1;
		NullCheck(L_19);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_20 = L_19->___manager_4;
		NullCheck(L_20);
		int32_t L_21 = L_20->___maxLevel_6;
		int32_t L_22;
		L_22 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_18, L_21, NULL);
		NullCheck(L_16);
		L_16->___maxLevel_6 = L_22;
		// isMerge = false;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_23 = V_1;
		NullCheck(L_23);
		L_23->___isMerge_8 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object Dongle/<LevelUpRoutine>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLevelUpRoutineU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m24F59A12AD8A361ABCA1A45B4848238F35467043 (U3CLevelUpRoutineU3Ed__23_t8A1EBFF3FE194162F76AE049E11C72B3458C64AB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Dongle/<LevelUpRoutine>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelUpRoutineU3Ed__23_System_Collections_IEnumerator_Reset_m93021FAA285155BEDC8E689D05A9AA8434422D8C (U3CLevelUpRoutineU3Ed__23_t8A1EBFF3FE194162F76AE049E11C72B3458C64AB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLevelUpRoutineU3Ed__23_System_Collections_IEnumerator_Reset_m93021FAA285155BEDC8E689D05A9AA8434422D8C_RuntimeMethod_var)));
	}
}
// System.Object Dongle/<LevelUpRoutine>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLevelUpRoutineU3Ed__23_System_Collections_IEnumerator_get_Current_m1482D92C9CB375FCB4E7D806115B90714B33F5F0 (U3CLevelUpRoutineU3Ed__23_t8A1EBFF3FE194162F76AE049E11C72B3458C64AB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Dongle/<MaxLevelUpRoutine>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxLevelUpRoutineU3Ed__24__ctor_m3F4F7791E4299DBD3D383E743810AD93BE86FE81 (U3CMaxLevelUpRoutineU3Ed__24_t655DA072E219A2EC1DB63BC5548CB71A866B19FF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Dongle/<MaxLevelUpRoutine>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxLevelUpRoutineU3Ed__24_System_IDisposable_Dispose_m974337E3D4C5C56291B5375C86C5DEFE3199356B (U3CMaxLevelUpRoutineU3Ed__24_t655DA072E219A2EC1DB63BC5548CB71A866B19FF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Dongle/<MaxLevelUpRoutine>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMaxLevelUpRoutineU3Ed__24_MoveNext_m17E7E3E24946A7A9EEA46FB0C681E3F796C91699 (U3CMaxLevelUpRoutineU3Ed__24_t655DA072E219A2EC1DB63BC5548CB71A866B19FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.2f); // ??????? ???? ????
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// EffectPlay();
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_5 = V_1;
		NullCheck(L_5);
		Dongle_EffectPlay_m74991178A2B9B35DAD5D7EE68587B81FA75BF035(L_5, NULL);
		// manager.sfxPlay(GameManager.Sfx.LevelUp);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_6 = V_1;
		NullCheck(L_6);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = L_6->___manager_4;
		NullCheck(L_7);
		GameManager_sfxPlay_m5F61BEE1035538ED92B7C730225D00904A1FA229(L_7, 0, NULL);
		// transform.gameObject.SetActive(false);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_8 = V_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Dongle/<MaxLevelUpRoutine>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMaxLevelUpRoutineU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m43FC662FD178F59808D94050FC07E3FE263AF64F (U3CMaxLevelUpRoutineU3Ed__24_t655DA072E219A2EC1DB63BC5548CB71A866B19FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Dongle/<MaxLevelUpRoutine>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMaxLevelUpRoutineU3Ed__24_System_Collections_IEnumerator_Reset_m039807FE40C8AF0269C756ADE16FAFA7DE4A7419 (U3CMaxLevelUpRoutineU3Ed__24_t655DA072E219A2EC1DB63BC5548CB71A866B19FF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMaxLevelUpRoutineU3Ed__24_System_Collections_IEnumerator_Reset_m039807FE40C8AF0269C756ADE16FAFA7DE4A7419_RuntimeMethod_var)));
	}
}
// System.Object Dongle/<MaxLevelUpRoutine>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMaxLevelUpRoutineU3Ed__24_System_Collections_IEnumerator_get_Current_m6E04F994F33647C7175124E5F95EF67B9E8B6086 (U3CMaxLevelUpRoutineU3Ed__24_t655DA072E219A2EC1DB63BC5548CB71A866B19FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m39B562589EB31E915F2D6EFE2A0F6DA287F65651_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m960E15B2AF69220E9BB7EE9B11E794E786FE1B85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tECCBA39574C60087B55868514633C69C551BD5A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF22B0F04E5799D11A8C07A1A569FD3A0E5C9FC81);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325(((int32_t)60), NULL);
		// donglePool = new List<Dongle>();
		List_1_tECCBA39574C60087B55868514633C69C551BD5A6* L_0 = (List_1_tECCBA39574C60087B55868514633C69C551BD5A6*)il2cpp_codegen_object_new(List_1_tECCBA39574C60087B55868514633C69C551BD5A6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m960E15B2AF69220E9BB7EE9B11E794E786FE1B85(L_0, List_1__ctor_m960E15B2AF69220E9BB7EE9B11E794E786FE1B85_RuntimeMethod_var);
		__this->___donglePool_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___donglePool_9), (void*)L_0);
		// effectPool = new List<ParticleSystem>();
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_1 = (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*)il2cpp_codegen_object_new(List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m39B562589EB31E915F2D6EFE2A0F6DA287F65651(L_1, List_1__ctor_m39B562589EB31E915F2D6EFE2A0F6DA287F65651_RuntimeMethod_var);
		__this->___effectPool_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectPool_12), (void*)L_1);
		// for (int index = 0; index < poolSize; index++)
		V_0 = 0;
		goto IL_002c;
	}

IL_0021:
	{
		// MakeDongle();
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_2;
		L_2 = GameManager_MakeDongle_m89CDE01AA3A8EBE8F2CA2A144E563FD72BC80168(__this, NULL);
		// for (int index = 0; index < poolSize; index++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_002c:
	{
		// for (int index = 0; index < poolSize; index++)
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___poolSize_13;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0021;
		}
	}
	{
		// if(PlayerPrefs.HasKey("MaxScore") == false)
		bool L_6;
		L_6 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteralF22B0F04E5799D11A8C07A1A569FD3A0E5C9FC81, NULL);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// PlayerPrefs.SetInt("MaxScore", 0);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralF22B0F04E5799D11A8C07A1A569FD3A0E5C9FC81, 0, NULL);
	}

IL_004c:
	{
		// maxScoreText.text = PlayerPrefs.GetInt("MaxScore").ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___maxScoreText_23;
		int32_t L_8;
		L_8 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteralF22B0F04E5799D11A8C07A1A569FD3A0E5C9FC81, NULL);
		V_1 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_9);
		// }
		return;
	}
}
// System.Void GameManager::GameStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameStart_m13D7CF637F648EE27334A03FF9B2132DA21A643B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0A757C45A80FBE4F719FEF43C74B30E6E81CC63);
		s_Il2CppMethodInitialized = true;
	}
	{
		// line.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___line_25;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// bottom.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___bottom_26;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// scoreText.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___scoreText_22;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// maxScoreText.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___maxScoreText_23;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// StartGroup.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___StartGroup_20;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// bgmPlayer.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___bgmPlayer_16;
		NullCheck(L_7);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_7, NULL);
		// sfxPlay(Sfx.Button);
		GameManager_sfxPlay_m5F61BEE1035538ED92B7C730225D00904A1FA229(__this, 3, NULL);
		// Invoke("NextDongle", 1.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralE0A757C45A80FBE4F719FEF43C74B30E6E81CC63, (1.5f), NULL);
		// }
		return;
	}
}
// Dongle GameManager::MakeDongle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* GameManager_MakeDongle_m89CDE01AA3A8EBE8F2CA2A144E563FD72BC80168 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95_mC79380D38C5757F457C7E1FF66E9C09EC5267B28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m732C0B8B5388A5B81C39A2A8969D0C160692A070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF2C36C7CAE511950255288A3B55D031935E0B34F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0489C841C5F215662090B9EFDE70E57407262522_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265958279396D0412F55705E9479ADCBD98E3980);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ADEB86295B4AD2CAF5F5890AB66A79793E9E6C3);
		s_Il2CppMethodInitialized = true;
	}
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_0 = NULL;
	Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// GameObject instantEffectObj = Instantiate(effectPrefab, effectGroup);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___effectPrefab_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___effectGroup_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_0, L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		// instantEffectObj.name = "Effect " + effectPool.Count;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_4 = __this->___effectPool_12;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_inline(L_4, List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_RuntimeMethod_var);
		V_2 = L_5;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3ADEB86295B4AD2CAF5F5890AB66A79793E9E6C3, L_6, NULL);
		NullCheck(L_3);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_3, L_7, NULL);
		// ParticleSystem instantEffect = instantEffectObj.GetComponent<ParticleSystem>();
		NullCheck(L_3);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8;
		L_8 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_3, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		V_0 = L_8;
		// effectPool.Add(instantEffect);
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_9 = __this->___effectPool_12;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10 = V_0;
		NullCheck(L_9);
		List_1_Add_m732C0B8B5388A5B81C39A2A8969D0C160692A070_inline(L_9, L_10, List_1_Add_m732C0B8B5388A5B81C39A2A8969D0C160692A070_RuntimeMethod_var);
		// GameObject instantDongleObj = Instantiate(donglePrefab, dongleGroup);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___donglePrefab_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___dongleGroup_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_11, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		// instantDongleObj.name = "Dongle " + donglePool.Count;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13;
		List_1_tECCBA39574C60087B55868514633C69C551BD5A6* L_15 = __this->___donglePool_9;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m0489C841C5F215662090B9EFDE70E57407262522_inline(L_15, List_1_get_Count_m0489C841C5F215662090B9EFDE70E57407262522_RuntimeMethod_var);
		V_2 = L_16;
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_18;
		L_18 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral265958279396D0412F55705E9479ADCBD98E3980, L_17, NULL);
		NullCheck(L_14);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_14, L_18, NULL);
		// Dongle instantDongle = instantDongleObj.GetComponent<Dongle>();
		NullCheck(L_14);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_19;
		L_19 = GameObject_GetComponent_TisDongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95_mC79380D38C5757F457C7E1FF66E9C09EC5267B28(L_14, GameObject_GetComponent_TisDongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95_mC79380D38C5757F457C7E1FF66E9C09EC5267B28_RuntimeMethod_var);
		V_1 = L_19;
		// instantDongle.manager = this;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_20 = V_1;
		NullCheck(L_20);
		L_20->___manager_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___manager_4), (void*)__this);
		// instantDongle.effect = instantEffect;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_21 = V_1;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_22 = V_0;
		NullCheck(L_21);
		L_21->___effect_5 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___effect_5), (void*)L_22);
		// donglePool.Add(instantDongle);
		List_1_tECCBA39574C60087B55868514633C69C551BD5A6* L_23 = __this->___donglePool_9;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_24 = V_1;
		NullCheck(L_23);
		List_1_Add_mF2C36C7CAE511950255288A3B55D031935E0B34F_inline(L_23, L_24, List_1_Add_mF2C36C7CAE511950255288A3B55D031935E0B34F_RuntimeMethod_var);
		// return instantDongle;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_25 = V_1;
		return L_25;
	}
}
// Dongle GameManager::GetDongle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* GameManager_GetDongle_m75DEB90BB644636080BCA751DFBC414526B96878 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0489C841C5F215662090B9EFDE70E57407262522_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8703BBD474545AA0D6B24E86A053BB4D936853E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int index = 0; index < donglePool.Count; index++)
		V_0 = 0;
		goto IL_0051;
	}

IL_0004:
	{
		// poolCursor = (poolCursor + 1) % donglePool.Count;
		int32_t L_0 = __this->___poolCursor_14;
		List_1_tECCBA39574C60087B55868514633C69C551BD5A6* L_1 = __this->___donglePool_9;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m0489C841C5F215662090B9EFDE70E57407262522_inline(L_1, List_1_get_Count_m0489C841C5F215662090B9EFDE70E57407262522_RuntimeMethod_var);
		__this->___poolCursor_14 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_0, 1))%L_2));
		// if (donglePool[poolCursor].gameObject.activeSelf == false)
		List_1_tECCBA39574C60087B55868514633C69C551BD5A6* L_3 = __this->___donglePool_9;
		int32_t L_4 = __this->___poolCursor_14;
		NullCheck(L_3);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_5;
		L_5 = List_1_get_Item_m8703BBD474545AA0D6B24E86A053BB4D936853E7(L_3, L_4, List_1_get_Item_m8703BBD474545AA0D6B24E86A053BB4D936853E7_RuntimeMethod_var);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_6, NULL);
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// return donglePool[poolCursor];
		List_1_tECCBA39574C60087B55868514633C69C551BD5A6* L_8 = __this->___donglePool_9;
		int32_t L_9 = __this->___poolCursor_14;
		NullCheck(L_8);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_10;
		L_10 = List_1_get_Item_m8703BBD474545AA0D6B24E86A053BB4D936853E7(L_8, L_9, List_1_get_Item_m8703BBD474545AA0D6B24E86A053BB4D936853E7_RuntimeMethod_var);
		return L_10;
	}

IL_004d:
	{
		// for (int index = 0; index < donglePool.Count; index++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0051:
	{
		// for (int index = 0; index < donglePool.Count; index++)
		int32_t L_12 = V_0;
		List_1_tECCBA39574C60087B55868514633C69C551BD5A6* L_13 = __this->___donglePool_9;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m0489C841C5F215662090B9EFDE70E57407262522_inline(L_13, List_1_get_Count_m0489C841C5F215662090B9EFDE70E57407262522_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0004;
		}
	}
	{
		// return MakeDongle();
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_15;
		L_15 = GameManager_MakeDongle_m89CDE01AA3A8EBE8F2CA2A144E563FD72BC80168(__this, NULL);
		return L_15;
	}
}
// System.Void GameManager::NextDongle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_NextDongle_m4A9B73364AF118C93B28DD2D4E72F9F9FF2E15F3 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral579178797B22BCA81EB6F6E1E1B6F403B1151237);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isOver == true)
		bool L_0 = __this->___isOver_4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// lastDongle = GetDongle();
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_1;
		L_1 = GameManager_GetDongle_m75DEB90BB644636080BCA751DFBC414526B96878(__this, NULL);
		__this->___lastDongle_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastDongle_15), (void*)L_1);
		// lastDongle.level = Random.Range(0, maxLevel);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_2 = __this->___lastDongle_15;
		int32_t L_3 = __this->___maxLevel_6;
		int32_t L_4;
		L_4 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_3, NULL);
		NullCheck(L_2);
		L_2->___level_6 = L_4;
		// lastDongle.gameObject.SetActive(true);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_5 = __this->___lastDongle_15;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// sfxPlay(Sfx.Next);
		GameManager_sfxPlay_m5F61BEE1035538ED92B7C730225D00904A1FA229(__this, 1, NULL);
		// StartCoroutine("WaitNext");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral579178797B22BCA81EB6F6E1E1B6F403B1151237, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::WaitNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_WaitNext_mA2EE9E04E6FB6F32C2008DE7F1732ABC78D64EA4 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitNextU3Ed__29_t2BB9095145B7942A19724648370115E5F1BA9618_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitNextU3Ed__29_t2BB9095145B7942A19724648370115E5F1BA9618* L_0 = (U3CWaitNextU3Ed__29_t2BB9095145B7942A19724648370115E5F1BA9618*)il2cpp_codegen_object_new(U3CWaitNextU3Ed__29_t2BB9095145B7942A19724648370115E5F1BA9618_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitNextU3Ed__29__ctor_m80BDAC9595BFF53BC41AE6AACFD8578CFAA8EBB4(L_0, 0, NULL);
		U3CWaitNextU3Ed__29_t2BB9095145B7942A19724648370115E5F1BA9618* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::TouchDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TouchDown_m75B2E29A81F7470CF9D565021E45440785D52446 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lastDongle == null)
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_0 = __this->___lastDongle_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// lastDongle.Drag();
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_2 = __this->___lastDongle_15;
		NullCheck(L_2);
		Dongle_Drag_m71B14AFBB45804D6948EE5631E360A7F3196EA01(L_2, NULL);
		// }
		return;
	}
}
// System.Void GameManager::TouchUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TouchUp_m16586BDF82121567F7DA9632F98E732997A30C8B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lastDongle == null)
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_0 = __this->___lastDongle_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// lastDongle.Drop();
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_2 = __this->___lastDongle_15;
		NullCheck(L_2);
		Dongle_Drop_mBE861FEF5316295085128BCD1DD1AFECDA3DDFE7(L_2, NULL);
		// lastDongle = null;
		__this->___lastDongle_15 = (Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastDongle_15), (void*)(Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95*)NULL);
		// }
		return;
	}
}
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC063C639AE70F3B67ADF2554E2BBBC22ED90DB3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isOver)
		bool L_0 = __this->___isOver_4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// isOver = true;
		__this->___isOver_4 = (bool)1;
		// StartCoroutine("GameOverRoutine");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralC063C639AE70F3B67ADF2554E2BBBC22ED90DB3D, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::GameOverRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_GameOverRoutine_mA1AE41628C875079BEE2B2A60FD79B60131BDEE1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGameOverRoutineU3Ed__33_t4F102CE97E0A82F2C7311CCD772AFC50151A553A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGameOverRoutineU3Ed__33_t4F102CE97E0A82F2C7311CCD772AFC50151A553A* L_0 = (U3CGameOverRoutineU3Ed__33_t4F102CE97E0A82F2C7311CCD772AFC50151A553A*)il2cpp_codegen_object_new(U3CGameOverRoutineU3Ed__33_t4F102CE97E0A82F2C7311CCD772AFC50151A553A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGameOverRoutineU3Ed__33__ctor_mA4A30125C7465893B53BF98A5ADA183D36025F08(L_0, 0, NULL);
		U3CGameOverRoutineU3Ed__33_t4F102CE97E0A82F2C7311CCD772AFC50151A553A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Reset_m7584A67E642737B6C76C139B05D75584D2975106 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84EA46B97ADC9A7DB1B8BC36490F1D636A7DBDCE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sfxPlay(Sfx.Button);
		GameManager_sfxPlay_m5F61BEE1035538ED92B7C730225D00904A1FA229(__this, 3, NULL);
		// StartCoroutine("ResetCoroutine");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral84EA46B97ADC9A7DB1B8BC36490F1D636A7DBDCE, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::ResetCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_ResetCoroutine_m91E338967AC95F3E8A4C420EBB2B3A2E370F7A40 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CResetCoroutineU3Ed__35_t4262C7C03C7833BEBEB0C488181872BC3951D82D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CResetCoroutineU3Ed__35_t4262C7C03C7833BEBEB0C488181872BC3951D82D* L_0 = (U3CResetCoroutineU3Ed__35_t4262C7C03C7833BEBEB0C488181872BC3951D82D*)il2cpp_codegen_object_new(U3CResetCoroutineU3Ed__35_t4262C7C03C7833BEBEB0C488181872BC3951D82D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CResetCoroutineU3Ed__35__ctor_m403CC98C2F79B32DF34009061F53A957C7A27880(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void GameManager::sfxPlay(GameManager/Sfx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_sfxPlay_m5F61BEE1035538ED92B7C730225D00904A1FA229 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___type0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_005d;
			}
			case 3:
			{
				goto IL_0079;
			}
			case 4:
			{
				goto IL_0095;
			}
		}
	}
	{
		goto IL_00af;
	}

IL_001f:
	{
		// sfxPlayer[sfxCursor].clip = sfxClip[Random.Range(0, 3)];
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_1 = __this->___sfxPlayer_17;
		int32_t L_2 = __this->___sfxCursor_19;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_5 = __this->___sfxClip_18;
		int32_t L_6;
		L_6 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 3, NULL);
		NullCheck(L_5);
		int32_t L_7 = L_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_4, L_8, NULL);
		// break;
		goto IL_00af;
	}

IL_0041:
	{
		// sfxPlayer[sfxCursor].clip = sfxClip[3];
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_9 = __this->___sfxPlayer_17;
		int32_t L_10 = __this->___sfxCursor_19;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_13 = __this->___sfxClip_18;
		NullCheck(L_13);
		int32_t L_14 = 3;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_12, L_15, NULL);
		// break;
		goto IL_00af;
	}

IL_005d:
	{
		// sfxPlayer[sfxCursor].clip = sfxClip[4];
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_16 = __this->___sfxPlayer_17;
		int32_t L_17 = __this->___sfxCursor_19;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_20 = __this->___sfxClip_18;
		NullCheck(L_20);
		int32_t L_21 = 4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_19);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_19, L_22, NULL);
		// break;
		goto IL_00af;
	}

IL_0079:
	{
		// sfxPlayer[sfxCursor].clip = sfxClip[5];
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_23 = __this->___sfxPlayer_17;
		int32_t L_24 = __this->___sfxCursor_19;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_27 = __this->___sfxClip_18;
		NullCheck(L_27);
		int32_t L_28 = 5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_26);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_26, L_29, NULL);
		// break;
		goto IL_00af;
	}

IL_0095:
	{
		// sfxPlayer[sfxCursor].clip = sfxClip[6];
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_30 = __this->___sfxPlayer_17;
		int32_t L_31 = __this->___sfxCursor_19;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_34 = __this->___sfxClip_18;
		NullCheck(L_34);
		int32_t L_35 = 6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_33);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_33, L_36, NULL);
	}

IL_00af:
	{
		// sfxPlayer[sfxCursor].Play();
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_37 = __this->___sfxPlayer_17;
		int32_t L_38 = __this->___sfxCursor_19;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_40, NULL);
		// sfxCursor = (sfxCursor + 1) % sfxPlayer.Length;
		int32_t L_41 = __this->___sfxCursor_19;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_42 = __this->___sfxPlayer_17;
		NullCheck(L_42);
		__this->___sfxCursor_19 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_41, 1))%((int32_t)(((RuntimeArray*)L_42)->max_length))));
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButtonDown("Cancel"))
		bool L_0;
		L_0 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674, NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LateUpdate_m1A2595D1FD7E271BE4213CE7602FF7F2E9F80B95 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// scoreText.text = score.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___scoreText_22;
		int32_t* L_1 = (&__this->___score_5);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameManager/<WaitNext>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitNextU3Ed__29__ctor_m80BDAC9595BFF53BC41AE6AACFD8578CFAA8EBB4 (U3CWaitNextU3Ed__29_t2BB9095145B7942A19724648370115E5F1BA9618* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<WaitNext>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitNextU3Ed__29_System_IDisposable_Dispose_m54DA71178282B9CF840067978A2C4F7650E65945 (U3CWaitNextU3Ed__29_t2BB9095145B7942A19724648370115E5F1BA9618* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<WaitNext>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitNextU3Ed__29_MoveNext_m7BC27B7AE708800E43D49BD25A74238C385C4A8F (U3CWaitNextU3Ed__29_t2BB9095145B7942A19724648370115E5F1BA9618* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_003b;
			}
			case 2:
			{
				goto IL_0069;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0042;
	}

IL_002b:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003b:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0042:
	{
		// while (lastDongle != null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3 = V_1;
		NullCheck(L_3);
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_4 = L_3->___lastDongle_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		// yield return new WaitForSeconds(2.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (2.5f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0069:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// NextDongle();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = V_1;
		NullCheck(L_7);
		GameManager_NextDongle_m4A9B73364AF118C93B28DD2D4E72F9F9FF2E15F3(L_7, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<WaitNext>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitNextU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8D0B7C40844429E2304927176F0AC57851C51759 (U3CWaitNextU3Ed__29_t2BB9095145B7942A19724648370115E5F1BA9618* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<WaitNext>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitNextU3Ed__29_System_Collections_IEnumerator_Reset_m8B7E7A79C9CF53A4EB50E395D57CCAF08F356DEF (U3CWaitNextU3Ed__29_t2BB9095145B7942A19724648370115E5F1BA9618* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitNextU3Ed__29_System_Collections_IEnumerator_Reset_m8B7E7A79C9CF53A4EB50E395D57CCAF08F356DEF_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<WaitNext>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitNextU3Ed__29_System_Collections_IEnumerator_get_Current_mA63F68B29377BE924802B0B992D42FF25EE56E8D (U3CWaitNextU3Ed__29_t2BB9095145B7942A19724648370115E5F1BA9618* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void GameManager/<GameOverRoutine>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverRoutineU3Ed__33__ctor_mA4A30125C7465893B53BF98A5ADA183D36025F08 (U3CGameOverRoutineU3Ed__33_t4F102CE97E0A82F2C7311CCD772AFC50151A553A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<GameOverRoutine>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverRoutineU3Ed__33_System_IDisposable_Dispose_mDED10BE3474F2734B8020BC3292C3F32C19AA575 (U3CGameOverRoutineU3Ed__33_t4F102CE97E0A82F2C7311CCD772AFC50151A553A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<GameOverRoutine>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGameOverRoutineU3Ed__33_MoveNext_m963C99AD33D5FFA266BDFD8429E84F8ED57A8770 (U3CGameOverRoutineU3Ed__33_t4F102CE97E0A82F2C7311CCD772AFC50151A553A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisDongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95_mBE1602039BB5FB804A3492A6537E86D22FF44F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral137AB3E6CD628D78E0304D495391BD17B363E270);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF22B0F04E5799D11A8C07A1A569FD3A0E5C9FC81);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00a4;
			}
			case 2:
			{
				goto IL_00e6;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Dongle[] dongles = GameObject.FindObjectsOfType<Dongle>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DongleU5BU5D_t1B1895BF1D05A6F1DB9FB5C44D13C72DD13F7B92* L_3;
		L_3 = Object_FindObjectsOfType_TisDongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95_mBE1602039BB5FB804A3492A6537E86D22FF44F64(Object_FindObjectsOfType_TisDongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95_mBE1602039BB5FB804A3492A6537E86D22FF44F64_RuntimeMethod_var);
		__this->___U3CdonglesU3E5__2_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdonglesU3E5__2_3), (void*)L_3);
		// for (int index = 0; index < dongles.Length; index++)
		V_3 = 0;
		goto IL_004f;
	}

IL_0038:
	{
		// dongles[index].rigid.simulated = false;
		DongleU5BU5D_t1B1895BF1D05A6F1DB9FB5C44D13C72DD13F7B92* L_4 = __this->___U3CdonglesU3E5__2_3;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_8 = L_7->___rigid_11;
		NullCheck(L_8);
		Rigidbody2D_set_simulated_m38E0BD6581E907DD87059034C4B2E8D47BBFE71D(L_8, (bool)0, NULL);
		// for (int index = 0; index < dongles.Length; index++)
		int32_t L_9 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_004f:
	{
		// for (int index = 0; index < dongles.Length; index++)
		int32_t L_10 = V_3;
		DongleU5BU5D_t1B1895BF1D05A6F1DB9FB5C44D13C72DD13F7B92* L_11 = __this->___U3CdonglesU3E5__2_3;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0038;
		}
	}
	{
		// for (int index = 0; index < dongles.Length; index++)
		__this->___U3CindexU3E5__3_4 = 0;
		goto IL_00bd;
	}

IL_0063:
	{
		// dongles[index].Hide(Vector3.up * 100); // ???? ????? ??? ???? ?? ???? ???? ??????? ?????
		DongleU5BU5D_t1B1895BF1D05A6F1DB9FB5C44D13C72DD13F7B92* L_12 = __this->___U3CdonglesU3E5__2_3;
		int32_t L_13 = __this->___U3CindexU3E5__3_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Dongle_tEB9274262CC8F11FAC83234AEB868AE1A1286D95* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_16, (100.0f), NULL);
		NullCheck(L_15);
		Dongle_Hide_mC010A263D9DD8C888AC8FC555D4B25E8B66432DF(L_15, L_17, NULL);
		// sfxPlay(Sfx.Next);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_18 = V_1;
		NullCheck(L_18);
		GameManager_sfxPlay_m5F61BEE1035538ED92B7C730225D00904A1FA229(L_18, 1, NULL);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_19 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_19, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_19);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int index = 0; index < dongles.Length; index++)
		int32_t L_20 = __this->___U3CindexU3E5__3_4;
		V_4 = L_20;
		int32_t L_21 = V_4;
		__this->___U3CindexU3E5__3_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00bd:
	{
		// for (int index = 0; index < dongles.Length; index++)
		int32_t L_22 = __this->___U3CindexU3E5__3_4;
		DongleU5BU5D_t1B1895BF1D05A6F1DB9FB5C44D13C72DD13F7B92* L_23 = __this->___U3CdonglesU3E5__2_3;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0063;
		}
	}
	{
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_24 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_24, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_24);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00e6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int maxScore = Mathf.Max(score, PlayerPrefs.GetInt("MaxScore"));
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = L_25->___score_5;
		int32_t L_27;
		L_27 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteralF22B0F04E5799D11A8C07A1A569FD3A0E5C9FC81, NULL);
		int32_t L_28;
		L_28 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_26, L_27, NULL);
		V_2 = L_28;
		// PlayerPrefs.SetInt("MaxScore", maxScore);
		int32_t L_29 = V_2;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralF22B0F04E5799D11A8C07A1A569FD3A0E5C9FC81, L_29, NULL);
		// subScoreText.text = "???? : " + scoreText.text;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_30 = V_1;
		NullCheck(L_30);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_31 = L_30->___subScoreText_24;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_32 = V_1;
		NullCheck(L_32);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_33 = L_32->___scoreText_22;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_33);
		String_t* L_35;
		L_35 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral137AB3E6CD628D78E0304D495391BD17B363E270, L_34, NULL);
		NullCheck(L_31);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_35);
		// endGroup.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_36 = V_1;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = L_36->___endGroup_21;
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)1, NULL);
		// bgmPlayer.Stop();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_38 = V_1;
		NullCheck(L_38);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_39 = L_38->___bgmPlayer_16;
		NullCheck(L_39);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_39, NULL);
		// sfxPlay(Sfx.Over);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_40 = V_1;
		NullCheck(L_40);
		GameManager_sfxPlay_m5F61BEE1035538ED92B7C730225D00904A1FA229(L_40, 4, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<GameOverRoutine>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameOverRoutineU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m229385E449489BB407CBEEE6569393C4168F3D99 (U3CGameOverRoutineU3Ed__33_t4F102CE97E0A82F2C7311CCD772AFC50151A553A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<GameOverRoutine>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverRoutineU3Ed__33_System_Collections_IEnumerator_Reset_mD4AD166EAA354CBDD9F1B1F71A570169EEE30DC4 (U3CGameOverRoutineU3Ed__33_t4F102CE97E0A82F2C7311CCD772AFC50151A553A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGameOverRoutineU3Ed__33_System_Collections_IEnumerator_Reset_mD4AD166EAA354CBDD9F1B1F71A570169EEE30DC4_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<GameOverRoutine>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameOverRoutineU3Ed__33_System_Collections_IEnumerator_get_Current_m1A028D13DF5615566B98BD89F010C8B09F4918A3 (U3CGameOverRoutineU3Ed__33_t4F102CE97E0A82F2C7311CCD772AFC50151A553A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void GameManager/<ResetCoroutine>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetCoroutineU3Ed__35__ctor_m403CC98C2F79B32DF34009061F53A957C7A27880 (U3CResetCoroutineU3Ed__35_t4262C7C03C7833BEBEB0C488181872BC3951D82D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<ResetCoroutine>d__35::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetCoroutineU3Ed__35_System_IDisposable_Dispose_mB015A602BB15F72B07E786A31F22C65EA32D4940 (U3CResetCoroutineU3Ed__35_t4262C7C03C7833BEBEB0C488181872BC3951D82D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<ResetCoroutine>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResetCoroutineU3Ed__35_MoveNext_m28C68D7DEF9DFC67ADAF50A489F1C8DEB5E671C8 (U3CResetCoroutineU3Ed__35_t4262C7C03C7833BEBEB0C488181872BC3951D82D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene("Main");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<ResetCoroutine>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResetCoroutineU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA78EDB3E38B17AFF37AC69052E076CC952179722 (U3CResetCoroutineU3Ed__35_t4262C7C03C7833BEBEB0C488181872BC3951D82D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<ResetCoroutine>d__35::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetCoroutineU3Ed__35_System_Collections_IEnumerator_Reset_m12FA43270D05B1C522D347027E455E489C2CA33B (U3CResetCoroutineU3Ed__35_t4262C7C03C7833BEBEB0C488181872BC3951D82D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResetCoroutineU3Ed__35_System_Collections_IEnumerator_Reset_m12FA43270D05B1C522D347027E455E489C2CA33B_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<ResetCoroutine>d__35::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResetCoroutineU3Ed__35_System_Collections_IEnumerator_get_Current_m50B53F32446D6CFE3D710AF196F31FC5B09CFFDD (U3CResetCoroutineU3Ed__35_t4262C7C03C7833BEBEB0C488181872BC3951D82D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
