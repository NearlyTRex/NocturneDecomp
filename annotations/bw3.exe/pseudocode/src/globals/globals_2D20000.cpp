#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2D20000
// =============================================================================

// CDemonActorType
CDemonActorType g_CWerewolfClassInfo = {};
CDemonActorType g_CYowClassInfo = {};
CDemonActorType g_CZombieClassInfo = {};
CDemonActorType g_CDemonActorType_02d24844 = {};
CDemonActorType g_CDemonActorType_02d24880 = {};
CDemonActorType g_CDemonActorType_02d248bc = {};
CDemonActorType g_CDemonActorType_02d248f8 = {};
CDemonActorType g_CDemonActorType_02d24934 = {};
CDemonActorType g_CZombiePriestClassInfo = {};
CDemonActorType g_CKedwardClassInfo = {};
CDemonActorType g_CMattanntoteClassInfo = {};
CDemonActorType g_CTawiscaraClassInfo = {};
CDemonActorType g_CBaalClassInfo = {};
CDemonActorType g_CHecaitomixClassInfo = {};
CDemonActorType g_CDarkwolfClassInfo = {};
CDemonActorType g_CDemonActorType_02d24b5c = {};
CDemonActorType g_CSpiritEagleClassInfo = {};
CDemonActorType g_CSpiritIndianClassInfo = {};
CDemonActorType g_CSpiritBearClassInfo = {};
CDemonActorType g_CHinoClassInfo = {};
CDemonActorType g_CStylerClassInfo = {};
CDemonActorType g_CStylerDemonClassInfo = {};
CDemonActorType g_CAsgayaClassInfo = {};

// CVector3f
CVector3f g_WerewolfEyeGlowOffsetLeft = {};
CVector3f g_WerewolfEyeGlowOffsetRight = {};
CVector3f g_CVector3f_02d24a54 = {};
CVector3f g_CVector3f_02d24a60 = {};

// CVector3i
CVector3i g_TempProjectedCoord = {};

// DWORD
DWORD g_PreviousCounterLow = {};

// FileListNode*
FileListNode* g_AllocatedListHead = {};
FileListNode* g_FreeListHeadPointer = {};

// HMODULE
HMODULE g_WinmmDll = {};

// HWND
HWND g_MainWindowHandle = {};

// SRenderVertex[32]
SRenderVertex g_ClipVertexBufferStage2[32] = {};
SRenderVertex g_ClipVertexBufferStage1[32] = {};
SRenderVertex g_ClipVertexBufferStage3[32] = {};
SRenderVertex g_ClipVertexBufferStage4[32] = {};

// SSoftwareEdge[16]
SSoftwareEdge g_SSoftwareEdge_ARRAY_02d24d84[16] = {};

// WCHAR*
WCHAR* g_CommandLineW = {};

// _struct_19
_struct_19 g_PerformanceCounter = {};
_struct_19 g_PerformanceFrequency = {};

// byte
byte g_BYTE_02d20334 = {};
byte g_SignalHandlingActive = {};

// char*
char* g_CHAR_PTR_02d2281c = {};
char* g_CommandLineA = {};

// char**
char** g_EnvironStringArea = {};
char** g_EnvironmentBlock = {};

// char[16]
char g_CHAR_ARRAY_02d258e0[16] = {};

// char[1]
char g_CHAR_ARRAY_02d25940[1] = {};

// char[256]
char g_LeadByteTable[256] = {};

// char[260]
char g_ExeFileNameBuffer_A[260] = {};
char g_DllFileNameBuffer_A[260] = {};

// char[6200]
char g_CHAR_ARRAY_02d20340[6200] = {};

// double
double g_TimerCalibration = {};

// float
float g_FLOAT_02d224f0 = {};
float g_FLOAT_02d224f4 = {};

// int
int g_PreviousCounterHigh = {};
int g_AccumulatedGameTime = {};
int g_InputReadIndex = {};
int g_InputWriteIndex = {};
int g_InputCountOld = {};
int g_CrosshairBrightness = {};
int g_INT_02d21b7c = {};
int g_InputDisabled = {};
int g_FocusRegained = {};
int g_TotalPhysicalMemory = {};
int g_AvailableSwapSpace = {};
int g_INT_02d224f8 = {};
int g_INT_02d22818 = {};
int g_INT_02d22fa4 = {};
int g_MovieWindowHandle = {};
int g_MovieHandle = {};
int g_MoviePlaying = {};
int g_FullscreenMovie = {};
int g_ClipVertexCountStage1 = {};
int g_ClipVertexCountStage2 = {};
int g_ClipVertexCountStage3 = {};
int g_ClipVertexCountStage4 = {};
int g_INT_02d24970 = {};
int g_INT_02d24974 = {};
int g_INT_02d24978 = {};
int g_INT_02d24984 = {};
int g_INT_02d24988 = {};
int g_INT_02d24994 = {};
int g_INT_02d24998 = {};
int g_INT_02d2499c = {};
int g_INT_02d24c4c = {};
int g_INT_02d24c70 = {};
int g_INT_02d24c78 = {};
int g_INT_02d24cf4 = {};
int g_INT_02d24cf8 = {};
int g_INT_02d24cfc = {};
int g_INT_02d24d00 = {};
int g_INT_02d24d04 = {};
int g_RasterizerEdgeCount = {};
int g_RasterizerMinY = {};
int g_RasterizerMaxY = {};
int g_INT_02d25290 = {};
int g_EmergencyExitFlag = {};
int g_EnvironInitialized = {};
int g_MultibyteLocaleActive = {};
int g_INT_02d261b0 = {};
int g_INT_02d261b4 = {};
int g_BufferedCharacter = {};
int g_BufferedVirtualKey = {};
int g_BufferedRepeatCount = {};

// int[1]
int g_UseMultimediaTimer[1] = {};
int g_INT_ARRAY_02d22ed4[1] = {};

// int[20]
int g_InputBuffer[20] = {};

// int[600]
int g_INT_ARRAY_02d21b90[600] = {};

// uint
uint g_UINT_02d20258 = {};

// void*
void* g_joyGetPosEx = {};
void* g_CurrentThreadTlsBlock = {};
void* g_PTR_02d261b8 = {};
void* g_PTR_02d261e0 = {};
void* g_PTR_02d261f0 = {};

// wchar_t[260]
wchar_t g_ExeFileNameBuffer_W[260] = {};
wchar_t g_DllFileNameBuffer_W[260] = {};

// word
word DAT_02D270D6 = 0;
word DAT_02D27376 = 0;
word DAT_02D275D2 = 0;
word DAT_02D27862 = 0;
word DAT_02D27ABA = 0;
word DAT_02D27D1E = 0;
word DAT_02D27DBA = 0;
word DAT_02D27F86 = 0;
word DAT_02D2809A = 0;
word DAT_02D28336 = 0;
word DAT_02D284E6 = 0;
word DAT_02D2858E = 0;
word DAT_02D2862A = 0;
word DAT_02D287D6 = 0;
word DAT_02D28A52 = 0;
word DAT_02D28AC2 = 0;
word DAT_02D28B4E = 0;
word DAT_02D28BB2 = 0;
word DAT_02D28C6A = 0;
word DAT_02D28EFE = 0;
word DAT_02D28F2E = 0;
word DAT_02D2915A = 0;
word DAT_02D29242 = 0;
word DAT_02D292CE = 0;
word DAT_02D29336 = 0;
word DAT_02D29382 = 0;
word DAT_02D293E6 = 0;
word DAT_02D2952E = 0;
word DAT_02D2961E = 0;
word DAT_02D297DE = 0;
word DAT_02D29926 = 0;
word DAT_02D29B3E = 0;
word DAT_02D29BF2 = 0;
word DAT_02D29C0A = 0;
word DAT_02D29CDA = 0;
word DAT_02D29D2E = 0;
word DAT_02D29E1E = 0;
word DAT_02D29EEE = 0;
word DAT_02D29F6E = 0;
word DAT_02D2A21E = 0;
word DAT_02D2A26E = 0;
word DAT_02D2A306 = 0;
word DAT_02D2A3FA = 0;
word DAT_02D2A4EE = 0;
word DAT_02D2A5CA = 0;
word DAT_02D2A91E = 0;
word DAT_02D2A942 = 0;
word DAT_02D2AC06 = 0;
word DAT_02D2ACAA = 0;
word DAT_02D2AD2A = 0;
word DAT_02D2ADEA = 0;
word DAT_02D2AEC6 = 0;
word DAT_02D2B06A = 0;
word DAT_02D2B28A = 0;
word DAT_02D2B3FE = 0;
word DAT_02D2B5F6 = 0;
word DAT_02D2B702 = 0;
word DAT_02D2BA2E = 0;
word DAT_02D2BE5E = 0;
word DAT_02D2BF16 = 0;
word DAT_02D2C146 = 0;
word DAT_02D2C376 = 0;
word DAT_02D2C6FA = 0;
word DAT_02D2C7AE = 0;
word DAT_02D2C816 = 0;
word DAT_02D2CAFE = 0;
word DAT_02D2CDB6 = 0;
word DAT_02D2D20E = 0;
word DAT_02D2D3DA = 0;
word DAT_02D2D4FE = 0;
word DAT_02D2D586 = 0;
word DAT_02D2D8E2 = 0;
word DAT_02D2DAC6 = 0;
word DAT_02D2DE1E = 0;
word DAT_02D2E1B2 = 0;
word DAT_02D2E35E = 0;
word DAT_02D2E416 = 0;
word DAT_02D2E71E = 0;
word DAT_02D2E8C6 = 0;
word DAT_02D2EAFE = 0;
word DAT_02D2EC76 = 0;
word DAT_02D2EE32 = 0;
word DAT_02D2F212 = 0;
word DAT_02D2F322 = 0;
word DAT_02D2F3EA = 0;
word DAT_02D2F4B2 = 0;
word DAT_02D2F50E = 0;
word DAT_02D2F612 = 0;
word DAT_02D2F842 = 0;
word DAT_02D2FE32 = 0;
word DAT_02D2FEBA = 0;
word DAT_02D2FF62 = 0;

