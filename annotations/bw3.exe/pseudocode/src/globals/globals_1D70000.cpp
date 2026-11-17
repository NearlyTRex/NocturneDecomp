#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1D70000
// =============================================================================

// CAlphaBitmap
CAlphaBitmap CAlphaBitmap_01d70890 = {};
CAlphaBitmap CAlphaBitmap_01d708a4 = {};
CAlphaBitmap CAlphaBitmap_01d708b8 = {};
CAlphaBitmap CAlphaBitmap_01d708cc = {};
CAlphaBitmap CAlphaBitmap_01d70be8 = {};
CAlphaBitmap CAlphaBitmap_01d71dec = {};
CAlphaBitmap CAlphaBitmap_01d71e00 = {};
CAlphaBitmap CAlphaBitmap_01d71e14 = {};
CAlphaBitmap CAlphaBitmap_01d71e28 = {};
CAlphaBitmap g_MenuBlurLeft = {};
CAlphaBitmap g_MenuBlurMiddle = {};
CAlphaBitmap g_MenuBlurRight = {};
CAlphaBitmap g_CalibrationBitmap = {};

// CAlphaBitmap[16]
CAlphaBitmap CAlphaBitmap_ARRAY_01d708e0[16] = {};

// CAlphaBitmap[8]
CAlphaBitmap g_MenuBitmaps[8] = {};

// CDemonActorType
CDemonActorType g_CKeyActorClassInfo = {};
CDemonActorType g_CLadderClassInfo = {};
CDemonActorType g_CLeverClassInfo = {};
CDemonActorType g_CLightStaffClassInfo = {};
CDemonActorType g_CLightConeClassInfo = {};
CDemonActorType g_CMeleeClassInfo = {};

// CLevelLoader
CLevelLoader g_CLevelLoaderInstance = {};

// CMatrix3x3i
CMatrix3x3i g_CMatrix3x3i_01d7266c = {};

// CMini3D
CMini3D g_CMini3DInstance = {};

// CMoon
CMoon g_CMoonInstance = {};

// CVector3i
CVector3i g_CVector3i_01d70c44 = {};
CVector3i g_CVector3i_01d70c50 = {};

// char*
char* g_CHAR_PTR_01d71de0 = {};
char* g_CHAR_PTR_01d74000 = {};
char* g_CHAR_PTR_01d74028 = {};
char* g_CHAR_PTR_01d74068 = {};
char* g_CHAR_PTR_01d74a28 = {};
char* g_CHAR_PTR_01d75450 = {};
char* g_CHAR_PTR_01d75878 = {};

// char*[4]
char* g_CHAR_PTR_ARRAY_01d75c88[4] = {};

// char[10][256]
char g_CHAR_ARRAY_ARRAY_01d76228[10][256] = {};

// char[2304]
char g_CHAR_ARRAY_01d74128[2304] = {};

// char[256]
char g_CHAR_ARRAY_01d73800[256] = {};
char g_CHAR_ARRAY_01d73900[256] = {};
char g_CHAR_ARRAY_01d73a00[256] = {};
char g_CHAR_ARRAY_01d73c00[256] = {};
char g_CHAR_ARRAY_01d75478[256] = {};
char g_CHAR_ARRAY_01d75578[256] = {};
char g_CHAR_ARRAY_01d75678[256] = {};
char g_CHAR_ARRAY_01d75778[256] = {};

// char[30][40]
char g_CHAR_ARRAY_ARRAY_01d75d20[30][40] = {};

// char[4352]
char g_CHAR_ARRAY_01d70ce0[4352] = {};

// char[4][256]
char g_CHAR_ARRAY_ARRAY_01d75888[4][256] = {};

// float
float g_FLOAT_01d76c40 = {};
float g_FLOAT_01d76c4c = {};
float g_FLOAT_01d76c50 = {};
float g_FLOAT_01d76c54 = {};
float g_FLOAT_01d76c58 = {};
float g_FLOAT_01d76c5c = {};
float g_FLOAT_01d76c60 = {};
float g_FLOAT_01d76c64 = {};
float g_FLOAT_01d76c68 = {};
float g_FLOAT_01d76c6c = {};
float g_FLOAT_01d76c70 = {};
float g_FLOAT_01d76c74 = {};
float g_FLOAT_01d76c78 = {};
float g_FLOAT_01d76c7c = {};
float g_FLOAT_01d76c80 = {};
float g_FLOAT_01d76c84 = {};
float g_FLOAT_01d76c88 = {};
float g_FLOAT_01d76c8c = {};
float g_FLOAT_01d76c90 = {};
float g_FLOAT_01d76c94 = {};
float g_FLOAT_01d76c98 = {};
float g_FLOAT_01d76ca8 = {};
float g_FLOAT_01d76cac = {};
float g_FLOAT_01d76cb0 = {};
float g_FLOAT_01d76cb4 = {};
float g_FLOAT_01d76cb8 = {};
float g_FLOAT_01d76cbc = {};
float g_FLOAT_01d76cc4 = {};
float g_FLOAT_01d76cc8 = {};
float g_FLOAT_01d76cd4 = {};
float g_FLOAT_01d76ce4 = {};
float g_FLOAT_01d76ce8 = {};
float g_FLOAT_01d76cec = {};
float g_FLOAT_01d76cf0 = {};
float g_FLOAT_01d76cf4 = {};
float g_FLOAT_01d76d04 = {};
float g_FLOAT_01d76d08 = {};
float g_FLOAT_01d76d0c = {};
float g_FLOAT_01d76d10 = {};
float g_FLOAT_01d76d14 = {};
float g_FLOAT_01d76d18 = {};
float g_FLOAT_01d76d1c = {};
float g_FLOAT_01d76d20 = {};
float g_FLOAT_01d76d24 = {};
float g_FLOAT_01d7777c = {};
float g_FLOAT_01d77780 = {};
float g_FLOAT_01d77784 = {};
float g_FLOAT_01d777bc = {};
float g_FLOAT_01d777c0 = {};
float g_FLOAT_01d777c4 = {};
float g_FLOAT_01d777fc = {};
float g_FLOAT_01d77800 = {};
float g_FLOAT_01d77804 = {};
float g_FLOAT_01d78f7c = {};
float g_FLOAT_01d7a69c = {};
float g_FLOAT_01d7a6a0 = {};
float g_FLOAT_01d7a6a4 = {};
float g_FLOAT_01d7a6a8 = {};
float g_FLOAT_01d7a6b4 = {};
float g_FLOAT_01d7a6b8 = {};
float g_FLOAT_01d7a6bc = {};
float g_FLOAT_01d7a6c0 = {};
float g_FLOAT_01d7f4f8 = {};
float g_FLOAT_01d7f4fc = {};
float g_FLOAT_01d7f500 = {};
float g_FLOAT_01d7f508 = {};
float g_FLOAT_01d7f50c = {};
float g_FLOAT_01d7f510 = {};
float g_FLOAT_01d7f518 = {};
float g_FLOAT_01d7f51c = {};
float g_FLOAT_01d7f520 = {};
float g_FLOAT_01d7f528 = {};
float g_FLOAT_01d7f52c = {};
float g_FLOAT_01d7f530 = {};
float g_FLOAT_01d7f538 = {};
float g_FLOAT_01d7f53c = {};
float g_FLOAT_01d7f540 = {};
float g_FLOAT_01d7f544 = {};
float g_FLOAT_01d7f54c = {};
float g_FLOAT_01d7f550 = {};
float g_FLOAT_01d7f554 = {};
float g_FLOAT_01d7f55c = {};
float g_FLOAT_01d7f560 = {};
float g_FLOAT_01d7f564 = {};
float g_FLOAT_01d7f56c = {};
float g_FLOAT_01d7f570 = {};
float g_FLOAT_01d7f574 = {};

// float*
float* g_FLOAT_PTR_01d76f60 = {};
float* g_FLOAT_PTR_01d76f64 = {};
float* g_FLOAT_PTR_01d7f4f4 = {};

// int
int g_INT_01d70a20 = {};
int g_INT_01d70a34 = {};
int g_INT_01d70a38 = {};
int g_INT_01d70c38 = {};
int g_INT_01d70c3c = {};
int g_INT_01d70c40 = {};
int g_INT_01d71de4 = {};
int g_INT_01d71de8 = {};
int g_INT_01d72644 = {};
int g_INT_01d72648 = {};
int g_INT_01d7264c = {};
int g_INT_01d72650 = {};
int g_INT_01d72654 = {};
int g_INT_01d72658 = {};
int g_INT_01d7265c = {};
int g_INT_01d72660 = {};
int g_INT_01d72664 = {};
int g_INT_01d7269c = {};
int g_INT_01d726a0 = {};
int g_INT_01d728fc = {};
int g_INT_01d737d4 = {};
int g_INT_01d737d8 = {};
int g_INT_01d737e0 = {};
int g_INT_01d737e4 = {};
int g_INT_01d74020 = {};
int g_INT_01d74024 = {};
int g_INT_01d740a8 = {};
int g_INT_01d740e8 = {};
int g_INT_01d75c98 = {};
int g_INT_01d76220 = {};
int g_INT_01d76c34 = {};
int g_INT_01d76c38 = {};
int g_INT_01d76c3c = {};
int g_INT_01d76c44 = {};
int g_INT_01d76c48 = {};
int g_INT_01d76c9c = {};
int g_INT_01d76ca0 = {};
int g_INT_01d76ca4 = {};
int g_INT_01d76cc0 = {};
int g_INT_01d76ccc = {};
int g_INT_01d76cd0 = {};
int g_INT_01d76cf8 = {};
int g_INT_01d76f5c = {};
int g_INT_01d76f68 = {};
int g_INT_01d76f6c = {};
int g_INT_01d76f70 = {};
int g_INT_01d76f74 = {};
int g_INT_01d76f78 = {};
int g_INT_01d7977c = {};
int g_INT_01d79780 = {};
int g_INT_01d79784 = {};
int g_INT_01d7a694 = {};
int g_INT_01d7a698 = {};
int g_INT_01d7a6c4 = {};
int g_INT_01d7a6c8 = {};
int g_INT_01d7a6cc = {};
int g_INT_01d7f504 = {};
int g_INT_01d7f514 = {};
int g_INT_01d7f524 = {};
int g_INT_01d7f534 = {};

// int*[31]
int* g_INT_PTR_ARRAY_01d75c9c[31] = {};

// int[10]
int g_INT_ARRAY_01d726a4[10] = {};
int g_INT_ARRAY_01d726cc[10] = {};
int g_INT_ARRAY_01d726f4[10] = {};
int g_INT_ARRAY_01d7271c[10] = {};
int g_INT_ARRAY_01d72744[10] = {};
int g_INT_ARRAY_01d7276c[10] = {};
int g_INT_ARRAY_01d72794[10] = {};
int g_INT_ARRAY_01d727bc[10] = {};
int g_INT_ARRAY_01d727e4[10] = {};
int g_INT_ARRAY_01d7280c[10] = {};
int g_INT_ARRAY_01d72834[10] = {};
int g_INT_ARRAY_01d7285c[10] = {};
int g_INT_ARRAY_01d72884[10] = {};
int g_INT_ARRAY_01d728ac[10] = {};
int g_INT_ARRAY_01d728d4[10] = {};
int g_INT_ARRAY_01d72900[10] = {};
int g_INT_ARRAY_01d72928[10] = {};
int g_INT_ARRAY_01d72950[10] = {};
int g_INT_ARRAY_01d72978[10] = {};
int g_INT_ARRAY_01d729a0[10] = {};
int g_INT_ARRAY_01d729c8[10] = {};
int g_INT_ARRAY_01d729f0[10] = {};
int g_INT_ARRAY_01d72a18[10] = {};
int g_INT_ARRAY_01d72a40[10] = {};
int g_INT_ARRAY_01d72a68[10] = {};
int g_INT_ARRAY_01d72a90[10] = {};
int g_INT_ARRAY_01d72ab8[10] = {};
int g_INT_ARRAY_01d72ae0[10] = {};
int g_INT_ARRAY_01d72b08[10] = {};
int g_INT_ARRAY_01d72b30[10] = {};
int g_INT_ARRAY_01d72b58[10] = {};
int g_INT_ARRAY_01d72b80[10] = {};
int g_INT_ARRAY_01d72ba8[10] = {};

// int[256]
int g_INT_ARRAY_01d71e3c[256] = {};

// int[257]
int g_INT_ARRAY_01d72240[257] = {};

// short[2]
short g_SHORT_ARRAY_01d7a6d0[2] = {};

// uint
uint g_UINT_01d72690 = {};
uint g_UINT_01d72694 = {};
uint g_UINT_01d72698 = {};

// void*
void* g_PTR_01d70a78 = {};
void* g_PTR_01d76cfc = {};
void* g_PTR_01d76d00 = {};
void* g_PTR_01d7a6ac = {};
void* g_PTR_01d7a6b0 = {};

