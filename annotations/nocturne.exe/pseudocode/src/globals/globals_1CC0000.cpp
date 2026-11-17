#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1CC0000
// =============================================================================

// CAlphaBitmap
CAlphaBitmap g_BatteryIconBitmap = {};
CAlphaBitmap g_HealthBar1Bitmap = {};
CAlphaBitmap g_HealthBar2Bitmap = {};
CAlphaBitmap g_TommyClipIconBitmap = {};
CAlphaBitmap g_BulletIconBitmap = {};
CAlphaBitmap g_LithiumIconBitmap = {};
CAlphaBitmap g_MercuryBulletIconBitmap = {};
CAlphaBitmap g_ShotShellIconBitmap = {};
CAlphaBitmap g_SilverBulletIconBitmap = {};
CAlphaBitmap g_HolyBulletIconBitmap = {};
CAlphaBitmap g_LoadingScreenBitmap1 = {};
CAlphaBitmap g_LoadingScreenBitmap2 = {};
CAlphaBitmap g_LoadingScreenBitmap3 = {};
CAlphaBitmap g_LoadingScreenBitmap4 = {};
CAlphaBitmap g_MenuBlurLeft = {};
CAlphaBitmap g_MenuBlurMiddle = {};
CAlphaBitmap g_MenuBlurRight = {};
CAlphaBitmap g_CalibrationBitmap = {};
CAlphaBitmap g_MoonCloudTexture = {};

// CAlphaBitmap[30]
CAlphaBitmap g_MoonAnimTextures[30] = {};

// CAlphaBitmap[8]
CAlphaBitmap g_MenuBitmaps[8] = {};

// CCourse[3]
CCourse g_MoonBatCourses[3] = {};

// CDemonActorType
CDemonActorType g_CKeyActorActorType_01cc30a8 = {};
CDemonActorType g_CLadderActorType_01cc30e8 = {};
CDemonActorType g_CLarvaActorType_01cc3124 = {};
CDemonActorType g_CLeverActorType_01cc3628 = {};
CDemonActorType g_CLightGunActorType_01cc3688 = {};
CDemonActorType g_CLightConeActorType_01cc36c4 = {};
CDemonActorType g_CMansionPuzzleCircleActorType_01cc485c = {};
CDemonActorType g_CMirrorHackActorType_01cc4898 = {};
CDemonActorType g_CMarqueeActorType_01cc48d4 = {};
CDemonActorType g_CMeleeActorType_01cc56a4 = {};
CDemonActorType g_CMimicActorType_01cc9058 = {};
CDemonActorType g_CMineCarActorType_01cc90e4 = {};
CDemonActorType g_CMobsterActorType_01ccdbd8 = {};
CDemonActorType g_CMolochActorType_01ccdc14 = {};

// CKeyFramedModel
CKeyFramedModel g_LoadingMoonModel = {};
CKeyFramedModel g_MoonBatModel = {};

// CKeys
CKeys g_CKeys_01cc30e4 = {};

// CLevelLoader
CLevelLoader g_CLevelLoader = {};

// CMatrix3x3i
CMatrix3x3i g_CMatrix3x3i_01cc5140 = {};

// CMoon
CMoon g_CMoonInstance = {};

// CVector3f[32]
CVector3f g_CVector3f_ARRAY_01cc9124[32] = {};
CVector3f g_CVector3f_ARRAY_01cc92a8[32] = {};

// CVector3i
CVector3i g_CVector3i_01cc3670 = {};
CVector3i g_CVector3i_01cc367c = {};

// CVector3i[2000]
CVector3i g_CVector3i_ARRAY_01cce554[2000] = {};

// SBat[30]
SBat g_SBat_ARRAY_01ccdeec[30] = {};

// SMRGLPrimitiveQuadIndex
SMRGLPrimitiveQuadIndex g_SMRGLPrimitiveQuadIndex_01cc9428 = {};

// char*
char* g_CurrentFilename = {};
char* g_CHAR_PTR_01cc6480 = {};
char* g_CHAR_PTR_01cc64ac = {};
char* g_CHAR_PTR_01cc64ec = {};
char* g_CHAR_PTR_01cc8110 = {};

// char*[10]
char* g_CHAR_PTR_ARRAY_01cc6eb0[10] = {};
char* g_CHAR_PTR_ARRAY_01cc78d8[10] = {};

// char*[4]
char* g_CHAR_PTR_ARRAY_01cc7d00[4] = {};

// char[10][256]
char g_CHAR_ARRAY_ARRAY_01cc6ed8[10][256] = {};
char g_CHAR_ARRAY_ARRAY_01cc8658[10][256] = {};

// char[256]
char g_CHAR_ARRAY_01cc5b80[256] = {};
char g_CHAR_ARRAY_01cc5c80[256] = {};
char g_CHAR_ARRAY_01cc5d80[256] = {};
char g_CHAR_ARRAY_01cc5e80[256] = {};
char g_CHAR_ARRAY_01cc5f80[256] = {};
char g_CHAR_ARRAY_01cc6180[256] = {};

// char[30][40]
char g_CHAR_ARRAY_ARRAY_01cc81a0[30][40] = {};

// char[4352]
char g_CHAR_ARRAY_01cc3700[4352] = {};

// char[4][256]
char g_CHAR_ARRAY_ARRAY_01cc7900[4][256] = {};

// char[8100]
char g_CHAR_ARRAY_01ccbbf0[8100] = {};

// char[9][256]
char g_CHAR_ARRAY_ARRAY_01cc65b0[9][256] = {};

// float
float g_FLOAT_01ccdec4 = {};

// int
int g_INT_01cc30a0 = {};
int g_INT_01cc30a4 = {};
int g_INT_01cc3664 = {};
int g_INT_01cc3668 = {};
int g_INT_01cc366c = {};
int g_CurrentLineNumber = {};
int g_INT_01cc4808 = {};
int g_INT_01cc5118 = {};
int g_INT_01cc511c = {};
int g_INT_01cc5120 = {};
int g_INT_01cc5124 = {};
int g_INT_01cc5128 = {};
int g_INT_01cc512c = {};
int g_INT_01cc5130 = {};
int g_INT_01cc5134 = {};
int g_INT_01cc5138 = {};
int g_INT_01cc5170 = {};
int g_INT_01cc5174 = {};
int g_INT_01cc53d0 = {};
int g_INT_01cc5b5c = {};
int g_INT_01cc5b64 = {};
int g_INT_01cc5b68 = {};
int g_INT_01cc64a4 = {};
int g_INT_01cc64a8 = {};
int g_INT_01cc652c = {};
int g_INT_01cc656c = {};
int g_INT_01cc8120 = {};
int g_INT_01cc8650 = {};
int g_INT_01cc9120 = {};
int g_INT_01cc92a4 = {};
int g_INT_01ccdebc = {};
int g_INT_01ccdec0 = {};

// int*[31]
int* g_INT_PTR_ARRAY_01cc8124[31] = {};

// int[10]
int g_INT_ARRAY_01cc5178[10] = {};
int g_INT_ARRAY_01cc51a0[10] = {};
int g_INT_ARRAY_01cc51c8[10] = {};
int g_INT_ARRAY_01cc51f0[10] = {};
int g_INT_ARRAY_01cc5218[10] = {};
int g_INT_ARRAY_01cc5240[10] = {};
int g_INT_ARRAY_01cc5268[10] = {};
int g_INT_ARRAY_01cc5290[10] = {};
int g_INT_ARRAY_01cc52b8[10] = {};
int g_INT_ARRAY_01cc52e0[10] = {};
int g_INT_ARRAY_01cc5308[10] = {};
int g_INT_ARRAY_01cc5330[10] = {};
int g_INT_ARRAY_01cc5358[10] = {};
int g_INT_ARRAY_01cc5380[10] = {};
int g_INT_ARRAY_01cc53a8[10] = {};
int g_INT_ARRAY_01cc53d4[10] = {};
int g_INT_ARRAY_01cc53fc[10] = {};
int g_INT_ARRAY_01cc5424[10] = {};
int g_INT_ARRAY_01cc544c[10] = {};
int g_INT_ARRAY_01cc5474[10] = {};
int g_INT_ARRAY_01cc549c[10] = {};
int g_INT_ARRAY_01cc54c4[10] = {};
int g_INT_ARRAY_01cc54ec[10] = {};
int g_INT_ARRAY_01cc5514[10] = {};
int g_INT_ARRAY_01cc553c[10] = {};
int g_INT_ARRAY_01cc5564[10] = {};
int g_INT_ARRAY_01cc558c[10] = {};
int g_INT_ARRAY_01cc55b4[10] = {};
int g_INT_ARRAY_01cc55dc[10] = {};
int g_INT_ARRAY_01cc5604[10] = {};
int g_INT_ARRAY_01cc562c[10] = {};
int g_INT_ARRAY_01cc5654[10] = {};
int g_INT_ARRAY_01cc567c[10] = {};

// int[12]
int g_INT_ARRAY_01ccdba8[12] = {};

// int[20]
int g_INT_ARRAY_01cc9094[20] = {};

// int[257]
int g_INT_ARRAY_01cc4910[257] = {};
int g_INT_ARRAY_01cc4d14[257] = {};

// int[5]
int g_INT_ARRAY_01ccdb94[5] = {};

// uint
uint g_UINT_01cc5164 = {};
uint g_UINT_01cc5168 = {};
uint g_UINT_01cc516c = {};

