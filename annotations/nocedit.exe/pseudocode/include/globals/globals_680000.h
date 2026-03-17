#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/signal.h"
#include "system/stdio.h"
#include "system/stdlib.h"
#include "system/syncapi.h"
#include "system/time.h"
#include "system/watcom.h"
#include "system/wincon.h"
#include "system/windef.h"
#include "system/winnt.h"
#include "system/winuser.h"
#include "types/classes/CDemonPod.h"
#include "types/classes/CDemonSet.h"
#include "types/classes/CMouse.h"
#include "types/classes/CNetGame.h"
#include "types/classes/CProceduralTexture.h"
#include "types/classes/CScript.h"
#include "types/classes/CSlew.h"
#include "types/classes/CSound.h"
#include "types/classes/CSpotView.h"
#include "types/classes/CTerrain.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CWater.h"
#include "types/classes/CWeather.h"
#include "types/structs/SAlphaEntry.h"
#include "types/structs/SAudioFormatDescriptor.h"
#include "types/structs/SEnumPair.h"
#include "types/structs/SHuffmanTableSource.h"
#include "types/structs/SMRGLPrimitiveQuad.h"
#include "types/structs/SMRGLTextureBasic.h"
#include "types/structs/SRenderVertex.h"
#include "types/structs/SSoundModeEntry.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x680000
// =============================================================================

// BYTE
extern BYTE g_WindowsMinorVersion;
extern BYTE g_InitHandlerStatusStart;
extern BYTE g_InitHandlerPriorityStart;
extern BYTE g_ExitHandlerTableStart;
extern BYTE g_ExitHandlerPriorityEnd;

// CDemonPod*
extern CDemonPod* g_CDemonPodPtr;

// CDemonSet*
extern CDemonSet* g_CDemonSetPtr;

// CMouse*
extern CMouse* g_CMousePtr;

// CNetGame*
extern CNetGame* g_CNetGamePtr;

// CProceduralTexture*
extern CProceduralTexture* g_CProceduralTexturePtr;

// CScript*
extern CScript* g_CScriptPtr;

// CSlew*
extern CSlew* g_CSlewPtr;

// CSound*
extern CSound* g_CSoundPtr;

// CSpotView*
extern CSpotView* g_CSpotViewPtr;

// CTerrain*
extern CTerrain* g_CTerrainPtr;

// CVector3f
extern CVector3f CVector3f_006819fc;

// CVector3i
extern CVector3i g_GlobalLightDirection;

// CWater*
extern CWater* g_CWaterPtr;

// CWeather*
extern CWeather* g_CWeatherPtr;

// DWORD
extern DWORD g_TLSIndex;
extern DWORD g_WinMainCmdShow;
extern DWORD g_StackAllocSize;
extern DWORD g_RuntimeBufferSize;

// EXCEPTION_CLEANUP_FUNC*
extern EXCEPTION_CLEANUP_FUNC* g_ExceptionCleanup;

// EXCEPTION_FILTER_FUNC*
extern EXCEPTION_FILTER_FUNC* g_UserExceptionFilter;

// GUID
extern GUID g_IID_IKsPropertySet;
extern GUID g_KSPROPSETID_DirectSound3DListener;
extern GUID GUID_00681df0;
extern GUID GUID_00686d58;
extern GUID g_IID_IDirectSound3DBuffer;

// HANDLE
extern HANDLE g_ConsoleInputHandle;
extern HANDLE g_ConsoleOutputHandle;

// Heap*
extern Heap* g_MainHeap;
extern Heap* g_SecondaryHeap;

// IS_SPECIAL_DEVICE_FUNC*
extern IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr;

// RUNTIME_HANDLER_FUNC*
extern RUNTIME_HANDLER_FUNC* g_FirstInitHandler;
extern RUNTIME_HANDLER_FUNC* g_FirstExitHandler;

// RuntimeHandlerEntry
extern RuntimeHandlerEntry g_ExitHandlerTableEnd;

// RuntimeHandlerEntry[166]
extern RuntimeHandlerEntry g_InitHandlers[166];

// RuntimeHandlerEntry[6]
extern RuntimeHandlerEntry g_ExitHandlers[6];

// SAlphaEntry[256]
extern SAlphaEntry g_AlphaTable[256];

// SAudioFormatDescriptor[12]
extern SAudioFormatDescriptor g_WaveInFormatTable[12];

// SEnumPair[10]
extern SEnumPair g_TriggerCauseTypePairs[10];

// SEnumPair[2]
extern SEnumPair g_TriggerShapeTypePairs[2];

// SEnumPair[3]
extern SEnumPair g_SpikeTypeTypePairs[3];
extern SEnumPair g_CryptVesselVisualTypePairs[3];

// SEnumPair[4]
extern SEnumPair g_SpikeStateTypePairs[4];
extern SEnumPair g_TriggerEventTypePairs[4];
extern SEnumPair g_WaterActorStateTypePairs[4];
extern SEnumPair g_WeaponStateTypePairs[4];

// SEnumPair[5]
extern SEnumPair g_TurretStateTypePairs[5];

// SHuffmanTableSource[34]
extern SHuffmanTableSource g_HuffmanTableSources[34];

// SIGNAL_HANDLER_TYPE[26]
extern SIGNAL_HANDLER_TYPE g_GlobalSignalHandlers[26];

// SIOControlBlock*
extern SIOControlBlock* g_IOControlBlock;

// SMRGLPrimitiveQuad*
extern SMRGLPrimitiveQuad* g_BoundingBoxQuadTemplateEnd;

// SMRGLPrimitiveQuad[6]
extern SMRGLPrimitiveQuad g_BoundingBoxQuadTemplates[6];

// SMRGLTextureBasic
extern SMRGLTextureBasic SMRGLTextureBasic_00680bb0;
extern SMRGLTextureBasic g_EnvMapTexture;
extern SMRGLTextureBasic g_SolidWhiteTexture;
extern SMRGLTextureBasic SMRGLTextureBasic_006817fc;
extern SMRGLTextureBasic SMRGLTextureBasic_006819e4;
extern SMRGLTextureBasic SMRGLTextureBasic_00684178;
extern SMRGLTextureBasic DAT_0068423C;
extern SMRGLTextureBasic SMRGLTextureBasic_0068434c;
extern SMRGLTextureBasic DAT_006843FC;
extern SMRGLTextureBasic g_RainDropTexture;
extern SMRGLTextureBasic g_RainSplashTexture;
extern SMRGLTextureBasic g_SnowflakeTexture;
extern SMRGLTextureBasic SMRGLTextureBasic_0068495c;

// SMRGLTextureBasic*
extern SMRGLTextureBasic* g_WaterTexturesEnd;

// SMRGLTextureBasic[16]
extern SMRGLTextureBasic g_WaterTextures[16];
extern SMRGLTextureBasic SMRGLTextureBasic_ARRAY_006846f0[16];

// SPECIAL_CONSOLE_INPUT_HANDLER_FUNC*
extern SPECIAL_CONSOLE_INPUT_HANDLER_FUNC* g_SpecialConsoleInputHandler;

// SPECIAL_CONSOLE_OUTPUT_HANDLER_FUNC*
extern SPECIAL_CONSOLE_OUTPUT_HANDLER_FUNC* g_SpecialConsoleOutputHandler;

// SPECIAL_DEVICE_CLEANUP_FUNC*
extern SPECIAL_DEVICE_CLEANUP_FUNC* g_SpecialDeviceCleanupFunc;

// SPECIAL_DEVICE_CLOSE_FUNC*
extern SPECIAL_DEVICE_CLOSE_FUNC* g_SpecialDeviceCloseFunc;

// SPECIAL_DEVICE_READ_FUNC*
extern SPECIAL_DEVICE_READ_FUNC* g_SpecialDeviceReadFuncPtr;

// SPECIAL_DEVICE_WRITE_FUNC*
extern SPECIAL_DEVICE_WRITE_FUNC* g_SpecialDeviceWriteFuncPtr;

// SRenderVertex[16]
extern SRenderVertex g_RenderVertexBuffer[16];

// SSoundModeEntry[27]
extern SSoundModeEntry g_SoundModeTable[27];

// TerminatedCString
extern TerminatedCString g_RendererDllName;
extern TerminatedCString s_EST_006850bc;
extern TerminatedCString s_EDT_0068513d;

// UINT
extern UINT g_WaveOutDeviceID;
extern UINT g_WaveInDeviceID;

// WCHAR*
extern WCHAR* g_CommandLineArgsW;
extern WCHAR* g_ExeFileNameW;
extern WCHAR* g_DllFileNameW;

// WORD
extern WORD g_WindowsPlatformVersion;

// WatcomStaticDestructorNode
extern WatcomStaticDestructorNode g_CEdCheckDestructorNode;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0068064c;
extern WatcomStaticDestructorNode g_CNetGameInstanceDestructorNode;
extern WatcomStaticDestructorNode g_CMouseDestructorNode;
extern WatcomStaticDestructorNode g_PathMapCacheDestructorNode;
extern WatcomStaticDestructorNode g_CDemonPodMainDestructorNode;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_00680d10;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_00680d20;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_00680d30;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_00680d40;
extern WatcomStaticDestructorNode g_CDemonSetDestructorNode;
extern WatcomStaticDestructorNode g_CDemonCameraDestructorNode;
extern WatcomStaticDestructorNode g_CDemonRaytraceDestructorNode;
extern WatcomStaticDestructorNode g_CKeyFramedModelDestructorNode;
extern WatcomStaticDestructorNode g_CZThumbPoolDestructorNode;
extern WatcomStaticDestructorNode g_MissingBackdropFilesDestructorNode;
extern WatcomStaticDestructorNode g_ThumbnailScrollBarDestructorNode;
extern WatcomStaticDestructorNode g_SkeleditViewModelDestructorNode;
extern WatcomStaticDestructorNode g_DeformableModelPoolDestructorNode;
extern WatcomStaticDestructorNode g_SkeletonPoolDestructorNode;
extern WatcomStaticDestructorNode g_SfxSamplesDestructorNode;
extern WatcomStaticDestructorNode g_CMP3DecoderDestructorNode1;
extern WatcomStaticDestructorNode g_CMP3DecoderDestructorNode2;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_00681ed0;
extern WatcomStaticDestructorNode g_MissingSoundsListDestructorNode;
extern WatcomStaticDestructorNode g_CTextureListDestructorNode;
extern WatcomStaticDestructorNode g_CWaterDestructorNode;

// WatcomStaticDestructorNode*
extern WatcomStaticDestructorNode* g_AtexitListHead;

// _FILE
extern _FILE g_StdoutLogFile;
extern _FILE g_StderrLogFile;

// _FILE*
extern _FILE* g_StaticFilePoolStart;

// _MMX_INTEGER
extern _MMX_INTEGER g_TextureShift1;
extern _MMX_INTEGER g_TextureShift2;
extern _MMX_INTEGER g_TextureMask1;
extern _MMX_INTEGER g_TextureMask2;
extern _MMX_INTEGER g_RedMask16;
extern _MMX_INTEGER g_GreenMask16;
extern _MMX_INTEGER g_BlueMask16;
extern _MMX_INTEGER g_RedMask32;
extern _MMX_INTEGER g_GreenMask32;
extern _MMX_INTEGER g_BlueMask32;
extern _MMX_INTEGER g_TotalColorBits;
extern _MMX_INTEGER g_GreenBlueBits;
extern _MMX_INTEGER g_BlueBitShift;

// byte
extern byte BYTE_00684acc;
extern byte BYTE_00684acd;
extern byte BYTE_0068500c;
extern byte g_WindowsMajorVersion;
extern byte g_UseSoftwareMath;
extern byte g_TimezoneInitFlags;
extern byte g_DebuggerIsAttached;
extern byte g_ConsoleHandlerRegistered;

// byte[16]
extern byte g_IEEE754ExponentClassTable[16];

// char*
extern char* g_CurrentTrainMode;
extern char* g_PreviousTrainMode;
extern char* g_ApplicationTitle;
extern char* g_ApplicationTimerTitle;
extern char* g_ExeFileNameA;
extern char* g_DllFileNameA;
extern char* g_EnvironmentStrings;

// char**
extern char** g_TempEnvVarNames;

// char[104]
extern char g_MsnEditHideByTypeBuffer[104];
extern char g_MsnEditDeleteByTypePattern[104];
extern char g_MsnEditLastSelectedPropertyName[104];
extern char g_SoundResultBufferTemplate[104];

// char[108]
extern char g_TrainSoundFilenameTemplate[108];

// char[200]
extern char g_MsnEditCameraStatusBuffer[200];
extern char g_ActorRefDefaultBuffer[200];

// char[256]
extern char g_DefaultSoundDeviceName[256];
extern char g_DefaultDeviceName[256];

// char[260]
extern char g_TempDirectoryBuffer[260];

// double
extern double g_Cached3DDistanceFactor;
extern double g_Cached3DDistanceFactorInverse;
extern double g_SelectedClearColor;
extern double g_ClearColor;

// dst_rule
extern dst_rule g_DstStartRule;

// float
extern float FLOAT_00680818;
extern float g_MaxSoftwareLatency;

// int
extern int INT_00680648;
extern int g_DynamicRenderMode;
extern int g_ConfirmNewActorNames;
extern int INT_00680a04;
extern int g_CNPCClassVersion;
extern int g_CPassengerClassVersion;
extern int g_CPendulumClassVersion;
extern int g_CPlatformClassVersion;
extern int g_MaxViewportScanline;
extern int g_CScatClassVersion;
extern int g_AutoIndentEnabled;
extern int g_CSentinelClassVersion;
extern int g_RenderMirrorsFlag;
extern int g_CShotgunClassVersion;
extern int g_CShovelClassVersion;
extern int g_CSimBoxClassVersion;
extern int g_CSkeletonVersion;
extern int INT_00681864;
extern int g_CSmileyClassVersion;
extern int g_SfxPlaybackStateCounter;
extern int g_MaxSoundChannels;
extern int g_AudioBitsPerSample;
extern int g_AudioChannelCount;
extern int g_AudioSampleRate;
extern int g_SoundDeviceCount;
extern int g_CurrentSoundDevice;
extern int g_HardwareMixingEnabled;
extern int g_MinimumSoundMemoryBudget;
extern int g_MaximumSoundMemoryBudget;
extern int g_RecordingDeviceCount;
extern int g_CurrentRecordingDevice;
extern int g_RecordingBitsPerSample;
extern int g_RecordingChannelCount;
extern int g_RecordingSampleRate;
extern int g_DirectSoundDeviceCount;
extern int g_ScanlinePixelCount;
extern int g_StartTextureU;
extern int g_StartTextureV;
extern int g_StartDepthW;
extern int g_DeltaTextureU;
extern int g_DeltaTextureV;
extern int g_DeltaDepthW;
extern int g_SavedRegisterEAX;
extern int g_SavedRegisterEBX;
extern int g_SavedRegisterECX;
extern int g_SavedRegisterEDX;
extern int g_TempX;
extern int g_TempY;
extern int g_TempZ;
extern int g_TempTransformedX;
extern int g_TempTransformedY;
extern int g_TempTransformedZ;
extern int g_VertexRedStart;
extern int g_VertexGreenStart;
extern int g_VertexBlueStart;
extern int g_VertexRedDelta;
extern int g_VertexGreenDelta;
extern int g_VertexBlueDelta;
extern int g_VertexAlphaStart;
extern int g_VertexAlphaDelta;
extern int g_SpecialColor;
extern int g_SystemInitialized;
extern int g_VideoMemorySize;
extern int g_MaxTextureSize;
extern int g_SystemMemorySize;
extern int g_CSpikeClassVersion;
extern int g_CStairsClassVersion;
extern int g_CTempleStoneClassVersion;
extern int g_CStrangerClassVersion;
extern int g_CSuccubusClassVersion;
extern int g_CSvetlanaClassVersion;
extern int g_CBassPlayerClassVersion;
extern int g_CDrummerClassVersion;
extern int g_CTeleportDestClassVersion;
extern int g_CTeleportClassVersion;
extern int g_CTentacleClassVersion;
extern int g_TexturePreviewEnabled;
extern int g_CTommyGunClassVersion;
extern int g_CTrapClassVersion;
extern int g_CTrashClassVersion;
extern int g_CTriggerClassVersion;
extern int g_CTurretClassVersion;
extern int g_CTVBatClassVersion;
extern int g_CVampireBossVersion;
extern int g_CVehicleClassVersion;
extern int g_CCryptVesselClassVersion;
extern int INT_006844f4;
extern int g_CWaterActorVersion;
extern int g_CWayPointClassVersion;
extern int g_CWeaponClassVersion;
extern int g_CWerewolfClassVersion;
extern int g_BrightnessDirection;
extern int g_WindowActive;
extern int g_ForceMessagePump;
extern int g_PreviousActiveState;
extern int g_CZombieClassVersion;
extern int g_MaxErrnoValue;
extern int INT_00684ccc;
extern int INT_00684cd0;
extern int INT_00684ed0;
extern int INT_00684edc;
extern int g_SpecialExitHandler;
extern int DAT_00684f30;
extern int INT_00684fd0;
extern int g_ConsoleInitializationFlag;
extern int g_DstTransitionSecond;
extern int g_DstTransitionMinute;
extern int g_DstTransitionHour;
extern int g_TimezoneOffset;
extern int g_DaylightSavingActive;
extern int g_DaylightSavingOffset;
extern int g_CurrentHandleCount;
extern int g_FakeHandleCounter;
extern int INT_00685280;
extern int g_ProcessSpawnEnabled;
extern int g_ConsoleInputState;
extern int INT_006854ec;
extern int INT_006854f0;
extern int g_HeapFlags;

// int*
extern int* g_CurrentScreenPtr;
extern int* g_CurrentZBufferPtr;

// int[12]
extern int g_PathMapLRUCounters[12];

// int[96]
extern int g_LightDebugScreenX[96];
extern int g_LightDebugScreenY[96];

// int[9]
extern int g_PathfindingDeltaX[9];
extern int g_PathfindingDeltaZ[9];

// short
extern short g_PureVirtualCallFlag;

// uint
extern uint g_WindowsPlatformVersionExt;
extern uint g_WindowsVersionLow;
extern uint g_WindowsVersionMid;
extern uint g_WindowsVersionCombined;
extern uint g_MaxHandleCount;
extern uint g_CodePage;

// uint*
extern uint* g_HeapBound;

// undefined1
extern undefined1 DAT_006852db;

// undefined4
extern undefined4 DAT_00685094;
extern undefined4 DAT_006850b0;
extern undefined4 DAT_006850b4;
extern undefined4 DAT_006850b8;
extern undefined4 DAT_0068528c;

// void*
extern void* g_CrtStackBuffer;
extern void* g_BackBuffer;

