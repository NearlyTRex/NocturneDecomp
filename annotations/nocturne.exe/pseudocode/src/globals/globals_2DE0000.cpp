#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2DE0000
// =============================================================================

// BOOL
BOOL g_BOOL_02de07f4 = {};

// BYTE
BYTE g_BYTE_02de5c24 = {};

// CDemonActorType
CDemonActorType g_CWerewolfActorType_02de078c = {};
CDemonActorType g_CZombieActorType_02de4940 = {};

// CVector3f
CVector3f CVector3f_02de0774 = {};
CVector3f CVector3f_02de0780 = {};

// DWORD
DWORD g_DWORD_02de07d0 = {};
DWORD g_DWORD_02de3120 = {};

// FileListNode*
FileListNode* g_FileListNode_PTR_02de4e20 = {};
FileListNode* g_FileListNode_PTR_02de4e24 = {};

// HMODULE
HMODULE g_HMODULE_02de3118 = {};

// HWND
HWND g_HWND_02de2098 = {};
HWND g_HWND_02de311c = {};

// SRenderVertex[32]
SRenderVertex g_SRenderVertex_ARRAY_02de3140[32] = {};
SRenderVertex g_SRenderVertex_ARRAY_02de3740[32] = {};
SRenderVertex g_SRenderVertex_ARRAY_02de3d40[32] = {};
SRenderVertex g_SRenderVertex_ARRAY_02de4340[32] = {};

// SSoftwareEdge[16]
SSoftwareEdge g_SSoftwareEdge_ARRAY_02de4980[16] = {};

// WCHAR*
WCHAR* g_WCHAR_PTR_02de4e38 = {};

// _struct_19
_struct_19 g_struct_19_02de07d8 = {};
_struct_19 g_struct_19_02de07e0 = {};

// char*
char* g_CHAR_PTR_02de2d14 = {};
char* g_CHAR_PTR_02de4e34 = {};

// char**
char** g_CHAR_PTR_PTR_02de54a0 = {};
char** g_CHAR_PTR_PTR_02de54a4 = {};

// char[16]
char g_CHAR_ARRAY_02de5460[16] = {};

// char[1]
char g_CHAR_ARRAY_02de5c40[1] = {};

// char[200]
char g_CHAR_ARRAY_02de06a8[200] = {};
char g_CHAR_ARRAY_02de1fd0[200] = {};

// char[256]
char g_CHAR_ARRAY_02de0860[256] = {};
char g_CHAR_ARRAY_02de5c41[256] = {};

// char[260]
char g_CHAR_ARRAY_02de4e40[260] = {};
char g_CHAR_ARRAY_02de514c[260] = {};

// double
double g_DOUBLE_02de07e8 = {};

// float[200]
float g_FLOAT_ARRAY_02de0388[200] = {};

// int
int g_INT_02de07d4 = {};
int g_INT_02de07f0 = {};
int g_INT_02de0848 = {};
int g_INT_02de084c = {};
int g_INT_02de0850 = {};
int g_INT_02de0854 = {};
int g_INT_02de0858 = {};
int g_INT_02de20a0 = {};
int g_INT_02de20a4 = {};
int g_INT_02de20a8 = {};
int g_INT_02de20ac = {};
int g_INT_02de2d10 = {};
int g_INT_02de3124 = {};
int g_INT_02de312c = {};
int g_INT_02de3130 = {};
int g_INT_02de3134 = {};
int g_INT_02de3138 = {};
int g_INT_02de313c = {};
int g_INT_02de497c = {};
int g_INT_02de4e00 = {};
int g_INT_02de4e04 = {};
int g_INT_02de4e10 = {};
int g_INT_02de4e30 = {};
int g_INT_02de54a8 = {};
int g_INT_02de5c10 = {};
int g_INT_02de5c14 = {};
int g_INT_02de5c30 = {};
int g_INT_02de5d50 = {};
int g_INT_02de5d54 = {};
int g_INT_02de5d58 = {};
int g_INT_02de5d80 = {};
int g_INT_02de5d84 = {};
int g_INT_02de5d88 = {};

// int[20]
int g_INT_ARRAY_02de07f8[20] = {};

// int[600]
int g_INT_ARRAY_02de20b0[600] = {};

// uint
uint g_UINT_02de0770 = {};

// void*
void* g_PTR_02de3114 = {};
void* g_PTR_02de4e3c = {};
void* g_PTR_02de5c18 = {};
void* g_PTR_02de5d60 = {};
void* g_PTR_02de5d70 = {};

// wchar_t[260]
wchar_t g_WCHAR_T_ARRAY_02de4f44[260] = {};
wchar_t g_WCHAR_T_ARRAY_02de5250[260] = {};

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

