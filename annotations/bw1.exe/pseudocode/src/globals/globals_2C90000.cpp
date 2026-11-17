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
CDemonGlobe g_CDemonGlobe_02c99774 = {};

// CVector3f
CVector3f g_CVector3f_02c9a544 = {};
CVector3f g_CVector3f_02c9a550 = {};

// CVector3f[200]
CVector3f g_CVector3f_ARRAY_02c997f8[200] = {};

// CVector3i
CVector3i g_CVector3i_02c9ffb0 = {};

// CVector3i[1000]
CVector3i g_CVector3i_ARRAY_02c94468[1000] = {};

// CWeather
CWeather g_CWeather_02c997c0 = {};

// DWORD
DWORD g_DWORD_02c9a5a0 = {};

// FileListNode*
FileListNode* g_FileListNode_PTR_02c9f050 = {};
FileListNode* g_FileListNode_PTR_02c9f054 = {};

// HMODULE
HMODULE g_HMODULE_02c9cf10 = {};

// HWND
HWND g_HWND_02c9be68 = {};

// IDirectDraw*
IDirectDraw* g_IDirectDraw_PTR_02c99300 = {};

// IDirectDrawSurface*
IDirectDrawSurface* g_IDirectDrawSurface_PTR_02c99304 = {};
IDirectDrawSurface* g_IDirectDrawSurface_PTR_02c99308 = {};

// IUnknown*
IUnknown* g_IUnknown_PTR_02c9930c = {};

// PALETTEENTRY[256]
PALETTEENTRY g_PALETTEENTRY_ARRAY_02c99338[256] = {};

// SRenderVertex[32]
SRenderVertex g_SRenderVertex_ARRAY_02c9d2f8[32] = {};
SRenderVertex g_SRenderVertex_ARRAY_02c9d8f8[32] = {};
SRenderVertex g_SRenderVertex_ARRAY_02c9def8[32] = {};
SRenderVertex g_SRenderVertex_ARRAY_02c9e4f8[32] = {};

// SSoftwareEdge[16]
SSoftwareEdge g_SSoftwareEdge_ARRAY_02c9eb38[16] = {};

// WCHAR*
WCHAR* g_WCHAR_PTR_02c9f068 = {};

// _struct_19
_struct_19 g_struct_19_02c9a5a8 = {};
_struct_19 g_struct_19_02c9a5b0 = {};

// byte
byte g_BYTE_02c9a624 = {};
byte g_BYTE_02c9ff74 = {};

// char*
char* g_CHAR_PTR_02c9cb0c = {};
char* g_CHAR_PTR_02c9f064 = {};

// char**
char** g_CHAR_PTR_PTR_02c9f6d0 = {};
char** g_CHAR_PTR_PTR_02c9f6d4 = {};

// char[16]
char g_CHAR_ARRAY_02c9f690[16] = {};

// char[1]
char g_CHAR_ARRAY_02c9f6f0[1] = {};

// char[200]
char g_CHAR_ARRAY_02c9a478[200] = {};
char g_CHAR_ARRAY_02c9bda0[200] = {};

// char[256]
char g_CHAR_ARRAY_02c9f6f1[256] = {};

// char[260]
char g_CHAR_ARRAY_02c9f070[260] = {};
char g_CHAR_ARRAY_02c9f37c[260] = {};

// char[4]
char g_CHAR_ARRAY_02c97384[4] = {};

// char[6000]
char g_CHAR_ARRAY_02c9a630[6000] = {};

// double
double g_DOUBLE_02c9a5b8 = {};

// float
float g_FLOAT_02c93008 = {};
float g_FLOAT_02c9c7e0 = {};
float g_FLOAT_02c9c7e4 = {};

// float[200]
float g_FLOAT_ARRAY_02c9a158[200] = {};

// int
int g_INT_02c93004 = {};
int g_INT_02c9300c = {};
int g_INT_02c93010 = {};
int g_INT_02c99314 = {};
int g_INT_02c99318 = {};
int g_INT_02c9931c = {};
int g_INT_02c99320 = {};
int g_INT_02c99324 = {};
int g_INT_02c99328 = {};
int g_INT_02c9932c = {};
int g_INT_02c99330 = {};
int g_INT_02c99334 = {};
int g_INT_02c9a5a4 = {};
int g_INT_02c9a5c0 = {};
int g_INT_02c9a618 = {};
int g_INT_02c9a61c = {};
int g_INT_02c9a620 = {};
int g_INT_02c9a628 = {};
int g_INT_02c9be6c = {};
int g_INT_02c9be70 = {};
int g_INT_02c9be74 = {};
int g_INT_02c9be78 = {};
int g_INT_02c9be7c = {};
int g_INT_02c9c7e8 = {};
int g_INT_02c9cb08 = {};
int g_INT_02c9d294 = {};
int g_INT_02c9d298 = {};
int g_INT_02c9d29c = {};
int g_INT_02c9d2a0 = {};
int g_INT_02c9d2a8 = {};
int g_INT_02c9d2e8 = {};
int g_INT_02c9d2ec = {};
int g_INT_02c9d2f0 = {};
int g_INT_02c9d2f4 = {};
int g_INT_02c9eb34 = {};
int g_INT_02c9f038 = {};
int g_INT_02c9f03c = {};
int g_INT_02c9f040 = {};
int g_INT_02c9f060 = {};
int g_INT_02c9f6d8 = {};
int g_INT_02c9f6e0 = {};
int g_INT_02c9ff60 = {};
int g_INT_02c9ff64 = {};
int g_INT_02c9ff80 = {};
int g_INT_02c9ff84 = {};
int g_INT_02c9ff88 = {};

// int[1]
int g_INT_ARRAY_02c9a5c4[1] = {};
int g_INT_ARRAY_02c9d1c4[1] = {};

// int[20]
int g_INT_ARRAY_02c9a5c8[20] = {};

// int[600]
int g_INT_ARRAY_02c9be80[600] = {};

// uint
uint g_UINT_02c9a540 = {};

// void*
void* g_PTR_02c99310 = {};
void* g_PTR_02c9cf0c = {};
void* g_PTR_02c9f06c = {};
void* g_PTR_02c9ff68 = {};
void* g_PTR_02c9ff90 = {};
void* g_PTR_02c9ffa0 = {};

// wchar_t[260]
wchar_t g_WCHAR_T_ARRAY_02c9f174[260] = {};
wchar_t g_WCHAR_T_ARRAY_02c9f480[260] = {};

