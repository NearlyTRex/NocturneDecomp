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
#include "types/classes/CWeather.h"
#include "types/structs/SEdgeData.h"
#include "types/structs/SRenderVertex.h"

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
extern CDemonGlobe DAT_03f95d7c;

// CRITICAL_SECTION[64]
extern CRITICAL_SECTION g_StaticCriticalSectionArray[64];

// CVector3f[200]
extern CVector3f DAT_03f95df8[200];

// CVector3i
extern CVector3i g_TempProjectedCoord;

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

// LARGE_INTEGER
extern LARGE_INTEGER g_PerformanceCounter;
extern LARGE_INTEGER g_PerformanceFrequency;

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

// SEdgeData[16]
extern SEdgeData g_RasterizerEdgeArray[16];

// SRenderVertex[32]
extern SRenderVertex g_ClipVertexBufferStage2[32];
extern SRenderVertex g_ClipVertexBufferStage1[32];
extern SRenderVertex g_ClipVertexBufferStage3[32];
extern SRenderVertex g_ClipVertexBufferStage4[32];

// ThreadRegistryEntry*
extern ThreadRegistryEntry* g_ThreadDataRegistryList;

// WCHAR*
extern WCHAR* g_CommandLineW;

// WNDPROC[4]
extern WNDPROC g_WindowMessageHandlers[4];

// byte
extern byte g_CommandLineBuffer;

// char*
extern char* g_CommandLineA;

// char**
extern char** g_EnvironStringArea;
extern char** g_EnvironmentBlock;

// char*[128]
extern char* g_ArgVector[128];

// char[200]
extern char g_KeyNameBuffer[200];

// char[256]
extern char g_ModuleFileName[256];
extern char g_CurrentDirectory[256];
extern char g_LeadByteTable[256];

// char[260]
extern char g_ExeFileNameBuffer_A[260];
extern char g_DllFileNameBuffer_A[260];

// char[512]
extern char g_ErrorMessageBuffer_03f96c30[512];

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

// int
extern int g_RenderingInProgress;
extern int g_GraphicsResetFlag;
extern int g_UseSoftwareRendering;
extern int g_AccumulatedGameTime;
extern int g_InputReadIndex;
extern int g_InputWriteIndex;
extern int g_InputCountMaybe;
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
extern int g_EmergencyExitFlag;
extern int g_EnvironInitialized;
extern int INT_03f9bfd4;
extern int g_MultibyteLocaleActive;
extern int g_BufferedCharacter;
extern int g_BufferedVirtualKey;
extern int g_BufferedRepeatCount;
extern int INT_03f9c150;

// int[20]
extern int g_InputBuffer[20];

// int[513]
extern int g_MessageFlags[513];

// uint
extern uint UINT_03f96b40;

// undefined1
extern undefined1 DAT_03f96a78;
extern undefined1 DAT_03f96a79;
extern undefined1 DAT_03f98ff1;
extern undefined1 DAT_03f98ff2;
extern undefined1 DAT_03f98ff3;
extern undefined1 DAT_03f98ff4;
extern undefined1 DAT_03f9b850;

// undefined4
extern undefined4 DAT_03f90a88;
extern undefined4 DAT_03f90a8c;
extern undefined4 DAT_03f90a90;
extern undefined4 DAT_03f90a94;
extern undefined4 DAT_03f90a98;
extern undefined4 DAT_03f90a9c;
extern undefined4 DAT_03f939a4;
extern undefined4 DAT_03f939a8;
extern undefined4 DAT_03f96758;
extern undefined4 DAT_03f9675c;
extern undefined4 g_FreeListHeadPointer;
extern undefined4 DAT_03f9b210;

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

