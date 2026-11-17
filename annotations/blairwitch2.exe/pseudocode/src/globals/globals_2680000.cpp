#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2680000
// =============================================================================

// CVector3i
CVector3i g_CVector3i_026810c0 = {};

// WCHAR*
WCHAR* g_WCHAR_PTR_02680178 = {};

// byte
byte g_BYTE_02681084 = {};

// char*
char* g_CHAR_PTR_02680174 = {};

// char**
char** g_CHAR_PTR_PTR_026807e0 = {};
char** g_CHAR_PTR_PTR_026807e4 = {};

// char[16]
char g_CHAR_ARRAY_026807a0[16] = {};

// char[1]
char g_CHAR_ARRAY_02680800[1] = {};

// char[256]
char g_CHAR_ARRAY_02680801[256] = {};

// char[260]
char g_CHAR_ARRAY_02680180[260] = {};
char g_CHAR_ARRAY_0268048c[260] = {};

// int
int g_INT_0268014c = {};
int g_INT_02680150 = {};
int g_INT_02680170 = {};
int g_INT_026807e8 = {};
int g_INT_026807f0 = {};
int g_INT_02681070 = {};
int g_INT_02681074 = {};
int g_INT_02681090 = {};
int g_INT_02681094 = {};
int g_INT_02681098 = {};

// void*
void* g_PTR_0268017c = {};
void* g_PTR_02681078 = {};
void* g_PTR_026810a0 = {};
void* g_PTR_026810b0 = {};

// word
word DAT_026820D6 = 0;
word DAT_0268285E = 0;
word DAT_02682C4E = 0;
word DAT_02682CBE = 0;
word DAT_02682DE6 = 0;
word DAT_02682FAE = 0;
word DAT_0268316E = 0;
word DAT_02683252 = 0;
word DAT_0268332E = 0;
word DAT_0268356E = 0;
word DAT_02683666 = 0;
word DAT_02683862 = 0;
word DAT_026838DA = 0;
word DAT_02683A76 = 0;
word DAT_02683B1E = 0;
word DAT_02683C6E = 0;
word DAT_02683CB2 = 0;
word DAT_02683E9E = 0;
word DAT_02683F0E = 0;
word DAT_02683F9E = 0;
word DAT_0268413A = 0;
word DAT_02684406 = 0;
word DAT_026848AE = 0;
word DAT_02684AFA = 0;
word DAT_02684E66 = 0;
word DAT_02684F46 = 0;
word DAT_0268500E = 0;
word DAT_02685302 = 0;
word DAT_026853CE = 0;
word DAT_026855CA = 0;
word DAT_02685A2A = 0;
word DAT_02685B02 = 0;
word DAT_02685B9E = 0;
word DAT_02685D9A = 0;
word DAT_02685E62 = 0;
word DAT_02685F76 = 0;
word DAT_026861EA = 0;
word DAT_0268622A = 0;
word DAT_02686566 = 0;
word DAT_026865EA = 0;
word DAT_02686672 = 0;
word DAT_026866CA = 0;
word DAT_0268677E = 0;
word DAT_02686822 = 0;
word DAT_02686AFA = 0;
word DAT_02686CDE = 0;
word DAT_02686E76 = 0;
word DAT_02686FF2 = 0;
word DAT_0268722E = 0;
word DAT_026872BE = 0;
word DAT_026875CA = 0;
word DAT_02687736 = 0;
word DAT_02687956 = 0;
word DAT_02687A76 = 0;
word DAT_0268831E = 0;
word DAT_02688796 = 0;
word DAT_02688802 = 0;
word DAT_02688B7E = 0;
word DAT_02688CCA = 0;
word DAT_02688E9A = 0;
word DAT_0268907A = 0;
word DAT_026893FE = 0;
word DAT_0268961E = 0;
word DAT_0268979E = 0;
word DAT_02689AA6 = 0;
word DAT_02689CFA = 0;
word DAT_02689E02 = 0;
word DAT_02689F0E = 0;
word DAT_0268A08E = 0;
word DAT_0268A206 = 0;
word DAT_0268A39E = 0;
word DAT_0268A48E = 0;
word DAT_0268A536 = 0;
word DAT_0268A6DE = 0;
word DAT_0268A7EA = 0;
word DAT_0268A8FA = 0;
word DAT_0268AC7A = 0;
word DAT_0268AE26 = 0;
word DAT_0268AFA2 = 0;
word DAT_0268B092 = 0;
word DAT_0268B31E = 0;
word DAT_0268B38E = 0;
word DAT_0268B436 = 0;
word DAT_0268B59E = 0;
word DAT_0268B822 = 0;
word DAT_0268BC3A = 0;
word DAT_0268BD66 = 0;
word DAT_0268BF22 = 0;
word DAT_0268C04E = 0;
word DAT_0268C2FE = 0;
word DAT_0268C6B6 = 0;
word DAT_0268C8EA = 0;
word DAT_0268CA32 = 0;
word DAT_0268D00E = 0;
word DAT_0268D2B6 = 0;
word DAT_0268D3F6 = 0;
word DAT_0268D5BE = 0;
word DAT_0268D68E = 0;
word DAT_0268D6EE = 0;
word DAT_0268D7CE = 0;
word DAT_0268DA02 = 0;
word DAT_0268DBAE = 0;
word DAT_0268DCB2 = 0;
word DAT_0268DD86 = 0;
word DAT_0268DEDE = 0;
word DAT_0268E1A2 = 0;
word DAT_0268E3E2 = 0;
word DAT_0268E95E = 0;
word DAT_0268EC56 = 0;
word DAT_0268ED56 = 0;
word DAT_0268F14A = 0;
word DAT_0268F262 = 0;
word DAT_0268F312 = 0;
word DAT_0268F7FA = 0;
word DAT_0268FC1E = 0;
word DAT_0268FD8E = 0;
word DAT_0268FDFA = 0;
word DAT_0268FECE = 0;

