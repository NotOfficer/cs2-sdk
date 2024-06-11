#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: soundsystem.dll
// Classes count: 0 (Allocated) | 63 (Unallocated)
// Enums count: 0 (Allocated) | 18 (Unallocated)
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class EMode_t : uint32_t
{
	// MPropertyFriendlyName "Peak"
	Peak = 0x0,
	// MPropertyFriendlyName "RMS"
	RMS = 0x1,
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Enumerator count: 5
// Alignment: 1
// Size: 0x1
enum class EWaveform : uint8_t
{
	Sine = 0x0,
	Square = 0x1,
	Saw = 0x2,
	Triangle = 0x3,
	Noise = 0x4,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class VMixLFOShape_t : uint32_t
{
	LFO_SHAPE_SINE = 0x0,
	LFO_SHAPE_SQUARE = 0x1,
	LFO_SHAPE_TRI = 0x2,
	LFO_SHAPE_SAW = 0x3,
	LFO_SHAPE_NOISE = 0x4,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Enumerator count: 10
// Alignment: 2
// Size: 0x2
enum class VMixFilterType_t : uint16_t
{
	FILTER_UNKNOWN = 0xffffffffffffffff,
	FILTER_LOWPASS = 0x0,
	FILTER_HIGHPASS = 0x1,
	FILTER_BANDPASS = 0x2,
	FILTER_NOTCH = 0x3,
	FILTER_PEAKING_EQ = 0x4,
	FILTER_LOW_SHELF = 0x5,
	FILTER_HIGH_SHELF = 0x6,
	FILTER_ALLPASS = 0x7,
	FILTER_PASSTHROUGH = 0x8,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class SosActionStopType_t : uint32_t
{
	// MPropertyFriendlyName "None"
	SOS_STOPTYPE_NONE = 0x0,
	// MPropertyFriendlyName "Elapsed Time"
	SOS_STOPTYPE_TIME = 0x1,
	// MPropertyFriendlyName "Opvar Float"
	SOS_STOPTYPE_OPVAR = 0x2,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class SosEditItemType_t : uint32_t
{
	SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0x0,
	SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 0x1,
	SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 0x2,
	SOS_EDIT_ITEM_TYPE_STACK = 0x3,
	SOS_EDIT_ITEM_TYPE_OPERATOR = 0x4,
	SOS_EDIT_ITEM_TYPE_FIELD = 0x5,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SosActionSortType_t : uint32_t
{
	// MPropertyFriendlyName "Highest"
	SOS_SORTTYPE_HIGHEST = 0x0,
	// MPropertyFriendlyName "Lowest"
	SOS_SORTTYPE_LOWEST = 0x1,
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class PlayBackMode_t : uint32_t
{
	// MPropertyFriendlyName "Random"
	Random = 0x0,
	// MPropertyFriendlyName "Random No Repeats"
	RandomNoRepeats = 0x1,
	// MPropertyFriendlyName "Random Avoid Last"
	RandomAvoidLast = 0x2,
	// MPropertyFriendlyName "Sequential"
	Sequential = 0x3,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Enumerator count: 30
// Alignment: 2
// Size: 0x2
enum class VMixProcessorType_t : uint16_t
{
	VPROCESSOR_UNKNOWN = 0x0,
	VPROCESSOR_RT_PITCH = 0x1,
	VPROCESSOR_STEAMAUDIO_HRTF = 0x2,
	VPROCESSOR_DYNAMICS = 0x3,
	VPROCESSOR_PRESETDSP = 0x4,
	VPROCESSOR_DELAY = 0x5,
	VPROCESSOR_MOD_DELAY = 0x6,
	VPROCESSOR_DIFFUSOR = 0x7,
	VPROCESSOR_BOXVERB = 0x8,
	VPROCESSOR_FREEVERB = 0x9,
	VPROCESSOR_PLATEVERB = 0xa,
	VPROCESSOR_FULLWAVE_INTEGRATOR = 0xb,
	VPROCESSOR_FILTER = 0xc,
	VPROCESSOR_STEAMAUDIO_PATHING = 0xd,
	VPROCESSOR_EQ8 = 0xe,
	VPROCESSOR_ENVELOPE = 0xf,
	VPROCESSOR_VOCODER = 0x10,
	VPROCESSOR_CONVOLUTION = 0x11,
	VPROCESSOR_DYNAMICS_3BAND = 0x12,
	VPROCESSOR_DYNAMICS_COMPRESSOR = 0x13,
	VPROCESSOR_SHAPER = 0x14,
	VPROCESSOR_PANNER = 0x15,
	VPROCESSOR_UTILITY = 0x16,
	VPROCESSOR_AUTOFILTER = 0x17,
	VPROCESSOR_OSC = 0x18,
	VPROCESSOR_STEREODELAY = 0x19,
	VPROCESSOR_EFFECT_CHAIN = 0x1a,
	VPROCESSOR_SUBGRAPH_SWITCH = 0x1b,
	VPROCESSOR_STEAMAUDIO_DIRECT = 0x1c,
	VPROCESSOR_STEAMAUDIO_HYBRIDREVERB = 0x1d,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Enumerator count: 30
// Alignment: 4
// Size: 0x4
enum class soundlevel_t : uint32_t
{
	SNDLVL_NONE = 0x0,
	SNDLVL_20dB = 0x14,
	SNDLVL_25dB = 0x19,
	SNDLVL_30dB = 0x1e,
	SNDLVL_35dB = 0x23,
	SNDLVL_40dB = 0x28,
	SNDLVL_45dB = 0x2d,
	SNDLVL_50dB = 0x32,
	SNDLVL_55dB = 0x37,
	SNDLVL_IDLE = 0x3c,
	SNDLVL_60dB = 0x3c,
	SNDLVL_65dB = 0x41,
	SNDLVL_STATIC = 0x42,
	SNDLVL_70dB = 0x46,
	SNDLVL_NORM = 0x4b,
	SNDLVL_75dB = 0x4b,
	SNDLVL_80dB = 0x50,
	SNDLVL_TALKING = 0x50,
	SNDLVL_85dB = 0x55,
	SNDLVL_90dB = 0x5a,
	SNDLVL_95dB = 0x5f,
	SNDLVL_100dB = 0x64,
	SNDLVL_105dB = 0x69,
	SNDLVL_110dB = 0x6e,
	SNDLVL_120dB = 0x78,
	SNDLVL_130dB = 0x82,
	SNDLVL_GUNFIRE = 0x8c,
	SNDLVL_140dB = 0x8c,
	SNDLVL_150dB = 0x96,
	SNDLVL_180dB = 0xb4,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class VMixPannerType_t : uint32_t
{
	PANNER_TYPE_LINEAR = 0x0,
	PANNER_TYPE_EQUAL_POWER = 0x1,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class VMixChannelOperation_t : uint32_t
{
	VMIX_CHAN_STEREO = 0x0,
	VMIX_CHAN_LEFT = 0x1,
	VMIX_CHAN_RIGHT = 0x2,
	VMIX_CHAN_SWAP = 0x3,
	VMIX_CHAN_MONO = 0x4,
	VMIX_CHAN_MID_SIDE = 0x5,
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Enumerator count: 13
// Alignment: 1
// Size: 0x1
enum class EMidiNote : uint8_t
{
	C = 0x0,
	C_Sharp = 0x1,
	D = 0x2,
	D_Sharp = 0x3,
	E = 0x4,
	F = 0x5,
	F_Sharp = 0x6,
	G = 0x7,
	G_Sharp = 0x8,
	A = 0x9,
	A_Sharp = 0xa,
	B = 0xb,
	Count = 0xc,
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Enumerator count: 4
// Alignment: 1
// Size: 0x1
enum class CVSoundFormat_t : uint8_t
{
	PCM16 = 0x0,
	PCM8 = 0x1,
	MP3 = 0x2,
	ADPCM = 0x3,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Enumerator count: 9
// Alignment: 1
// Size: 0x1
enum class VMixFilterSlope_t : uint8_t
{
	FILTER_SLOPE_1POLE_6dB = 0x0,
	FILTER_SLOPE_1POLE_12dB = 0x1,
	FILTER_SLOPE_1POLE_18dB = 0x2,
	FILTER_SLOPE_1POLE_24dB = 0x3,
	FILTER_SLOPE_12dB = 0x4,
	FILTER_SLOPE_24dB = 0x5,
	FILTER_SLOPE_36dB = 0x6,
	FILTER_SLOPE_48dB = 0x7,
	FILTER_SLOPE_MAX = 0x7,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Enumerator count: 8
// Alignment: 4
// Size: 0x4
enum class ActionType_t : uint32_t
{
	// MPropertyFriendlyName "None"
	SOS_ACTION_NONE = 0x0,
	// MPropertyFriendlyName "Limiter"
	SOS_ACTION_LIMITER = 0x1,
	// MPropertyFriendlyName "Time Limiter"
	SOS_ACTION_TIME_LIMIT = 0x2,
	// MPropertyFriendlyName "Timed Block Limiter"
	SOS_ACTION_TIME_BLOCK_LIMITER = 0x3,
	// MPropertyFriendlyName "Set Sound Event Parameter"
	SOS_ACTION_SET_SOUNDEVENT_PARAM = 0x4,
	// MPropertyFriendlyName "Soundevent Cluster"
	SOS_ACTION_SOUNDEVENT_CLUSTER = 0x5,
	// MPropertyFriendlyName "Soundevent Priority"
	SOS_ACTION_SOUNDEVENT_PRIORITY = 0x6,
	// MPropertyFriendlyName "Count Envelope"
	SOS_ACTION_COUNT_ENVELOPE = 0x7,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class VMixSubgraphSwitchInterpolationType_t : uint32_t
{
	SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0x0,
	SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 0x1,
	SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 0x2,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SosGroupType_t : uint32_t
{
	// MPropertyFriendlyName "Dynamic"
	SOS_GROUPTYPE_DYNAMIC = 0x0,
	// MPropertyFriendlyName "Static"
	SOS_GROUPTYPE_STATIC = 0x1,
};

struct CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance;
struct VMixFilterDesc_t;
struct CSosGroupMatchPattern;
struct CSosGroupBranchPattern;
struct CVSound;
struct CAudioMorphData;

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x80
// 
// MGetKV3ClassDefaults
class CVSound
{
public:
	int32_t m_nRate; // 0x0	
	CVSoundFormat_t m_nFormat; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	uint32_t m_nChannels; // 0x8	
	int32_t m_nLoopStart; // 0xc	
	uint32_t m_nSampleCount; // 0x10	
	float m_flDuration; // 0x14	
	CUtlVector<CAudioSentence> m_Sentences; // 0x18	
	uint32_t m_nStreamingSize; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	CUtlVector<int32> m_nSeekTable; // 0x38	
	int32_t m_nLoopEnd; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	// MFgdFromSchemaCompletelySkipField
	CUtlBinaryBlock m_encodedHeader; // 0x58	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixFreeverbDesc_t
{
public:
	float m_flRoomSize; // 0x0	
	float m_flDamp; // 0x4	
	float m_flWidth; // 0x8	
	float m_flLateReflections; // 0xc	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance
{
public:
	// MPropertyFriendlyName "Quietest Volume"
	float m_flMinVolume; // 0x0	
	// MPropertyFriendlyName "# Instances Playing Until We Get Louder Than Quietest Volume"
	int32_t m_nInstancesAtMinVolume; // 0x4	
	// MPropertyFriendlyName "Loudest Volume"
	float m_flMaxVolume; // 0x8	
	// MPropertyFriendlyName "# Instances Playing Required To Reach Loudest Volume"
	int32_t m_nInstancesAtMaxVolume; // 0xc	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x60
// 
// MGetKV3ClassDefaults
class CVoiceContainerStaticAdditiveSynth::CTone
{
public:
	// MPropertyFriendlyName "Harmonics"
	CUtlVector<CVoiceContainerStaticAdditiveSynth::CHarmonic> m_harmonics; // 0x0	
	// MPropertyFriendlyName "Envelope"
	CPiecewiseCurve m_curve; // 0x18	
	// MPropertyFriendlyName "Play All Instances In Sync"
	bool m_bSyncInstances; // 0x58	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0xf0
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataRoot
// MVDataNodeType
// MFgdFromSchemaEditablePolymorphicThisClass
// MVDataFileExtension
// MPropertyFriendlyName "VSND Container"
// MPropertyDescription "Voice Container Base"
class CVoiceContainerBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertySuppressField
	// -> m_nRate - 0x20
	// -> m_nFormat - 0x24
	// -> m_nChannels - 0x28
	// -> m_nLoopStart - 0x2c
	// -> m_nSampleCount - 0x30
	// -> m_flDuration - 0x34
	// -> m_Sentences - 0x38
	// -> m_nStreamingSize - 0x50
	// -> m_nSeekTable - 0x58
	// -> m_nLoopEnd - 0x70
	// -> m_encodedHeader - 0x78
	CVSound m_vSound; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad00a0[0x30]; // 0xa0
public:
	// MPropertyFriendlyName "Enable Analyzers"
	bool m_bHideAnalyzers; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d1[0x7]; // 0xd1
public:
	// MPropertyFriendlyName "Container Analyzers"
	// MPropertySuppressExpr "m_bHideAnalyzers == false"
	CUtlVector<CVoiceContainerAnalysisBase*> m_analysisContainers; // 0xd8	
	
	// Static fields:
	static bool &Get_bAudioFinishedPlaying(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("soundsystem.dll")->FindDeclaredClass("CVoiceContainerBase")->m_static_fields[0]->m_instance);};
	static bool &Get_bAudioStillPlaying(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("soundsystem.dll")->FindDeclaredClass("CVoiceContainerBase")->m_static_fields[1]->m_instance);};
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Default Container"
// MPropertyDescription "Voice Container Default"
class CVoiceContainerDefault : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Vsnd"
	// MPropertyDescription "Load the audio content into the kv3 content"
	CStrongHandle<InfoForResourceTypeCVoiceContainerBase> m_vsndReference; // 0xf0	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x218
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Random Smapler Container"
// MPropertyDescription "Trash Synth"
class CVoiceContainerRandomSampler : public CVoiceContainerBase
{
public:
	float m_flAmplitude; // 0xf0	
	float m_flAmplitudeJitter; // 0xf4	
	float m_flTimeJitter; // 0xf8	
	float m_flMaxLength; // 0xfc	
	int32_t m_nNumDelayVariations; // 0x100	
private:
	[[maybe_unused]] uint8_t __pad0104[0x4]; // 0x104
public:
	CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>> m_grainResources; // 0x108	
	
	// Static fields:
	static int32_t &Get_nInstancesFixed(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("soundsystem.dll")->FindDeclaredClass("CVoiceContainerRandomSampler")->m_static_fields[0]->m_instance);};
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
// MVDataRoot
// MVDataNodeType
class CDSPPresetMixgroupModifierTable
{
public:
	// MPropertyDescription "Table of mixgroup modifiers for effect names."
	// MPropertyFriendlyName "Modifier Table"
	CUtlVector<CDspPresetModifierList> m_table; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyElementNameFn
class CSosGroupActionSchema
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8	
	// MPropertyFriendlyName "Action Type"
	ActionType_t m_actionType; // 0x10	
	// MPropertySuppressField
	ActionType_t m_actionInstanceType; // 0x14	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
class CSosGroupActionSetSoundeventParameterSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Count"
	int32_t m_nMaxCount; // 0x18	
	// MPropertyFriendlyName "Minimum Value"
	float m_flMinValue; // 0x1c	
	// MPropertyFriendlyName "Maximum Value"
	float m_flMaxValue; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	// MPropertyFriendlyName "Parameter Name"
	CUtlString m_opvarName; // 0x28	
	// MPropertyFriendlyName "Sort Type"
	SosActionSortType_t m_nSortType; // 0x30	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0xf0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Null Container"
// MPropertyDescription "Plays a single channel of silence."
class CVoiceContainerNull : public CVoiceContainerBase
{
public:
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0xc
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixSubgraphSwitchDesc_t
{
public:
	VMixSubgraphSwitchInterpolationType_t m_interpolationMode; // 0x0	
	bool m_bOnlyTailsOnFadeOut; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	float m_flInterpolationTime; // 0x8	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataNodeType
// MFgdFromSchemaEditablePolymorphicThisClass
// MPropertyFriendlyName "Analysis Container"
// MPropertyDescription "Does Not Play Sound, member of CVoiceContainerDefaultDefault"
class CVoiceContainerAnalysisBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Regenerate curve on compile"
	bool m_bRegenerateCurveOnCompile; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x7]; // 0x9
public:
	// MPropertyFriendlyName "Envelope Curve"
	CPiecewiseCurve m_curve; // 0x10	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixPannerDesc_t
{
public:
	VMixPannerType_t m_type; // 0x0	
	float m_flStrength; // 0x4	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
class CSosGroupActionSoundeventPrioritySchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Priority Value, typically 0.0 to 1.0"
	CUtlString m_priorityValue; // 0x18	
	// MPropertyFriendlyName "Priority-Based Volume Multiplier, 0.0 to 1.0"
	CUtlString m_priorityVolumeScalar; // 0x20	
	// MPropertyFriendlyName "Contribute to the priority system, but volume is unaffected by it (bool)"
	CUtlString m_priorityContributeButDontRead; // 0x28	
	// MPropertyFriendlyName "Don't contribute to the priority system, but volume is affected by it (bool)"
	CUtlString m_bPriorityReadButDontContribute; // 0x30	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "FM Synth Container"
// MPropertyDescription "Real time FM Synthesis"
class CVoiceContainerRealtimeFMSineWave : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Frequency (Hz)"
	// MPropertyDescription "The frequency of this sine tone."
	float m_flCarrierFrequency; // 0xf0	
	// MPropertyFriendlyName "Mod Frequency (Hz)"
	// MPropertyDescription "The frequency of the sine tone modulating this sine tone."
	float m_flModulatorFrequency; // 0xf4	
	// MPropertyFriendlyName "Mod Amount (Hz)"
	// MPropertyDescription "The amount the modulating sine tone modulates this sine tone."
	float m_flModulatorAmount; // 0xf8	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
struct SelectedEditItemInfo_t
{
public:
	CUtlVector<SosEditItemInfo_t> m_EditItems; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixFilterDesc_t
{
public:
	VMixFilterType_t m_nFilterType; // 0x0	
	VMixFilterSlope_t m_nFilterSlope; // 0x2	
	bool m_bEnabled; // 0x3	
	float m_fldbGain; // 0x4	
	float m_flCutoffFreq; // 0x8	
	float m_flQ; // 0xc	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x50
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixBoxverbDesc_t
{
public:
	float m_flSizeMax; // 0x0	
	float m_flSizeMin; // 0x4	
	float m_flComplexity; // 0x8	
	float m_flDiffusion; // 0xc	
	float m_flModDepth; // 0x10	
	float m_flModRate; // 0x14	
	bool m_bParallel; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
	VMixFilterDesc_t m_filterType; // 0x1c	
	float m_flWidth; // 0x2c	
	float m_flHeight; // 0x30	
	float m_flDepth; // 0x34	
	float m_flFeedbackScale; // 0x38	
	float m_flFeedbackWidth; // 0x3c	
	float m_flFeedbackHeight; // 0x40	
	float m_flFeedbackDepth; // 0x44	
	float m_flOutputGain; // 0x48	
	float m_flTaps; // 0x4c	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
class CSosGroupActionSoundeventClusterSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Minimum Nearby Soundevents"
	int32_t m_nMinNearby; // 0x18	
	// MPropertyFriendlyName "Search Radius to Cluster Soundevents"
	float m_flClusterEpsilon; // 0x1c	
	// MPropertyFriendlyName "'Should Play' Opvar Name"
	CUtlString m_shouldPlayOpvar; // 0x20	
	// MPropertyFriendlyName "'Should Play Cluster Child' Opvar Name"
	CUtlString m_shouldPlayClusterChild; // 0x28	
	// MPropertyFriendlyName "Cluster Size Opvar Name"
	CUtlString m_clusterSizeOpvar; // 0x30	
	// MPropertyFriendlyName "'Group Box Mins' Opvar Name"
	CUtlString m_groupBoundingBoxMinsOpvar; // 0x38	
	// MPropertyFriendlyName "'Group Box Maxs' Opvar Name"
	CUtlString m_groupBoundingBoxMaxsOpvar; // 0x40	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CSosGroupBranchPattern
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Event Name"
	bool m_bMatchEventName; // 0x8	
	// MPropertyFriendlyName "Sub-String"
	bool m_bMatchEventSubString; // 0x9	
	// MPropertyFriendlyName "Source Entity Index"
	bool m_bMatchEntIndex; // 0xa	
	// MPropertyFriendlyName "Opvar Float"
	bool m_bMatchOpvar; // 0xb	
	// MPropertyFriendlyName "Opvar String"
	bool m_bMatchString; // 0xc	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
class CSosGroupMatchPattern : public CSosGroupBranchPattern
{
public:
	// MPropertyFriendlyName "Event Name"
	CUtlString m_matchSoundEventName; // 0x10	
	// MPropertyFriendlyName "Sub-String"
	CUtlString m_matchSoundEventSubString; // 0x18	
	// MPropertyFriendlyName "Source Entity Index"
	float m_flEntIndex; // 0x20	
	// MPropertyFriendlyName "Opvar Float"
	float m_flOpvar; // 0x24	
	// MPropertyFriendlyName "Opvar String"
	CUtlString m_opvarString; // 0x28	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x90
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixDynamics3BandDesc_t
{
public:
	float m_fldbGainOutput; // 0x0	
	float m_flRMSTimeMS; // 0x4	
	float m_fldbKneeWidth; // 0x8	
	float m_flDepth; // 0xc	
	float m_flWetMix; // 0x10	
	float m_flTimeScale; // 0x14	
	float m_flLowCutoffFreq; // 0x18	
	float m_flHighCutoffFreq; // 0x1c	
	bool m_bPeakMode; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x3]; // 0x21
public:
	VMixDynamicsBand_t m_bandDesc[3]; // 0x24	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
class CDSPMixgroupModifier
{
public:
	// MPropertyDescription "Name of the mixgroup. TODO: needs to be autopopulated with mixgroups."
	// MPropertyFriendlyName "Mixgroup Name"
	CUtlString m_mixgroup; // 0x0	
	// MPropertyDescription "The amount to multiply the volume of the non-spatialized reverb/dsp by when at the max reverb blend distance. 1.0 leaves the volume unchanged."
	// MPropertyFriendlyName "Max reverb gain amount for listener DSP."
	float m_flModifier; // 0x8	
	// MPropertyDescription "The amount to multiply the volume of the non-spatialized reverb/dsp by when at the min reverb blend distance. 1.0 leaves the volume unchanged."
	// MPropertyFriendlyName "Min reverb gain amount amount for listener DSP."
	float m_flModifierMin; // 0xc	
	// MPropertyDescription "If set to >= 0, we will use this mix modifier for source-specific DSP effects. Otherwise we will use the listener DSP value."
	// MPropertyFriendlyName "Max reverb gain amount for source-specific DSP."
	float m_flSourceModifier; // 0x10	
	// MPropertyDescription "If set to >= 0, we will use this mix modifier for source-specific DSP effects. Otherwise we will use the listener DSP value."
	// MPropertyFriendlyName "Min reverb gain amount for source-specific DSP."
	float m_flSourceModifierMin; // 0x14	
	// MPropertyDescription "When a source has source-specific DSP, this can be used as an additional mix stage for the listener reverb amount."
	// MPropertyFriendlyName "Modification amount for listener DSP when source DSP is used."
	float m_flListenerReverbModifierWhenSourceReverbIsActive; // 0x18	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x68
// 
// MGetKV3ClassDefaults
class CAudioMorphData
{
public:
	CUtlVector<float32> m_times; // 0x0	
	CUtlVector<uint32> m_nameHashCodes; // 0x18	
	CUtlVector<CUtlString> m_nameStrings; // 0x30	
	CUtlVector<CUtlVector<float32>> m_samples; // 0x48	
	float m_flEaseIn; // 0x60	
	float m_flEaseOut; // 0x64	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Additive Synth Container"
// MPropertyDescription "This is a static additive synth that can scale components of the synth based on how many instances are running."
class CVoiceContainerStaticAdditiveSynth : public CVoiceContainerBase
{
public:
	CUtlVector<CVoiceContainerStaticAdditiveSynth::CTone> m_tones; // 0xf0	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
class CDspPresetModifierList
{
public:
	// MPropertyDescription "Name of the DSP effect / subgraph used."
	// MPropertyFriendlyName "DSP Effect Name"
	CUtlString m_dspName; // 0x0	
	// MPropertyDescription "Set of modifiers for individual mix groups"
	// MPropertyFriendlyName "Mixgroup Modifiers"
	CUtlVector<CDSPMixgroupModifier> m_modifiers; // 0x8	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Blender"
// MPropertyDescription "Blends two containers."
class CVoiceContainerBlender : public CVoiceContainerBase
{
public:
	CStrongHandle<InfoForResourceTypeCVoiceContainerBase> m_firstSound; // 0xf0	
	CStrongHandle<InfoForResourceTypeCVoiceContainerBase> m_secondSound; // 0xf8	
	float m_flBlendFactor; // 0x100	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x28
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixDelayDesc_t
{
public:
	VMixFilterDesc_t m_feedbackFilter; // 0x0	
	bool m_bEnableFilter; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	float m_flDelay; // 0x14	
	float m_flDirectGain; // 0x18	
	float m_flDelayGain; // 0x1c	
	float m_flFeedbackGain; // 0x20	
	float m_flWidth; // 0x24	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x80
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixEQ8Desc_t
{
public:
	VMixFilterDesc_t m_stages[8]; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 4
// Size: 0xc
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CAudioPhonemeTag
{
public:
	float m_flStartTime; // 0x0	
	float m_flEndTime; // 0x4	
	int32_t m_nPhonemeCode; // 0x8	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Envelope Analyzer"
// MPropertyDescription "Generates an Envelope Curve on compile"
class CVoiceContainerEnvelopeAnalyzer : public CVoiceContainerAnalysisBase
{
public:
	// MPropertyFriendlyName "Envelope Mode"
	EMode_t m_mode; // 0x50	
	// MPropertyFriendlyName "Number of sections"
	int32_t m_nSamples; // 0x54	
	// MPropertyFriendlyName "Threshold"
	float m_flThreshold; // 0x58	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x8
// 
// MGetKV3ClassDefaults
class CSoundEventMetaData
{
public:
	CStrongHandle<InfoForResourceTypeCVMixListResource> m_soundEventVMix; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixPitchShiftDesc_t
{
public:
	int32_t m_nGrainSampleCount; // 0x0	
	float m_flPitchShift; // 0x4	
	int32_t m_nQuality; // 0x8	
	int32_t m_nProcType; // 0xc	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CAudioEmphasisSample
{
public:
	float m_flTime; // 0x0	
	float m_flValue; // 0x4	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x20
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixConvolutionDesc_t
{
public:
	// MPropertyFriendlyName "gain of wet signal (dB)"
	// MPropertyAttributeRange "-36 3"
	float m_fldbGain; // 0x0	
	// MPropertyFriendlyName "Pre-delay (ms)"
	float m_flPreDelayMS; // 0x4	
	// MPropertyFriendlyName "Dry/Wet"
	float m_flWetMix; // 0x8	
	// MPropertyFriendlyName "Low EQ gain (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_fldbLow; // 0xc	
	// MPropertyFriendlyName "Mid EQ gain (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_fldbMid; // 0x10	
	// MPropertyFriendlyName "High EQ gain (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_fldbHigh; // 0x14	
	// MPropertyFriendlyName "Low Cutoff Freq (Hz)"
	float m_flLowCutoffFreq; // 0x18	
	// MPropertyFriendlyName "High Cutoff Freq (Hz)"
	float m_flHighCutoffFreq; // 0x1c	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CSoundInfoHeader
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
class CSosSoundEventGroupListSchema
{
public:
	// MPropertyAutoExpandSelf
	// MPropertyFriendlyName "Groups"
	CUtlVector<CSosSoundEventGroupSchema> m_groupList; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0xe0
// 
// MGetKV3ClassDefaults
// MPropertyElementNameFn
class CSosSoundEventGroupSchema
{
public:
	// MPropertyFriendlyName "Group Name"
	CUtlString m_name; // 0x0	
	// MPropertyFriendlyName "Group Type"
	SosGroupType_t m_nType; // 0x8	
	// MPropertyFriendlyName "Blocks Events"
	bool m_bIsBlocking; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
public:
	// MPropertyFriendlyName "Block Max Count"
	int32_t m_nBlockMaxCount; // 0x10	
	// MPropertyFriendlyName "Invert Match"
	bool m_bInvertMatch; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	// MPropertyFriendlyName "Match Rules"
	// -> m_matchSoundEventName - 0x28
	// -> m_matchSoundEventSubString - 0x30
	// -> m_flEntIndex - 0x38
	// -> m_flOpvar - 0x3c
	// -> m_opvarString - 0x40
	CSosGroupMatchPattern m_matchPattern; // 0x18	
	// MPropertyFriendlyName "Branch Rules"
	// -> m_bMatchEventName - 0x50
	// -> m_bMatchEventSubString - 0x51
	// -> m_bMatchEntIndex - 0x52
	// -> m_bMatchOpvar - 0x53
	// -> m_bMatchString - 0x54
	CSosGroupBranchPattern m_branchPattern; // 0x48	
	// MPropertyFriendlyName "Member Lifespan Time"
	float m_flLifeSpanTime; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005c[0x64]; // 0x5c
public:
	// MPropertyFriendlyName "Actions"
	CSosGroupActionSchema* m_vActions[4]; // 0xc0	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
struct SosEditItemInfo_t
{
public:
	SosEditItemType_t itemType; // 0x0	
	CUtlString itemName; // 0x8	
	CUtlString itemTypeName; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
public:
	CUtlString itemKVString; // 0x20	
	Vector2D itemPos; // 0x28	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x1c
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixPlateverbDesc_t
{
public:
	float m_flPrefilter; // 0x0	
	float m_flInputDiffusion1; // 0x4	
	float m_flInputDiffusion2; // 0x8	
	float m_flDecay; // 0xc	
	float m_flDamp; // 0x10	
	float m_flFeedbackDiffusion1; // 0x14	
	float m_flFeedbackDiffusion2; // 0x18	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixDiffusorDesc_t
{
public:
	float m_flSize; // 0x0	
	float m_flComplexity; // 0x4	
	float m_flFeedback; // 0x8	
	float m_flOutputGain; // 0xc	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x24
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixDynamicsCompressorDesc_t
{
public:
	// MPropertyFriendlyName "Output Gain (dB)"
	float m_fldbOutputGain; // 0x0	
	// MPropertyFriendlyName "Threshold (dB)"
	float m_fldbCompressionThreshold; // 0x4	
	// MPropertyFriendlyName "Knee Width (dB)"
	float m_fldbKneeWidth; // 0x8	
	// MPropertyFriendlyName "Compression Ratio"
	float m_flCompressionRatio; // 0xc	
	// MPropertyFriendlyName "Attack time (ms)"
	float m_flAttackTimeMS; // 0x10	
	// MPropertyFriendlyName "Release time (ms)"
	float m_flReleaseTimeMS; // 0x14	
	// MPropertyFriendlyName "Threshold detection time (ms)"
	float m_flRMSTimeMS; // 0x18	
	// MPropertyFriendlyName "Dry/Wet"
	float m_flWetMix; // 0x1c	
	// MPropertyFriendlyName "Peak mode"
	bool m_bPeakMode; // 0x20	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixShaperDesc_t
{
public:
	// MPropertyFriendlyName "Shape"
	// MPropertyAttributeRange "0 14"
	int32_t m_nShape; // 0x0	
	// MPropertyFriendlyName "Drive (dB)"
	// MPropertyAttributeRange "0 36"
	float m_fldbDrive; // 0x4	
	// MPropertyFriendlyName "Output Gain (dB)"
	// MPropertyAttributeRange "-36 0"
	float m_fldbOutputGain; // 0x8	
	// MPropertyFriendlyName "Dry/Wet"
	float m_flWetMix; // 0xc	
	// MPropertyFriendlyName "Oversampling"
	int32_t m_nOversampleFactor; // 0x10	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0xc
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixEnvelopeDesc_t
{
public:
	float m_flAttackTimeMS; // 0x0	
	float m_flHoldTimeMS; // 0x4	
	float m_flReleaseTimeMS; // 0x8	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0xa0
// 
// MGetKV3ClassDefaults
class CAudioSentence
{
public:
	bool m_bShouldVoiceDuck; // 0x0	
	CUtlVector<CAudioPhonemeTag> m_RunTimePhonemes; // 0x8	
	CUtlVector<CAudioEmphasisSample> m_EmphasisSamples; // 0x20	
	// -> m_times - 0x38
	// -> m_nameHashCodes - 0x50
	// -> m_nameStrings - 0x68
	// -> m_samples - 0x80
	// -> m_flEaseIn - 0x98
	// -> m_flEaseOut - 0x9c
	CAudioMorphData m_morphData; // 0x38	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
class CSosGroupActionLimitSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Count"
	int32_t m_nMaxCount; // 0x18	
	// MPropertyFriendlyName "Stop Type"
	SosActionStopType_t m_nStopType; // 0x1c	
	// MPropertyFriendlyName "Sort Type"
	SosActionSortType_t m_nSortType; // 0x20	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Decaying Sine Wave Container"
// MPropertyDescription "Only text params, renders in real time"
class CVoiceContainerDecayingSineWave : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Frequency (Hz)"
	// MPropertyDescription "The frequency of this sine tone."
	float m_flFrequency; // 0xf0	
	// MPropertyFriendlyName "Decay Time (Seconds)"
	// MPropertyDescription "The frequency of this sine tone."
	float m_flDecayTime; // 0xf4	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x2c
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixAutoFilterDesc_t
{
public:
	float m_flEnvelopeAmount; // 0x0	
	float m_flAttackTimeMS; // 0x4	
	float m_flReleaseTimeMS; // 0x8	
	VMixFilterDesc_t m_filter; // 0xc	
	float m_flLFOAmount; // 0x1c	
	float m_flLFORate; // 0x20	
	float m_flPhase; // 0x24	
	VMixLFOShape_t m_nLFOShape; // 0x28	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x24
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixDynamicsBand_t
{
public:
	// MPropertyFriendlyName "Input Gain (dB)"
	float m_fldbGainInput; // 0x0	
	// MPropertyFriendlyName "Output Gain (dB)"
	float m_fldbGainOutput; // 0x4	
	// MPropertyFriendlyName "Below Threshold(dB)"
	float m_fldbThresholdBelow; // 0x8	
	// MPropertyFriendlyName "Above Threshold(dB)"
	float m_fldbThresholdAbove; // 0xc	
	// MPropertyFriendlyName "Upward Ratio"
	float m_flRatioBelow; // 0x10	
	// MPropertyFriendlyName "Downward Ratio"
	float m_flRatioAbove; // 0x14	
	// MPropertyFriendlyName "Attack time (ms)"
	float m_flAttackTimeMS; // 0x18	
	// MPropertyFriendlyName "Release time (ms)"
	float m_flReleaseTimeMS; // 0x1c	
	// MPropertyFriendlyName "Enabled"
	bool m_bEnable; // 0x20	
	// MPropertyFriendlyName "Solo"
	bool m_bSolo; // 0x21	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixEffectChainDesc_t
{
public:
	// MPropertyFriendlyName "Crossfade Time (s)"
	// MPropertyAttributeRange "0.1 10"
	float m_flCrossfadeTime; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x68
// 
// MGetKV3ClassDefaults
class CVoiceContainerStaticAdditiveSynth::CHarmonic
{
public:
	// MPropertyFriendlyName "Waveform"
	EWaveform m_nWaveform; // 0x0	
	// MPropertyFriendlyName "Note"
	EMidiNote m_nFundamental; // 0x1	
private:
	[[maybe_unused]] uint8_t __pad0002[0x2]; // 0x2
public:
	// MPropertyFriendlyName "Octave"
	int32_t m_nOctave; // 0x4	
	// MPropertyFriendlyName "Cents To Detune ( -100:100 )"
	float m_flCents; // 0x8	
	// MPropertyFriendlyName "Phase ( 0 - 1 )"
	float m_flPhase; // 0xc	
	// MPropertyFriendlyName "Envelope (Relative to Tone Envelope)"
	CPiecewiseCurve m_curve; // 0x10	
	// -> m_flMinVolume - 0x50
	// -> m_nInstancesAtMinVolume - 0x54
	// -> m_flMaxVolume - 0x58
	// -> m_nInstancesAtMaxVolume - 0x5c
	CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance m_volumeScaling; // 0x50	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x130
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Selector"
// MPropertyDescription "Plays a selected vsnd on playback."
class CVoiceContainerSelector : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Playback Mode"
	PlayBackMode_t m_mode; // 0xf0	
	// MPropertyFriendlyName "Retrigger"
	bool m_bRetrigger; // 0xf4	
private:
	[[maybe_unused]] uint8_t __pad00f5[0x3]; // 0xf5
public:
	// MPropertyFriendlyName "Sounds To play"
	CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>> m_soundsToPlay; // 0xf8	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
class CSosGroupActionTimeBlockLimitSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Count"
	int32_t m_nMaxCount; // 0x18	
	// MPropertyFriendlyName "Max Time"
	float m_flMaxDuration; // 0x1c	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
class CSosGroupActionMemberCountEnvelopeSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Min Threshold Count"
	int32_t m_nBaseCount; // 0x18	
	// MPropertyFriendlyName "Max Target Count"
	int32_t m_nTargetCount; // 0x1c	
	// MPropertyFriendlyName "Threshold Value"
	float m_flBaseValue; // 0x20	
	// MPropertyFriendlyName "Target Value"
	float m_flTargetValue; // 0x24	
	// MPropertyFriendlyName "Attack"
	float m_flAttack; // 0x28	
	// MPropertyFriendlyName "Decay"
	float m_flDecay; // 0x2c	
	// MPropertyFriendlyName "Result Variable Name"
	CUtlString m_resultVarName; // 0x30	
	// MPropertyFriendlyName "Save Result to Group"
	bool m_bSaveToGroup; // 0x38	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Container Switch"
// MPropertyDescription "An array of containers"
class CVoiceContainerSwitch : public CVoiceContainerBase
{
public:
	// MPropertyFriendlyName "Container List"
	CUtlVector<CVoiceContainerBase*> m_soundsToPlay; // 0xf0	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
class CSosGroupActionTimeLimitSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Time"
	float m_flMaxDuration; // 0x18	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x28
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixVocoderDesc_t
{
public:
	int32_t m_nBandCount; // 0x0	
	float m_flBandwidth; // 0x4	
	float m_fldBModGain; // 0x8	
	float m_flFreqRangeStart; // 0xc	
	float m_flFreqRangeEnd; // 0x10	
	float m_fldBUnvoicedGain; // 0x14	
	float m_flAttackTimeMS; // 0x18	
	float m_flReleaseTimeMS; // 0x1c	
	int32_t m_nDebugBand; // 0x20	
	bool m_bPeakMode; // 0x24	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixUtilityDesc_t
{
public:
	// MPropertyFriendlyName "Channels"
	VMixChannelOperation_t m_nOp; // 0x0	
	// MPropertyFriendlyName "Input Pan"
	// MPropertyAttributeRange "-1 1"
	float m_flInputPan; // 0x4	
	// MPropertyFriendlyName "Output Balance"
	// MPropertyAttributeRange "-1 1"
	float m_flOutputBalance; // 0x8	
	// MPropertyFriendlyName "Output Gain (dB)"
	// MPropertyAttributeRange "-36 0"
	float m_fldbOutputGain; // 0xc	
	bool m_bBassMono; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	float m_flBassFreq; // 0x14	
};

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Amped Decaying Sine Wave Container"
// MPropertyDescription "Bytecode instruction"
class CVoiceContainerAmpedDecayingSineWave : public CVoiceContainerDecayingSineWave
{
public:
	// MPropertyFriendlyName "Attenuation Amount (dB)"
	// MPropertyDescription "The amount of attenuation ."
	float m_flGainAmount; // 0xf8	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x30
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixModDelayDesc_t
{
public:
	VMixFilterDesc_t m_feedbackFilter; // 0x0	
	bool m_bPhaseInvert; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	float m_flGlideTime; // 0x14	
	float m_flDelay; // 0x18	
	float m_flOutputGain; // 0x1c	
	float m_flFeedbackGain; // 0x20	
	float m_flModRate; // 0x24	
	float m_flModDepth; // 0x28	
	bool m_bApplyAntialiasing; // 0x2c	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixOscDesc_t
{
public:
	// MPropertyFriendlyName "Type"
	VMixLFOShape_t oscType; // 0x0	
	// MPropertyFriendlyName "Frequency (Hz)"
	// MPropertyAttributeRange "0.1 16000"
	float m_freq; // 0x4	
	// MPropertyFriendlyName "Phase (degrees)"
	// MPropertyAttributeRange "0 360"
	float m_flPhase; // 0x8	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x30
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixDynamicsDesc_t
{
public:
	float m_fldbGain; // 0x0	
	float m_fldbNoiseGateThreshold; // 0x4	
	float m_fldbCompressionThreshold; // 0x8	
	float m_fldbLimiterThreshold; // 0xc	
	float m_fldbKneeWidth; // 0x10	
	float m_flRatio; // 0x14	
	float m_flLimiterRatio; // 0x18	
	float m_flAttackTimeMS; // 0x1c	
	float m_flReleaseTimeMS; // 0x20	
	float m_flRMSTimeMS; // 0x24	
	float m_flWetMix; // 0x28	
	bool m_bPeakMode; // 0x2c	
};

