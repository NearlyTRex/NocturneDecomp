#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3F90000
// =============================================================================

// CDemonActorType
CDemonActorType g_CWaterActorClassInfo = {};
CDemonActorType g_CWayPointClassInfo = {};
CDemonActorType g_CWeaponClassInfo = {};
CDemonActorType g_CWerewolfClassInfo = {};
CDemonActorType g_CZombieClassInfo = {};

// CRITICAL_SECTION[64]
CRITICAL_SECTION g_StaticCriticalSectionArray[64] = {};

// CVector3f[200]
CVector3f DAT_03f95df8[200] = {};

// CVector3i
CVector3i g_TempProjectedCoord = {};

// CWeather
CWeather g_CWeatherInstance = {};

// HMODULE
HMODULE g_WinmmDll = {};

// HWND
HWND g_MainWindowHandle = {};
HWND g_MovieWindowHandle = {};

// LARGE_INTEGER
LARGE_INTEGER g_PerformanceCounter = {};
LARGE_INTEGER g_PerformanceFrequency = {};

// LPCRITICAL_SECTION
LPCRITICAL_SECTION g_GlobalInitLock = {};

// PALETTEENTRY[256]
PALETTEENTRY g_DDPaletteBuffer[256] = {};

// ReentrantCriticalSection
ReentrantCriticalSection g_GlobalSystemCriticalSection = {};
ReentrantCriticalSection g_GlobalThreadCriticalSection = {};
ReentrantCriticalSection g_GlobalMemoryCriticalSection = {};
ReentrantCriticalSection g_GlobalIoCriticalSection = {};
ReentrantCriticalSection g_GlobalRuntimeCriticalSection = {};

// SEdgeData[16]
SEdgeData g_RasterizerEdgeArray[16] = {};

// SRenderVertex[32]
SRenderVertex g_ClipVertexBufferStage2[32] = {};
SRenderVertex g_ClipVertexBufferStage1[32] = {};
SRenderVertex g_ClipVertexBufferStage3[32] = {};
SRenderVertex g_ClipVertexBufferStage4[32] = {};

// WNDPROC[4]
WNDPROC g_WindowMessageHandlers[4] = {};

// char*[128]
char* g_ArgVector[128] = {};

// char[200]
char g_KeyNameBuffer[200] = {};

// char[256]
char g_ModuleFileName[256] = {};
char g_CurrentDirectory[256] = {};
char g_LeadByteTable[256] = {};

// char[260]
char g_ExeFileNameBuffer_A[260] = {};
char g_DllFileNameBuffer_A[260] = {};

// char[512]
char g_ErrorMessageBuffer_03f96c30[512] = {};

// dword
dword DWORD_03f9d000 = 0x1000;

// int[20]
int g_InputBuffer[20] = {};

// int[513]
int g_MessageFlags[513] = {};

// wchar_t[260]
wchar_t g_ExeFileNameBuffer_W[260] = {};
wchar_t g_DllFileNameBuffer_W[260] = {};

// word
word DAT_03F9D60E = 0x0;
word DAT_03F9D88A = 0x0;
word DAT_03F9DAF2 = 0x0;
word DAT_03F9DC92 = 0x0;
word DAT_03F9DEA2 = 0x0;
word DAT_03F9E2CE = 0x0;
word DAT_03F9E532 = 0x0;
word DAT_03F9E772 = 0x0;
word DAT_03F9E926 = 0x0;
word DAT_03F9E9C2 = 0x0;
word DAT_03F9EC1E = 0x0;
word DAT_03F9EC6E = 0x0;
word DAT_03F9ED96 = 0x0;
word DAT_03F9EE36 = 0x0;
word DAT_03F9EEB2 = 0x0;
word DAT_03F9EF5E = 0x0;
word DAT_03F9F09E = 0x0;
word DAT_03F9F1AE = 0x0;
word DAT_03F9F25A = 0x0;
word DAT_03F9F2BA = 0x0;
word DAT_03F9F35A = 0x0;
word DAT_03F9F41A = 0x0;
word DAT_03F9F47E = 0x0;
word DAT_03F9F4DA = 0x0;
word DAT_03F9F5A2 = 0x0;
word DAT_03F9F62E = 0x0;
word DAT_03F9F712 = 0x0;
word DAT_03F9FB76 = 0x0;
word DAT_03F9FCF2 = 0x0;
word DAT_03F9FEC2 = 0x0;
word DAT_03F9FF1E = 0x0;
word DAT_03F9FF42 = 0x0;
word DAT_03F9FFC2 = 0x0;

