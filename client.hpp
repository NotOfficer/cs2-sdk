#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: client.dll
// Classes count: 414 (Allocated) | 443 (Unallocated)
// Enums count: 1 (Allocated) | 8 (Unallocated)
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: client.dll (project 'client')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class C_BaseCombatCharacter__WaterWakeMode_t : uint32_t
{
	WATER_WAKE_NONE = 0x0,
	WATER_WAKE_IDLE = 0x1,
	WATER_WAKE_WALKING = 0x2,
	WATER_WAKE_RUNNING = 0x3,
	WATER_WAKE_WATER_OVERHEAD = 0x4,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 15
// Alignment: 4
// Size: 0x4
enum class CompositeMaterialInputLooseVariableType_t : uint32_t
{
	// MPropertyFriendlyName "Boolean"
	LOOSE_VARIABLE_TYPE_BOOLEAN = 0x0,
	// MPropertyFriendlyName "Integer"
	LOOSE_VARIABLE_TYPE_INTEGER1 = 0x1,
	// MPropertyFriendlyName "Integer2"
	LOOSE_VARIABLE_TYPE_INTEGER2 = 0x2,
	// MPropertyFriendlyName "Integer3"
	LOOSE_VARIABLE_TYPE_INTEGER3 = 0x3,
	// MPropertyFriendlyName "Integer4"
	LOOSE_VARIABLE_TYPE_INTEGER4 = 0x4,
	// MPropertyFriendlyName "Float"
	LOOSE_VARIABLE_TYPE_FLOAT1 = 0x5,
	// MPropertyFriendlyName "Float2"
	LOOSE_VARIABLE_TYPE_FLOAT2 = 0x6,
	// MPropertyFriendlyName "Float3"
	LOOSE_VARIABLE_TYPE_FLOAT3 = 0x7,
	// MPropertyFriendlyName "Float4"
	LOOSE_VARIABLE_TYPE_FLOAT4 = 0x8,
	// MPropertyFriendlyName "Color4"
	LOOSE_VARIABLE_TYPE_COLOR4 = 0x9,
	// MPropertyFriendlyName "String"
	LOOSE_VARIABLE_TYPE_STRING = 0xa,
	// MPropertyFriendlyName "System Variable"
	LOOSE_VARIABLE_TYPE_SYSTEMVAR = 0xb,
	// MPropertyFriendlyName "Material"
	LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 0xc,
	// MPropertyFriendlyName "Texture"
	LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 0xd,
	// MPropertyFriendlyName "Panorama Render"
	LOOSE_VARIABLE_TYPE_PANORAMA_RENDER = 0xe,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class CompositeMaterialInputTextureType_t : uint32_t
{
	// MPropertyFriendlyName "Default"
	INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
	// MPropertyFriendlyName "Normal Map"
	INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
	// MPropertyFriendlyName "Color"
	INPUT_TEXTURE_TYPE_COLOR = 0x2,
	// MPropertyFriendlyName "Masks"
	INPUT_TEXTURE_TYPE_MASKS = 0x3,
	// MPropertyFriendlyName "Roughness"
	INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
	// MPropertyFriendlyName "Pearlescence Mask"
	INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
	// MPropertyFriendlyName "Ambient Occlusion"
	INPUT_TEXTURE_TYPE_AO = 0x6,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class CompositeMaterialInputContainerSourceType_t : uint32_t
{
	// MPropertyFriendlyName "Target Material"
	CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
	// MPropertyFriendlyName "Material from Target Material Attr"
	CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
	// MPropertyFriendlyName "Specified Material"
	CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
	// MPropertyFriendlyName "Loose Variables"
	CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
	// MPropertyFriendlyName "Variable from Target Material Attr"
	CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
	// MPropertyFriendlyName "Target Instance Material"
	CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 10
// Alignment: 4
// Size: 0x4
enum class CompMatPropertyMutatorType_t : uint32_t
{
	// MPropertyFriendlyName "Init With"
	COMP_MAT_PROPERTY_MUTATOR_INIT = 0x0,
	// MPropertyFriendlyName "Copy Matching Keys From"
	COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 0x1,
	// MPropertyFriendlyName "Copy Keys with Suffix"
	COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 0x2,
	// MPropertyFriendlyName "Copy Property From"
	COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 0x3,
	// MPropertyFriendlyName "Set Value"
	COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 0x4,
	// MPropertyFriendlyName "Generate Texture"
	COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 0x5,
	// MPropertyFriendlyName "Mutators"
	COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 0x6,
	// MPropertyFriendlyName "Pop Input Variable Queue"
	COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 0x7,
	// MPropertyFriendlyName "Draw Text"
	COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 0x8,
	// MPropertyFriendlyName "Random Roll Input Variables"
	COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 0x9,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class CompositeMaterialVarSystemVar_t : uint32_t
{
	// MPropertyFriendlyName "Composite Generation Time"
	COMPMATSYSVAR_COMPOSITETIME = 0x0,
	// MPropertyFriendlyName "Empty Resource Spacer"
	COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class CompositeMaterialMatchFilterType_t : uint32_t
{
	// MPropertyFriendlyName "Target Material Attribute Exists"
	MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
	// MPropertyFriendlyName "Target Material Shader Name"
	MATCH_FILTER_MATERIAL_SHADER = 0x1,
	// MPropertyFriendlyName "Target Material Name SubStr"
	MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
	// MPropertyFriendlyName "Target Material Attribute Equals"
	MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
	// MPropertyFriendlyName "Target Material Property Exists"
	MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
	// MPropertyFriendlyName "Target Material Property Equals"
	MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class CompMatPropertyMutatorConditionType_t : uint32_t
{
	// MPropertyFriendlyName "Input Container Exists"
	COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
	// MPropertyFriendlyName "Input Container Variable Exists"
	COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
	// MPropertyFriendlyName "Input Container Variable Exists and Equals"
	COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2,
};

struct GameTime_t;
struct fogparams_t;
struct CCSGameModeRules;
struct C_RetakeGameRules;
struct CSkeletonInstance;
struct CRenderComponent;
struct CHitboxComponent;
struct CCollisionProperty;
struct CGlowProperty;
struct CNetworkViewOffsetVector;
struct CClientAlphaProperty;
struct C_PointCamera;
struct C_EnvWindShared;
struct AttachmentHandle_t;
struct GameTick_t;
struct C_fogplayerparams_t;
struct audioparams_t;
struct C_RopeKeyframe;
struct CGameSceneNode;
struct CNetworkVarChainer;
struct C_LightGlowOverlay;
struct CModelState;
struct CBaseAnimGraphController;
struct ParticleIndex_t;
struct CCSPlayer_BulletServices;
struct CCSPlayer_HostageServices;
struct CCSPlayer_BuyServices;
struct CCSPlayer_GlowServices;
struct CCSPlayer_ActionTrackingServices;
struct C_EconItemView;
struct EntitySpottedState_t;
struct CountdownTimer;
struct CPointOffScreenIndicatorUi;
struct C_PointClientUIWorldPanel;
struct sky3dparams_t;
struct C_SkyCamera;
struct CCSPlayer_PingServices;
struct CPlayer_ViewModelServices;
struct C_CSWeaponBase;
struct C_CommandContext;
struct CAnimGraphNetworkedVariables;
struct HSequence;
struct CBaseAnimGraph;
struct PhysicsRagdollPose_t;
struct AmmoIndex_t;
struct CPlayer_WeaponServices;
struct CPlayer_ItemServices;
struct CPlayer_AutoaimServices;
struct CPlayer_ObserverServices;
struct CPlayer_WaterServices;
struct CPlayer_UseServices;
struct CPlayer_FlashlightServices;
struct CPlayer_CameraServices;
struct CPlayer_MovementServices;
struct CBuoyancyHelper;
struct C_RopeKeyframe::CPhysicsDelegate;
struct TimedEvent;
struct CFireOverlay;
struct ModelConfigHandle_t;
struct CEntityIOOutput;
struct C_AttributeContainer;
struct C_CSGameRules;
struct CAttributeManager;
struct CAttributeList;
struct CInButtonState;
struct CSkillFloat;
struct CSMatchStats_t;
struct WeaponPurchaseTracker_t;
struct VPhysicsCollisionAttribute_t;
struct CPlayerSprayDecalRenderHelper;
struct shard_model_desc_t;
struct CLightComponent;
struct SceneEventId_t;
struct C_IronSightController;
struct CBodyComponent;
struct CNetworkTransmitComponent;
struct CNetworkVelocityVector;
struct CParticleProperty;
struct ChangeAccessorFieldPathIndex_t;
struct CEntityIdentity;
struct CPropDataComponent;
struct CFiringModeFloat;
struct CFiringModeInt;
struct CCSPlayerController_InGameMoneyServices;
struct CCSPlayerController_InventoryServices;
struct CCSPlayerController_ActionTrackingServices;
struct CCSPlayerController_DamageServices;
struct CScriptComponent;
struct CEntityInstance;
struct CGameSceneNodeHandle;
struct CNetworkOriginCellCoordQuantizedVector;
struct CCSPointScriptEntity;
struct CBasePlayerController;
struct CDecalInfo;
struct C_FireSmoke;
struct CompositeMaterialInputLooseVariable_t;

// Registered binary: client.dll (project 'entity2')
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

// Registered binary: client.dll (project 'entity2')
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

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x548
// Has VTable
// 
// MNetworkExcludeByName "m_bClientSideRagdoll"
// MNetworkExcludeByName "m_iMaxHealth"
// MNetworkExcludeByUserGroup "Player"
// MNetworkExcludeByUserGroup "Water"
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkExcludeByName "m_spawnflags"
// MNetworkExcludeByName "m_bTakesDamage"
// MNetworkExcludeByName "m_nTakeDamageFlags"
// MNetworkExcludeByName "m_vecAbsVelocity"
// MNetworkExcludeByName "m_flSpeed"
// MNetworkVarNames "CBodyComponent::Storage_t m_CBodyComponent"
// MNetworkVarNames "int32 m_iMaxHealth"
// MNetworkVarNames "int32 m_iHealth"
// MNetworkVarNames "uint8 m_lifeState"
// MNetworkVarNames "bool m_bTakesDamage"
// MNetworkVarNames "TakeDamageFlags_t m_nTakeDamageFlags"
// MNetworkVarNames "bool m_bIsPlatform"
// MNetworkVarNames "uint8 m_ubInterpolationFrame"
// MNetworkVarNames "EntitySubclassID_t m_nSubclassID"
// MNetworkVarNames "float32 m_flAnimTime"
// MNetworkVarNames "float32 m_flSimulationTime"
// MNetworkVarNames "GameTime_t m_flCreateTime"
// MNetworkVarNames "float m_flSpeed"
// MNetworkVarNames "bool m_bClientSideRagdoll"
// MNetworkVarNames "uint8 m_iTeamNum"
// MNetworkVarNames "uint32 m_spawnflags"
// MNetworkVarNames "GameTick_t m_nNextThinkTick"
// MNetworkVarNames "uint32 m_fFlags"
// MNetworkVarNames "Vector m_vecBaseVelocity"
// MNetworkVarNames "CHandle< CBaseEntity> m_hEffectEntity"
// MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerEntity"
// MNetworkVarNames "MoveCollide_t m_MoveCollide"
// MNetworkVarNames "MoveType_t m_MoveType"
// MNetworkVarNames "float32 m_flWaterLevel"
// MNetworkVarNames "uint32 m_fEffects"
// MNetworkVarNames "CHandle< CBaseEntity> m_hGroundEntity"
// MNetworkVarNames "int m_nGroundBodyIndex"
// MNetworkVarNames "float32 m_flFriction"
// MNetworkVarNames "float32 m_flElasticity"
// MNetworkVarNames "float32 m_flGravityScale"
// MNetworkVarNames "float32 m_flTimeScale"
// MNetworkVarNames "bool m_bAnimatedEveryTick"
// MNetworkVarNames "GameTime_t m_flNavIgnoreUntilTime"
// MNetworkVarNames "BloodType m_nBloodType"
class C_BaseEntity : public CEntityInstance
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CBodyComponent"
	// MNetworkAlias "CBodyComponent"
	// MNetworkTypeAlias "CBodyComponent"
	// MNetworkPriority "48"
	CBodyComponent* m_CBodyComponent; // 0x38	
	CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad01e0[0x120]; // 0x1e0
public:
	GameTick_t m_nLastThinkTick; // 0x300	
private:
	[[maybe_unused]] uint8_t __pad0304[0x4]; // 0x304
public:
	CGameSceneNode* m_pGameSceneNode; // 0x308	
	CRenderComponent* m_pRenderComponent; // 0x310	
	CCollisionProperty* m_pCollision; // 0x318	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_iMaxHealth; // 0x320	
	// MNetworkEnable
	// MNetworkSerializer "ClampHealth"
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	int32_t m_iHealth; // 0x324	
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	uint8_t m_lifeState; // 0x328	
	// MNetworkEnable
	bool m_bTakesDamage; // 0x329	
private:
	[[maybe_unused]] uint8_t __pad032a[0x6]; // 0x32a
public:
	// MNetworkEnable
	TakeDamageFlags_t m_nTakeDamageFlags; // 0x330	
	// MNetworkEnable
	bool m_bIsPlatform; // 0x338	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationFrameChanged"
	uint8_t m_ubInterpolationFrame; // 0x339	
private:
	[[maybe_unused]] uint8_t __pad033a[0x2]; // 0x33a
public:
	CHandle<C_BaseEntity> m_hSceneObjectController; // 0x33c	
	int32_t m_nNoInterpolationTick; // 0x340	
	int32_t m_nVisibilityNoInterpolationTick; // 0x344	
	float m_flProxyRandomValue; // 0x348	
	int32_t m_iEFlags; // 0x34c	
	uint8_t m_nWaterType; // 0x350	
	bool m_bInterpolateEvenWithNoModel; // 0x351	
	bool m_bPredictionEligible; // 0x352	
	bool m_bApplyLayerMatchIDToModel; // 0x353	
	CUtlStringToken m_tokLayerMatchID; // 0x354	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSubclassIDChanged"
	CUtlStringToken m_nSubclassID; // 0x358	
private:
	[[maybe_unused]] uint8_t __pad035c[0xc]; // 0x35c
public:
	int32_t m_nSimulationTick; // 0x368	
	int32_t m_iCurrentThinkContext; // 0x36c	
	CUtlVector<thinkfunc_t> m_aThinkFunctions; // 0x370	
	bool m_bDisabledContextThinks; // 0x388	
private:
	[[maybe_unused]] uint8_t __pad0389[0x3]; // 0x389
public:
	// MNetworkEnable
	// MNetworkPriority "0"
	// MNetworkSerializer "animTimeSerializer"
	float m_flAnimTime; // 0x38c	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkSerializer "simulationTimeSerializer"
	// MNetworkChangeCallback "OnSimulationTimeChanged"
	float m_flSimulationTime; // 0x390	
	uint8_t m_nSceneObjectOverrideFlags; // 0x394	
	bool m_bHasSuccessfullyInterpolated; // 0x395	
	bool m_bHasAddedVarsToInterpolation; // 0x396	
	bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x397	
	int32_t m_nInterpolationLatchDirtyFlags[2]; // 0x398	
	uint16_t m_ListEntry[11]; // 0x3a0	
private:
	[[maybe_unused]] uint8_t __pad03b6[0x2]; // 0x3b6
public:
	// MNetworkEnable
	GameTime_t m_flCreateTime; // 0x3b8	
	// MNetworkEnable
	float m_flSpeed; // 0x3bc	
	uint16_t m_EntClientFlags; // 0x3c0	
	// MNetworkEnable
	bool m_bClientSideRagdoll; // 0x3c2	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetVarTeamNumChanged"
	uint8_t m_iTeamNum; // 0x3c3	
	// MNetworkEnable
	uint32_t m_spawnflags; // 0x3c4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTick_t m_nNextThinkTick; // 0x3c8	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnFlagsChanged"
	uint32_t m_fFlags; // 0x3cc	
	Vector m_vecAbsVelocity; // 0x3d0	
private:
	[[maybe_unused]] uint8_t __pad03dc[0x4]; // 0x3dc
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkChangeCallback "OnLocalVelocityChanged"
	// MNetworkPriority "32"
	CNetworkVelocityVector m_vecVelocity; // 0x3e0	
private:
	[[maybe_unused]] uint8_t __pad0408[0x8]; // 0x408
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	Vector m_vecBaseVelocity; // 0x410	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hEffectEntity; // 0x41c	
	// MNetworkEnable
	// MNetworkPriority "32"
	CHandle<C_BaseEntity> m_hOwnerEntity; // 0x420	
	// MNetworkEnable
	MoveCollide_t m_MoveCollide; // 0x424	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMoveTypeChanged"
	MoveType_t m_MoveType; // 0x425	
	MoveType_t m_nActualMoveType; // 0x426	
private:
	[[maybe_unused]] uint8_t __pad0427[0x1]; // 0x427
public:
	// MNetworkEnable
	// MNetworkUserGroup "Water"
	// MNetworkChangeCallback "OnWaterLevelChangeNetworked"
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "8"
	float m_flWaterLevel; // 0x428	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEffectsChanged"
	uint32_t m_fEffects; // 0x42c	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	CHandle<C_BaseEntity> m_hGroundEntity; // 0x430	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	int32_t m_nGroundBodyIndex; // 0x434	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "4.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFriction; // 0x438	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	float m_flElasticity; // 0x43c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flGravityScale; // 0x440	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flTimeScale; // 0x444	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bAnimatedEveryTick; // 0x448	
private:
	[[maybe_unused]] uint8_t __pad0449[0x3]; // 0x449
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnNavIgnoreChanged"
	GameTime_t m_flNavIgnoreUntilTime; // 0x44c	
	uint16_t m_hThink; // 0x450	
private:
	[[maybe_unused]] uint8_t __pad0452[0xe]; // 0x452
public:
	uint8_t m_fBBoxVisFlags; // 0x460	
	bool m_bPredictable; // 0x461	
	bool m_bRenderWithViewModels; // 0x462	
private:
	[[maybe_unused]] uint8_t __pad0463[0x1]; // 0x463
public:
	CSplitScreenSlot m_nSplitUserPlayerPredictionSlot; // 0x464	
	int32_t m_nFirstPredictableCommand; // 0x468	
	int32_t m_nLastPredictableCommand; // 0x46c	
	CHandle<C_BaseEntity> m_hOldMoveParent; // 0x470	
private:
	[[maybe_unused]] uint8_t __pad0474[0x4]; // 0x474
public:
	CParticleProperty m_Particles; // 0x478	
	CUtlVector<float32> m_vecPredictedScriptFloats; // 0x4a0	
	CUtlVector<int32> m_vecPredictedScriptFloatIDs; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04d0[0x18]; // 0x4d0
public:
	int32_t m_nNextScriptVarRecordID; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0xc]; // 0x4ec
public:
	QAngle m_vecAngVelocity; // 0x4f8	
	int32_t m_DataChangeEventRef; // 0x504	
	CUtlVector<CEntityHandle> m_dependencies; // 0x508	
	int32_t m_nCreationTick; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad0524[0x9]; // 0x524
public:
	bool m_bAnimTimeChanged; // 0x52d	
	bool m_bSimulationTimeChanged; // 0x52e	
private:
	[[maybe_unused]] uint8_t __pad052f[0x9]; // 0x52f
public:
	CUtlString m_sUniqueHammerID; // 0x538	
	// MNetworkEnable
	BloodType m_nBloodType; // 0x540	
	
	// Static fields:
	static bool &Get_sm_bDatadescValidating(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[0]->m_instance);};
	static bool &Get_sm_bAccurateTriggerBboxChecks(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[1]->m_instance);};
	static bool &Get_sm_bDisableTouchFuncs(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[2]->m_instance);};
	static bool &Get_m_bAllowPrecache(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[3]->m_instance);};
	static LatchDirtyPermission_t &Get_s_nLatchPermissions(){return *reinterpret_cast<LatchDirtyPermission_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[4]->m_instance);};
	static int32_t &Get_m_nPredictionRandomSeed(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[5]->m_instance);};
	static CBasePlayerController* &Get_m_pPredictionPlayerController(){return *reinterpret_cast<CBasePlayerController**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[6]->m_instance);};
	static bool &Get_s_bAbsQueriesValid(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[7]->m_instance);};
	static bool &Get_s_bAbsRecomputationEnabled(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[8]->m_instance);};
	static bool &Get_s_bComputingInterpolatedValues(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[9]->m_instance);};
	static bool &Get_s_bPreventingSetAnimRunAnimEvents(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[10]->m_instance);};
	static CUtlVector< C_BaseEntity* > &Get_gm_UsableObjects(){return *reinterpret_cast<CUtlVector< C_BaseEntity* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[11]->m_instance);};
	
	// Datamap fields:
	// CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
	// void m_CScriptComponent; // 0x28
	// CUtlSymbolLarge subclass_name; // 0x7fffffff
	// void m_pSubclassVData; // 0x360
	// QAngle angles; // 0x7fffffff
	// Vector origin; // 0x7fffffff
	// CStrongHandle< InfoForResourceTypeCModel > model; // 0x7fffffff
	// CUtlString ownername; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
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
	CUtlVector<CHandle<C_BaseEntity>> m_Providers; // 0x8	
	// MNetworkEnable
	int32_t m_iReapplyProvisionParity; // 0x20	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hOuter; // 0x24	
	bool m_bPreventLoopback; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0029[0x3]; // 0x29
public:
	// MNetworkEnable
	attributeprovidertypes_t m_ProviderType; // 0x2c	
	CUtlVector<CAttributeManager::cached_attribute_float_t> m_CachedResults; // 0x30	
};

// Registered binary: client.dll (project 'client')
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
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CHitboxComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CHitboxComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
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
// Size: 0x40
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "int m_nTotalPausedTicks"
// MNetworkVarNames "int m_nPauseStartTick"
// MNetworkVarNames "bool m_bGamePaused"
class C_GameRules
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
	// MNetworkEnable
	int32_t m_nTotalPausedTicks; // 0x30	
	// MNetworkEnable
	int32_t m_nPauseStartTick; // 0x34	
	// MNetworkEnable
	bool m_bGamePaused; // 0x38	
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
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
	C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute> m_Attributes; // 0x8	
	CAttributeManager* m_pManager; // 0x58	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc8
// Has VTable
// 
// MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
// MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
// MNetworkVarNames "RenderMode_t m_nRenderMode"
// MNetworkVarNames "RenderFx_t m_nRenderFX"
// MNetworkVarNames "Color m_clrRender"
// MNetworkVarNames "EntityRenderAttribute_t m_vecRenderAttributes"
// MNetworkVarNames "bool m_bRenderToCubemaps"
// MNetworkVarNames "CCollisionProperty m_Collision"
// MNetworkVarNames "CGlowProperty m_Glow"
// MNetworkVarNames "float m_flGlowBackfaceMult"
// MNetworkVarNames "float32 m_fadeMinDist"
// MNetworkVarNames "float32 m_fadeMaxDist"
// MNetworkVarNames "float32 m_flFadeScale"
// MNetworkVarNames "float32 m_flShadowStrength"
// MNetworkVarNames "uint8 m_nObjectCulling"
// MNetworkVarNames "int m_nAddDecal"
// MNetworkVarNames "Vector m_vDecalPosition"
// MNetworkVarNames "Vector m_vDecalForwardAxis"
// MNetworkVarNames "float m_flDecalHealBloodRate"
// MNetworkVarNames "float m_flDecalHealHeightRate"
// MNetworkVarNames "CHandle< C_BaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
class C_BaseModelEntity : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x4d0]; // 0x548
public:
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; // 0xa18	
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0xa20	
private:
	[[maybe_unused]] uint8_t __pad0a48[0x20]; // 0xa48
public:
	bool m_bInitModelEffects; // 0xa68	
	bool m_bIsStaticProp; // 0xa69	
private:
	[[maybe_unused]] uint8_t __pad0a6a[0x2]; // 0xa6a
public:
	int32_t m_nLastAddDecal; // 0xa6c	
	int32_t m_nDecalsAdded; // 0xa70	
	int32_t m_iOldHealth; // 0xa74	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderModeChanged"
	RenderMode_t m_nRenderMode; // 0xa78	
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0xa79	
	bool m_bAllowFadeInView; // 0xa7a	
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0xa7b	
private:
	[[maybe_unused]] uint8_t __pad0a7f[0x1]; // 0xa7f
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t> m_vecRenderAttributes; // 0xa80	
private:
	[[maybe_unused]] uint8_t __pad0ad0[0x18]; // 0xad0
public:
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0xae8	
private:
	[[maybe_unused]] uint8_t __pad0ae9[0x7]; // 0xae9
public:
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0xaf0	
	// MNetworkEnable
	// -> m_fGlowColor - 0xba8
	// -> m_iGlowType - 0xbd0
	// -> m_iGlowTeam - 0xbd4
	// -> m_nGlowRange - 0xbd8
	// -> m_nGlowRangeMin - 0xbdc
	// -> m_glowColorOverride - 0xbe0
	// -> m_bFlashing - 0xbe4
	// -> m_flGlowTime - 0xbe8
	// -> m_flGlowStartTime - 0xbec
	// -> m_bEligibleForScreenHighlight - 0xbf0
	// -> m_bGlowing - 0xbf1
	CGlowProperty m_Glow; // 0xba0	
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0xbf8	
	// MNetworkEnable
	float m_fadeMinDist; // 0xbfc	
	// MNetworkEnable
	float m_fadeMaxDist; // 0xc00	
	// MNetworkEnable
	float m_flFadeScale; // 0xc04	
	// MNetworkEnable
	float m_flShadowStrength; // 0xc08	
	// MNetworkEnable
	uint8_t m_nObjectCulling; // 0xc0c	
private:
	[[maybe_unused]] uint8_t __pad0c0d[0x3]; // 0xc0d
public:
	// MNetworkEnable
	int32_t m_nAddDecal; // 0xc10	
	// MNetworkEnable
	Vector m_vDecalPosition; // 0xc14	
	// MNetworkEnable
	Vector m_vDecalForwardAxis; // 0xc20	
	// MNetworkEnable
	float m_flDecalHealBloodRate; // 0xc2c	
	// MNetworkEnable
	float m_flDecalHealHeightRate; // 0xc30	
private:
	[[maybe_unused]] uint8_t __pad0c34[0x4]; // 0xc34
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>> m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0xc38	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnViewOffsetChanged"
	CNetworkViewOffsetVector m_vecViewOffset; // 0xc50	
private:
	[[maybe_unused]] uint8_t __pad0c78[0x8]; // 0xc78
public:
	CClientAlphaProperty* m_pClientAlphaProperty; // 0xc80	
	Color m_ClientOverrideTint; // 0xc88	
	bool m_bUseClientOverrideTint; // 0xc8c	
	
	// Datamap fields:
	// int32_t InputAlpha; // 0x0
	// Color InputColor; // 0x0
	// int32_t InputSkin; // 0x0
	// CUtlString add_attribute; // 0x7fffffff
	// void m_Ropes; // 0xa48
	// Color rendercolor32; // 0x7fffffff
	// Color rendercolor; // 0x7fffffff
	// int32_t renderamt; // 0x7fffffff
	// Vector mins; // 0x7fffffff
	// Vector maxs; // 0x7fffffff
	// const char * skin; // 0x7fffffff
	// CUtlString bodygroups; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed0
// Has VTable
// 
// MNetworkIncludeByName "m_bClientSideRagdoll"
// MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
// MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
// MNetworkVarNames "Vector m_vecForce"
// MNetworkVarNames "int32 m_nForceBone"
// MNetworkVarNames "PhysicsRagdollPose_t* m_pRagdollPose"
// MNetworkVarNames "bool m_bRagdollClientSide"
class CBaseAnimGraph : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x78]; // 0xcc8
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0xd40	
private:
	[[maybe_unused]] uint8_t __pad0d41[0x1]; // 0xd41
public:
	bool m_bSuppressAnimEventSounds; // 0xd42	
private:
	[[maybe_unused]] uint8_t __pad0d43[0xd]; // 0xd43
public:
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0xd50	
private:
	[[maybe_unused]] uint8_t __pad0d51[0x3]; // 0xd51
public:
	float m_flMaxSlopeDistance; // 0xd54	
	Vector m_vLastSlopeCheckPos; // 0xd58	
	bool m_bAnimationUpdateScheduled; // 0xd64	
private:
	[[maybe_unused]] uint8_t __pad0d65[0x3]; // 0xd65
public:
	// MNetworkEnable
	Vector m_vecForce; // 0xd68	
	// MNetworkEnable
	int32_t m_nForceBone; // 0xd74	
	CBaseAnimGraph* m_pClientsideRagdoll; // 0xd78	
	bool m_bBuiltRagdoll; // 0xd80	
private:
	[[maybe_unused]] uint8_t __pad0d81[0x17]; // 0xd81
public:
	// MNetworkEnable
	PhysicsRagdollPose_t* m_pRagdollPose; // 0xd98	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bRagdollClientSide; // 0xda0	
private:
	[[maybe_unused]] uint8_t __pad0da1[0xf]; // 0xda1
public:
	bool m_bHasAnimatedMaterialAttributes; // 0xdb0	
	
	// Datamap fields:
	// void m_pMainGraphController; // 0xd38
	// float InputSetPlaybackRate; // 0x0
	// CUtlSymbolLarge InputSetBodyGroup; // 0x0
	// bool InputDisableAnimEventSounds; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1068
// Has VTable
// 
// MNetworkVarNames "float32 m_flexWeight"
// MNetworkVarNames "bool m_blinktoggle"
class C_BaseFlex : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0ed0[0x10]; // 0xed0
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	C_NetworkUtlVectorBase<float32> m_flexWeight; // 0xee0	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnViewTargetChanged"
	Vector m_vLookTargetPosition; // 0xef8	
private:
	[[maybe_unused]] uint8_t __pad0f04[0xc]; // 0xf04
public:
	// MNetworkEnable
	bool m_blinktoggle; // 0xf10	
private:
	[[maybe_unused]] uint8_t __pad0f11[0x5f]; // 0xf11
public:
	int32_t m_nLastFlexUpdateFrameCount; // 0xf70	
	Vector m_CachedViewTarget; // 0xf74	
	SceneEventId_t m_nNextSceneEventId; // 0xf80	
	int32_t m_iBlink; // 0xf84	
	float m_blinktime; // 0xf88	
	bool m_prevblinktoggle; // 0xf8c	
private:
	[[maybe_unused]] uint8_t __pad0f8d[0x3]; // 0xf8d
public:
	int32_t m_iJawOpen; // 0xf90	
	float m_flJawOpenAmount; // 0xf94	
	float m_flBlinkAmount; // 0xf98	
	AttachmentHandle_t m_iMouthAttachment; // 0xf9c	
	AttachmentHandle_t m_iEyeAttachment; // 0xf9d	
	bool m_bResetFlexWeightsOnModelChange; // 0xf9e	
private:
	[[maybe_unused]] uint8_t __pad0f9f[0x19]; // 0xf9f
public:
	int32_t m_nEyeOcclusionRendererBone; // 0xfb8	
	matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xfbc	
	Vector m_vEyeOcclusionRendererHalfExtent; // 0xfec	
private:
	[[maybe_unused]] uint8_t __pad0ff8[0x10]; // 0xff8
public:
	C_BaseFlex::Emphasized_Phoneme m_PhonemeClasses[3]; // 0x1008	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd8
// Has VTable
// 
// MNetworkVarNames "float32 m_flLightScale"
// MNetworkVarNames "float32 m_Radius"
class C_SpotlightEnd : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	float m_flLightScale; // 0xcc8	
	// MNetworkEnable
	float m_Radius; // 0xccc	
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x448
// Has VTable
// 
// MNetworkVarNames "item_definition_index_t m_iItemDefinitionIndex"
// MNetworkVarNames "int m_iEntityQuality"
// MNetworkVarNames "uint32 m_iEntityLevel"
// MNetworkVarNames "uint32 m_iItemIDHigh"
// MNetworkVarNames "uint32 m_iItemIDLow"
// MNetworkVarNames "uint32 m_iAccountID"
// MNetworkVarNames "uint32 m_iInventoryPosition"
// MNetworkVarNames "bool m_bInitialized"
// MNetworkVarNames "CAttributeList m_AttributeList"
// MNetworkVarNames "CAttributeList m_NetworkedDynamicAttributes"
// MNetworkVarNames "char m_szCustomName"
class C_EconItemView : public IEconItemInterface
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x58]; // 0x8
public:
	bool m_bInventoryImageRgbaRequested; // 0x60	
	bool m_bInventoryImageTriedCache; // 0x61	
private:
	[[maybe_unused]] uint8_t __pad0062[0x1e]; // 0x62
public:
	int32_t m_nInventoryImageRgbaWidth; // 0x80	
	int32_t m_nInventoryImageRgbaHeight; // 0x84	
	char m_szCurrentLoadCachedFileName[260]; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad018c[0x2c]; // 0x18c
public:
	bool m_bRestoreCustomMaterialAfterPrecache; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01b9[0x1]; // 0x1b9
public:
	// MNetworkEnable
	uint16_t m_iItemDefinitionIndex; // 0x1ba	
	// MNetworkEnable
	int32_t m_iEntityQuality; // 0x1bc	
	// MNetworkEnable
	uint32_t m_iEntityLevel; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	uint64_t m_iItemID; // 0x1c8	
	// MNetworkEnable
	uint32_t m_iItemIDHigh; // 0x1d0	
	// MNetworkEnable
	uint32_t m_iItemIDLow; // 0x1d4	
	// MNetworkEnable
	uint32_t m_iAccountID; // 0x1d8	
	// MNetworkEnable
	uint32_t m_iInventoryPosition; // 0x1dc	
private:
	[[maybe_unused]] uint8_t __pad01e0[0x8]; // 0x1e0
public:
	// MNetworkEnable
	bool m_bInitialized; // 0x1e8	
	bool m_bDisallowSOC; // 0x1e9	
	bool m_bIsStoreItem; // 0x1ea	
	bool m_bIsTradeItem; // 0x1eb	
	int32_t m_iEntityQuantity; // 0x1ec	
	int32_t m_iRarityOverride; // 0x1f0	
	int32_t m_iQualityOverride; // 0x1f4	
	uint8_t m_unClientFlags; // 0x1f8	
	uint8_t m_unOverrideStyle; // 0x1f9	
private:
	[[maybe_unused]] uint8_t __pad01fa[0x16]; // 0x1fa
public:
	// MNetworkEnable
	// -> m_Attributes - 0x218
	// -> m_pManager - 0x268
	CAttributeList m_AttributeList; // 0x210	
	// MNetworkEnable
	// -> m_Attributes - 0x278
	// -> m_pManager - 0x2c8
	CAttributeList m_NetworkedDynamicAttributes; // 0x270	
	// MNetworkEnable
	char m_szCustomName[161]; // 0x2d0	
	char m_szCustomNameOverride[161]; // 0x371	
private:
	[[maybe_unused]] uint8_t __pad0412[0x2e]; // 0x412
public:
	bool m_bInitializedTags; // 0x440	
	
	// Static fields:
	static bool &Get_m_sbHasCleanedInventoryImageCacheDir(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_EconItemView")->m_static_fields[0]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CCSPointScriptExtensions_weapon_cs_base
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
// 
// MNetworkVarNames "CLightComponent::Storage_t m_CLightComponent"
class C_LightEntity : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CLightComponent"
	// MNetworkAlias "CLightComponent"
	// MNetworkTypeAlias "CLightComponent"
	CLightComponent* m_CLightComponent; // 0xcc8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x208
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "uint32 m_iWindSeed"
// MNetworkVarNames "uint16 m_iMinWind"
// MNetworkVarNames "uint16 m_iMaxWind"
// MNetworkVarNames "int32 m_windRadius"
// MNetworkVarNames "uint16 m_iMinGust"
// MNetworkVarNames "uint16 m_iMaxGust"
// MNetworkVarNames "float32 m_flMinGustDelay"
// MNetworkVarNames "float32 m_flMaxGustDelay"
// MNetworkVarNames "float32 m_flGustDuration"
// MNetworkVarNames "uint16 m_iGustDirChange"
// MNetworkVarNames "Vector m_location"
// MNetworkVarNames "uint16 m_iInitialWindDir"
// MNetworkVarNames "float32 m_flInitialWindSpeed"
class C_EnvWindShared
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x8	
	// MNetworkEnable
	uint32_t m_iWindSeed; // 0xc	
	// MNetworkEnable
	uint16_t m_iMinWind; // 0x10	
	// MNetworkEnable
	uint16_t m_iMaxWind; // 0x12	
	// MNetworkEnable
	int32_t m_windRadius; // 0x14	
	// MNetworkEnable
	uint16_t m_iMinGust; // 0x18	
	// MNetworkEnable
	uint16_t m_iMaxGust; // 0x1a	
	// MNetworkEnable
	float m_flMinGustDelay; // 0x1c	
	// MNetworkEnable
	float m_flMaxGustDelay; // 0x20	
	// MNetworkEnable
	float m_flGustDuration; // 0x24	
	// MNetworkEnable
	uint16_t m_iGustDirChange; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002a[0x2]; // 0x2a
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_location; // 0x2c	
	int32_t m_iszGustSound; // 0x38	
	int32_t m_iWindDir; // 0x3c	
	float m_flWindSpeed; // 0x40	
	Vector m_currentWindVector; // 0x44	
	Vector m_CurrentSwayVector; // 0x50	
	Vector m_PrevSwayVector; // 0x5c	
	// MNetworkEnable
	uint16_t m_iInitialWindDir; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006a[0x2]; // 0x6a
public:
	// MNetworkEnable
	float m_flInitialWindSpeed; // 0x6c	
	GameTime_t m_flVariationTime; // 0x70	
	GameTime_t m_flSwayTime; // 0x74	
	GameTime_t m_flSimTime; // 0x78	
	GameTime_t m_flSwitchTime; // 0x7c	
	float m_flAveWindSpeed; // 0x80	
	bool m_bGusting; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	float m_flWindAngleVariation; // 0x88	
	float m_flWindSpeedVariation; // 0x8c	
	CEntityIndex m_iEntIndex; // 0x90	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x548
// Has VTable
class C_GameRulesProxy : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10f8
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "CHandle<C_EconWearable > m_hMyWearables"
// MNetworkVarNames "float m_flFieldOfView"
class C_BaseCombatCharacter : public C_BaseFlex
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWearablesChanged"
	C_NetworkUtlVectorBase<CHandle<C_EconWearable>> m_hMyWearables; // 0x1068	
	AttachmentHandle_t m_leftFootAttachment; // 0x1080	
	AttachmentHandle_t m_rightFootAttachment; // 0x1081	
private:
	[[maybe_unused]] uint8_t __pad1082[0x2]; // 0x1082
public:
	C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // 0x1084	
	float m_flWaterWorldZ; // 0x1088	
	float m_flWaterNextTraceTime; // 0x108c	
	// MNetworkEnable
	float m_flFieldOfView; // 0x1090	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10b8
// Has VTable
// 
// MNetworkIncludeByName "m_fFlags"
// MNetworkIncludeByName "m_vecVelocity"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_nResetEventsParity"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByName "m_baseLayer.m_hSequence"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkExcludeByName "m_nNewSequenceParity"
// MNetworkVarNames "bool m_bIsLive"
// MNetworkVarNames "float32 m_DmgRadius"
// MNetworkVarNames "GameTime_t m_flDetonateTime"
// MNetworkVarNames "float32 m_flDamage"
// MNetworkVarNames "CHandle< CCSPlayerPawn > m_hThrower"
class C_BaseGrenade : public C_BaseFlex
{
public:
	bool m_bHasWarnedAI; // 0x1068	
	bool m_bIsSmokeGrenade; // 0x1069	
	// MNetworkEnable
	bool m_bIsLive; // 0x106a	
private:
	[[maybe_unused]] uint8_t __pad106b[0x1]; // 0x106b
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags "1"
	float m_DmgRadius; // 0x106c	
	// MNetworkEnable
	GameTime_t m_flDetonateTime; // 0x1070	
	float m_flWarnAITime; // 0x1074	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flDamage; // 0x1078	
private:
	[[maybe_unused]] uint8_t __pad107c[0x4]; // 0x107c
public:
	CUtlSymbolLarge m_iszBounceSound; // 0x1080	
	CUtlString m_ExplosionSound; // 0x1088	
private:
	[[maybe_unused]] uint8_t __pad1090[0x4]; // 0x1090
public:
	// MNetworkEnable
	CHandle<C_CSPlayerPawn> m_hThrower; // 0x1094	
private:
	[[maybe_unused]] uint8_t __pad1098[0x14]; // 0x1098
public:
	GameTime_t m_flNextAttack; // 0x10ac	
	CHandle<C_CSPlayerPawn> m_hOriginalThrower; // 0x10b0	
	
	// Datamap fields:
	// int32_t m_nExplosionType; // 0x1090
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x548
// Has VTable
class C_SoundEventEntity : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_ViewModelServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4a8
// Has VTable
// 
// MNetworkIncludeByName "m_ProviderType"
// MNetworkIncludeByName "m_hOuter"
// MNetworkIncludeByName "m_iReapplyProvisionParity"
// MNetworkIncludeByName "m_Item"
// MNetworkVarNames "CEconItemView m_Item"
class C_AttributeContainer : public CAttributeManager
{
public:
	// MNetworkEnable
	C_EconItemView m_Item; // 0x50	
	int32_t m_iExternalItemProviderRegisteredToken; // 0x498	
private:
	[[maybe_unused]] uint8_t __pad049c[0x4]; // 0x49c
public:
	uint64_t m_ullRegisteredAsItemID; // 0x4a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15b0
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
// MNetworkVarNames "uint32 m_OriginalOwnerXuidLow"
// MNetworkVarNames "uint32 m_OriginalOwnerXuidHigh"
// MNetworkVarNames "int m_nFallbackPaintKit"
// MNetworkVarNames "int m_nFallbackSeed"
// MNetworkVarNames "float m_flFallbackWear"
// MNetworkVarNames "int m_nFallbackStatTrak"
class C_EconEntity : public C_BaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad1068[0x10]; // 0x1068
public:
	float m_flFlexDelayTime; // 0x1078	
private:
	[[maybe_unused]] uint8_t __pad107c[0x4]; // 0x107c
public:
	float32* m_flFlexDelayedWeight; // 0x1080	
	bool m_bAttributesInitialized; // 0x1088	
private:
	[[maybe_unused]] uint8_t __pad1089[0x7]; // 0x1089
public:
	// MNetworkEnable
	// -> m_Item - 0x10e0
	// -> m_iExternalItemProviderRegisteredToken - 0x1528
	// -> m_ullRegisteredAsItemID - 0x1530
	C_AttributeContainer m_AttributeManager; // 0x1090	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidLow; // 0x1538	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidHigh; // 0x153c	
	// MNetworkEnable
	int32_t m_nFallbackPaintKit; // 0x1540	
	// MNetworkEnable
	int32_t m_nFallbackSeed; // 0x1544	
	// MNetworkEnable
	float m_flFallbackWear; // 0x1548	
	// MNetworkEnable
	int32_t m_nFallbackStatTrak; // 0x154c	
	bool m_bClientside; // 0x1550	
	bool m_bParticleSystemsCreated; // 0x1551	
private:
	[[maybe_unused]] uint8_t __pad1552[0x6]; // 0x1552
public:
	CUtlVector<int32> m_vecAttachedParticles; // 0x1558	
	CHandle<CBaseAnimGraph> m_hViewmodelAttachment; // 0x1570	
	int32_t m_iOldTeam; // 0x1574	
	bool m_bAttachmentDirty; // 0x1578	
private:
	[[maybe_unused]] uint8_t __pad1579[0x3]; // 0x1579
public:
	int32_t m_nUnloadedModelIndex; // 0x157c	
	int32_t m_iNumOwnerValidationRetries; // 0x1580	
private:
	[[maybe_unused]] uint8_t __pad1584[0xc]; // 0x1584
public:
	CHandle<C_BaseEntity> m_hOldProvidee; // 0x1590	
private:
	[[maybe_unused]] uint8_t __pad1594[0x4]; // 0x1594
public:
	CUtlVector<C_EconEntity::AttachedModelData_t> m_vecAttachedModels; // 0x1598	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x548
// Has VTable
class C_PointEntity : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5a8
// Has VTable
// 
// MNetworkVarNames "bool m_bIsPlayingBack"
// MNetworkVarNames "bool m_bPaused"
// MNetworkVarNames "bool m_bMultiplayer"
// MNetworkVarNames "bool m_bAutogenerated"
// MNetworkVarNames "float32 m_flForceClientTime"
// MNetworkVarNames "uint16 m_nSceneStringIndex"
// MNetworkVarNames "CHandle< C_BaseFlex > m_hActorList"
class C_SceneEntity : public C_PointEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x8]; // 0x548
public:
	// MNetworkEnable
	bool m_bIsPlayingBack; // 0x550	
	// MNetworkEnable
	bool m_bPaused; // 0x551	
	// MNetworkEnable
	bool m_bMultiplayer; // 0x552	
	// MNetworkEnable
	bool m_bAutogenerated; // 0x553	
	// MNetworkEnable
	// MNetworkChangeCallback "OnResetClientTime"
	float m_flForceClientTime; // 0x554	
	// MNetworkEnable
	// MNetworkPriority "32"
	uint16_t m_nSceneStringIndex; // 0x558	
	bool m_bClientOnly; // 0x55a	
private:
	[[maybe_unused]] uint8_t __pad055b[0x1]; // 0x55b
public:
	CHandle<C_BaseFlex> m_hOwner; // 0x55c	
	// MNetworkEnable
	// MNetworkPriority "32"
	C_NetworkUtlVectorBase<CHandle<C_BaseFlex>> m_hActorList; // 0x560	
	bool m_bWasPlaying; // 0x578	
private:
	[[maybe_unused]] uint8_t __pad0579[0xf]; // 0x579
public:
	CUtlVector<C_SceneEntity::QueuedEvents_t> m_QueuedEvents; // 0x588	
	float m_flCurrentTime; // 0x5a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "CHandle< CFogController> m_hCtrl"
struct C_fogplayerparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkUserGroup "PlayerFogController"
	CHandle<C_FogController> m_hCtrl; // 0x8	
	float m_flTransitionTime; // 0xc	
	Color m_OldColor; // 0x10	
	float m_flOldStart; // 0x14	
	float m_flOldEnd; // 0x18	
	float m_flOldMaxDensity; // 0x1c	
	float m_flOldHDRColorScale; // 0x20	
	float m_flOldFarZ; // 0x24	
	Color m_NewColor; // 0x28	
	float m_flNewStart; // 0x2c	
	float m_flNewEnd; // 0x30	
	float m_flNewMaxDensity; // 0x34	
	float m_flNewHDRColorScale; // 0x38	
	float m_flNewFarZ; // 0x3c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e8
// Has VTable
// 
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkIncludeByName "m_nNextThinkTick"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkUserGroupProxy "CBasePlayerWeapon"
// MNetworkVarNames "GameTick_t m_nNextPrimaryAttackTick"
// MNetworkVarNames "float32 m_flNextPrimaryAttackTickRatio"
// MNetworkVarNames "GameTick_t m_nNextSecondaryAttackTick"
// MNetworkVarNames "float32 m_flNextSecondaryAttackTickRatio"
// MNetworkVarNames "int32 m_iClip1"
// MNetworkVarNames "int32 m_iClip2"
// MNetworkVarNames "int m_pReserveAmmo"
class C_BasePlayerWeapon : public C_EconEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTick_t m_nNextPrimaryAttackTick; // 0x15b0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextPrimaryAttackTickRatio; // 0x15b4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTick_t m_nNextSecondaryAttackTick; // 0x15b8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextSecondaryAttackTickRatio; // 0x15bc	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iClip1; // 0x15c0	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iClip2; // 0x15c4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_pReserveAmmo[2]; // 0x15c8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc8
// Has VTable
class C_FuncBrush : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc8
// Has VTable
class C_BaseToggle : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
class C_RopeKeyframe::CPhysicsDelegate
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	C_RopeKeyframe* m_pKeyframe; // 0x8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x230
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
	[[maybe_unused]] uint8_t __pad00e9[0xaf]; // 0xe9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
	uint64_t m_MeshGroupMask; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad01a0[0x7a]; // 0x1a0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMotionTypeChanged"
	int8_t m_nIdealMotionType; // 0x21a	
	// MNetworkDisable
	int8_t m_nForceLOD; // 0x21b	
	// MNetworkDisable
	int8_t m_nClothUpdateFlags; // 0x21c	
	
	// Datamap fields:
	// void m_pVPhysicsAggregate; // 0xe0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x570
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "string_t m_iszSoundAreaType"
// MNetworkVarNames "Vector m_vPos"
class C_SoundAreaEntityBase : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x7]; // 0x549
public:
	bool m_bWasEnabled; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0551[0x7]; // 0x551
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszSoundAreaType; // 0x558	
	// MNetworkEnable
	Vector m_vPos; // 0x560	
	
	// Datamap fields:
	// void m_nGUID; // 0x54c
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1d8
// Has VTable
class CCSObserver_MovementServices : public CPlayer_MovementServices
{
public:
	// No schema binary for binding
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

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf10
// Has VTable
class CBaseProp : public CBaseAnimGraph
{
public:
	bool m_bModelOverrodeBlockLOS; // 0xed0	
private:
	[[maybe_unused]] uint8_t __pad0ed1[0x3]; // 0xed1
public:
	int32_t m_iShapeType; // 0xed4	
	bool m_bConformToCollisionBounds; // 0xed8	
private:
	[[maybe_unused]] uint8_t __pad0ed9[0x3]; // 0xed9
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0xedc	
	
	// Datamap fields:
	// void health; // 0x7fffffff
	// CUtlSymbolLarge propdata_override; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xa40
// Has VTable
class C_GlobalLight : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x4c8]; // 0x548
public:
	uint16_t m_WindClothForceHandle; // 0xa10	
	
	// Static fields:
	static C_GlobalLight* &Get_sm_pGlobalLight(){return *reinterpret_cast<C_GlobalLight**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fields[0]->m_instance);};
	static CUtlStringToken &Get_sm_pSkyboxSlots(){return *reinterpret_cast<CUtlStringToken*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fields[1]->m_instance);};
	static CUtlVector< C_GlobalLight* > &Get_sm_nonPrimaryGlobalLights(){return *reinterpret_cast<CUtlVector< C_GlobalLight* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fields[2]->m_instance);};
	
	// Datamap fields:
	// CGlobalLightBase CGlobalLightBase; // 0x550
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// float InputSetLightScale; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5e0
// Has VTable
// 
// MNetworkVarNames "bool m_bHostageAlive"
// MNetworkVarNames "bool m_isHostageFollowingSomeone"
// MNetworkVarNames "CEntityIndex m_iHostageEntityIDs"
// MNetworkVarNames "Vector m_bombsiteCenterA"
// MNetworkVarNames "Vector m_bombsiteCenterB"
// MNetworkVarNames "int m_hostageRescueX"
// MNetworkVarNames "int m_hostageRescueY"
// MNetworkVarNames "int m_hostageRescueZ"
// MNetworkVarNames "bool m_bEndMatchNextMapAllVoted"
class C_CSPlayerResource : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bHostageAlive[12]; // 0x548	
	// MNetworkEnable
	bool m_isHostageFollowingSomeone[12]; // 0x554	
	// MNetworkEnable
	CEntityIndex m_iHostageEntityIDs[12]; // 0x560	
	// MNetworkEnable
	Vector m_bombsiteCenterA; // 0x590	
	// MNetworkEnable
	Vector m_bombsiteCenterB; // 0x59c	
	// MNetworkEnable
	int32_t m_hostageRescueX[4]; // 0x5a8	
	// MNetworkEnable
	int32_t m_hostageRescueY[4]; // 0x5b8	
	// MNetworkEnable
	int32_t m_hostageRescueZ[4]; // 0x5c8	
	// MNetworkEnable
	bool m_bEndMatchNextMapAllVoted; // 0x5d8	
	bool m_foundGoalPositions; // 0x5d9	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x160
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
	[[maybe_unused]] uint8_t __pad0050[0x28]; // 0x50
public:
	// MNetworkEnable
	// MNetworkSerializer "gameSceneNode"
	// MNetworkChangeCallback "gameSceneNodeHierarchyParentChanged"
	// MNetworkPriority "32"
	// MNetworkVarEmbeddedFieldOffsetDelta "8"
	// -> m_hOwner - 0x80
	// -> m_name - 0x84
	CGameSceneNodeHandle m_hParent; // 0x78	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Origin"
	// MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
	CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad00b8[0x8]; // 0xb8
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkPriority "32"
	// MNetworkSerializer "gameSceneNodeStepSimulationAnglesSerializer"
	// MNetworkChangeCallback "gameSceneNodeLocalAnglesChanged"
	QAngle m_angRotation; // 0xc0	
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeLocalScaleChanged"
	// MNetworkPriority "32"
	float m_flScale; // 0xcc	
	// MNetworkDisable
	Vector m_vecAbsOrigin; // 0xd0	
	// MNetworkDisable
	QAngle m_angAbsRotation; // 0xdc	
	// MNetworkDisable
	float m_flAbsScale; // 0xe8	
	// MNetworkDisable
	int16_t m_nParentAttachmentOrBone; // 0xec	
	// MNetworkDisable
	bool m_bDebugAbsOriginChanges; // 0xee	
	// MNetworkDisable
	bool m_bDormant; // 0xef	
	// MNetworkDisable
	bool m_bForceParentToBeNetworked; // 0xf0	
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
	uint8_t m_nHierarchicalDepth; // 0xf3	
	// MNetworkDisable
	uint8_t m_nHierarchyType; // 0xf4	
	// MNetworkDisable
	uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0xf5	
private:
	[[maybe_unused]] uint8_t __pad00f6[0x2]; // 0xf6
public:
	// MNetworkEnable
	CUtlStringToken m_name; // 0xf8	
private:
	[[maybe_unused]] uint8_t __pad00fc[0x3c]; // 0xfc
public:
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeHierarchyAttachmentChanged"
	CUtlStringToken m_hierarchyAttachName; // 0x138	
	// MNetworkDisable
	float m_flZOffset; // 0x13c	
	// MNetworkDisable
	float m_flClientLocalScale; // 0x140	
	// MNetworkDisable
	Vector m_vRenderOrigin; // 0x144	
	
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1490
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
	C_NetworkUtlVectorBase<uint32> m_PredNetBoolVariables; // 0x8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetByteVarChanged"
	// MNetworkAlias "m_PredByteVariables"
	C_NetworkUtlVectorBase<uint8> m_PredNetByteVariables; // 0x20	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetUInt16VarChanged"
	// MNetworkAlias "m_PredUInt16Variables"
	C_NetworkUtlVectorBase<uint16> m_PredNetUInt16Variables; // 0x38	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetIntVarChanged"
	// MNetworkAlias "m_PredIntVariables"
	C_NetworkUtlVectorBase<int32> m_PredNetIntVariables; // 0x50	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetUInt32VarChanged"
	// MNetworkAlias "m_PredUInt32Variables"
	C_NetworkUtlVectorBase<uint32> m_PredNetUInt32Variables; // 0x68	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetUInt64VarChanged"
	// MNetworkAlias "m_PredUInt64Variables"
	C_NetworkUtlVectorBase<uint64> m_PredNetUInt64Variables; // 0x80	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetFloatVarChanged"
	// MNetworkAlias "m_PredFloatVariables"
	C_NetworkUtlVectorBase<float32> m_PredNetFloatVariables; // 0x98	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVectorVarChanged"
	// MNetworkAlias "m_PredVectorVariables"
	C_NetworkUtlVectorBase<Vector> m_PredNetVectorVariables; // 0xb0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetQuaternionVarChanged"
	// MNetworkAlias "m_PredQuaternionVariables"
	C_NetworkUtlVectorBase<Quaternion> m_PredNetQuaternionVariables; // 0xc8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetGlobalSymbolVarChanged"
	// MNetworkAlias "m_PredGlobalSymbolVariables"
	C_NetworkUtlVectorBase<CGlobalSymbol> m_PredNetGlobalSymbolVariables; // 0xe0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOBoolVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetBoolVariables"
	C_NetworkUtlVectorBase<uint32> m_OwnerOnlyPredNetBoolVariables; // 0xf8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOByteVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetByteVariables"
	C_NetworkUtlVectorBase<uint8> m_OwnerOnlyPredNetByteVariables; // 0x110	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt16VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt16Variables"
	C_NetworkUtlVectorBase<uint16> m_OwnerOnlyPredNetUInt16Variables; // 0x128	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOIntVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetIntVariables"
	C_NetworkUtlVectorBase<int32> m_OwnerOnlyPredNetIntVariables; // 0x140	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt32VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt32Variables"
	C_NetworkUtlVectorBase<uint32> m_OwnerOnlyPredNetUInt32Variables; // 0x158	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt64VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt64Variables"
	C_NetworkUtlVectorBase<uint64> m_OwnerOnlyPredNetUInt64Variables; // 0x170	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOFloatVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetFloatVariables"
	C_NetworkUtlVectorBase<float32> m_OwnerOnlyPredNetFloatVariables; // 0x188	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOVectorVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetVectorVariables"
	C_NetworkUtlVectorBase<Vector> m_OwnerOnlyPredNetVectorVariables; // 0x1a0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOQuaternionVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetQuaternionVariables"
	C_NetworkUtlVectorBase<Quaternion> m_OwnerOnlyPredNetQuaternionVariables; // 0x1b8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOGlobalSymbolVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetGlobalSymbolVariables"
	C_NetworkUtlVectorBase<CGlobalSymbol> m_OwnerOnlyPredNetGlobalSymbolVariables; // 0x1d0	
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

// Registered binary: client.dll (project 'client')
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
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1150
// Has VTable
// 
// MNetworkVarNames "Vector m_vInitialPosition"
// MNetworkVarNames "Vector m_vInitialVelocity"
// MNetworkVarNames "int m_nBounces"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_nExplodeEffectIndex"
// MNetworkVarNames "int m_nExplodeEffectTickBegin"
// MNetworkVarNames "Vector m_vecExplodeEffectOrigin"
class C_BaseCSGrenadeProjectile : public C_BaseGrenade
{
public:
	// MNetworkEnable
	Vector m_vInitialPosition; // 0x10b8	
	// MNetworkEnable
	Vector m_vInitialVelocity; // 0x10c4	
	// MNetworkEnable
	int32_t m_nBounces; // 0x10d0	
private:
	[[maybe_unused]] uint8_t __pad10d4[0x4]; // 0x10d4
public:
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> m_nExplodeEffectIndex; // 0x10d8	
	// MNetworkEnable
	int32_t m_nExplodeEffectTickBegin; // 0x10e0	
	// MNetworkEnable
	Vector m_vecExplodeEffectOrigin; // 0x10e4	
	GameTime_t m_flSpawnTime; // 0x10f0	
	Vector vecLastTrailLinePos; // 0x10f4	
	GameTime_t flNextTrailLineTime; // 0x1100	
	bool m_bExplodeEffectBegan; // 0x1104	
	bool m_bCanCreateGrenadeTrail; // 0x1105	
private:
	[[maybe_unused]] uint8_t __pad1106[0x2]; // 0x1106
public:
	ParticleIndex_t m_nSnapshotTrajectoryEffectIndex; // 0x1108	
private:
	[[maybe_unused]] uint8_t __pad110c[0x4]; // 0x110c
public:
	CStrongHandle<InfoForResourceTypeIParticleSnapshot> m_hSnapshotTrajectoryParticleSnapshot; // 0x1110	
	CUtlVector<Vector> m_arrTrajectoryTrailPoints; // 0x1118	
	CUtlVector<float32> m_arrTrajectoryTrailPointCreationTimes; // 0x1130	
	float m_flTrajectoryTrailEffectCreationTime; // 0x1148	
	
	// Static fields:
	static float &Get_s_flThinkInterval(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseCSGrenadeProjectile")->m_static_fields[0]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x548
// Has VTable
class C_SoundEventEntityAlias_snd_event_point : public C_SoundEventEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b0
// Has VTable
class C_CSGO_MapPreviewCameraPath : public C_BaseEntity
{
public:
	float m_flZFar; // 0x548	
	float m_flZNear; // 0x54c	
	bool m_bLoop; // 0x550	
	bool m_bVerticalFOV; // 0x551	
	bool m_bConstantSpeed; // 0x552	
private:
	[[maybe_unused]] uint8_t __pad0553[0x1]; // 0x553
public:
	float m_flDuration; // 0x554	
private:
	[[maybe_unused]] uint8_t __pad0558[0x40]; // 0x558
public:
	float m_flPathLength; // 0x598	
	float m_flPathDuration; // 0x59c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1278
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "int m_nVariant"
// MNetworkVarNames "int m_nRandom"
// MNetworkVarNames "int m_nOrdinal"
// MNetworkVarNames "CUtlString m_sWeaponName"
// MNetworkVarNames "XUID m_xuid"
// MNetworkVarNames "CEconItemView m_agentItem"
// MNetworkVarNames "CEconItemView m_glovesItem"
// MNetworkVarNames "CEconItemView m_weaponItem"
class C_CSGO_TeamPreviewCharacterPosition : public C_BaseEntity
{
public:
	// MNetworkEnable
	int32_t m_nVariant; // 0x548	
	// MNetworkEnable
	int32_t m_nRandom; // 0x54c	
	// MNetworkEnable
	int32_t m_nOrdinal; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0554[0x4]; // 0x554
public:
	// MNetworkEnable
	CUtlString m_sWeaponName; // 0x558	
	// MNetworkEnable
	uint64_t m_xuid; // 0x560	
	// MNetworkEnable
	C_EconItemView m_agentItem; // 0x568	
	// MNetworkEnable
	C_EconItemView m_glovesItem; // 0x9b0	
	// MNetworkEnable
	C_EconItemView m_weaponItem; // 0xdf8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x82d0
// Has VTable
// 
// MNetworkVarNames "Vector m_firePositions"
// MNetworkVarNames "Vector m_fireParentPositions"
// MNetworkVarNames "bool m_bFireIsBurning"
// MNetworkVarNames "Vector m_BurnNormal"
// MNetworkVarNames "int m_fireCount"
// MNetworkVarNames "int m_nInfernoType"
// MNetworkVarNames "float m_nFireLifetime"
// MNetworkVarNames "bool m_bInPostEffectTime"
// MNetworkVarNames "int m_nFireEffectTickBegin"
class C_Inferno : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x40]; // 0xcc8
public:
	ParticleIndex_t m_nfxFireDamageEffect; // 0xd08	
private:
	[[maybe_unused]] uint8_t __pad0d0c[0x4]; // 0xd0c
public:
	CStrongHandle<InfoForResourceTypeIParticleSnapshot> m_hInfernoPointsSnapshot; // 0xd10	
	CStrongHandle<InfoForResourceTypeIParticleSnapshot> m_hInfernoFillerPointsSnapshot; // 0xd18	
	CStrongHandle<InfoForResourceTypeIParticleSnapshot> m_hInfernoOutlinePointsSnapshot; // 0xd20	
	CStrongHandle<InfoForResourceTypeIParticleSnapshot> m_hInfernoClimbingOutlinePointsSnapshot; // 0xd28	
	CStrongHandle<InfoForResourceTypeIParticleSnapshot> m_hInfernoDecalsSnapshot; // 0xd30	
	// MNetworkEnable
	Vector m_firePositions[64]; // 0xd38	
	// MNetworkEnable
	Vector m_fireParentPositions[64]; // 0x1038	
	// MNetworkEnable
	bool m_bFireIsBurning[64]; // 0x1338	
	// MNetworkEnable
	Vector m_BurnNormal[64]; // 0x1378	
	// MNetworkEnable
	int32_t m_fireCount; // 0x1678	
	// MNetworkEnable
	int32_t m_nInfernoType; // 0x167c	
	// MNetworkEnable
	float m_nFireLifetime; // 0x1680	
	// MNetworkEnable
	bool m_bInPostEffectTime; // 0x1684	
private:
	[[maybe_unused]] uint8_t __pad1685[0x3]; // 0x1685
public:
	int32_t m_lastFireCount; // 0x1688	
	// MNetworkEnable
	int32_t m_nFireEffectTickBegin; // 0x168c	
private:
	[[maybe_unused]] uint8_t __pad1690[0x6c00]; // 0x1690
public:
	int32_t m_drawableCount; // 0x8290	
	bool m_blosCheck; // 0x8294	
private:
	[[maybe_unused]] uint8_t __pad8295[0x3]; // 0x8295
public:
	int32_t m_nlosperiod; // 0x8298	
	float m_maxFireHalfWidth; // 0x829c	
	float m_maxFireHeight; // 0x82a0	
	Vector m_minBounds; // 0x82a4	
	Vector m_maxBounds; // 0x82b0	
	float m_flLastGrassBurnThink; // 0x82bc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed8
// Has VTable
class C_HostageCarriableProp : public CBaseAnimGraph
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d0
// Has VTable
class C_CSGO_TeamPreviewCamera : public C_CSGO_MapPreviewCameraPath
{
public:
	int32_t m_nVariant; // 0x5b0	
	bool m_bDofEnabled; // 0x5b4	
private:
	[[maybe_unused]] uint8_t __pad05b5[0x3]; // 0x5b5
public:
	float m_flDofNearBlurry; // 0x5b8	
	float m_flDofNearCrisp; // 0x5bc	
	float m_flDofFarCrisp; // 0x5c0	
	float m_flDofFarBlurry; // 0x5c4	
	float m_flDofTiltToGround; // 0x5c8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x598
// Has VTable
// 
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPlayer"
// MNetworkVarNames "CHandle< CBaseEntity> m_hPingedEntity"
// MNetworkVarNames "int m_iType"
// MNetworkVarNames "bool m_bUrgent"
// MNetworkVarNames "char m_szPlaceName"
class C_PlayerPing : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x30]; // 0x548
public:
	// MNetworkEnable
	CHandle<C_CSPlayerPawn> m_hPlayer; // 0x578	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hPingedEntity; // 0x57c	
	// MNetworkEnable
	int32_t m_iType; // 0x580	
	// MNetworkEnable
	bool m_bUrgent; // 0x584	
	// MNetworkEnable
	char m_szPlaceName[18]; // 0x585	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a60
// Has VTable
// 
// MNetworkExcludeByName "m_flTimeWeaponIdle"
// MNetworkVarNames "float m_flFireSequenceStartTime"
// MNetworkVarNames "int m_nFireSequenceStartTimeChange"
// MNetworkVarNames "PlayerAnimEvent_t m_ePlayerFireEvent"
// MNetworkVarNames "WeaponAttackType_t m_ePlayerFireEventAttackType"
// MNetworkVarNames "CSWeaponState_t m_iState"
// MNetworkVarNames "uint32 m_nViewModelIndex"
// MNetworkVarNames "GameTime_t m_flTimeWeaponIdle"
// MNetworkVarNames "CSWeaponMode m_weaponMode"
// MNetworkVarNames "float m_fAccuracyPenalty"
// MNetworkVarNames "int m_iRecoilIndex"
// MNetworkVarNames "float m_flRecoilIndex"
// MNetworkVarNames "bool m_bBurstMode"
// MNetworkVarNames "GameTick_t m_nPostponeFireReadyTicks"
// MNetworkVarNames "float m_flPostponeFireReadyFrac"
// MNetworkVarNames "bool m_bInReload"
// MNetworkVarNames "bool m_bReloadVisuallyComplete"
// MNetworkVarNames "GameTime_t m_flDroppedAtTime"
// MNetworkVarNames "bool m_bIsHauledBack"
// MNetworkVarNames "bool m_bSilencerOn"
// MNetworkVarNames "GameTime_t m_flTimeSilencerSwitchComplete"
// MNetworkVarNames "int m_iOriginalTeamNumber"
// MNetworkVarNames "int m_iMostRecentTeamNumber"
// MNetworkVarNames "bool m_bDroppedNearBuyZone"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPrevOwner"
// MNetworkVarNames "GameTick_t m_nDropTick"
// MNetworkVarNames "GameTime_t m_fLastShotTime"
// MNetworkVarNames "int m_iIronSightMode"
// MNetworkVarNames "int m_iNumEmptyAttacks"
class C_CSWeaponBase : public C_BasePlayerWeapon
{
private:
	[[maybe_unused]] uint8_t __pad15e8[0x3c]; // 0x15e8
public:
	// MNetworkEnable
	float m_flFireSequenceStartTime; // 0x1624	
	// MNetworkEnable
	int32_t m_nFireSequenceStartTimeChange; // 0x1628	
	int32_t m_nFireSequenceStartTimeAck; // 0x162c	
	// MNetworkEnable
	PlayerAnimEvent_t m_ePlayerFireEvent; // 0x1630	
	// MNetworkEnable
	WeaponAttackType_t m_ePlayerFireEventAttackType; // 0x1634	
	HSequence m_seqIdle; // 0x1638	
	HSequence m_seqFirePrimary; // 0x163c	
	HSequence m_seqFireSecondary; // 0x1640	
private:
	[[maybe_unused]] uint8_t __pad1644[0x4]; // 0x1644
public:
	CUtlVector<HSequence> m_thirdPersonFireSequences; // 0x1648	
	HSequence m_hCurrentThirdPersonSequence; // 0x1660	
	int32_t m_nSilencerBoneIndex; // 0x1664	
	HSequence m_thirdPersonSequences[7]; // 0x1668	
private:
	[[maybe_unused]] uint8_t __pad1684[0x1c]; // 0x1684
public:
	CSWeaponState_t m_ClientPreviousWeaponState; // 0x16a0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponStateNetworkChange"
	CSWeaponState_t m_iState; // 0x16a4	
	float m_flCrosshairDistance; // 0x16a8	
	int32_t m_iAmmoLastCheck; // 0x16ac	
	int32_t m_iAlpha; // 0x16b0	
	int32_t m_iScopeTextureID; // 0x16b4	
	int32_t m_iCrosshairTextureID; // 0x16b8	
	float m_flGunAccuracyPositionDeprecated; // 0x16bc	
	int32_t m_nLastEmptySoundCmdNum; // 0x16c0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	uint32_t m_nViewModelIndex; // 0x16c4	
	bool m_bReloadsWithClips; // 0x16c8	
private:
	[[maybe_unused]] uint8_t __pad16c9[0x3]; // 0x16c9
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	// MNetworkPriority "32"
	GameTime_t m_flTimeWeaponIdle; // 0x16cc	
	bool m_bFireOnEmpty; // 0x16d0	
private:
	[[maybe_unused]] uint8_t __pad16d1[0x7]; // 0x16d1
public:
	CEntityIOOutput m_OnPlayerPickup; // 0x16d8	
	// MNetworkEnable
	CSWeaponMode m_weaponMode; // 0x1700	
	float m_flTurningInaccuracyDelta; // 0x1704	
	Vector m_vecTurningInaccuracyEyeDirLast; // 0x1708	
	float m_flTurningInaccuracy; // 0x1714	
	// MNetworkEnable
	float m_fAccuracyPenalty; // 0x1718	
	GameTime_t m_flLastAccuracyUpdateTime; // 0x171c	
	float m_fAccuracySmoothedForZoom; // 0x1720	
	GameTime_t m_fScopeZoomEndTime; // 0x1724	
	// MNetworkEnable
	int32_t m_iRecoilIndex; // 0x1728	
	// MNetworkEnable
	float m_flRecoilIndex; // 0x172c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponBurstModeNetworkChange"
	bool m_bBurstMode; // 0x1730	
private:
	[[maybe_unused]] uint8_t __pad1731[0x3]; // 0x1731
public:
	GameTime_t m_flLastBurstModeChangeTime; // 0x1734	
	// MNetworkEnable
	GameTick_t m_nPostponeFireReadyTicks; // 0x1738	
	// MNetworkEnable
	float m_flPostponeFireReadyFrac; // 0x173c	
	// MNetworkEnable
	bool m_bInReload; // 0x1740	
	// MNetworkEnable
	bool m_bReloadVisuallyComplete; // 0x1741	
private:
	[[maybe_unused]] uint8_t __pad1742[0x2]; // 0x1742
public:
	// MNetworkEnable
	GameTime_t m_flDroppedAtTime; // 0x1744	
	// MNetworkEnable
	bool m_bIsHauledBack; // 0x1748	
	// MNetworkEnable
	bool m_bSilencerOn; // 0x1749	
private:
	[[maybe_unused]] uint8_t __pad174a[0x2]; // 0x174a
public:
	// MNetworkEnable
	GameTime_t m_flTimeSilencerSwitchComplete; // 0x174c	
	// MNetworkEnable
	int32_t m_iOriginalTeamNumber; // 0x1750	
	// MNetworkEnable
	int32_t m_iMostRecentTeamNumber; // 0x1754	
	// MNetworkEnable
	bool m_bDroppedNearBuyZone; // 0x1758	
private:
	[[maybe_unused]] uint8_t __pad1759[0x3]; // 0x1759
public:
	float m_flNextAttackRenderTimeOffset; // 0x175c	
private:
	[[maybe_unused]] uint8_t __pad1760[0x88]; // 0x1760
public:
	bool m_bClearWeaponIdentifyingUGC; // 0x17e8	
	bool m_bVisualsDataSet; // 0x17e9	
	bool m_bOldFirstPersonSpectatedState; // 0x17ea	
	bool m_bUIWeapon; // 0x17eb	
	int32_t m_nCustomEconReloadEventId; // 0x17ec	
private:
	[[maybe_unused]] uint8_t __pad17f0[0x8]; // 0x17f0
public:
	// MNetworkEnable
	CHandle<C_CSPlayerPawn> m_hPrevOwner; // 0x17f8	
	// MNetworkEnable
	GameTick_t m_nDropTick; // 0x17fc	
private:
	[[maybe_unused]] uint8_t __pad1800[0x1c]; // 0x1800
public:
	bool m_donated; // 0x181c	
private:
	[[maybe_unused]] uint8_t __pad181d[0x3]; // 0x181d
public:
	// MNetworkEnable
	GameTime_t m_fLastShotTime; // 0x1820	
	bool m_bWasOwnedByCT; // 0x1824	
	bool m_bWasOwnedByTerrorist; // 0x1825	
private:
	[[maybe_unused]] uint8_t __pad1826[0x2]; // 0x1826
public:
	float m_gunHeat; // 0x1828	
	uint32_t m_smokeAttachments; // 0x182c	
	GameTime_t m_lastSmokeTime; // 0x1830	
	float m_flNextClientFireBulletTime; // 0x1834	
	float m_flNextClientFireBulletTime_Repredict; // 0x1838	
private:
	[[maybe_unused]] uint8_t __pad183c[0xd4]; // 0x183c
public:
	C_IronSightController m_IronSightController; // 0x1910	
	// MNetworkEnable
	int32_t m_iIronSightMode; // 0x19c0	
private:
	[[maybe_unused]] uint8_t __pad19c4[0xc]; // 0x19c4
public:
	GameTime_t m_flLastLOSTraceFailureTime; // 0x19d0	
	// MNetworkEnable
	int32_t m_iNumEmptyAttacks; // 0x19d4	
private:
	[[maybe_unused]] uint8_t __pad19d8[0x78]; // 0x19d8
public:
	GameTime_t m_flLastMagDropRequestTime; // 0x1a50	
	float m_flWatTickOffset; // 0x1a54	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkVarNames "CHandle< CBasePlayerController > m_aPlayerControllers"
// MNetworkVarNames "CHandle< C_BasePlayerPawn > m_aPlayers"
// MNetworkVarNames "int32 m_iScore"
// MNetworkVarNames "char m_szTeamname"
class C_Team : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkAlias "m_aPlayers"
	C_NetworkUtlVectorBase<CHandle<CBasePlayerController>> m_aPlayerControllers; // 0x548	
	// MNetworkEnable
	// MNetworkAlias "m_aPawns"
	C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>> m_aPlayers; // 0x560	
	// MNetworkEnable
	int32_t m_iScore; // 0x578	
	// MNetworkEnable
	char m_szTeamname[129]; // 0x57c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x598
// Has VTable
class C_CSGO_MapPreviewCameraPathNode : public C_BaseEntity
{
public:
	CUtlSymbolLarge m_szParentPathUniqueID; // 0x548	
	int32_t m_nPathIndex; // 0x550	
	Vector m_vInTangentLocal; // 0x554	
	Vector m_vOutTangentLocal; // 0x560	
	float m_flFOV; // 0x56c	
	float m_flCameraSpeed; // 0x570	
	float m_flEaseIn; // 0x574	
	float m_flEaseOut; // 0x578	
	Vector m_vInTangentWorld; // 0x57c	
	Vector m_vOutTangentWorld; // 0x588	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
// 
// MNetworkVarNames "int m_zoomLevel"
// MNetworkVarNames "int m_iBurstShotsRemaining"
// MNetworkVarNames "bool m_bNeedsBoltAction"
class C_CSWeaponBaseGun : public C_CSWeaponBase
{
public:
	// MNetworkEnable
	int32_t m_zoomLevel; // 0x1a60	
	// MNetworkEnable
	int32_t m_iBurstShotsRemaining; // 0x1a64	
	int32_t m_iSilencerBodygroup; // 0x1a68	
private:
	[[maybe_unused]] uint8_t __pad1a6c[0xc]; // 0x1a6c
public:
	int32_t m_silencedModelIndex; // 0x1a78	
	bool m_inPrecache; // 0x1a7c	
	// MNetworkEnable
	bool m_bNeedsBoltAction; // 0x1a7d	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_DEagle : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf48
// Has VTable
// 
// MNetworkVarNames "Vector m_ragPos"
// MNetworkVarNames "QAngle m_ragAngles"
// MNetworkVarNames "float32 m_flBlendWeight"
// MNetworkVarNames "EHANDLE m_hRagdollSource"
class C_RagdollProp : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0ed0[0x8]; // 0xed0
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase<Vector> m_ragPos; // 0xed8	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "13"
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase<QAngle> m_ragAngles; // 0xef0	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	float m_flBlendWeight; // 0xf08	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hRagdollSource; // 0xf0c	
	AttachmentHandle_t m_iEyeAttachment; // 0xf10	
private:
	[[maybe_unused]] uint8_t __pad0f11[0x3]; // 0xf11
public:
	float m_flBlendWeightCurrent; // 0xf14	
	CUtlVector<int32> m_parentPhysicsBoneIndices; // 0xf18	
	CUtlVector<int32> m_worldSpaceBoneComputationOrder; // 0xf30	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1150
// Has VTable
class C_FlashbangProjectile : public C_BaseCSGrenadeProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
// 
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "bool m_bClientSidePredicted"
class C_BaseTrigger : public C_BaseToggle
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0xcc8	
	// MNetworkEnable
	bool m_bClientSidePredicted; // 0xcc9	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a80
// Has VTable
// 
// MNetworkVarNames "CountdownTimer m_SequenceCompleteTimer"
// MNetworkVarNames "bool m_bRedraw"
class C_WeaponBaseItem : public C_CSWeaponBase
{
public:
	// MNetworkEnable
	CountdownTimer m_SequenceCompleteTimer; // 0x1a60	
	// MNetworkEnable
	bool m_bRedraw; // 0x1a78	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x78
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1170
// Has VTable
class C_SensorGrenadeProjectile : public C_BaseCSGrenadeProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1aa0
// Has VTable
// 
// MNetworkVarNames "bool m_bRedraw"
// MNetworkVarNames "bool m_bIsHeldByPlayer"
// MNetworkVarNames "bool m_bPinPulled"
// MNetworkVarNames "bool m_bJumpThrow"
// MNetworkVarNames "bool m_bThrowAnimating"
// MNetworkVarNames "GameTime_t m_fThrowTime"
// MNetworkVarNames "float m_flThrowStrength"
// MNetworkVarNames "float m_flThrowStrengthApproach"
// MNetworkVarNames "GameTime_t m_fDropTime"
// MNetworkVarNames "GameTime_t m_fPinPullTime"
// MNetworkVarNames "bool m_bJustPulledPin"
// MNetworkVarNames "GameTick_t m_nNextHoldTick"
// MNetworkVarNames "float m_flNextHoldFrac"
// MNetworkVarNames "CHandle< CCSWeaponBase> m_hSwitchToWeaponAfterThrow"
class C_BaseCSGrenade : public C_CSWeaponBase
{
public:
	bool m_bClientPredictDelete; // 0x1a60	
	// MNetworkEnable
	bool m_bRedraw; // 0x1a61	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrenadeStateChanged"
	bool m_bIsHeldByPlayer; // 0x1a62	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrenadeStateChanged"
	bool m_bPinPulled; // 0x1a63	
	// MNetworkEnable
	bool m_bJumpThrow; // 0x1a64	
	// MNetworkEnable
	bool m_bThrowAnimating; // 0x1a65	
private:
	[[maybe_unused]] uint8_t __pad1a66[0x2]; // 0x1a66
public:
	// MNetworkEnable
	GameTime_t m_fThrowTime; // 0x1a68	
	// MNetworkEnable
	float m_flThrowStrength; // 0x1a6c	
	// MNetworkEnable
	float m_flThrowStrengthApproach; // 0x1a70	
	// MNetworkEnable
	GameTime_t m_fDropTime; // 0x1a74	
	// MNetworkEnable
	GameTime_t m_fPinPullTime; // 0x1a78	
	// MNetworkEnable
	bool m_bJustPulledPin; // 0x1a7c	
private:
	[[maybe_unused]] uint8_t __pad1a7d[0x3]; // 0x1a7d
public:
	// MNetworkEnable
	GameTick_t m_nNextHoldTick; // 0x1a80	
	// MNetworkEnable
	float m_flNextHoldFrac; // 0x1a84	
	// MNetworkEnable
	CHandle<C_CSWeaponBase> m_hSwitchToWeaponAfterThrow; // 0x1a88	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd8
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseModelEntity> m_glowEntity"
// MNetworkVarNames "bool m_usable"
// MNetworkVarNames "string_t m_szDisplayText"
class C_BaseButton : public C_BaseToggle
{
public:
	// MNetworkEnable
	CHandle<C_BaseModelEntity> m_glowEntity; // 0xcc8	
	// MNetworkEnable
	bool m_usable; // 0xccc	
private:
	[[maybe_unused]] uint8_t __pad0ccd[0x3]; // 0xccd
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0xcd0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseViewModel > m_hViewModel"
class CCSPlayer_ViewModelServices : public CPlayer_ViewModelServices
{
public:
	// MNetworkEnable
	CHandle<C_BaseViewModel> m_hViewModel[3]; // 0x40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x548
// Has VTable
class CInfoParticleTarget : public C_PointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x218
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
	
	// Datamap fields:
	// void m_pSurfaceData; // 0x208
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponAug : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcf8
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "string_t m_DialogXMLName"
// MNetworkVarNames "string_t m_PanelClassName"
// MNetworkVarNames "string_t m_PanelID"
class C_BaseClientUIEntity : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x8]; // 0xcc8
public:
	// MNetworkEnable
	bool m_bEnabled; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cd1[0x7]; // 0xcd1
public:
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0xcd8	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0xce0	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0xce8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x548
// Has VTable
class C_CSMinimapBoundary : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x30
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1278
// Has VTable
class C_CSGO_EndOfMatchCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x568
// Has VTable
// 
// MNetworkVarNames "string_t m_iszStackName"
// MNetworkVarNames "string_t m_iszOperatorName"
// MNetworkVarNames "string_t m_iszOpvarName"
// MNetworkVarNames "int m_iOpvarIndex"
// MNetworkVarNames "bool m_bUseAutoCompare"
class C_SoundOpvarSetPointBase : public C_BaseEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x548	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x550	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x558	
	// MNetworkEnable
	int32_t m_iOpvarIndex; // 0x560	
	// MNetworkEnable
	bool m_bUseAutoCompare; // 0x564	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class C_MultiplayRules : public C_GameRules
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed0
// Has VTable
class C_WorldModelNametag : public CBaseAnimGraph
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// Has Trivial Destructor
class CPropDataComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	float m_flDmgModBullet; // 0x10	
	float m_flDmgModClub; // 0x14	
	float m_flDmgModExplosive; // 0x18	
	float m_flDmgModFire; // 0x1c	
	CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x20	
	CUtlSymbolLarge m_iszBasePropData; // 0x28	
	int32_t m_nInteractions; // 0x30	
	bool m_bSpawnMotionDisabled; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
public:
	int32_t m_nDisableTakePhysicsDamageSpawnFlag; // 0x38	
	int32_t m_nMotionDisabledSpawnFlag; // 0x3c	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CPropDataComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CPropDataComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8b0
// Has VTable
// 
// MNetworkVarNames "char m_szTeamMatchStat"
// MNetworkVarNames "int m_numMapVictories"
// MNetworkVarNames "bool m_bSurrendered"
// MNetworkVarNames "int32 m_scoreFirstHalf"
// MNetworkVarNames "int32 m_scoreSecondHalf"
// MNetworkVarNames "int32 m_scoreOvertime"
// MNetworkVarNames "char m_szClanTeamname"
// MNetworkVarNames "uint32 m_iClanID"
// MNetworkVarNames "char m_szTeamFlagImage"
// MNetworkVarNames "char m_szTeamLogoImage"
class C_CSTeam : public C_Team
{
public:
	// MNetworkEnable
	char m_szTeamMatchStat[512]; // 0x600	
	// MNetworkEnable
	int32_t m_numMapVictories; // 0x800	
	// MNetworkEnable
	bool m_bSurrendered; // 0x804	
private:
	[[maybe_unused]] uint8_t __pad0805[0x3]; // 0x805
public:
	// MNetworkEnable
	int32_t m_scoreFirstHalf; // 0x808	
	// MNetworkEnable
	int32_t m_scoreSecondHalf; // 0x80c	
	// MNetworkEnable
	int32_t m_scoreOvertime; // 0x810	
	// MNetworkEnable
	char m_szClanTeamname[129]; // 0x814	
private:
	[[maybe_unused]] uint8_t __pad0895[0x3]; // 0x895
public:
	// MNetworkEnable
	uint32_t m_iClanID; // 0x898	
	// MNetworkEnable
	char m_szTeamFlagImage[8]; // 0x89c	
	// MNetworkEnable
	char m_szTeamLogoImage[8]; // 0x8a4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x588
// Has VTable
// 
// MNetworkVarNames "Vector m_vMin"
// MNetworkVarNames "Vector m_vMax"
class C_SoundAreaEntityOrientedBox : public C_SoundAreaEntityBase
{
public:
	// MNetworkEnable
	Vector m_vMin; // 0x570	
	// MNetworkEnable
	Vector m_vMax; // 0x57c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd00
// Has VTable
// 
// MNetworkVarNames "bool m_bLoop"
// MNetworkVarNames "float m_flFPS"
// MNetworkVarNames "HRenderTextureStrong m_hPositionKeys"
// MNetworkVarNames "HRenderTextureStrong m_hRotationKeys"
// MNetworkVarNames "Vector m_vAnimationBoundsMin"
// MNetworkVarNames "Vector m_vAnimationBoundsMax"
// MNetworkVarNames "float m_flStartTime"
// MNetworkVarNames "float m_flStartFrame"
class C_TextureBasedAnimatable : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	bool m_bLoop; // 0xcc8	
private:
	[[maybe_unused]] uint8_t __pad0cc9[0x3]; // 0xcc9
public:
	// MNetworkEnable
	float m_flFPS; // 0xccc	
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeCTextureBase> m_hPositionKeys; // 0xcd0	
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeCTextureBase> m_hRotationKeys; // 0xcd8	
	// MNetworkEnable
	Vector m_vAnimationBoundsMin; // 0xce0	
	// MNetworkEnable
	Vector m_vAnimationBoundsMax; // 0xcec	
	// MNetworkEnable
	float m_flStartTime; // 0xcf8	
	// MNetworkEnable
	float m_flStartFrame; // 0xcfc	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x568
// Has VTable
class C_SoundOpvarSetPointEntity : public C_SoundOpvarSetPointBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed0
// Has VTable
class C_WorldModelStattrak : public CBaseAnimGraph
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
class C_LightOrthoEntity : public C_LightEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_WaterServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
class CSkyboxReference : public C_BaseEntity
{
public:
	WorldGroupId_t m_worldGroupId; // 0x548	
	CHandle<C_SkyCamera> m_hSkyCamera; // 0x54c	
	
	// Datamap fields:
	// const char * worldGroupID; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x570
// Has VTable
// 
// MNetworkVarNames "float m_flAutoExposureMin"
// MNetworkVarNames "float m_flAutoExposureMax"
// MNetworkVarNames "float m_flTonemapPercentTarget"
// MNetworkVarNames "float m_flTonemapPercentBrightPixels"
// MNetworkVarNames "float m_flTonemapMinAvgLum"
// MNetworkVarNames "float m_flExposureAdaptationSpeedUp"
// MNetworkVarNames "float m_flExposureAdaptationSpeedDown"
// MNetworkVarNames "float m_flTonemapEVSmoothingRange"
class C_TonemapController2 : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flAutoExposureMin; // 0x548	
	// MNetworkEnable
	float m_flAutoExposureMax; // 0x54c	
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0x550	
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0x554	
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0x558	
	// MNetworkEnable
	float m_flExposureAdaptationSpeedUp; // 0x55c	
	// MNetworkEnable
	float m_flExposureAdaptationSpeedDown; // 0x560	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0x564	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// float InputSetMinExposure; // 0x0
	// float InputSetMaxExposure; // 0x0
	// float InputSetPercentTarget; // 0x0
	// float InputSetPercentBrightPixels; // 0x0
	// float InputSetMinAverageLuminosity; // 0x0
	// float InputSetExposureAdaptationSpeedUp; // 0x0
	// float InputSetExposureAdaptationSpeedDown; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2e0
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseEntity> m_hTargetEntity"
// MNetworkVarNames "bool m_bState"
// MNetworkVarNames "bool m_bAlwaysUpdate"
// MNetworkVarNames "float32 m_flLightFOV"
// MNetworkVarNames "bool m_bEnableShadows"
// MNetworkVarNames "bool m_bSimpleProjection"
// MNetworkVarNames "bool m_bLightOnlyTarget"
// MNetworkVarNames "bool m_bLightWorld"
// MNetworkVarNames "bool m_bCameraSpace"
// MNetworkVarNames "float32 m_flBrightnessScale"
// MNetworkVarNames "Color m_LightColor"
// MNetworkVarNames "float32 m_flIntensity"
// MNetworkVarNames "float32 m_flLinearAttenuation"
// MNetworkVarNames "float32 m_flQuadraticAttenuation"
// MNetworkVarNames "bool m_bVolumetric"
// MNetworkVarNames "float32 m_flVolumetricIntensity"
// MNetworkVarNames "float32 m_flNoiseStrength"
// MNetworkVarNames "float32 m_flFlashlightTime"
// MNetworkVarNames "uint32 m_nNumPlanes"
// MNetworkVarNames "float32 m_flPlaneOffset"
// MNetworkVarNames "float32 m_flColorTransitionTime"
// MNetworkVarNames "float32 m_flAmbient"
// MNetworkVarNames "char m_SpotlightTextureName"
// MNetworkVarNames "int32 m_nSpotlightTextureFrame"
// MNetworkVarNames "uint32 m_nShadowQuality"
// MNetworkVarNames "float32 m_flNearZ"
// MNetworkVarNames "float32 m_flFarZ"
// MNetworkVarNames "float32 m_flProjectionSize"
// MNetworkVarNames "float32 m_flRotation"
// MNetworkVarNames "bool m_bFlipHorizontal"
class CProjectedTextureBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xc]; // 0x0
public:
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hTargetEntity; // 0xc	
	// MNetworkEnable
	bool m_bState; // 0x10	
	// MNetworkEnable
	bool m_bAlwaysUpdate; // 0x11	
private:
	[[maybe_unused]] uint8_t __pad0012[0x2]; // 0x12
public:
	// MNetworkEnable
	float m_flLightFOV; // 0x14	
	// MNetworkEnable
	bool m_bEnableShadows; // 0x18	
	// MNetworkEnable
	bool m_bSimpleProjection; // 0x19	
	// MNetworkEnable
	bool m_bLightOnlyTarget; // 0x1a	
	// MNetworkEnable
	bool m_bLightWorld; // 0x1b	
	// MNetworkEnable
	bool m_bCameraSpace; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad001d[0x3]; // 0x1d
public:
	// MNetworkEnable
	float m_flBrightnessScale; // 0x20	
	// MNetworkEnable
	Color m_LightColor; // 0x24	
	// MNetworkEnable
	float m_flIntensity; // 0x28	
	// MNetworkEnable
	float m_flLinearAttenuation; // 0x2c	
	// MNetworkEnable
	float m_flQuadraticAttenuation; // 0x30	
	// MNetworkEnable
	bool m_bVolumetric; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
public:
	// MNetworkEnable
	float m_flVolumetricIntensity; // 0x38	
	// MNetworkEnable
	float m_flNoiseStrength; // 0x3c	
	// MNetworkEnable
	float m_flFlashlightTime; // 0x40	
	// MNetworkEnable
	uint32_t m_nNumPlanes; // 0x44	
	// MNetworkEnable
	float m_flPlaneOffset; // 0x48	
	// MNetworkEnable
	float m_flColorTransitionTime; // 0x4c	
	// MNetworkEnable
	float m_flAmbient; // 0x50	
	// MNetworkEnable
	char m_SpotlightTextureName[512]; // 0x54	
	// MNetworkEnable
	int32_t m_nSpotlightTextureFrame; // 0x254	
	// MNetworkEnable
	uint32_t m_nShadowQuality; // 0x258	
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "500.000000"
	// MNetworkEncodeFlags "1"
	float m_flNearZ; // 0x25c	
	// MNetworkEnable
	// MNetworkBitCount "18"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1500.000000"
	// MNetworkEncodeFlags "1"
	float m_flFarZ; // 0x260	
	// MNetworkEnable
	float m_flProjectionSize; // 0x264	
	// MNetworkEnable
	float m_flRotation; // 0x268	
	// MNetworkEnable
	bool m_bFlipHorizontal; // 0x26c	
	
	// Static fields:
	static float &Get_m_flVisibleBBoxMinHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CProjectedTextureBase")->m_static_fields[0]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
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
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t> m_vecServerAuthoritativeWeaponSlots; // 0x70	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x650
// Has VTable
// 
// MNetworkVarNames "float m_flParticleSpacing"
// MNetworkVarNames "float m_flSlack"
// MNetworkVarNames "float m_flRadius"
// MNetworkVarNames "Color m_ColorTint"
// MNetworkVarNames "int m_nEffectState"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
// MNetworkVarNames "Vector m_PathNodes_Position"
// MNetworkVarNames "Vector m_PathNodes_TangentIn"
// MNetworkVarNames "Vector m_PathNodes_TangentOut"
// MNetworkVarNames "Vector m_PathNodes_Color"
// MNetworkVarNames "bool m_PathNodes_PinEnabled"
// MNetworkVarNames "float m_PathNodes_RadiusScale"
class C_PathParticleRope : public C_BaseEntity
{
public:
	bool m_bStartActive; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x3]; // 0x549
public:
	float m_flMaxSimulationTime; // 0x54c	
	CUtlSymbolLarge m_iszEffectName; // 0x550	
	CUtlVector<CUtlSymbolLarge> m_PathNodes_Name; // 0x558	
	// MNetworkEnable
	float m_flParticleSpacing; // 0x570	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flSlack; // 0x574	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flRadius; // 0x578	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	Color m_ColorTint; // 0x57c	
	// MNetworkEnable
	// MNetworkChangeCallback "effectStateChanged"
	int32_t m_nEffectState; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad0584[0x4]; // 0x584
public:
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex; // 0x588	
	// MNetworkEnable
	C_NetworkUtlVectorBase<Vector> m_PathNodes_Position; // 0x590	
	// MNetworkEnable
	C_NetworkUtlVectorBase<Vector> m_PathNodes_TangentIn; // 0x5a8	
	// MNetworkEnable
	C_NetworkUtlVectorBase<Vector> m_PathNodes_TangentOut; // 0x5c0	
	// MNetworkEnable
	C_NetworkUtlVectorBase<Vector> m_PathNodes_Color; // 0x5d8	
	// MNetworkEnable
	// MNetworkChangeCallback "pinStateChanged"
	C_NetworkUtlVectorBase<bool> m_PathNodes_PinEnabled; // 0x5f0	
	// MNetworkEnable
	C_NetworkUtlVectorBase<float32> m_PathNodes_RadiusScale; // 0x608	
	
	// Datamap fields:
	// CUtlSymbolLarge pathNodes; // 0x7fffffff
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputStopEndCap; // 0x0
	// void InputDestroy; // 0x0
	// CUtlSymbolLarge InputDisablePin; // 0x0
	// float InputSetRadius; // 0x0
	// float InputSetSlack; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_UseServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf38
// Has VTable
// 
// MNetworkIncludeByName "m_nModelIndex"
// MNetworkIncludeByName "m_hModel"
// MNetworkIncludeByName "m_hOwnerEntity"
// MNetworkIncludeByName "m_MeshGroupMask"
// MNetworkIncludeByName "m_fEffects"
// MNetworkIncludeByName "m_baseLayer.m_hSequence"
// MNetworkIncludeByName "m_animationController.m_flPlaybackRate"
// MNetworkIncludeByName "m_flAnimTime"
// MNetworkIncludeByName "m_flSimulationTime"
// MNetworkIncludeByName "m_animationController.m_animGraphNetworkedVars"
// MNetworkIncludeByName "m_nResetEventsParity"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkOverride "m_fEffects"
// MNetworkIncludeByName "m_clrRender"
// MNetworkVarNames "uint32 m_nViewModelIndex"
// MNetworkVarNames "uint32 m_nAnimationParity"
// MNetworkVarNames "float32 m_flAnimationStartTime"
// MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hWeapon"
// MNetworkVarNames "CHandle< CBaseEntity> m_hControlPanel"
class C_BaseViewModel : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0ed0[0x8]; // 0xed0
public:
	Vector m_vecLastFacing; // 0xed8	
	// MNetworkEnable
	uint32_t m_nViewModelIndex; // 0xee4	
	// MNetworkEnable
	uint32_t m_nAnimationParity; // 0xee8	
	// MNetworkEnable
	float m_flAnimationStartTime; // 0xeec	
	// MNetworkEnable
	CHandle<C_BasePlayerWeapon> m_hWeapon; // 0xef0	
private:
	[[maybe_unused]] uint8_t __pad0ef4[0x4]; // 0xef4
public:
	CUtlSymbolLarge m_sVMName; // 0xef8	
	CUtlSymbolLarge m_sAnimationPrefix; // 0xf00	
	CHandle<C_ViewmodelWeapon> m_hWeaponModel; // 0xf08	
	AttachmentHandle_t m_iCameraAttachment; // 0xf0c	
private:
	[[maybe_unused]] uint8_t __pad0f0d[0x3]; // 0xf0d
public:
	QAngle m_vecLastCameraAngles; // 0xf10	
	float m_previousElapsedDuration; // 0xf1c	
	float m_previousCycle; // 0xf20	
	int32_t m_nOldAnimationParity; // 0xf24	
	HSequence m_hOldLayerSequence; // 0xf28	
	int32_t m_oldLayer; // 0xf2c	
	float m_oldLayerStartTime; // 0xf30	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hControlPanel; // 0xf34	
};

// Registered binary: client.dll (project 'entity2')
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
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1598
// Has VTable
// 
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightIndicesTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightScalarsTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightShadowsTexture"
// MNetworkVarNames "Vector m_Entity_vBoxMins"
// MNetworkVarNames "Vector m_Entity_vBoxMaxs"
// MNetworkVarNames "bool m_Entity_bMoveable"
// MNetworkVarNames "int m_Entity_nHandshake"
// MNetworkVarNames "int m_Entity_nPriority"
// MNetworkVarNames "bool m_Entity_bStartDisabled"
// MNetworkVarNames "int m_Entity_nLightProbeSizeX"
// MNetworkVarNames "int m_Entity_nLightProbeSizeY"
// MNetworkVarNames "int m_Entity_nLightProbeSizeZ"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasX"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasY"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasZ"
// MNetworkVarNames "bool m_Entity_bEnabled"
class C_EnvLightProbeVolume : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0xfe0]; // 0x548
public:
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture; // 0x1528	
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightIndicesTexture; // 0x1530	
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightScalarsTexture; // 0x1538	
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightShadowsTexture; // 0x1540	
	// MNetworkEnable
	Vector m_Entity_vBoxMins; // 0x1548	
	// MNetworkEnable
	Vector m_Entity_vBoxMaxs; // 0x1554	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x1560	
private:
	[[maybe_unused]] uint8_t __pad1561[0x3]; // 0x1561
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x1564	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x1568	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x156c	
private:
	[[maybe_unused]] uint8_t __pad156d[0x3]; // 0x156d
public:
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeX; // 0x1570	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeY; // 0x1574	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeZ; // 0x1578	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasX; // 0x157c	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasY; // 0x1580	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasZ; // 0x1584	
private:
	[[maybe_unused]] uint8_t __pad1588[0x9]; // 0x1588
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x1591	
	
	// Datamap fields:
	// void m_Entity_pSceneObject; // 0x1588
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed8
// Has VTable
class C_ViewmodelAttachmentModel : public CBaseAnimGraph
{
public:
	bool m_bShouldFrontFaceCullLeftHanded; // 0xed0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CCSPointScriptExtensions_player_controller
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1aa0
// Has VTable
class C_Flashbang : public C_BaseCSGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a60
// Has VTable
class CBumpMine : public C_CSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x590
// Has VTable
// 
// MNetworkVarNames "bool m_bTimerPaused"
// MNetworkVarNames "float m_flTimeRemaining"
// MNetworkVarNames "GameTime_t m_flTimerEndTime"
// MNetworkVarNames "bool m_bIsDisabled"
// MNetworkVarNames "bool m_bShowInHUD"
// MNetworkVarNames "int m_nTimerLength"
// MNetworkVarNames "int m_nTimerInitialLength"
// MNetworkVarNames "int m_nTimerMaxLength"
// MNetworkVarNames "bool m_bAutoCountdown"
// MNetworkVarNames "int m_nSetupTimeLength"
// MNetworkVarNames "int m_nState"
// MNetworkVarNames "bool m_bStartPaused"
// MNetworkVarNames "bool m_bInCaptureWatchState"
// MNetworkVarNames "float m_flTotalTime"
// MNetworkVarNames "bool m_bStopWatchTimer"
class C_TeamRoundTimer : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnTimerPaused"
	bool m_bTimerPaused; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x3]; // 0x549
public:
	// MNetworkEnable
	float m_flTimeRemaining; // 0x54c	
	// MNetworkEnable
	GameTime_t m_flTimerEndTime; // 0x550	
	// MNetworkEnable
	bool m_bIsDisabled; // 0x554	
	// MNetworkEnable
	bool m_bShowInHUD; // 0x555	
private:
	[[maybe_unused]] uint8_t __pad0556[0x2]; // 0x556
public:
	// MNetworkEnable
	int32_t m_nTimerLength; // 0x558	
	// MNetworkEnable
	int32_t m_nTimerInitialLength; // 0x55c	
	// MNetworkEnable
	int32_t m_nTimerMaxLength; // 0x560	
	// MNetworkEnable
	bool m_bAutoCountdown; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	// MNetworkEnable
	int32_t m_nSetupTimeLength; // 0x568	
	// MNetworkEnable
	int32_t m_nState; // 0x56c	
	// MNetworkEnable
	bool m_bStartPaused; // 0x570	
	// MNetworkEnable
	bool m_bInCaptureWatchState; // 0x571	
private:
	[[maybe_unused]] uint8_t __pad0572[0x2]; // 0x572
public:
	// MNetworkEnable
	float m_flTotalTime; // 0x574	
	// MNetworkEnable
	bool m_bStopWatchTimer; // 0x578	
	bool m_bFireFinished; // 0x579	
	bool m_bFire5MinRemain; // 0x57a	
	bool m_bFire4MinRemain; // 0x57b	
	bool m_bFire3MinRemain; // 0x57c	
	bool m_bFire2MinRemain; // 0x57d	
	bool m_bFire1MinRemain; // 0x57e	
	bool m_bFire30SecRemain; // 0x57f	
	bool m_bFire10SecRemain; // 0x580	
	bool m_bFire5SecRemain; // 0x581	
	bool m_bFire4SecRemain; // 0x582	
	bool m_bFire3SecRemain; // 0x583	
	bool m_bFire2SecRemain; // 0x584	
	bool m_bFire1SecRemain; // 0x585	
private:
	[[maybe_unused]] uint8_t __pad0586[0x2]; // 0x586
public:
	int32_t m_nOldTimerLength; // 0x588	
	int32_t m_nOldTimerState; // 0x58c	
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1aa0
// Has VTable
class C_SmokeGrenade : public C_BaseCSGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponGalilAR : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed8
// Has VTable
class C_WorldModelGloves : public CBaseAnimGraph
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc8
// Has VTable
class C_ModelPointEntity : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5a0
// Has VTable
class CPathSimple : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x50]; // 0x548
public:
	CUtlString m_pathString; // 0x598	
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xf30
// Has VTable
// 
// MNetworkVarNames "bool m_bIgnoreInput"
// MNetworkVarNames "bool m_bLit"
// MNetworkVarNames "bool m_bFollowPlayerAcrossTeleport"
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "float m_flHeight"
// MNetworkVarNames "float m_flDPI"
// MNetworkVarNames "float m_flInteractDistance"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "uint32 m_unOwnerContext"
// MNetworkVarNames "uint32 m_unHorizontalAlign"
// MNetworkVarNames "uint32 m_unVerticalAlign"
// MNetworkVarNames "uint32 m_unOrientation"
// MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
// MNetworkVarNames "string_t m_vecCSSClasses"
// MNetworkVarNames "bool m_bOpaque"
// MNetworkVarNames "bool m_bNoDepth"
// MNetworkVarNames "bool m_bRenderBackface"
// MNetworkVarNames "bool m_bUseOffScreenIndicator"
// MNetworkVarNames "bool m_bExcludeFromSaveGames"
// MNetworkVarNames "bool m_bGrabbable"
// MNetworkVarNames "bool m_bOnlyRenderToTexture"
// MNetworkVarNames "bool m_bDisableMipGen"
// MNetworkVarNames "int32 m_nExplicitImageLayout"
class C_PointClientUIWorldPanel : public C_BaseClientUIEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cf8[0x8]; // 0xcf8
public:
	bool m_bForceRecreateNextUpdate; // 0xd00	
	bool m_bMoveViewToPlayerNextThink; // 0xd01	
	bool m_bCheckCSSClasses; // 0xd02	
private:
	[[maybe_unused]] uint8_t __pad0d03[0xd]; // 0xd03
public:
	CTransform m_anchorDeltaTransform; // 0xd10	
private:
	[[maybe_unused]] uint8_t __pad0d30[0x178]; // 0xd30
public:
	CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xea8	
private:
	[[maybe_unused]] uint8_t __pad0eb0[0x20]; // 0xeb0
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0xed0	
	// MNetworkEnable
	bool m_bLit; // 0xed1	
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; // 0xed2	
private:
	[[maybe_unused]] uint8_t __pad0ed3[0x1]; // 0xed3
public:
	// MNetworkEnable
	float m_flWidth; // 0xed4	
	// MNetworkEnable
	float m_flHeight; // 0xed8	
	// MNetworkEnable
	float m_flDPI; // 0xedc	
	// MNetworkEnable
	float m_flInteractDistance; // 0xee0	
	// MNetworkEnable
	float m_flDepthOffset; // 0xee4	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0xee8	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0xeec	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0xef0	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0xef4	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0xef8	
private:
	[[maybe_unused]] uint8_t __pad0ef9[0x7]; // 0xef9
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses; // 0xf00	
	// MNetworkEnable
	bool m_bOpaque; // 0xf18	
	// MNetworkEnable
	bool m_bNoDepth; // 0xf19	
	// MNetworkEnable
	bool m_bRenderBackface; // 0xf1a	
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; // 0xf1b	
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; // 0xf1c	
	// MNetworkEnable
	bool m_bGrabbable; // 0xf1d	
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; // 0xf1e	
	// MNetworkEnable
	bool m_bDisableMipGen; // 0xf1f	
	// MNetworkEnable
	int32_t m_nExplicitImageLayout; // 0xf20	
	
	// Datamap fields:
	// CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0xea0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CCSPointScriptExtensions_entity
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x410
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
	[[maybe_unused]] uint8_t __pad0160[0x10]; // 0x160
public:
	// MNetworkEnable
	// -> m_hModel - 0x210
	// -> m_ModelName - 0x218
	// -> m_bClientClothCreationSuppressed - 0x258
	// -> m_MeshGroupMask - 0x308
	// -> m_nIdealMotionType - 0x38a
	// -> m_nForceLOD - 0x38b
	// -> m_nClothUpdateFlags - 0x38c
	CModelState m_modelState; // 0x170	
	// MNetworkEnable
	bool m_bIsAnimationEnabled; // 0x3a0	
	// MNetworkEnable
	bool m_bUseParentRenderBounds; // 0x3a1	
	// MNetworkDisable
	bool m_bDisableSolidCollisionsForHierarchy; // 0x3a2	
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
	CUtlStringToken m_materialGroup; // 0x3a4	
	// MNetworkEnable
	uint8_t m_nHitboxSet; // 0x3a8	
	
	// Datamap fields:
	// Vector velocity; // 0x7fffffff
	// Vector rotationAxis; // 0x7fffffff
	// float rotationSpeed; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponM4A1 : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5e8
// Has VTable
// 
// MNetworkVarNames "sky3dparams_t m_skyboxData"
// MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
class C_SkyCamera : public C_BaseEntity
{
public:
	// MNetworkEnable
	// -> scale - 0x550
	// -> origin - 0x554
	// -> bClip3DSkyBoxNearToWorldFar - 0x560
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0x564
	// -> fog - 0x568
	// -> m_nWorldGroupID - 0x5d0
	sky3dparams_t m_skyboxData; // 0x548	
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x5d8	
	bool m_bUseAngles; // 0x5dc	
private:
	[[maybe_unused]] uint8_t __pad05dd[0x3]; // 0x5dd
public:
	C_SkyCamera* m_pNext; // 0x5e0	
	
	// Datamap fields:
	// int16_t m_skyboxData.scale; // 0x550
	// Vector m_skyboxData.origin; // 0x554
	// bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x560
	// float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x564
	// bool m_skyboxData.fog.enable; // 0x5cc
	// bool m_skyboxData.fog.blend; // 0x5cd
	// Vector m_skyboxData.fog.dirPrimary; // 0x570
	// Color m_skyboxData.fog.colorPrimary; // 0x57c
	// Color m_skyboxData.fog.colorSecondary; // 0x580
	// float m_skyboxData.fog.start; // 0x58c
	// float m_skyboxData.fog.end; // 0x590
	// float m_skyboxData.fog.maxdensity; // 0x598
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc8
// Has VTable
class C_World : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "float32 m_flFadeInStart"
// MNetworkVarNames "float32 m_flFadeInLength"
// MNetworkVarNames "float32 m_flFadeOutModelStart"
// MNetworkVarNames "float32 m_flFadeOutModelLength"
// MNetworkVarNames "float32 m_flFadeOutStart"
// MNetworkVarNames "float32 m_flFadeOutLength"
// MNetworkVarNames "EntityDisolveType_t m_nDissolveType"
// MNetworkVarNames "Vector m_vDissolverOrigin"
// MNetworkVarNames "uint32 m_nMagnitude"
class C_EntityDissolve : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x8]; // 0xcc8
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xcd0	
	// MNetworkEnable
	float m_flFadeInStart; // 0xcd4	
	// MNetworkEnable
	float m_flFadeInLength; // 0xcd8	
	// MNetworkEnable
	float m_flFadeOutModelStart; // 0xcdc	
	// MNetworkEnable
	float m_flFadeOutModelLength; // 0xce0	
	// MNetworkEnable
	float m_flFadeOutStart; // 0xce4	
	// MNetworkEnable
	float m_flFadeOutLength; // 0xce8	
	GameTime_t m_flNextSparkTime; // 0xcec	
	// MNetworkEnable
	EntityDisolveType_t m_nDissolveType; // 0xcf0	
	// MNetworkEnable
	Vector m_vDissolverOrigin; // 0xcf4	
	// MNetworkEnable
	uint32_t m_nMagnitude; // 0xd00	
	bool m_bCoreExplode; // 0xd04	
	bool m_bLinkedToServerEnt; // 0xd05	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CCSObserver_UseServices : public CPlayer_UseServices
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x210
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
// MNetworkVarNames "CHandle<C_PostProcessingVolume> m_PostProcessingVolumes"
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
	C_fogplayerparams_t m_PlayerFog; // 0x58	
	// MNetworkEnable
	CHandle<C_ColorCorrection> m_hColorCorrectionCtrl; // 0x98	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hViewEntity; // 0x9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	CHandle<C_TonemapController2> m_hTonemapController; // 0xa0	
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
	C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>> m_PostProcessingVolumes; // 0x120	
	float m_flOldPlayerZ; // 0x138	
	float m_flOldPlayerViewOffsetZ; // 0x13c	
	fogparams_t m_CurrentFog; // 0x140	
	CHandle<C_FogController> m_hOldFogController; // 0x1a8	
	bool m_bOverrideFogColor[5]; // 0x1ac	
	Color m_OverrideFogColor[5]; // 0x1b1	
	bool m_bOverrideFogStartEnd[5]; // 0x1c5	
private:
	[[maybe_unused]] uint8_t __pad01ca[0x2]; // 0x1ca
public:
	float m_fOverrideFogStart[5]; // 0x1cc	
	float m_fOverrideFogEnd[5]; // 0x1e0	
	CHandle<C_PostProcessingVolume> m_hActivePostProcessingVolume; // 0x1f4	
	QAngle m_angDemoViewAngles; // 0x1f8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1298
// Has VTable
// 
// MNetworkUserGroupProxy "C_BasePlayerPawn"
// MNetworkUserGroupProxy "C_BasePlayerPawn"
// MNetworkExcludeByUserGroup "FogController"
// MNetworkIncludeByUserGroup "Player"
// MNetworkIncludeByUserGroup "Water"
// MNetworkIncludeByUserGroup "LocalPlayerExclusive"
// MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_lifeState"
// MNetworkExcludeByName "m_pWeaponServices"
// MNetworkExcludeByName "m_pItemServices"
// MNetworkExcludeByName "m_pAutoaimServices"
// MNetworkExcludeByName "m_pObserverServices"
// MNetworkExcludeByName "m_pWaterServices"
// MNetworkExcludeByName "m_pUseServices"
// MNetworkExcludeByName "m_pFlashlightServices"
// MNetworkExcludeByName "m_pMovementServices"
// MNetworkVarNames "CPlayer_WeaponServices * m_pWeaponServices"
// MNetworkVarNames "CPlayer_ItemServices * m_pItemServices"
// MNetworkVarNames "CPlayer_AutoaimServices * m_pAutoaimServices"
// MNetworkVarNames "CPlayer_ObserverServices * m_pObserverServices"
// MNetworkVarNames "CPlayer_WaterServices * m_pWaterServices"
// MNetworkVarNames "CPlayer_UseServices * m_pUseServices"
// MNetworkVarNames "CPlayer_FlashlightServices * m_pFlashlightServices"
// MNetworkVarNames "CPlayer_CameraServices * m_pCameraServices"
// MNetworkVarNames "CPlayer_MovementServices * m_pMovementServices"
// MNetworkVarNames "ViewAngleServerChange_t m_ServerViewAngleChanges"
// MNetworkVarNames "uint32 m_iHideHUD"
// MNetworkVarNames "sky3dparams_t m_skybox3d"
// MNetworkVarNames "GameTime_t m_flDeathTime"
// MNetworkVarNames "CHandle< CBasePlayerController> m_hController"
class C_BasePlayerPawn : public C_BaseCombatCharacter
{
public:
	// MNetworkEnable
	CPlayer_WeaponServices* m_pWeaponServices; // 0x10f8	
	// MNetworkEnable
	CPlayer_ItemServices* m_pItemServices; // 0x1100	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CPlayer_AutoaimServices* m_pAutoaimServices; // 0x1108	
	// MNetworkEnable
	CPlayer_ObserverServices* m_pObserverServices; // 0x1110	
	// MNetworkEnable
	CPlayer_WaterServices* m_pWaterServices; // 0x1118	
	// MNetworkEnable
	CPlayer_UseServices* m_pUseServices; // 0x1120	
	// MNetworkEnable
	CPlayer_FlashlightServices* m_pFlashlightServices; // 0x1128	
	// MNetworkEnable
	CPlayer_CameraServices* m_pCameraServices; // 0x1130	
	// MNetworkEnable
	CPlayer_MovementServices* m_pMovementServices; // 0x1138	
private:
	[[maybe_unused]] uint8_t __pad1140[0x8]; // 0x1140
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t> m_ServerViewAngleChanges; // 0x1148	
	uint32_t m_nHighestConsumedServerViewAngleChangeIndex; // 0x1198	
	QAngle v_angle; // 0x119c	
	QAngle v_anglePrevious; // 0x11a8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_iHideHUD; // 0x11b4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// -> scale - 0x11c0
	// -> origin - 0x11c4
	// -> bClip3DSkyBoxNearToWorldFar - 0x11d0
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0x11d4
	// -> fog - 0x11d8
	// -> m_nWorldGroupID - 0x1240
	sky3dparams_t m_skybox3d; // 0x11b8	
	// MNetworkEnable
	GameTime_t m_flDeathTime; // 0x1248	
	Vector m_vecPredictionError; // 0x124c	
	GameTime_t m_flPredictionErrorTime; // 0x1258	
	Vector m_vecLastCameraSetupLocalOrigin; // 0x125c	
	GameTime_t m_flLastCameraSetupTime; // 0x1268	
	float m_flFOVSensitivityAdjust; // 0x126c	
	float m_flMouseSensitivity; // 0x1270	
	Vector m_vOldOrigin; // 0x1274	
	float m_flOldSimulationTime; // 0x1280	
	int32_t m_nLastExecutedCommandNumber; // 0x1284	
	int32_t m_nLastExecutedCommandTick; // 0x1288	
	// MNetworkEnable
	// MNetworkChangeCallback "OnControllerChanged"
	CHandle<CBasePlayerController> m_hController; // 0x128c	
	bool m_bIsSwappingToPredictableController; // 0x1290	
	
	// Datamap fields:
	// void m_hPawnListEntry; // 0x1292
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_Item_Healthshot : public C_WeaponBaseItem
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x750
// Has VTable
// 
// MNetworkVarNames "CEnvWindShared m_EnvWindShared"
class C_EnvWind : public C_BaseEntity
{
public:
	// MNetworkEnable
	C_EnvWindShared m_EnvWindShared; // 0x548	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
// Has VTable
// 
// MNetworkVarNames "HPostProcessingStrong m_hPostSettings"
// MNetworkVarNames "float m_flFadeDuration"
// MNetworkVarNames "float m_flMinLogExposure"
// MNetworkVarNames "float m_flMaxLogExposure"
// MNetworkVarNames "float m_flMinExposure"
// MNetworkVarNames "float m_flMaxExposure"
// MNetworkVarNames "float m_flExposureCompensation"
// MNetworkVarNames "float m_flExposureFadeSpeedUp"
// MNetworkVarNames "float m_flExposureFadeSpeedDown"
// MNetworkVarNames "float m_flTonemapEVSmoothingRange"
// MNetworkVarNames "bool m_bMaster"
// MNetworkVarNames "bool m_bExposureControl"
// MNetworkVarNames "float m_flRate"
// MNetworkVarNames "float m_flTonemapPercentTarget"
// MNetworkVarNames "float m_flTonemapPercentBrightPixels"
// MNetworkVarNames "float m_flTonemapMinAvgLum"
class C_PostProcessingVolume : public C_BaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0cd0[0x10]; // 0xcd0
public:
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeCPostProcessingResource> m_hPostSettings; // 0xce0	
	// MNetworkEnable
	float m_flFadeDuration; // 0xce8	
	// MNetworkEnable
	float m_flMinLogExposure; // 0xcec	
	// MNetworkEnable
	float m_flMaxLogExposure; // 0xcf0	
	// MNetworkEnable
	float m_flMinExposure; // 0xcf4	
	// MNetworkEnable
	float m_flMaxExposure; // 0xcf8	
	// MNetworkEnable
	float m_flExposureCompensation; // 0xcfc	
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0xd00	
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0xd04	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0xd08	
	// MNetworkEnable
	bool m_bMaster; // 0xd0c	
	// MNetworkEnable
	bool m_bExposureControl; // 0xd0d	
private:
	[[maybe_unused]] uint8_t __pad0d0e[0x2]; // 0xd0e
public:
	// MNetworkEnable
	float m_flRate; // 0xd10	
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0xd14	
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0xd18	
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0xd1c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_hPlayerPing"
class CCSPlayer_PingServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hPlayerPing; // 0x40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_FlashlightServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc8
// Has VTable
class CServerOnlyModelEntity : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponMag7 : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc8
// Has VTable
// 
// MNetworkOverride "m_angRotation CGameSceneNode"
// MNetworkOverride "m_flSimulationTime C_BaseEntity"
class C_FuncRotating : public C_BaseModelEntity
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
// 
// MNetworkVarNames "float32 m_flScale"
// MNetworkVarNames "float32 m_flStartScale"
// MNetworkVarNames "float m_flScaleTime"
// MNetworkVarNames "uint32 m_nFlags"
class C_BaseFire : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flScale; // 0x548	
	// MNetworkEnable
	float m_flStartScale; // 0x54c	
	// MNetworkEnable
	float m_flScaleTime; // 0x550	
	// MNetworkEnable
	uint32_t m_nFlags; // 0x554	
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
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CPointTemplateAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1180
// Has VTable
// 
// MNetworkVarNames "int m_nDecoyShotTick"
class C_DecoyProjectile : public C_BaseCSGrenadeProjectile
{
public:
	// MNetworkEnable
	int32_t m_nDecoyShotTick; // 0x1150	
	int32_t m_nClientLastKnownDecoyShotTick; // 0x1154	
private:
	[[maybe_unused]] uint8_t __pad1158[0x20]; // 0x1158
public:
	GameTime_t m_flTimeParticleEffectSpawn; // 0x1178	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed0
// Has VTable
class C_WaterBullet : public CBaseAnimGraph
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
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
// Size: 0x1858
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
	bool m_bSequenceFinished; // 0x14a8	
private:
	[[maybe_unused]] uint8_t __pad14a9[0x3]; // 0x14a9
public:
	// MNetworkDisable
	float m_flSoundSyncTime; // 0x14ac	
	// MNetworkDisable
	uint32_t m_nActiveIKChainMask; // 0x14b0	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkChangeCallback "OnNetworkedSequenceChanged"
	// MNetworkPriority "32"
	HSequence m_hSequence; // 0x14b4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetworkedAnimationChanged"
	// MNetworkPriority "32"
	GameTime_t m_flSeqStartTime; // 0x14b8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetworkedAnimationChanged"
	// MNetworkPriority "32"
	float m_flSeqFixedCycle; // 0x14bc	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetworkedAnimationChanged"
	// MNetworkPriority "32"
	AnimLoopMode_t m_nAnimLoopMode; // 0x14c0	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4.000000"
	// MNetworkMaxValue "12.000000"
	// MNetworkEncodeFlags "5"
	// MNetworkPriority "32"
	// MNetworkChangeCallback "OnNetworkedAnimationChanged"
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x14c4	
private:
	[[maybe_unused]] uint8_t __pad14cc[0x4]; // 0x14cc
public:
	// MNetworkDisable
	SequenceFinishNotifyState_t m_nNotifyState; // 0x14d0	
private:
	[[maybe_unused]] uint8_t __pad14d1[0x1]; // 0x14d1
public:
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; // 0x14d2	
	// MNetworkDisable
	bool m_bNetworkedSequenceChanged; // 0x14d3	
	// MNetworkDisable
	bool m_bLastUpdateSkipped; // 0x14d4	
private:
	[[maybe_unused]] uint8_t __pad14d5[0x3]; // 0x14d5
public:
	// MNetworkDisable
	GameTime_t m_flPrevAnimUpdateTime; // 0x14d8	
	
	// Datamap fields:
	// void m_pAnimGraphInstance; // 0x1778
	// float m_flCachedSequenceCycleRate; // 0x14cc
	// void m_iv_AnimOpHistory; // 0x1808
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
class CCSPointScriptEntity : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1ac0
// Has VTable
// 
// MNetworkVarNames "bool m_bStartedArming"
// MNetworkVarNames "GameTime_t m_fArmedTime"
// MNetworkVarNames "bool m_bBombPlacedAnimation"
// MNetworkVarNames "bool m_bIsPlantingViaUse"
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
class C_C4 : public C_CSWeaponBase
{
public:
	char m_szScreenText[32]; // 0x1a60	
	ParticleIndex_t m_activeLightParticleIndex; // 0x1a80	
	C4LightEffect_t m_eActiveLightEffect; // 0x1a84	
	// MNetworkEnable
	bool m_bStartedArming; // 0x1a88	
private:
	[[maybe_unused]] uint8_t __pad1a89[0x3]; // 0x1a89
public:
	// MNetworkEnable
	GameTime_t m_fArmedTime; // 0x1a8c	
	// MNetworkEnable
	bool m_bBombPlacedAnimation; // 0x1a90	
	// MNetworkEnable
	bool m_bIsPlantingViaUse; // 0x1a91	
private:
	[[maybe_unused]] uint8_t __pad1a92[0x6]; // 0x1a92
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x1a98	
	int32_t m_nSpotRules; // 0x1ab0	
	bool m_bPlayedArmingBeeps[7]; // 0x1ab4	
	bool m_bBombPlanted; // 0x1abb	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf68
// Has VTable
class C_ClientRagdoll : public CBaseAnimGraph
{
public:
	bool m_bFadeOut; // 0xed0	
	bool m_bImportant; // 0xed1	
private:
	[[maybe_unused]] uint8_t __pad0ed2[0x2]; // 0xed2
public:
	GameTime_t m_flEffectTime; // 0xed4	
	GameTime_t m_gibDespawnTime; // 0xed8	
	int32_t m_iCurrentFriction; // 0xedc	
	int32_t m_iMinFriction; // 0xee0	
	int32_t m_iMaxFriction; // 0xee4	
	int32_t m_iFrictionAnimState; // 0xee8	
	bool m_bReleaseRagdoll; // 0xeec	
	AttachmentHandle_t m_iEyeAttachment; // 0xeed	
	bool m_bFadingOut; // 0xeee	
private:
	[[maybe_unused]] uint8_t __pad0eef[0x1]; // 0xeef
public:
	float m_flScaleEnd[10]; // 0xef0	
	GameTime_t m_flScaleTimeStart[10]; // 0xf18	
	GameTime_t m_flScaleTimeEnd[10]; // 0xf40	
	
	// Datamap fields:
	// Color m_clrRender; // 0xa7b
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a60
// Has VTable
class C_Melee : public C_CSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10b8
// Has VTable
class CBreachChargeProjectile : public C_BaseGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x548
// Has VTable
class C_InfoInstructorHintHostageRescueZone : public C_PointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class C_TeamplayRules : public C_MultiplayRules
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x650
// Has VTable
class C_PathParticleRopeAlias_path_particle_rope_clientside : public C_PathParticleRope
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CCSPointScriptExtensions_CCSWeaponBaseVData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x560
// Has VTable
// 
// MNetworkVarNames "Vector m_vMins"
// MNetworkVarNames "Vector m_vMaxs"
class C_SoundEventAABBEntity : public C_SoundEventEntity
{
public:
	// MNetworkEnable
	Vector m_vMins; // 0x548	
	// MNetworkEnable
	Vector m_vMaxs; // 0x554	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponP90 : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponCZ75a : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x250
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
	CUtlOrderedMap<WeaponSound_t, CSoundEventName> m_aShootSounds; // 0x220	
	// MPropertyFriendlyName "HUD Bucket"
	// MPropertyDescription "Which 'column' to display this weapon in the HUD"
	// MPropertyGroupName "UI"
	int32_t m_iSlot; // 0x248	
	// MPropertyFriendlyName "HUD Bucket Position"
	// MPropertyDescription "Which 'row' to display this weapon in the HUD"
	// MPropertyGroupName "UI"
	int32_t m_iPosition; // 0x24c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xfc0
// Has VTable
// 
// MNetworkIncludeByName "m_nModelIndex"
// MNetworkIncludeByName "m_lifeState"
// MNetworkVarNames "Vector m_poolOrigin"
// MNetworkVarNames "float32 m_waterLevel"
// MNetworkVarNames "float32 m_x"
// MNetworkVarNames "float32 m_y"
// MNetworkVarNames "float32 m_z"
// MNetworkVarNames "float32 m_angle"
class C_Fish : public CBaseAnimGraph
{
public:
	Vector m_pos; // 0xed0	
	Vector m_vel; // 0xedc	
	QAngle m_angles; // 0xee8	
	int32_t m_localLifeState; // 0xef4	
	float m_deathDepth; // 0xef8	
	float m_deathAngle; // 0xefc	
	float m_buoyancy; // 0xf00	
private:
	[[maybe_unused]] uint8_t __pad0f04[0x4]; // 0xf04
public:
	CountdownTimer m_wiggleTimer; // 0xf08	
	float m_wigglePhase; // 0xf20	
	float m_wiggleRate; // 0xf24	
	Vector m_actualPos; // 0xf28	
	QAngle m_actualAngles; // 0xf34	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_poolOrigin; // 0xf40	
	// MNetworkEnable
	float m_waterLevel; // 0xf4c	
	bool m_gotUpdate; // 0xf50	
private:
	[[maybe_unused]] uint8_t __pad0f51[0x3]; // 0xf51
public:
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	// MNetworkChangeCallback "OnPosChanged"
	float m_x; // 0xf54	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	// MNetworkChangeCallback "OnPosChanged"
	float m_y; // 0xf58	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	// MNetworkChangeCallback "OnPosChanged"
	float m_z; // 0xf5c	
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkChangeCallback "OnAngChanged"
	float m_angle; // 0xf60	
	float m_errorHistory[20]; // 0xf64	
	int32_t m_errorHistoryIndex; // 0xfb4	
	int32_t m_errorHistoryCount; // 0xfb8	
	float m_averageError; // 0xfbc	
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponAWP : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1278
// Has VTable
class C_CSGO_TeamIntroCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1278
// Has VTable
class CCSGO_WingmanIntroCharacterPosition : public C_CSGO_TeamIntroCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x548
// Has VTable
class CLogicalEntity : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x460
// Has VTable
// 
// MNetworkVarNames "CSkeletonInstance m_skeletonInstance"
class CBodyComponentSkeletonInstance : public CBodyComponent
{
public:
	// MNetworkEnable
	// -> m_modelState - 0x1c0
	// -> m_bIsAnimationEnabled - 0x3f0
	// -> m_bUseParentRenderBounds - 0x3f1
	// -> m_bDisableSolidCollisionsForHierarchy - 0x3f2
	// -> m_materialGroup - 0x3f4
	// -> m_nHitboxSet - 0x3f8
	CSkeletonInstance m_skeletonInstance; // 0x50	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10b0
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
// MNetworkIncludeByName "m_nMinCPULevel"
// MNetworkIncludeByName "m_nMaxCPULevel"
// MNetworkIncludeByName "m_nMinGPULevel"
// MNetworkIncludeByName "m_nMaxGPULevel"
// MNetworkVarNames "float32 m_flScrollSpeed"
// MNetworkVarNames "uint16 m_RopeFlags"
// MNetworkVarNames "HMaterialStrong m_iRopeMaterialModelIndex"
// MNetworkVarNames "uint8 m_nSegments"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hStartPoint"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hEndPoint"
// MNetworkVarNames "AttachmentHandle_t m_iStartAttachment"
// MNetworkVarNames "AttachmentHandle_t m_iEndAttachment"
// MNetworkVarNames "uint8 m_Subdiv"
// MNetworkVarNames "int16 m_RopeLength"
// MNetworkVarNames "int16 m_Slack"
// MNetworkVarNames "float32 m_TextureScale"
// MNetworkVarNames "uint8 m_fLockedPoints"
// MNetworkVarNames "uint8 m_nChangeCount"
// MNetworkVarNames "float32 m_Width"
// MNetworkVarNames "bool m_bConstrainBetweenEndpoints"
class C_RopeKeyframe : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x8]; // 0xcc8
public:
	CBitVec<10> m_LinksTouchingSomething; // 0xcd0	
	int32_t m_nLinksTouchingSomething; // 0xcd4	
	bool m_bApplyWind; // 0xcd8	
private:
	[[maybe_unused]] uint8_t __pad0cd9[0x3]; // 0xcd9
public:
	int32_t m_fPrevLockedPoints; // 0xcdc	
	int32_t m_iForcePointMoveCounter; // 0xce0	
	bool m_bPrevEndPointPos[2]; // 0xce4	
private:
	[[maybe_unused]] uint8_t __pad0ce6[0x2]; // 0xce6
public:
	Vector m_vPrevEndPointPos[2]; // 0xce8	
	float m_flCurScroll; // 0xd00	
	// MNetworkEnable
	float m_flScrollSpeed; // 0xd04	
	// MNetworkEnable
	uint16_t m_RopeFlags; // 0xd08	
private:
	[[maybe_unused]] uint8_t __pad0d0a[0x6]; // 0xd0a
public:
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeIMaterial2> m_iRopeMaterialModelIndex; // 0xd10	
private:
	[[maybe_unused]] uint8_t __pad0d18[0x270]; // 0xd18
public:
	Vector m_LightValues[10]; // 0xf88	
	// MNetworkEnable
	uint8_t m_nSegments; // 0x1000	
private:
	[[maybe_unused]] uint8_t __pad1001[0x3]; // 0x1001
public:
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hStartPoint; // 0x1004	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hEndPoint; // 0x1008	
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; // 0x100c	
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; // 0x100d	
	// MNetworkEnable
	uint8_t m_Subdiv; // 0x100e	
private:
	[[maybe_unused]] uint8_t __pad100f[0x1]; // 0x100f
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_RopeLength; // 0x1010	
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_Slack; // 0x1012	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.100000"
	// MNetworkMaxValue "10.000000"
	float m_TextureScale; // 0x1014	
	// MNetworkEnable
	uint8_t m_fLockedPoints; // 0x1018	
	// MNetworkEnable
	uint8_t m_nChangeCount; // 0x1019	
private:
	[[maybe_unused]] uint8_t __pad101a[0x2]; // 0x101a
public:
	// MNetworkEnable
	float m_Width; // 0x101c	
	C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // 0x1020	
	CStrongHandle<InfoForResourceTypeIMaterial2> m_hMaterial; // 0x1030	
	int32_t m_TextureHeight; // 0x1038	
	Vector m_vecImpulse; // 0x103c	
	Vector m_vecPreviousImpulse; // 0x1048	
	float m_flCurrentGustTimer; // 0x1054	
	float m_flCurrentGustLifetime; // 0x1058	
	float m_flTimeToNextGust; // 0x105c	
	Vector m_vWindDir; // 0x1060	
	Vector m_vColorMod; // 0x106c	
	Vector m_vCachedEndPointAttachmentPos[2]; // 0x1078	
	QAngle m_vCachedEndPointAttachmentAngle[2]; // 0x1090	
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0x10a8	
	struct 
	{
		uint8_t m_bEndPointAttachmentPositionsDirty: 1; 		
		uint8_t m_bEndPointAttachmentAnglesDirty: 1; 		
		uint8_t m_bNewDataThisFrame: 1; 		
		uint8_t m_bPhysicsInitted: 1; 		
		uint8_t __pad2: 4;
	}; // 8 bits
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5e0
// Has VTable
// 
// MNetworkVarNames "HRenderTextureStrong m_hGradientFogTexture"
// MNetworkVarNames "float m_flFogStartDistance"
// MNetworkVarNames "float m_flFogEndDistance"
// MNetworkVarNames "bool m_bHeightFogEnabled"
// MNetworkVarNames "float m_flFogStartHeight"
// MNetworkVarNames "float m_flFogEndHeight"
// MNetworkVarNames "float m_flFarZ"
// MNetworkVarNames "float m_flFogMaxOpacity"
// MNetworkVarNames "float m_flFogFalloffExponent"
// MNetworkVarNames "float m_flFogVerticalExponent"
// MNetworkVarNames "Color m_fogColor"
// MNetworkVarNames "float m_flFogStrength"
// MNetworkVarNames "float m_flFadeTime"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bIsEnabled"
class C_GradientFog : public C_BaseEntity
{
public:
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeCTextureBase> m_hGradientFogTexture; // 0x548	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStartDistance; // 0x550	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogEndDistance; // 0x554	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	bool m_bHeightFogEnabled; // 0x558	
private:
	[[maybe_unused]] uint8_t __pad0559[0x3]; // 0x559
public:
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStartHeight; // 0x55c	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogEndHeight; // 0x560	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFarZ; // 0x564	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogMaxOpacity; // 0x568	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogFalloffExponent; // 0x56c	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogVerticalExponent; // 0x570	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	Color m_fogColor; // 0x574	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStrength; // 0x578	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFadeTime; // 0x57c	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x580	
	// MNetworkEnable
	bool m_bIsEnabled; // 0x581	
	bool m_bGradientFogNeedsTextures; // 0x582	
	
	// Static fields:
	static C_GradientFog* &Get_sm_pGradientFog(){return *reinterpret_cast<C_GradientFog**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GradientFog")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
	// float InputSetFogStartDistance; // 0x0
	// float InputSetFogEndDistance; // 0x0
	// float InputSetFogStartHeight; // 0x0
	// float InputSetFogEndHeight; // 0x0
	// float InputSetFogMaxOpacity; // 0x0
	// float InputSetFogFalloffExponent; // 0x0
	// float InputSetFogVerticalExponent; // 0x0
	// Color InputSetFogColor; // 0x0
	// float InputSetFogStrength; // 0x0
	// float InputSetFarZ; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1460
// Has VTable
// 
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_baseLayer.m_hSequence"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkVarNames "CCSPlayer_PingServices * m_pPingServices"
// MNetworkVarNames "CPlayer_ViewModelServices * m_pViewModelServices"
// MNetworkVarNames "CSPlayerState m_iPlayerState"
// MNetworkVarNames "bool m_bIsRescuing"
// MNetworkVarNames "GameTime_t m_fImmuneToGunGameDamageTime"
// MNetworkVarNames "bool m_bGunGameImmunity"
// MNetworkVarNames "bool m_bHasMovedSinceSpawn"
// MNetworkVarNames "float m_fMolotovUseTime"
// MNetworkVarNames "float m_fMolotovDamageTime"
// MNetworkVarNames "int m_iThrowGrenadeCounter"
// MNetworkVarNames "int m_iProgressBarDuration"
// MNetworkVarNames "float m_flProgressBarStartTime"
// MNetworkVarNames "float m_flFlashMaxAlpha"
// MNetworkVarNames "float m_flFlashDuration"
// MNetworkVarNames "int m_cycleLatch"
// MNetworkVarNames "CHandle< CCSPlayerController> m_hOriginalController"
class C_CSPlayerPawnBase : public C_BasePlayerPawn
{
private:
	[[maybe_unused]] uint8_t __pad1298[0x18]; // 0x1298
public:
	// MNetworkEnable
	CCSPlayer_PingServices* m_pPingServices; // 0x12b0	
	// MNetworkEnable
	CPlayer_ViewModelServices* m_pViewModelServices; // 0x12b8	
	float m_fRenderingClipPlane[4]; // 0x12c0	
	int32_t m_nLastClipPlaneSetupFrame; // 0x12d0	
	Vector m_vecLastClipCameraPos; // 0x12d4	
	Vector m_vecLastClipCameraForward; // 0x12e0	
	bool m_bClipHitStaticWorld; // 0x12ec	
	bool m_bCachedPlaneIsValid; // 0x12ed	
private:
	[[maybe_unused]] uint8_t __pad12ee[0x2]; // 0x12ee
public:
	C_CSWeaponBase* m_pClippingWeapon; // 0x12f0	
	CSPlayerState m_previousPlayerState; // 0x12f8	
	// MNetworkEnable
	CSPlayerState m_iPlayerState; // 0x12fc	
	// MNetworkEnable
	bool m_bIsRescuing; // 0x1300	
private:
	[[maybe_unused]] uint8_t __pad1301[0x3]; // 0x1301
public:
	// MNetworkEnable
	GameTime_t m_fImmuneToGunGameDamageTime; // 0x1304	
	GameTime_t m_fImmuneToGunGameDamageTimeLast; // 0x1308	
	// MNetworkEnable
	bool m_bGunGameImmunity; // 0x130c	
	// MNetworkEnable
	bool m_bHasMovedSinceSpawn; // 0x130d	
private:
	[[maybe_unused]] uint8_t __pad130e[0x2]; // 0x130e
public:
	// MNetworkEnable
	float m_fMolotovUseTime; // 0x1310	
	// MNetworkEnable
	float m_fMolotovDamageTime; // 0x1314	
	// MNetworkEnable
	int32_t m_iThrowGrenadeCounter; // 0x1318	
	GameTime_t m_flLastSpawnTimeIndex; // 0x131c	
	// MNetworkEnable
	int32_t m_iProgressBarDuration; // 0x1320	
	// MNetworkEnable
	float m_flProgressBarStartTime; // 0x1324	
	Vector m_vecIntroStartEyePosition; // 0x1328	
	Vector m_vecIntroStartPlayerForward; // 0x1334	
	GameTime_t m_flClientDeathTime; // 0x1340	
	bool m_bScreenTearFrameCaptured; // 0x1344	
private:
	[[maybe_unused]] uint8_t __pad1345[0x3]; // 0x1345
public:
	float m_flFlashBangTime; // 0x1348	
	float m_flFlashScreenshotAlpha; // 0x134c	
	float m_flFlashOverlayAlpha; // 0x1350	
	bool m_bFlashBuildUp; // 0x1354	
	bool m_bFlashDspHasBeenCleared; // 0x1355	
	bool m_bFlashScreenshotHasBeenGrabbed; // 0x1356	
private:
	[[maybe_unused]] uint8_t __pad1357[0x1]; // 0x1357
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashMaxAlphaChanged"
	float m_flFlashMaxAlpha; // 0x1358	
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashDurationChanged"
	float m_flFlashDuration; // 0x135c	
	int32_t m_iHealthBarRenderMaskIndex; // 0x1360	
	float m_flHealthFadeValue; // 0x1364	
	float m_flHealthFadeAlpha; // 0x1368	
private:
	[[maybe_unused]] uint8_t __pad136c[0xc]; // 0x136c
public:
	float m_flDeathCCWeight; // 0x1378	
	float m_flPrevRoundEndTime; // 0x137c	
	float m_flPrevMatchEndTime; // 0x1380	
private:
	[[maybe_unused]] uint8_t __pad1384[0x4]; // 0x1384
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkChangeCallback "playerEyeAnglesChanged"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0x1388	
private:
	[[maybe_unused]] uint8_t __pad1394[0xc]; // 0x1394
public:
	float m_fNextThinkPushAway; // 0x13a0	
	bool m_bShouldAutobuyDMWeapons; // 0x13a4	
	bool m_bShouldAutobuyNow; // 0x13a5	
private:
	[[maybe_unused]] uint8_t __pad13a6[0x2]; // 0x13a6
public:
	CEntityIndex m_iIDEntIndex; // 0x13a8	
private:
	[[maybe_unused]] uint8_t __pad13ac[0x4]; // 0x13ac
public:
	CountdownTimer m_delayTargetIDTimer; // 0x13b0	
	CEntityIndex m_iTargetItemEntIdx; // 0x13c8	
	CEntityIndex m_iOldIDEntIndex; // 0x13cc	
	CountdownTimer m_holdTargetIDTimer; // 0x13d0	
private:
	[[maybe_unused]] uint8_t __pad13e8[0x4]; // 0x13e8
public:
	float m_flCurrentMusicStartTime; // 0x13ec	
	float m_flMusicRoundStartTime; // 0x13f0	
	bool m_bDeferStartMusicOnWarmup; // 0x13f4	
private:
	[[maybe_unused]] uint8_t __pad13f5[0x3]; // 0x13f5
public:
	// MNetworkEnable
	int32_t m_cycleLatch; // 0x13f8	
	float m_serverIntendedCycle; // 0x13fc	
	float m_flLastSmokeOverlayAlpha; // 0x1400	
	float m_flLastSmokeAge; // 0x1404	
	Vector m_vLastSmokeOverlayColor; // 0x1408	
	ParticleIndex_t m_nPlayerSmokedFx; // 0x1414	
	ParticleIndex_t m_nPlayerInfernoBodyFx; // 0x1418	
	ParticleIndex_t m_nPlayerInfernoFootFx; // 0x141c	
	float m_flNextMagDropTime; // 0x1420	
	int32_t m_nLastMagDropAttachmentIndex; // 0x1424	
	Vector m_vecLastAliveLocalVelocity; // 0x1428	
private:
	[[maybe_unused]] uint8_t __pad1434[0x1c]; // 0x1434
public:
	bool m_bGuardianShouldSprayCustomXMark; // 0x1450	
private:
	[[maybe_unused]] uint8_t __pad1451[0x7]; // 0x1451
public:
	// MNetworkEnable
	CHandle<CCSPlayerController> m_hOriginalController; // 0x1458	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d0
// Has VTable
class C_CSGO_TerroristWingmanIntroCamera : public C_CSGO_TeamPreviewCamera
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x228
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
	uint32_t m_iFOV; // 0x210	
	// MNetworkEnable
	uint32_t m_iFOVStart; // 0x214	
	// MNetworkEnable
	GameTime_t m_flFOVTime; // 0x218	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFOVRate; // 0x21c	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hZoomOwner; // 0x220	
	float m_flLastShotFOV; // 0x224	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1278
// Has VTable
class C_CSGO_TeamSelectCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1ab0
// Has VTable
class C_MolotovGrenade : public C_BaseCSGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1278
// Has VTable
class CCSGO_WingmanIntroCounterTerroristPosition : public CCSGO_WingmanIntroCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x80
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
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc8
// Has VTable
class C_FuncMover : public C_BaseToggle
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x590
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "Vector m_vBoxMins"
// MNetworkVarNames "Vector m_vBoxMaxs"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "float m_flStrength"
// MNetworkVarNames "int m_nFalloffShape"
// MNetworkVarNames "float m_flFalloffExponent"
// MNetworkVarNames "float m_flHeightFogDepth"
// MNetworkVarNames "float m_fHeightFogEdgeWidth"
// MNetworkVarNames "float m_fIndirectLightStrength"
// MNetworkVarNames "float m_fSunLightStrength"
// MNetworkVarNames "float m_fNoiseStrength"
// MNetworkVarNames "bool m_bOverrideIndirectLightStrength"
// MNetworkVarNames "bool m_bOverrideSunLightStrength"
// MNetworkVarNames "bool m_bOverrideNoiseStrength"
class C_EnvVolumetricFogVolume : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bActive; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x3]; // 0x549
public:
	// MNetworkEnable
	Vector m_vBoxMins; // 0x54c	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x558	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	// MNetworkEnable
	float m_flStrength; // 0x568	
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x56c	
	// MNetworkEnable
	float m_flFalloffExponent; // 0x570	
	// MNetworkEnable
	float m_flHeightFogDepth; // 0x574	
	// MNetworkEnable
	float m_fHeightFogEdgeWidth; // 0x578	
	// MNetworkEnable
	float m_fIndirectLightStrength; // 0x57c	
	// MNetworkEnable
	float m_fSunLightStrength; // 0x580	
	// MNetworkEnable
	float m_fNoiseStrength; // 0x584	
	// MNetworkEnable
	bool m_bOverrideIndirectLightStrength; // 0x588	
	// MNetworkEnable
	bool m_bOverrideSunLightStrength; // 0x589	
	// MNetworkEnable
	bool m_bOverrideNoiseStrength; // 0x58a	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc8
// Has VTable
class CWaterSplasher : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xfb0
// Has VTable
class C_EnvProjectedTexture : public C_ModelPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CCSObserver_ViewModelServices : public CPlayer_ViewModelServices
{
public:
	// No schema binary for binding
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

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponRevolver : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd8
// Has VTable
// 
// MNetworkVarNames "HMaterialStrong m_hSpriteMaterial"
// MNetworkVarNames "CHandle< CBaseEntity> m_hAttachedToEntity"
// MNetworkVarNames "AttachmentHandle_t m_nAttachment"
// MNetworkVarNames "float32 m_flSpriteFramerate"
// MNetworkVarNames "float32 m_flFrame"
// MNetworkVarNames "uint32 m_nBrightness"
// MNetworkVarNames "float32 m_flBrightnessDuration"
// MNetworkVarNames "float32 m_flSpriteScale"
// MNetworkVarNames "float32 m_flScaleDuration"
// MNetworkVarNames "bool m_bWorldSpaceScale"
// MNetworkVarNames "float32 m_flGlowProxySize"
// MNetworkVarNames "float32 m_flHDRColorScale"
class C_Sprite : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeIMaterial2> m_hSpriteMaterial; // 0xcc8	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hAttachedToEntity; // 0xcd0	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachment; // 0xcd4	
private:
	[[maybe_unused]] uint8_t __pad0cd5[0x3]; // 0xcd5
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "60.000000"
	// MNetworkEncodeFlags "2"
	float m_flSpriteFramerate; // 0xcd8	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flFrame; // 0xcdc	
	GameTime_t m_flDieTime; // 0xce0	
private:
	[[maybe_unused]] uint8_t __pad0ce4[0xc]; // 0xce4
public:
	// MNetworkEnable
	uint32_t m_nBrightness; // 0xcf0	
	// MNetworkEnable
	float m_flBrightnessDuration; // 0xcf4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; // 0xcf8	
	// MNetworkEnable
	float m_flScaleDuration; // 0xcfc	
	// MNetworkEnable
	bool m_bWorldSpaceScale; // 0xd00	
private:
	[[maybe_unused]] uint8_t __pad0d01[0x3]; // 0xd01
public:
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "2"
	float m_flGlowProxySize; // 0xd04	
	// MNetworkEnable
	float m_flHDRColorScale; // 0xd08	
	GameTime_t m_flLastTime; // 0xd0c	
	float m_flMaxFrame; // 0xd10	
	float m_flStartScale; // 0xd14	
	float m_flDestScale; // 0xd18	
	GameTime_t m_flScaleTimeStart; // 0xd1c	
	int32_t m_nStartBrightness; // 0xd20	
	int32_t m_nDestBrightness; // 0xd24	
	GameTime_t m_flBrightnessTimeStart; // 0xd28	
private:
	[[maybe_unused]] uint8_t __pad0d2c[0x4]; // 0xd2c
public:
	CWeakHandle<InfoForResourceTypeIMaterial2> m_hOldSpriteMaterial; // 0xd30	
private:
	[[maybe_unused]] uint8_t __pad0d38[0x98]; // 0xd38
public:
	int32_t m_nSpriteWidth; // 0xdd0	
	int32_t m_nSpriteHeight; // 0xdd4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1650
// Has VTable
// 
// MNetworkVarNames "Color m_Entity_Color"
// MNetworkVarNames "float m_Entity_flBrightness"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hCubemapTexture"
// MNetworkVarNames "bool m_Entity_bCustomCubemapTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightIndicesTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightScalarsTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightShadowsTexture"
// MNetworkVarNames "Vector m_Entity_vBoxMins"
// MNetworkVarNames "Vector m_Entity_vBoxMaxs"
// MNetworkVarNames "bool m_Entity_bMoveable"
// MNetworkVarNames "int m_Entity_nHandshake"
// MNetworkVarNames "int m_Entity_nEnvCubeMapArrayIndex"
// MNetworkVarNames "int m_Entity_nPriority"
// MNetworkVarNames "bool m_Entity_bStartDisabled"
// MNetworkVarNames "float m_Entity_flEdgeFadeDist"
// MNetworkVarNames "Vector m_Entity_vEdgeFadeDists"
// MNetworkVarNames "int m_Entity_nLightProbeSizeX"
// MNetworkVarNames "int m_Entity_nLightProbeSizeY"
// MNetworkVarNames "int m_Entity_nLightProbeSizeZ"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasX"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasY"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasZ"
// MNetworkVarNames "bool m_Entity_bEnabled"
class C_EnvCombinedLightProbeVolume : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x1060]; // 0x548
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	Color m_Entity_Color; // 0x15a8	
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	float m_Entity_flBrightness; // 0x15ac	
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture; // 0x15b0	
	// MNetworkEnable
	bool m_Entity_bCustomCubemapTexture; // 0x15b8	
private:
	[[maybe_unused]] uint8_t __pad15b9[0x7]; // 0x15b9
public:
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture; // 0x15c0	
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightIndicesTexture; // 0x15c8	
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightScalarsTexture; // 0x15d0	
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightShadowsTexture; // 0x15d8	
	// MNetworkEnable
	Vector m_Entity_vBoxMins; // 0x15e0	
	// MNetworkEnable
	Vector m_Entity_vBoxMaxs; // 0x15ec	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x15f8	
private:
	[[maybe_unused]] uint8_t __pad15f9[0x3]; // 0x15f9
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x15fc	
	// MNetworkEnable
	int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x1600	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x1604	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x1608	
private:
	[[maybe_unused]] uint8_t __pad1609[0x3]; // 0x1609
public:
	// MNetworkEnable
	float m_Entity_flEdgeFadeDist; // 0x160c	
	// MNetworkEnable
	Vector m_Entity_vEdgeFadeDists; // 0x1610	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeX; // 0x161c	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeY; // 0x1620	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeZ; // 0x1624	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasX; // 0x1628	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasY; // 0x162c	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasZ; // 0x1630	
private:
	[[maybe_unused]] uint8_t __pad1634[0x15]; // 0x1634
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x1649	
	
	// Datamap fields:
	// void m_Entity_pEnvMap; // 0x1638
	// void m_Entity_pLightProbeVolume; // 0x1640
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x568
// Has VTable
class C_SoundOpvarSetOBBWindEntity : public C_SoundOpvarSetPointBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x68
// 
// MNetworkVarNames "ModelConfigHandle_t m_Handle"
// MNetworkVarNames "string_t m_Name"
// MNetworkVarNames "CHandle< C_BaseModelEntity > m_AssociatedEntities"
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
	C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>> m_AssociatedEntities; // 0x38	
	// MNetworkEnable
	C_NetworkUtlVectorBase<CUtlSymbolLarge> m_AssociatedEntityNames; // 0x50	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponMP5SD : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1040
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
// MNetworkVarNames "bool m_noGhostCollision"
class C_BreakableProp : public CBaseProp
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	// -> m_flDmgModBullet - 0xf20
	// -> m_flDmgModClub - 0xf24
	// -> m_flDmgModExplosive - 0xf28
	// -> m_flDmgModFire - 0xf2c
	// -> m_iszPhysicsDamageTableName - 0xf30
	// -> m_iszBasePropData - 0xf38
	// -> m_nInteractions - 0xf40
	// -> m_bSpawnMotionDisabled - 0xf44
	// -> m_nDisableTakePhysicsDamageSpawnFlag - 0xf48
	// -> m_nMotionDisabledSpawnFlag - 0xf4c
	CPropDataComponent m_CPropDataComponent; // 0xf10	
	CEntityIOOutput m_OnBreak; // 0xf50	
	CEntityOutputTemplate<float32> m_OnHealthChanged; // 0xf78	
	CEntityIOOutput m_OnTakeDamage; // 0xfa0	
	float m_impactEnergyScale; // 0xfc8	
	int32_t m_iMinHealthDmg; // 0xfcc	
	float m_flPressureDelay; // 0xfd0	
	float m_flDefBurstScale; // 0xfd4	
	Vector m_vDefBurstOffset; // 0xfd8	
	CHandle<C_BaseEntity> m_hBreaker; // 0xfe4	
	PerformanceMode_t m_PerformanceMode; // 0xfe8	
	GameTime_t m_flPreventDamageBeforeTime; // 0xfec	
	bool m_bHasBreakPiecesOrCommands; // 0xff0	
private:
	[[maybe_unused]] uint8_t __pad0ff1[0x3]; // 0xff1
public:
	float m_explodeDamage; // 0xff4	
	float m_explodeRadius; // 0xff8	
private:
	[[maybe_unused]] uint8_t __pad0ffc[0x4]; // 0xffc
public:
	float m_explosionDelay; // 0x1000	
private:
	[[maybe_unused]] uint8_t __pad1004[0x4]; // 0x1004
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0x1008	
	CUtlSymbolLarge m_explosionCustomEffect; // 0x1010	
	CUtlSymbolLarge m_explosionCustomSound; // 0x1018	
	CUtlSymbolLarge m_explosionModifier; // 0x1020	
	CHandle<C_BasePlayerPawn> m_hPhysicsAttacker; // 0x1028	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0x102c	
	float m_flDefaultFadeScale; // 0x1030	
	CHandle<C_BaseEntity> m_hLastAttacker; // 0x1034	
	CHandle<C_BaseEntity> m_hFlareEnt; // 0x1038	
	// MNetworkEnable
	bool m_noGhostCollision; // 0x103c	
	
	// Datamap fields:
	// void InputBreak; // 0x0
	// int32_t InputSetHealth; // 0x0
	// int32_t InputAddHealth; // 0x0
	// int32_t InputRemoveHealth; // 0x0
	// void C_BreakablePropBreakThink; // 0x0
	// void C_BreakablePropRampToDefaultFadeScale; // 0x0
	// uint32_t m_nExplosionType; // 0xffc
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MNetworkVarNames "int32 m_totalHitsOnServer"
class CCSPlayer_BulletServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	int32_t m_totalHitsOnServer; // 0x40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5a0
// Has VTable
class CLogicRelay : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x548	
	CEntityIOOutput m_OnSpawn; // 0x570	
	bool m_bDisabled; // 0x598	
	bool m_bWaitForRefire; // 0x599	
	bool m_bTriggerOnce; // 0x59a	
	bool m_bFastRetrigger; // 0x59b	
	bool m_bPassthoughCaller; // 0x59c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputEnableRefire; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTrigger; // 0x0
	// void InputCancelPending; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5a8
// Has VTable
// 
// MNetworkVarNames "float m_FOV"
// MNetworkVarNames "float m_Resolution"
// MNetworkVarNames "bool m_bFogEnable"
// MNetworkVarNames "Color m_FogColor"
// MNetworkVarNames "float m_flFogStart"
// MNetworkVarNames "float m_flFogEnd"
// MNetworkVarNames "float m_flFogMaxDensity"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bUseScreenAspectRatio"
// MNetworkVarNames "float m_flAspectRatio"
// MNetworkVarNames "bool m_bNoSky"
// MNetworkVarNames "float m_fBrightness"
// MNetworkVarNames "float m_flZFar"
// MNetworkVarNames "float m_flZNear"
// MNetworkVarNames "bool m_bCanHLTVUse"
// MNetworkVarNames "bool m_bDofEnabled"
// MNetworkVarNames "float m_flDofNearBlurry"
// MNetworkVarNames "float m_flDofNearCrisp"
// MNetworkVarNames "float m_flDofFarCrisp"
// MNetworkVarNames "float m_flDofFarBlurry"
// MNetworkVarNames "float m_flDofTiltToGround"
class C_PointCamera : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_FOV; // 0x548	
	// MNetworkEnable
	float m_Resolution; // 0x54c	
	// MNetworkEnable
	bool m_bFogEnable; // 0x550	
	// MNetworkEnable
	Color m_FogColor; // 0x551	
private:
	[[maybe_unused]] uint8_t __pad0555[0x3]; // 0x555
public:
	// MNetworkEnable
	float m_flFogStart; // 0x558	
	// MNetworkEnable
	float m_flFogEnd; // 0x55c	
	// MNetworkEnable
	float m_flFogMaxDensity; // 0x560	
	// MNetworkEnable
	bool m_bActive; // 0x564	
	// MNetworkEnable
	bool m_bUseScreenAspectRatio; // 0x565	
private:
	[[maybe_unused]] uint8_t __pad0566[0x2]; // 0x566
public:
	// MNetworkEnable
	float m_flAspectRatio; // 0x568	
	// MNetworkEnable
	bool m_bNoSky; // 0x56c	
private:
	[[maybe_unused]] uint8_t __pad056d[0x3]; // 0x56d
public:
	// MNetworkEnable
	float m_fBrightness; // 0x570	
	// MNetworkEnable
	float m_flZFar; // 0x574	
	// MNetworkEnable
	float m_flZNear; // 0x578	
	// MNetworkEnable
	bool m_bCanHLTVUse; // 0x57c	
	// MNetworkEnable
	bool m_bDofEnabled; // 0x57d	
private:
	[[maybe_unused]] uint8_t __pad057e[0x2]; // 0x57e
public:
	// MNetworkEnable
	float m_flDofNearBlurry; // 0x580	
	// MNetworkEnable
	float m_flDofNearCrisp; // 0x584	
	// MNetworkEnable
	float m_flDofFarCrisp; // 0x588	
	// MNetworkEnable
	float m_flDofFarBlurry; // 0x58c	
	// MNetworkEnable
	float m_flDofTiltToGround; // 0x590	
	float m_TargetFOV; // 0x594	
	float m_DegreesPerSecond; // 0x598	
	bool m_bIsOn; // 0x59c	
private:
	[[maybe_unused]] uint8_t __pad059d[0x3]; // 0x59d
public:
	C_PointCamera* m_pNext; // 0x5a0	
	
	// Datamap fields:
	// CUtlSymbolLarge InputChangeFOV; // 0x0
	// void InputSetOnAndTurnOthersOff; // 0x0
	// void InputSetOn; // 0x0
	// void InputSetOff; // 0x0
	// void InputForceActive; // 0x0
	// void InputForceInactive; // 0x0
	// void InputEnableDOF; // 0x0
	// void InputDisableDOF; // 0x0
	// float InputSetDOFNearBlurry; // 0x0
	// float InputSetDOFNearCrisp; // 0x0
	// float InputSetDOFFarCrisp; // 0x0
	// float InputSetDOFFarBlurry; // 0x0
	// float InputSetDOFTiltToGround; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_ItemServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf10
// Has VTable
// 
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "int m_nColorMode"
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "float m_flColorTemperature"
// MNetworkVarNames "float m_flBrightness"
// MNetworkVarNames "float m_flBrightnessScale"
// MNetworkVarNames "int m_nDirectLight"
// MNetworkVarNames "int m_nBakedShadowIndex"
// MNetworkVarNames "int m_nLuminaireShape"
// MNetworkVarNames "float m_flLuminaireSize"
// MNetworkVarNames "float m_flLuminaireAnisotropy"
// MNetworkVarNames "CUtlString m_LightStyleString"
// MNetworkVarNames "GameTime_t m_flLightStyleStartTime"
// MNetworkVarNames "CUtlString m_QueuedLightStyleStrings"
// MNetworkVarNames "CUtlString m_LightStyleEvents"
// MNetworkVarNames "CHandle< C_BaseModelEntity > m_LightStyleTargets"
// MNetworkVarNames "HRenderTextureStrong m_hLightCookie"
// MNetworkVarNames "float m_flShape"
// MNetworkVarNames "float m_flSoftX"
// MNetworkVarNames "float m_flSoftY"
// MNetworkVarNames "float m_flSkirt"
// MNetworkVarNames "float m_flSkirtNear"
// MNetworkVarNames "Vector m_vSizeParams"
// MNetworkVarNames "float m_flRange"
// MNetworkVarNames "Vector m_vShear"
// MNetworkVarNames "int m_nBakeSpecularToCubemaps"
// MNetworkVarNames "Vector m_vBakeSpecularToCubemapsSize"
// MNetworkVarNames "int m_nCastShadows"
// MNetworkVarNames "int m_nShadowMapSize"
// MNetworkVarNames "int m_nShadowPriority"
// MNetworkVarNames "bool m_bContactShadow"
// MNetworkVarNames "int m_nBounceLight"
// MNetworkVarNames "float m_flBounceScale"
// MNetworkVarNames "float m_flMinRoughness"
// MNetworkVarNames "Vector m_vAlternateColor"
// MNetworkVarNames "float m_fAlternateColorBrightness"
// MNetworkVarNames "int m_nFog"
// MNetworkVarNames "float m_flFogStrength"
// MNetworkVarNames "int m_nFogShadows"
// MNetworkVarNames "float m_flFogScale"
// MNetworkVarNames "float m_flFadeSizeStart"
// MNetworkVarNames "float m_flFadeSizeEnd"
// MNetworkVarNames "float m_flShadowFadeSizeStart"
// MNetworkVarNames "float m_flShadowFadeSizeEnd"
// MNetworkVarNames "bool m_bPrecomputedFieldsValid"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMins"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMaxs"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent"
class C_BarnLight : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bEnabled; // 0xcc8	
private:
	[[maybe_unused]] uint8_t __pad0cc9[0x3]; // 0xcc9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nColorMode; // 0xccc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Color m_Color; // 0xcd0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flColorTemperature; // 0xcd4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightness; // 0xcd8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightnessScale; // 0xcdc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nDirectLight; // 0xce0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nBakedShadowIndex; // 0xce4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nLuminaireShape; // 0xce8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireSize; // 0xcec	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireAnisotropy; // 0xcf0	
private:
	[[maybe_unused]] uint8_t __pad0cf4[0x4]; // 0xcf4
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StyleChanged"
	CUtlString m_LightStyleString; // 0xcf8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	GameTime_t m_flLightStyleStartTime; // 0xd00	
private:
	[[maybe_unused]] uint8_t __pad0d04[0x4]; // 0xd04
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase<CUtlString> m_QueuedLightStyleStrings; // 0xd08	
	// MNetworkEnable
	C_NetworkUtlVectorBase<CUtlString> m_LightStyleEvents; // 0xd20	
	// MNetworkEnable
	C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>> m_LightStyleTargets; // 0xd38	
	CEntityIOOutput m_StyleEvent[4]; // 0xd50	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	CStrongHandle<InfoForResourceTypeCTextureBase> m_hLightCookie; // 0xdf0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShape; // 0xdf8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftX; // 0xdfc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftY; // 0xe00	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirt; // 0xe04	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirtNear; // 0xe08	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vSizeParams; // 0xe0c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	float m_flRange; // 0xe18	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vShear; // 0xe1c	
	// MNetworkEnable
	int32_t m_nBakeSpecularToCubemaps; // 0xe28	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vBakeSpecularToCubemapsSize; // 0xe2c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nCastShadows; // 0xe38	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowMapSize; // 0xe3c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowPriority; // 0xe40	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bContactShadow; // 0xe44	
private:
	[[maybe_unused]] uint8_t __pad0e45[0x3]; // 0xe45
public:
	// MNetworkEnable
	int32_t m_nBounceLight; // 0xe48	
	// MNetworkEnable
	float m_flBounceScale; // 0xe4c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flMinRoughness; // 0xe50	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vAlternateColor; // 0xe54	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_fAlternateColorBrightness; // 0xe60	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFog; // 0xe64	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogStrength; // 0xe68	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFogShadows; // 0xe6c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogScale; // 0xe70	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeStart; // 0xe74	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeEnd; // 0xe78	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeStart; // 0xe7c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeEnd; // 0xe80	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bPrecomputedFieldsValid; // 0xe84	
private:
	[[maybe_unused]] uint8_t __pad0e85[0x3]; // 0xe85
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMins; // 0xe88	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMaxs; // 0xe94	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin; // 0xea0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles; // 0xeac	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent; // 0xeb8	
	
	// Datamap fields:
	// void m_StyleEvent[0]; // 0xd50
	// void m_StyleEvent[1]; // 0xd78
	// void m_StyleEvent[2]; // 0xda0
	// void m_StyleEvent[3]; // 0xdc8
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x570
// Has VTable
class C_TonemapController2Alias_env_tonemap_controller2 : public C_TonemapController2
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponG3SG1 : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xce8
// Has VTable
class CFuncWater : public C_BaseModelEntity
{
public:
	CBuoyancyHelper m_BuoyancyHelper; // 0xcc8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x568
// Has VTable
class C_SoundOpvarSetAutoRoomEntity : public C_SoundOpvarSetPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponMP7 : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponSG556 : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf18
// Has VTable
// 
// MNetworkVarNames "bool m_bShowLight"
class C_RectLight : public C_BarnLight
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0xf10	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1278
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
// MNetworkIncludeByName "m_hOwnerEntity"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
// MNetworkIncludeByName "m_nameStringableIndex"
// MNetworkVarNames "char m_szSnapshotFileName"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bFrozen"
// MNetworkVarNames "float m_flFreezeTransitionDuration"
// MNetworkVarNames "int m_nStopType"
// MNetworkVarNames "bool m_bAnimateDuringGameplayPause"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "float32 m_flPreSimTime"
// MNetworkVarNames "Vector m_vServerControlPoints"
// MNetworkVarNames "uint8 m_iServerControlPointAssignments"
// MNetworkVarNames "CHandle< CBaseEntity > m_hControlPointEnts"
// MNetworkVarNames "bool m_bNoSave"
// MNetworkVarNames "bool m_bNoFreeze"
// MNetworkVarNames "bool m_bNoRamp"
class C_ParticleSystem : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	char m_szSnapshotFileName[512]; // 0xcc8	
	// MNetworkEnable
	bool m_bActive; // 0xec8	
	// MNetworkEnable
	bool m_bFrozen; // 0xec9	
private:
	[[maybe_unused]] uint8_t __pad0eca[0x2]; // 0xeca
public:
	// MNetworkEnable
	float m_flFreezeTransitionDuration; // 0xecc	
	// MNetworkEnable
	int32_t m_nStopType; // 0xed0	
	// MNetworkEnable
	bool m_bAnimateDuringGameplayPause; // 0xed4	
private:
	[[maybe_unused]] uint8_t __pad0ed5[0x3]; // 0xed5
public:
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex; // 0xed8	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xee0	
	// MNetworkEnable
	float m_flPreSimTime; // 0xee4	
	// MNetworkEnable
	Vector m_vServerControlPoints[4]; // 0xee8	
	// MNetworkEnable
	uint8_t m_iServerControlPointAssignments[4]; // 0xf18	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hControlPointEnts[64]; // 0xf1c	
	// MNetworkEnable
	bool m_bNoSave; // 0x101c	
	// MNetworkEnable
	bool m_bNoFreeze; // 0x101d	
	// MNetworkEnable
	bool m_bNoRamp; // 0x101e	
	bool m_bStartActive; // 0x101f	
	CUtlSymbolLarge m_iszEffectName; // 0x1020	
	CUtlSymbolLarge m_iszControlPointNames[64]; // 0x1028	
	int32_t m_nDataCP; // 0x1228	
	Vector m_vecDataCPValue; // 0x122c	
	int32_t m_nTintCP; // 0x1238	
	Color m_clrTint; // 0x123c	
private:
	[[maybe_unused]] uint8_t __pad1240[0x20]; // 0x1240
public:
	bool m_bOldActive; // 0x1260	
	bool m_bOldFrozen; // 0x1261	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputStopEndCap; // 0x0
	// void InputDestroy; // 0x0
	// CUtlSymbolLarge InputSetControlPoint; // 0x0
	// void C_ParticleSystemStartParticleSystemThink; // 0x0
	// CUtlString cpoint%d_value[64]; // 0x7fffffff
	// void m_pEffect; // 0x1240
	// void m_iOldEffectIndex; // 0x1268
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2358
// Has VTable
// 
// MNetworkVarNames "CCSPlayer_BulletServices * m_pBulletServices"
// MNetworkVarNames "CCSPlayer_HostageServices * m_pHostageServices"
// MNetworkVarNames "CCSPlayer_BuyServices * m_pBuyServices"
// MNetworkVarNames "CCSPlayer_GlowServices * m_pGlowServices"
// MNetworkVarNames "CCSPlayer_ActionTrackingServices * m_pActionTrackingServices"
// MNetworkVarTypeOverride "CCSPlayer_UseServices m_pUseServices"
// MNetworkIncludeByName "m_pUseServices"
// MNetworkVarTypeOverride "CCSPlayer_ItemServices m_pItemServices"
// MNetworkIncludeByName "m_pItemServices"
// MNetworkVarTypeOverride "CCSPlayer_MovementServices m_pMovementServices"
// MNetworkIncludeByName "m_pMovementServices"
// MNetworkVarTypeOverride "CCSPlayer_WaterServices m_pWaterServices"
// MNetworkIncludeByName "m_pWaterServices"
// MNetworkVarTypeOverride "CCSPlayer_ViewModelServices m_pViewModelServices"
// MNetworkIncludeByName "m_pViewModelServices"
// MNetworkVarTypeOverride "CCSPlayer_CameraServices m_pCameraServices"
// MNetworkIncludeByName "m_pCameraServices"
// MNetworkVarTypeOverride "CCSPlayer_WeaponServices m_pWeaponServices"
// MNetworkIncludeByName "m_pWeaponServices"
// MNetworkIncludeByName "m_ArmorValue"
// MNetworkVarNames "GameTime_t m_flHealthShotBoostExpirationTime"
// MNetworkVarNames "bool m_bHasFemaleVoice"
// MNetworkVarNames "char m_szLastPlaceName"
// MNetworkVarNames "bool m_bInBuyZone"
// MNetworkVarNames "QAngle m_aimPunchAngle"
// MNetworkVarNames "QAngle m_aimPunchAngleVel"
// MNetworkVarNames "int m_aimPunchTickBase"
// MNetworkVarNames "float m_aimPunchTickFraction"
// MNetworkVarNames "bool m_bInHostageRescueZone"
// MNetworkVarNames "bool m_bInBombZone"
// MNetworkVarNames "bool m_bIsBuyMenuOpen"
// MNetworkVarNames "GameTime_t m_flTimeOfLastInjury"
// MNetworkVarNames "GameTime_t m_flNextSprayDecalTime"
// MNetworkVarNames "int m_iRetakesOffering"
// MNetworkVarNames "int m_iRetakesOfferingCard"
// MNetworkVarNames "bool m_bRetakesHasDefuseKit"
// MNetworkVarNames "bool m_bRetakesMVPLastRound"
// MNetworkVarNames "int m_iRetakesMVPBoostItem"
// MNetworkVarNames "loadout_slot_t m_RetakesMVPBoostExtraUtility"
// MNetworkVarNames "CEconItemView m_EconGloves"
// MNetworkVarNames "uint8 m_nEconGlovesChanged"
// MNetworkVarNames "int m_nRagdollDamageBone"
// MNetworkVarNames "Vector m_vRagdollDamageForce"
// MNetworkVarNames "Vector m_vRagdollDamagePosition"
// MNetworkVarNames "char m_szRagdollDamageWeaponName"
// MNetworkVarNames "bool m_bRagdollDamageHeadshot"
// MNetworkVarNames "Vector m_vRagdollServerOrigin"
// MNetworkReplayCompatField "m_bClientRagdoll"
// MNetworkVarNames "QAngle m_qDeathEyeAngles"
// MNetworkVarNames "bool m_bLeftHanded"
// MNetworkVarNames "GameTime_t m_fSwitchedHandednessTime"
// MNetworkVarNames "float m_flViewmodelOffsetX"
// MNetworkVarNames "float m_flViewmodelOffsetY"
// MNetworkVarNames "float m_flViewmodelOffsetZ"
// MNetworkVarNames "float m_flViewmodelFOV"
// MNetworkVarNames "uint32 m_vecPlayerPatchEconIndices"
// MNetworkVarNames "Color m_GunGameImmunityColor"
// MNetworkVarNames "bool m_bIsWalking"
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
// MNetworkVarNames "bool m_bIsScoped"
// MNetworkVarNames "bool m_bResumeZoom"
// MNetworkVarNames "bool m_bIsDefusing"
// MNetworkVarNames "bool m_bIsGrabbingHostage"
// MNetworkVarNames "CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress"
// MNetworkVarNames "GameTime_t m_flEmitSoundTime"
// MNetworkVarNames "bool m_bInNoDefuseArea"
// MNetworkVarNames "int m_nWhichBombZone"
// MNetworkVarNames "int m_iShotsFired"
// MNetworkVarNames "float m_flVelocityModifier"
// MNetworkVarNames "float m_flHitHeading"
// MNetworkVarNames "int m_nHitBodyPart"
// MNetworkVarNames "bool m_bWaitForNoAttack"
// MNetworkVarNames "bool m_bKilledByHeadshot"
// MNetworkVarNames "int32 m_ArmorValue"
// MNetworkVarNames "uint16 m_unCurrentEquipmentValue"
// MNetworkVarNames "uint16 m_unRoundStartEquipmentValue"
// MNetworkVarNames "uint16 m_unFreezetimeEndEquipmentValue"
// MNetworkVarNames "CEntityIndex m_nLastKillerIndex"
class C_CSPlayerPawn : public C_CSPlayerPawnBase
{
private:
	[[maybe_unused]] uint8_t __pad1460[0x8]; // 0x1460
public:
	// MNetworkEnable
	CCSPlayer_BulletServices* m_pBulletServices; // 0x1468	
	// MNetworkEnable
	CCSPlayer_HostageServices* m_pHostageServices; // 0x1470	
	// MNetworkEnable
	CCSPlayer_BuyServices* m_pBuyServices; // 0x1478	
	// MNetworkEnable
	CCSPlayer_GlowServices* m_pGlowServices; // 0x1480	
	// MNetworkEnable
	CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0x1488	
	// MNetworkEnable
	GameTime_t m_flHealthShotBoostExpirationTime; // 0x1490	
	GameTime_t m_flLastFiredWeaponTime; // 0x1494	
	// MNetworkEnable
	bool m_bHasFemaleVoice; // 0x1498	
private:
	[[maybe_unused]] uint8_t __pad1499[0x3]; // 0x1499
public:
	float m_flLandingTimeSeconds; // 0x149c	
	float m_flOldFallVelocity; // 0x14a0	
	// MNetworkEnable
	char m_szLastPlaceName[18]; // 0x14a4	
	bool m_bPrevDefuser; // 0x14b6	
	bool m_bPrevHelmet; // 0x14b7	
	int32_t m_nPrevArmorVal; // 0x14b8	
	int32_t m_nPrevGrenadeAmmoCount; // 0x14bc	
	uint32_t m_unPreviousWeaponHash; // 0x14c0	
	uint32_t m_unWeaponHash; // 0x14c4	
	// MNetworkEnable
	bool m_bInBuyZone; // 0x14c8	
	bool m_bPreviouslyInBuyZone; // 0x14c9	
private:
	[[maybe_unused]] uint8_t __pad14ca[0x2]; // 0x14ca
public:
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngle; // 0x14cc	
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngleVel; // 0x14d8	
	// MNetworkEnable
	int32_t m_aimPunchTickBase; // 0x14e4	
	// MNetworkEnable
	float m_aimPunchTickFraction; // 0x14e8	
private:
	[[maybe_unused]] uint8_t __pad14ec[0x4]; // 0x14ec
public:
	CUtlVector<QAngle> m_aimPunchCache; // 0x14f0	
private:
	[[maybe_unused]] uint8_t __pad1508[0x8]; // 0x1508
public:
	bool m_bInLanding; // 0x1510	
private:
	[[maybe_unused]] uint8_t __pad1511[0x3]; // 0x1511
public:
	float m_flLandingStartTime; // 0x1514	
	// MNetworkEnable
	bool m_bInHostageRescueZone; // 0x1518	
	// MNetworkEnable
	bool m_bInBombZone; // 0x1519	
	// MNetworkEnable
	bool m_bIsBuyMenuOpen; // 0x151a	
private:
	[[maybe_unused]] uint8_t __pad151b[0x1]; // 0x151b
public:
	// MNetworkEnable
	GameTime_t m_flTimeOfLastInjury; // 0x151c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextSprayDecalTime; // 0x1520	
private:
	[[maybe_unused]] uint8_t __pad1524[0x11c]; // 0x1524
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRetakesOfferingChanged"
	int32_t m_iRetakesOffering; // 0x1640	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRetakesOfferingCardChanged"
	int32_t m_iRetakesOfferingCard; // 0x1644	
	// MNetworkEnable
	bool m_bRetakesHasDefuseKit; // 0x1648	
	// MNetworkEnable
	bool m_bRetakesMVPLastRound; // 0x1649	
private:
	[[maybe_unused]] uint8_t __pad164a[0x2]; // 0x164a
public:
	// MNetworkEnable
	int32_t m_iRetakesMVPBoostItem; // 0x164c	
	// MNetworkEnable
	loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0x1650	
private:
	[[maybe_unused]] uint8_t __pad1654[0x1c]; // 0x1654
public:
	bool m_bNeedToReApplyGloves; // 0x1670	
private:
	[[maybe_unused]] uint8_t __pad1671[0x7]; // 0x1671
public:
	// MNetworkEnable
	C_EconItemView m_EconGloves; // 0x1678	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEconGlovesChanged"
	uint8_t m_nEconGlovesChanged; // 0x1ac0	
	bool m_bMustSyncRagdollState; // 0x1ac1	
private:
	[[maybe_unused]] uint8_t __pad1ac2[0x2]; // 0x1ac2
public:
	// MNetworkEnable
	int32_t m_nRagdollDamageBone; // 0x1ac4	
	// MNetworkEnable
	Vector m_vRagdollDamageForce; // 0x1ac8	
	// MNetworkEnable
	Vector m_vRagdollDamagePosition; // 0x1ad4	
	// MNetworkEnable
	char m_szRagdollDamageWeaponName[64]; // 0x1ae0	
	// MNetworkEnable
	bool m_bRagdollDamageHeadshot; // 0x1b20	
private:
	[[maybe_unused]] uint8_t __pad1b21[0x3]; // 0x1b21
public:
	// MNetworkEnable
	Vector m_vRagdollServerOrigin; // 0x1b24	
private:
	[[maybe_unused]] uint8_t __pad1b30[0x608]; // 0x1b30
public:
	bool m_bLastHeadBoneTransformIsValid; // 0x2138	
private:
	[[maybe_unused]] uint8_t __pad2139[0x3]; // 0x2139
public:
	GameTime_t m_lastLandTime; // 0x213c	
	bool m_bOnGroundLastTick; // 0x2140	
private:
	[[maybe_unused]] uint8_t __pad2141[0x1b]; // 0x2141
public:
	// MNetworkEnable
	QAngle m_qDeathEyeAngles; // 0x215c	
	bool m_bSkipOneHeadConstraintUpdate; // 0x2168	
	// MNetworkEnable
	bool m_bLeftHanded; // 0x2169	
private:
	[[maybe_unused]] uint8_t __pad216a[0x2]; // 0x216a
public:
	// MNetworkEnable
	GameTime_t m_fSwitchedHandednessTime; // 0x216c	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.500000"
	float m_flViewmodelOffsetX; // 0x2170	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.000000"
	float m_flViewmodelOffsetY; // 0x2174	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.000000"
	float m_flViewmodelOffsetZ; // 0x2178	
	// MNetworkEnable
	// MNetworkMinValue "60.000000"
	// MNetworkMaxValue "68.000000"
	float m_flViewmodelFOV; // 0x217c	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_PatchEconIndices"
	uint32_t m_vecPlayerPatchEconIndices[5]; // 0x2180	
private:
	[[maybe_unused]] uint8_t __pad2194[0x24]; // 0x2194
public:
	// MNetworkEnable
	Color m_GunGameImmunityColor; // 0x21b8	
private:
	[[maybe_unused]] uint8_t __pad21bc[0x4c]; // 0x21bc
public:
	CUtlVector<C_BulletHitModel*> m_vecBulletHitModels; // 0x2208	
	// MNetworkEnable
	bool m_bIsWalking; // 0x2220	
private:
	[[maybe_unused]] uint8_t __pad2221[0x7]; // 0x2221
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkChangeCallback "OnThirdPersonHeadingChanged"
	// MNetworkPriority "32"
	QAngle m_thirdPersonHeading; // 0x2228	
private:
	[[maybe_unused]] uint8_t __pad2234[0xc]; // 0x2234
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnSlopeDropOffsetChanged"
	// MNetworkPriority "32"
	float m_flSlopeDropOffset; // 0x2240	
private:
	[[maybe_unused]] uint8_t __pad2244[0xc]; // 0x2244
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnSlopeDropHeightChanged"
	// MNetworkPriority "32"
	float m_flSlopeDropHeight; // 0x2250	
private:
	[[maybe_unused]] uint8_t __pad2254[0xc]; // 0x2254
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnHeadConstraintChanged"
	// MNetworkPriority "32"
	Vector m_vHeadConstraintOffset; // 0x2260	
private:
	[[maybe_unused]] uint8_t __pad226c[0xc]; // 0x226c
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x2278	
	// MNetworkEnable
	bool m_bIsScoped; // 0x2290	
	// MNetworkEnable
	bool m_bResumeZoom; // 0x2291	
	// MNetworkEnable
	bool m_bIsDefusing; // 0x2292	
	// MNetworkEnable
	bool m_bIsGrabbingHostage; // 0x2293	
	// MNetworkEnable
	CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x2294	
	// MNetworkEnable
	GameTime_t m_flEmitSoundTime; // 0x2298	
	// MNetworkEnable
	bool m_bInNoDefuseArea; // 0x229c	
private:
	[[maybe_unused]] uint8_t __pad229d[0x3]; // 0x229d
public:
	// MNetworkEnable
	int32_t m_nWhichBombZone; // 0x22a0	
	// MNetworkEnable
	int32_t m_iShotsFired; // 0x22a4	
	// MNetworkEnable
	float m_flVelocityModifier; // 0x22a8	
	// MNetworkEnable
	float m_flHitHeading; // 0x22ac	
	// MNetworkEnable
	int32_t m_nHitBodyPart; // 0x22b0	
	// MNetworkEnable
	bool m_bWaitForNoAttack; // 0x22b4	
private:
	[[maybe_unused]] uint8_t __pad22b5[0x3]; // 0x22b5
public:
	float m_ignoreLadderJumpTime; // 0x22b8	
private:
	[[maybe_unused]] uint8_t __pad22bc[0x1]; // 0x22bc
public:
	// MNetworkEnable
	bool m_bKilledByHeadshot; // 0x22bd	
private:
	[[maybe_unused]] uint8_t __pad22be[0x2]; // 0x22be
public:
	// MNetworkEnable
	int32_t m_ArmorValue; // 0x22c0	
	// MNetworkEnable
	uint16_t m_unCurrentEquipmentValue; // 0x22c4	
	// MNetworkEnable
	uint16_t m_unRoundStartEquipmentValue; // 0x22c6	
	// MNetworkEnable
	uint16_t m_unFreezetimeEndEquipmentValue; // 0x22c8	
private:
	[[maybe_unused]] uint8_t __pad22ca[0x2]; // 0x22ca
public:
	// MNetworkEnable
	CEntityIndex m_nLastKillerIndex; // 0x22cc	
	bool m_bOldIsScoped; // 0x22d0	
	bool m_bHasDeathInfo; // 0x22d1	
private:
	[[maybe_unused]] uint8_t __pad22d2[0x2]; // 0x22d2
public:
	float m_flDeathInfoTime; // 0x22d4	
	Vector m_vecDeathInfoOrigin; // 0x22d8	
	GameTime_t m_grenadeParameterStashTime; // 0x22e4	
	bool m_bGrenadeParametersStashed; // 0x22e8	
private:
	[[maybe_unused]] uint8_t __pad22e9[0x3]; // 0x22e9
public:
	QAngle m_angStashedShootAngles; // 0x22ec	
	Vector m_vecStashedGrenadeThrowPosition; // 0x22f8	
	Vector m_vecStashedVelocity; // 0x2304	
	QAngle m_angShootAngleHistory[2]; // 0x2310	
	Vector m_vecThrowPositionHistory[2]; // 0x2328	
	Vector m_vecVelocityHistory[2]; // 0x2340	
	
	// Datamap fields:
	// CCSPlayer_ItemServices m_pItemServices; // 0x1100
	// CCSPlayer_UseServices m_pUseServices; // 0x1120
	// CCSPlayer_WaterServices m_pWaterServices; // 0x1118
	// CCSPlayer_MovementServices m_pMovementServices; // 0x1138
	// CCSPlayer_ViewModelServices m_pViewModelServices; // 0x12b8
	// CCSPlayer_WeaponServices m_pWeaponServices; // 0x10f8
	// CCSPlayer_CameraServices m_pCameraServices; // 0x1130
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponGlock : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
// 
// MNetworkVarNames "C_CSGameRules* m_pGameRules"
class C_CSGameRulesProxy : public C_GameRulesProxy
{
public:
	// MNetworkEnable
	// MNetworkTypeAlias "CCSGameRules*"
	// MNetworkPriority "32"
	C_CSGameRules* m_pGameRules; // 0x548	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x58
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
	CHandle<C_BaseEntity> m_hObserverTarget; // 0x44	
	ObserverMode_t m_iObserverLastMode; // 0x48	
	bool m_bForcedObserverMode; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad004d[0x3]; // 0x4d
public:
	float m_flObserverChaseDistance; // 0x50	
	GameTime_t m_flObserverChaseDistanceCalcTime; // 0x54	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class CWeaponZoneRepulsor : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x60
// Has VTable
class CCSPlayer_WaterServices : public CPlayer_WaterServices
{
public:
	float m_flWaterJumpTime; // 0x40	
	Vector m_vecWaterJumpVel; // 0x44	
	float m_flSwimSoundTime; // 0x50	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x548
// Has VTable
class C_CSGO_EndOfMatchLineupEndpoint : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xee0
// Has VTable
class C_Multimeter : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0ed0[0x8]; // 0xed0
public:
	CHandle<C_PlantedC4> m_hTargetC4; // 0xed8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
class C_CsmFovOverride : public C_BaseEntity
{
public:
	CUtlString m_cameraName; // 0x548	
	float m_flCsmFovOverrideValue; // 0x550	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd00
// Has VTable
// 
// MNetworkVarNames "HMaterialStrong m_hDecalMaterial"
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "float m_flHeight"
// MNetworkVarNames "float m_flDepth"
// MNetworkVarNames "uint32 m_nRenderOrder"
// MNetworkVarNames "bool m_bProjectOnWorld"
// MNetworkVarNames "bool m_bProjectOnCharacters"
// MNetworkVarNames "bool m_bProjectOnWater"
// MNetworkVarNames "float m_flDepthSortBias"
class C_EnvDecal : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeIMaterial2> m_hDecalMaterial; // 0xcc8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flWidth; // 0xcd0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flHeight; // 0xcd4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flDepth; // 0xcd8	
	// MNetworkEnable
	uint32_t m_nRenderOrder; // 0xcdc	
	// MNetworkEnable
	bool m_bProjectOnWorld; // 0xce0	
	// MNetworkEnable
	bool m_bProjectOnCharacters; // 0xce1	
	// MNetworkEnable
	bool m_bProjectOnWater; // 0xce2	
private:
	[[maybe_unused]] uint8_t __pad0ce3[0x1]; // 0xce3
public:
	// MNetworkEnable
	float m_flDepthSortBias; // 0xce4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x30
// Has VTable
class CCSGameModeRules_Noop : public CCSGameModeRules
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x790
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkVarNames "float32 m_MinFalloff"
// MNetworkVarNames "float32 m_MaxFalloff"
// MNetworkVarNames "float32 m_flFadeInDuration"
// MNetworkVarNames "float32 m_flFadeOutDuration"
// MNetworkVarNames "float32 m_flMaxWeight"
// MNetworkVarNames "float32 m_flCurWeight"
// MNetworkVarNames "char m_netlookupFilename"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bMaster"
// MNetworkVarNames "bool m_bClientSide"
// MNetworkVarNames "bool m_bExclusive"
class C_ColorCorrection : public C_BaseEntity
{
public:
	Vector m_vecOrigin; // 0x548	
	// MNetworkEnable
	float m_MinFalloff; // 0x554	
	// MNetworkEnable
	float m_MaxFalloff; // 0x558	
	// MNetworkEnable
	float m_flFadeInDuration; // 0x55c	
	// MNetworkEnable
	float m_flFadeOutDuration; // 0x560	
	// MNetworkEnable
	float m_flMaxWeight; // 0x564	
	// MNetworkEnable
	float m_flCurWeight; // 0x568	
	// MNetworkEnable
	char m_netlookupFilename[512]; // 0x56c	
	// MNetworkEnable
	bool m_bEnabled; // 0x76c	
	// MNetworkEnable
	bool m_bMaster; // 0x76d	
	// MNetworkEnable
	bool m_bClientSide; // 0x76e	
	// MNetworkEnable
	bool m_bExclusive; // 0x76f	
	bool m_bEnabledOnClient[1]; // 0x770	
private:
	[[maybe_unused]] uint8_t __pad0771[0x3]; // 0x771
public:
	float m_flCurWeightOnClient[1]; // 0x774	
	bool m_bFadingIn[1]; // 0x778	
private:
	[[maybe_unused]] uint8_t __pad0779[0x3]; // 0x779
public:
	float m_flFadeStartWeight[1]; // 0x77c	
	float m_flFadeStartTime[1]; // 0x780	
	float m_flFadeDuration[1]; // 0x784	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
class CHostageRescueZoneShim : public C_BaseTrigger
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x460
// Has VTable
class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance
{
public:
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fields[1]->m_instance);};
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponP250 : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4
// Has Trivial Constructor
// Has Trivial Destructor
struct C_EconEntity__AttachedModelData_t
{
public:
	int32_t m_iModelDisplayFlags; // 0x0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16b0
// Has VTable
class C_Item : public C_EconEntity
{
public:
	char m_pReticleHintTextName[256]; // 0x15b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x118
// Has VTable
// 
// MNetworkVarNames "int m_nMatchSeed"
// MNetworkVarNames "bool m_bBlockersPresent"
// MNetworkVarNames "bool m_bRoundInProgress"
// MNetworkVarNames "int m_iFirstSecondHalfRound"
// MNetworkVarNames "int m_iBombSite"
class C_RetakeGameRules
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xf8]; // 0x0
public:
	// MNetworkEnable
	int32_t m_nMatchSeed; // 0xf8	
	// MNetworkEnable
	bool m_bBlockersPresent; // 0xfc	
	// MNetworkEnable
	bool m_bRoundInProgress; // 0xfd	
private:
	[[maybe_unused]] uint8_t __pad00fe[0x2]; // 0xfe
public:
	// MNetworkEnable
	int32_t m_iFirstSecondHalfRound; // 0x100	
	// MNetworkEnable
	int32_t m_iBombSite; // 0x104	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d0
// Has VTable
class C_CSGO_CounterTerroristWingmanIntroCamera : public C_CSGO_TeamPreviewCamera
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a60
// Has VTable
class C_WeaponNOVA : public C_CSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1150
// Has VTable
class C_HEGrenadeProjectile : public C_BaseCSGrenadeProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
// 
// MNetworkVarNames "bool m_bIsUsable"
class C_BaseDoor : public C_BaseToggle
{
public:
	// MNetworkEnable
	bool m_bIsUsable; // 0xcc8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x11b0
// Has VTable
class CGrenadeTracer : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x20]; // 0xcc8
public:
	float m_flTracerDuration; // 0xce8	
	GrenadeType_t m_nType; // 0xcec	
	
	// Static fields:
	static int32_t &Get_s_nColorIdx(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CGrenadeTracer")->m_static_fields[0]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd8
// Has VTable
// 
// MNetworkVarNames "bool m_bBombPlantedHere"
class CBombTarget : public C_BaseTrigger
{
public:
	// MNetworkEnable
	bool m_bBombPlantedHere; // 0xcd0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd00
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActivator"
class C_PointClientUIDialog : public C_BaseClientUIEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnDialogActivatorChanged"
	CHandle<C_BaseEntity> m_hActivator; // 0xcf8	
	bool m_bStartEnabled; // 0xcfc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "CUtlString m_WeaponSequence"
class CCSGameModeRules_ArmsRace : public CCSGameModeRules
{
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase<CUtlString> m_WeaponSequence; // 0x30	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x70
// 
// MNetworkVarNames "CHandle< CCSPlayerPawn > m_PlayerDamager"
// MNetworkVarNames "CHandle< CCSPlayerPawn > m_PlayerRecipient"
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
	CHandle<C_CSPlayerPawn> m_PlayerDamager; // 0x28	
	// MNetworkEnable
	CHandle<C_CSPlayerPawn> m_PlayerRecipient; // 0x2c	
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
// Size: 0x548
// Has VTable
class C_InfoLadderDismount : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
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
	C_UtlVectorEmbeddedNetworkVar<CDamageRecord> m_DamageList; // 0x48	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
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
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x560
// Has VTable
// 
// MNetworkVarNames "Vector m_vMins"
// MNetworkVarNames "Vector m_vMaxs"
class C_SoundEventOBBEntity : public C_SoundEventEntity
{
public:
	// MNetworkEnable
	Vector m_vMins; // 0x548	
	// MNetworkEnable
	Vector m_vMaxs; // 0x554	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b0
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
	[[maybe_unused]] uint8_t __pad0008[0x30]; // 0x8
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0060[0x15]; // 0x60
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	Color m_Color; // 0x75	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	Color m_SecondaryColor; // 0x79	
private:
	[[maybe_unused]] uint8_t __pad007d[0x3]; // 0x7d
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightness; // 0x80	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightnessScale; // 0x84	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightnessMult; // 0x88	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flRange; // 0x8c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFalloff; // 0x90	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation0; // 0x94	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation1; // 0x98	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation2; // 0x9c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flTheta; // 0xa0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flPhi; // 0xa4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CStrongHandle<InfoForResourceTypeCTextureBase> m_hLightCookie; // 0xa8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCascades; // 0xb0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCastShadows; // 0xb4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowWidth; // 0xb8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowHeight; // 0xbc	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderDiffuse; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nRenderSpecular; // 0xc4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderTransmissive; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flOrthoLightWidth; // 0xcc	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flOrthoLightHeight; // 0xd0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nStyle; // 0xd4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CUtlString m_Pattern; // 0xd8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCascadeRenderStaticObjects; // 0xe0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeCrossFade; // 0xe4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistanceFade; // 0xe8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance0; // 0xec	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance1; // 0xf0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance2; // 0xf4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance3; // 0xf8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution0; // 0xfc	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution1; // 0x100	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution2; // 0x104	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution3; // 0x108	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	// MNetworkAlias "m_bUsesIndexedBakedLighting"
	bool m_bUsesBakedShadowing; // 0x10c	
private:
	[[maybe_unused]] uint8_t __pad010d[0x3]; // 0x10d
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowPriority; // 0x110	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nBakedShadowIndex; // 0x114	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderToCubemaps; // 0x118	
private:
	[[maybe_unused]] uint8_t __pad0119[0x3]; // 0x119
public:
	// MNetworkEnable
	int32_t m_nDirectLight; // 0x11c	
	// MNetworkEnable
	int32_t m_nIndirectLight; // 0x120	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMinDist; // 0x124	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMaxDist; // 0x128	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMinDist; // 0x12c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMaxDist; // 0x130	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bEnabled; // 0x134	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bFlicker; // 0x135	
	// MNetworkEnable
	bool m_bPrecomputedFieldsValid; // 0x136	
private:
	[[maybe_unused]] uint8_t __pad0137[0x1]; // 0x137
public:
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMins; // 0x138	
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMaxs; // 0x144	
	// MNetworkEnable
	Vector m_vPrecomputedOBBOrigin; // 0x150	
	// MNetworkEnable
	QAngle m_vPrecomputedOBBAngles; // 0x15c	
	// MNetworkEnable
	Vector m_vPrecomputedOBBExtent; // 0x168	
	// MNetworkEnable
	float m_flPrecomputedMaxRange; // 0x174	
	// MNetworkEnable
	int32_t m_nFogLightingMode; // 0x178	
	// MNetworkEnable
	float m_flFogContributionStength; // 0x17c	
	// MNetworkEnable
	float m_flNearClipPlane; // 0x180	
	// MNetworkEnable
	Color m_SkyColor; // 0x184	
	// MNetworkEnable
	float m_flSkyIntensity; // 0x188	
	// MNetworkEnable
	Color m_SkyAmbientBounce; // 0x18c	
	// MNetworkEnable
	bool m_bUseSecondaryColor; // 0x190	
	// MNetworkEnable
	// MNetworkChangeCallback "MixedShadowsChanged"
	bool m_bMixedShadows; // 0x191	
private:
	[[maybe_unused]] uint8_t __pad0192[0x2]; // 0x192
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	GameTime_t m_flLightStyleStartTime; // 0x194	
	// MNetworkEnable
	float m_flCapsuleLength; // 0x198	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flMinRoughness; // 0x19c	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CLightComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CLightComponent")->m_static_fields[1]->m_instance);};
	
	// Datamap fields:
	// SHIM m_bRenderSpecular; // 0xc4
	// SHIM m_bCastShadows; // 0xb4
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d0
// Has VTable
class C_CSGO_CounterTerroristTeamIntroCamera : public C_CSGO_TeamPreviewCamera
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b0
// Has VTable
// 
// MNetworkVarNames "CGameSceneNode m_sceneNode"
class CBodyComponentPoint : public CBodyComponent
{
public:
	// MNetworkEnable
	CGameSceneNode m_sceneNode; // 0x50	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x23f0
// Has VTable
class C_CSGO_PreviewPlayer : public C_CSPlayerPawn
{
public:
	CUtlString m_animgraph; // 0x2358	
	CGlobalSymbol m_animgraphCharacterModeString; // 0x2360	
	float m_flInitialModelScale; // 0x2368	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_Handle"
// MNetworkVarNames "bool m_bSendHandle"
class C_HandleTest : public C_BaseEntity
{
public:
	// MNetworkEnable
	CHandle<C_BaseEntity> m_Handle; // 0x548	
	// MNetworkEnable
	bool m_bSendHandle; // 0x54c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x750
// Has VTable
// 
// MNetworkVarNames "CEnvWindShared m_EnvWindShared"
class C_EnvWindClientside : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkDisable
	C_EnvWindShared m_EnvWindShared; // 0x548	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponMAC10 : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a90
// Has VTable
// 
// MNetworkVarNames "float m_flDisplayHealth"
class C_WeaponShield : public C_CSWeaponBaseGun
{
public:
	// MNetworkEnable
	float m_flDisplayHealth; // 0x1a80	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1130
// Has VTable
// 
// MNetworkVarNames "char m_messageText"
class C_PointClientUIWorldTextPanel : public C_PointClientUIWorldPanel
{
public:
	// MNetworkEnable
	char m_messageText[512]; // 0xf30	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CCSPlayer_UseServices : public CPlayer_UseServices
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4e0
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
	float m_flMaxFallVelocity; // 0x218	
	// MNetworkEnable
	// MNetworkEncoder "normal"
	Vector m_vecLadderNormal; // 0x21c	
	// MNetworkEnable
	int32_t m_nLadderSurfacePropIndex; // 0x228	
	// MNetworkEnable
	float m_flDuckAmount; // 0x22c	
	// MNetworkEnable
	float m_flDuckSpeed; // 0x230	
	// MNetworkEnable
	bool m_bDuckOverride; // 0x234	
	// MNetworkEnable
	bool m_bDesiresDuck; // 0x235	
private:
	[[maybe_unused]] uint8_t __pad0236[0x2]; // 0x236
public:
	float m_flDuckOffset; // 0x238	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	uint32_t m_nDuckTimeMsecs; // 0x23c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nDuckJumpTimeMsecs; // 0x240	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nJumpTimeMsecs; // 0x244	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flLastDuckTime; // 0x248	
private:
	[[maybe_unused]] uint8_t __pad024c[0xc]; // 0x24c
public:
	Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x258	
	bool m_duckUntilOnGround; // 0x260	
	bool m_bHasWalkMovedSinceLastJump; // 0x261	
	bool m_bInStuckTest; // 0x262	
private:
	[[maybe_unused]] uint8_t __pad0263[0xd]; // 0x263
public:
	float m_flStuckCheckTime[2][64]; // 0x270	
	int32_t m_nTraceCount; // 0x470	
	int32_t m_StuckLast; // 0x474	
	bool m_bSpeedCropped; // 0x478	
private:
	[[maybe_unused]] uint8_t __pad0479[0x3]; // 0x479
public:
	int32_t m_nOldWaterLevel; // 0x47c	
	float m_flWaterEntryTime; // 0x480	
	Vector m_vecForward; // 0x484	
	Vector m_vecLeft; // 0x490	
	Vector m_vecUp; // 0x49c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nGameCodeHasMovedPlayerAfterCommand; // 0x4a8	
	// MNetworkEnable
	bool m_bOldJumpPressed; // 0x4ac	
private:
	[[maybe_unused]] uint8_t __pad04ad[0x3]; // 0x4ad
public:
	float m_flJumpPressedTime; // 0x4b0	
	// MNetworkEnable
	float m_flJumpUntil; // 0x4b4	
	// MNetworkEnable
	float m_flJumpVel; // 0x4b8	
	// MNetworkEnable
	GameTime_t m_fStashGrenadeParameterWhen; // 0x4bc	
	// MNetworkEnable
	uint64_t m_nButtonDownMaskPrev; // 0x4c0	
	// MNetworkEnable
	float m_flOffsetTickCompleteTime; // 0x4c8	
	// MNetworkEnable
	float m_flOffsetTickStashedSpeed; // 0x4cc	
	// MNetworkEnable
	float m_flStamina; // 0x4d0	
	float m_flHeightAtJumpStart; // 0x4d4	
	float m_flMaxJumpHeightThisJump; // 0x4d8	
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "int m_iAccount"
// MNetworkVarNames "int m_iStartAccount"
// MNetworkVarNames "int m_iTotalCashSpent"
// MNetworkVarNames "int m_iCashSpentThisRound"
class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent
{
public:
	// MNetworkEnable
	int32_t m_iAccount; // 0x40	
	// MNetworkEnable
	int32_t m_iStartAccount; // 0x44	
	// MNetworkEnable
	int32_t m_iTotalCashSpent; // 0x48	
	// MNetworkEnable
	int32_t m_iCashSpentThisRound; // 0x4c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct C_EnvWindShared__WindVariationEvent_t
{
public:
	float m_flWindAngleVariation; // 0x0	
	float m_flWindSpeedVariation; // 0x4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponUSPSilencer : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd8
// Has VTable
class CSpriteOriented : public C_Sprite
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x548
// Has VTable
class C_CSGO_EndOfMatchLineupStart : public C_CSGO_EndOfMatchLineupEndpoint
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponFamas : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1290
// Has VTable
// 
// MNetworkVarNames "float32 m_flAlphaScale"
// MNetworkVarNames "float32 m_flRadiusScale"
// MNetworkVarNames "float32 m_flSelfIllumScale"
// MNetworkVarNames "Color m_ColorTint"
// MNetworkVarNames "HRenderTextureStrong m_hTextureOverride"
class C_EnvParticleGlow : public C_ParticleSystem
{
public:
	// MNetworkEnable
	float m_flAlphaScale; // 0x1278	
	// MNetworkEnable
	float m_flRadiusScale; // 0x127c	
	// MNetworkEnable
	float m_flSelfIllumScale; // 0x1280	
	// MNetworkEnable
	Color m_ColorTint; // 0x1284	
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeCTextureBase> m_hTextureOverride; // 0x1288	
	
	// Datamap fields:
	// float InputSetScale; // 0x0
	// float InputSetAlphaScale; // 0x0
	// Color InputSetColorTint; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x560
// Has VTable
// 
// MNetworkVarNames "SoundeventPathCornerPairNetworked_t m_vecCornerPairsNetworked"
class C_SoundEventPathCornerEntity : public C_SoundEventEntity
{
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t> m_vecCornerPairsNetworked; // 0x548	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1278
// Has VTable
class CCSGO_WingmanIntroTerroristPosition : public CCSGO_WingmanIntroCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1588
// Has VTable
class C_CSGO_PreviewModel : public C_BaseFlex
{
public:
	CUtlString m_animgraph; // 0x1068	
	CGlobalSymbol m_animgraphCharacterModeString; // 0x1070	
	CUtlString m_defaultAnim; // 0x1078	
	AnimLoopMode_t m_nDefaultAnimLoopMode; // 0x1080	
	float m_flInitialModelScale; // 0x1084	
	CUtlString m_sInitialWeaponState; // 0x1088	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd28
// Has VTable
// 
// MNetworkIncludeByName "m_clrRender"
// MNetworkExcludeByName "CGameSceneNode::m_vecOrigin"
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "Vector m_vDirection"
// MNetworkVarNames "string_t m_iszEffectName"
// MNetworkVarNames "string_t m_iszSSEffectName"
// MNetworkVarNames "Color m_clrOverlay"
// MNetworkVarNames "bool m_bOn"
// MNetworkVarNames "bool m_bmaxColor"
// MNetworkVarNames "float32 m_flSize"
// MNetworkVarNames "float32 m_flHazeScale"
// MNetworkVarNames "float32 m_flRotation"
// MNetworkVarNames "float32 m_flHDRColorScale"
// MNetworkVarNames "float32 m_flAlphaHaze"
// MNetworkVarNames "float32 m_flAlphaScale"
// MNetworkVarNames "float32 m_flAlphaHdr"
// MNetworkVarNames "float32 m_flFarZScale"
class C_Sun : public C_BaseModelEntity
{
public:
	ParticleIndex_t m_fxSSSunFlareEffectIndex; // 0xcc8	
	ParticleIndex_t m_fxSunFlareEffectIndex; // 0xccc	
	float m_fdistNormalize; // 0xcd0	
	Vector m_vSunPos; // 0xcd4	
	// MNetworkEnable
	Vector m_vDirection; // 0xce0	
private:
	[[maybe_unused]] uint8_t __pad0cec[0x4]; // 0xcec
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszEffectName; // 0xcf0	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSSEffectName; // 0xcf8	
	// MNetworkEnable
	Color m_clrOverlay; // 0xd00	
	// MNetworkEnable
	bool m_bOn; // 0xd04	
	// MNetworkEnable
	bool m_bmaxColor; // 0xd05	
private:
	[[maybe_unused]] uint8_t __pad0d06[0x2]; // 0xd06
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flSize; // 0xd08	
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flHazeScale; // 0xd0c	
	// MNetworkEnable
	// MNetworkMinValue "-360.000000"
	// MNetworkMaxValue "360.000000"
	float m_flRotation; // 0xd10	
	// MNetworkEnable
	// MNetworkChangeCallback "OnHDRScaleChanged"
	float m_flHDRColorScale; // 0xd14	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHaze; // 0xd18	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaScale; // 0xd1c	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHdr; // 0xd20	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_flFarZScale; // 0xd24	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x548
// Has VTable
class C_CSGO_EndOfMatchLineupEnd : public C_CSGO_EndOfMatchLineupEndpoint
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x120
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
	C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t> m_perRoundStats; // 0x40	
	// MNetworkEnable
	// -> m_iEnemy5Ks - 0xf8
	// -> m_iEnemy4Ks - 0xfc
	// -> m_iEnemy3Ks - 0x100
	// -> m_iEnemyKnifeKills - 0x104
	// -> m_iEnemyTaserKills - 0x108
	CSMatchStats_t m_matchStats; // 0x90	
	// MNetworkEnable
	int32_t m_iNumRoundKills; // 0x110	
	// MNetworkEnable
	int32_t m_iNumRoundKillsHeadshots; // 0x114	
	// MNetworkEnable
	uint32_t m_unTotalRoundDamageDealt; // 0x118	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xce0
// Has VTable
// 
// MNetworkVarNames "string_t m_source"
// MNetworkVarNames "string_t m_destination"
class C_FootstepControl : public C_BaseTrigger
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_source; // 0xcd0	
	// MNetworkEnable
	CUtlSymbolLarge m_destination; // 0xcd8	
	
	// Static fields:
	static CUtlVector< C_FootstepControl* > &Get_sm_footstepControllers(){return *reinterpret_cast<CUtlVector< C_FootstepControl* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_FootstepControl")->m_static_fields[0]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xef8
// Has VTable
// 
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "float m_MaxWeight"
// MNetworkVarNames "float m_FadeDuration"
// MNetworkVarNames "float m_Weight"
// MNetworkVarNames "char m_lookupFilename"
class C_ColorCorrectionVolume : public C_BaseTrigger
{
public:
	float m_LastEnterWeight; // 0xcd0	
	float m_LastEnterTime; // 0xcd4	
	float m_LastExitWeight; // 0xcd8	
	float m_LastExitTime; // 0xcdc	
	// MNetworkEnable
	bool m_bEnabled; // 0xce0	
private:
	[[maybe_unused]] uint8_t __pad0ce1[0x3]; // 0xce1
public:
	// MNetworkEnable
	float m_MaxWeight; // 0xce4	
	// MNetworkEnable
	float m_FadeDuration; // 0xce8	
	// MNetworkEnable
	float m_Weight; // 0xcec	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0xcf0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc8
// Has VTable
class C_PrecipitationBlocker : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf20
// Has VTable
class C_BulletHitModel : public CBaseAnimGraph
{
public:
	matrix3x4_t m_matLocal; // 0xed0	
	int32_t m_iBoneIndex; // 0xf00	
	CHandle<C_BaseEntity> m_hPlayerParent; // 0xf04	
	bool m_bIsHit; // 0xf08	
private:
	[[maybe_unused]] uint8_t __pad0f09[0x3]; // 0xf09
public:
	float m_flTimeCreated; // 0xf0c	
	Vector m_vecStartPos; // 0xf10	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe90
// Has VTable
// 
// MNetworkVarNames "int m_nDraftType"
// MNetworkVarNames "int m_nTeamWinningCoinToss"
// MNetworkVarNames "int m_nTeamWithFirstChoice"
// MNetworkVarNames "int m_nVoteMapIdsList"
// MNetworkVarNames "int m_nAccountIDs"
// MNetworkVarNames "int m_nMapId0"
// MNetworkVarNames "int m_nMapId1"
// MNetworkVarNames "int m_nMapId2"
// MNetworkVarNames "int m_nMapId3"
// MNetworkVarNames "int m_nMapId4"
// MNetworkVarNames "int m_nMapId5"
// MNetworkVarNames "int m_nStartingSide0"
// MNetworkVarNames "int m_nCurrentPhase"
// MNetworkVarNames "int m_nPhaseStartTick"
// MNetworkVarNames "int m_nPhaseDurationTicks"
class C_MapVetoPickController : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x10]; // 0x548
public:
	// MNetworkEnable
	int32_t m_nDraftType; // 0x558	
	// MNetworkEnable
	int32_t m_nTeamWinningCoinToss; // 0x55c	
	// MNetworkEnable
	int32_t m_nTeamWithFirstChoice[64]; // 0x560	
	// MNetworkEnable
	int32_t m_nVoteMapIdsList[7]; // 0x660	
	// MNetworkEnable
	int32_t m_nAccountIDs[64]; // 0x67c	
	// MNetworkEnable
	int32_t m_nMapId0[64]; // 0x77c	
	// MNetworkEnable
	int32_t m_nMapId1[64]; // 0x87c	
	// MNetworkEnable
	int32_t m_nMapId2[64]; // 0x97c	
	// MNetworkEnable
	int32_t m_nMapId3[64]; // 0xa7c	
	// MNetworkEnable
	int32_t m_nMapId4[64]; // 0xb7c	
	// MNetworkEnable
	int32_t m_nMapId5[64]; // 0xc7c	
	// MNetworkEnable
	int32_t m_nStartingSide0[64]; // 0xd7c	
	// MNetworkEnable
	int32_t m_nCurrentPhase; // 0xe7c	
	// MNetworkEnable
	int32_t m_nPhaseStartTick; // 0xe80	
	// MNetworkEnable
	int32_t m_nPhaseDurationTicks; // 0xe84	
	int32_t m_nPostDataUpdateTick; // 0xe88	
	bool m_bDisabledHud; // 0xe8c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has VTable
// Has Trivial Destructor
// 
// MGapTypeQueriesForScopeSingleton
class CSharedGapTypeQueryRegistration
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// Static fields:
	static CSharedGapTypeQueryRegistration &Get_s_Instance(){return *reinterpret_cast<CSharedGapTypeQueryRegistration*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CSharedGapTypeQueryRegistration")->m_static_fields[0]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf20
// Has VTable
// 
// MNetworkVarNames "float m_flInnerAngle"
// MNetworkVarNames "float m_flOuterAngle"
// MNetworkVarNames "bool m_bShowLight"
class C_OmniLight : public C_BarnLight
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flInnerAngle; // 0xf10	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flOuterAngle; // 0xf14	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0xf18	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x82d0
// Has VTable
class C_FireCrackerBlast : public C_Inferno
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponMP9 : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
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
	C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t> m_weaponPurchases; // 0x8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8ed8
// Has VTable
// 
// MNetworkVarNames "bool m_bFreezePeriod"
// MNetworkVarNames "bool m_bWarmupPeriod"
// MNetworkVarNames "GameTime_t m_fWarmupPeriodEnd"
// MNetworkVarNames "GameTime_t m_fWarmupPeriodStart"
// MNetworkVarNames "bool m_bServerPaused"
// MNetworkVarNames "bool m_bTerroristTimeOutActive"
// MNetworkVarNames "bool m_bCTTimeOutActive"
// MNetworkVarNames "float m_flTerroristTimeOutRemaining"
// MNetworkVarNames "float m_flCTTimeOutRemaining"
// MNetworkVarNames "int m_nTerroristTimeOuts"
// MNetworkVarNames "int m_nCTTimeOuts"
// MNetworkVarNames "bool m_bTechnicalTimeOut"
// MNetworkVarNames "bool m_bMatchWaitingForResume"
// MNetworkVarNames "int m_iRoundTime"
// MNetworkVarNames "float m_fMatchStartTime"
// MNetworkVarNames "GameTime_t m_fRoundStartTime"
// MNetworkVarNames "GameTime_t m_flRestartRoundTime"
// MNetworkVarNames "bool m_bGameRestart"
// MNetworkVarNames "float m_flGameStartTime"
// MNetworkVarNames "float m_timeUntilNextPhaseStarts"
// MNetworkVarNames "int m_gamePhase"
// MNetworkVarNames "int m_totalRoundsPlayed"
// MNetworkVarNames "int m_nRoundsPlayedThisPhase"
// MNetworkVarNames "int m_nOvertimePlaying"
// MNetworkVarNames "int m_iHostagesRemaining"
// MNetworkVarNames "bool m_bAnyHostageReached"
// MNetworkVarNames "bool m_bMapHasBombTarget"
// MNetworkVarNames "bool m_bMapHasRescueZone"
// MNetworkVarNames "bool m_bMapHasBuyZone"
// MNetworkVarNames "bool m_bIsQueuedMatchmaking"
// MNetworkVarNames "int m_nQueuedMatchmakingMode"
// MNetworkVarNames "bool m_bIsValveDS"
// MNetworkVarNames "bool m_bLogoMap"
// MNetworkVarNames "bool m_bPlayAllStepSoundsOnServer"
// MNetworkVarNames "int m_iSpectatorSlotCount"
// MNetworkVarNames "int m_MatchDevice"
// MNetworkVarNames "bool m_bHasMatchStarted"
// MNetworkVarNames "int m_nNextMapInMapgroup"
// MNetworkVarNames "char m_szTournamentEventName"
// MNetworkVarNames "char m_szTournamentEventStage"
// MNetworkVarNames "char m_szMatchStatTxt"
// MNetworkVarNames "char m_szTournamentPredictionsTxt"
// MNetworkVarNames "int m_nTournamentPredictionsPct"
// MNetworkVarNames "GameTime_t m_flCMMItemDropRevealStartTime"
// MNetworkVarNames "GameTime_t m_flCMMItemDropRevealEndTime"
// MNetworkVarNames "bool m_bIsDroppingItems"
// MNetworkVarNames "bool m_bIsQuestEligible"
// MNetworkVarNames "bool m_bIsHltvActive"
// MNetworkVarNames "uint16 m_arrProhibitedItemIndices"
// MNetworkVarNames "uint32 m_arrTournamentActiveCasterAccounts"
// MNetworkVarNames "int m_numBestOfMaps"
// MNetworkVarNames "int m_nHalloweenMaskListSeed"
// MNetworkVarNames "bool m_bBombDropped"
// MNetworkVarNames "bool m_bBombPlanted"
// MNetworkVarNames "int m_iRoundWinStatus"
// MNetworkVarNames "int m_eRoundWinReason"
// MNetworkVarNames "bool m_bTCantBuy"
// MNetworkVarNames "bool m_bCTCantBuy"
// MNetworkVarNames "int m_iMatchStats_RoundResults"
// MNetworkVarNames "int m_iMatchStats_PlayersAlive_CT"
// MNetworkVarNames "int m_iMatchStats_PlayersAlive_T"
// MNetworkVarNames "float m_TeamRespawnWaveTimes"
// MNetworkVarNames "GameTime_t m_flNextRespawnWave"
// MNetworkVarNames "int m_nServerQuestID"
// MNetworkVarNames "Vector m_vMinimapMins"
// MNetworkVarNames "Vector m_vMinimapMaxs"
// MNetworkVarNames "float m_MinimapVerticalSectionHeights"
// MNetworkVarNames "int m_nEndMatchMapGroupVoteTypes"
// MNetworkVarNames "int m_nEndMatchMapGroupVoteOptions"
// MNetworkVarNames "int m_nEndMatchMapVoteWinner"
// MNetworkVarNames "int m_iNumConsecutiveCTLoses"
// MNetworkVarNames "int m_iNumConsecutiveTerroristLoses"
// MNetworkVarNames "int m_nMatchAbortedEarlyReason"
// MNetworkVarNames "CCSGameModeRules * m_pGameModeRules"
// MNetworkVarNames "CRetakeGameRules m_RetakeRules"
// MNetworkVarNames "uint8 m_nMatchEndCount"
// MNetworkVarNames "int m_nTTeamIntroVariant"
// MNetworkVarNames "int m_nCTTeamIntroVariant"
// MNetworkVarNames "bool m_bTeamIntroPeriod"
// MNetworkVarNames "int m_iRoundEndWinnerTeam"
// MNetworkVarNames "int m_eRoundEndReason"
// MNetworkVarNames "bool m_bRoundEndShowTimerDefend"
// MNetworkVarNames "int m_iRoundEndTimerTime"
// MNetworkVarNames "CUtlString m_sRoundEndFunFactToken"
// MNetworkVarNames "CPlayerSlot m_iRoundEndFunFactPlayerSlot"
// MNetworkVarNames "int m_iRoundEndFunFactData1"
// MNetworkVarNames "int m_iRoundEndFunFactData2"
// MNetworkVarNames "int m_iRoundEndFunFactData3"
// MNetworkVarNames "CUtlString m_sRoundEndMessage"
// MNetworkVarNames "int m_iRoundEndPlayerCount"
// MNetworkVarNames "bool m_bRoundEndNoMusic"
// MNetworkVarNames "int m_iRoundEndLegacy"
// MNetworkVarNames "uint8 m_nRoundEndCount"
// MNetworkVarNames "int m_iRoundStartRoundNumber"
// MNetworkVarNames "uint8 m_nRoundStartCount"
class C_CSGameRules : public C_TeamplayRules
{
public:
	// MNetworkEnable
	bool m_bFreezePeriod; // 0x40	
	// MNetworkEnable
	bool m_bWarmupPeriod; // 0x41	
private:
	[[maybe_unused]] uint8_t __pad0042[0x2]; // 0x42
public:
	// MNetworkEnable
	GameTime_t m_fWarmupPeriodEnd; // 0x44	
	// MNetworkEnable
	GameTime_t m_fWarmupPeriodStart; // 0x48	
	// MNetworkEnable
	bool m_bServerPaused; // 0x4c	
	// MNetworkEnable
	bool m_bTerroristTimeOutActive; // 0x4d	
	// MNetworkEnable
	bool m_bCTTimeOutActive; // 0x4e	
private:
	[[maybe_unused]] uint8_t __pad004f[0x1]; // 0x4f
public:
	// MNetworkEnable
	float m_flTerroristTimeOutRemaining; // 0x50	
	// MNetworkEnable
	float m_flCTTimeOutRemaining; // 0x54	
	// MNetworkEnable
	int32_t m_nTerroristTimeOuts; // 0x58	
	// MNetworkEnable
	int32_t m_nCTTimeOuts; // 0x5c	
	// MNetworkEnable
	bool m_bTechnicalTimeOut; // 0x60	
	// MNetworkEnable
	bool m_bMatchWaitingForResume; // 0x61	
private:
	[[maybe_unused]] uint8_t __pad0062[0x2]; // 0x62
public:
	// MNetworkEnable
	int32_t m_iRoundTime; // 0x64	
	// MNetworkEnable
	float m_fMatchStartTime; // 0x68	
	// MNetworkEnable
	GameTime_t m_fRoundStartTime; // 0x6c	
	// MNetworkEnable
	GameTime_t m_flRestartRoundTime; // 0x70	
	// MNetworkEnable
	bool m_bGameRestart; // 0x74	
private:
	[[maybe_unused]] uint8_t __pad0075[0x3]; // 0x75
public:
	// MNetworkEnable
	float m_flGameStartTime; // 0x78	
	// MNetworkEnable
	float m_timeUntilNextPhaseStarts; // 0x7c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGamePhaseChanged"
	int32_t m_gamePhase; // 0x80	
	// MNetworkEnable
	int32_t m_totalRoundsPlayed; // 0x84	
	// MNetworkEnable
	int32_t m_nRoundsPlayedThisPhase; // 0x88	
	// MNetworkEnable
	int32_t m_nOvertimePlaying; // 0x8c	
	// MNetworkEnable
	int32_t m_iHostagesRemaining; // 0x90	
	// MNetworkEnable
	bool m_bAnyHostageReached; // 0x94	
	// MNetworkEnable
	bool m_bMapHasBombTarget; // 0x95	
	// MNetworkEnable
	bool m_bMapHasRescueZone; // 0x96	
	// MNetworkEnable
	bool m_bMapHasBuyZone; // 0x97	
	// MNetworkEnable
	bool m_bIsQueuedMatchmaking; // 0x98	
private:
	[[maybe_unused]] uint8_t __pad0099[0x3]; // 0x99
public:
	// MNetworkEnable
	int32_t m_nQueuedMatchmakingMode; // 0x9c	
	// MNetworkEnable
	bool m_bIsValveDS; // 0xa0	
	// MNetworkEnable
	bool m_bLogoMap; // 0xa1	
	// MNetworkEnable
	bool m_bPlayAllStepSoundsOnServer; // 0xa2	
private:
	[[maybe_unused]] uint8_t __pad00a3[0x1]; // 0xa3
public:
	// MNetworkEnable
	int32_t m_iSpectatorSlotCount; // 0xa4	
	// MNetworkEnable
	int32_t m_MatchDevice; // 0xa8	
	// MNetworkEnable
	bool m_bHasMatchStarted; // 0xac	
private:
	[[maybe_unused]] uint8_t __pad00ad[0x3]; // 0xad
public:
	// MNetworkEnable
	int32_t m_nNextMapInMapgroup; // 0xb0	
	// MNetworkEnable
	char m_szTournamentEventName[512]; // 0xb4	
	// MNetworkEnable
	char m_szTournamentEventStage[512]; // 0x2b4	
	// MNetworkEnable
	char m_szMatchStatTxt[512]; // 0x4b4	
	// MNetworkEnable
	char m_szTournamentPredictionsTxt[512]; // 0x6b4	
	// MNetworkEnable
	int32_t m_nTournamentPredictionsPct; // 0x8b4	
	// MNetworkEnable
	GameTime_t m_flCMMItemDropRevealStartTime; // 0x8b8	
	// MNetworkEnable
	GameTime_t m_flCMMItemDropRevealEndTime; // 0x8bc	
	// MNetworkEnable
	bool m_bIsDroppingItems; // 0x8c0	
	// MNetworkEnable
	bool m_bIsQuestEligible; // 0x8c1	
	// MNetworkEnable
	bool m_bIsHltvActive; // 0x8c2	
private:
	[[maybe_unused]] uint8_t __pad08c3[0x1]; // 0x8c3
public:
	// MNetworkEnable
	uint16_t m_arrProhibitedItemIndices[100]; // 0x8c4	
	// MNetworkEnable
	uint32_t m_arrTournamentActiveCasterAccounts[4]; // 0x98c	
	// MNetworkEnable
	int32_t m_numBestOfMaps; // 0x99c	
	// MNetworkEnable
	int32_t m_nHalloweenMaskListSeed; // 0x9a0	
	// MNetworkEnable
	bool m_bBombDropped; // 0x9a4	
	// MNetworkEnable
	bool m_bBombPlanted; // 0x9a5	
private:
	[[maybe_unused]] uint8_t __pad09a6[0x2]; // 0x9a6
public:
	// MNetworkEnable
	int32_t m_iRoundWinStatus; // 0x9a8	
	// MNetworkEnable
	int32_t m_eRoundWinReason; // 0x9ac	
	// MNetworkEnable
	bool m_bTCantBuy; // 0x9b0	
	// MNetworkEnable
	bool m_bCTCantBuy; // 0x9b1	
private:
	[[maybe_unused]] uint8_t __pad09b2[0x2]; // 0x9b2
public:
	// MNetworkEnable
	int32_t m_iMatchStats_RoundResults[30]; // 0x9b4	
	// MNetworkEnable
	int32_t m_iMatchStats_PlayersAlive_CT[30]; // 0xa2c	
	// MNetworkEnable
	int32_t m_iMatchStats_PlayersAlive_T[30]; // 0xaa4	
	// MNetworkEnable
	float m_TeamRespawnWaveTimes[32]; // 0xb1c	
	// MNetworkEnable
	GameTime_t m_flNextRespawnWave[32]; // 0xb9c	
	// MNetworkEnable
	int32_t m_nServerQuestID; // 0xc1c	
	// MNetworkEnable
	Vector m_vMinimapMins; // 0xc20	
	// MNetworkEnable
	Vector m_vMinimapMaxs; // 0xc2c	
	// MNetworkEnable
	float m_MinimapVerticalSectionHeights[8]; // 0xc38	
	bool m_bSpawnedTerrorHuntHeavy; // 0xc58	
private:
	[[maybe_unused]] uint8_t __pad0c59[0x3]; // 0xc59
public:
	// MNetworkEnable
	int32_t m_nEndMatchMapGroupVoteTypes[10]; // 0xc5c	
	// MNetworkEnable
	int32_t m_nEndMatchMapGroupVoteOptions[10]; // 0xc84	
	// MNetworkEnable
	int32_t m_nEndMatchMapVoteWinner; // 0xcac	
	// MNetworkEnable
	int32_t m_iNumConsecutiveCTLoses; // 0xcb0	
	// MNetworkEnable
	int32_t m_iNumConsecutiveTerroristLoses; // 0xcb4	
private:
	[[maybe_unused]] uint8_t __pad0cb8[0x18]; // 0xcb8
public:
	bool m_bMarkClientStopRecordAtRoundEnd; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cd1[0x57]; // 0xcd1
public:
	// MNetworkEnable
	int32_t m_nMatchAbortedEarlyReason; // 0xd28	
	bool m_bHasTriggeredRoundStartMusic; // 0xd2c	
	bool m_bSwitchingTeamsAtRoundReset; // 0xd2d	
private:
	[[maybe_unused]] uint8_t __pad0d2e[0x1a]; // 0xd2e
public:
	// MNetworkEnable
	// MNetworkPolymorphic
	CCSGameModeRules* m_pGameModeRules; // 0xd48	
	// MNetworkEnable
	// -> m_nMatchSeed - 0xe48
	// -> m_bBlockersPresent - 0xe4c
	// -> m_bRoundInProgress - 0xe4d
	// -> m_iFirstSecondHalfRound - 0xe50
	// -> m_iBombSite - 0xe54
	C_RetakeGameRules m_RetakeRules; // 0xd50	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMatchEndCountChanged"
	uint8_t m_nMatchEndCount; // 0xe68	
private:
	[[maybe_unused]] uint8_t __pad0e69[0x3]; // 0xe69
public:
	// MNetworkEnable
	int32_t m_nTTeamIntroVariant; // 0xe6c	
	// MNetworkEnable
	int32_t m_nCTTeamIntroVariant; // 0xe70	
	// MNetworkEnable
	// MNetworkChangeCallback "OnTeamIntroPeriodChanged"
	bool m_bTeamIntroPeriod; // 0xe74	
private:
	[[maybe_unused]] uint8_t __pad0e75[0x3]; // 0xe75
public:
	// MNetworkEnable
	int32_t m_iRoundEndWinnerTeam; // 0xe78	
	// MNetworkEnable
	int32_t m_eRoundEndReason; // 0xe7c	
	// MNetworkEnable
	bool m_bRoundEndShowTimerDefend; // 0xe80	
private:
	[[maybe_unused]] uint8_t __pad0e81[0x3]; // 0xe81
public:
	// MNetworkEnable
	int32_t m_iRoundEndTimerTime; // 0xe84	
	// MNetworkEnable
	CUtlString m_sRoundEndFunFactToken; // 0xe88	
	// MNetworkEnable
	CPlayerSlot m_iRoundEndFunFactPlayerSlot; // 0xe90	
	// MNetworkEnable
	int32_t m_iRoundEndFunFactData1; // 0xe94	
	// MNetworkEnable
	int32_t m_iRoundEndFunFactData2; // 0xe98	
	// MNetworkEnable
	int32_t m_iRoundEndFunFactData3; // 0xe9c	
	// MNetworkEnable
	CUtlString m_sRoundEndMessage; // 0xea0	
	// MNetworkEnable
	int32_t m_iRoundEndPlayerCount; // 0xea8	
	// MNetworkEnable
	bool m_bRoundEndNoMusic; // 0xeac	
private:
	[[maybe_unused]] uint8_t __pad0ead[0x3]; // 0xead
public:
	// MNetworkEnable
	int32_t m_iRoundEndLegacy; // 0xeb0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRoundEndCountChanged"
	uint8_t m_nRoundEndCount; // 0xeb4	
private:
	[[maybe_unused]] uint8_t __pad0eb5[0x3]; // 0xeb5
public:
	// MNetworkEnable
	int32_t m_iRoundStartRoundNumber; // 0xeb8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRoundStartCountChanged"
	uint8_t m_nRoundStartCount; // 0xebc	
private:
	[[maybe_unused]] uint8_t __pad0ebd[0x400b]; // 0xebd
public:
	double m_flLastPerfSampleTime; // 0x4ec8	
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x50
// Has VTable
class CCSPlayer_GlowServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
class C_BaseFlex::Emphasized_Phoneme
{
public:
	CUtlString m_sClassName; // 0x0	
	float m_flAmount; // 0x18	
	bool m_bRequired; // 0x1c	
	bool m_bBasechecked; // 0x1d	
	bool m_bValid; // 0x1e	
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponSSG08 : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
// Has VTable
// 
// MNetworkVarNames "Vector m_vecLadderDir"
// MNetworkVarNames "Vector m_vecPlayerMountPositionTop"
// MNetworkVarNames "Vector m_vecPlayerMountPositionBottom"
// MNetworkVarNames "float m_flAutoRideSpeed"
// MNetworkVarNames "bool m_bFakeLadder"
class C_FuncLadder : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecLadderDir; // 0xcc8	
private:
	[[maybe_unused]] uint8_t __pad0cd4[0x4]; // 0xcd4
public:
	CUtlVector<CHandle<C_InfoLadderDismount>> m_Dismounts; // 0xcd8	
	Vector m_vecLocalTop; // 0xcf0	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionTop; // 0xcfc	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionBottom; // 0xd08	
	// MNetworkEnable
	float m_flAutoRideSpeed; // 0xd14	
	bool m_bDisabled; // 0xd18	
	// MNetworkEnable
	bool m_bFakeLadder; // 0xd19	
	bool m_bHasSlack; // 0xd1a	
	
	// Static fields:
	static CUtlVector< C_FuncLadder* > &Get_s_Ladders(){return *reinterpret_cast<CUtlVector< C_FuncLadder* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_FuncLadder")->m_static_fields[0]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x568
// Has VTable
class C_SoundOpvarSetAABBEntity : public C_SoundOpvarSetPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa0
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BasePlayerWeapon > m_hMyWeapons"
// MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hActiveWeapon"
// MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hLastWeapon"
// MNetworkVarNames "uint16 m_iAmmo"
class CPlayer_WeaponServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>> m_hMyWeapons; // 0x40	
	// MNetworkEnable
	CHandle<C_BasePlayerWeapon> m_hActiveWeapon; // 0x58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle<C_BasePlayerWeapon> m_hLastWeapon; // 0x5c	
	// MNetworkEnable
	uint16_t m_iAmmo[32]; // 0x60	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
struct CAttributeManager__cached_attribute_float_t
{
public:
	float flIn; // 0x0	
	CUtlSymbolLarge iAttribHook; // 0x8	
	float flOut; // 0x10	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x12f0
// Has VTable
// 
// MNetworkVarNames "int m_nSmokeEffectTickBegin"
// MNetworkVarNames "bool m_bDidSmokeEffect"
// MNetworkVarNames "int m_nRandomSeed"
// MNetworkVarNames "Vector m_vSmokeColor"
// MNetworkVarNames "Vector m_vSmokeDetonationPos"
// MNetworkVarNames "CUtlVector<uint8> m_VoxelFrameData"
class C_SmokeGrenadeProjectile : public C_BaseCSGrenadeProjectile
{
private:
	[[maybe_unused]] uint8_t __pad1150[0x8]; // 0x1150
public:
	// MNetworkEnable
	int32_t m_nSmokeEffectTickBegin; // 0x1158	
	// MNetworkEnable
	bool m_bDidSmokeEffect; // 0x115c	
private:
	[[maybe_unused]] uint8_t __pad115d[0x3]; // 0x115d
public:
	// MNetworkEnable
	int32_t m_nRandomSeed; // 0x1160	
	// MNetworkEnable
	Vector m_vSmokeColor; // 0x1164	
	// MNetworkEnable
	Vector m_vSmokeDetonationPos; // 0x1170	
private:
	[[maybe_unused]] uint8_t __pad117c[0x4]; // 0x117c
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnSimulationChanged"
	CUtlVector<uint8> m_VoxelFrameData; // 0x1180	
	bool m_bSmokeVolumeDataReceived; // 0x1198	
	bool m_bSmokeEffectSpawned; // 0x1199	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flDMBonusStartTime"
// MNetworkVarNames "float m_flDMBonusTimeLength"
// MNetworkVarNames "CUtlString m_sDMBonusWeapon"
class CCSGameModeRules_Deathmatch : public CCSGameModeRules
{
public:
	// MNetworkEnable
	GameTime_t m_flDMBonusStartTime; // 0x30	
	// MNetworkEnable
	float m_flDMBonusTimeLength; // 0x34	
	// MNetworkEnable
	CUtlString m_sDMBonusWeapon; // 0x38	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xf40
// Has VTable
class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel
{
public:
	bool m_bBeenEnabled; // 0xf30	
	bool m_bHide; // 0xf31	
private:
	[[maybe_unused]] uint8_t __pad0f32[0x2]; // 0xf32
public:
	float m_flSeenTargetTime; // 0xf34	
	C_PointClientUIWorldPanel* m_pTargetPanel; // 0xf38	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5e0
// Has VTable
// 
// MNetworkVarNames "float m_flScattering"
// MNetworkVarNames "float m_flAnisotropy"
// MNetworkVarNames "float m_flFadeSpeed"
// MNetworkVarNames "float m_flDrawDistance"
// MNetworkVarNames "float m_flFadeInStart"
// MNetworkVarNames "float m_flFadeInEnd"
// MNetworkVarNames "float m_flIndirectStrength"
// MNetworkVarNames "int m_nIndirectTextureDimX"
// MNetworkVarNames "int m_nIndirectTextureDimY"
// MNetworkVarNames "int m_nIndirectTextureDimZ"
// MNetworkVarNames "Vector m_vBoxMins"
// MNetworkVarNames "Vector m_vBoxMaxs"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "GameTime_t m_flStartAnisoTime"
// MNetworkVarNames "GameTime_t m_flStartScatterTime"
// MNetworkVarNames "GameTime_t m_flStartDrawDistanceTime"
// MNetworkVarNames "float m_flStartAnisotropy"
// MNetworkVarNames "float m_flStartScattering"
// MNetworkVarNames "float m_flStartDrawDistance"
// MNetworkVarNames "float m_flDefaultAnisotropy"
// MNetworkVarNames "float m_flDefaultScattering"
// MNetworkVarNames "float m_flDefaultDrawDistance"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bEnableIndirect"
// MNetworkVarNames "bool m_bIndirectUseLPVs"
// MNetworkVarNames "bool m_bIsMaster"
// MNetworkVarNames "HRenderTextureStrong m_hFogIndirectTexture"
// MNetworkVarNames "int m_nForceRefreshCount"
// MNetworkVarNames "float m_fNoiseSpeed"
// MNetworkVarNames "float m_fNoiseStrength"
// MNetworkVarNames "Vector m_vNoiseScale"
class C_EnvVolumetricFogController : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flScattering; // 0x548	
	// MNetworkEnable
	float m_flAnisotropy; // 0x54c	
	// MNetworkEnable
	float m_flFadeSpeed; // 0x550	
	// MNetworkEnable
	float m_flDrawDistance; // 0x554	
	// MNetworkEnable
	float m_flFadeInStart; // 0x558	
	// MNetworkEnable
	float m_flFadeInEnd; // 0x55c	
	// MNetworkEnable
	float m_flIndirectStrength; // 0x560	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimX; // 0x564	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimY; // 0x568	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimZ; // 0x56c	
	// MNetworkEnable
	Vector m_vBoxMins; // 0x570	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x57c	
	// MNetworkEnable
	bool m_bActive; // 0x588	
private:
	[[maybe_unused]] uint8_t __pad0589[0x3]; // 0x589
public:
	// MNetworkEnable
	GameTime_t m_flStartAnisoTime; // 0x58c	
	// MNetworkEnable
	GameTime_t m_flStartScatterTime; // 0x590	
	// MNetworkEnable
	GameTime_t m_flStartDrawDistanceTime; // 0x594	
	// MNetworkEnable
	float m_flStartAnisotropy; // 0x598	
	// MNetworkEnable
	float m_flStartScattering; // 0x59c	
	// MNetworkEnable
	float m_flStartDrawDistance; // 0x5a0	
	// MNetworkEnable
	float m_flDefaultAnisotropy; // 0x5a4	
	// MNetworkEnable
	float m_flDefaultScattering; // 0x5a8	
	// MNetworkEnable
	float m_flDefaultDrawDistance; // 0x5ac	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x5b0	
	// MNetworkEnable
	bool m_bEnableIndirect; // 0x5b1	
	// MNetworkEnable
	bool m_bIndirectUseLPVs; // 0x5b2	
	// MNetworkEnable
	bool m_bIsMaster; // 0x5b3	
private:
	[[maybe_unused]] uint8_t __pad05b4[0x4]; // 0x5b4
public:
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeCTextureBase> m_hFogIndirectTexture; // 0x5b8	
	// MNetworkEnable
	int32_t m_nForceRefreshCount; // 0x5c0	
	// MNetworkEnable
	float m_fNoiseSpeed; // 0x5c4	
	// MNetworkEnable
	float m_fNoiseStrength; // 0x5c8	
	// MNetworkEnable
	Vector m_vNoiseScale; // 0x5cc	
	bool m_bFirstTime; // 0x5d8	
	
	// Datamap fields:
	// void InputSetToDefaults; // 0x0
	// float InputSetScattering; // 0x0
	// float InputSetAnisotropy; // 0x0
	// float InputSetFadeSpeed; // 0x0
	// float InputSetDrawDistance; // 0x0
	// bool EnableIndirect; // 0x0
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
	// void ForceRefresh; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponTec9 : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf20
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "float32 m_flStartTimeInCommentary"
// MNetworkVarNames "string_t m_iszCommentaryFile"
// MNetworkVarNames "string_t m_iszTitle"
// MNetworkVarNames "string_t m_iszSpeakers"
// MNetworkVarNames "int m_iNodeNumber"
// MNetworkVarNames "int m_iNodeNumberMax"
// MNetworkVarNames "bool m_bListenedTo"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hViewPosition"
class C_PointCommentaryNode : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0ed0[0x8]; // 0xed0
public:
	// MNetworkEnable
	bool m_bActive; // 0xed8	
	bool m_bWasActive; // 0xed9	
private:
	[[maybe_unused]] uint8_t __pad0eda[0x2]; // 0xeda
public:
	GameTime_t m_flEndTime; // 0xedc	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xee0	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0xee4	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0xee8	
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0xef0	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0xef8	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0xf00	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0xf04	
	// MNetworkEnable
	bool m_bListenedTo; // 0xf08	
private:
	[[maybe_unused]] uint8_t __pad0f09[0xf]; // 0xf09
public:
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hViewPosition; // 0xf18	
	bool m_bRestartAfterRestore; // 0xf1c	
	
	// Datamap fields:
	// void m_sndCommentary; // 0xf10
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x228
// Has VTable
class CCSObserver_CameraServices : public CCSPlayerBase_CameraServices
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
class CCSClientPointScriptEntity : public CCSPointScriptEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x230
// Has VTable
class CCSPlayer_CameraServices : public CCSPlayerBase_CameraServices
{
public:
	float m_flDeathCamTilt; // 0x228	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x560
// Has VTable
// 
// MNetworkVarNames "int m_nMode"
// MNetworkVarNames "Vector m_vBoxSize"
// MNetworkVarNames "bool m_bEnabled"
class C_InfoVisibilityBox : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x4]; // 0x548
public:
	// MNetworkEnable
	int32_t m_nMode; // 0x54c	
	// MNetworkEnable
	Vector m_vBoxSize; // 0x550	
	// MNetworkEnable
	bool m_bEnabled; // 0x55c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xde8
// Has VTable
class C_FireSprite : public C_Sprite
{
public:
	Vector m_vecMoveDir; // 0xdd8	
	bool m_bFadeFromAbove; // 0xde4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1278
// Has VTable
class C_CSGO_TeamIntroTerroristPosition : public C_CSGO_TeamIntroCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
// Has VTable
class C_Precipitation : public C_BaseTrigger
{
public:
	float m_flDensity; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cd4[0xc]; // 0xcd4
public:
	float m_flParticleInnerDist; // 0xce0	
private:
	[[maybe_unused]] uint8_t __pad0ce4[0x4]; // 0xce4
public:
	char* m_pParticleDef; // 0xce8	
private:
	[[maybe_unused]] uint8_t __pad0cf0[0x20]; // 0xcf0
public:
	// -> m_TimeBetweenEvents - 0xd10
	// -> m_fNextEvent - 0xd14
	TimedEvent m_tParticlePrecipTraceTimer[1]; // 0xd10	
	bool m_bActiveParticlePrecipEmitter[1]; // 0xd18	
	bool m_bParticlePrecipInitialized; // 0xd19	
	bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0xd1a	
private:
	[[maybe_unused]] uint8_t __pad0d1b[0x1]; // 0xd1b
public:
	int32_t m_nAvailableSheetSequencesMaxIndex; // 0xd1c	
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcf8
// Has VTable
// 
// MNetworkVarNames "float m_flFluidDensity"
class C_TriggerBuoyancy : public C_BaseTrigger
{
public:
	CBuoyancyHelper m_BuoyancyHelper; // 0xcd0	
	// MNetworkEnable
	float m_flFluidDensity; // 0xcf0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xec8
// Has VTable
// 
// MNetworkVarNames "bool m_bIgnoreInput"
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "float m_flHeight"
// MNetworkVarNames "float m_flDPI"
// MNetworkVarNames "float m_flInteractDistance"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "uint32 m_unOwnerContext"
// MNetworkVarNames "uint32 m_unHorizontalAlign"
// MNetworkVarNames "uint32 m_unVerticalAlign"
// MNetworkVarNames "uint32 m_unOrientation"
// MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
// MNetworkVarNames "string_t m_vecCSSClasses"
class C_PointClientUIHUD : public C_BaseClientUIEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cf8[0x8]; // 0xcf8
public:
	bool m_bCheckCSSClasses; // 0xd00	
private:
	[[maybe_unused]] uint8_t __pad0d01[0x17f]; // 0xd01
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0xe80	
private:
	[[maybe_unused]] uint8_t __pad0e81[0x3]; // 0xe81
public:
	// MNetworkEnable
	float m_flWidth; // 0xe84	
	// MNetworkEnable
	float m_flHeight; // 0xe88	
	// MNetworkEnable
	float m_flDPI; // 0xe8c	
	// MNetworkEnable
	float m_flInteractDistance; // 0xe90	
	// MNetworkEnable
	float m_flDepthOffset; // 0xe94	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0xe98	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0xe9c	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0xea0	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0xea4	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0xea8	
private:
	[[maybe_unused]] uint8_t __pad0ea9[0x7]; // 0xea9
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses; // 0xeb0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd8
// Has VTable
class C_FuncTrackTrain : public C_BaseModelEntity
{
public:
	int32_t m_nLongAxis; // 0xcc8	
	float m_flRadius; // 0xccc	
	float m_flLineLength; // 0xcd0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MNetworkVarNames "bool m_bIsRescuing"
// MNetworkVarNames "WeaponPurchaseTracker_t m_weaponPurchasesThisMatch"
// MNetworkVarNames "WeaponPurchaseTracker_t m_weaponPurchasesThisRound"
class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent
{
public:
	CHandle<C_BasePlayerWeapon> m_hLastWeaponBeforeC4AutoSwitch; // 0x40	
	// MNetworkEnable
	bool m_bIsRescuing; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
public:
	// MNetworkEnable
	WeaponPurchaseTracker_t m_weaponPurchasesThisMatch; // 0x48	
	// MNetworkEnable
	WeaponPurchaseTracker_t m_weaponPurchasesThisRound; // 0xa0	
};

// Registered binary: client.dll (project 'client')
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
	C_NetworkUtlVectorBase<Vector2D> m_vecPanelVertices; // 0x38	
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
// Has Trivial Constructor
// Has Trivial Destructor
struct C_SceneEntity__QueuedEvents_t
{
public:
	float starttime; // 0x0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1158
// Has VTable
// 
// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
// MNetworkVarNames "bool m_bUseAnimGraph"
class C_DynamicProp : public C_BreakableProp
{
public:
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0x1040	
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0x1041	
private:
	[[maybe_unused]] uint8_t __pad1042[0x6]; // 0x1042
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0x1048	
	CEntityIOOutput m_pOutputAnimOver; // 0x1070	
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x1098	
	CEntityIOOutput m_OnAnimReachedStart; // 0x10c0	
	CEntityIOOutput m_OnAnimReachedEnd; // 0x10e8	
	CUtlSymbolLarge m_iszIdleAnim; // 0x1110	
	AnimLoopMode_t m_nIdleAnimLoopMode; // 0x1118	
	bool m_bRandomizeCycle; // 0x111c	
	bool m_bStartDisabled; // 0x111d	
	bool m_bFiredStartEndOutput; // 0x111e	
	bool m_bForceNpcExclude; // 0x111f	
	bool m_bCreateNonSolid; // 0x1120	
	bool m_bIsOverrideProp; // 0x1121	
private:
	[[maybe_unused]] uint8_t __pad1122[0x2]; // 0x1122
public:
	int32_t m_iInitialGlowState; // 0x1124	
	int32_t m_nGlowRange; // 0x1128	
	int32_t m_nGlowRangeMin; // 0x112c	
	Color m_glowColor; // 0x1130	
	int32_t m_nGlowTeam; // 0x1134	
	int32_t m_iCachedFrameCount; // 0x1138	
	Vector m_vecCachedRenderMins; // 0x113c	
	Vector m_vecCachedRenderMaxs; // 0x1148	
	
	// Datamap fields:
	// CUtlSymbolLarge StartingAnim; // 0x7fffffff
	// CUtlSymbolLarge StartingAnimationLoopMode; // 0x7fffffff
	// CUtlSymbolLarge InputSetAnimationLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimationNoResetLooping; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimationNotLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimationNoResetNotLooping; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimation; // 0x0
	// CUtlSymbolLarge InputSetAnimationNoReset; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimation; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputEnableCollision; // 0x0
	// void InputDisableCollision; // 0x0
	// float InputSetPlaybackRate; // 0x0
	// void InputStartGlowing; // 0x0
	// void InputStopGlowing; // 0x0
	// Vector InputSetGlowOverride; // 0x0
	// int32_t InputSetGlowRange; // 0x0
	// void C_DynamicPropAnimThink; // 0x0
	// int32_t health; // 0x7fffffff
	// bool HoldAnimation; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x23f0
// Has VTable
class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel : public C_CSGO_PreviewPlayer
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CCSPointScriptExtensions_observer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d8
// Has VTable
class CPointTemplate : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x548	
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x550	
	CUtlSymbolLarge m_iszEntityFilterName; // 0x558	
	float m_flTimeoutInterval; // 0x560	
	bool m_bAsynchronouslySpawnEntities; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	CEntityIOOutput m_pOutputOnSpawned; // 0x568	
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x590	
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x594	
	CUtlVector<uint32> m_createdSpawnGroupHandles; // 0x598	
	CUtlVector<CEntityHandle> m_SpawnedEntityHandles; // 0x5b0	
	HSCRIPT m_ScriptSpawnCallback; // 0x5c8	
	HSCRIPT m_ScriptCallbackScope; // 0x5d0	
	
	// Datamap fields:
	// void InputForceSpawn; // 0x0
	// void InputDeleteCreatedSpawnGroups; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponHKP2000 : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1aa0
// Has VTable
class CTripWireFire : public C_BaseCSGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1588
// Has VTable
class C_CSGO_PreviewModelAlias_csgo_item_previewmodel : public C_CSGO_PreviewModel
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x560
// Has VTable
class CInfoDynamicShadowHint : public C_PointEntity
{
public:
	bool m_bDisabled; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x3]; // 0x549
public:
	float m_flRange; // 0x54c	
	int32_t m_nImportance; // 0x550	
	int32_t m_nLightChoice; // 0x554	
	CHandle<C_BaseEntity> m_hLight; // 0x558	
	
	// Static fields:
	static CUtlVector< CInfoDynamicShadowHint* > &Get_m_AllHints(){return *reinterpret_cast<CUtlVector< CInfoDynamicShadowHint* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class C_BaseEntityAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a60
// Has VTable
class C_WeaponXM1014 : public C_CSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1278
// Has VTable
class C_MapPreviewParticleSystem : public C_ParticleSystem
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
class C_TriggerMultiple : public C_BaseTrigger
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
// Has VTable
// 
// MNetworkVarNames "float m_gravityScale"
// MNetworkVarNames "float m_linearLimit"
// MNetworkVarNames "float m_linearDamping"
// MNetworkVarNames "float m_angularLimit"
// MNetworkVarNames "float m_angularDamping"
// MNetworkVarNames "float m_linearForce"
// MNetworkVarNames "float m_flFrequency"
// MNetworkVarNames "float m_flDampingRatio"
// MNetworkVarNames "Vector m_vecLinearForcePointAt"
// MNetworkVarNames "bool m_bCollapseToForcePoint"
// MNetworkVarNames "Vector m_vecLinearForcePointAtWorld"
// MNetworkVarNames "Vector m_vecLinearForceDirection"
// MNetworkVarNames "bool m_bConvertToDebrisWhenPossible"
class C_TriggerPhysics : public C_BaseTrigger
{
public:
	// MNetworkEnable
	float m_gravityScale; // 0xcd0	
	// MNetworkEnable
	float m_linearLimit; // 0xcd4	
	// MNetworkEnable
	float m_linearDamping; // 0xcd8	
	// MNetworkEnable
	float m_angularLimit; // 0xcdc	
	// MNetworkEnable
	float m_angularDamping; // 0xce0	
	// MNetworkEnable
	float m_linearForce; // 0xce4	
	// MNetworkEnable
	float m_flFrequency; // 0xce8	
	// MNetworkEnable
	float m_flDampingRatio; // 0xcec	
	// MNetworkEnable
	Vector m_vecLinearForcePointAt; // 0xcf0	
	// MNetworkEnable
	bool m_bCollapseToForcePoint; // 0xcfc	
private:
	[[maybe_unused]] uint8_t __pad0cfd[0x3]; // 0xcfd
public:
	// MNetworkEnable
	Vector m_vecLinearForcePointAtWorld; // 0xd00	
	// MNetworkEnable
	Vector m_vecLinearForceDirection; // 0xd0c	
	// MNetworkEnable
	bool m_bConvertToDebrisWhenPossible; // 0xd18	
};

// Registered binary: client.dll (project 'client')
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
	CHandle<C_BaseEntity> m_hCarriedHostage; // 0x40	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hCarriedHostageProp; // 0x44	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a60
// Has VTable
class CBreachCharge : public C_CSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
class C_LightDirectionalEntity : public C_LightEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MNetworkVarNames "HRenderTextureStrong m_Entity_hCubemapTexture"
// MNetworkVarNames "bool m_Entity_bCustomCubemapTexture"
// MNetworkVarNames "float m_Entity_flInfluenceRadius"
// MNetworkVarNames "Vector m_Entity_vBoxProjectMins"
// MNetworkVarNames "Vector m_Entity_vBoxProjectMaxs"
// MNetworkVarNames "bool m_Entity_bMoveable"
// MNetworkVarNames "int m_Entity_nHandshake"
// MNetworkVarNames "int m_Entity_nEnvCubeMapArrayIndex"
// MNetworkVarNames "int m_Entity_nPriority"
// MNetworkVarNames "float m_Entity_flEdgeFadeDist"
// MNetworkVarNames "Vector m_Entity_vEdgeFadeDists"
// MNetworkVarNames "float m_Entity_flDiffuseScale"
// MNetworkVarNames "bool m_Entity_bStartDisabled"
// MNetworkVarNames "bool m_Entity_bDefaultEnvMap"
// MNetworkVarNames "bool m_Entity_bDefaultSpecEnvMap"
// MNetworkVarNames "bool m_Entity_bIndoorCubeMap"
// MNetworkVarNames "bool m_Entity_bCopyDiffuseFromDefaultCubemap"
// MNetworkVarNames "bool m_Entity_bEnabled"
class C_EnvCubemap : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x80]; // 0x548
public:
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture; // 0x5c8	
	// MNetworkEnable
	bool m_Entity_bCustomCubemapTexture; // 0x5d0	
private:
	[[maybe_unused]] uint8_t __pad05d1[0x3]; // 0x5d1
public:
	// MNetworkEnable
	float m_Entity_flInfluenceRadius; // 0x5d4	
	// MNetworkEnable
	Vector m_Entity_vBoxProjectMins; // 0x5d8	
	// MNetworkEnable
	Vector m_Entity_vBoxProjectMaxs; // 0x5e4	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x5f0	
private:
	[[maybe_unused]] uint8_t __pad05f1[0x3]; // 0x5f1
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x5f4	
	// MNetworkEnable
	int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x5f8	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x5fc	
	// MNetworkEnable
	float m_Entity_flEdgeFadeDist; // 0x600	
	// MNetworkEnable
	Vector m_Entity_vEdgeFadeDists; // 0x604	
	// MNetworkEnable
	float m_Entity_flDiffuseScale; // 0x610	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x614	
	// MNetworkEnable
	bool m_Entity_bDefaultEnvMap; // 0x615	
	// MNetworkEnable
	bool m_Entity_bDefaultSpecEnvMap; // 0x616	
	// MNetworkEnable
	bool m_Entity_bIndoorCubeMap; // 0x617	
	// MNetworkEnable
	bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x618	
private:
	[[maybe_unused]] uint8_t __pad0619[0xf]; // 0x619
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x628	
	
	// Datamap fields:
	// void m_Entity_pSceneObject; // 0x620
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf60
// Has VTable
class C_PredictedViewModel : public C_BaseViewModel
{
public:
	Vector m_vPredictedLagOffset; // 0xf38	
	QAngle m_targetSpeed; // 0xf44	
	QAngle m_currentSpeed; // 0xf50	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponBizon : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_AK47 : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5c0
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "bool m_bUpdateOnClient"
// MNetworkVarNames "ValueRemapperInputType_t m_nInputType"
// MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineStart"
// MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineEnd"
// MNetworkVarNames "float m_flMaximumChangePerSecond"
// MNetworkVarNames "float m_flDisengageDistance"
// MNetworkVarNames "float m_flEngageDistance"
// MNetworkVarNames "bool m_bRequiresUseKey"
// MNetworkVarNames "ValueRemapperOutputType_t m_nOutputType"
// MNetworkVarNames "CHandle< C_BaseEntity > m_hOutputEntities"
// MNetworkVarNames "ValueRemapperHapticsType_t m_nHapticsType"
// MNetworkVarNames "ValueRemapperMomentumType_t m_nMomentumType"
// MNetworkVarNames "float m_flMomentumModifier"
// MNetworkVarNames "float m_flSnapValue"
// MNetworkVarNames "ValueRemapperRatchetType_t m_nRatchetType"
// MNetworkVarNames "float m_flInputOffset"
class C_PointValueRemapper : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x548	
	bool m_bDisabledOld; // 0x549	
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x54a	
private:
	[[maybe_unused]] uint8_t __pad054b[0x1]; // 0x54b
public:
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x54c	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hRemapLineStart; // 0x550	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hRemapLineEnd; // 0x554	
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x558	
	// MNetworkEnable
	float m_flDisengageDistance; // 0x55c	
	// MNetworkEnable
	float m_flEngageDistance; // 0x560	
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x568	
private:
	[[maybe_unused]] uint8_t __pad056c[0x4]; // 0x56c
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase<CHandle<C_BaseEntity>> m_hOutputEntities; // 0x570	
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x588	
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x58c	
	// MNetworkEnable
	float m_flMomentumModifier; // 0x590	
	// MNetworkEnable
	float m_flSnapValue; // 0x594	
	float m_flCurrentMomentum; // 0x598	
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x59c	
	float m_flRatchetOffset; // 0x5a0	
	// MNetworkEnable
	float m_flInputOffset; // 0x5a4	
	bool m_bEngaged; // 0x5a8	
	bool m_bFirstUpdate; // 0x5a9	
private:
	[[maybe_unused]] uint8_t __pad05aa[0x2]; // 0x5aa
public:
	float m_flPreviousValue; // 0x5ac	
	GameTime_t m_flPreviousUpdateTickTime; // 0x5b0	
	Vector m_vecPreviousTestPoint; // 0x5b4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a60
// Has VTable
class C_Knife : public C_CSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
class C_EnvCubemapBox : public C_EnvCubemap
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16b8
// Has VTable
// 
// MNetworkVarNames "CHandle<CCSPlayerPawn> m_OwningPlayer"
// MNetworkVarNames "CHandle<CCSPlayerPawn> m_KillingPlayer"
class C_ItemDogtags : public C_Item
{
public:
	// MNetworkEnable
	CHandle<C_CSPlayerPawn> m_OwningPlayer; // 0x16b0	
	// MNetworkEnable
	CHandle<C_CSPlayerPawn> m_KillingPlayer; // 0x16b4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d0
// Has VTable
class C_CSGO_EndOfMatchCamera : public C_CSGO_TeamPreviewCamera
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x568
// Has VTable
class C_SoundOpvarSetOBBEntity : public C_SoundOpvarSetAABBEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc8
// Has VTable
class C_Breakable : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MNetworkVarNames "SellbackPurchaseEntry_t m_vecSellbackPurchaseEntries"
class CCSPlayer_BuyServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t> m_vecSellbackPurchaseEntries; // 0x40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1aa0
// Has VTable
class C_SensorGrenade : public C_BaseCSGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a90
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_fFireTime"
class C_WeaponTaser : public C_CSWeaponBaseGun
{
public:
	// MNetworkEnable
	GameTime_t m_fFireTime; // 0x1a80	
	int32_t m_nLastAttackTick; // 0x1a84	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a70
// Has VTable
// 
// MNetworkVarNames "bool m_bPlayingUninterruptableAct"
// MNetworkVarNames "PlayerAnimEvent_t m_nUninterruptableActivity"
class C_Fists : public C_CSWeaponBase
{
public:
	// MNetworkEnable
	bool m_bPlayingUninterruptableAct; // 0x1a60	
private:
	[[maybe_unused]] uint8_t __pad1a61[0x3]; // 0x1a61
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnUninterruptChanged"
	PlayerAnimEvent_t m_nUninterruptableActivity; // 0x1a64	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1048
// Has VTable
// 
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bAwake"
class C_PhysicsProp : public C_BreakableProp
{
public:
	// MNetworkEnable
	bool m_bAwake; // 0x1040	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x578
// Has VTable
class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint
{
public:
	Vector m_vBoxMins; // 0x560	
	Vector m_vBoxMaxs; // 0x56c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x568
// Has VTable
class C_SoundOpvarSetPathCornerEntity : public C_SoundOpvarSetPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x598
// Has VTable
// 
// MNetworkVarNames "float m_flEndDistance"
// MNetworkVarNames "float m_flStartDistance"
// MNetworkVarNames "float m_flFogFalloffExponent"
// MNetworkVarNames "bool m_bHeightFogEnabled"
// MNetworkVarNames "float m_flFogHeightWidth"
// MNetworkVarNames "float m_flFogHeightEnd"
// MNetworkVarNames "float m_flFogHeightStart"
// MNetworkVarNames "float m_flFogHeightExponent"
// MNetworkVarNames "float m_flLODBias"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "float m_flFogMaxOpacity"
// MNetworkVarNames "int m_nCubemapSourceType"
// MNetworkVarNames "HMaterialStrong m_hSkyMaterial"
// MNetworkVarNames "string_t m_iszSkyEntity"
// MNetworkVarNames "HRenderTextureStrong m_hFogCubemapTexture"
// MNetworkVarNames "bool m_bHasHeightFogEnd"
class C_EnvCubemapFog : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flEndDistance; // 0x548	
	// MNetworkEnable
	float m_flStartDistance; // 0x54c	
	// MNetworkEnable
	float m_flFogFalloffExponent; // 0x550	
	// MNetworkEnable
	bool m_bHeightFogEnabled; // 0x554	
private:
	[[maybe_unused]] uint8_t __pad0555[0x3]; // 0x555
public:
	// MNetworkEnable
	float m_flFogHeightWidth; // 0x558	
	// MNetworkEnable
	float m_flFogHeightEnd; // 0x55c	
	// MNetworkEnable
	float m_flFogHeightStart; // 0x560	
	// MNetworkEnable
	float m_flFogHeightExponent; // 0x564	
	// MNetworkEnable
	float m_flLODBias; // 0x568	
	// MNetworkEnable
	bool m_bActive; // 0x56c	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x56d	
private:
	[[maybe_unused]] uint8_t __pad056e[0x2]; // 0x56e
public:
	// MNetworkEnable
	float m_flFogMaxOpacity; // 0x570	
	// MNetworkEnable
	int32_t m_nCubemapSourceType; // 0x574	
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeIMaterial2> m_hSkyMaterial; // 0x578	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSkyEntity; // 0x580	
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeCTextureBase> m_hFogCubemapTexture; // 0x588	
	// MNetworkEnable
	bool m_bHasHeightFogEnd; // 0x590	
	bool m_bFirstTime; // 0x591	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a60
// Has VTable
class C_WeaponSawedoff : public C_CSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
class C_TriggerLerpObject : public C_BaseTrigger
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10b0
// Has VTable
// 
// MNetworkExcludeByName "m_hModel"
// MNetworkVarNames "shard_model_desc_t m_ShardDesc"
class C_ShatterGlassShardPhysics : public C_PhysicsProp
{
private:
	[[maybe_unused]] uint8_t __pad1048[0x8]; // 0x1048
public:
	// MNetworkEnable
	// -> m_nModelID - 0x1058
	// -> m_hMaterial - 0x1060
	// -> m_solid - 0x1068
	// -> m_ShatterPanelMode - 0x1069
	// -> m_vecPanelSize - 0x106c
	// -> m_vecStressPositionA - 0x1074
	// -> m_vecStressPositionB - 0x107c
	// -> m_vecPanelVertices - 0x1088
	// -> m_flGlassHalfThickness - 0x10a0
	// -> m_bHasParent - 0x10a4
	// -> m_bParentFrozen - 0x10a5
	// -> m_SurfacePropStringToken - 0x10a8
	shard_model_desc_t m_ShardDesc; // 0x1050	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponElite : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
class C_LightSpotEntity : public C_LightEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x578
// Has VTable
// 
// MNetworkVarNames "float m_flVisibilityStrength"
// MNetworkVarNames "float m_flFogDistanceMultiplier"
// MNetworkVarNames "float m_flFogMaxDensityMultiplier"
// MNetworkVarNames "float m_flFadeTime"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bIsEnabled"
class C_PlayerVisibility : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flVisibilityStrength; // 0x548	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFogDistanceMultiplier; // 0x54c	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFogMaxDensityMultiplier; // 0x550	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFadeTime; // 0x554	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x558	
	// MNetworkEnable
	bool m_bIsEnabled; // 0x559	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
	// float InputSetPlayerVisibilityStrength; // 0x0
	// float InputSetPlayerFogDistanceMultiplier; // 0x0
	// float InputSetPlayerFogMaxDensityMultiplier; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x23f0
// Has VTable
class C_CSGO_TeamPreviewModel : public C_CSGO_PreviewPlayer
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15b8
// Has VTable
class C_EconWearable : public C_EconEntity
{
public:
	int32_t m_nForceSkin; // 0x15b0	
	bool m_bAlwaysAllow; // 0x15b4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
// 
// MNetworkVarNames "int8 m_iCurrentMaxRagdollCount"
class C_RagdollManager : public C_BaseEntity
{
public:
	// MNetworkEnable
	int8_t m_iCurrentMaxRagdollCount; // 0x548	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd28
// Has VTable
// 
// MNetworkVarNames "HMaterialStrong m_hSkyMaterial"
// MNetworkVarNames "HMaterialStrong m_hSkyMaterialLightingOnly"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "Color m_vTintColor"
// MNetworkVarNames "Color m_vTintColorLightingOnly"
// MNetworkVarNames "float m_flBrightnessScale"
// MNetworkVarNames "int m_nFogType"
// MNetworkVarNames "float m_flFogMinStart"
// MNetworkVarNames "float m_flFogMinEnd"
// MNetworkVarNames "float m_flFogMaxStart"
// MNetworkVarNames "float m_flFogMaxEnd"
// MNetworkVarNames "bool m_bEnabled"
class C_EnvSky : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle<InfoForResourceTypeIMaterial2> m_hSkyMaterial; // 0xcc8	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle<InfoForResourceTypeIMaterial2> m_hSkyMaterialLightingOnly; // 0xcd0	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bStartDisabled; // 0xcd8	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColor; // 0xcd9	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColorLightingOnly; // 0xcdd	
private:
	[[maybe_unused]] uint8_t __pad0ce1[0x3]; // 0xce1
public:
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flBrightnessScale; // 0xce4	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	int32_t m_nFogType; // 0xce8	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinStart; // 0xcec	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinEnd; // 0xcf0	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxStart; // 0xcf4	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxEnd; // 0xcf8	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bEnabled; // 0xcfc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x548
// Has VTable
class CInfoTarget : public C_PointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1278
// Has VTable
class C_CSGO_TeamIntroCounterTerroristPosition : public C_CSGO_TeamIntroCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1198
// Has VTable
// 
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "DoorState_t m_eDoorState"
// MNetworkVarNames "bool m_bLocked"
// MNetworkVarNames "Vector m_closedPosition"
// MNetworkVarNames "QAngle m_closedAngles"
// MNetworkVarNames "CHandle< C_BasePropDoor> m_hMaster"
class C_BasePropDoor : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad1158[0x10]; // 0x1158
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0x1168	
	bool m_modelChanged; // 0x116c	
	// MNetworkEnable
	bool m_bLocked; // 0x116d	
private:
	[[maybe_unused]] uint8_t __pad116e[0x2]; // 0x116e
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0x1170	
	// MNetworkEnable
	QAngle m_closedAngles; // 0x117c	
	// MNetworkEnable
	CHandle<C_BasePropDoor> m_hMaster; // 0x1188	
	Vector m_vWhereToSetLightingOrigin; // 0x118c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1158
// Has VTable
class C_DynamicPropAlias_cable_dynamic : public C_DynamicProp
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponSCAR20 : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1aa0
// Has VTable
class C_DecoyGrenade : public C_BaseCSGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CCSPointScriptExtensions_player
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b0
// Has VTable
// 
// MNetworkVarNames "string_t m_iszStackName"
// MNetworkVarNames "string_t m_iszOperatorName"
// MNetworkVarNames "string_t m_iszOpvarName"
// MNetworkVarNames "Vector m_vDistanceInnerMins"
// MNetworkVarNames "Vector m_vDistanceInnerMaxs"
// MNetworkVarNames "Vector m_vDistanceOuterMins"
// MNetworkVarNames "Vector m_vDistanceOuterMaxs"
// MNetworkVarNames "int m_nAABBDirection"
class CCitadelSoundOpvarSetOBB : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x18]; // 0x548
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x560	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x568	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x570	
	// MNetworkEnable
	Vector m_vDistanceInnerMins; // 0x578	
	// MNetworkEnable
	Vector m_vDistanceInnerMaxs; // 0x584	
	// MNetworkEnable
	Vector m_vDistanceOuterMins; // 0x590	
	// MNetworkEnable
	Vector m_vDistanceOuterMaxs; // 0x59c	
	// MNetworkEnable
	int32_t m_nAABBDirection; // 0x5a8	
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class C_SingleplayRules : public C_GameRules
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf78
// Has VTable
class C_LocalTempEntity : public CBaseAnimGraph
{
public:
	int32_t flags; // 0xed0	
	GameTime_t die; // 0xed4	
	float m_flFrameMax; // 0xed8	
	float x; // 0xedc	
	float y; // 0xee0	
	float fadeSpeed; // 0xee4	
	float bounceFactor; // 0xee8	
	int32_t hitSound; // 0xeec	
	int32_t priority; // 0xef0	
	Vector tentOffset; // 0xef4	
	QAngle m_vecTempEntAngVelocity; // 0xf00	
	int32_t tempent_renderamt; // 0xf0c	
	Vector m_vecNormal; // 0xf10	
	float m_flSpriteScale; // 0xf1c	
	int32_t m_nFlickerFrame; // 0xf20	
	float m_flFrameRate; // 0xf24	
	float m_flFrame; // 0xf28	
private:
	[[maybe_unused]] uint8_t __pad0f2c[0x4]; // 0xf2c
public:
	char* m_pszImpactEffect; // 0xf30	
	char* m_pszParticleEffect; // 0xf38	
	bool m_bParticleCollision; // 0xf40	
private:
	[[maybe_unused]] uint8_t __pad0f41[0x3]; // 0xf41
public:
	int32_t m_iLastCollisionFrame; // 0xf44	
	Vector m_vLastCollisionOrigin; // 0xf48	
	Vector m_vecTempEntVelocity; // 0xf54	
	Vector m_vecPrevAbsOrigin; // 0xf60	
	Vector m_vecTempEntAcceleration; // 0xf6c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct C_EnvWindShared__WindAveEvent_t
{
public:
	float m_flStartWindSpeed; // 0x0	
	float m_flAveWindSpeed; // 0x4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1178
// Has VTable
// 
// MNetworkVarNames "bool m_bIsIncGrenade"
class C_MolotovProjectile : public C_BaseCSGrenadeProjectile
{
public:
	// MNetworkEnable
	bool m_bIsIncGrenade; // 0x1150	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
class C_LightEnvironmentEntity : public C_LightDirectionalEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponUMP45 : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x728
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "int m_nResolutionX"
// MNetworkVarNames "int m_nResolutionY"
// MNetworkVarNames "string_t m_szLayoutFileName"
// MNetworkVarNames "string_t m_RenderAttrName"
// MNetworkVarNames "CHandle< C_BaseModelEntity > m_TargetEntities"
// MNetworkVarNames "int m_nTargetChangeCount"
// MNetworkVarNames "string_t m_vecCSSClasses"
class CInfoOffscreenPanoramaTexture : public C_PointEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x3]; // 0x549
public:
	// MNetworkEnable
	int32_t m_nResolutionX; // 0x54c	
	// MNetworkEnable
	int32_t m_nResolutionY; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0554[0x4]; // 0x554
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szLayoutFileName; // 0x558	
	// MNetworkEnable
	CUtlSymbolLarge m_RenderAttrName; // 0x560	
	// MNetworkEnable
	C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>> m_TargetEntities; // 0x568	
	// MNetworkEnable
	int32_t m_nTargetChangeCount; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad0584[0x4]; // 0x584
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses; // 0x588	
private:
	[[maybe_unused]] uint8_t __pad05a0[0x160]; // 0x5a0
public:
	bool m_bCheckCSSClasses; // 0x700	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcf0
// Has VTable
// 
// MNetworkVarNames "uint8 m_Flags"
// MNetworkVarNames "uint8 m_LightStyle"
// MNetworkVarNames "float32 m_Radius"
// MNetworkVarNames "int32 m_Exponent"
// MNetworkVarNames "float32 m_InnerAngle"
// MNetworkVarNames "float32 m_OuterAngle"
// MNetworkVarNames "float32 m_SpotRadius"
class C_DynamicLight : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	uint8_t m_Flags; // 0xcc8	
	// MNetworkEnable
	uint8_t m_LightStyle; // 0xcc9	
private:
	[[maybe_unused]] uint8_t __pad0cca[0x2]; // 0xcca
public:
	// MNetworkEnable
	float m_Radius; // 0xccc	
	// MNetworkEnable
	int32_t m_Exponent; // 0xcd0	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_InnerAngle; // 0xcd4	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_OuterAngle; // 0xcd8	
	// MNetworkEnable
	float m_SpotRadius; // 0xcdc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1aa0
// Has VTable
class C_HEGrenade : public C_BaseCSGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc8
// Has VTable
class C_TriggerVolume : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xce0
// Has VTable
// 
// MNetworkVarNames "string_t m_EffectName"
// MNetworkVarNames "bool m_bState"
class C_FuncElectrifiedVolume : public C_FuncBrush
{
public:
	ParticleIndex_t m_nAmbientEffect; // 0xcc8	
private:
	[[maybe_unused]] uint8_t __pad0ccc[0x4]; // 0xccc
public:
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; // 0xcd0	
	// MNetworkEnable
	bool m_bState; // 0xcd8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1370
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flNextAttack"
// MNetworkVarNames "bool m_bIsLookingAtWeapon"
// MNetworkVarNames "bool m_bIsHoldingLookAtWeapon"
class CCSPlayer_WeaponServices : public CPlayer_WeaponServices
{
private:
	[[maybe_unused]] uint8_t __pad00a0[0x18]; // 0xa0
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextAttack; // 0xb8	
	// MNetworkEnable
	bool m_bIsLookingAtWeapon; // 0xbc	
	// MNetworkEnable
	bool m_bIsHoldingLookAtWeapon; // 0xbd	
private:
	[[maybe_unused]] uint8_t __pad00be[0x2]; // 0xbe
public:
	uint32_t m_nOldShootPositionHistoryCount; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c4[0x394]; // 0xc4
public:
	uint32_t m_nOldInputHistoryCount; // 0x458	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
// 
// MNetworkVarNames "float32 m_flFadeStartDist"
// MNetworkVarNames "float32 m_flFadeEndDist"
class C_EnvDetailController : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flFadeStartDist; // 0x548	
	// MNetworkEnable
	float m_flFadeEndDist; // 0x54c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
// 
// MNetworkVarNames "float m_flRadius"
class C_SoundEventSphereEntity : public C_SoundEventEntity
{
public:
	// MNetworkEnable
	float m_flRadius; // 0x548	
};

// Registered binary: client.dll (project 'entity2')
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1048
// Has VTable
class C_PhysicsPropMultiplayer : public C_PhysicsProp
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1158
// Has VTable
class C_DynamicPropAlias_dynamic_prop : public C_DynamicProp
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc8
// Has VTable
// 
// MNetworkIncludeByName "m_fFlags"
// MNetworkIncludeByName "m_vecVelocity"
// MNetworkOverride "m_fFlags C_BaseEntity"
class C_FuncMoveLinear : public C_BaseToggle
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd88
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "m_nModelIndex"
// MNetworkIncludeByName "m_nRenderFX"
// MNetworkIncludeByName "m_nRenderMode"
// MNetworkIncludeByName "m_clrRender"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkOverride "m_clrRender"
// MNetworkVarNames "float32 m_flFrameRate"
// MNetworkVarNames "float32 m_flHDRColorScale"
// MNetworkVarNames "uint8 m_nNumBeamEnts"
// MNetworkVarNames "HMaterialStrong m_hBaseMaterial"
// MNetworkVarNames "HMaterialStrong m_nHaloIndex"
// MNetworkVarNames "BeamType_t m_nBeamType"
// MNetworkVarNames "uint32 m_nBeamFlags"
// MNetworkVarNames "CHandle< CBaseEntity > m_hAttachEntity"
// MNetworkVarNames "AttachmentHandle_t m_nAttachIndex"
// MNetworkVarNames "float32 m_fWidth"
// MNetworkVarNames "float32 m_fEndWidth"
// MNetworkVarNames "float32 m_fFadeLength"
// MNetworkVarNames "float32 m_fHaloScale"
// MNetworkVarNames "float32 m_fAmplitude"
// MNetworkVarNames "float32 m_fStartFrame"
// MNetworkVarNames "float32 m_fSpeed"
// MNetworkVarNames "float32 m_flFrame"
// MNetworkVarNames "BeamClipStyle_t m_nClipStyle"
// MNetworkVarNames "bool m_bTurnedOff"
// MNetworkVarNames "Vector m_vecEndPos"
class C_Beam : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "-25.000000"
	// MNetworkMaxValue "25.000000"
	// MNetworkEncodeFlags "2"
	float m_flFrameRate; // 0xcc8	
	// MNetworkEnable
	float m_flHDRColorScale; // 0xccc	
	GameTime_t m_flFireTime; // 0xcd0	
	float m_flDamage; // 0xcd4	
	// MNetworkEnable
	uint8_t m_nNumBeamEnts; // 0xcd8	
private:
	[[maybe_unused]] uint8_t __pad0cd9[0x3]; // 0xcd9
public:
	int32_t m_queryHandleHalo; // 0xcdc	
private:
	[[maybe_unused]] uint8_t __pad0ce0[0x20]; // 0xce0
public:
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeIMaterial2> m_hBaseMaterial; // 0xd00	
	// MNetworkEnable
	CStrongHandle<InfoForResourceTypeIMaterial2> m_nHaloIndex; // 0xd08	
	// MNetworkEnable
	BeamType_t m_nBeamType; // 0xd10	
	// MNetworkEnable
	uint32_t m_nBeamFlags; // 0xd14	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hAttachEntity[10]; // 0xd18	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachIndex[10]; // 0xd40	
private:
	[[maybe_unused]] uint8_t __pad0d4a[0x2]; // 0xd4a
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fWidth; // 0xd4c	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fEndWidth; // 0xd50	
	// MNetworkEnable
	float m_fFadeLength; // 0xd54	
	// MNetworkEnable
	float m_fHaloScale; // 0xd58	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "1"
	float m_fAmplitude; // 0xd5c	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_fStartFrame; // 0xd60	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_fSpeed; // 0xd64	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkPriority "32"
	float m_flFrame; // 0xd68	
	// MNetworkEnable
	BeamClipStyle_t m_nClipStyle; // 0xd6c	
	// MNetworkEnable
	bool m_bTurnedOff; // 0xd70	
private:
	[[maybe_unused]] uint8_t __pad0d71[0x3]; // 0xd71
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecEndPos; // 0xd74	
	CHandle<C_BaseEntity> m_hEndEntity; // 0xd80	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1278
// Has VTable
class C_CSGO_TeamSelectCounterTerroristPosition : public C_CSGO_TeamSelectCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1158
// Has VTable
class C_DynamicPropAlias_prop_dynamic_override : public C_DynamicProp
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d8
// Has VTable
// 
// MNetworkVarNames "string_t m_iszOverlayNames"
// MNetworkVarNames "float32 m_flOverlayTimes"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "int32 m_iDesiredOverlay"
// MNetworkVarNames "bool m_bIsActive"
class C_EnvScreenOverlay : public C_PointEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszOverlayNames[10]; // 0x548	
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-1.000000"
	// MNetworkMaxValue "63.000000"
	float m_flOverlayTimes[10]; // 0x598	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x5c0	
	// MNetworkEnable
	int32_t m_iDesiredOverlay; // 0x5c4	
	// MNetworkEnable
	bool m_bIsActive; // 0x5c8	
	bool m_bWasActive; // 0x5c9	
private:
	[[maybe_unused]] uint8_t __pad05ca[0x2]; // 0x5ca
public:
	int32_t m_iCachedDesiredOverlay; // 0x5cc	
	int32_t m_iCurrentOverlay; // 0x5d0	
	GameTime_t m_flCurrentOverlayTime; // 0x5d4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdc8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
class CCSWeaponBaseVData : public CBasePlayerWeaponVData
{
public:
	CSWeaponType m_WeaponType; // 0x250	
	CSWeaponCategory m_WeaponCategory; // 0x254	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>> m_szViewModel; // 0x258	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>> m_szPlayerModel; // 0x338	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>> m_szWorldDroppedModel; // 0x418	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>> m_szAimsightLensMaskModel; // 0x4f8	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>> m_szMagazineModel; // 0x5d8	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>> m_szHeatEffect; // 0x6b8	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>> m_szEjectBrassEffect; // 0x798	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashParticleAlt; // 0x878	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashThirdPersonParticle; // 0x958	
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashThirdPersonParticleAlt; // 0xa38	
	// MPropertyDescription "Effect to actually fire into the world from this weapon"
	CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>> m_szTracerParticle; // 0xb18	
	// MPropertyStartGroup "HUD Positions"
	// MPropertyFriendlyName "HUD Bucket"
	// MPropertyDescription "Which 'column' to display this weapon in the HUD"
	gear_slot_t m_GearSlot; // 0xbf8	
	int32_t m_GearSlotPosition; // 0xbfc	
	// MPropertyFriendlyName "HUD Bucket Position"
	// MPropertyDescription "Default team (non Terrorist or Counter-Terrorist) 'row' to display this weapon in the HUD."
	loadout_slot_t m_DefaultLoadoutSlot; // 0xc00	
private:
	[[maybe_unused]] uint8_t __pad0c04[0x4]; // 0xc04
public:
	CUtlString m_sWrongTeamMsg; // 0xc08	
	// MPropertyStartGroup "In-Game Data"
	int32_t m_nPrice; // 0xc10	
	int32_t m_nKillAward; // 0xc14	
	int32_t m_nPrimaryReserveAmmoMax; // 0xc18	
	int32_t m_nSecondaryReserveAmmoMax; // 0xc1c	
	bool m_bMeleeWeapon; // 0xc20	
	bool m_bHasBurstMode; // 0xc21	
	bool m_bIsRevolver; // 0xc22	
	bool m_bCannotShootUnderwater; // 0xc23	
private:
	[[maybe_unused]] uint8_t __pad0c24[0x4]; // 0xc24
public:
	// MPropertyFriendlyName "In-Code weapon name"
	CGlobalSymbol m_szName; // 0xc28	
	// MPropertyFriendlyName "Player Animation Extension"
	CUtlString m_szAnimExtension; // 0xc30	
	CSWeaponSilencerType m_eSilencerType; // 0xc38	
	int32_t m_nCrosshairMinDistance; // 0xc3c	
	int32_t m_nCrosshairDeltaDistance; // 0xc40	
	bool m_bIsFullAuto; // 0xc44	
private:
	[[maybe_unused]] uint8_t __pad0c45[0x3]; // 0xc45
public:
	int32_t m_nNumBullets; // 0xc48	
	// MPropertyStartGroup "Firing Mode Data"
	CFiringModeFloat m_flCycleTime; // 0xc4c	
	CFiringModeFloat m_flMaxSpeed; // 0xc54	
	CFiringModeFloat m_flSpread; // 0xc5c	
	CFiringModeFloat m_flInaccuracyCrouch; // 0xc64	
	CFiringModeFloat m_flInaccuracyStand; // 0xc6c	
	CFiringModeFloat m_flInaccuracyJump; // 0xc74	
	CFiringModeFloat m_flInaccuracyLand; // 0xc7c	
	CFiringModeFloat m_flInaccuracyLadder; // 0xc84	
	CFiringModeFloat m_flInaccuracyFire; // 0xc8c	
	CFiringModeFloat m_flInaccuracyMove; // 0xc94	
	CFiringModeFloat m_flRecoilAngle; // 0xc9c	
	CFiringModeFloat m_flRecoilAngleVariance; // 0xca4	
	CFiringModeFloat m_flRecoilMagnitude; // 0xcac	
	CFiringModeFloat m_flRecoilMagnitudeVariance; // 0xcb4	
	CFiringModeInt m_nTracerFrequency; // 0xcbc	
	float m_flInaccuracyJumpInitial; // 0xcc4	
	float m_flInaccuracyJumpApex; // 0xcc8	
	float m_flInaccuracyReload; // 0xccc	
	// MPropertyStartGroup "Firing"
	int32_t m_nRecoilSeed; // 0xcd0	
	int32_t m_nSpreadSeed; // 0xcd4	
	float m_flTimeToIdleAfterFire; // 0xcd8	
	float m_flIdleInterval; // 0xcdc	
	float m_flAttackMovespeedFactor; // 0xce0	
	float m_flHeatPerShot; // 0xce4	
	float m_flInaccuracyPitchShift; // 0xce8	
	float m_flInaccuracyAltSoundThreshold; // 0xcec	
	float m_flBotAudibleRange; // 0xcf0	
private:
	[[maybe_unused]] uint8_t __pad0cf4[0x4]; // 0xcf4
public:
	CUtlString m_szUseRadioSubtitle; // 0xcf8	
	// MPropertyStartGroup "Zooming"
	bool m_bUnzoomsAfterShot; // 0xd00	
	bool m_bHideViewModelWhenZoomed; // 0xd01	
private:
	[[maybe_unused]] uint8_t __pad0d02[0x2]; // 0xd02
public:
	int32_t m_nZoomLevels; // 0xd04	
	int32_t m_nZoomFOV1; // 0xd08	
	int32_t m_nZoomFOV2; // 0xd0c	
	float m_flZoomTime0; // 0xd10	
	float m_flZoomTime1; // 0xd14	
	float m_flZoomTime2; // 0xd18	
	// MPropertyStartGroup "Iron Sights"
	float m_flIronSightPullUpSpeed; // 0xd1c	
	float m_flIronSightPutDownSpeed; // 0xd20	
	float m_flIronSightFOV; // 0xd24	
	float m_flIronSightPivotForward; // 0xd28	
	float m_flIronSightLooseness; // 0xd2c	
	QAngle m_angPivotAngle; // 0xd30	
	Vector m_vecIronSightEyePos; // 0xd3c	
	// MPropertyStartGroup "Damage"
	int32_t m_nDamage; // 0xd48	
	float m_flHeadshotMultiplier; // 0xd4c	
	float m_flArmorRatio; // 0xd50	
	float m_flPenetration; // 0xd54	
	float m_flRange; // 0xd58	
	float m_flRangeModifier; // 0xd5c	
	float m_flFlinchVelocityModifierLarge; // 0xd60	
	float m_flFlinchVelocityModifierSmall; // 0xd64	
	// MPropertyStartGroup "Recovery"
	float m_flRecoveryTimeCrouch; // 0xd68	
	float m_flRecoveryTimeStand; // 0xd6c	
	float m_flRecoveryTimeCrouchFinal; // 0xd70	
	float m_flRecoveryTimeStandFinal; // 0xd74	
	int32_t m_nRecoveryTransitionStartBullet; // 0xd78	
	int32_t m_nRecoveryTransitionEndBullet; // 0xd7c	
	// MPropertyStartGroup "Grenade Data"
	float m_flThrowVelocity; // 0xd80	
	Vector m_vSmokeColor; // 0xd84	
	CGlobalSymbol m_szAnimClass; // 0xd90	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf40
// Has VTable
// 
// MNetworkVarNames "char m_messageText"
// MNetworkVarNames "char m_FontName"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bFullbright"
// MNetworkVarNames "float m_flWorldUnitsPerPx"
// MNetworkVarNames "float m_flFontSize"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal"
// MNetworkVarNames "PointWorldTextJustifyVertical_t m_nJustifyVertical"
// MNetworkVarNames "PointWorldTextReorientMode_t m_nReorientMode"
class C_PointWorldText : public C_ModelPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x8]; // 0xcc8
public:
	bool m_bForceRecreateNextUpdate; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cd1[0xf]; // 0xcd1
public:
	// MNetworkEnable
	char m_messageText[512]; // 0xce0	
	// MNetworkEnable
	char m_FontName[64]; // 0xee0	
	// MNetworkEnable
	bool m_bEnabled; // 0xf20	
	// MNetworkEnable
	bool m_bFullbright; // 0xf21	
private:
	[[maybe_unused]] uint8_t __pad0f22[0x2]; // 0xf22
public:
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0xf24	
	// MNetworkEnable
	float m_flFontSize; // 0xf28	
	// MNetworkEnable
	float m_flDepthOffset; // 0xf2c	
	// MNetworkEnable
	Color m_Color; // 0xf30	
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xf34	
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xf38	
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0xf3c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10b8
// Has VTable
class CBumpMineProjectile : public C_BaseGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
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
// MNetworkVarNames "bool m_bKnownTeamMismatch"
// MNetworkVarNames "PlayerConnectedState m_iConnected"
// MNetworkVarNames "char m_iszPlayerName"
// MNetworkVarNames "uint64 m_steamID"
// MNetworkVarNames "uint32 m_iDesiredFOV"
// MNetworkReplayCompatField "m_skeletonInstance\.m_vecOrigin\..*|"
class CBasePlayerController : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x8]; // 0x548
public:
	int32_t m_nFinalPredictedTick; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0554[0x4]; // 0x554
public:
	// -> needsprocessing - 0x558
	// -> command_number - 0x5e8
	C_CommandContext m_CommandContext; // 0x558	
	uint64_t m_nInButtonsWhichAreToggles; // 0x5f0	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0x5f8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPawnChanged"
	CHandle<C_BasePlayerPawn> m_hPawn; // 0x5fc	
	// MNetworkEnable
	bool m_bKnownTeamMismatch; // 0x600	
private:
	[[maybe_unused]] uint8_t __pad0601[0x3]; // 0x601
public:
	CHandle<C_BasePlayerPawn> m_hPredictedPawn; // 0x604	
	CSplitScreenSlot m_nSplitScreenSlot; // 0x608	
	CHandle<CBasePlayerController> m_hSplitOwner; // 0x60c	
	CUtlVector<CHandle<CBasePlayerController>> m_hSplitScreenPlayers; // 0x610	
	bool m_bIsHLTV; // 0x628	
private:
	[[maybe_unused]] uint8_t __pad0629[0x3]; // 0x629
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnConnectionStateChanged"
	PlayerConnectedState m_iConnected; // 0x62c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayerControllerNameChanged"
	char m_iszPlayerName[128]; // 0x630	
private:
	[[maybe_unused]] uint8_t __pad06b0[0x8]; // 0x6b0
public:
	// MNetworkEnable
	// MNetworkEncoder "fixed64"
	// MNetworkChangeCallback "OnSteamIDChanged"
	uint64_t m_steamID; // 0x6b8	
	bool m_bIsLocalPlayerController; // 0x6c0	
private:
	[[maybe_unused]] uint8_t __pad06c1[0x3]; // 0x6c1
public:
	// MNetworkEnable
	uint32_t m_iDesiredFOV; // 0x6c4	
	
	// Static fields:
	static bool &Get_sm_bRunningPredictedClientStringCommands(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBasePlayerController")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// bool fakeclient; // 0x7fffffff
	// bool is_hltv; // 0x7fffffff
	// const char * playername; // 0x7fffffff
	// bool reserving; // 0x7fffffff
	// void m_pCurrentCommand; // 0x6b0
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponFiveSeven : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1198
// Has VTable
class C_PropDoorRotating : public C_BasePropDoor
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1278
// Has VTable
class C_CSGO_TeamSelectTerroristPosition : public C_CSGO_TeamSelectCharacterPosition
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1068
// Has VTable
class C_PhysPropClientside : public C_BreakableProp
{
public:
	GameTime_t m_flTouchDelta; // 0x1040	
	GameTime_t m_fDeathTime; // 0x1044	
	float m_inertiaScale; // 0x1048	
	Vector m_vecDamagePosition; // 0x104c	
	Vector m_vecDamageDirection; // 0x1058	
	int32_t m_nDamageType; // 0x1064	
	
	// Datamap fields:
	// float m_impactEnergyScale; // 0xfc8
	// bool forcemotiondisabled; // 0x7fffffff
	// bool phys_start_asleep; // 0x7fffffff
	// float fademaxdist; // 0x7fffffff
	// float fademindist; // 0x7fffffff
	// float fadescale; // 0x7fffffff
	// float scale; // 0x7fffffff
	// const char * skin; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d0
// Has VTable
class C_CSGO_TeamSelectCamera : public C_CSGO_TeamPreviewCamera
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x578
// Has VTable
// 
// MNetworkVarNames "float m_flRadius"
class C_SoundAreaEntitySphere : public C_SoundAreaEntityBase
{
public:
	// MNetworkEnable
	float m_flRadius; // 0x570	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b8
// Has VTable
// 
// MNetworkVarNames "fogparams_t m_fog"
class C_FogController : public C_BaseEntity
{
public:
	// MNetworkEnable
	fogparams_t m_fog; // 0x548	
	bool m_bUseAngles; // 0x5b0	
private:
	[[maybe_unused]] uint8_t __pad05b1[0x3]; // 0x5b1
public:
	int32_t m_iChangedVariables; // 0x5b4	
	
	// Datamap fields:
	// float InputSetStartDist; // 0x0
	// float InputSetEndDist; // 0x0
	// float InputSetMaxDensity; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// Color InputSetColor; // 0x0
	// Color InputSetColorSecondary; // 0x0
	// int32_t InputSetFarZ; // 0x0
	// CUtlSymbolLarge InputSetAngles; // 0x0
	// float InputSet2DSkyboxFogFactor; // 0x0
	// Color InputSetColorLerpTo; // 0x0
	// Color InputSetColorSecondaryLerpTo; // 0x0
	// float InputSetStartDistLerpTo; // 0x0
	// float InputSetEndDistLerpTo; // 0x0
	// float InputSetMaxDensityLerpTo; // 0x0
	// float InputSet2DSkyboxFogFactorLerpTo; // 0x0
	// void InputStartFogTransition; // 0x0
	// void C_FogControllerSetLerpValues; // 0x0
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1190
// Has VTable
// 
// MNetworkVarNames "CUtlString m_targetCamera"
// MNetworkVarNames "int m_nResolutionEnum"
// MNetworkVarNames "bool m_bRenderShadows"
// MNetworkVarNames "bool m_bUseUniqueColorTarget"
// MNetworkVarNames "CUtlString m_brushModelName"
// MNetworkVarNames "EHANDLE m_hTargetCamera"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bDraw3DSkybox"
class C_FuncMonitor : public C_FuncBrush
{
public:
	// MNetworkEnable
	CUtlString m_targetCamera; // 0xcc8	
	// MNetworkEnable
	int32_t m_nResolutionEnum; // 0xcd0	
	// MNetworkEnable
	bool m_bRenderShadows; // 0xcd4	
	// MNetworkEnable
	bool m_bUseUniqueColorTarget; // 0xcd5	
private:
	[[maybe_unused]] uint8_t __pad0cd6[0x2]; // 0xcd6
public:
	// MNetworkEnable
	CUtlString m_brushModelName; // 0xcd8	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hTargetCamera; // 0xce0	
	// MNetworkEnable
	bool m_bEnabled; // 0xce4	
	// MNetworkEnable
	bool m_bDraw3DSkybox; // 0xce5	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x590
// Has VTable
// 
// MNetworkVarNames "string_t m_worldName"
// MNetworkVarNames "string_t m_layerName"
// MNetworkVarNames "bool m_bWorldLayerVisible"
// MNetworkVarNames "bool m_bEntitiesSpawned"
class CInfoWorldLayer : public C_BaseEntity
{
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x548	
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; // 0x570	
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; // 0x578	
	// MNetworkEnable
	bool m_bWorldLayerVisible; // 0x580	
	// MNetworkEnable
	bool m_bEntitiesSpawned; // 0x581	
	bool m_bCreateAsChildSpawnGroup; // 0x582	
private:
	[[maybe_unused]] uint8_t __pad0583[0x1]; // 0x583
public:
	uint32_t m_hLayerSpawnGroup; // 0x584	
	bool m_bWorldLayerActuallyVisible; // 0x588	
	
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
// Size: 0x10f8
// Has VTable
class C_NetTestBaseCombatCharacter : public C_BaseCombatCharacter
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed8
// Has VTable
class C_ViewmodelWeapon : public CBaseAnimGraph
{
public:
	char* m_worldModel; // 0xed0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf00
// Has VTable
class C_PhysMagnet : public CBaseAnimGraph
{
public:
	CUtlVector<int32> m_aAttachedObjectsFromServer; // 0xed0	
	CUtlVector<CHandle<C_BaseEntity>> m_aAttachedObjects; // 0xee8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MNetworkIncludeByName "m_fFlags"
// MNetworkOverride "m_fFlags C_BaseEntity"
// MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_angRotation CGameSceneNode"
// MNetworkVarNames "Vector m_vecMoveDirEntitySpace"
// MNetworkVarNames "float32 m_flTargetSpeed"
// MNetworkVarNames "GameTick_t m_nTransitionStartTick"
// MNetworkVarNames "int m_nTransitionDurationTicks"
// MNetworkVarNames "float32 m_flTransitionStartSpeed"
// MNetworkVarNames "EHANDLE m_hConveyorModels"
class C_FuncConveyor : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x8]; // 0xcc8
public:
	// MNetworkEnable
	Vector m_vecMoveDirEntitySpace; // 0xcd0	
	// MNetworkEnable
	float m_flTargetSpeed; // 0xcdc	
	// MNetworkEnable
	GameTick_t m_nTransitionStartTick; // 0xce0	
	// MNetworkEnable
	int32_t m_nTransitionDurationTicks; // 0xce4	
	// MNetworkEnable
	float m_flTransitionStartSpeed; // 0xce8	
private:
	[[maybe_unused]] uint8_t __pad0cec[0x4]; // 0xcec
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase<CHandle<C_BaseEntity>> m_hConveyorModels; // 0xcf0	
	float m_flCurrentConveyorOffset; // 0xd08	
	float m_flCurrentConveyorSpeed; // 0xd0c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b0
// Has VTable
class C_PointCameraVFOV : public C_PointCamera
{
public:
	float m_flVerticalFOV; // 0x5a8	
	
	// Datamap fields:
	// float m_flDofFarCrisp; // 0x588
	// float m_flDofFarBlurry; // 0x58c
	// float m_flDofTiltToGround; // 0x590
};

// Registered binary: client.dll (project 'client')
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
// Size: 0x1000
// Has VTable
// 
// MNetworkOverride "m_hWeapon"
// MNetworkVarNames "bool m_bShouldIgnoreOffsetAndAccuracy"
// MNetworkVarNames "uint32 m_nWeaponParity"
class C_CSGOViewModel : public C_PredictedViewModel
{
private:
	[[maybe_unused]] uint8_t __pad0f60[0x8]; // 0xf60
public:
	// MNetworkEnable
	bool m_bShouldIgnoreOffsetAndAccuracy; // 0xf68	
private:
	[[maybe_unused]] uint8_t __pad0f69[0x3]; // 0xf69
public:
	// MNetworkEnable
	uint32_t m_nWeaponParity; // 0xf6c	
	uint32_t m_nOldWeaponParity; // 0xf70	
	CEntityIndex m_nLastKnownAssociatedWeaponEntIndex; // 0xf74	
	bool m_bNeedToQueueHighResComposite; // 0xf78	
private:
	[[maybe_unused]] uint8_t __pad0f79[0x4f]; // 0xf79
public:
	QAngle m_vLoweredWeaponOffset; // 0xfc8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd8
// Has VTable
class CHostageRescueZone : public CHostageRescueZoneShim
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponNegev : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1cc0
// Has VTable
// 
// MNetworkVarNames "CBaseAnimGraphController m_animationController"
class CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance
{
public:
	// MNetworkEnable
	CBaseAnimGraphController m_animationController; // 0x460	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1ab0
// Has VTable
class C_IncendiaryGrenade : public C_MolotovGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a60
// Has VTable
class CTablet : public C_CSWeaponBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseDomainHookInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
class CCSPointScript : public CBasePulseGraphInstance
{
public:
	CCSPointScriptEntity* m_pParent; // 0xf8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1468
// Has VTable
// 
// MNetworkVarTypeOverride "CCSObserver_ObserverServices m_pObserverServices"
// MNetworkIncludeByName "m_pObserverServices"
// MNetworkVarTypeOverride "CCSObserver_MovementServices m_pMovementServices"
// MNetworkIncludeByName "m_pMovementServices"
// MNetworkVarTypeOverride "CCSObserver_CameraServices m_pCameraServices"
// MNetworkIncludeByName "m_pCameraServices"
// MNetworkVarTypeOverride "CCSObserver_UseServices m_pUseServices"
// MNetworkIncludeByName "m_pUseServices"
// MNetworkVarTypeOverride "CCSObserver_ViewModelServices m_pViewModelServices"
// MNetworkIncludeByName "m_pViewModelServices"
class C_CSObserverPawn : public C_CSPlayerPawnBase
{
public:
	CEntityHandle m_hDetectParentChange; // 0x1460	
	
	// Datamap fields:
	// CCSObserver_ObserverServices m_pObserverServices; // 0x1110
	// CCSObserver_MovementServices m_pMovementServices; // 0x1138
	// CCSObserver_UseServices m_pUseServices; // 0x1120
	// CCSObserver_ViewModelServices m_pViewModelServices; // 0x12b8
	// CCSObserver_CameraServices m_pCameraServices; // 0x1130
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x580
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseEntity> m_hEntAttached"
// MNetworkVarNames "bool m_bCheapEffect"
class C_EntityFlame : public C_BaseEntity
{
public:
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hEntAttached; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad054c[0x24]; // 0x54c
public:
	CHandle<C_BaseEntity> m_hOldAttached; // 0x570	
	// MNetworkEnable
	bool m_bCheapEffect; // 0x574	
	
	// Datamap fields:
	// void m_hEffect; // 0x550
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10b8
// Has VTable
class CTripWireFireProjectile : public C_BaseGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc8
// Has VTable
class C_PhysBox : public C_Breakable
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb0
// Has VTable
class CCSObserver_ObserverServices : public CPlayer_ObserverServices
{
public:
	CEntityHandle m_hLastObserverTarget; // 0x58	
	Vector m_vecObserverInterpolateOffset; // 0x5c	
	Vector m_vecObserverInterpStartPos; // 0x68	
	float m_flObsInterp_PathLength; // 0x74	
private:
	[[maybe_unused]] uint8_t __pad0078[0x8]; // 0x78
public:
	Quaternion m_qObsInterp_OrientationStart; // 0x80	
	Quaternion m_qObsInterp_OrientationTravelDir; // 0x90	
	ObserverInterpState_t m_obsInterpState; // 0xa0	
	bool m_bObserverInterpolationNeedsDeferredSetup; // 0xa4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x560
// Has VTable
class C_TintController : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// Is Abstract
class CPlayer_AutoaimServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x11c8
// Has VTable
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_lifeState"
// MNetworkIncludeByName "m_fFlags"
// MNetworkIncludeByName "m_vecViewOffset"
// MNetworkOverride "m_vecViewOffset C_BaseModelEntity"
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
// MNetworkVarNames "CHandle< CBaseEntity> m_leader"
// MNetworkVarNames "CountdownTimer m_reuseTimer"
// MNetworkVarNames "Vector m_vel"
// MNetworkVarNames "bool m_isRescued"
// MNetworkVarNames "bool m_jumpedThisFrame"
// MNetworkVarNames "int m_nHostageState"
// MNetworkVarNames "bool m_bHandsHaveBeenCut"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hHostageGrabber"
// MNetworkVarNames "GameTime_t m_flRescueStartTime"
// MNetworkVarNames "GameTime_t m_flGrabSuccessTime"
// MNetworkVarNames "GameTime_t m_flDropStartTime"
class C_Hostage : public C_BaseCombatCharacter
{
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x10f8	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_leader; // 0x1110	
private:
	[[maybe_unused]] uint8_t __pad1114[0x4]; // 0x1114
public:
	// MNetworkEnable
	CountdownTimer m_reuseTimer; // 0x1118	
	// MNetworkEnable
	Vector m_vel; // 0x1130	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_Rescued"
	bool m_isRescued; // 0x113c	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_Jumped"
	bool m_jumpedThisFrame; // 0x113d	
private:
	[[maybe_unused]] uint8_t __pad113e[0x2]; // 0x113e
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnHostageStateChanged"
	int32_t m_nHostageState; // 0x1140	
	// MNetworkEnable
	bool m_bHandsHaveBeenCut; // 0x1144	
private:
	[[maybe_unused]] uint8_t __pad1145[0x3]; // 0x1145
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrabberChanged"
	CHandle<C_CSPlayerPawn> m_hHostageGrabber; // 0x1148	
	GameTime_t m_fLastGrabTime; // 0x114c	
	Vector m_vecGrabbedPos; // 0x1150	
	// MNetworkEnable
	GameTime_t m_flRescueStartTime; // 0x115c	
	// MNetworkEnable
	GameTime_t m_flGrabSuccessTime; // 0x1160	
	// MNetworkEnable
	GameTime_t m_flDropStartTime; // 0x1164	
	GameTime_t m_flDeadOrRescuedTime; // 0x1168	
private:
	[[maybe_unused]] uint8_t __pad116c[0x4]; // 0x116c
public:
	CountdownTimer m_blinkTimer; // 0x1170	
	Vector m_lookAt; // 0x1188	
private:
	[[maybe_unused]] uint8_t __pad1194[0x4]; // 0x1194
public:
	CountdownTimer m_lookAroundTimer; // 0x1198	
	bool m_isInit; // 0x11b0	
	AttachmentHandle_t m_eyeAttachment; // 0x11b1	
	AttachmentHandle_t m_chestAttachment; // 0x11b2	
private:
	[[maybe_unused]] uint8_t __pad11b3[0x5]; // 0x11b3
public:
	CBasePlayerController* m_pPredictionOwner; // 0x11b8	
	GameTime_t m_fNewestAlphaThinkTime; // 0x11c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd8
// Has VTable
class C_FireFromAboveSprite : public C_Sprite
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponM4A1Silencer : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf70
// Has VTable
// 
// MNetworkVarNames "bool m_bBombTicking"
// MNetworkVarNames "int m_nBombSite"
// MNetworkVarNames "int m_nSourceSoundscapeHash"
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
// MNetworkVarNames "GameTime_t m_flC4Blow"
// MNetworkVarNames "bool m_bCannotBeDefused"
// MNetworkVarNames "bool m_bHasExploded"
// MNetworkVarNames "float m_flTimerLength"
// MNetworkVarNames "bool m_bBeingDefused"
// MNetworkVarNames "float m_flDefuseLength"
// MNetworkVarNames "GameTime_t m_flDefuseCountDown"
// MNetworkVarNames "bool m_bBombDefused"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hBombDefuser"
// MNetworkVarNames "CHandle< CBaseEntity> m_hControlPanel"
class C_PlantedC4 : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	bool m_bBombTicking; // 0xed0	
private:
	[[maybe_unused]] uint8_t __pad0ed1[0x3]; // 0xed1
public:
	// MNetworkEnable
	int32_t m_nBombSite; // 0xed4	
	// MNetworkEnable
	int32_t m_nSourceSoundscapeHash; // 0xed8	
private:
	[[maybe_unused]] uint8_t __pad0edc[0x4]; // 0xedc
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xee0	
	GameTime_t m_flNextGlow; // 0xef8	
	GameTime_t m_flNextBeep; // 0xefc	
	// MNetworkEnable
	GameTime_t m_flC4Blow; // 0xf00	
	// MNetworkEnable
	bool m_bCannotBeDefused; // 0xf04	
	// MNetworkEnable
	bool m_bHasExploded; // 0xf05	
private:
	[[maybe_unused]] uint8_t __pad0f06[0x2]; // 0xf06
public:
	// MNetworkEnable
	float m_flTimerLength; // 0xf08	
	// MNetworkEnable
	bool m_bBeingDefused; // 0xf0c	
private:
	[[maybe_unused]] uint8_t __pad0f0d[0x3]; // 0xf0d
public:
	float m_bTriggerWarning; // 0xf10	
	float m_bExplodeWarning; // 0xf14	
	bool m_bC4Activated; // 0xf18	
	bool m_bTenSecWarning; // 0xf19	
private:
	[[maybe_unused]] uint8_t __pad0f1a[0x2]; // 0xf1a
public:
	// MNetworkEnable
	float m_flDefuseLength; // 0xf1c	
	// MNetworkEnable
	GameTime_t m_flDefuseCountDown; // 0xf20	
	// MNetworkEnable
	bool m_bBombDefused; // 0xf24	
private:
	[[maybe_unused]] uint8_t __pad0f25[0x3]; // 0xf25
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnDefuserChanged"
	CHandle<C_CSPlayerPawn> m_hBombDefuser; // 0xf28	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hControlPanel; // 0xf2c	
	CHandle<C_Multimeter> m_hDefuserMultimeter; // 0xf30	
	GameTime_t m_flNextRadarFlashTime; // 0xf34	
	bool m_bRadarFlash; // 0xf38	
private:
	[[maybe_unused]] uint8_t __pad0f39[0x3]; // 0xf39
public:
	CHandle<C_CSPlayerPawn> m_pBombDefuser; // 0xf3c	
	GameTime_t m_fLastDefuseTime; // 0xf40	
private:
	[[maybe_unused]] uint8_t __pad0f44[0x4]; // 0xf44
public:
	CBasePlayerController* m_pPredictionOwner; // 0xf48	
	Vector m_vecC4ExplodeSpectatePos; // 0xf50	
	QAngle m_vecC4ExplodeSpectateAng; // 0xf5c	
	float m_flC4ExplodeSpectateDuration; // 0xf68	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf80
// Has VTable
// 
// MNetworkVarNames "uint32 m_boneIndexAttached"
// MNetworkVarNames "uint32 m_ragdollAttachedObjectIndex"
// MNetworkVarNames "Vector m_attachmentPointBoneSpace"
// MNetworkVarNames "Vector m_attachmentPointRagdollSpace"
class C_RagdollPropAttached : public C_RagdollProp
{
public:
	// MNetworkEnable
	uint32_t m_boneIndexAttached; // 0xf48	
	// MNetworkEnable
	uint32_t m_ragdollAttachedObjectIndex; // 0xf4c	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointBoneSpace; // 0xf50	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointRagdollSpace; // 0xf5c	
	Vector m_vecOffset; // 0xf68	
	float m_parentTime; // 0xf74	
	bool m_bHasParent; // 0xf78	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d0
// Has VTable
class C_CSGO_TerroristTeamIntroCamera : public C_CSGO_TeamPreviewCamera
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x580
// Has VTable
// 
// MNetworkVarNames "int m_iActiveIssueIndex"
// MNetworkVarNames "int m_iOnlyTeamToVote"
// MNetworkVarNames "int m_nVoteOptionCount"
// MNetworkVarNames "int m_nPotentialVotes"
// MNetworkVarNames "bool m_bIsYesNoVote"
class C_VoteController : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0548[0x10]; // 0x548
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_VoteType"
	int32_t m_iActiveIssueIndex; // 0x558	
	// MNetworkEnable
	int32_t m_iOnlyTeamToVote; // 0x55c	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_VoteOption"
	int32_t m_nVoteOptionCount[5]; // 0x560	
	// MNetworkEnable
	int32_t m_nPotentialVotes; // 0x574	
	bool m_bVotesDirty; // 0x578	
	bool m_bTypeDirty; // 0x579	
	// MNetworkEnable
	bool m_bIsYesNoVote; // 0x57a	
};

// Registered binary: client.dll (project 'client')
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1628
// Has VTable
// 
// MNetworkVarNames "bool m_jumpedThisFrame"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_leader"
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
class C_Chicken : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad1158[0x8]; // 0x1158
public:
	CHandle<CBaseAnimGraph> m_hHolidayHatAddon; // 0x1160	
	// MNetworkEnable
	// MNetworkChangeCallback "OnJumpedChanged"
	bool m_jumpedThisFrame; // 0x1164	
private:
	[[maybe_unused]] uint8_t __pad1165[0x3]; // 0x1165
public:
	// MNetworkEnable
	CHandle<C_CSPlayerPawn> m_leader; // 0x1168	
private:
	[[maybe_unused]] uint8_t __pad116c[0x4]; // 0x116c
public:
	// MNetworkEnable
	// -> m_Item - 0x11c0
	// -> m_iExternalItemProviderRegisteredToken - 0x1608
	// -> m_ullRegisteredAsItemID - 0x1610
	C_AttributeContainer m_AttributeManager; // 0x1170	
	bool m_bAttributesInitialized; // 0x1618	
private:
	[[maybe_unused]] uint8_t __pad1619[0x3]; // 0x1619
public:
	ParticleIndex_t m_hWaterWakeParticles; // 0x161c	
	bool m_bIsPreviewModel; // 0x1620	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x70
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
	C_NetworkUtlVectorBase<CTransform> m_Transforms; // 0x30	
	// MNetworkEnable
	CHandle<C_BaseEntity> m_hOwner; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x1c]; // 0x4c
public:
	bool m_bDirty; // 0x68	
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x280
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
	// MPropertyFriendlyName "Layout XML"
	// MPropertyAttrStateCallback
	CUtlString m_strPanoramaPanelPath; // 0x270	
	// MPropertyFriendlyName "Render Resolution"
	// MPropertyAttrStateCallback
	int32_t m_nPanoramaRenderRes; // 0x278	
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
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_CSGO_PreviewModel_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_CSGO_PreviewModel_GraphController")->m_static_fields[1]->m_instance);};
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
// Size: 0xd8
// Has VTable
class C_SunGlowOverlay : public CGlowOverlay
{
public:
	bool m_bModulateByDot; // 0xd0	
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

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x70
// Has VTable
class C_Chicken_GraphController : public CAnimGraphControllerBase
{
public:
	CAnimGraphParamRef<char*> m_paramActivity; // 0x18	
	CAnimGraphParamRef<bool> m_paramEndActivityImmediately; // 0x38	
	CAnimGraphParamRef<bool> m_paramSnapToSquatting; // 0x50	
	float m_flSquatProbability; // 0x68	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_Chicken_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_Chicken_GraphController")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5c0
// Has VTable
// 
// MNetworkOverride "m_flScale"
// MNetworkOverride "m_flScaleTime"
// MNetworkVarNames "int32 m_nFlameModelIndex"
// MNetworkVarNames "int32 m_nFlameFromAboveModelIndex"
class C_FireSmoke : public C_BaseFire
{
public:
	// MNetworkEnable
	int32_t m_nFlameModelIndex; // 0x558	
	// MNetworkEnable
	int32_t m_nFlameFromAboveModelIndex; // 0x55c	
	float m_flScaleRegister; // 0x560	
	float m_flScaleStart; // 0x564	
	float m_flScaleEnd; // 0x568	
	GameTime_t m_flScaleTimeStart; // 0x56c	
	GameTime_t m_flScaleTimeEnd; // 0x570	
	float m_flChildFlameSpread; // 0x574	
private:
	[[maybe_unused]] uint8_t __pad0578[0x10]; // 0x578
public:
	float m_flClipPerc; // 0x588	
	bool m_bClipTested; // 0x58c	
	bool m_bFadingOut; // 0x58d	
private:
	[[maybe_unused]] uint8_t __pad058e[0x2]; // 0x58e
public:
	// -> m_TimeBetweenEvents - 0x590
	// -> m_fNextEvent - 0x594
	TimedEvent m_tParticleSpawn; // 0x590	
	CFireOverlay* m_pFireOverlay; // 0x598	
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
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_CSGO_PreviewPlayer_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_CSGO_PreviewPlayer_GraphController")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x838
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
	[[maybe_unused]] uint8_t __pad06e0[0x10]; // 0x6e0
public:
	// MNetworkEnable
	CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x6f0	
	// MNetworkEnable
	CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x6f8	
	// MNetworkEnable
	CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x700	
	// MNetworkEnable
	CCSPlayerController_DamageServices* m_pDamageServices; // 0x708	
	// MNetworkEnable
	uint32_t m_iPing; // 0x710	
	// MNetworkEnable
	bool m_bHasCommunicationAbuseMute; // 0x714	
private:
	[[maybe_unused]] uint8_t __pad0715[0x3]; // 0x715
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szCrosshairCodes; // 0x718	
	// MNetworkEnable
	uint8_t m_iPendingTeamNum; // 0x720	
private:
	[[maybe_unused]] uint8_t __pad0721[0x3]; // 0x721
public:
	// MNetworkEnable
	GameTime_t m_flForceTeamTime; // 0x724	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCompTeammateColorChanged"
	int32_t m_iCompTeammateColor; // 0x728	
	// MNetworkEnable
	bool m_bEverPlayedOnTeam; // 0x72c	
private:
	[[maybe_unused]] uint8_t __pad072d[0x3]; // 0x72d
public:
	GameTime_t m_flPreviousForceJoinTeamTime; // 0x730	
private:
	[[maybe_unused]] uint8_t __pad0734[0x4]; // 0x734
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szClan; // 0x738	
	CUtlString m_sSanitizedPlayerName; // 0x740	
	// MNetworkEnable
	int32_t m_iCoachingTeam; // 0x748	
private:
	[[maybe_unused]] uint8_t __pad074c[0x4]; // 0x74c
public:
	// MNetworkEnable
	uint64_t m_nPlayerDominated; // 0x750	
	// MNetworkEnable
	uint64_t m_nPlayerDominatingMe; // 0x758	
	// MNetworkEnable
	int32_t m_iCompetitiveRanking; // 0x760	
	// MNetworkEnable
	int32_t m_iCompetitiveWins; // 0x764	
	// MNetworkEnable
	int8_t m_iCompetitiveRankType; // 0x768	
private:
	[[maybe_unused]] uint8_t __pad0769[0x3]; // 0x769
public:
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Win; // 0x76c	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Loss; // 0x770	
	// MNetworkEnable
	int32_t m_iCompetitiveRankingPredicted_Tie; // 0x774	
	// MNetworkEnable
	int32_t m_nEndMatchNextMapVote; // 0x778	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint16_t m_unActiveQuestId; // 0x77c	
private:
	[[maybe_unused]] uint8_t __pad077e[0x2]; // 0x77e
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	QuestProgress::Reason m_nQuestProgressReason; // 0x780	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_unPlayerTvControlFlags; // 0x784	
private:
	[[maybe_unused]] uint8_t __pad0788[0x28]; // 0x788
public:
	int32_t m_iDraftIndex; // 0x7b0	
	uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x7b4	
	uint32_t m_uiAbandonRecordedReason; // 0x7b8	
	bool m_bCannotBeKicked; // 0x7bc	
	bool m_bEverFullyConnected; // 0x7bd	
	bool m_bAbandonAllowsSurrender; // 0x7be	
	bool m_bAbandonOffersInstantSurrender; // 0x7bf	
	bool m_bDisconnection1MinWarningPrinted; // 0x7c0	
	bool m_bScoreReported; // 0x7c1	
private:
	[[maybe_unused]] uint8_t __pad07c2[0x2]; // 0x7c2
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nDisconnectionTick; // 0x7c4	
private:
	[[maybe_unused]] uint8_t __pad07c8[0x8]; // 0x7c8
public:
	// MNetworkEnable
	bool m_bControllingBot; // 0x7d0	
	// MNetworkEnable
	bool m_bHasControlledBotThisRound; // 0x7d1	
	bool m_bHasBeenControlledByPlayerThisRound; // 0x7d2	
private:
	[[maybe_unused]] uint8_t __pad07d3[0x1]; // 0x7d3
public:
	int32_t m_nBotsControlledThisRound; // 0x7d4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bCanControlObservedBot; // 0x7d8	
private:
	[[maybe_unused]] uint8_t __pad07d9[0x3]; // 0x7d9
public:
	// MNetworkEnable
	CHandle<C_CSPlayerPawn> m_hPlayerPawn; // 0x7dc	
	// MNetworkEnable
	CHandle<C_CSObserverPawn> m_hObserverPawn; // 0x7e0	
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
	// MNetworkEnable
	C_NetworkUtlVectorBase<EKillTypes_t> m_vecKills; // 0x808	
	// MNetworkEnable
	bool m_bMvpNoMusic; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0821[0x3]; // 0x821
public:
	// MNetworkEnable
	int32_t m_eMvpReason; // 0x824	
	// MNetworkEnable
	int32_t m_iMusicKitID; // 0x828	
	// MNetworkEnable
	int32_t m_iMusicKitMVPs; // 0x82c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMVPCountChanged"
	int32_t m_iMVPs; // 0x830	
	bool m_bIsPlayerNameDirty; // 0x834	
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
// Size: 0xdd8
// Has VTable
// 
// MNetworkVarNames "int m_nUniqueID"
// MNetworkVarNames "uint32 m_unAccountID"
// MNetworkVarNames "uint32 m_unTraceID"
// MNetworkVarNames "uint32 m_rtGcTime"
// MNetworkVarNames "Vector m_vecEndPos"
// MNetworkVarNames "Vector m_vecStart"
// MNetworkVarNames "Vector m_vecLeft"
// MNetworkVarNames "Vector m_vecNormal"
// MNetworkVarNames "int m_nPlayer"
// MNetworkVarNames "int m_nEntity"
// MNetworkVarNames "int m_nHitbox"
// MNetworkVarNames "float m_flCreationTime"
// MNetworkVarNames "int m_nTintID"
// MNetworkVarNames "uint8 m_nVersion"
// MNetworkVarNames "uint8 m_ubSignature"
class C_PlayerSprayDecal : public C_ModelPointEntity
{
public:
	// MNetworkEnable
	int32_t m_nUniqueID; // 0xcc8	
	// MNetworkEnable
	uint32_t m_unAccountID; // 0xccc	
	// MNetworkEnable
	uint32_t m_unTraceID; // 0xcd0	
	// MNetworkEnable
	uint32_t m_rtGcTime; // 0xcd4	
	// MNetworkEnable
	Vector m_vecEndPos; // 0xcd8	
	// MNetworkEnable
	Vector m_vecStart; // 0xce4	
	// MNetworkEnable
	Vector m_vecLeft; // 0xcf0	
	// MNetworkEnable
	Vector m_vecNormal; // 0xcfc	
	// MNetworkEnable
	int32_t m_nPlayer; // 0xd08	
	// MNetworkEnable
	int32_t m_nEntity; // 0xd0c	
	// MNetworkEnable
	int32_t m_nHitbox; // 0xd10	
	// MNetworkEnable
	float m_flCreationTime; // 0xd14	
	// MNetworkEnable
	int32_t m_nTintID; // 0xd18	
	// MNetworkEnable
	uint8_t m_nVersion; // 0xd1c	
	// MNetworkEnable
	uint8_t m_ubSignature[128]; // 0xd1d	
private:
	[[maybe_unused]] uint8_t __pad0d9d[0xb]; // 0xd9d
public:
	CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // 0xda8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
class C_WeaponM249 : public C_CSWeaponBaseGun
{
public:
	// No schema binary for binding
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
// Size: 0x378
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
	CUtlString m_strGenerateTexture_TargetParam; // 0x2e8	
	// MPropertyFriendlyName "Initial Container"
	// MPropertyAttrStateCallback
	CUtlString m_strGenerateTexture_InitialContainer; // 0x2f0	
	// MPropertyFriendlyName "Resolution"
	// MPropertyAttrStateCallback
	int32_t m_nResolution; // 0x2f8	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Scratch Target"
	// MPropertyAttrStateCallback
	bool m_bIsScratchTarget; // 0x2fc	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Splat Debug info on Texture"
	// MPropertyAttrStateCallback
	bool m_bSplatDebugInfo; // 0x2fd	
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Capture in RenderDoc"
	// MPropertyAttrStateCallback
	bool m_bCaptureInRenderDoc; // 0x2fe	
private:
	[[maybe_unused]] uint8_t __pad02ff[0x1]; // 0x2ff
public:
	// MPropertyFriendlyName "Texture Generation Instructions"
	// MPropertyAttrStateCallback
	CUtlVector<CompMatPropertyMutator_t> m_vecTexGenInstructions; // 0x300	
	// MPropertyFriendlyName "Mutators"
	// MPropertyAttrStateCallback
	CUtlVector<CompMatPropertyMutator_t> m_vecConditionalMutators; // 0x318	
	// MPropertyFriendlyName "Container to Pop"
	// MPropertyAttrStateCallback
	CUtlString m_strPopInputQueue_Container; // 0x330	
	// MPropertyFriendlyName "Input Container"
	// MPropertyAttrStateCallback
	CUtlString m_strDrawText_InputContainerSrc; // 0x338	
	// MPropertyFriendlyName "Input Container Property"
	// MPropertyAttrStateCallback
	CUtlString m_strDrawText_InputContainerProperty; // 0x340	
	// MPropertyFriendlyName "Text Position"
	// MPropertyAttrStateCallback
	Vector2D m_vecDrawText_Position; // 0x348	
	// MPropertyFriendlyName "Text Color"
	// MPropertyAttrStateCallback
	Color m_colDrawText_Color; // 0x350	
private:
	[[maybe_unused]] uint8_t __pad0354[0x4]; // 0x354
public:
	// MPropertyFriendlyName "Font"
	// MPropertyAttrStateCallback
	CUtlString m_strDrawText_Font; // 0x358	
	// MPropertyFriendlyName "Conditions"
	// MPropertyAttrStateCallback
	CUtlVector<CompMatMutatorCondition_t> m_vecConditions; // 0x360	
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
// Size: 0x8
// Has VTable
// Has Trivial Destructor
// 
// MGapTypeQueriesForScopeSingleton
class CClientGapTypeQueryRegistration
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// Static fields:
	static CClientGapTypeQueryRegistration &Get_s_Instance(){return *reinterpret_cast<CClientGapTypeQueryRegistration*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CClientGapTypeQueryRegistration")->m_static_fields[0]->m_instance);};
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
		uint8_t __pad3: 8;
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
// Size: 0xde0
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
// MNetworkIncludeByName "m_clrRender"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "uint32 m_nHorizontalSize"
// MNetworkVarNames "uint32 m_nVerticalSize"
// MNetworkVarNames "uint32 m_nMinDist"
// MNetworkVarNames "uint32 m_nMaxDist"
// MNetworkVarNames "uint32 m_nOuterMaxDist"
// MNetworkVarNames "float32 m_flGlowProxySize"
// MNetworkVarNames "float32 m_flHDRColorScale"
class C_LightGlow : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	uint32_t m_nHorizontalSize; // 0xcc8	
	// MNetworkEnable
	uint32_t m_nVerticalSize; // 0xccc	
	// MNetworkEnable
	uint32_t m_nMinDist; // 0xcd0	
	// MNetworkEnable
	uint32_t m_nMaxDist; // 0xcd4	
	// MNetworkEnable
	uint32_t m_nOuterMaxDist; // 0xcd8	
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "2"
	float m_flGlowProxySize; // 0xcdc	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	// MNetworkChangeCallback "OnHDRColorScaleChanged"
	float m_flHDRColorScale; // 0xce0	
private:
	[[maybe_unused]] uint8_t __pad0ce4[0x4]; // 0xce4
public:
	// -> m_vecOrigin - 0xdb8
	// -> m_vecDirection - 0xdc4
	// -> m_nMinDist - 0xdd0
	// -> m_nMaxDist - 0xdd4
	// -> m_nOuterMaxDist - 0xdd8
	// -> m_bOneSided - 0xddc
	// -> m_bModulateByDot - 0xddd
	C_LightGlowOverlay m_GlowOverlay; // 0xce8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x90
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
private:
	[[maybe_unused]] uint8_t __pad0028[0x30]; // 0x28
public:
	// MPropertyGroupName "Generated Composite Material"
	// MPropertyAttributeEditor "CompositeMaterialKVInspector"
	KeyValues3 m_FinalKVs; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	// MPropertyFriendlyName "Generated Textures"
	CUtlVector<GeneratedTextureHandle_t> m_vecGeneratedTextures; // 0x70	
};

