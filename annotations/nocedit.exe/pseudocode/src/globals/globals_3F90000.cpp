#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3F90000
// =============================================================================

// BOOL
BOOL g_UseMultimediaTimer = {};

// BYTE
BYTE g_SignalHandlingActive = {};

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

// DWORD
DWORD g_PreviousCounterLow = {};
DWORD g_PreviousCounterHigh = {};
DWORD g_MovieHandle = {};
DWORD g_StaticCriticalSectionCounter = {};
DWORD g_DynamicCriticalSectionCounter = {};

// FileListNode*
FileListNode* g_AllocatedListHead = {};

// HMODULE
HMODULE g_WinmmDll = {};

// HWND
HWND g_MainWindowHandle = {};
HWND g_MovieWindowHandle = {};

// IDirectDraw*
IDirectDraw* g_DirectDrawObject = {};

// IDirectDrawSurface*
IDirectDrawSurface* g_DirectDrawSurface = {};
IDirectDrawSurface* g_SoftwareRenderSurface = {};

// IUnknown*
IUnknown* g_DirectDrawUnknown = {};

// LARGE_INTEGER
LARGE_INTEGER g_PerformanceCounter = {};
LARGE_INTEGER g_PerformanceFrequency = {};

// LPCRITICAL_SECTION
LPCRITICAL_SECTION g_GlobalInitLock = {};

// LPCRITICAL_SECTION*
LPCRITICAL_SECTION* g_DynamicCriticalSectionArray = {};

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

// ThreadRegistryEntry*
ThreadRegistryEntry* g_ThreadDataRegistryList = {};

// WCHAR*
WCHAR* g_CommandLineW = {};

// WNDPROC[4]
WNDPROC g_WindowMessageHandlers[4] = {};

// byte
byte g_CommandLineBuffer = {};

// char*
char* g_CommandLineA = {};

// char**
char** g_EnvironStringArea = {};
char** g_EnvironmentBlock = {};

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

// double
double g_TimerCalibration = {};

// dword
dword DWORD_03f9d000 = 0x1000;

// int
int g_RenderingInProgress = {};
int g_GraphicsResetFlag = {};
int g_UseSoftwareRendering = {};
int g_AccumulatedGameTime = {};
int g_InputReadIndex = {};
int g_InputWriteIndex = {};
int g_InputCountMaybe = {};
int g_UnknownInputValue = {};
int g_CrosshairBrightness = {};
int g_InputDisabled = {};
int g_ApplicationActive = {};
int g_TotalPhysicalMemory = {};
int g_LeftMouseReleased = {};
int g_RightMouseReleased = {};
int g_MiddleMouseReleased = {};
int g_NumWindowMessageHandlers = {};
int g_ArgCount = {};
int g_MoviePlaying = {};
int g_FullscreenMovie = {};
int g_ClipVertexCountStage1 = {};
int g_ClipVertexCountStage2 = {};
int g_ClipVertexCountStage3 = {};
int g_ClipVertexCountStage4 = {};
int g_RasterizerEdgeCount = {};
int g_RasterizerMinY = {};
int g_RasterizerMaxY = {};
int g_EmergencyExitFlag = {};
int g_EnvironInitialized = {};
int g_MultibyteLocaleActive = {};
int g_BufferedCharacter = {};
int g_BufferedVirtualKey = {};
int g_BufferedRepeatCount = {};

// int[20]
int g_InputBuffer[20] = {};

// int[513]
int g_MessageFlags[513] = {};

// joyGetPosEx*
joyGetPosEx* g_joyGetPosEx = {};

// undefined1
undefined1 DAT_03f96a78 = {};
undefined1 DAT_03f96a79 = {};
undefined1 DAT_03f98ff1 = {};
undefined1 DAT_03f98ff2 = {};
undefined1 DAT_03f98ff3 = {};
undefined1 DAT_03f98ff4 = {};
undefined1 DAT_03f9b850 = {};

// undefined4
undefined4 DAT_03f90a88 = {};
undefined4 DAT_03f90a8c = {};
undefined4 DAT_03f90a90 = {};
undefined4 DAT_03f90a94 = {};
undefined4 DAT_03f90a98 = {};
undefined4 DAT_03f90a9c = {};
undefined4 DAT_03f939a4 = {};
undefined4 DAT_03f939a8 = {};
undefined4 DAT_03f96758 = {};
undefined4 DAT_03f9675c = {};
undefined4 DAT_03f96b40 = {};
undefined4 g_FreeListHeadPointer = {};
undefined4 DAT_03f9b210 = {};
undefined4 DAT_03f9c150 = {};

// void*
void* g_SoftwareFrameBuffer = {};
void* g_CurrentThreadTlsBlock = {};
void* g_TlsDataBase = {};

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

