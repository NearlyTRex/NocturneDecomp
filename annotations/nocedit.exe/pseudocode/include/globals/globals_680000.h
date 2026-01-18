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

extern SHuffmanTableSource g_HuffmanTableSources[34];
extern WatcomStaticDestructorNode g_CEdCheckDestructorNode;
extern WatcomStaticDestructorNode DAT_0068064c;
extern undefined4 g_DynamicRenderMode;
extern int g_ConfirmNewActorNames;
extern WatcomStaticDestructorNode DAT_006809f0;
extern CNetGame* g_CNetGameInstance;
extern WatcomStaticDestructorNode g_CMouseDestructorNode;
extern undefined4 g_CNPCClassVersion;
extern undefined4 g_CPassengerClassVersion;
extern SMRGLTextureBasic DAT_00680bb0;
extern WatcomStaticDestructorNode DAT_00680bc8;
extern int g_PathfindingDeltaX[9];
extern int g_PathfindingDeltaZ[9];
extern int g_CPendulumClassVersion;
extern undefined4 g_CPlatformClassVersion;
extern WatcomStaticDestructorNode g_CDemonPodMainDestructorNode;
extern CDemonPod* g_CDemonPodPtr;
extern int g_MaxViewportScanline;
extern int g_CScatClassVersion;
extern WatcomStaticDestructorNode DAT_00680d10;
extern WatcomStaticDestructorNode DAT_00680d20;
extern WatcomStaticDestructorNode DAT_00680d30;
extern WatcomStaticDestructorNode DAT_00680d40;
extern CScript* g_CScriptPtr;
extern int g_CSentinelClassVersion;
extern WatcomStaticDestructorNode g_CDemonSetDestructorNode;
extern WatcomStaticDestructorNode g_CDemonCameraDestructorNode;
extern WatcomStaticDestructorNode g_CDemonRaytraceDestructorNode;
extern WatcomStaticDestructorNode g_CKeyFramedModelDestructorNode;
extern CDemonSet* g_CDemonSetPtr;
extern CVector3i g_GlobalLightDirection;
extern int g_RenderMirrorsFlag;
extern SMRGLTextureBasic DAT_006813e4;
extern WatcomStaticDestructorNode g_CZThumbPoolDestructorNode;
extern SMRGLPrimitiveQuad g_BoundingBoxQuadTemplates[6];
extern SMRGLPrimitiveQuad* g_BoundingBoxQuadTemplateEnd;
extern WatcomStaticDestructorNode DAT_006816a0;
extern WatcomStaticDestructorNode DAT_006816b0;
extern SMRGLTextureBasic DAT_006816c0;
extern SMRGLTextureBasic SMRGLTextureBasic_006817fc;
extern int g_CShotgunClassVersion;
extern int g_CShovelClassVersion;
extern int g_CSimBoxClassVersion;
extern WatcomStaticDestructorNode DAT_00681850;
extern undefined4 g_CSkeletonVersion;
extern SMRGLTextureBasic DAT_006819e4;
extern WatcomStaticDestructorNode g_DeformableModelPoolDestructorNode;
extern WatcomStaticDestructorNode g_SkeletonPoolDestructorNode;
extern int g_CSmileyClassVersion;
extern WatcomStaticDestructorNode g_SfxSamplesDestructorNode;
extern WatcomStaticDestructorNode g_CMP3DecoderDestructorNode;
extern int g_SfxPlaybackStateCounter;
extern WatcomStaticDestructorNode g_CMP3DecoderDestructorNode;
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
extern GUID g_IID_IKsPropertySet;
extern GUID g_KSPROPSETID_DirectSound3DListener;
extern GUID DAT_00681df0;
extern int g_DirectSoundDeviceCount;
extern UINT g_WaveOutDeviceID;
extern UINT g_WaveInDeviceID;
extern SAudioFormatDescriptor g_WaveInFormatTable[12];
extern WatcomStaticDestructorNode DAT_00681ed0;
extern WatcomStaticDestructorNode g_MissingSoundsListDestructorNode;
extern char* g_CurrentTrainMode;
extern char* g_PreviousTrainMode;
extern CSound* g_CSoundPtr;
extern SSoundModeEntry g_SoundModeTable[27];
extern int g_ScanlinePixelCount;
extern int g_StartTextureU;
extern int g_StartTextureV;
extern int g_StartDepthW;
extern int* g_CurrentScreenPtr;
extern int* g_CurrentZBufferPtr;
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
extern ulonglong g_TextureShift1;
extern ulonglong g_TextureShift2;
extern ulonglong g_TextureMask1;
extern ulonglong g_TextureMask2;
extern uint g_RedMask16;
extern uint g_GreenMask16;
extern uint g_BlueMask16;
extern ulonglong g_RedMask32;
extern ulonglong g_GreenMask32;
extern ulonglong g_BlueMask32;
extern ulonglong g_TotalColorBits;
extern ulonglong g_GreenBlueBits;
extern ulonglong g_BlueBitShift;
extern int g_SpecialColor;
extern SAlphaEntry g_AlphaTable[256];
extern TerminatedCString g_RendererDllName;
extern int g_SystemInitialized;
extern int g_VideoMemorySize;
extern int g_MaxTextureSize;
extern int g_SystemMemorySize;
extern int g_CSpikeClassVersion;
extern CSpotView* g_CSpotViewPtr;
extern SMRGLTextureBasic DAT_00684178;
extern int g_CStairsClassVersion;
extern int g_CTempleStoneClassVersion;
extern int g_CStrangerClassVersion;
extern int g_CSuccubusClassVersion;
extern int g_CSvetlanaClassVersion;
extern SMRGLTextureBasic DAT_0068423C;
extern int g_CBassPlayerClassVersion;
extern int g_CDrummerClassVersion;
extern int g_CTeleportDestClassVersion;
extern int g_CTeleportClassVersion;
extern undefined4 g_CTentacleClassVersion;
extern WatcomStaticDestructorNode g_CTextureListDestructorNode;
extern int g_TexturePreviewEnabled;
extern int g_CTommyGunClassVersion;
extern int g_CTrapClassVersion;
extern int g_CTrashClassVersion;
extern SMRGLTextureBasic DAT_0068434c;
extern int g_CTriggerClassVersion;
extern CTerrain* g_CTerrainPtr;
extern SMRGLTextureBasic DAT_006843FC;
extern int g_CTurretClassVersion;
extern int g_CTVBatClassVersion;
extern int g_CVampireBossVersion;
extern int g_CVehicleClassVersion;
extern int g_CCryptVesselClassVersion;
extern WatcomStaticDestructorNode g_CWaterDestructorNode;
extern CWater* g_CWaterPtr;
extern SMRGLTextureBasic g_WaterTextures[16];
extern SMRGLTextureBasic* g_WaterTexturesEnd;
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
extern int g_CWaterActorVersion;
extern int g_CWayPointClassVersion;
extern int g_CWeaponClassVersion;
extern CWeather* g_CWeatherPtr;
extern SMRGLTextureBasic DAT_00684900;
extern SMRGLTextureBasic DAT_00684918;
extern SMRGLTextureBasic DAT_00684930;
extern int g_CWerewolfClassVersion;
extern SMRGLTextureBasic DAT_0068495c;
extern int g_BrightnessDirection;
extern char* g_ApplicationTitle;
extern char* g_ApplicationTimerTitle;
extern int g_WindowActive;
extern int g_ForceMessagePump;
extern int g_PreviousActiveState;
extern int g_CZombieClassVersion;
extern int g_MaxErrnoValue;
extern FILE* g_StaticFilePoolStart;
extern FILE* g_StderrLogFile;
extern Heap* g_MainHeap;
extern Heap* g_SecondaryHeap;
extern DWORD g_TLSIndex;
extern undefined4 g_SpecialExitHandler;
extern DWORD g_WinMainCmdShow;
extern char* g_ExeFileNameA;
extern char* g_DllFileNameA;
extern WCHAR* g_CommandLineArgsW;
extern WCHAR* g_ExeFileNameW;
extern WCHAR* g_DllFileNameW;
extern DWORD g_StackAllocSize;
extern void* g_CrtStackBuffer;
extern int g_ConsoleInitializationFlag;
extern char* g_EnvironmentStrings;
extern BYTE g_WindowsMinorVersion;
extern byte g_WindowsMajorVersion;
extern WORD g_WindowsPlatformVersion;
extern uint g_WindowsPlatformVersionExt;
extern uint g_WindowsVersionLow;
extern uint g_WindowsVersionMid;
extern uint g_WindowsVersionCombined;
extern int g_UseSoftwareMath;
extern dst_rule g_DstStartRule;
extern int g_DstTransitionSecond;
extern int g_DstTransitionMinute;
extern int g_DstTransitionHour;
extern int g_TimezoneOffset;
extern int g_DaylightSavingActive;
extern int g_DaylightSavingOffset;
extern byte g_TimezoneInitFlags;
extern uint g_MaxHandleCount;
extern SIOControlBlock* g_IOControlBlock;
extern undefined4 g_CurrentHandleCount;
extern undefined4 g_FakeHandleCounter;
extern short g_PureVirtualCallFlag;
extern WatcomStaticDestructorNode* g_AtexitListHead;
extern IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr;
extern SPECIAL_DEVICE_CLEANUP_FUNC* g_SpecialDeviceCleanupFunc;
extern SPECIAL_DEVICE_CLOSE_FUNC* g_SpecialDeviceCloseFunc;
extern SPECIAL_DEVICE_READ_FUNC* g_SpecialDeviceReadFuncPtr;
extern SPECIAL_DEVICE_WRITE_FUNC* g_SpecialDeviceWriteFuncPtr;
extern SPECIAL_CONSOLE_INPUT_HANDLER_FUNC* g_SpecialConsoleInputHandler;
extern SPECIAL_CONSOLE_OUTPUT_HANDLER_FUNC* g_SpecialConsoleOutputHandler;
extern char** g_TempEnvVarNames;
extern int g_ProcessSpawnEnabled;
extern EXCEPTION_FILTER_FUNC* g_UserExceptionFilter;
extern EXCEPTION_CLEANUP_FUNC* g_ExceptionCleanup;
extern int g_ConsoleInputState;
extern undefined1 g_DebuggerIsAttached;
extern int g_HeapFlags;
extern DWORD g_RuntimeBufferSize;
extern HANDLE g_ConsoleInputHandle;
extern HANDLE g_ConsoleOutputHandle;
extern SIGNAL_HANDLER g_GlobalSignalHandlers[16];
extern bool g_ConsoleHandlerRegistered;
extern uint g_CodePage;
extern BYTE g_InitHandlerStatusStart;
extern BYTE g_InitHandlerPriorityStart;
extern RUNTIME_HANDLER_FUNC* g_FirstInitHandler;
extern RuntimeHandlerEntry g_InitHandlers[166];
extern BYTE g_ExitHandlerTableStart;
extern BYTE g_ExitHandlerPriorityEnd;
extern RUNTIME_HANDLER_FUNC* g_FirstExitHandler;
extern RuntimeHandlerEntry g_ExitHandlers[6];
extern RuntimeHandlerEntry g_ExitHandlerTableEnd;
extern GUID DAT_00686d58;
extern GUID g_IID_IDirectSound3DBuffer;
extern byte g_IEEE754ExponentClassTable[16];
extern SRenderVertex g_RenderVertexBuffer[16];

