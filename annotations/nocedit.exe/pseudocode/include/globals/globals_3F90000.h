#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/ddraw.h"
#include "system/mmsystem.h"
#include "system/stdio.h"
#include "system/unknwn.h"
#include "system/watcom.h"
#include "system/windef.h"
#include "system/winnt.h"
#include "system/winuser.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CWayPoint.h"
#include "types/classes/CWeather.h"
#include "types/structs/SRenderVertex.h"
#include "types/structs/SSoftwareEdge.h"
#include "types/typedefs/SMessageHandler.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3F90000
// =============================================================================

// BOOL
extern BOOL g_UseMultimediaTimer;

// BYTE
extern BYTE g_SignalHandlingActive;

// CDemonActorType
extern CDemonActorType g_CWaterActorClassInfo;
extern CDemonActorType g_CWayPointClassInfo;
extern CDemonActorType g_CWeaponClassInfo;
extern CDemonActorType g_CWerewolfClassInfo;
extern CDemonActorType g_CZombieClassInfo;

// CDemonGlobe
extern CDemonGlobe g_WeaponCoronaGlobe;

// CRITICAL_SECTION[64]
extern CRITICAL_SECTION g_StaticCriticalSectionArray[64];

// CVector3f[200]
extern CVector3f g_WeatherParticlePositions[200];

// CVector3i
extern CVector3i g_TempProjectedCoord;

// CVector3i[1000]
extern CVector3i g_WaterActorTransformedVertices[1000];

// CWayPoint*[2000]
extern CWayPoint* g_WaypointSearchQueue[2000];

// CWeather
extern CWeather g_CWeatherInstance;

// DWORD
extern DWORD g_PreviousCounterLow;
extern DWORD g_PreviousCounterHigh;
extern DWORD g_MovieHandle;
extern DWORD g_StaticCriticalSectionCounter;
extern DWORD g_DynamicCriticalSectionCounter;

// FileListNode*
extern FileListNode* g_AllocatedListHead;
extern FileListNode* g_FreeListHeadPointer;

// HMODULE
extern HMODULE g_WinmmDll;

// HWND
extern HWND g_MainWindowHandle;
extern HWND g_MovieWindowHandle;

// IDirectDraw*
extern IDirectDraw* g_DirectDrawObject;

// IDirectDrawSurface*
extern IDirectDrawSurface* g_DirectDrawSurface;
extern IDirectDrawSurface* g_SoftwareRenderSurface;

// IUnknown*
extern IUnknown* g_DirectDrawUnknown;

// JOY_GET_POS_EX_FUNC*
extern JOY_GET_POS_EX_FUNC* g_joyGetPosEx;

// LPCRITICAL_SECTION
extern LPCRITICAL_SECTION g_GlobalInitLock;

// LPCRITICAL_SECTION*
extern LPCRITICAL_SECTION* g_DynamicCriticalSectionArray;

// PALETTEENTRY[256]
extern PALETTEENTRY g_DDPaletteBuffer[256];

// ReentrantCriticalSection
extern ReentrantCriticalSection g_GlobalSystemCriticalSection;
extern ReentrantCriticalSection g_GlobalThreadCriticalSection;
extern ReentrantCriticalSection g_GlobalMemoryCriticalSection;
extern ReentrantCriticalSection g_GlobalIoCriticalSection;
extern ReentrantCriticalSection g_GlobalRuntimeCriticalSection;

// SMessageHandler[4]
extern SMessageHandler g_WindowMessageHandlers[4];

// SRenderVertex[32]
extern SRenderVertex g_ClipVertexBufferStage2[32];
extern SRenderVertex g_ClipVertexBufferStage1[32];
extern SRenderVertex g_ClipVertexBufferStage3[32];
extern SRenderVertex g_ClipVertexBufferStage4[32];

// SSoftwareEdge[16]
extern SSoftwareEdge g_RasterizerEdgeArray[16];

// ThreadRegistryEntry*
extern ThreadRegistryEntry* g_ThreadDataRegistryList;

// WCHAR*
extern WCHAR* g_CommandLineW;

// _struct_19
extern _struct_19 g_PerformanceCounter;
extern _struct_19 g_PerformanceFrequency;

// char*
extern char* g_CommandLineA;

// char**
extern char** g_EnvironStringArea;
extern char** g_EnvironmentBlock;

// char*[128]
extern char* g_ArgVector[128];

// char[16]
extern char CHAR_ARRAY_03f9b850[16];

// char[200]
extern char g_WeatherParticleHitGround[200];
extern char g_KeyNameBuffer[200];

// char[256]
extern char g_ModuleFileName[256];
extern char g_CurrentDirectory[256];
extern char g_CommandLineBuffer[256];
extern char g_LeadByteTable[256];

// char[260]
extern char g_ExeFileNameBuffer_A[260];
extern char g_DllFileNameBuffer_A[260];

// char[6000]
extern char g_ErrorMessageBuffer_03f96c30[6000];

// double
extern double g_TimerCalibration;

// dword
extern dword DWORD_03f9d000;

// float
extern float FLOAT_03f96b44;
extern float FLOAT_03f96b48;
extern float FLOAT_03f96b4c;
extern float FLOAT_03f96b50;
extern float FLOAT_03f96b54;
extern float FLOAT_03f96b58;

// float[200]
extern float g_WeatherParticleGroundHeights[200];

// int
extern int g_RenderingInProgress;
extern int g_GraphicsResetFlag;
extern int g_UseSoftwareRendering;
extern int g_AccumulatedGameTime;
extern int g_InputReadIndex;
extern int g_InputWriteIndex;
extern int g_InputCountOld;
extern int g_UnknownInputValue;
extern int g_CrosshairBrightness;
extern int g_InputDisabled;
extern int g_ApplicationActive;
extern int g_TotalPhysicalMemory;
extern int g_LeftMouseReleased;
extern int g_RightMouseReleased;
extern int g_MiddleMouseReleased;
extern int g_NumWindowMessageHandlers;
extern int g_ArgCount;
extern int g_MoviePlaying;
extern int g_FullscreenMovie;
extern int g_ClipVertexCountStage1;
extern int g_ClipVertexCountStage2;
extern int g_ClipVertexCountStage3;
extern int g_ClipVertexCountStage4;
extern int g_RasterizerEdgeCount;
extern int g_RasterizerMinY;
extern int g_RasterizerMaxY;
extern int INT_03f9b1f0;
extern int INT_03f9b210;
extern int g_EmergencyExitFlag;
extern int g_EnvironInitialized;
extern int DAT_03F9BFD4;
extern int g_MultibyteLocaleActive;
extern int g_BufferedCharacter;
extern int g_BufferedVirtualKey;
extern int g_BufferedRepeatCount;
extern int DAT_03F9C150;

// int[20]
extern int g_InputBuffer[20];

// int[513]
extern int g_MessageFlags[513];

// uint
extern uint UINT_03f96b40;

// void*
extern void* g_SoftwareFrameBuffer;
extern void* g_CurrentThreadTlsBlock;
extern void* g_TlsDataBase;

// wchar_t[260]
extern wchar_t g_ExeFileNameBuffer_W[260];
extern wchar_t g_DllFileNameBuffer_W[260];

// word
extern word DAT_03F9D60E;
extern word DAT_03F9D88A;
extern word DAT_03F9DAF2;
extern word DAT_03F9DC92;
extern word DAT_03F9DEA2;
extern word DAT_03F9E2CE;
extern word DAT_03F9E532;
extern word DAT_03F9E772;
extern word DAT_03F9E926;
extern word DAT_03F9E9C2;
extern word DAT_03F9EC1E;
extern word DAT_03F9EC6E;
extern word DAT_03F9ED96;
extern word DAT_03F9EE36;
extern word DAT_03F9EEB2;
extern word DAT_03F9EF5E;
extern word DAT_03F9F09E;
extern word DAT_03F9F1AE;
extern word DAT_03F9F25A;
extern word DAT_03F9F2BA;
extern word DAT_03F9F35A;
extern word DAT_03F9F41A;
extern word DAT_03F9F47E;
extern word DAT_03F9F4DA;
extern word DAT_03F9F5A2;
extern word DAT_03F9F62E;
extern word DAT_03F9F712;
extern word DAT_03F9FB76;
extern word DAT_03F9FCF2;
extern word DAT_03F9FEC2;
extern word DAT_03F9FF1E;
extern word DAT_03F9FF42;
extern word DAT_03F9FFC2;

