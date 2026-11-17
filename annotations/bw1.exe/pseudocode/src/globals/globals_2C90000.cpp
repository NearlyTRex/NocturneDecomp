#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2C90000
// =============================================================================

// CDemonActorType
CDemonActorType g_CWaterActorClassInfo = {};
CDemonActorType g_CWayPointClassInfo = {};
CDemonActorType g_CWeaponClassInfo = {};
CDemonActorType g_CWerewolfClassInfo = {};
CDemonActorType g_CYowClassInfo = {};
CDemonActorType g_CZombieClassInfo = {};

// CDemonGlobe
CDemonGlobe g_WeaponCoronaGlobe = {};

// CVector3f
CVector3f g_WerewolfEyeGlowOffsetLeft = {};
CVector3f g_WerewolfEyeGlowOffsetRight = {};

// CVector3f[200]
CVector3f g_WeatherParticlePositions[200] = {};

// CVector3i
CVector3i g_TempProjectedCoord = {};

// CVector3i[1000]
CVector3i g_WaterActorTransformedVertices[1000] = {};

// CWeather
CWeather g_CWeatherInstance = {};

// DWORD
DWORD g_PreviousCounterLow = {};

// FileListNode*
FileListNode* g_AllocatedListHead = {};
FileListNode* g_FreeListHeadPointer = {};

// HMODULE
HMODULE g_WinmmDll = {};

// HWND
HWND g_MainWindowHandle = {};

// IDirectDraw*
IDirectDraw* g_DirectDrawObject = {};

// IDirectDrawSurface*
IDirectDrawSurface* g_DirectDrawSurface = {};
IDirectDrawSurface* g_SoftwareRenderSurface = {};

// IUnknown*
IUnknown* g_DirectDrawUnknown = {};

// PALETTEENTRY[256]
PALETTEENTRY g_DDPaletteBuffer[256] = {};

// SRenderVertex[32]
SRenderVertex g_ClipVertexBufferStage2[32] = {};
SRenderVertex g_ClipVertexBufferStage1[32] = {};
SRenderVertex g_ClipVertexBufferStage3[32] = {};
SRenderVertex g_ClipVertexBufferStage4[32] = {};

// SSoftwareEdge[16]
SSoftwareEdge g_SSoftwareEdge_ARRAY_02c9eb38[16] = {};

// WCHAR*
WCHAR* g_CommandLineW = {};

// _struct_19
_struct_19 g_PerformanceCounter = {};
_struct_19 g_PerformanceFrequency = {};

// byte
byte g_BYTE_02c9a624 = {};
byte g_SignalHandlingActive = {};

// char*
char* g_CHAR_PTR_02c9cb0c = {};
char* g_CommandLineA = {};

// char**
char** g_EnvironStringArea = {};
char** g_EnvironmentBlock = {};

// char[16]
char g_CHAR_ARRAY_02c9f690[16] = {};

// char[1]
char g_CHAR_ARRAY_02c9f6f0[1] = {};

// char[200]
char g_WeatherParticleHitGround[200] = {};
char g_KeyNameBuffer[200] = {};

// char[256]
char g_LeadByteTable[256] = {};

// char[260]
char g_ExeFileNameBuffer_A[260] = {};
char g_DllFileNameBuffer_A[260] = {};

// char[4]
char g_CHAR_ARRAY_02c97384[4] = {};

// char[6000]
char g_CHAR_ARRAY_02c9a630[6000] = {};

// double
double g_TimerCalibration = {};

// float
float g_WaterAnimationPhase = {};
float g_FLOAT_02c9c7e0 = {};
float g_FLOAT_02c9c7e4 = {};

// float[200]
float g_WeatherParticleGroundHeights[200] = {};

// int
int g_WaterAnimationBlend = {};
int g_INT_02c9300c = {};
int g_INT_02c93010 = {};
int g_FlipPending = {};
int g_GraphicsResetFlag = {};
int g_INT_02c9931c = {};
int g_INT_02c99320 = {};
int g_INT_02c99324 = {};
int g_INT_02c99328 = {};
int g_INT_02c9932c = {};
int g_INT_02c99330 = {};
int g_INT_02c99334 = {};
int g_PreviousCounterHigh = {};
int g_AccumulatedGameTime = {};
int g_InputReadIndex = {};
int g_InputWriteIndex = {};
int g_InputCountOld = {};
int g_CrosshairBrightness = {};
int g_INT_02c9be6c = {};
int g_InputDisabled = {};
int g_INT_02c9be74 = {};
int g_TotalPhysicalMemory = {};
int g_AvailableSwapSpace = {};
int g_INT_02c9c7e8 = {};
int g_INT_02c9cb08 = {};
int g_INT_02c9d294 = {};
int g_MovieWindowHandle = {};
int g_MovieHandle = {};
int g_MoviePlaying = {};
int g_FullscreenMovie = {};
int g_ClipVertexCountStage1 = {};
int g_ClipVertexCountStage2 = {};
int g_ClipVertexCountStage3 = {};
int g_ClipVertexCountStage4 = {};
int g_RasterizerEdgeCount = {};
int g_RasterizerMinY = {};
int g_RasterizerMaxY = {};
int g_INT_02c9f040 = {};
int g_EmergencyExitFlag = {};
int g_EnvironInitialized = {};
int g_MultibyteLocaleActive = {};
int g_INT_02c9ff60 = {};
int g_INT_02c9ff64 = {};
int g_BufferedCharacter = {};
int g_BufferedVirtualKey = {};
int g_BufferedRepeatCount = {};

// int[1]
int g_UseMultimediaTimer[1] = {};
int g_INT_ARRAY_02c9d1c4[1] = {};

// int[20]
int g_InputBuffer[20] = {};

// int[600]
int g_INT_ARRAY_02c9be80[600] = {};

// uint
uint g_UINT_02c9a540 = {};

// void*
void* g_PTR_02c99310 = {};
void* g_joyGetPosEx = {};
void* g_CurrentThreadTlsBlock = {};
void* g_PTR_02c9ff68 = {};
void* g_PTR_02c9ff90 = {};
void* g_PTR_02c9ffa0 = {};

// wchar_t[260]
wchar_t g_ExeFileNameBuffer_W[260] = {};
wchar_t g_DllFileNameBuffer_W[260] = {};

