#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/misc.h"
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
#include "types/classes/CNetGame.h"
#include "types/classes/CScript.h"
#include "types/classes/CSound.h"
#include "types/classes/CSpotView.h"
#include "types/classes/CTerrain.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CWater.h"
#include "types/classes/CWeather.h"
#include "types/structs/SAlphaEntry.h"
#include "types/structs/SAudioFormatDescriptor.h"
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

// CNetGame*
extern CNetGame* g_CNetGameInstance;

// CScript*
extern CScript* g_CScriptPtr;

// CSound*
extern CSound* g_CSoundPtr;

// CSpotView*
extern CSpotView* g_CSpotViewPtr;

// CTerrain*
extern CTerrain* g_CTerrainPtr;

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

// FILE*
extern FILE* g_StaticFilePoolStart;
extern FILE* g_StderrLogFile;

// GUID
extern GUID g_IID_IKsPropertySet;
extern GUID g_KSPROPSETID_DirectSound3DListener;
extern GUID DAT_00681df0;
extern GUID DAT_00686d58;
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
extern SMRGLTextureBasic DAT_00680bb0;
extern SMRGLTextureBasic DAT_006813e4;
extern SMRGLTextureBasic DAT_006816c0;
extern SMRGLTextureBasic SMRGLTextureBasic_006817fc;
extern SMRGLTextureBasic DAT_006819e4;
extern SMRGLTextureBasic DAT_00684178;
extern SMRGLTextureBasic DAT_0068423C;
extern SMRGLTextureBasic DAT_0068434c;
extern SMRGLTextureBasic DAT_006843FC;
extern SMRGLTextureBasic DAT_006846f0;
extern SMRGLTextureBasic DAT_00684708;
extern SMRGLTextureBasic DAT_00684720;
extern SMRGLTextureBasic DAT_00684738;
extern SMRGLTextureBasic DAT_00684750;
extern SMRGLTextureBasic DAT_00684768;
extern SMRGLTextureBasic DAT_00684780;
extern SMRGLTextureBasic DAT_00684798;
extern SMRGLTextureBasic DAT_006847B0;
extern SMRGLTextureBasic DAT_006847C8;
extern SMRGLTextureBasic DAT_006847E0;
extern SMRGLTextureBasic DAT_006847F8;
extern SMRGLTextureBasic DAT_00684810;
extern SMRGLTextureBasic DAT_00684828;
extern SMRGLTextureBasic DAT_00684840;
extern SMRGLTextureBasic DAT_00684858;
extern SMRGLTextureBasic DAT_00684900;
extern SMRGLTextureBasic DAT_00684918;
extern SMRGLTextureBasic DAT_00684930;
extern SMRGLTextureBasic DAT_0068495c;

// SMRGLTextureBasic*
extern SMRGLTextureBasic* g_WaterTexturesEnd;

// SMRGLTextureBasic[16]
extern SMRGLTextureBasic g_WaterTextures[16];

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
extern WatcomStaticDestructorNode DAT_0068064c;
extern WatcomStaticDestructorNode DAT_006809f0;
extern WatcomStaticDestructorNode g_CMouseDestructorNode;
extern WatcomStaticDestructorNode DAT_00680bc8;
extern WatcomStaticDestructorNode g_CDemonPodMainDestructorNode;
extern WatcomStaticDestructorNode DAT_00680d10;
extern WatcomStaticDestructorNode DAT_00680d20;
extern WatcomStaticDestructorNode DAT_00680d30;
extern WatcomStaticDestructorNode DAT_00680d40;
extern WatcomStaticDestructorNode g_CDemonSetDestructorNode;
extern WatcomStaticDestructorNode g_CDemonCameraDestructorNode;
extern WatcomStaticDestructorNode g_CDemonRaytraceDestructorNode;
extern WatcomStaticDestructorNode g_CKeyFramedModelDestructorNode;
extern WatcomStaticDestructorNode g_CZThumbPoolDestructorNode;
extern WatcomStaticDestructorNode DAT_006816a0;
extern WatcomStaticDestructorNode DAT_006816b0;
extern WatcomStaticDestructorNode DAT_00681850;
extern WatcomStaticDestructorNode g_DeformableModelPoolDestructorNode;
extern WatcomStaticDestructorNode g_SkeletonPoolDestructorNode;
extern WatcomStaticDestructorNode g_SfxSamplesDestructorNode;
extern WatcomStaticDestructorNode g_CMP3DecoderDestructorNode1;
extern WatcomStaticDestructorNode g_CMP3DecoderDestructorNode2;
extern WatcomStaticDestructorNode DAT_00681ed0;
extern WatcomStaticDestructorNode g_MissingSoundsListDestructorNode;
extern WatcomStaticDestructorNode g_CTextureListDestructorNode;
extern WatcomStaticDestructorNode g_CWaterDestructorNode;

// WatcomStaticDestructorNode*
extern WatcomStaticDestructorNode* g_AtexitListHead;

// byte
extern byte g_WindowsMajorVersion;
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
extern char g_SoundResultBufferTemplate[104];

// char[108]
extern char g_TrainSoundFilenameTemplate[108];

// char[256]
extern char g_DefaultRecordingDeviceName[256];
extern char g_DefaultDeviceName[256];

// char[260]
extern char g_TempDirectoryBuffer[260];

// double
extern double DOUBLE_00681b30;
extern double DOUBLE_00681b38;
extern double g_SelectedClearColor;
extern double g_ClearColor;

// dst_rule
extern dst_rule g_DstStartRule;

// float
extern float g_MaxSoftwareLatency;

// int
extern int g_DynamicRenderMode;
extern int g_ConfirmNewActorNames;
extern int g_CNPCClassVersion;
extern int g_CPassengerClassVersion;
extern int g_CPendulumClassVersion;
extern int g_CPlatformClassVersion;
extern int g_MaxViewportScanline;
extern int g_CScatClassVersion;
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
extern int g_SpecialExitHandler;
extern int DAT_00684f30;
extern int g_ConsoleInitializationFlag;
extern int g_UseSoftwareMath;
extern int g_DstTransitionSecond;
extern int g_DstTransitionMinute;
extern int g_DstTransitionHour;
extern int g_TimezoneOffset;
extern int g_DaylightSavingActive;
extern int g_DaylightSavingOffset;
extern int g_CurrentHandleCount;
extern int g_FakeHandleCounter;
extern int g_ProcessSpawnEnabled;
extern int g_ConsoleInputState;
extern int g_HeapFlags;

// int*
extern int* g_CurrentScreenPtr;
extern int* g_CurrentZBufferPtr;

// int[9]
extern int g_PathfindingDeltaX[9];
extern int g_PathfindingDeltaZ[9];

// short
extern short g_PureVirtualCallFlag;

// uint
extern uint g_RedMask16;
extern uint g_GreenMask16;
extern uint g_BlueMask16;
extern uint g_WindowsPlatformVersionExt;
extern uint g_WindowsVersionLow;
extern uint g_WindowsVersionMid;
extern uint g_WindowsVersionCombined;
extern uint g_MaxHandleCount;
extern uint g_CodePage;

// ulonglong
extern ulonglong g_TextureShift1;
extern ulonglong g_TextureShift2;
extern ulonglong g_TextureMask1;
extern ulonglong g_TextureMask2;
extern ulonglong g_RedMask32;
extern ulonglong g_GreenMask32;
extern ulonglong g_BlueMask32;
extern ulonglong g_TotalColorBits;
extern ulonglong g_GreenBlueBits;
extern ulonglong g_BlueBitShift;

// undefined1
extern undefined1 DAT_00684acc;
extern undefined1 DAT_00684acd;
extern undefined1 DAT_00684d05;
extern undefined1 DAT_0068500c;
extern undefined1 DAT_006852db;

// undefined4
extern undefined4 DAT_00680648;
extern undefined4 DAT_00680818;
extern undefined4 DAT_00680830;
extern undefined4 DAT_00680834;
extern undefined4 DAT_00680908;
extern undefined4 DAT_0068090c;
extern undefined4 DAT_00680974;
extern undefined4 DAT_00680a04;
extern undefined4 DAT_00680bd8;
extern undefined4 DAT_00680bdc;
extern undefined4 DAT_00680d60;
extern undefined4 DAT_00680d64;
extern undefined4 DAT_0068105c;
extern undefined4 DAT_0068125c;
extern undefined4 DAT_00681260;
extern undefined4 DAT_00681a00;
extern undefined4 DAT_00684ccc;
extern undefined4 DAT_00684edc;
extern undefined4 DAT_00684fd0;
extern undefined4 DAT_00685094;
extern undefined4 DAT_006850b0;
extern undefined4 DAT_006850b4;
extern undefined4 DAT_006850b8;
extern undefined4 DAT_00685280;
extern undefined4 DAT_0068528c;
extern undefined4 DAT_006852c4;
extern undefined4 DAT_006854ec;

// void*
extern void* g_CrtStackBuffer;

