#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3F90000
// =============================================================================

// CDemonActorType
CDemonActorType g_CWaterActorClassInfo;
CDemonActorType g_CWayPointClassInfo;
CDemonActorType g_CWeaponClassInfo;
CDemonActorType g_CWerewolfClassInfo;
CDemonActorType g_CZombieClassInfo;

// CRITICAL_SECTION[64]
CRITICAL_SECTION g_StaticCriticalSectionArray[64] = {};

// CVector3f[200]
CVector3f DAT_03f95df8[200] = {};

// CVector3i
CVector3i g_TempProjectedCoord;

// CWeather
CWeather g_CWeatherInstance;

// HMODULE
HMODULE g_WinmmDll;

// HWND
HWND g_MainWindowHandle;
HWND g_MovieWindowHandle;

// LARGE_INTEGER
LARGE_INTEGER g_PerformanceCounter;
LARGE_INTEGER g_PerformanceFrequency;

// LPCRITICAL_SECTION
LPCRITICAL_SECTION g_GlobalInitLock;

// PALETTEENTRY[256]
PALETTEENTRY g_DDPaletteBuffer[256] = {};

// ReentrantCriticalSection
ReentrantCriticalSection g_GlobalSystemCriticalSection;
ReentrantCriticalSection g_GlobalThreadCriticalSection;
ReentrantCriticalSection g_GlobalMemoryCriticalSection;
ReentrantCriticalSection g_GlobalIoCriticalSection;
ReentrantCriticalSection g_GlobalRuntimeCriticalSection;

// SEdgeData[16]
SEdgeData g_RasterizerEdgeArray[16] = {};

// SRenderVertex[32]
SRenderVertex g_ClipVertexBufferStage2[32] = {};
SRenderVertex g_ClipVertexBufferStage1[32] = {};
SRenderVertex g_ClipVertexBufferStage3[32] = {};
SRenderVertex g_ClipVertexBufferStage4[32] = {};

// WNDPROC[4]
WNDPROC g_WindowMessageHandlers[4] = {};

// dword
dword DWORD_03f9d000 = 0x1000;

// int[20]
int g_InputBuffer[20] = {};

// int[513]
int g_MessageFlags[513] = {};

