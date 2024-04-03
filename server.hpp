#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: server.dll
// Classes count: 785
// Enums count: 128
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

struct ModelConfigHandle_t;
struct CAttributeManager;
struct IChoreoServices;
struct PhysicsRagdollPose_t;
struct CAnimGraphNetworkedVariables;
struct HSequence;
struct GameTime_t;
struct CSkillFloat;
struct AmmoIndex_t;
struct CGameSceneNode;
struct CNetworkVarChainer;
struct CEntityInstance;
struct CGameSceneNodeHandle;
struct CNetworkOriginCellCoordQuantizedVector;
struct CEntityIOOutput;
struct CCSGameModeRules_Deathmatch;
struct CCSGameModeRules_ArmsRace;
struct CInButtonState;
struct GameTick_t;
struct fogplayerparams_t;
struct audioparams_t;
struct CFiringModeFloat;
struct CFiringModeInt;
struct CDecalInfo;
struct AttachmentHandle_t;
struct CModelState;
struct ChangeAccessorFieldPathIndex_t;
struct CEntityIdentity;
struct CScriptComponent;
struct CBuoyancyHelper;
struct CSkeletonInstance;
struct C_FireSmoke;
struct CSMatchStats_t;
struct CBaseAnimGraphController;
struct CompositeMaterialInputLooseVariable_t;
struct CCSPlayerController_InGameMoneyServices;
struct CCSPlayerController_InventoryServices;
struct CCSPlayerController_ActionTrackingServices;
struct CCSPlayerController_DamageServices;
struct IntervalTimer;
struct VPhysicsCollisionAttribute_t;
struct WeaponPurchaseTracker_t;
struct fogparams_t;

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x68
// 
// MNetworkVarNames "ModelConfigHandle_t m_Handle"
// MNetworkVarNames "string_t m_Name"
// MNetworkVarNames "CHandle< CBaseModelEntity > m_AssociatedEntities"
// MNetworkVarNames "string_t m_AssociatedEntityNames"
struct ActiveModelConfig_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// MNetworkEnable
	ModelConfigHandle_t m_Handle; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_Name; // 0x30	
	// MNetworkEnable
	CNetworkUtlVectorBase<CHandle<CBaseModelEntity>> m_AssociatedEntities; // 0x38	
	// MNetworkEnable
	CNetworkUtlVectorBase<CUtlSymbolLarge> m_AssociatedEntityNames; // 0x50	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x208
// Has VTable
// 
// MNetworkVarNames "uint32 m_PredNetBoolVariables"
// MNetworkVarNames "byte m_PredNetByteVariables"
// MNetworkVarNames "uint16 m_PredNetUInt16Variables"
// MNetworkVarNames "int32 m_PredNetIntVariables"
// MNetworkVarNames "uint32 m_PredNetUInt32Variables"
// MNetworkVarNames "uint64 m_PredNetUInt64Variables"
// MNetworkVarNames "float m_PredNetFloatVariables"
// MNetworkVarNames "Vector m_PredNetVectorVariables"
// MNetworkVarNames "Quaternion m_PredNetQuaternionVariables"
// MNetworkVarNames "CGlobalSymbol m_PredNetGlobalSymbolVariables"
// MNetworkVarNames "uint32 m_OwnerOnlyPredNetBoolVariables"
// MNetworkVarNames "byte m_OwnerOnlyPredNetByteVariables"
// MNetworkVarNames "uint16 m_OwnerOnlyPredNetUInt16Variables"
// MNetworkVarNames "int32 m_OwnerOnlyPredNetIntVariables"
// MNetworkVarNames "uint32 m_OwnerOnlyPredNetUInt32Variables"
// MNetworkVarNames "uint64 m_OwnerOnlyPredNetUInt64Variables"
// MNetworkVarNames "float m_OwnerOnlyPredNetFloatVariables"
// MNetworkVarNames "Vector m_OwnerOnlyPredNetVectorVariables"
// MNetworkVarNames "Quaternion m_OwnerOnlyPredNetQuaternionVariables"
// MNetworkVarNames "CGlobalSymbol m_OwnerOnlyPredNetGlobalSymbolVariables"
// MNetworkVarNames "int m_nBoolVariablesCount"
// MNetworkVarNames "int m_nOwnerOnlyBoolVariablesCount"
// MNetworkVarNames "int m_nRandomSeedOffset"
// MNetworkVarNames "float m_flLastTeleportTime"
class CAnimGraphNetworkedVariables
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetBoolVarChanged"
	// MNetworkAlias "m_PredBoolVariables"
	CNetworkUtlVectorBase<uint32> m_PredNetBoolVariables; // 0x8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetByteVarChanged"
	// MNetworkAlias "m_PredByteVariables"
	CNetworkUtlVectorBase<uint8> m_PredNetByteVariables; // 0x20	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetUInt16VarChanged"
	// MNetworkAlias "m_PredUInt16Variables"
	CNetworkUtlVectorBase<uint16> m_PredNetUInt16Variables; // 0x38	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetIntVarChanged"
	// MNetworkAlias "m_PredIntVariables"
	CNetworkUtlVectorBase<int32> m_PredNetIntVariables; // 0x50	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetUInt32VarChanged"
	// MNetworkAlias "m_PredUInt32Variables"
	CNetworkUtlVectorBase<uint32> m_PredNetUInt32Variables; // 0x68	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetUInt64VarChanged"
	// MNetworkAlias "m_PredUInt64Variables"
	CNetworkUtlVectorBase<uint64> m_PredNetUInt64Variables; // 0x80	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetFloatVarChanged"
	// MNetworkAlias "m_PredFloatVariables"
	CNetworkUtlVectorBase<float32> m_PredNetFloatVariables; // 0x98	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVectorVarChanged"
	// MNetworkAlias "m_PredVectorVariables"
	CNetworkUtlVectorBase<Vector> m_PredNetVectorVariables; // 0xb0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetQuaternionVarChanged"
	// MNetworkAlias "m_PredQuaternionVariables"
	CNetworkUtlVectorBase<Quaternion> m_PredNetQuaternionVariables; // 0xc8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetGlobalSymbolVarChanged"
	// MNetworkAlias "m_PredGlobalSymbolVariables"
	CNetworkUtlVectorBase<CGlobalSymbol> m_PredNetGlobalSymbolVariables; // 0xe0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOBoolVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetBoolVariables"
	CNetworkUtlVectorBase<uint32> m_OwnerOnlyPredNetBoolVariables; // 0xf8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOByteVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetByteVariables"
	CNetworkUtlVectorBase<uint8> m_OwnerOnlyPredNetByteVariables; // 0x110	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt16VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt16Variables"
	CNetworkUtlVectorBase<uint16> m_OwnerOnlyPredNetUInt16Variables; // 0x128	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOIntVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetIntVariables"
	CNetworkUtlVectorBase<int32> m_OwnerOnlyPredNetIntVariables; // 0x140	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt32VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt32Variables"
	CNetworkUtlVectorBase<uint32> m_OwnerOnlyPredNetUInt32Variables; // 0x158	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt64VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt64Variables"
	CNetworkUtlVectorBase<uint64> m_OwnerOnlyPredNetUInt64Variables; // 0x170	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOFloatVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetFloatVariables"
	CNetworkUtlVectorBase<float32> m_OwnerOnlyPredNetFloatVariables; // 0x188	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOVectorVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetVectorVariables"
	CNetworkUtlVectorBase<Vector> m_OwnerOnlyPredNetVectorVariables; // 0x1a0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOQuaternionVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetQuaternionVariables"
	CNetworkUtlVectorBase<Quaternion> m_OwnerOnlyPredNetQuaternionVariables; // 0x1b8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOGlobalSymbolVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetGlobalSymbolVariables"
	CNetworkUtlVectorBase<CGlobalSymbol> m_OwnerOnlyPredNetGlobalSymbolVariables; // 0x1d0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	int32_t m_nBoolVariablesCount; // 0x1e8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	int32_t m_nOwnerOnlyBoolVariablesCount; // 0x1ec	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	int32_t m_nRandomSeedOffset; // 0x1f0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnTeleportTimeChanged"
	float m_flLastTeleportTime; // 0x1f4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MNetworkVarNames "CEconItemAttribute m_Attributes"
class CAttributeList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkTypeAlias "CUtlVector< CEconItemAttribute >"
	CUtlVectorEmbeddedNetworkVar<CEconItemAttribute> m_Attributes; // 0x8	
	CAttributeManager* m_pManager; // 0x58	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "int m_iReapplyProvisionParity"
// MNetworkVarNames "EHANDLE m_hOuter"
// MNetworkVarNames "attributeprovidertypes_t m_ProviderType"
class CAttributeManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector<CHandle<CBaseEntity>> m_Providers; // 0x8	
	// MNetworkEnable
	int32_t m_iReapplyProvisionParity; // 0x20	
	// MNetworkEnable
	CHandle<CBaseEntity> m_hOuter; // 0x24	
	bool m_bPreventLoopback; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0029[0x3]; // 0x29
public:
	// MNetworkEnable
	attributeprovidertypes_t m_ProviderType; // 0x2c	
	CUtlVector<CAttributeManager::cached_attribute_float_t> m_CachedResults; // 0x30	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e8
// Has VTable
// 
// MNetworkIncludeByName "m_bClientSideRagdoll"
// MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
// MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
// MNetworkVarNames "Vector m_vecForce"
// MNetworkVarNames "int32 m_nForceBone"
// MNetworkVarNames "PhysicsRagdollPose_t* m_pRagdollPose"
// MNetworkVarNames "bool m_bClientRagdoll"
class CBaseAnimGraph : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0710[0x78]; // 0x710
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0x788	
private:
	[[maybe_unused]] uint8_t __pad0789[0x7]; // 0x789
public:
	IChoreoServices* m_pChoreoServices; // 0x790	
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x798	
private:
	[[maybe_unused]] uint8_t __pad0799[0x3]; // 0x799
public:
	float m_flMaxSlopeDistance; // 0x79c	
	Vector m_vLastSlopeCheckPos; // 0x7a0	
	bool m_bAnimationUpdateScheduled; // 0x7ac	
private:
	[[maybe_unused]] uint8_t __pad07ad[0x3]; // 0x7ad
public:
	// MNetworkEnable
	Vector m_vecForce; // 0x7b0	
	// MNetworkEnable
	int32_t m_nForceBone; // 0x7bc	
private:
	[[maybe_unused]] uint8_t __pad07c0[0x10]; // 0x7c0
public:
	// MNetworkEnable
	PhysicsRagdollPose_t* m_pRagdollPose; // 0x7d0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bClientRagdoll; // 0x7d8	
	
	// Datamap fields:
	// void m_pMainGraphController; // 0x780
	// void CBaseAnimGraphChoreoServicesThink; // 0x0
	// float InputSetPlaybackRate; // 0x0
	// CUtlSymbolLarge InputSetBodyGroup; // 0x0
	// void InputBecomeRagdoll; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
// 
// MNetworkVarNames "CAnimGraphNetworkedVariables m_animGraphNetworkedVars"
// MNetworkVarNames "HSequence m_hSequence"
// MNetworkVarNames "GameTime_t m_flSeqStartTime"
// MNetworkVarNames "float m_flSeqFixedCycle"
// MNetworkVarNames "AnimLoopMode_t m_nAnimLoopMode"
class CBaseAnimGraphController : public CSkeletonAnimationController
{
private:
	[[maybe_unused]] uint8_t __pad0010[0x8]; // 0x10
public:
	// MNetworkEnable
	CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x18	
	// MNetworkDisable
	bool m_bSequenceFinished; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0221[0x3]; // 0x221
public:
	// MNetworkDisable
	float m_flSoundSyncTime; // 0x224	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkChangeCallback "OnNetworkedSequenceChanged"
	// MNetworkPriority "32"
	HSequence m_hSequence; // 0x228	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetworkedAnimationChanged"
	// MNetworkPriority "32"
	GameTime_t m_flSeqStartTime; // 0x22c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetworkedAnimationChanged"
	// MNetworkPriority "32"
	float m_flSeqFixedCycle; // 0x230	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetworkedAnimationChanged"
	// MNetworkPriority "32"
	AnimLoopMode_t m_nAnimLoopMode; // 0x234	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4.000000"
	// MNetworkMaxValue "12.000000"
	// MNetworkEncodeFlags "5"
	// MNetworkPriority "32"
	// MNetworkChangeCallback "OnNetworkedAnimationChanged"
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x238	
private:
	[[maybe_unused]] uint8_t __pad0240[0x4]; // 0x240
public:
	// MNetworkDisable
	SequenceFinishNotifyState_t m_nNotifyState; // 0x244	
private:
	[[maybe_unused]] uint8_t __pad0245[0x1]; // 0x245
public:
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; // 0x246	
	// MNetworkDisable
	bool m_bNetworkedSequenceChanged; // 0x247	
	// MNetworkDisable
	bool m_bLastUpdateSkipped; // 0x248	
private:
	[[maybe_unused]] uint8_t __pad0249[0x3]; // 0x249
public:
	// MNetworkDisable
	GameTime_t m_flPrevAnimUpdateTime; // 0x24c	
	
	// Datamap fields:
	// void m_pAnimGraphInstance; // 0x468
	// float m_flCachedSequenceCycleRate; // 0x240
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6b8
// Has VTable
// 
// MNetworkIncludeByName "m_pEntity"
// MNetworkIncludeByName "m_flSimulationTime"
// MNetworkIncludeByName "m_flCreateTime"
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkIncludeByName "m_nNextThinkTick"
// MNetworkIncludeByName "m_fFlags"
// MNetworkUserGroupProxy "CBasePlayerController"
// MNetworkUserGroupProxy "CBasePlayerController"
// MNetworkIncludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "uint32 m_nTickBase"
// MNetworkVarNames "CHandle< CBasePlayerPawn> m_hPawn"
// MNetworkVarNames "PlayerConnectedState m_iConnected"
// MNetworkVarNames "char m_iszPlayerName"
// MNetworkVarNames "uint64 m_steamID"
// MNetworkVarNames "uint32 m_iDesiredFOV"
class CBasePlayerController : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	uint64_t m_nInButtonsWhichAreToggles; // 0x4c8	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x2c]; // 0x4d4
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnPawnChanged"
	CHandle<CBasePlayerPawn> m_hPawn; // 0x500	
	CSplitScreenSlot m_nSplitScreenSlot; // 0x504	
	CHandle<CBasePlayerController> m_hSplitOwner; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad050c[0x4]; // 0x50c
public:
	CUtlVector<CHandle<CBasePlayerController>> m_hSplitScreenPlayers; // 0x510	
	bool m_bIsHLTV; // 0x528	
private:
	[[maybe_unused]] uint8_t __pad0529[0x3]; // 0x529
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnConnectionStateChanged"
	PlayerConnectedState m_iConnected; // 0x52c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayerControllerNameChanged"
	char m_iszPlayerName[128]; // 0x530	
	CUtlString m_szNetworkIDString; // 0x5b0	
	float m_fLerpTime; // 0x5b8	
	bool m_bLagCompensation; // 0x5bc	
	bool m_bPredict; // 0x5bd	
	bool m_bAutoKickDisabled; // 0x5be	
	bool m_bIsLowViolence; // 0x5bf	
	bool m_bGamePaused; // 0x5c0	
private:
	[[maybe_unused]] uint8_t __pad05c1[0x93]; // 0x5c1
public:
	int32_t m_nLastRealCommandNumberExecuted; // 0x654	
	int32_t m_nLastLateCommandExecuted; // 0x658	
private:
	[[maybe_unused]] uint8_t __pad065c[0x14]; // 0x65c
public:
	ChatIgnoreType_t m_iIgnoreGlobalChat; // 0x670	
	float m_flLastPlayerTalkTime; // 0x674	
	float m_flLastEntitySteadyState; // 0x678	
	int32_t m_nAvailableEntitySteadyState; // 0x67c	
	bool m_bHasAnySteadyStateEnts; // 0x680	
private:
	[[maybe_unused]] uint8_t __pad0681[0xf]; // 0x681
public:
	// MNetworkEnable
	// MNetworkEncoder "fixed64"
	// MNetworkChangeCallback "OnSteamIDChanged"
	uint64_t m_steamID; // 0x690	
	// MNetworkEnable
	uint32_t m_iDesiredFOV; // 0x698	
	
	// Static fields:
	static bool &Get_sm_bRunningPredictedClientStringCommands(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBasePlayerController")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// bool fakeclient; // 0x7fffffff
	// bool is_hltv; // 0x7fffffff
	// const char * playername; // 0x7fffffff
	// bool reserving; // 0x7fffffff
	// void m_pCurrentCommand; // 0x688
	// void m_LastCmd; // 0x5c8
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CBasePlayerControllerAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x178
// Has VTable
// 
// MGetKV3ClassDefaults
class CBasePlayerVData : public CEntitySubclassVDataBase
{
public:
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>> m_sModelName; // 0x28	
	CSkillFloat m_flHeadDamageMultiplier; // 0x108	
	CSkillFloat m_flChestDamageMultiplier; // 0x118	
	CSkillFloat m_flStomachDamageMultiplier; // 0x128	
	CSkillFloat m_flArmDamageMultiplier; // 0x138	
	CSkillFloat m_flLegDamageMultiplier; // 0x148	
	// MPropertyGroupName "Water"
	float m_flHoldBreathTime; // 0x158	
	// MPropertyGroupName "Water"
	// MPropertyDescription "Seconds between drowning ticks"
	float m_flDrowningDamageInterval; // 0x15c	
	// MPropertyGroupName "Water"
	// MPropertyDescription "Amount of damage done on the first drowning tick (+1 each subsequent interval)"
	int32_t m_nDrowningDamageInitial; // 0x160	
	// MPropertyGroupName "Water"
	// MPropertyDescription "Max damage done by a drowning tick"
	int32_t m_nDrowningDamageMax; // 0x164	
	// MPropertyGroupName "Water"
	int32_t m_nWaterSpeed; // 0x168	
	// MPropertyGroupName "Use"
	float m_flUseRange; // 0x16c	
	// MPropertyGroupName "Use"
	float m_flUseAngleTolerance; // 0x170	
	// MPropertyGroupName "Crouch"
	// MPropertyDescription "Time to move between crouch and stand"
	float m_flCrouchTime; // 0x174	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x248
// Has VTable
// 
// MGetKV3ClassDefaults
class CBasePlayerWeaponVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyDescription "Model used on the ground or held by an entity"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>> m_szWorldModel; // 0x28	
	// MPropertyDescription "Was the weapon was built right-handed?"
	// MPropertyGroupName "Visuals"
	bool m_bBuiltRightHanded; // 0x108	
	// MPropertyDescription "Allows flipping the model, regardless of whether it is built left or right handed"
	// MPropertyGroupName "Visuals"
	bool m_bAllowFlipping; // 0x109	
private:
	[[maybe_unused]] uint8_t __pad010a[0x6]; // 0x10a
public:
	// MPropertyGroupName "Visuals"
	// MPropertyDescription "Attachment to fire bullets from"
	// MPropertyAttributeEditor "VDataModelAttachment( m_szWorldModel )"
	CUtlString m_sMuzzleAttachment; // 0x110	
	// MPropertyDescription "Effect when firing this weapon"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashParticle; // 0x118	
	ItemFlagTypes_t m_iFlags; // 0x1f8	
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyGroupName "Ammo"
	// MPropertyCustomFGDType "string"
	AmmoIndex_t m_nPrimaryAmmoType; // 0x1f9	
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyGroupName "Ammo"
	// MPropertyCustomFGDType "string"
	AmmoIndex_t m_nSecondaryAmmoType; // 0x1fa	
private:
	[[maybe_unused]] uint8_t __pad01fb[0x1]; // 0x1fb
public:
	// MPropertyFriendlyName "Primary Clip Size"
	// MPropertyDescription "How many bullets this gun can fire before it reloads (0 if no clip)"
	// MPropertyAttributeRange "0 255"
	// MPropertyGroupName "Ammo"
	int32_t m_iMaxClip1; // 0x1fc	
	// MPropertyFriendlyName "Secondary Clip Size"
	// MPropertyDescription "How many secondary bullets this gun can fire before it reloads (0 if no clip)"
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "0 255"
	int32_t m_iMaxClip2; // 0x200	
	// MPropertyDescription "Primary Initial Clip (-1 means use clip size)"
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "-1 255"
	int32_t m_iDefaultClip1; // 0x204	
	// MPropertyDescription "Secondary Initial Clip (-1 means use clip size)"
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "-1 255"
	int32_t m_iDefaultClip2; // 0x208	
	// MPropertyDescription "This value used to determine this weapon's importance in autoselection"
	// MPropertyGroupName "UI"
	int32_t m_iWeight; // 0x20c	
	// MPropertyFriendlyName "Safe To Auto-Switch To"
	// MPropertyDescription "Whether this weapon is safe to automatically switch to (should be false for eg. explosives that can the player may accidentally hurt themselves with)"
	// MPropertyGroupName "UI"
	bool m_bAutoSwitchTo; // 0x210	
	// MPropertyFriendlyName "Safe To Auto-Switch Away From"
	// MPropertyGroupName "UI"
	bool m_bAutoSwitchFrom; // 0x211	
private:
	[[maybe_unused]] uint8_t __pad0212[0x2]; // 0x212
public:
	// MPropertyGroupName "UI"
	RumbleEffect_t m_iRumbleEffect; // 0x214	
	// MPropertyDescription "Should both primary and secondary attacks be cooled down together (so cooling down primary attack would cooldown both primary + secondary attacks)?"
	bool m_bLinkedCooldowns; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad0219[0x7]; // 0x219
public:
	CUtlMap<WeaponSound_t, CSoundEventName> m_aShootSounds; // 0x220	
	// MPropertyFriendlyName "HUD Bucket"
	// MPropertyDescription "Which 'column' to display this weapon in the HUD"
	// MPropertyGroupName "UI"
	int32_t m_iSlot; // 0x240	
	// MPropertyFriendlyName "HUD Bucket Position"
	// MPropertyDescription "Which 'row' to display this weapon in the HUD"
	// MPropertyGroupName "UI"
	int32_t m_iPosition; // 0x244	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x928
// Has VTable
class CBaseProp : public CBaseAnimGraph
{
public:
	bool m_bModelOverrodeBlockLOS; // 0x8e8	
private:
	[[maybe_unused]] uint8_t __pad08e9[0x3]; // 0x8e9
public:
	int32_t m_iShapeType; // 0x8ec	
	bool m_bConformToCollisionBounds; // 0x8f0	
private:
	[[maybe_unused]] uint8_t __pad08f1[0x3]; // 0x8f1
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0x8f4	
	
	// Datamap fields:
	// void health; // 0x7fffffff
	// CUtlSymbolLarge propdata_override; // 0x7fffffff
};

// Registered binary: server.dll (project 'entity2')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
// Has Trivial Destructor
class CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
class CBodyComponent : public CEntityComponent
{
public:
	// MNetworkDisable
	CGameSceneNode* m_pSceneNode; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0010[0x10]; // 0x10
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x20	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x210
// Has VTable
// 
// MNetworkVarNames "HModelStrong m_hModel"
// MNetworkVarNames "bool m_bClientClothCreationSuppressed"
// MNetworkVarNames "MeshGroupMask_t m_MeshGroupMask"
// MNetworkVarNames "int8 m_nIdealMotionType"
class CModelState
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xa0]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonModelChanged"
	CStrongHandle<InfoForResourceTypeCModel> m_hModel; // 0xa0	
	// MNetworkDisable
	CUtlSymbolLarge m_ModelName; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00b0[0x38]; // 0xb0
public:
	// MNetworkEnable
	bool m_bClientClothCreationSuppressed; // 0xe8	
private:
	[[maybe_unused]] uint8_t __pad00e9[0x97]; // 0xe9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
	uint64_t m_MeshGroupMask; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0188[0x7a]; // 0x188
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMotionTypeChanged"
	int8_t m_nIdealMotionType; // 0x202	
	// MNetworkDisable
	int8_t m_nForceLOD; // 0x203	
	// MNetworkDisable
	int8_t m_nClothUpdateFlags; // 0x204	
	
	// Datamap fields:
	// void m_pVPhysicsAggregate; // 0xe0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "CEntityHandle m_hOwner"
// MNetworkVarNames "CUtlStringToken m_name"
class CGameSceneNodeHandle
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	CEntityHandle m_hOwner; // 0x8	
	// MNetworkEnable
	CUtlStringToken m_name; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x150
// Has VTable
// 
// MNetworkVarNames "CGameSceneNodeHandle m_hParent"
// MNetworkVarNames "CNetworkOriginCellCoordQuantizedVector m_vecOrigin"
// MNetworkVarNames "QAngle m_angRotation"
// MNetworkVarNames "float m_flScale"
// MNetworkVarNames "CUtlStringToken m_name"
// MNetworkVarNames "CUtlStringToken m_hierarchyAttachName"
class CGameSceneNode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkDisable
	CTransform m_nodeToWorld; // 0x10	
	// MNetworkDisable
	CEntityInstance* m_pOwner; // 0x30	
	// MNetworkDisable
	CGameSceneNode* m_pParent; // 0x38	
	// MNetworkDisable
	CGameSceneNode* m_pChild; // 0x40	
	// MNetworkDisable
	CGameSceneNode* m_pNextSibling; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0050[0x20]; // 0x50
public:
	// MNetworkEnable
	// MNetworkSerializer "gameSceneNode"
	// MNetworkChangeCallback "gameSceneNodeHierarchyParentChanged"
	// MNetworkPriority "32"
	// MNetworkVarEmbeddedFieldOffsetDelta "8"
	// -> m_hOwner - 0x78
	// -> m_name - 0x7c
	CGameSceneNodeHandle m_hParent; // 0x70	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Origin"
	// MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
	CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad00b0[0x8]; // 0xb0
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkPriority "32"
	// MNetworkSerializer "gameSceneNodeStepSimulationAnglesSerializer"
	// MNetworkChangeCallback "gameSceneNodeLocalAnglesChanged"
	QAngle m_angRotation; // 0xb8	
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeLocalScaleChanged"
	// MNetworkPriority "32"
	float m_flScale; // 0xc4	
	// MNetworkDisable
	Vector m_vecAbsOrigin; // 0xc8	
	// MNetworkDisable
	QAngle m_angAbsRotation; // 0xd4	
	// MNetworkDisable
	float m_flAbsScale; // 0xe0	
	// MNetworkDisable
	int16_t m_nParentAttachmentOrBone; // 0xe4	
	// MNetworkDisable
	bool m_bDebugAbsOriginChanges; // 0xe6	
	// MNetworkDisable
	bool m_bDormant; // 0xe7	
	// MNetworkDisable
	bool m_bForceParentToBeNetworked; // 0xe8	
	struct 
	{
		// MNetworkDisable
		uint8_t m_bDirtyHierarchy: 1; 		
		// MNetworkDisable
		uint8_t m_bDirtyBoneMergeInfo: 1; 		
		// MNetworkDisable
		uint8_t m_bNetworkedPositionChanged: 1; 		
		// MNetworkDisable
		uint8_t m_bNetworkedAnglesChanged: 1; 		
		// MNetworkDisable
		uint8_t m_bNetworkedScaleChanged: 1; 		
		// MNetworkDisable
		uint8_t m_bWillBeCallingPostDataUpdate: 1; 		
		// MNetworkDisable
		uint8_t m_bBoneMergeFlex: 1; 		
		// MNetworkDisable
		uint8_t m_nLatchAbsOrigin: 2; 		
		// MNetworkDisable
		uint8_t m_bDirtyBoneMergeBoneToRoot: 1; 		
		uint16_t __pad0: 14;
	}; // 24 bits
	// MNetworkDisable
	uint8_t m_nHierarchicalDepth; // 0xeb	
	// MNetworkDisable
	uint8_t m_nHierarchyType; // 0xec	
	// MNetworkDisable
	uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0xed	
private:
	[[maybe_unused]] uint8_t __pad00ee[0x2]; // 0xee
public:
	// MNetworkEnable
	CUtlStringToken m_name; // 0xf0	
private:
	[[maybe_unused]] uint8_t __pad00f4[0x3c]; // 0xf4
public:
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeHierarchyAttachmentChanged"
	CUtlStringToken m_hierarchyAttachName; // 0x130	
	// MNetworkDisable
	float m_flZOffset; // 0x134	
	// MNetworkDisable
	Vector m_vRenderOrigin; // 0x138	
	
	// Datamap fields:
	// void m_bDirtyHierarchy; // -0x1
	// void m_bDirtyBoneMergeInfo; // -0x1
	// void m_bNetworkedPositionChanged; // -0x1
	// void m_bNetworkedAnglesChanged; // -0x1
	// void m_bNetworkedScaleChanged; // -0x1
	// void m_bWillBeCallingPostDataUpdate; // -0x1
	// void m_nLatchAbsOrigin; // -0x1
	// void m_bDirtyBoneMergeBoneToRoot; // -0x1
	// CHandle< CBaseEntity > parentname; // 0x7fffffff
	// bool useLocalOffset; // 0x7fffffff
	// bool useParentRenderBounds; // 0x7fffffff
	// bool positionInLocalSpace; // 0x7fffffff
	// Vector scales; // 0x7fffffff
	// Vector local.scales; // 0x7fffffff
	// float scale; // 0x7fffffff
	// float ModelScale; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x948
// Has VTable
// 
// MNetworkVarNames "bool m_bBombPlantedHere"
class CBombTarget : public CBaseTrigger
{
public:
	CEntityIOOutput m_OnBombExplode; // 0x8b8	
	CEntityIOOutput m_OnBombPlanted; // 0x8e0	
	CEntityIOOutput m_OnBombDefused; // 0x908	
	bool m_bIsBombSiteB; // 0x930	
	bool m_bIsHeistBombTarget; // 0x931	
	// MNetworkEnable
	bool m_bBombPlantedHere; // 0x932	
private:
	[[maybe_unused]] uint8_t __pad0933[0x5]; // 0x933
public:
	CUtlSymbolLarge m_szMountTarget; // 0x938	
	CHandle<CBaseEntity> m_hInstructorHint; // 0x940	
	int32_t m_nBombSiteDesignation; // 0x944	
	
	// Datamap fields:
	// void CBombTargetCBombTargetShim::Touch; // 0x0
	// void CBombTargetCBombTargetShim::BombTargetUse; // 0x0
	// void OnBombExplode; // 0x0
	// void OnBombPlanted; // 0x0
	// void OnBombDefused; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe90
// Has VTable
class CBreachCharge : public CCSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa20
// Has VTable
class CBreachChargeProjectile : public CBaseGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe90
// Has VTable
class CBumpMine : public CCSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa20
// Has VTable
class CBumpMineProjectile : public CBaseGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
class CBuoyancyHelper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	float m_flFluidDensity; // 0x18	
	
	// Datamap fields:
	// void m_pController; // 0x8
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
class CCSGameModeScript : public CBasePulseGraphInstance
{
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe0
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
class CCSDeathmatchScript : public CCSGameModeScript
{
public:
	CCSGameModeRules_Deathmatch* m_pOuter; // 0xd8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
class CCSGO_WingmanIntroCharacterPosition : public CCSGO_TeamIntroCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
class CCSGO_WingmanIntroCounterTerroristPosition : public CCSGO_WingmanIntroCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
class CCSGO_WingmanIntroTerroristPosition : public CCSGO_WingmanIntroCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// Has VTable
class CCSGameModeRules
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "CUtlString m_WeaponSequence"
class CCSGameModeRules_ArmsRace : public CCSGameModeRules
{
public:
	// MNetworkEnable
	CNetworkUtlVectorBase<CUtlString> m_WeaponSequence; // 0x38	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flDMBonusStartTime"
// MNetworkVarNames "float m_flDMBonusTimeLength"
// MNetworkVarNames "int16 m_nDMBonusWeaponLoadoutSlot"
class CCSGameModeRules_Deathmatch : public CCSGameModeRules
{
public:
	// MNetworkEnable
	GameTime_t m_flDMBonusStartTime; // 0x38	
	// MNetworkEnable
	float m_flDMBonusTimeLength; // 0x3c	
	// MNetworkEnable
	int16_t m_nDMBonusWeaponLoadoutSlot; // 0x40	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// Has VTable
class CCSGameModeRules_Noop : public CCSGameModeRules
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe0
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
class CCSArmsRaceScript : public CCSGameModeScript
{
public:
	CCSGameModeRules_ArmsRace* m_pOuter; // 0xd8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x78
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "Vector localSound"
// MNetworkVarNames "int32 soundscapeIndex"
// MNetworkVarNames "uint8 localBits"
// MNetworkVarNames "int soundscapeEntityListIndex"
// MNetworkVarNames "uint32 soundEventHash"
struct audioparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector localSound[8]; // 0x8	
	// MNetworkEnable
	int32_t soundscapeIndex; // 0x68	
	// MNetworkEnable
	uint8_t localBits; // 0x6c	
private:
	[[maybe_unused]] uint8_t __pad006d[0x3]; // 0x6d
public:
	// MNetworkEnable
	int32_t soundscapeEntityListIndex; // 0x70	
	// MNetworkEnable
	uint32_t soundEventHash; // 0x74	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MNetworkVarNames "ButtonBitMask_t m_nToggleButtonDownMask"
// MNetworkVarNames "float32 m_flMaxspeed"
// MNetworkVarNames "float32 m_arrForceSubtickMoveWhen"
class CPlayer_MovementServices : public CPlayerPawnComponent
{
public:
	int32_t m_nImpulse; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
public:
	CInButtonState m_nButtons; // 0x48	
	uint64_t m_nQueuedButtonDownMask; // 0x68	
	uint64_t m_nQueuedButtonChangeMask; // 0x70	
	uint64_t m_nButtonDoublePressed; // 0x78	
	uint32_t m_pButtonPressedCmdNumber[64]; // 0x80	
	uint32_t m_nLastCommandNumberProcessed; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint64_t m_nToggleButtonDownMask; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad0190[0x8]; // 0x190
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2048.000000"
	// MNetworkEncodeFlags "1"
	float m_flMaxspeed; // 0x198	
	// MNetworkEnable
	float m_arrForceSubtickMoveWhen[4]; // 0x19c	
	float m_flForwardMove; // 0x1ac	
	float m_flLeftMove; // 0x1b0	
	float m_flUpMove; // 0x1b4	
	Vector m_vecLastMovementImpulses; // 0x1b8	
	QAngle m_vecOldViewAngles; // 0x1c4	
	
	// Datamap fields:
	// void m_pButtonPressedCmdNumber; // 0x80
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "uint8 m_iObserverMode"
// MNetworkVarNames "CHandle< CBaseEntity> m_hObserverTarget"
class CPlayer_ObserverServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnObserverModeChanged"
	uint8_t m_iObserverMode; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnObserverTargetChanged"
	CHandle<CBaseEntity> m_hObserverTarget; // 0x44	
	ObserverMode_t m_iObserverLastMode; // 0x48	
	bool m_bForcedObserverMode; // 0x4c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_UseServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_ViewModelServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x170
// Has VTable
// 
// MNetworkVarNames "QAngle m_vecCsViewPunchAngle"
// MNetworkVarNames "GameTick_t m_nCsViewPunchAngleTick"
// MNetworkVarNames "float32 m_flCsViewPunchAngleTickRatio"
// MNetworkVarNames "fogplayerparams_t m_PlayerFog"
// MNetworkVarNames "CHandle< CColorCorrection> m_hColorCorrectionCtrl"
// MNetworkVarNames "CHandle< CBaseEntity> m_hViewEntity"
// MNetworkVarNames "CHandle< CTonemapController2> m_hTonemapController"
// MNetworkVarNames "audioparams_t m_audio"
// MNetworkVarNames "CHandle<CPostProcessingVolume> m_PostProcessingVolumes"
class CPlayer_CameraServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	QAngle m_vecCsViewPunchAngle; // 0x40	
	// MNetworkEnable
	GameTick_t m_nCsViewPunchAngleTick; // 0x4c	
	// MNetworkEnable
	float m_flCsViewPunchAngleTickRatio; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	// MNetworkEnable
	fogplayerparams_t m_PlayerFog; // 0x58	
	// MNetworkEnable
	CHandle<CColorCorrection> m_hColorCorrectionCtrl; // 0x98	
	// MNetworkEnable
	CHandle<CBaseEntity> m_hViewEntity; // 0x9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	CHandle<CTonemapController2> m_hTonemapController; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a4[0x4]; // 0xa4
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	// -> localSound[8] - 0xb0
	// -> soundscapeIndex - 0x110
	// -> localBits - 0x114
	// -> soundscapeEntityListIndex - 0x118
	// -> soundEventHash - 0x11c
	audioparams_t m_audio; // 0xa8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>> m_PostProcessingVolumes; // 0x120	
	float m_flOldPlayerZ; // 0x138	
	float m_flOldPlayerViewOffsetZ; // 0x13c	
private:
	[[maybe_unused]] uint8_t __pad0140[0x18]; // 0x140
public:
	CUtlVector<CHandle<CEnvSoundscapeTriggerable>> m_hTriggerSoundscapeList; // 0x158	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "GameTime_t m_timestamp"
// MNetworkVarNames "WorldGroupId_t m_nWorldGroupId"
class IntervalTimer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	GameTime_t m_timestamp; // 0x8	
	// MNetworkEnable
	WorldGroupId_t m_nWorldGroupId; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CCSPlayerControllerAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MNetworkVarNames "int m_iKills"
// MNetworkVarNames "int m_iDeaths"
// MNetworkVarNames "int m_iAssists"
// MNetworkVarNames "int m_iDamage"
// MNetworkVarNames "int m_iEquipmentValue"
// MNetworkVarNames "int m_iMoneySaved"
// MNetworkVarNames "int m_iKillReward"
// MNetworkVarNames "int m_iLiveTime"
// MNetworkVarNames "int m_iHeadShotKills"
// MNetworkVarNames "int m_iObjective"
// MNetworkVarNames "int m_iCashEarned"
// MNetworkVarNames "int m_iUtilityDamage"
// MNetworkVarNames "int m_iEnemiesFlashed"
struct CSPerRoundStats_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	int32_t m_iKills; // 0x30	
	// MNetworkEnable
	int32_t m_iDeaths; // 0x34	
	// MNetworkEnable
	int32_t m_iAssists; // 0x38	
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriodOrMatchEnd"
	int32_t m_iDamage; // 0x3c	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iEquipmentValue; // 0x40	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iMoneySaved; // 0x44	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iKillReward; // 0x48	
	// MNetworkEnable
	int32_t m_iLiveTime; // 0x4c	
	// MNetworkEnable
	int32_t m_iHeadShotKills; // 0x50	
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriodOrMatchEnd"
	int32_t m_iObjective; // 0x54	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iCashEarned; // 0x58	
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriodOrMatchEnd"
	int32_t m_iUtilityDamage; // 0x5c	
	// MNetworkEnable
	// MNetworkUserGroup "AllPlayersDuringFreezePeriodOrMatchEnd"
	int32_t m_iEnemiesFlashed; // 0x60	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x98
// Has VTable
// 
// MNetworkVarNames "int m_nSendUpdate"
// MNetworkVarNames "CDamageRecord m_DamageList"
class CCSPlayerController_DamageServices : public CPlayerControllerComponent
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusiveDuringRoundEnd"
	// MNetworkChangeCallback "OnDamageListUpdate"
	int32_t m_nSendUpdate; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusiveDuringRoundEnd"
	CUtlVectorEmbeddedNetworkVar<CDamageRecord> m_DamageList; // 0x48	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MNetworkVarNames "int m_iAccount"
// MNetworkVarNames "int m_iStartAccount"
// MNetworkVarNames "int m_iTotalCashSpent"
// MNetworkVarNames "int m_iCashSpentThisRound"
class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent
{
public:
	bool m_bReceivesMoneyNextRound; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	int32_t m_iAccountMoneyEarnedForNextRound; // 0x44	
	// MNetworkEnable
	int32_t m_iAccount; // 0x48	
	// MNetworkEnable
	int32_t m_iStartAccount; // 0x4c	
	// MNetworkEnable
	int32_t m_iTotalCashSpent; // 0x50	
	// MNetworkEnable
	int32_t m_iCashSpentThisRound; // 0x54	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xfa0
// Has VTable
// 
// MNetworkVarNames "item_definition_index_t m_unMusicID"
// MNetworkVarNames "MedalRank_t m_rank"
// MNetworkVarNames "int m_nPersonaDataPublicLevel"
// MNetworkVarNames "int m_nPersonaDataPublicCommendsLeader"
// MNetworkVarNames "int m_nPersonaDataPublicCommendsTeacher"
// MNetworkVarNames "int m_nPersonaDataPublicCommendsFriendly"
// MNetworkVarNames "int m_nPersonaDataXpTrailLevel"
// MNetworkVarNames "ServerAuthoritativeWeaponSlot_t m_vecServerAuthoritativeWeaponSlots"
class CCSPlayerController_InventoryServices : public CPlayerControllerComponent
{
public:
	// MNetworkEnable
	uint16_t m_unMusicID; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0042[0x2]; // 0x42
public:
	// MNetworkEnable
	MedalRank_t m_rank[6]; // 0x44	
	// MNetworkEnable
	int32_t m_nPersonaDataPublicLevel; // 0x5c	
	// MNetworkEnable
	int32_t m_nPersonaDataPublicCommendsLeader; // 0x60	
	// MNetworkEnable
	int32_t m_nPersonaDataPublicCommendsTeacher; // 0x64	
	// MNetworkEnable
	int32_t m_nPersonaDataPublicCommendsFriendly; // 0x68	
	// MNetworkEnable
	int32_t m_nPersonaDataXpTrailLevel; // 0x6c	
private:
	[[maybe_unused]] uint8_t __pad0070[0xed8]; // 0x70
public:
	uint32_t m_unEquippedPlayerSprayIDs[1]; // 0xf48	
private:
	[[maybe_unused]] uint8_t __pad0f4c[0x4]; // 0xf4c
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CUtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t> m_vecServerAuthoritativeWeaponSlots; // 0xf50	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MNetworkVarNames "WeaponPurchaseCount_t m_weaponPurchases"
struct WeaponPurchaseTracker_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t> m_weaponPurchases; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "int32 m_totalHitsOnServer"
class CCSPlayer_BulletServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	int32_t m_totalHitsOnServer; // 0x40	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x118
// Has VTable
// 
// MNetworkVarNames "SellbackPurchaseEntry_t m_vecSellbackPurchaseEntries"
class CCSPlayer_BuyServices : public CPlayerPawnComponent
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x88]; // 0x40
public:
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t> m_vecSellbackPurchaseEntries; // 0xc8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a8
// Has VTable
// 
// MNetworkVarNames "uint32 m_iFOV"
// MNetworkVarNames "uint32 m_iFOVStart"
// MNetworkVarNames "GameTime_t m_flFOVTime"
// MNetworkVarNames "float32 m_flFOVRate"
// MNetworkVarNames "CHandle< CBaseEntity> m_hZoomOwner"
class CCSPlayerBase_CameraServices : public CPlayer_CameraServices
{
public:
	// MNetworkEnable
	uint32_t m_iFOV; // 0x170	
	// MNetworkEnable
	uint32_t m_iFOVStart; // 0x174	
	// MNetworkEnable
	GameTime_t m_flFOVTime; // 0x178	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFOVRate; // 0x17c	
	// MNetworkEnable
	CHandle<CBaseEntity> m_hZoomOwner; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	CUtlVector<CHandle<CBaseEntity>> m_hTriggerFogList; // 0x188	
	CHandle<CBaseEntity> m_hLastFogTrigger; // 0x1a0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_hCarriedHostage"
// MNetworkVarNames "CHandle< CBaseEntity> m_hCarriedHostageProp"
class CCSPlayer_HostageServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	CHandle<CBaseEntity> m_hCarriedHostage; // 0x40	
	// MNetworkEnable
	CHandle<CBaseEntity> m_hCarriedHostageProp; // 0x44	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_ItemServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x228
// Has VTable
// 
// MNetworkVarNames "float32 m_flFallVelocity"
// MNetworkVarNames "bool m_bInCrouch"
// MNetworkVarNames "uint32 m_nCrouchState"
// MNetworkVarNames "GameTime_t m_flCrouchTransitionStartTime"
// MNetworkVarNames "bool m_bDucked"
// MNetworkVarNames "bool m_bDucking"
// MNetworkVarNames "bool m_bInDuckJump"
class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices
{
public:
	float m_flStepSoundTime; // 0x1d8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkBitCount "17"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	// MNetworkEncodeFlags "4"
	float m_flFallVelocity; // 0x1dc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInCrouch; // 0x1e0	
private:
	[[maybe_unused]] uint8_t __pad01e1[0x3]; // 0x1e1
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nCrouchState; // 0x1e4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flCrouchTransitionStartTime; // 0x1e8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bDucked; // 0x1ec	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bDucking; // 0x1ed	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInDuckJump; // 0x1ee	
private:
	[[maybe_unused]] uint8_t __pad01ef[0x1]; // 0x1ef
public:
	Vector m_groundNormal; // 0x1f0	
	float m_flSurfaceFriction; // 0x1fc	
	CUtlStringToken m_surfaceProps; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0204[0xc]; // 0x204
public:
	int32_t m_nStepside; // 0x210	
	int32_t m_iTargetVolume; // 0x214	
	Vector m_vecSmoothedVelocity; // 0x218	
	
	// Datamap fields:
	// void m_pSurfaceData; // 0x208
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_hPlayerPing"
class CCSPlayer_PingServices : public CPlayerPawnComponent
{
public:
	GameTime_t m_flPlayerPingTokens[5]; // 0x40	
	// MNetworkEnable
	CHandle<CBaseEntity> m_hPlayerPing; // 0x54	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
class CCSPlayer_UseServices : public CPlayer_UseServices
{
public:
	CHandle<CBaseEntity> m_hLastKnownUseEntity; // 0x40	
	GameTime_t m_flLastUseTimeStamp; // 0x44	
	GameTime_t m_flTimeStartedHoldingUse; // 0x48	
	GameTime_t m_flTimeLastUsedWindow; // 0x4c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseViewModel > m_hViewModel"
class CCSPlayer_ViewModelServices : public CPlayer_ViewModelServices
{
public:
	// MNetworkEnable
	CHandle<CBaseViewModel> m_hViewModel[3]; // 0x40	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_WaterServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MNetworkVarNames "CHandle< CBasePlayerWeapon > m_hMyWeapons"
// MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hActiveWeapon"
// MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hLastWeapon"
// MNetworkVarNames "uint16 m_iAmmo"
class CPlayer_WeaponServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>> m_hMyWeapons; // 0x40	
	// MNetworkEnable
	CHandle<CBasePlayerWeapon> m_hActiveWeapon; // 0x58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle<CBasePlayerWeapon> m_hLastWeapon; // 0x5c	
	// MNetworkEnable
	uint16_t m_iAmmo[32]; // 0x60	
	bool m_bPreventWeaponPickup; // 0xa0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CCSTakeDamageInfoAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CCSWeaponBaseAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdb8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
class CCSWeaponBaseVData : public CBasePlayerWeaponVData
{
public:
	CSWeaponType m_WeaponType; // 0x248	
	CSWeaponCategory m_WeaponCategory; // 0x24c	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>> m_szViewModel; // 0x250	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>> m_szPlayerModel; // 0x330	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>> m_szWorldDroppedModel; // 0x410	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>> m_szAimsightLensMaskModel; // 0x4f0	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>> m_szMagazineModel; // 0x5d0	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>> m_szHeatEffect; // 0x6b0	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>> m_szEjectBrassEffect; // 0x790	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashParticleAlt; // 0x870	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashThirdPersonParticle; // 0x950	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashThirdPersonParticleAlt; // 0xa30	
	// MPropertyDescription "Effect to actually fire into the world from this weapon"
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>> m_szTracerParticle; // 0xb10	
	// MPropertyStartGroup "HUD Positions"
	// MPropertyFriendlyName "HUD Bucket"
	// MPropertyDescription "Which 'column' to display this weapon in the HUD"
	gear_slot_t m_GearSlot; // 0xbf0	
	int32_t m_GearSlotPosition; // 0xbf4	
	// MPropertyFriendlyName "HUD Bucket Position"
	// MPropertyDescription "Default team (non Terrorist or Counter-Terrorist) 'row' to display this weapon in the HUD."
	loadout_slot_t m_DefaultLoadoutSlot; // 0xbf8	
private:
	[[maybe_unused]] uint8_t __pad0bfc[0x4]; // 0xbfc
public:
	CUtlString m_sWrongTeamMsg; // 0xc00	
	// MPropertyStartGroup "In-Game Data"
	int32_t m_nPrice; // 0xc08	
	int32_t m_nKillAward; // 0xc0c	
	int32_t m_nPrimaryReserveAmmoMax; // 0xc10	
	int32_t m_nSecondaryReserveAmmoMax; // 0xc14	
	bool m_bMeleeWeapon; // 0xc18	
	bool m_bHasBurstMode; // 0xc19	
	bool m_bIsRevolver; // 0xc1a	
	bool m_bCannotShootUnderwater; // 0xc1b	
private:
	[[maybe_unused]] uint8_t __pad0c1c[0x4]; // 0xc1c
public:
	// MPropertyFriendlyName "In-Code weapon name"
	CGlobalSymbol m_szName; // 0xc20	
	// MPropertyFriendlyName "Player Animation Extension"
	CUtlString m_szAnimExtension; // 0xc28	
	CSWeaponSilencerType m_eSilencerType; // 0xc30	
	int32_t m_nCrosshairMinDistance; // 0xc34	
	int32_t m_nCrosshairDeltaDistance; // 0xc38	
	bool m_bIsFullAuto; // 0xc3c	
private:
	[[maybe_unused]] uint8_t __pad0c3d[0x3]; // 0xc3d
public:
	int32_t m_nNumBullets; // 0xc40	
	// MPropertyStartGroup "Firing Mode Data"
	CFiringModeFloat m_flCycleTime; // 0xc44	
	CFiringModeFloat m_flMaxSpeed; // 0xc4c	
	CFiringModeFloat m_flSpread; // 0xc54	
	CFiringModeFloat m_flInaccuracyCrouch; // 0xc5c	
	CFiringModeFloat m_flInaccuracyStand; // 0xc64	
	CFiringModeFloat m_flInaccuracyJump; // 0xc6c	
	CFiringModeFloat m_flInaccuracyLand; // 0xc74	
	CFiringModeFloat m_flInaccuracyLadder; // 0xc7c	
	CFiringModeFloat m_flInaccuracyFire; // 0xc84	
	CFiringModeFloat m_flInaccuracyMove; // 0xc8c	
	CFiringModeFloat m_flRecoilAngle; // 0xc94	
	CFiringModeFloat m_flRecoilAngleVariance; // 0xc9c	
	CFiringModeFloat m_flRecoilMagnitude; // 0xca4	
	CFiringModeFloat m_flRecoilMagnitudeVariance; // 0xcac	
	CFiringModeInt m_nTracerFrequency; // 0xcb4	
	float m_flInaccuracyJumpInitial; // 0xcbc	
	float m_flInaccuracyJumpApex; // 0xcc0	
	float m_flInaccuracyReload; // 0xcc4	
	// MPropertyStartGroup "Firing"
	int32_t m_nRecoilSeed; // 0xcc8	
	int32_t m_nSpreadSeed; // 0xccc	
	float m_flTimeToIdleAfterFire; // 0xcd0	
	float m_flIdleInterval; // 0xcd4	
	float m_flAttackMovespeedFactor; // 0xcd8	
	float m_flHeatPerShot; // 0xcdc	
	float m_flInaccuracyPitchShift; // 0xce0	
	float m_flInaccuracyAltSoundThreshold; // 0xce4	
	float m_flBotAudibleRange; // 0xce8	
private:
	[[maybe_unused]] uint8_t __pad0cec[0x4]; // 0xcec
public:
	CUtlString m_szUseRadioSubtitle; // 0xcf0	
	// MPropertyStartGroup "Zooming"
	bool m_bUnzoomsAfterShot; // 0xcf8	
	bool m_bHideViewModelWhenZoomed; // 0xcf9	
private:
	[[maybe_unused]] uint8_t __pad0cfa[0x2]; // 0xcfa
public:
	int32_t m_nZoomLevels; // 0xcfc	
	int32_t m_nZoomFOV1; // 0xd00	
	int32_t m_nZoomFOV2; // 0xd04	
	float m_flZoomTime0; // 0xd08	
	float m_flZoomTime1; // 0xd0c	
	float m_flZoomTime2; // 0xd10	
	// MPropertyStartGroup "Iron Sights"
	float m_flIronSightPullUpSpeed; // 0xd14	
	float m_flIronSightPutDownSpeed; // 0xd18	
	float m_flIronSightFOV; // 0xd1c	
	float m_flIronSightPivotForward; // 0xd20	
	float m_flIronSightLooseness; // 0xd24	
	QAngle m_angPivotAngle; // 0xd28	
	Vector m_vecIronSightEyePos; // 0xd34	
	// MPropertyStartGroup "Damage"
	int32_t m_nDamage; // 0xd40	
	float m_flHeadshotMultiplier; // 0xd44	
	float m_flArmorRatio; // 0xd48	
	float m_flPenetration; // 0xd4c	
	float m_flRange; // 0xd50	
	float m_flRangeModifier; // 0xd54	
	float m_flFlinchVelocityModifierLarge; // 0xd58	
	float m_flFlinchVelocityModifierSmall; // 0xd5c	
	// MPropertyStartGroup "Recovery"
	float m_flRecoveryTimeCrouch; // 0xd60	
	float m_flRecoveryTimeStand; // 0xd64	
	float m_flRecoveryTimeCrouchFinal; // 0xd68	
	float m_flRecoveryTimeStandFinal; // 0xd6c	
	int32_t m_nRecoveryTransitionStartBullet; // 0xd70	
	int32_t m_nRecoveryTransitionEndBullet; // 0xd74	
	// MPropertyStartGroup "Grenade Data"
	float m_flThrowVelocity; // 0xd78	
	Vector m_vSmokeColor; // 0xd7c	
	CGlobalSymbol m_szAnimClass; // 0xd88	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CCSWeaponBaseVDataAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
// Has Trivial Destructor
class IClientAlphaProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
class CClientPointEntityAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "uint64 m_nInteractsAs"
// MNetworkVarNames "uint64 m_nInteractsWith"
// MNetworkVarNames "uint64 m_nInteractsExclude"
// MNetworkVarNames "uint32 m_nEntityId"
// MNetworkVarNames "uint32 m_nOwnerId"
// MNetworkVarNames "uint16 m_nHierarchyId"
// MNetworkVarNames "uint8 m_nCollisionGroup"
// MNetworkVarNames "uint8 m_nCollisionFunctionMask"
struct VPhysicsCollisionAttribute_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	uint64_t m_nInteractsAs; // 0x8	
	// MNetworkEnable
	uint64_t m_nInteractsWith; // 0x10	
	// MNetworkEnable
	uint64_t m_nInteractsExclude; // 0x18	
	// MNetworkEnable
	uint32_t m_nEntityId; // 0x20	
	// MNetworkEnable
	uint32_t m_nOwnerId; // 0x24	
	// MNetworkEnable
	uint16_t m_nHierarchyId; // 0x28	
	// MNetworkEnable
	uint8_t m_nCollisionGroup; // 0x2a	
	// MNetworkEnable
	uint8_t m_nCollisionFunctionMask; // 0x2b	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
class CCompositeMaterialEditorDoc
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	int32_t m_nVersion; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector<CompositeMaterialEditorPoint_t> m_Points; // 0x10	
	KeyValues3 m_KVthumbnail; // 0x28	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x70
// 
// MNetworkVarNames "CHandle< CCSPlayerPawnBase > m_PlayerDamager"
// MNetworkVarNames "CHandle< CCSPlayerPawnBase > m_PlayerRecipient"
// MNetworkVarNames "CHandle< CCSPlayerController > m_hPlayerControllerDamager"
// MNetworkVarNames "CHandle< CCSPlayerController > m_hPlayerControllerRecipient"
// MNetworkVarNames "CUtlString m_szPlayerDamagerName"
// MNetworkVarNames "CUtlString m_szPlayerRecipientName"
// MNetworkVarNames "uint64 m_DamagerXuid"
// MNetworkVarNames "uint64 m_RecipientXuid"
// MNetworkVarNames "int m_iDamage"
// MNetworkVarNames "int m_iActualHealthRemoved"
// MNetworkVarNames "int m_iNumHits"
// MNetworkVarNames "int m_iLastBulletUpdate"
// MNetworkVarNames "bool m_bIsOtherEnemy"
// MNetworkVarNames "EKillTypes_t m_killType"
class CDamageRecord
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// MNetworkEnable
	CHandle<CCSPlayerPawnBase> m_PlayerDamager; // 0x28	
	// MNetworkEnable
	CHandle<CCSPlayerPawnBase> m_PlayerRecipient; // 0x2c	
	// MNetworkEnable
	CHandle<CCSPlayerController> m_hPlayerControllerDamager; // 0x30	
	// MNetworkEnable
	CHandle<CCSPlayerController> m_hPlayerControllerRecipient; // 0x34	
	// MNetworkEnable
	CUtlString m_szPlayerDamagerName; // 0x38	
	// MNetworkEnable
	CUtlString m_szPlayerRecipientName; // 0x40	
	// MNetworkEnable
	uint64_t m_DamagerXuid; // 0x48	
	// MNetworkEnable
	uint64_t m_RecipientXuid; // 0x50	
	// MNetworkEnable
	int32_t m_iDamage; // 0x58	
	// MNetworkEnable
	int32_t m_iActualHealthRemoved; // 0x5c	
	// MNetworkEnable
	int32_t m_iNumHits; // 0x60	
	// MNetworkEnable
	int32_t m_iLastBulletUpdate; // 0x64	
	// MNetworkEnable
	bool m_bIsOtherEnemy; // 0x68	
	// MNetworkEnable
	EKillTypes_t m_killType; // 0x69	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb0
class CDecalInfo
{
public:
	float m_flAnimationScale; // 0x0	
	float m_flAnimationLifeSpan; // 0x4	
	float m_flPlaceTime; // 0x8	
	float m_flFadeStartTime; // 0xc	
	float m_flFadeDuration; // 0x10	
	int32_t m_nVBSlot; // 0x14	
	int32_t m_nBoneIndex; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0xc]; // 0x1c
public:
	Vector m_vPosition; // 0x28	
	float m_flBoundingRadiusSqr; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
public:
	CDecalInfo* m_pNext; // 0x40	
	CDecalInfo* m_pPrev; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0050[0x58]; // 0x50
public:
	int32_t m_nDecalMaterialIndex; // 0xa8	
	
	// Datamap fields:
	// void m_decalEvent; // 0x50
	// void m_hProjectedDecal; // 0x20
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CDynamicPropAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "attrib_definition_index_t m_iAttributeDefinitionIndex"
// MNetworkVarNames "float m_flValue"
// MNetworkVarNames "float m_flInitialValue"
// MNetworkVarNames "int m_nRefundableCurrency"
// MNetworkVarNames "bool m_bSetBonus"
class CEconItemAttribute
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	uint16_t m_iAttributeDefinitionIndex; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0032[0x2]; // 0x32
public:
	// MNetworkEnable
	// MNetworkAlias "m_iRawValue32"
	float m_flValue; // 0x34	
	// MNetworkEnable
	float m_flInitialValue; // 0x38	
	// MNetworkEnable
	int32_t m_nRefundableCurrency; // 0x3c	
	// MNetworkEnable
	bool m_bSetBonus; // 0x40	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x70
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "Vector m_vOrigin"
// MNetworkVarNames "Vector m_vStart"
// MNetworkVarNames "Vector m_vNormal"
// MNetworkVarNames "QAngle m_vAngles"
// MNetworkVarNames "CEntityHandle m_hEntity"
// MNetworkVarNames "CEntityHandle m_hOtherEntity"
// MNetworkVarNames "float32 m_flScale"
// MNetworkVarNames "float32 m_flMagnitude"
// MNetworkVarNames "float32 m_flRadius"
// MNetworkVarNames "CUtlStringToken m_nSurfaceProp"
// MNetworkVarNames "HParticleSystemDefinition m_nEffectIndex"
// MNetworkVarNames "uint32 m_nDamageType"
// MNetworkVarNames "uint8 m_nPenetrate"
// MNetworkVarNames "uint16 m_nMaterial"
// MNetworkVarNames "uint16 m_nHitBox"
// MNetworkVarNames "uint8 m_nColor"
// MNetworkVarNames "uint8 m_fFlags"
// MNetworkVarNames "AttachmentHandle_t m_nAttachmentIndex"
// MNetworkVarNames "CUtlStringToken m_nAttachmentName"
// MNetworkVarNames "uint16 m_iEffectName"
// MNetworkVarNames "uint8 m_nExplosionType"
class CEffectData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEncoder "coord_integral"
	Vector m_vOrigin; // 0x8	
	// MNetworkEnable
	// MNetworkEncoder "coord_integral"
	Vector m_vStart; // 0x14	
	// MNetworkEnable
	// MNetworkEncoder "normal"
	Vector m_vNormal; // 0x20	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	QAngle m_vAngles; // 0x2c	
	// MNetworkEnable
	CEntityHandle m_hEntity; // 0x38	
	// MNetworkEnable
	CEntityHandle m_hOtherEntity; // 0x3c	
	// MNetworkEnable
	float m_flScale; // 0x40	
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1023.000000"
	// MNetworkEncodeFlags "1"
	float m_flMagnitude; // 0x44	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1023.000000"
	// MNetworkEncodeFlags "1"
	float m_flRadius; // 0x48	
	// MNetworkEnable
	CUtlStringToken m_nSurfaceProp; // 0x4c	
	// MNetworkEnable
	CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> m_nEffectIndex; // 0x50	
	// MNetworkEnable
	uint32_t m_nDamageType; // 0x58	
	// MNetworkEnable
	uint8_t m_nPenetrate; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad005d[0x1]; // 0x5d
public:
	// MNetworkEnable
	uint16_t m_nMaterial; // 0x5e	
	// MNetworkEnable
	uint16_t m_nHitBox; // 0x60	
	// MNetworkEnable
	uint8_t m_nColor; // 0x62	
	// MNetworkEnable
	uint8_t m_fFlags; // 0x63	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachmentIndex; // 0x64	
private:
	[[maybe_unused]] uint8_t __pad0065[0x3]; // 0x65
public:
	// MNetworkEnable
	CUtlStringToken m_nAttachmentName; // 0x68	
	// MNetworkEnable
	uint16_t m_iEffectName; // 0x6c	
	// MNetworkEnable
	uint8_t m_nExplosionType; // 0x6e	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x3e0
// Has VTable
// 
// MNetworkVarNames "CModelState m_modelState"
// MNetworkVarNames "bool m_bIsAnimationEnabled"
// MNetworkVarNames "bool m_bUseParentRenderBounds"
// MNetworkVarNames "CUtlStringToken m_materialGroup"
// MNetworkVarNames "uint8 m_nHitboxSet"
class CSkeletonInstance : public CGameSceneNode
{
private:
	[[maybe_unused]] uint8_t __pad0150[0x10]; // 0x150
public:
	// MNetworkEnable
	// -> m_hModel - 0x200
	// -> m_ModelName - 0x208
	// -> m_bClientClothCreationSuppressed - 0x248
	// -> m_MeshGroupMask - 0x2e0
	// -> m_nIdealMotionType - 0x362
	// -> m_nForceLOD - 0x363
	// -> m_nClothUpdateFlags - 0x364
	CModelState m_modelState; // 0x160	
	// MNetworkEnable
	bool m_bIsAnimationEnabled; // 0x370	
	// MNetworkEnable
	bool m_bUseParentRenderBounds; // 0x371	
	// MNetworkDisable
	bool m_bDisableSolidCollisionsForHierarchy; // 0x372	
	struct 
	{
		// MNetworkDisable
		uint8_t m_bDirtyMotionType: 1; 		
		// MNetworkDisable
		uint8_t m_bIsGeneratingLatchedParentSpaceState: 1; 		
		uint16_t __pad1: 14;
	}; // 16 bits
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMaterialGroupChanged"
	CUtlStringToken m_materialGroup; // 0x374	
	// MNetworkEnable
	uint8_t m_nHitboxSet; // 0x378	
	
	// Datamap fields:
	// Vector velocity; // 0x7fffffff
	// Vector rotationAxis; // 0x7fffffff
	// float rotationSpeed; // 0x7fffffff
};

// Registered binary: server.dll (project 'entity2')
// Alignment: 8
// Size: 0x78
// 
// MNetworkVarNames "int32 m_nameStringableIndex"
class CEntityIdentity
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x14]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "entityIdentityNameChanged"
	int32_t m_nameStringableIndex; // 0x14	
	CUtlSymbolLarge m_name; // 0x18	
	CUtlSymbolLarge m_designerName; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	uint32_t m_flags; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	// MNetworkDisable
	WorldGroupId_t m_worldGroupId; // 0x38	
	uint32_t m_fDataObjectTypes; // 0x3c	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0042[0x16]; // 0x42
public:
	CEntityIdentity* m_pPrev; // 0x58	
	CEntityIdentity* m_pNext; // 0x60	
	CEntityIdentity* m_pPrevByClass; // 0x68	
	CEntityIdentity* m_pNextByClass; // 0x70	
	
	// Datamap fields:
	// void m_pAttributes; // 0x48
};

// Registered binary: server.dll (project 'entity2')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MNetworkVarNames "CEntityIdentity * m_pEntity"
// MNetworkVarNames "CScriptComponent::Storage_t m_CScriptComponent"
class CEntityInstance
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	CUtlSymbolLarge m_iszPrivateVScripts; // 0x8	
	// MNetworkEnable
	// MNetworkPriority "56"
	CEntityIdentity* m_pEntity; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0018[0x10]; // 0x18
public:
	// MNetworkEnable
	// MNetworkDisable
	CScriptComponent* m_CScriptComponent; // 0x28	
	bool m_bVisibleinPVS; // 0x30	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CGlowOverlay
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_vPos; // 0x8	
	bool m_bDirectional; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	Vector m_vDirection; // 0x18	
	bool m_bInSky; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0025[0x3]; // 0x25
public:
	float m_skyObstructionScale; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	CGlowSprite m_Sprites[4]; // 0x30	
	int32_t m_nSprites; // 0xb0	
	float m_flProxyRadius; // 0xb4	
	float m_flHDRColorScale; // 0xb8	
	float m_flGlowObstructionScale; // 0xbc	
	bool m_bCacheGlowObstruction; // 0xc0	
	bool m_bCacheSkyObstruction; // 0xc1	
	int16_t m_bActivated; // 0xc2	
	uint16_t m_ListIndex; // 0xc4	
private:
	[[maybe_unused]] uint8_t __pad00c6[0x2]; // 0xc6
public:
	int32_t m_queryHandle; // 0xc8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2e0
// Has VTable
class CFlashlightEffect
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	bool m_bIsOn; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0xf]; // 0x11
public:
	bool m_bMuzzleFlashEnabled; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x3]; // 0x21
public:
	float m_flMuzzleFlashBrightness; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	Quaternion m_quatMuzzleFlashOrientation; // 0x30	
	Vector m_vecMuzzleFlashOrigin; // 0x40	
	float m_flFov; // 0x4c	
	float m_flFarZ; // 0x50	
	float m_flLinearAtten; // 0x54	
	bool m_bCastsShadows; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
public:
	float m_flCurrentPullBackDist; // 0x5c	
	CStrongHandle<InfoForResourceTypeCTextureBase> m_FlashlightTexture; // 0x60	
	CStrongHandle<InfoForResourceTypeCTextureBase> m_MuzzleFlashTexture; // 0x68	
	char m_textureName[64]; // 0x70	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x730
// Has VTable
class CFuncWater : public CBaseModelEntity
{
public:
	CBuoyancyHelper m_BuoyancyHelper; // 0x710	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x460
// Has VTable
// 
// MNetworkVarNames "CSkeletonInstance m_skeletonInstance"
class CBodyComponentSkeletonInstance : public CBodyComponent
{
public:
	// MNetworkEnable
	// -> m_modelState - 0x1b0
	// -> m_bIsAnimationEnabled - 0x3c0
	// -> m_bUseParentRenderBounds - 0x3c1
	// -> m_bDisableSolidCollisionsForHierarchy - 0x3c2
	// -> m_materialGroup - 0x3c4
	// -> m_nHitboxSet - 0x3c8
	CSkeletonInstance m_skeletonInstance; // 0x50	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x430	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[1]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MNetworkVarNames "CGameSceneNode m_sceneNode"
class CBodyComponentPoint : public CBodyComponent
{
public:
	// MNetworkEnable
	CGameSceneNode m_sceneNode; // 0x50	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x1a0	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CGlobalLightBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	bool m_bSpotLight; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	Vector m_SpotLightOrigin; // 0x14	
	QAngle m_SpotLightAngles; // 0x20	
	Vector m_ShadowDirection; // 0x2c	
	Vector m_AmbientDirection; // 0x38	
	Vector m_SpecularDirection; // 0x44	
	Vector m_InspectorSpecularDirection; // 0x50	
	float m_flSpecularPower; // 0x5c	
	float m_flSpecularIndependence; // 0x60	
	Color m_SpecularColor; // 0x64	
	bool m_bStartDisabled; // 0x68	
	bool m_bEnabled; // 0x69	
	Color m_LightColor; // 0x6a	
	Color m_AmbientColor1; // 0x6e	
	Color m_AmbientColor2; // 0x72	
	Color m_AmbientColor3; // 0x76	
private:
	[[maybe_unused]] uint8_t __pad007a[0x2]; // 0x7a
public:
	float m_flSunDistance; // 0x7c	
	float m_flFOV; // 0x80	
	float m_flNearZ; // 0x84	
	float m_flFarZ; // 0x88	
	bool m_bEnableShadows; // 0x8c	
	bool m_bOldEnableShadows; // 0x8d	
	bool m_bBackgroundClearNotRequired; // 0x8e	
private:
	[[maybe_unused]] uint8_t __pad008f[0x1]; // 0x8f
public:
	float m_flCloudScale; // 0x90	
	float m_flCloud1Speed; // 0x94	
	float m_flCloud1Direction; // 0x98	
	float m_flCloud2Speed; // 0x9c	
	float m_flCloud2Direction; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a4[0xc]; // 0xa4
public:
	float m_flAmbientScale1; // 0xb0	
	float m_flAmbientScale2; // 0xb4	
	float m_flGroundScale; // 0xb8	
	float m_flLightScale; // 0xbc	
	float m_flFoWDarkness; // 0xc0	
	bool m_bEnableSeparateSkyboxFog; // 0xc4	
private:
	[[maybe_unused]] uint8_t __pad00c5[0x3]; // 0xc5
public:
	Vector m_vFowColor; // 0xc8	
	Vector m_ViewOrigin; // 0xd4	
	QAngle m_ViewAngles; // 0xe0	
	float m_flViewFoV; // 0xec	
	Vector m_WorldPoints[8]; // 0xf0	
private:
	[[maybe_unused]] uint8_t __pad0150[0x358]; // 0x150
public:
	Vector2D m_vFogOffsetLayer0; // 0x4a8	
	Vector2D m_vFogOffsetLayer1; // 0x4b0	
	CHandle<C_BaseEntity> m_hEnvWind; // 0x4b8	
	CHandle<C_BaseEntity> m_hEnvSky; // 0x4bc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x110
// Has VTable
class CFireOverlay : public CGlowOverlay
{
public:
	C_FireSmoke* m_pOwner; // 0xd0	
	Vector m_vBaseColors[4]; // 0xd8	
	float m_flScale; // 0x108	
	int32_t m_nGUID; // 0x10c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MNetworkVarNames "int32 m_iGlowType"
// MNetworkVarNames "int32 m_iGlowTeam"
// MNetworkVarNames "int32 m_nGlowRange"
// MNetworkVarNames "int32 m_nGlowRangeMin"
// MNetworkVarNames "Color m_glowColorOverride"
// MNetworkVarNames "bool m_bFlashing"
// MNetworkVarNames "float m_flGlowTime"
// MNetworkVarNames "float m_flGlowStartTime"
// MNetworkVarNames "bool m_bEligibleForScreenHighlight"
class CGlowProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_fGlowColor; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0014[0x1c]; // 0x14
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowTypeChanged"
	int32_t m_iGlowType; // 0x30	
	// MNetworkEnable
	int32_t m_iGlowTeam; // 0x34	
	// MNetworkEnable
	int32_t m_nGlowRange; // 0x38	
	// MNetworkEnable
	int32_t m_nGlowRangeMin; // 0x3c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowColorChanged"
	Color m_glowColorOverride; // 0x40	
	// MNetworkEnable
	bool m_bFlashing; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
public:
	// MNetworkEnable
	float m_flGlowTime; // 0x48	
	// MNetworkEnable
	float m_flGlowStartTime; // 0x4c	
	// MNetworkEnable
	bool m_bEligibleForScreenHighlight; // 0x50	
	bool m_bGlowing; // 0x51	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
class CGlowSprite
{
public:
	Vector m_vColor; // 0x0	
	float m_flHorzSize; // 0xc	
	float m_flVertSize; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CStrongHandle<InfoForResourceTypeIMaterial2> m_hMaterial; // 0x18	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MNetworkVarNames "uint32 m_bvDisabledHitGroups"
class CHitboxComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x1c]; // 0x8
public:
	// MNetworkEnable
	uint32_t m_bvDisabledHitGroups[1]; // 0x24	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CHitboxComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CHitboxComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8b8
// Has VTable
class CHostageRescueZoneShim : public CBaseTrigger
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8c8
// Has VTable
class CHostageRescueZone : public CHostageRescueZoneShim
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CInfoDynamicShadowHint : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	float m_flRange; // 0x4c4	
	int32_t m_nImportance; // 0x4c8	
	int32_t m_nLightChoice; // 0x4cc	
	CHandle<CBaseEntity> m_hLight; // 0x4d0	
	
	// Static fields:
	static CUtlVector< CInfoDynamicShadowHint* > &Get_m_AllHints(){return *reinterpret_cast<CUtlVector< CInfoDynamicShadowHint* >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint
{
public:
	Vector m_vBoxMins; // 0x4d8	
	Vector m_vBoxMaxs; // 0x4e4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x538
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "int m_nResolutionX"
// MNetworkVarNames "int m_nResolutionY"
// MNetworkVarNames "string_t m_szLayoutFileName"
// MNetworkVarNames "string_t m_RenderAttrName"
// MNetworkVarNames "CHandle< CBaseModelEntity > m_TargetEntities"
// MNetworkVarNames "int m_nTargetChangeCount"
// MNetworkVarNames "string_t m_vecCSSClasses"
class CInfoOffscreenPanoramaTexture : public CPointEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	// MNetworkEnable
	int32_t m_nResolutionX; // 0x4c4	
	// MNetworkEnable
	int32_t m_nResolutionY; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szLayoutFileName; // 0x4d0	
	// MNetworkEnable
	CUtlSymbolLarge m_RenderAttrName; // 0x4d8	
	// MNetworkEnable
	CNetworkUtlVectorBase<CHandle<CBaseModelEntity>> m_TargetEntities; // 0x4e0	
	// MNetworkEnable
	int32_t m_nTargetChangeCount; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	// MNetworkEnable
	CNetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses; // 0x500	
	CUtlSymbolLarge m_szTargetsName; // 0x518	
	CUtlVector<CHandle<CBaseModelEntity>> m_AdditionalTargetEntities; // 0x520	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlSymbolLarge InputAddCSSClass; // 0x0
	// CUtlSymbolLarge InputRemoveCSSClass; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CInfoParticleTarget : public CPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CInfoTarget : public CPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
// 
// MNetworkVarNames "string_t m_worldName"
// MNetworkVarNames "string_t m_layerName"
// MNetworkVarNames "bool m_bWorldLayerVisible"
// MNetworkVarNames "bool m_bEntitiesSpawned"
class CInfoWorldLayer : public CBaseEntity
{
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x4c0	
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; // 0x4e8	
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; // 0x4f0	
	// MNetworkEnable
	bool m_bWorldLayerVisible; // 0x4f8	
	// MNetworkEnable
	bool m_bEntitiesSpawned; // 0x4f9	
	bool m_bCreateAsChildSpawnGroup; // 0x4fa	
private:
	[[maybe_unused]] uint8_t __pad04fb[0x1]; // 0x4fb
public:
	uint32_t m_hLayerSpawnGroup; // 0x4fc	
	
	// Datamap fields:
	// void ShowWorldLayer; // 0x0
	// void HideWorldLayer; // 0x0
	// void SpawnEntities; // 0x0
	// void DestroyEntities; // 0x0
	// void ShowWorldLayerAndSpawnEntities; // 0x0
	// void HideWorldLayerAndDestroyEntities; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14
// Has Trivial Destructor
class CInterpolatedValue
{
public:
	float m_flStartTime; // 0x0	
	float m_flEndTime; // 0x4	
	float m_flStartValue; // 0x8	
	float m_flEndValue; // 0xc	
	int32_t m_nInterpType; // 0x10	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "Color m_SecondaryColor"
// MNetworkVarNames "float m_flBrightness"
// MNetworkVarNames "float m_flBrightnessScale"
// MNetworkVarNames "float m_flBrightnessMult"
// MNetworkVarNames "float m_flRange"
// MNetworkVarNames "float m_flFalloff"
// MNetworkVarNames "float m_flAttenuation0"
// MNetworkVarNames "float m_flAttenuation1"
// MNetworkVarNames "float m_flAttenuation2"
// MNetworkVarNames "float m_flTheta"
// MNetworkVarNames "float m_flPhi"
// MNetworkVarNames "HRenderTextureStrong m_hLightCookie"
// MNetworkVarNames "int m_nCascades"
// MNetworkVarNames "int m_nCastShadows"
// MNetworkVarNames "int m_nShadowWidth"
// MNetworkVarNames "int m_nShadowHeight"
// MNetworkVarNames "bool m_bRenderDiffuse"
// MNetworkVarNames "int m_nRenderSpecular"
// MNetworkVarNames "bool m_bRenderTransmissive"
// MNetworkVarNames "float m_flOrthoLightWidth"
// MNetworkVarNames "float m_flOrthoLightHeight"
// MNetworkVarNames "int m_nStyle"
// MNetworkVarNames "CUtlString m_Pattern"
// MNetworkVarNames "int m_nCascadeRenderStaticObjects"
// MNetworkVarNames "float m_flShadowCascadeCrossFade"
// MNetworkVarNames "float m_flShadowCascadeDistanceFade"
// MNetworkVarNames "float m_flShadowCascadeDistance0"
// MNetworkVarNames "float m_flShadowCascadeDistance1"
// MNetworkVarNames "float m_flShadowCascadeDistance2"
// MNetworkVarNames "float m_flShadowCascadeDistance3"
// MNetworkVarNames "int m_nShadowCascadeResolution0"
// MNetworkVarNames "int m_nShadowCascadeResolution1"
// MNetworkVarNames "int m_nShadowCascadeResolution2"
// MNetworkVarNames "int m_nShadowCascadeResolution3"
// MNetworkVarNames "bool m_bUsesBakedShadowing"
// MNetworkVarNames "int m_nShadowPriority"
// MNetworkVarNames "int m_nBakedShadowIndex"
// MNetworkVarNames "bool m_bRenderToCubemaps"
// MNetworkVarNames "int m_nDirectLight"
// MNetworkVarNames "int m_nIndirectLight"
// MNetworkVarNames "float m_flFadeMinDist"
// MNetworkVarNames "float m_flFadeMaxDist"
// MNetworkVarNames "float m_flShadowFadeMinDist"
// MNetworkVarNames "float m_flShadowFadeMaxDist"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bFlicker"
// MNetworkVarNames "bool m_bPrecomputedFieldsValid"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMins"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMaxs"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent"
// MNetworkVarNames "float m_flPrecomputedMaxRange"
// MNetworkVarNames "int m_nFogLightingMode"
// MNetworkVarNames "float m_flFogContributionStength"
// MNetworkVarNames "float m_flNearClipPlane"
// MNetworkVarNames "Color m_SkyColor"
// MNetworkVarNames "float m_flSkyIntensity"
// MNetworkVarNames "Color m_SkyAmbientBounce"
// MNetworkVarNames "bool m_bUseSecondaryColor"
// MNetworkVarNames "bool m_bMixedShadows"
// MNetworkVarNames "GameTime_t m_flLightStyleStartTime"
// MNetworkVarNames "float m_flCapsuleLength"
// MNetworkVarNames "float m_flMinRoughness"
class CLightComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x40]; // 0x8
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0070[0x15]; // 0x70
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	Color m_Color; // 0x85	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	Color m_SecondaryColor; // 0x89	
private:
	[[maybe_unused]] uint8_t __pad008d[0x3]; // 0x8d
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightness; // 0x90	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightnessScale; // 0x94	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightnessMult; // 0x98	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flRange; // 0x9c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFalloff; // 0xa0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation0; // 0xa4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation1; // 0xa8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation2; // 0xac	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flTheta; // 0xb0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flPhi; // 0xb4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CStrongHandle<InfoForResourceTypeCTextureBase> m_hLightCookie; // 0xb8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCascades; // 0xc0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCastShadows; // 0xc4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowWidth; // 0xc8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowHeight; // 0xcc	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderDiffuse; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d1[0x3]; // 0xd1
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nRenderSpecular; // 0xd4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderTransmissive; // 0xd8	
private:
	[[maybe_unused]] uint8_t __pad00d9[0x3]; // 0xd9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flOrthoLightWidth; // 0xdc	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flOrthoLightHeight; // 0xe0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nStyle; // 0xe4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CUtlString m_Pattern; // 0xe8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCascadeRenderStaticObjects; // 0xf0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeCrossFade; // 0xf4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistanceFade; // 0xf8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance0; // 0xfc	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance1; // 0x100	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance2; // 0x104	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance3; // 0x108	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution0; // 0x10c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution1; // 0x110	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution2; // 0x114	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution3; // 0x118	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	// MNetworkAlias "m_bUsesIndexedBakedLighting"
	bool m_bUsesBakedShadowing; // 0x11c	
private:
	[[maybe_unused]] uint8_t __pad011d[0x3]; // 0x11d
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowPriority; // 0x120	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nBakedShadowIndex; // 0x124	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderToCubemaps; // 0x128	
private:
	[[maybe_unused]] uint8_t __pad0129[0x3]; // 0x129
public:
	// MNetworkEnable
	int32_t m_nDirectLight; // 0x12c	
	// MNetworkEnable
	int32_t m_nIndirectLight; // 0x130	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMinDist; // 0x134	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMaxDist; // 0x138	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMinDist; // 0x13c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMaxDist; // 0x140	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bEnabled; // 0x144	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bFlicker; // 0x145	
	// MNetworkEnable
	bool m_bPrecomputedFieldsValid; // 0x146	
private:
	[[maybe_unused]] uint8_t __pad0147[0x1]; // 0x147
public:
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMins; // 0x148	
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMaxs; // 0x154	
	// MNetworkEnable
	Vector m_vPrecomputedOBBOrigin; // 0x160	
	// MNetworkEnable
	QAngle m_vPrecomputedOBBAngles; // 0x16c	
	// MNetworkEnable
	Vector m_vPrecomputedOBBExtent; // 0x178	
	// MNetworkEnable
	float m_flPrecomputedMaxRange; // 0x184	
	// MNetworkEnable
	int32_t m_nFogLightingMode; // 0x188	
	// MNetworkEnable
	float m_flFogContributionStength; // 0x18c	
	// MNetworkEnable
	float m_flNearClipPlane; // 0x190	
	// MNetworkEnable
	Color m_SkyColor; // 0x194	
	// MNetworkEnable
	float m_flSkyIntensity; // 0x198	
	// MNetworkEnable
	Color m_SkyAmbientBounce; // 0x19c	
	// MNetworkEnable
	bool m_bUseSecondaryColor; // 0x1a0	
	// MNetworkEnable
	// MNetworkChangeCallback "MixedShadowsChanged"
	bool m_bMixedShadows; // 0x1a1	
private:
	[[maybe_unused]] uint8_t __pad01a2[0x2]; // 0x1a2
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	GameTime_t m_flLightStyleStartTime; // 0x1a4	
	// MNetworkEnable
	float m_flCapsuleLength; // 0x1a8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flMinRoughness; // 0x1ac	
private:
	[[maybe_unused]] uint8_t __pad01b0[0x10]; // 0x1b0
public:
	bool m_bPvsModifyEntity; // 0x1c0	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CLightComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CLightComponent")->m_static_fields[1]->m_instance);};
	
	// Datamap fields:
	// SHIM m_bRenderSpecular; // 0xd4
	// SHIM m_bCastShadows; // 0xc4
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CLogicalEntity : public CServerOnlyEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
class CLogicRelay : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x4c0	
	CEntityIOOutput m_OnSpawn; // 0x4e8	
	bool m_bDisabled; // 0x510	
	bool m_bWaitForRefire; // 0x511	
	bool m_bTriggerOnce; // 0x512	
	bool m_bFastRetrigger; // 0x513	
	bool m_bPassthoughCaller; // 0x514	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputEnableRefire; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTrigger; // 0x0
	// void InputCancelPending; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x490
// Has VTable
class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x460	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fields[1]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "HSequence m_hSequence"
// MNetworkVarNames "float32 m_flPrevCycle"
// MNetworkVarNames "float32 m_flCycle"
class CNetworkedSequenceOperation
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkChangeCallback "sequenceOpSequenceChanged"
	// MNetworkPriority "32"
	HSequence m_hSequence; // 0x8	
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "8"
	// MNetworkPriority "32"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	float m_flPrevCycle; // 0xc	
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "8"
	// MNetworkPriority "32"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	float m_flCycle; // 0x10	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "0"
	CNetworkedQuantizedFloat m_flWeight; // 0x14	
	// MNetworkDisable
	bool m_bSequenceChangeNetworked; // 0x1c	
	// MNetworkDisable
	bool m_bDiscontinuity; // 0x1d	
private:
	[[maybe_unused]] uint8_t __pad001e[0x2]; // 0x1e
public:
	// MNetworkDisable
	float m_flPrevCycleFromDiscontinuity; // 0x20	
	// MNetworkDisable
	float m_flPrevCycleForAnimEventDetection; // 0x24	
	
	// Datamap fields:
	// CUtlString sequenceName; // 0x7fffffff
	// int32_t sequence; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x30
class CPlayerSprayDecalRenderHelper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
// Is Abstract
class CPlayer_AutoaimServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a8
// Has VTable
class CCSObserver_CameraServices : public CCSPlayerBase_CameraServices
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_FlashlightServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "bool m_bHasDefuser"
// MNetworkVarNames "bool m_bHasHelmet"
// MNetworkVarNames "bool m_bHasHeavyArmor"
class CCSPlayer_ItemServices : public CPlayer_ItemServices
{
public:
	// MNetworkEnable
	bool m_bHasDefuser; // 0x40	
	// MNetworkEnable
	bool m_bHasHelmet; // 0x41	
	// MNetworkEnable
	bool m_bHasHeavyArmor; // 0x42	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1d8
// Has VTable
class CCSObserver_MovementServices : public CPlayer_MovementServices
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
// 
// MNetworkVarNames "float m_flMaxFallVelocity"
// MNetworkVarNames "Vector m_vecLadderNormal"
// MNetworkVarNames "int m_nLadderSurfacePropIndex"
// MNetworkVarNames "float m_flDuckAmount"
// MNetworkVarNames "float m_flDuckSpeed"
// MNetworkVarNames "bool m_bDuckOverride"
// MNetworkVarNames "bool m_bDesiresDuck"
// MNetworkVarNames "uint32 m_nDuckTimeMsecs"
// MNetworkVarNames "uint32 m_nDuckJumpTimeMsecs"
// MNetworkVarNames "uint32 m_nJumpTimeMsecs"
// MNetworkVarNames "float m_flLastDuckTime"
// MNetworkVarNames "int m_nGameCodeHasMovedPlayerAfterCommand"
// MNetworkVarNames "bool m_bOldJumpPressed"
// MNetworkVarNames "float m_flJumpUntil"
// MNetworkVarNames "float m_flJumpVel"
// MNetworkVarNames "GameTime_t m_fStashGrenadeParameterWhen"
// MNetworkVarNames "ButtonBitMask_t m_nButtonDownMaskPrev"
// MNetworkVarNames "float m_flOffsetTickCompleteTime"
// MNetworkVarNames "float m_flOffsetTickStashedSpeed"
// MNetworkVarNames "float m_flStamina"
class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid
{
public:
	// MNetworkEnable
	float m_flMaxFallVelocity; // 0x228	
	// MNetworkEnable
	// MNetworkEncoder "normal"
	Vector m_vecLadderNormal; // 0x22c	
	// MNetworkEnable
	int32_t m_nLadderSurfacePropIndex; // 0x238	
	// MNetworkEnable
	float m_flDuckAmount; // 0x23c	
	// MNetworkEnable
	float m_flDuckSpeed; // 0x240	
	// MNetworkEnable
	bool m_bDuckOverride; // 0x244	
	// MNetworkEnable
	bool m_bDesiresDuck; // 0x245	
private:
	[[maybe_unused]] uint8_t __pad0246[0x2]; // 0x246
public:
	float m_flDuckOffset; // 0x248	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	uint32_t m_nDuckTimeMsecs; // 0x24c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nDuckJumpTimeMsecs; // 0x250	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nJumpTimeMsecs; // 0x254	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flLastDuckTime; // 0x258	
private:
	[[maybe_unused]] uint8_t __pad025c[0xc]; // 0x25c
public:
	Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x268	
	bool m_duckUntilOnGround; // 0x270	
	bool m_bHasWalkMovedSinceLastJump; // 0x271	
	bool m_bInStuckTest; // 0x272	
private:
	[[maybe_unused]] uint8_t __pad0273[0xd]; // 0x273
public:
	float m_flStuckCheckTime[2][64]; // 0x280	
	int32_t m_nTraceCount; // 0x480	
	int32_t m_StuckLast; // 0x484	
	bool m_bSpeedCropped; // 0x488	
private:
	[[maybe_unused]] uint8_t __pad0489[0x3]; // 0x489
public:
	int32_t m_nOldWaterLevel; // 0x48c	
	float m_flWaterEntryTime; // 0x490	
	Vector m_vecForward; // 0x494	
	Vector m_vecLeft; // 0x4a0	
	Vector m_vecUp; // 0x4ac	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nGameCodeHasMovedPlayerAfterCommand; // 0x4b8	
	bool m_bMadeFootstepNoise; // 0x4bc	
private:
	[[maybe_unused]] uint8_t __pad04bd[0x3]; // 0x4bd
public:
	int32_t m_iFootsteps; // 0x4c0	
	// MNetworkEnable
	bool m_bOldJumpPressed; // 0x4c4	
private:
	[[maybe_unused]] uint8_t __pad04c5[0x3]; // 0x4c5
public:
	float m_flJumpPressedTime; // 0x4c8	
	// MNetworkEnable
	float m_flJumpUntil; // 0x4cc	
	// MNetworkEnable
	float m_flJumpVel; // 0x4d0	
	// MNetworkEnable
	GameTime_t m_fStashGrenadeParameterWhen; // 0x4d4	
	// MNetworkEnable
	uint64_t m_nButtonDownMaskPrev; // 0x4d8	
	// MNetworkEnable
	float m_flOffsetTickCompleteTime; // 0x4e0	
	// MNetworkEnable
	float m_flOffsetTickStashedSpeed; // 0x4e4	
	// MNetworkEnable
	float m_flStamina; // 0x4e8	
	float m_flHeightAtJumpStart; // 0x4ec	
	float m_flMaxJumpHeightThisJump; // 0x4f0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
class CCSObserver_ObserverServices : public CPlayer_ObserverServices
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
class CCSObserver_UseServices : public CPlayer_UseServices
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
class CCSObserver_ViewModelServices : public CPlayer_ViewModelServices
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x68
// Has VTable
class CCSPlayer_WaterServices : public CPlayer_WaterServices
{
public:
	float m_NextDrownDamageTime; // 0x40	
	int32_t m_nDrownDmgRate; // 0x44	
	GameTime_t m_AirFinishedTime; // 0x48	
	float m_flWaterJumpTime; // 0x4c	
	Vector m_vecWaterJumpVel; // 0x50	
	float m_flSwimSoundTime; // 0x5c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1378
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flNextAttack"
// MNetworkVarNames "bool m_bIsLookingAtWeapon"
// MNetworkVarNames "bool m_bIsHoldingLookAtWeapon"
class CCSPlayer_WeaponServices : public CPlayer_WeaponServices
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextAttack; // 0xa8	
	// MNetworkEnable
	bool m_bIsLookingAtWeapon; // 0xac	
	// MNetworkEnable
	bool m_bIsHoldingLookAtWeapon; // 0xad	
private:
	[[maybe_unused]] uint8_t __pad00ae[0x2]; // 0xae
public:
	CHandle<CBasePlayerWeapon> m_hSavedWeapon; // 0xb0	
	int32_t m_nTimeToMelee; // 0xb4	
	int32_t m_nTimeToSecondary; // 0xb8	
	int32_t m_nTimeToPrimary; // 0xbc	
	int32_t m_nTimeToSniperRifle; // 0xc0	
	bool m_bIsBeingGivenItem; // 0xc4	
	bool m_bIsPickingUpItemWithUse; // 0xc5	
	bool m_bPickedUpWeapon; // 0xc6	
	bool m_bDisableAutoDeploy; // 0xc7	
	uint32_t m_nOldShootPositionHistoryCount; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00cc[0x394]; // 0xcc
public:
	uint32_t m_nOldInputHistoryCount; // 0x460	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x550
// Has VTable
class CPointTemplate : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x4c0	
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x4c8	
	CUtlSymbolLarge m_iszEntityFilterName; // 0x4d0	
	float m_flTimeoutInterval; // 0x4d8	
	bool m_bAsynchronouslySpawnEntities; // 0x4dc	
private:
	[[maybe_unused]] uint8_t __pad04dd[0x3]; // 0x4dd
public:
	CEntityIOOutput m_pOutputOnSpawned; // 0x4e0	
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x508	
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x50c	
	CUtlVector<uint32> m_createdSpawnGroupHandles; // 0x510	
	CUtlVector<CEntityHandle> m_SpawnedEntityHandles; // 0x528	
	HSCRIPT m_ScriptSpawnCallback; // 0x540	
	HSCRIPT m_ScriptCallbackScope; // 0x548	
	
	// Datamap fields:
	// void InputForceSpawn; // 0x0
	// void InputDeleteCreatedSpawnGroups; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x128
// Has VTable
// 
// MGetKV3ClassDefaults
class CPrecipitationVData : public CEntitySubclassVDataBase
{
public:
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>> m_szParticlePrecipitationEffect; // 0x28	
	float m_flInnerDistance; // 0x108	
	ParticleAttachment_t m_nAttachType; // 0x10c	
	bool m_bBatchSameVolumeType; // 0x110	
private:
	[[maybe_unused]] uint8_t __pad0111[0x3]; // 0x111
public:
	int32_t m_nRTEnvCP; // 0x114	
	int32_t m_nRTEnvCPComponent; // 0x118	
private:
	[[maybe_unused]] uint8_t __pad011c[0x4]; // 0x11c
public:
	CUtlString m_szModifier; // 0x120	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb8
// Has VTable
class CRenderComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0038[0x18]; // 0x38
public:
	bool m_bIsRenderingWithViewModels; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
public:
	uint32_t m_nSplitscreenFlags; // 0x54	
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	bool m_bEnableRendering; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0061[0x4f]; // 0x61
public:
	bool m_bInterpolationReadyToDraw; // 0xb0	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CRenderComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CRenderComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc0
// Has VTable
// 
// MNetworkVarNames "int m_iEnemy5Ks"
// MNetworkVarNames "int m_iEnemy4Ks"
// MNetworkVarNames "int m_iEnemy3Ks"
// MNetworkVarNames "int m_iEnemyKnifeKills"
// MNetworkVarNames "int m_iEnemyTaserKills"
struct CSMatchStats_t : public CSPerRoundStats_t
{
public:
	// MNetworkEnable
	int32_t m_iEnemy5Ks; // 0x68	
	// MNetworkEnable
	int32_t m_iEnemy4Ks; // 0x6c	
	// MNetworkEnable
	int32_t m_iEnemy3Ks; // 0x70	
	// MNetworkEnable
	int32_t m_iEnemyKnifeKills; // 0x74	
	// MNetworkEnable
	int32_t m_iEnemyTaserKills; // 0x78	
	int32_t m_iEnemy2Ks; // 0x7c	
	int32_t m_iUtility_Count; // 0x80	
	int32_t m_iUtility_Successes; // 0x84	
	int32_t m_iUtility_Enemies; // 0x88	
	int32_t m_iFlash_Count; // 0x8c	
	int32_t m_iFlash_Successes; // 0x90	
	int32_t m_nHealthPointsRemovedTotal; // 0x94	
	int32_t m_nHealthPointsDealtTotal; // 0x98	
	int32_t m_nShotsFiredTotal; // 0x9c	
	int32_t m_nShotsOnTargetTotal; // 0xa0	
	int32_t m_i1v1Count; // 0xa4	
	int32_t m_i1v1Wins; // 0xa8	
	int32_t m_i1v2Count; // 0xac	
	int32_t m_i1v2Wins; // 0xb0	
	int32_t m_iEntryCount; // 0xb4	
	int32_t m_iEntryWins; // 0xb8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x218
// Has VTable
// 
// MNetworkVarNames "CSPerRoundStats_t m_perRoundStats"
// MNetworkVarNames "CSMatchStats_t m_matchStats"
// MNetworkVarNames "int m_iNumRoundKills"
// MNetworkVarNames "int m_iNumRoundKillsHeadshots"
// MNetworkVarNames "uint32 m_unTotalRoundDamageDealt"
class CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent
{
public:
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t> m_perRoundStats; // 0x40	
	// MNetworkEnable
	CSMatchStats_t m_matchStats; // 0x90	
	// MNetworkEnable
	int32_t m_iNumRoundKills; // 0x150	
	// MNetworkEnable
	int32_t m_iNumRoundKillsHeadshots; // 0x154	
	// MNetworkEnable
	uint32_t m_unTotalRoundDamageDealt; // 0x158	
};

// Registered binary: server.dll (project 'entity2')
// Alignment: 8
// Size: 0x38
// Has VTable
class CScriptComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x28]; // 0x8
public:
	CUtlSymbolLarge m_scriptClassName; // 0x30	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x710
// Has VTable
class CServerOnlyModelEntity : public CBaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x980
// Has VTable
// 
// MNetworkVarNames "CBaseAnimGraphController m_animationController"
class CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance
{
public:
	// MNetworkEnable
	CBaseAnimGraphController m_animationController; // 0x460	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x950	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->m_static_fields[1]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CSkyboxReference : public CBaseEntity
{
public:
	WorldGroupId_t m_worldGroupId; // 0x4c0	
	CHandle<CSkyCamera> m_hSkyCamera; // 0x4c4	
	
	// Datamap fields:
	// const char * worldGroupID; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe90
// Has VTable
class CTablet : public CCSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CTakeDamageInfoAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x228
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "float m_flValues"
// MNetworkVarNames "int m_nValueCounts"
// MNetworkVarNames "int m_nBucketCount"
// MNetworkVarNames "float m_flInterval"
// MNetworkVarNames "float m_flFinalValue"
// MNetworkVarNames "TimelineCompression_t m_nCompressionType"
// MNetworkVarNames "bool m_bStopped"
class CTimeline : public IntervalTimer
{
public:
	// MNetworkEnable
	float m_flValues[64]; // 0x10	
	// MNetworkEnable
	int32_t m_nValueCounts[64]; // 0x110	
	// MNetworkEnable
	int32_t m_nBucketCount; // 0x210	
	// MNetworkEnable
	float m_flInterval; // 0x214	
	// MNetworkEnable
	float m_flFinalValue; // 0x218	
	// MNetworkEnable
	TimelineCompression_t m_nCompressionType; // 0x21c	
	// MNetworkEnable
	bool m_bStopped; // 0x220	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xec0
// Has VTable
class CTripWireFire : public CBaseCSGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa20
// Has VTable
class CTripWireFireProjectile : public CBaseGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
class CWeaponZoneRepulsor : public CCSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x98
// Has VTable
class C_CSGO_PreviewModel_GraphController : public CAnimGraphControllerBase
{
public:
	CAnimGraphParamOptionalRef<char*> m_pszCharacterMode; // 0x18	
	CAnimGraphParamOptionalRef<char*> m_pszWeaponState; // 0x38	
	CAnimGraphParamOptionalRef<char*> m_pszWeaponType; // 0x58	
	CAnimGraphParamOptionalRef<char*> m_pszEndOfMatchCelebration; // 0x78	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("C_CSGO_PreviewModel_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("C_CSGO_PreviewModel_GraphController")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x108
// Has VTable
class C_CSGO_PreviewPlayer_GraphController : public CAnimGraphControllerBase
{
public:
	CAnimGraphParamOptionalRef<char*> m_pszCharacterMode; // 0x18	
	CAnimGraphParamOptionalRef<char*> m_pszTeamPreviewVariant; // 0x38	
	CAnimGraphParamOptionalRef<char*> m_pszTeamPreviewPosition; // 0x58	
	CAnimGraphParamOptionalRef<char*> m_pszEndOfMatchCelebration; // 0x78	
	CAnimGraphParamOptionalRef<int32> m_nTeamPreviewRandom; // 0x98	
	CAnimGraphParamOptionalRef<char*> m_pszWeaponState; // 0xb0	
	CAnimGraphParamOptionalRef<char*> m_pszWeaponType; // 0xd0	
	CAnimGraphParamOptionalRef<bool> m_bCT; // 0xf0	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("C_CSGO_PreviewPlayer_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("C_CSGO_PreviewPlayer_GraphController")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x98
class C_CommandContext
{
public:
	bool needsprocessing; // 0x0	
	int32_t command_number; // 0x90	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
class C_GameRules
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb0
// Has VTable
class C_IronSightController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	bool m_bIronSightAvailable; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	float m_flIronSightAmount; // 0x14	
	float m_flIronSightAmountGained; // 0x18	
	float m_flIronSightAmountBiased; // 0x1c	
	float m_flIronSightAmount_Interpolated; // 0x20	
	float m_flIronSightAmountGained_Interpolated; // 0x24	
	float m_flIronSightAmountBiased_Interpolated; // 0x28	
	float m_flInterpolationLastUpdated; // 0x2c	
	QAngle m_angDeltaAverage[8]; // 0x30	
	QAngle m_angViewLast; // 0x90	
	Vector2D m_vecDotCoords; // 0x9c	
	float m_flDotBlur; // 0xa4	
	float m_flSpeedRatio; // 0xa8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class C_LightGlowOverlay : public CGlowOverlay
{
public:
	Vector m_vecOrigin; // 0xd0	
	Vector m_vecDirection; // 0xdc	
	int32_t m_nMinDist; // 0xe8	
	int32_t m_nMaxDist; // 0xec	
	int32_t m_nOuterMaxDist; // 0xf0	
	bool m_bOneSided; // 0xf4	
	bool m_bModulateByDot; // 0xf5	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has VTable
class C_MultiplayRules : public C_GameRules
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has VTable
class C_SingleplayRules : public C_GameRules
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class C_SunGlowOverlay : public CGlowOverlay
{
public:
	bool m_bModulateByDot; // 0xd0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has VTable
class C_TeamplayRules : public C_MultiplayRules
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x28
// 
// MGetKV3ClassDefaults
// MPropertyElementNameFn
struct CompMatMutatorCondition_t
{
public:
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Condition"
	CompMatPropertyMutatorConditionType_t m_nMutatorCondition; // 0x0	
	// MPropertyFriendlyName "Container Name"
	// MPropertyAttrStateCallback
	CUtlString m_strMutatorConditionContainerName; // 0x8	
	// MPropertyFriendlyName "Variable Name"
	// MPropertyAttrStateCallback
	CUtlString m_strMutatorConditionContainerVarName; // 0x10	
	// MPropertyFriendlyName "Variable Value"
	// MPropertyAttrStateCallback
	CUtlString m_strMutatorConditionContainerVarValue; // 0x18	
	// MPropertyFriendlyName "Pass when True"
	bool m_bPassWhenTrue; // 0x20	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x270
// 
// MGetKV3ClassDefaults
// MPropertyElementNameFn
struct CompositeMaterialInputLooseVariable_t
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertyAttrStateCallback
	CUtlString m_strName; // 0x0	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Expose Externally"
	bool m_bExposeExternally; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x7]; // 0x9
public:
	// MPropertyFriendlyName "Exposed Friendly Name"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedFriendlyName; // 0x10	
	// MPropertyFriendlyName "Exposed Friendly Group"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedFriendlyGroupName; // 0x18	
	// MPropertyFriendlyName "Exposed Fixed Range"
	// MPropertyAttrStateCallback
	bool m_bExposedVariableIsFixedRange; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x7]; // 0x21
public:
	// MPropertyFriendlyName "Exposed SetVisible When True"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedVisibleWhenTrue; // 0x28	
	// MPropertyFriendlyName "Exposed SetHidden When True"
	// MPropertyAttrStateCallback
	CUtlString m_strExposedHiddenWhenTrue; // 0x30	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Type"
	CompositeMaterialInputLooseVariableType_t m_nVariableType; // 0x38	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	bool m_bValueBoolean; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	// MPropertyFriendlyName "X Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntX; // 0x40	
	// MPropertyFriendlyName "Y Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntY; // 0x44	
	// MPropertyFriendlyName "Z Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntZ; // 0x48	
	// MPropertyFriendlyName "W Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0 255"
	int32_t m_nValueIntW; // 0x4c	
	// MPropertyFriendlyName "Specify Min/Max"
	// MPropertyAttrStateCallback
	bool m_bHasFloatBounds; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
public:
	// MPropertyFriendlyName "X Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatX; // 0x54	
	// MPropertyFriendlyName "X Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatX_Min; // 0x58	
	// MPropertyFriendlyName "X Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatX_Max; // 0x5c	
	// MPropertyFriendlyName "Y Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatY; // 0x60	
	// MPropertyFriendlyName "Y Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatY_Min; // 0x64	
	// MPropertyFriendlyName "Y Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatY_Max; // 0x68	
	// MPropertyFriendlyName "Z Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatZ; // 0x6c	
	// MPropertyFriendlyName "Z Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatZ_Min; // 0x70	
	// MPropertyFriendlyName "Z Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatZ_Max; // 0x74	
	// MPropertyFriendlyName "W Value"
	// MPropertyAttrStateCallback
	// MPropertyAttributeRange "0.0 1.0"
	float m_flValueFloatW; // 0x78	
	// MPropertyFriendlyName "W Min"
	// MPropertyAttrStateCallback
	float m_flValueFloatW_Min; // 0x7c	
	// MPropertyFriendlyName "W Max"
	// MPropertyAttrStateCallback
	float m_flValueFloatW_Max; // 0x80	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	Color m_cValueColor4; // 0x84	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	CompositeMaterialVarSystemVar_t m_nValueSystemVar; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	// MPropertyFriendlyName "Material"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	// MPropertyAttrStateCallback
	CResourceName m_strResourceMaterial; // 0x90	
	// MPropertyFriendlyName "Texture"
	// MPropertyAttributeEditor "AssetBrowse( jpg, png, psd, tga )"
	// MPropertyAttrStateCallback
	CUtlString m_strTextureContentAssetPath; // 0x170	
	// MPropertyHideField
	CResourceName m_strTextureRuntimeResourcePath; // 0x178	
	// MPropertyHideField
	CUtlString m_strTextureCompilationVtexTemplate; // 0x258	
	// MPropertyFriendlyName "Texture Type"
	// MPropertyAttrStateCallback
	CompositeMaterialInputTextureType_t m_nTextureType; // 0x260	
private:
	[[maybe_unused]] uint8_t __pad0264[0x4]; // 0x264
public:
	// MPropertyFriendlyName "String"
	// MPropertyAttrStateCallback
	CUtlString m_strString; // 0x268	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x60
// 
// MGetKV3ClassDefaults
// MPropertyElementNameFn
struct CompositeMaterialAssemblyProcedure_t
{
public:
	// MPropertyFriendlyName "Includes"
	// MPropertyAttributeEditor "AssetBrowse( vcompmat )"
	CUtlVector<CResourceName> m_vecCompMatIncludes; // 0x0	
	// MPropertyFriendlyName "Match Filters"
	CUtlVector<CompositeMaterialMatchFilter_t> m_vecMatchFilters; // 0x18	
	// MPropertyFriendlyName "Composite Inputs"
	CUtlVector<CompositeMaterialInputContainer_t> m_vecCompositeInputContainers; // 0x30	
	// MPropertyFriendlyName "Property Mutators"
	CUtlVector<CompMatPropertyMutator_t> m_vecPropertyMutators; // 0x48	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x218
// 
// MGetKV3ClassDefaults
struct CompositeMaterialEditorPoint_t
{
public:
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Target Model"
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CResourceName m_ModelName; // 0x0	
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Animation"
	int32_t m_nSequenceIndex; // 0xe0	
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Animation Cycle"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flCycle; // 0xe4	
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Model Preview State"
	// MPropertyAttributeEditor "CompositeMaterialUserModelStateSetting"
	KeyValues3 m_KVModelStateChoices; // 0xe8	
	// MPropertyAutoRebuildOnChange
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Enable Child Model"
	bool m_bEnableChildModel; // 0xf8	
private:
	[[maybe_unused]] uint8_t __pad00f9[0x7]; // 0xf9
public:
	// MPropertyGroupName "Preview Model"
	// MPropertyFriendlyName "Child Model"
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	// MPropertyAttrStateCallback
	CResourceName m_ChildModelName; // 0x100	
	// MPropertyGroupName "Composite Material Assembly"
	// MPropertyFriendlyName "Composite Material Assembly Procedures"
	CUtlVector<CompositeMaterialAssemblyProcedure_t> m_vecCompositeMaterialAssemblyProcedures; // 0x1e0	
	// MPropertyFriendlyName "Generated Composite Materials"
	CUtlVector<CompositeMaterial_t> m_vecCompositeMaterials; // 0x1f8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x138
// 
// MGetKV3ClassDefaults
// MPropertyElementNameFn
struct CompositeMaterialInputContainer_t
{
public:
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Enabled"
	bool m_bEnabled; // 0x0	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Input Container Source"
	// MPropertyAttrStateCallback
	CompositeMaterialInputContainerSourceType_t m_nCompositeMaterialInputContainerSourceType; // 0x4	
	// MPropertyFriendlyName "Specific Material"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	// MPropertyAttrStateCallback
	CResourceName m_strSpecificContainerMaterial; // 0x8	
	// MPropertyFriendlyName "Attribute Name"
	// MPropertyAttrStateCallback
	CUtlString m_strAttrName; // 0xe8	
	// MPropertyFriendlyName "Alias"
	// MPropertyAttrStateCallback
	CUtlString m_strAlias; // 0xf0	
	// MPropertyFriendlyName "Variables"
	// MPropertyAttrStateCallback
	CUtlVector<CompositeMaterialInputLooseVariable_t> m_vecLooseVariables; // 0xf8	
	// MPropertyFriendlyName "Attribute Name"
	// MPropertyAttrStateCallback
	CUtlString m_strAttrNameForVar; // 0x110	
	// MPropertyFriendlyName "Expose Externally"
	// MPropertyAttrStateCallback
	bool m_bExposeExternally; // 0x118	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x368
// 
// MGetKV3ClassDefaults
// MPropertyElementNameFn
struct CompMatPropertyMutator_t
{
public:
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Enabled"
	bool m_bEnabled; // 0x0	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Mutator Command"
	// MPropertyAttrStateCallback
	CompMatPropertyMutatorType_t m_nMutatorCommandType; // 0x4	
	// MPropertyFriendlyName "Container to Init With"
	// MPropertyAttrStateCallback
	CUtlString m_strInitWith_Container; // 0x8	
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyProperty_InputContainerSrc; // 0x10	
	// MPropertyFriendlyName "Input Container Property"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyProperty_InputContainerProperty; // 0x18	
	// MPropertyFriendlyName "Target Property"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyProperty_TargetProperty; // 0x20	
	// MPropertyFriendlyName "Seed Input Var"
	// MPropertyAttrStateCallback
	CUtlString m_strRandomRollInputVars_SeedInputVar; // 0x28	
	// MPropertyFriendlyName "Input Vars"
	// MPropertyAttrStateCallback
	CUtlVector<CUtlString> m_vecRandomRollInputVars_InputVarsToRoll; // 0x30	
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyMatchingKeys_InputContainerSrc; // 0x48	
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyKeysWithSuffix_InputContainerSrc; // 0x50	
	// MPropertyFriendlyName "Find Suffix"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyKeysWithSuffix_FindSuffix; // 0x58	
	// MPropertyFriendlyName "Replace Suffix"
	// MPropertyAttrStateCallback
	CUtlString m_strCopyKeysWithSuffix_ReplaceSuffix; // 0x60	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	CompositeMaterialInputLooseVariable_t m_nSetValue_Value; // 0x68	
	// MPropertyFriendlyName "Target Texture Param"
	// MPropertyAttrStateCallback
	CUtlString m_strGenerateTexture_TargetParam; // 0x2d8	
	// MPropertyFriendlyName "Initial Container"
	// MPropertyAttrStateCallback
	CUtlString m_strGenerateTexture_InitialContainer; // 0x2e0	
	// MPropertyFriendlyName "Resolution"
	// MPropertyAttrStateCallback
	int32_t m_nResolution; // 0x2e8	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Scratch Target"
	// MPropertyAttrStateCallback
	bool m_bIsScratchTarget; // 0x2ec	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Splat Debug info on Texture"
	// MPropertyAttrStateCallback
	bool m_bSplatDebugInfo; // 0x2ed	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Capture in RenderDoc"
	// MPropertyAttrStateCallback
	bool m_bCaptureInRenderDoc; // 0x2ee	
private:
	[[maybe_unused]] uint8_t __pad02ef[0x1]; // 0x2ef
public:
	// MPropertyFriendlyName "Texture Generation Instructions"
	// MPropertyAttrStateCallback
	CUtlVector<CompMatPropertyMutator_t> m_vecTexGenInstructions; // 0x2f0	
	// MPropertyFriendlyName "Mutators"
	// MPropertyAttrStateCallback
	CUtlVector<CompMatPropertyMutator_t> m_vecConditionalMutators; // 0x308	
	// MPropertyFriendlyName "Container to Pop"
	// MPropertyAttrStateCallback
	CUtlString m_strPopInputQueue_Container; // 0x320	
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strDrawText_InputContainerSrc; // 0x328	
	// MPropertyFriendlyName "Input Container Property"
	// MPropertyAttrStateCallback
	CUtlString m_strDrawText_InputContainerProperty; // 0x330	
	// MPropertyFriendlyName "Text Position"
	// MPropertyAttrStateCallback
	Vector2D m_vecDrawText_Position; // 0x338	
	// MPropertyFriendlyName "Text Color"
	// MPropertyAttrStateCallback
	Color m_colDrawText_Color; // 0x340	
private:
	[[maybe_unused]] uint8_t __pad0344[0x4]; // 0x344
public:
	// MPropertyFriendlyName "Font"
	// MPropertyAttrStateCallback
	CUtlString m_strDrawText_Font; // 0x348	
	// MPropertyFriendlyName "Conditions"
	// MPropertyAttrStateCallback
	CUtlVector<CompMatMutatorCondition_t> m_vecConditions; // 0x350	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
// MPropertyElementNameFn
struct CompositeMaterialMatchFilter_t
{
public:
	// MPropertyFriendlyName "Match Type"
	CompositeMaterialMatchFilterType_t m_nCompositeMaterialMatchFilterType; // 0x0	
	// MPropertyFriendlyName "Name"
	CUtlString m_strMatchFilter; // 0x8	
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	CUtlString m_strMatchValue; // 0x10	
	// MPropertyFriendlyName "Pass when True"
	bool m_bPassWhenTrue; // 0x18	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x60
// 
// MPropertyElementNameFn
struct CompositeMaterial_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyGroupName "Target Material"
	// MPropertyAttributeEditor "CompositeMaterialKVInspector"
	KeyValues3 m_TargetKVs; // 0x8	
	// MPropertyGroupName "Pre-Generated Output Material"
	// MPropertyAttributeEditor "CompositeMaterialKVInspector"
	KeyValues3 m_PreGenerationKVs; // 0x18	
	// MPropertyGroupName "Generated Composite Material"
	// MPropertyAttributeEditor "CompositeMaterialKVInspector"
	KeyValues3 m_FinalKVs; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
public:
	// MPropertyFriendlyName "Generated Textures"
	CUtlVector<GeneratedTextureHandle_t> m_vecGeneratedTextures; // 0x40	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "float32 m_duration"
// MNetworkVarNames "GameTime_t m_timestamp"
// MNetworkVarNames "float32 m_timescale"
// MNetworkVarNames "WorldGroupId_t m_nWorldGroupId"
class CountdownTimer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	float m_duration; // 0x8	
	// MNetworkEnable
	GameTime_t m_timestamp; // 0xc	
	// MNetworkEnable
	float m_timescale; // 0x10	
	// MNetworkEnable
	WorldGroupId_t m_nWorldGroupId; // 0x14	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "float32 m_duration"
// MNetworkVarNames "float32 m_timestamp"
// MNetworkVarNames "float32 m_timescale"
class EngineCountdownTimer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	float m_duration; // 0x8	
	// MNetworkEnable
	float m_timestamp; // 0xc	
	// MNetworkEnable
	float m_timescale; // 0x10	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "CUtlStringToken m_ID"
// MNetworkVarNames "Vector4D m_Values"
struct EntityRenderAttribute_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	CUtlStringToken m_ID; // 0x30	
	// MNetworkEnable
	Vector4D m_Values; // 0x34	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MNetworkVarNames "bool m_bSpotted"
// MNetworkVarNames "uint32 m_bSpottedByMask"
struct EntitySpottedState_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnIsSpottedChanged"
	bool m_bSpotted; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x3]; // 0x9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnIsSpottedChanged"
	uint32_t m_bSpottedByMask[2]; // 0xc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x50
// 
// MPropertyElementNameFn
struct GeneratedTextureHandle_t
{
public:
	// MPropertyFriendlyName "Generated Texture"
	// MPropertyAttributeEditor "CompositeMaterialTextureViewer"
	CUtlString m_strBitmapName; // 0x0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x30
// Has VTable
// Has Trivial Destructor
class CClientAlphaProperty : public IClientAlphaProperty
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	uint8_t m_nRenderFX; // 0x10	
	uint8_t m_nRenderMode; // 0x11	
	struct 
	{
		uint8_t m_bAlphaOverride: 1; 		
		uint8_t m_bShadowAlphaOverride: 1; 		
		uint8_t m_nReserved: 6; 		
		uint8_t __pad2: 8;
	}; // 16 bits
	uint8_t m_nAlpha; // 0x13	
	uint16_t m_nDesyncOffset; // 0x14	
	uint16_t m_nReserved2; // 0x16	
	uint16_t m_nDistFadeStart; // 0x18	
	uint16_t m_nDistFadeEnd; // 0x1a	
	float m_flFadeScale; // 0x1c	
	GameTime_t m_flRenderFxStartTime; // 0x20	
	float m_flRenderFxDuration; // 0x24	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf928
// Has VTable
// 
// MNetworkUserGroupProxy "CCSPlayerController"
// MNetworkUserGroupProxy "CCSPlayerController"
// MNetworkUserGroupProxy "CCSPlayerController"
// MNetworkVarNames "CCSPlayerController_InGameMoneyServices * m_pInGameMoneyServices"
// MNetworkVarNames "CCSPlayerController_InventoryServices * m_pInventoryServices"
// MNetworkVarNames "CCSPlayerController_ActionTrackingServices * m_pActionTrackingServices"
// MNetworkVarNames "CCSPlayerController_DamageServices * m_pDamageServices"
// MNetworkVarNames "uint32 m_iPing"
// MNetworkVarNames "bool m_bHasCommunicationAbuseMute"
// MNetworkVarNames "string_t m_szCrosshairCodes"
// MNetworkVarNames "uint8 m_iPendingTeamNum"
// MNetworkVarNames "GameTime_t m_flForceTeamTime"
// MNetworkVarNames "int m_iCompTeammateColor"
// MNetworkVarNames "bool m_bEverPlayedOnTeam"
// MNetworkVarNames "string_t m_szClan"
// MNetworkVarNames "int m_iCoachingTeam"
// MNetworkVarNames "uint64 m_nPlayerDominated"
// MNetworkVarNames "uint64 m_nPlayerDominatingMe"
// MNetworkVarNames "int m_iCompetitiveRanking"
// MNetworkVarNames "int m_iCompetitiveWins"
// MNetworkVarNames "int8 m_iCompetitiveRankType"
// MNetworkVarNames "int m_iCompetitiveRankingPredicted_Win"
// MNetworkVarNames "int m_iCompetitiveRankingPredicted_Loss"
// MNetworkVarNames "int m_iCompetitiveRankingPredicted_Tie"
// MNetworkVarNames "int m_nEndMatchNextMapVote"
// MNetworkVarNames "uint16 m_unActiveQuestId"
// MNetworkVarNames "QuestProgress::Reason m_nQuestProgressReason"
// MNetworkVarNames "uint32 m_unPlayerTvControlFlags"
// MNetworkVarNames "int m_nDisconnectionTick"
// MNetworkVarNames "bool m_bControllingBot"
// MNetworkVarNames "bool m_bHasControlledBotThisRound"
// MNetworkVarNames "bool m_bCanControlObservedBot"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPlayerPawn"
// MNetworkVarNames "CHandle< CCSObserverPawn> m_hObserverPawn"
// MNetworkVarNames "bool m_bPawnIsAlive"
// MNetworkVarNames "uint32 m_iPawnHealth"
// MNetworkVarNames "int m_iPawnArmor"
// MNetworkVarNames "bool m_bPawnHasDefuser"
// MNetworkVarNames "bool m_bPawnHasHelmet"
// MNetworkVarNames "item_definition_index_t m_nPawnCharacterDefIndex"
// MNetworkVarNames "int m_iPawnLifetimeStart"
// MNetworkVarNames "int m_iPawnLifetimeEnd"
// MNetworkVarNames "int m_iPawnBotDifficulty"
// MNetworkVarNames "CHandle< CCSPlayerController> m_hOriginalControllerOfCurrentPawn"
// MNetworkVarNames "int32 m_iScore"
// MNetworkVarNames "EKillTypes_t m_vecKills"
// MNetworkVarNames "bool m_bMvpNoMusic"
// MNetworkVarNames "int m_eMvpReason"
// MNetworkVarNames "int m_iMusicKitID"
// MNetworkVarNames "int m_iMusicKitMVPs"
// MNetworkVarNames "int m_iMVPs"
class CCSPlayerController : public CBasePlayerController
{
private:
	[[maybe_unused]] uint8_t __pad06b8[0x10]; // 0x6b8
public:
	// MNetworkEnable
	CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x6c8	
	// MNetworkEnable
	CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x6d0	
	// MNetworkEnable
	CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x6d8	
	// MNetworkEnable
	CCSPlayerController_DamageServices* m_pDamageServices; // 0x6e0	
	// MNetworkEnable
	uint32_t m_iPing; // 0x6e8	
	// MNetworkEnable
	bool m_bHasCommunicationAbuseMute; // 0x6ec	
private:
	[[maybe_unused]] uint8_t __pad06ed[0x3]; // 0x6ed
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szCrosshairCodes; // 0x6f0	
	// MNetworkEnable
	uint8_t m_iPendingTeamNum; // 0x6f8	
private:
	[[maybe_unused]] uint8_t __pad06f9[0x3]; // 0x6f9
public:
	// MNetworkEnable
	GameTime_t m_flForceTeamTime; // 0x6fc	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCompTeammateColorChanged"
	int32_t m_iCompTeammateColor; // 0x700	
	// MNetworkEnable
	bool m_bEverPlayedOnTeam; // 0x704	
	bool m_bAttemptedToGetColor; // 0x705	
private:
	[[maybe_unused]] uint8_t __pad0706[0x2]; // 0x706
public:
	int32_t m_iTeammatePreferredColor; // 0x708	
	bool m_bTeamChanged; // 0x70c	
	bool m_bInSwitchTeam; // 0x70d	
	bool m_bHasSeenJoinGame; // 0x70e	
	bool m_bJustBecameSpectator; // 0x70f	
	bool m_bSwitchTeamsOnNextRoundReset; // 0x710	
	bool m_bRemoveAllItemsOnNextRoundReset; // 0x711	
private:
	[[maybe_unused]] uint8_t __pad0712[0x6]; // 0x712
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szClan; // 0x718	
	char m_szClanName[32]; // 0x720	
	// MNetworkEnable
	int32_t m_iCoachingTeam; // 0x740	
private:
	[[maybe_unused]] uint8_t __pad0744[0x4]; // 0x744
public:
	// MNetworkEnable
	uint64_t m_nPlayerDominated; // 0x748	
	// MNetworkEnable
	uint64_t m_nPlayerDominatingMe; // 0x750	
	// MNetworkEnable
	int32_t m_iCompetitiveRanking; // 0x758	
	// MNetworkEnable
	int32_t m_iCompetitiveWins; // 0x75c	
	// MNetworkEnable
	int8_t m_iCompetitiveRankType; // 0x760	
private:
	[[maybe_unused]] uint8_t __pad0761[0x3]; // 0x761
public:
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Win; // 0x764	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Loss; // 0x768	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Tie; // 0x76c	
	// MNetworkEnable
	int32_t m_nEndMatchNextMapVote; // 0x770	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint16_t m_unActiveQuestId; // 0x774	
private:
	[[maybe_unused]] uint8_t __pad0776[0x2]; // 0x776
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	QuestProgress::Reason m_nQuestProgressReason; // 0x778	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_unPlayerTvControlFlags; // 0x77c	
private:
	[[maybe_unused]] uint8_t __pad0780[0x28]; // 0x780
public:
	int32_t m_iDraftIndex; // 0x7a8	
	uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x7ac	
	uint32_t m_uiAbandonRecordedReason; // 0x7b0	
	bool m_bCannotBeKicked; // 0x7b4	
	bool m_bEverFullyConnected; // 0x7b5	
	bool m_bAbandonAllowsSurrender; // 0x7b6	
	bool m_bAbandonOffersInstantSurrender; // 0x7b7	
	bool m_bDisconnection1MinWarningPrinted; // 0x7b8	
	bool m_bScoreReported; // 0x7b9	
private:
	[[maybe_unused]] uint8_t __pad07ba[0x2]; // 0x7ba
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nDisconnectionTick; // 0x7bc	
private:
	[[maybe_unused]] uint8_t __pad07c0[0x8]; // 0x7c0
public:
	// MNetworkEnable
	bool m_bControllingBot; // 0x7c8	
	// MNetworkEnable
	bool m_bHasControlledBotThisRound; // 0x7c9	
	bool m_bHasBeenControlledByPlayerThisRound; // 0x7ca	
private:
	[[maybe_unused]] uint8_t __pad07cb[0x1]; // 0x7cb
public:
	int32_t m_nBotsControlledThisRound; // 0x7cc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bCanControlObservedBot; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d1[0x3]; // 0x7d1
public:
	// MNetworkEnable
	CHandle<CCSPlayerPawn> m_hPlayerPawn; // 0x7d4	
	// MNetworkEnable
	CHandle<CCSObserverPawn> m_hObserverPawn; // 0x7d8	
	int32_t m_DesiredObserverMode; // 0x7dc	
	CEntityHandle m_hDesiredObserverTarget; // 0x7e0	
	// MNetworkEnable
	bool m_bPawnIsAlive; // 0x7e4	
private:
	[[maybe_unused]] uint8_t __pad07e5[0x3]; // 0x7e5
public:
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	uint32_t m_iPawnHealth; // 0x7e8	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	int32_t m_iPawnArmor; // 0x7ec	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	bool m_bPawnHasDefuser; // 0x7f0	
	// MNetworkEnable
	// MNetworkUserGroup "TeammateAndSpectatorExclusive"
	bool m_bPawnHasHelmet; // 0x7f1	
	// MNetworkEnable
	uint16_t m_nPawnCharacterDefIndex; // 0x7f2	
	// MNetworkEnable
	int32_t m_iPawnLifetimeStart; // 0x7f4	
	// MNetworkEnable
	int32_t m_iPawnLifetimeEnd; // 0x7f8	
	// MNetworkEnable
	int32_t m_iPawnBotDifficulty; // 0x7fc	
	// MNetworkEnable
	CHandle<CCSPlayerController> m_hOriginalControllerOfCurrentPawn; // 0x800	
	// MNetworkEnable
	int32_t m_iScore; // 0x804	
	int32_t m_iRoundScore; // 0x808	
	int32_t m_iRoundsWon; // 0x80c	
	// MNetworkEnable
	CNetworkUtlVectorBase<EKillTypes_t> m_vecKills; // 0x810	
	// MNetworkEnable
	bool m_bMvpNoMusic; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad0829[0x3]; // 0x829
public:
	// MNetworkEnable
	int32_t m_eMvpReason; // 0x82c	
	// MNetworkEnable
	int32_t m_iMusicKitID; // 0x830	
	// MNetworkEnable
	int32_t m_iMusicKitMVPs; // 0x834	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMVPCountChanged"
	int32_t m_iMVPs; // 0x838	
	int32_t m_nUpdateCounter; // 0x83c	
	float m_flSmoothedPing; // 0x840	
private:
	[[maybe_unused]] uint8_t __pad0844[0xf0a4]; // 0x844
public:
	// -> m_timestamp - 0xf8f0
	// -> m_nWorldGroupId - 0xf8f4
	IntervalTimer m_lastHeldVoteTimer; // 0xf8e8	
private:
	[[maybe_unused]] uint8_t __padf8f8[0x8]; // 0xf8f8
public:
	bool m_bShowHints; // 0xf900	
private:
	[[maybe_unused]] uint8_t __padf901[0x3]; // 0xf901
public:
	int32_t m_iNextTimeCheck; // 0xf904	
	bool m_bJustDidTeamKill; // 0xf908	
	bool m_bPunishForTeamKill; // 0xf909	
	bool m_bGaveTeamDamageWarning; // 0xf90a	
	bool m_bGaveTeamDamageWarningThisRound; // 0xf90b	
private:
	[[maybe_unused]] uint8_t __padf90c[0x4]; // 0xf90c
public:
	double m_dblLastReceivedPacketPlatFloatTime; // 0xf910	
	GameTime_t m_LastTeamDamageWarningTime; // 0xf918	
	GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove; // 0xf91c	
	uint32_t m_nSuspiciousHitCount; // 0xf920	
	uint32_t m_nNonSuspiciousHitStreak; // 0xf924	
	
	// Datamap fields:
	// void CCSPlayerControllerPlayerForceTeamThink; // 0x0
	// void CCSPlayerControllerResetForceTeamThink; // 0x0
	// void CCSPlayerControllerResourceDataThink; // 0x0
	// void CCSPlayerControllerInventoryUpdateThink; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "CTransform m_Transforms"
// MNetworkVarNames "EHANDLE m_hOwner"
struct PhysicsRagdollPose_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnTransformChanged"
	CNetworkUtlVectorBase<CTransform> m_Transforms; // 0x30	
	// MNetworkEnable
	CHandle<CBaseEntity> m_hOwner; // 0x48	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "item_definition_index_t m_unDefIdx"
// MNetworkVarNames "int m_nCost"
// MNetworkVarNames "int m_nPrevArmor"
// MNetworkVarNames "bool m_bPrevHelmet"
// MNetworkVarNames "CEntityHandle m_hItem"
struct SellbackPurchaseEntry_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	uint16_t m_unDefIdx; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0032[0x2]; // 0x32
public:
	// MNetworkEnable
	int32_t m_nCost; // 0x34	
	// MNetworkEnable
	int32_t m_nPrevArmor; // 0x38	
	// MNetworkEnable
	bool m_bPrevHelmet; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	// MNetworkEnable
	CEntityHandle m_hItem; // 0x40	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
struct SequenceHistory_t
{
public:
	HSequence m_hSequence; // 0x0	
	GameTime_t m_flSeqStartTime; // 0x4	
	float m_flSeqFixedCycle; // 0x8	
	AnimLoopMode_t m_nSeqLoopMode; // 0xc	
	float m_flPlaybackRate; // 0x10	
	float m_flCyclesPerSecond; // 0x14	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
struct ServerAuthoritativeWeaponSlot_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	uint16_t unClass; // 0x28	
	uint16_t unSlot; // 0x2a	
	uint16_t unItemDefIdx; // 0x2c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has Trivial Destructor
class TimedEvent
{
public:
	float m_TimeBetweenEvents; // 0x0	
	float m_fNextEvent; // 0x4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MNetworkVarNames "VPhysicsCollisionAttribute_t m_collisionAttribute"
// MNetworkVarNames "Vector m_vecMins"
// MNetworkVarNames "Vector m_vecMaxs"
// MNetworkVarNames "uint8 m_usSolidFlags"
// MNetworkVarNames "SolidType_t m_nSolidType"
// MNetworkVarNames "uint8 m_triggerBloat"
// MNetworkVarNames "SurroundingBoundsType_t m_nSurroundType"
// MNetworkVarNames "uint8 m_CollisionGroup"
// MNetworkVarNames "uint8 m_nEnablePhysics"
// MNetworkVarNames "Vector m_vecSpecifiedSurroundingMins"
// MNetworkVarNames "Vector m_vecSpecifiedSurroundingMaxs"
// MNetworkVarNames "Vector m_vCapsuleCenter1"
// MNetworkVarNames "Vector m_vCapsuleCenter2"
// MNetworkVarNames "float m_flCapsuleRadius"
class CCollisionProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "CollisionAttributeChanged"
	// -> m_nInteractsAs - 0x18
	// -> m_nInteractsWith - 0x20
	// -> m_nInteractsExclude - 0x28
	// -> m_nEntityId - 0x30
	// -> m_nOwnerId - 0x34
	// -> m_nHierarchyId - 0x38
	// -> m_nCollisionGroup - 0x3a
	// -> m_nCollisionFunctionMask - 0x3b
	VPhysicsCollisionAttribute_t m_collisionAttribute; // 0x10	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMins; // 0x40	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMaxs; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad0058[0x2]; // 0x58
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateSolidFlags"
	uint8_t m_usSolidFlags; // 0x5a	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateSolidType"
	SolidType_t m_nSolidType; // 0x5b	
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	uint8_t m_triggerBloat; // 0x5c	
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	SurroundingBoundsType_t m_nSurroundType; // 0x5d	
	// MNetworkEnable
	uint8_t m_CollisionGroup; // 0x5e	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateEnablePhysics"
	uint8_t m_nEnablePhysics; // 0x5f	
	float m_flBoundingRadius; // 0x60	
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMins; // 0x64	
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMaxs; // 0x70	
	Vector m_vecSurroundingMaxs; // 0x7c	
	Vector m_vecSurroundingMins; // 0x88	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateCapsule"
	Vector m_vCapsuleCenter1; // 0x94	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateCapsule"
	Vector m_vCapsuleCenter2; // 0xa0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateCapsule"
	float m_flCapsuleRadius; // 0xac	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "FixAngleSet_t nType"
// MNetworkVarNames "QAngle qAngle"
// MNetworkVarNames "uint32 nIndex"
struct ViewAngleServerChange_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	FixAngleSet_t nType; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0031[0x3]; // 0x31
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	QAngle qAngle; // 0x34	
	// MNetworkEnable
	uint32_t nIndex; // 0x40	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MNetworkVarNames "uint16 m_nItemDefIndex"
// MNetworkVarNames "uint16 m_nCount"
struct WeaponPurchaseCount_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	uint16_t m_nItemDefIndex; // 0x30	
	// MNetworkEnable
	uint16_t m_nCount; // 0x32	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2f8
// Has VTable
// 
// MNetworkVarNames "bool m_bIsRescuing"
// MNetworkVarNames "WeaponPurchaseTracker_t m_weaponPurchasesThisMatch"
// MNetworkVarNames "WeaponPurchaseTracker_t m_weaponPurchasesThisRound"
class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x1c8]; // 0x40
public:
	CHandle<CBasePlayerWeapon> m_hLastWeaponBeforeC4AutoSwitch; // 0x208	
private:
	[[maybe_unused]] uint8_t __pad020c[0x30]; // 0x20c
public:
	// MNetworkEnable
	bool m_bIsRescuing; // 0x23c	
private:
	[[maybe_unused]] uint8_t __pad023d[0x3]; // 0x23d
public:
	// MNetworkEnable
	WeaponPurchaseTracker_t m_weaponPurchasesThisMatch; // 0x240	
	// MNetworkEnable
	WeaponPurchaseTracker_t m_weaponPurchasesThisRound; // 0x298	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a8
// Has VTable
class CCSPlayer_CameraServices : public CCSPlayerBase_CameraServices
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x68
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "Vector dirPrimary"
// MNetworkVarNames "Color colorPrimary"
// MNetworkVarNames "Color colorSecondary"
// MNetworkVarNames "Color colorPrimaryLerpTo"
// MNetworkVarNames "Color colorSecondaryLerpTo"
// MNetworkVarNames "float32 start"
// MNetworkVarNames "float32 end"
// MNetworkVarNames "float32 farz"
// MNetworkVarNames "float32 maxdensity"
// MNetworkVarNames "float32 exponent"
// MNetworkVarNames "float32 HDRColorScale"
// MNetworkVarNames "float32 skyboxFogFactor"
// MNetworkVarNames "float32 skyboxFogFactorLerpTo"
// MNetworkVarNames "float32 startLerpTo"
// MNetworkVarNames "float32 endLerpTo"
// MNetworkVarNames "float32 maxdensityLerpTo"
// MNetworkVarNames "GameTime_t lerptime"
// MNetworkVarNames "float32 duration"
// MNetworkVarNames "float32 blendtobackground"
// MNetworkVarNames "float32 scattering"
// MNetworkVarNames "float32 locallightscale"
// MNetworkVarNames "bool enable"
// MNetworkVarNames "bool blend"
// MNetworkVarNames "bool m_bNoReflectionFog"
struct fogparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector dirPrimary; // 0x8	
	// MNetworkEnable
	Color colorPrimary; // 0x14	
	// MNetworkEnable
	Color colorSecondary; // 0x18	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorPrimaryLerpTo; // 0x1c	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorSecondaryLerpTo; // 0x20	
	// MNetworkEnable
	float start; // 0x24	
	// MNetworkEnable
	float end; // 0x28	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float farz; // 0x2c	
	// MNetworkEnable
	float maxdensity; // 0x30	
	// MNetworkEnable
	float exponent; // 0x34	
	// MNetworkEnable
	float HDRColorScale; // 0x38	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactor; // 0x3c	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactorLerpTo; // 0x40	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float startLerpTo; // 0x44	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float endLerpTo; // 0x48	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float maxdensityLerpTo; // 0x4c	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	GameTime_t lerptime; // 0x50	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float duration; // 0x54	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float blendtobackground; // 0x58	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float scattering; // 0x5c	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float locallightscale; // 0x60	
	// MNetworkEnable
	bool enable; // 0x64	
	// MNetworkEnable
	bool blend; // 0x65	
	// MNetworkEnable
	bool m_bNoReflectionFog; // 0x66	
	bool m_bPadding; // 0x67	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MNetworkVarNames "int32 m_nModelID"
// MNetworkVarNames "HMaterialStrong m_hMaterial"
// MNetworkVarNames "ShardSolid_t m_solid"
// MNetworkVarNames "ShatterPanelMode m_ShatterPanelMode"
// MNetworkVarNames "Vector2D m_vecPanelSize"
// MNetworkVarNames "Vector2D m_vecStressPositionA"
// MNetworkVarNames "Vector2D m_vecStressPositionB"
// MNetworkVarNames "Vector2D m_vecPanelVertices"
// MNetworkVarNames "float m_flGlassHalfThickness"
// MNetworkVarNames "bool m_bHasParent"
// MNetworkVarNames "bool m_bParentFrozen"
// MNetworkVarNames "CUtlStringToken m_SurfacePropStringToken"
struct shard_model_desc_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	int32_t m_nModelID; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeIMaterial2> m_hMaterial; // 0x10	
	// MNetworkEnable
	ShardSolid_t m_solid; // 0x18	
	// MNetworkEnable
	ShatterPanelMode m_ShatterPanelMode; // 0x19	
private:
	[[maybe_unused]] uint8_t __pad001a[0x2]; // 0x1a
public:
	// MNetworkEnable
	Vector2D m_vecPanelSize; // 0x1c	
	// MNetworkEnable
	Vector2D m_vecStressPositionA; // 0x24	
	// MNetworkEnable
	Vector2D m_vecStressPositionB; // 0x2c	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	// MNetworkEnable
	CNetworkUtlVectorBase<Vector2D> m_vecPanelVertices; // 0x38	
	// MNetworkEnable
	float m_flGlassHalfThickness; // 0x50	
	// MNetworkEnable
	bool m_bHasParent; // 0x54	
	// MNetworkEnable
	bool m_bParentFrozen; // 0x55	
private:
	[[maybe_unused]] uint8_t __pad0056[0x2]; // 0x56
public:
	// MNetworkEnable
	CUtlStringToken m_SurfacePropStringToken; // 0x58	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x90
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "int16 scale"
// MNetworkVarNames "Vector origin"
// MNetworkVarNames "bool bClip3DSkyBoxNearToWorldFar"
// MNetworkVarNames "float32 flClip3DSkyBoxNearToWorldFarOffset"
// MNetworkVarNames "fogparams_t fog"
// MNetworkVarNames "WorldGroupId_t m_nWorldGroupID"
struct sky3dparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	int16_t scale; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000a[0x2]; // 0xa
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector origin; // 0xc	
	// MNetworkEnable
	bool bClip3DSkyBoxNearToWorldFar; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
	// MNetworkEnable
	float flClip3DSkyBoxNearToWorldFarOffset; // 0x1c	
	// MNetworkEnable
	fogparams_t fog; // 0x20	
	// MNetworkEnable
	WorldGroupId_t m_nWorldGroupID; // 0x88	
};

