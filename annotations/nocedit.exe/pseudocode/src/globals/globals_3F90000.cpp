#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3F90000
// =============================================================================

CDemonActorType g_CWaterActorClassInfo;
CDemonActorType g_CWayPointClassInfo;
PALETTEENTRY g_DDPaletteBuffer[256] = {};
CDemonActorType g_CWeaponClassInfo;
CWeather g_CWeatherInstance;
CVector3f DAT_03f95df8[200] = {};
CDemonActorType g_CWerewolfClassInfo;
LARGE_INTEGER g_PerformanceCounter;
LARGE_INTEGER g_PerformanceFrequency;
int g_InputBuffer[20] = {};
HWND g_MainWindowHandle;
int g_MessageFlags[513] = {};
WNDPROC g_WindowMessageHandlers[4] = {};
HMODULE g_WinmmDll;
HWND g_MovieWindowHandle;
SRenderVertex g_ClipVertexBufferStage2[32] = {};
SRenderVertex g_ClipVertexBufferStage1[32] = {};
SRenderVertex g_ClipVertexBufferStage3[32] = {};
SRenderVertex g_ClipVertexBufferStage4[32] = {};
CDemonActorType g_CZombieClassInfo;
SEdgeData g_RasterizerEdgeArray[16] = {};
ReentrantCriticalSection g_GlobalSystemCriticalSection;
ReentrantCriticalSection g_GlobalThreadCriticalSection;
ReentrantCriticalSection g_GlobalMemoryCriticalSection;
CRITICAL_SECTION g_StaticCriticalSectionArray[64] = {};
LPCRITICAL_SECTION g_GlobalInitLock;
ReentrantCriticalSection g_GlobalIoCriticalSection;
ReentrantCriticalSection g_GlobalRuntimeCriticalSection;
CVector3i g_TempProjectedCoord;
dword DWORD_03f9d000 = 0x1000;

