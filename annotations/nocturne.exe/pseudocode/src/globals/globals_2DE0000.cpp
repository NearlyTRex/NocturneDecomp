#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2DE0000
// =============================================================================

// BOOL
BOOL g_UseMultimediaTimer = {};

// BYTE
BYTE g_SignalHandlingActive = {};

// CDemonActorType
CDemonActorType g_CWerewolfClassInfo = {};
CDemonActorType g_CZombieClassInfo = {};

// CVector3f
CVector3f g_WerewolfEyeGlowOffsetLeft = {};
CVector3f g_WerewolfEyeGlowOffsetRight = {};

// DWORD
DWORD g_PreviousCounterLow = {};
DWORD g_MovieHandle = {};

// FileListNode*
FileListNode* g_AllocatedListHead = {};
FileListNode* g_FreeListHeadPointer = {};

// HMODULE
HMODULE g_WinmmDll = {};

// HWND
HWND g_MainWindowHandle = {};
HWND g_MovieWindowHandle = {};

// SRenderVertex[32]
SRenderVertex g_ClipVertexBufferStage2[32] = {};
SRenderVertex g_ClipVertexBufferStage1[32] = {};
SRenderVertex g_ClipVertexBufferStage3[32] = {};
SRenderVertex g_ClipVertexBufferStage4[32] = {};

// SSoftwareEdge[16]
SSoftwareEdge g_RasterizerEdgeArray[16] = {};

// WCHAR*
WCHAR* g_CommandLineW = {};

// _struct_19
_struct_19 g_PerformanceCounter = {};
_struct_19 g_PerformanceFrequency = {};

// char*
char* g_CHAR_PTR_02de2d14 = {};
char* g_CommandLineA = {};

// char**
char** g_EnvironStringArea = {};
char** g_EnvironmentBlock = {};

// char[16]
char g_CHAR_ARRAY_02de5460[16] = {};

// char[1]
char g_CHAR_ARRAY_02de5c40[1] = {};

// char[200]
char g_WeatherParticleHitGround[200] = {};
char g_KeyNameBuffer[200] = {};

// char[256]
char g_CHAR_ARRAY_02de0860[256] = {};
char g_LeadByteTable[256] = {};

// char[260]
char g_ExeFileNameBuffer_A[260] = {};
char g_DllFileNameBuffer_A[260] = {};

// double
double g_TimerCalibration = {};

// float[200]
float g_WeatherParticleGroundHeights[200] = {};

// int
int g_PreviousCounterHigh = {};
int g_AccumulatedGameTime = {};
int g_InputReadIndex = {};
int g_InputWriteIndex = {};
int g_InputCountOld = {};
int g_UnknownInputValue = {};
int g_INT_02de0858 = {};
int g_InputDisabled = {};
int g_FocusRegained = {};
int g_TotalPhysicalMemory = {};
int g_AvailableSwapSpace = {};
int g_INT_02de2d10 = {};
int g_MoviePlaying = {};
int g_FullscreenMovie = {};
int g_ClipVertexCountStage1 = {};
int g_ClipVertexCountStage2 = {};
int g_ClipVertexCountStage3 = {};
int g_ClipVertexCountStage4 = {};
int g_RasterizerEdgeCount = {};
int g_RasterizerMinY = {};
int g_RasterizerMaxY = {};
int g_INT_02de4e10 = {};
int g_EmergencyExitFlag = {};
int g_EnvironInitialized = {};
int g_INT_02de5c10 = {};
int g_INT_02de5c14 = {};
int g_MultibyteLocaleActive = {};
int g_BufferedCharacter = {};
int g_BufferedVirtualKey = {};
int g_BufferedRepeatCount = {};
int g_INT_02de5d80 = {};
int g_INT_02de5d84 = {};
int g_INT_02de5d88 = {};

// int[20]
int g_InputBuffer[20] = {};

// int[600]
int g_MessageFlags[600] = {};

// uint
uint g_RainSoundHandle = {};

// void*
void* g_joyGetPosEx = {};
void* g_CurrentThreadTlsBlock = {};
void* g_PTR_02de5c18 = {};
void* g_PTR_02de5d60 = {};
void* g_PTR_02de5d70 = {};

// wchar_t[260]
wchar_t g_ExeFileNameBuffer_W[260] = {};
wchar_t g_DllFileNameBuffer_W[260] = {};

// word
word DAT_02DE612A = 0;
word DAT_02DE62C2 = 0;
word DAT_02DE6492 = 0;
word DAT_02DE6912 = 0;
word DAT_02DE6B96 = 0;
word DAT_02DE6E36 = 0;
word DAT_02DE6F9A = 0;
word DAT_02DE742E = 0;
word DAT_02DE75A6 = 0;
word DAT_02DE767E = 0;
word DAT_02DE7756 = 0;
word DAT_02DE77F6 = 0;
word DAT_02DE787E = 0;
word DAT_02DE7A22 = 0;
word DAT_02DE7AA2 = 0;
word DAT_02DE7B56 = 0;
word DAT_02DE7BDA = 0;
word DAT_02DE7C4E = 0;
word DAT_02DE7CEA = 0;
word DAT_02DE7D92 = 0;
word DAT_02DE7EAE = 0;
word DAT_02DE7F52 = 0;
word DAT_02DE7FAE = 0;
word DAT_02DE804A = 0;
word DAT_02DE80CE = 0;
word DAT_02DE8176 = 0;
word DAT_02DE81D6 = 0;
word DAT_02DE8226 = 0;
word DAT_02DE8332 = 0;
word DAT_02DE83D6 = 0;
word DAT_02DE848A = 0;
word DAT_02DE86D6 = 0;
word DAT_02DE8F5E = 0;
word DAT_02DE8FCE = 0;
word DAT_02DE9016 = 0;
word DAT_02DE925E = 0;
word DAT_02DE92EE = 0;
word DAT_02DE94BE = 0;
word DAT_02DE98F2 = 0;
word DAT_02DE9912 = 0;
word DAT_02DE9AD6 = 0;
word DAT_02DE9D4E = 0;
word DAT_02DE9E16 = 0;
word DAT_02DE9FAA = 0;
word DAT_02DEA036 = 0;
word DAT_02DEA21E = 0;
word DAT_02DEA2CE = 0;
word DAT_02DEA4C6 = 0;
word DAT_02DEA66E = 0;
word DAT_02DEA7FE = 0;
word DAT_02DEA97A = 0;
word DAT_02DEABAA = 0;
word DAT_02DEADB2 = 0;
word DAT_02DEB176 = 0;
word DAT_02DEB2BE = 0;
word DAT_02DEB4D2 = 0;
word DAT_02DEB55A = 0;
word DAT_02DEB606 = 0;
word DAT_02DEB786 = 0;
word DAT_02DEB956 = 0;
word DAT_02DEBAEA = 0;
word DAT_02DEC23E = 0;
word DAT_02DEC4C6 = 0;
word DAT_02DEC576 = 0;
word DAT_02DEC73E = 0;
word DAT_02DECB4A = 0;
word DAT_02DECD6A = 0;
word DAT_02DECED6 = 0;
word DAT_02DED29E = 0;
word DAT_02DED54E = 0;
word DAT_02DED6BE = 0;
word DAT_02DED9EA = 0;
word DAT_02DEDA86 = 0;
word DAT_02DEDAE2 = 0;
word DAT_02DEDBF6 = 0;
word DAT_02DEDCB6 = 0;
word DAT_02DEDE66 = 0;
word DAT_02DEDF82 = 0;
word DAT_02DEE152 = 0;
word DAT_02DEE1C2 = 0;
word DAT_02DEE29E = 0;
word DAT_02DEE84E = 0;
word DAT_02DEE982 = 0;
word DAT_02DEED1E = 0;
word DAT_02DEF43A = 0;
word DAT_02DEF4F6 = 0;
word DAT_02DEF59A = 0;
word DAT_02DEF61E = 0;
word DAT_02DEF6BE = 0;
word DAT_02DEF8B6 = 0;
word DAT_02DEFB9E = 0;
word DAT_02DEFEEA = 0;
word DAT_02DEFF62 = 0;

