#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1D20000
// =============================================================================

// CDemonActorType
CDemonActorType g_CMimicClassInfo = {};
CDemonActorType g_CMineCarClassInfo = {};

// CMini3D
CMini3D g_CMini3DInstance = {};

// CVector3f[32]
CVector3f g_CVector3f_ARRAY_01d2c5d4[32] = {};
CVector3f g_CVector3f_ARRAY_01d2c758[32] = {};

// SMRGLPrimitiveQuadIndex
SMRGLPrimitiveQuadIndex g_SMRGLPrimitiveQuadIndex_01d2c8d8 = {};

// SSoftwareEdge
SSoftwareEdge g_SSoftwareEdge_01d2c0c8 = {};

// char*
char* g_CHAR_PTR_01d20a08 = {};
char* g_CHAR_PTR_01d21030 = {};

// char*[4]
char* g_CHAR_PTR_ARRAY_01d21448[4] = {};

// char[10][256]
char g_CHAR_ARRAY_ARRAY_01d219e8[10][256] = {};

// char[256]
char g_CHAR_ARRAY_01d20a30[256] = {};
char g_CHAR_ARRAY_01d20b30[256] = {};
char g_CHAR_ARRAY_01d20c30[256] = {};
char g_CHAR_ARRAY_01d20d30[256] = {};
char g_CHAR_ARRAY_01d20e30[256] = {};
char g_CHAR_ARRAY_01d20f30[256] = {};

// char[30][40]
char g_CHAR_ARRAY_ARRAY_01d214e0[30][40] = {};

// char[4][256]
char g_CHAR_ARRAY_ARRAY_01d21048[4][256] = {};

// float
float g_FLOAT_01d224c0 = {};
float g_FLOAT_01d224cc = {};
float g_FLOAT_01d224d0 = {};
float g_FLOAT_01d224d4 = {};
float g_FLOAT_01d224d8 = {};
float g_FLOAT_01d224dc = {};
float g_FLOAT_01d224e0 = {};
float g_FLOAT_01d224e4 = {};
float g_FLOAT_01d224e8 = {};
float g_FLOAT_01d224ec = {};
float g_FLOAT_01d224f0 = {};
float g_FLOAT_01d224f4 = {};
float g_FLOAT_01d224f8 = {};
float g_FLOAT_01d224fc = {};
float g_FLOAT_01d22500 = {};
float g_FLOAT_01d22504 = {};
float g_FLOAT_01d22508 = {};
float g_FLOAT_01d2250c = {};
float g_FLOAT_01d22510 = {};
float g_FLOAT_01d22514 = {};
float g_FLOAT_01d22518 = {};
float g_FLOAT_01d22528 = {};
float g_FLOAT_01d2252c = {};
float g_FLOAT_01d22530 = {};
float g_FLOAT_01d22534 = {};
float g_FLOAT_01d22538 = {};
float g_FLOAT_01d2253c = {};
float g_FLOAT_01d22544 = {};
float g_FLOAT_01d22548 = {};
float g_FLOAT_01d22554 = {};
float g_FLOAT_01d22564 = {};
float g_FLOAT_01d22568 = {};
float g_FLOAT_01d2256c = {};
float g_FLOAT_01d22570 = {};
float g_FLOAT_01d22574 = {};
float g_FLOAT_01d22584 = {};
float g_FLOAT_01d22588 = {};
float g_FLOAT_01d2258c = {};
float g_FLOAT_01d22590 = {};
float g_FLOAT_01d22594 = {};
float g_FLOAT_01d22598 = {};
float g_FLOAT_01d2259c = {};
float g_FLOAT_01d225a0 = {};
float g_FLOAT_01d225a4 = {};
float g_FLOAT_01d22ffc = {};
float g_FLOAT_01d23000 = {};
float g_FLOAT_01d23004 = {};
float g_FLOAT_01d2303c = {};
float g_FLOAT_01d23040 = {};
float g_FLOAT_01d23044 = {};
float g_FLOAT_01d2307c = {};
float g_FLOAT_01d23080 = {};
float g_FLOAT_01d23084 = {};
float g_FLOAT_01d247fc = {};
float g_FLOAT_01d25f1c = {};
float g_FLOAT_01d25f20 = {};
float g_FLOAT_01d25f24 = {};
float g_FLOAT_01d25f28 = {};
float g_FLOAT_01d25f34 = {};
float g_FLOAT_01d25f38 = {};
float g_FLOAT_01d25f3c = {};
float g_FLOAT_01d25f40 = {};
float g_FLOAT_01d2ad78 = {};
float g_FLOAT_01d2ad7c = {};
float g_FLOAT_01d2ad80 = {};
float g_FLOAT_01d2ad88 = {};
float g_FLOAT_01d2ad8c = {};
float g_FLOAT_01d2ad90 = {};
float g_FLOAT_01d2ad98 = {};
float g_FLOAT_01d2ad9c = {};
float g_FLOAT_01d2ada0 = {};
float g_FLOAT_01d2ada8 = {};
float g_FLOAT_01d2adac = {};
float g_FLOAT_01d2adb0 = {};
float g_FLOAT_01d2adb8 = {};
float g_FLOAT_01d2adbc = {};
float g_FLOAT_01d2adc0 = {};
float g_FLOAT_01d2adc4 = {};
float g_FLOAT_01d2adcc = {};
float g_FLOAT_01d2add0 = {};
float g_FLOAT_01d2add4 = {};
float g_FLOAT_01d2addc = {};
float g_FLOAT_01d2ade0 = {};
float g_FLOAT_01d2ade4 = {};
float g_FLOAT_01d2adec = {};
float g_FLOAT_01d2adf0 = {};
float g_FLOAT_01d2adf4 = {};

// float*
float* g_FLOAT_PTR_01d227e0 = {};
float* g_FLOAT_PTR_01d227e4 = {};
float* g_FLOAT_PTR_01d2ad74 = {};

// int
int g_INT_01d21458 = {};
int g_INT_01d219e0 = {};
int g_INT_01d224b4 = {};
int g_INT_01d224b8 = {};
int g_INT_01d224bc = {};
int g_INT_01d224c4 = {};
int g_INT_01d224c8 = {};
int g_INT_01d2251c = {};
int g_INT_01d22520 = {};
int g_INT_01d22524 = {};
int g_INT_01d22540 = {};
int g_INT_01d2254c = {};
int g_INT_01d22550 = {};
int g_INT_01d22578 = {};
int g_INT_01d227dc = {};
int g_INT_01d227e8 = {};
int g_INT_01d227ec = {};
int g_INT_01d227f0 = {};
int g_INT_01d227f4 = {};
int g_INT_01d227f8 = {};
int g_INT_01d24ffc = {};
int g_INT_01d25000 = {};
int g_INT_01d25004 = {};
int g_INT_01d25f14 = {};
int g_INT_01d25f18 = {};
int g_INT_01d25f44 = {};
int g_INT_01d25f48 = {};
int g_INT_01d25f4c = {};
int g_INT_01d2ad84 = {};
int g_INT_01d2ad94 = {};
int g_INT_01d2ada4 = {};
int g_INT_01d2adb4 = {};
int g_INT_01d2c0c4 = {};
int g_INT_01d2c5c8 = {};
int g_INT_01d2c5cc = {};
int g_INT_01d2c5d0 = {};
int g_INT_01d2c754 = {};

// int*[31]
int* g_INT_PTR_ARRAY_01d2145c[31] = {};

// int[20]
int g_INT_ARRAY_01d22424[20] = {};

// short[2]
short g_SHORT_ARRAY_01d25f50[2] = {};

// void*
void* g_PTR_01d2257c = {};
void* g_PTR_01d22580 = {};
void* g_PTR_01d25f2c = {};
void* g_PTR_01d25f30 = {};

