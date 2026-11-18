#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1D00000
// =============================================================================

// CAlphaBitmap
CAlphaBitmap g_BatteryIconBitmap = {};
CAlphaBitmap CAlphaBitmap_01d02e1c = {};
CAlphaBitmap CAlphaBitmap_01d02e30 = {};
CAlphaBitmap CAlphaBitmap_01d02e44 = {};
CAlphaBitmap CAlphaBitmap_01d02e58 = {};
CAlphaBitmap CAlphaBitmap_01d02e6c = {};
CAlphaBitmap CAlphaBitmap_01d02e80 = {};
CAlphaBitmap CAlphaBitmap_01d02e94 = {};
CAlphaBitmap CAlphaBitmap_01d02ea8 = {};
CAlphaBitmap CAlphaBitmap_01d02ebc = {};
CAlphaBitmap CAlphaBitmap_01d02ed0 = {};
CAlphaBitmap CAlphaBitmap_01d02f2c = {};
CAlphaBitmap CAlphaBitmap_01d046ac = {};
CAlphaBitmap CAlphaBitmap_01d046c0 = {};
CAlphaBitmap CAlphaBitmap_01d046d4 = {};
CAlphaBitmap CAlphaBitmap_01d046e8 = {};
CAlphaBitmap g_MenuBlurLeft = {};
CAlphaBitmap g_MenuBlurMiddle = {};
CAlphaBitmap g_MenuBlurRight = {};
CAlphaBitmap g_CalibrationBitmap = {};

// CAlphaBitmap[8]
CAlphaBitmap g_MenuBitmaps[8] = {};

// CDemonActorType
CDemonActorType g_CKeyActorClassInfo = {};
CDemonActorType g_CLadderClassInfo = {};
CDemonActorType g_CLarvaClassInfo = {};
CDemonActorType g_CLeverClassInfo = {};
CDemonActorType g_CLightGunClassInfo = {};
CDemonActorType g_CLightConeClassInfo = {};
CDemonActorType g_CMansionPuzzleCircleClassInfo = {};
CDemonActorType g_CMirrorHackClassInfo = {};
CDemonActorType g_CMarqueeClassInfo = {};
CDemonActorType g_CMeleeClassInfo = {};
CDemonActorType g_CMimicClassInfo = {};
CDemonActorType g_CMineCarClassInfo = {};

// CKeyFramedModel
CKeyFramedModel g_LoadingMoonModel = {};

// CLevelLoader
CLevelLoader g_CLevelLoaderInstance = {};

// CMatrix3x3i
CMatrix3x3i g_TransformMatrixCopy = {};

// CMini3D
CMini3D g_CMini3DInstance = {};

// CMoon
CMoon g_CMoonInstance = {};

// CVector3i
CVector3i g_CachedViewPosition = {};
CVector3i g_NormalizedViewVector = {};

// SMRGLTextureBasic
SMRGLTextureBasic g_SMRGLTextureBasic_01d02ee4 = {};

// char*
char* g_CHAR_PTR_01d046a0 = {};
char* g_CHAR_PTR_01d06a50 = {};
char* g_CHAR_PTR_01d06a7c = {};
char* g_CHAR_PTR_01d06abc = {};
char* g_CHAR_PTR_01d07480 = {};
char* g_CHAR_PTR_01d07ea8 = {};
char* g_CHAR_PTR_01d082d0 = {};

// char*[4]
char* g_MenuTextPointers[4] = {};

// char[10][256]
char g_StringBuffers[10][256] = {};

// char[2304]
char g_CHAR_ARRAY_01d06b80[2304] = {};

// char[256]
char g_CHAR_ARRAY_01d06150[256] = {};
char g_CHAR_ARRAY_01d06250[256] = {};
char g_CHAR_ARRAY_01d06350[256] = {};
char g_CHAR_ARRAY_01d06450[256] = {};
char g_CHAR_ARRAY_01d06650[256] = {};
char g_CHAR_ARRAY_01d07ed0[256] = {};
char g_CHAR_ARRAY_01d07fd0[256] = {};
char g_CHAR_ARRAY_01d080d0[256] = {};
char g_CHAR_ARRAY_01d081d0[256] = {};

// char[30][40]
char g_CustomKeyNames[30][40] = {};

// char[4352]
char g_CHAR_ARRAY_01d035a0[4352] = {};

// char[4][256]
char g_MainMenuTextBuffers[4][256] = {};

// float
float g_FLOAT_01d09860 = {};
float g_FLOAT_01d0986c = {};
float g_FLOAT_01d09870 = {};
float g_FLOAT_01d09874 = {};
float g_FLOAT_01d09878 = {};
float g_FLOAT_01d0987c = {};
float g_FLOAT_01d09880 = {};
float g_FLOAT_01d09884 = {};
float g_FLOAT_01d09888 = {};
float g_FLOAT_01d0988c = {};
float g_FLOAT_01d09890 = {};
float g_FLOAT_01d09894 = {};
float g_FLOAT_01d09898 = {};
float g_FLOAT_01d0989c = {};
float g_FLOAT_01d098a0 = {};
float g_FLOAT_01d098a4 = {};
float g_FLOAT_01d098a8 = {};
float g_FLOAT_01d098ac = {};
float g_FLOAT_01d098b0 = {};
float g_FLOAT_01d098b4 = {};
float g_FLOAT_01d098b8 = {};
float g_FLOAT_01d098c8 = {};
float g_FLOAT_01d098cc = {};
float g_FLOAT_01d098d0 = {};
float g_FLOAT_01d098d4 = {};
float g_FLOAT_01d098d8 = {};
float g_FLOAT_01d098dc = {};
float g_FLOAT_01d098e4 = {};
float g_FLOAT_01d098f0 = {};
float g_FLOAT_01d09900 = {};
float g_FLOAT_01d09904 = {};
float g_FLOAT_01d09908 = {};
float g_FLOAT_01d0990c = {};
float g_FLOAT_01d09910 = {};
float g_FLOAT_01d09920 = {};
float g_FLOAT_01d09924 = {};
float g_FLOAT_01d09928 = {};
float g_FLOAT_01d0992c = {};
float g_FLOAT_01d09930 = {};
float g_FLOAT_01d09934 = {};
float g_FLOAT_01d09938 = {};
float g_FLOAT_01d0993c = {};
float g_FLOAT_01d09940 = {};
float g_FLOAT_01d0a398 = {};
float g_FLOAT_01d0a39c = {};
float g_FLOAT_01d0a3a0 = {};
float g_FLOAT_01d0a3d8 = {};
float g_FLOAT_01d0a3dc = {};
float g_FLOAT_01d0a3e0 = {};
float g_FLOAT_01d0a418 = {};
float g_FLOAT_01d0a41c = {};
float g_FLOAT_01d0a420 = {};
float g_FLOAT_01d0bb98 = {};
float g_FLOAT_01d0d2bc = {};
float g_FLOAT_01d0d2c0 = {};
float g_FLOAT_01d0d2c4 = {};
float g_FLOAT_01d0d2c8 = {};
float g_FLOAT_01d0d2d4 = {};
float g_FLOAT_01d0d2d8 = {};
float g_FLOAT_01d0d2dc = {};
float g_FLOAT_01d0d2e0 = {};

// float*
float* g_FLOAT_PTR_01d09b7c = {};
float* g_FLOAT_PTR_01d09b80 = {};

// int
int g_InventoryScreenHeight = {};
int g_InventoryLightAngle = {};
int g_LightDirectionX2 = {};
int g_LightDirectionY2 = {};
int g_LightDirectionZ2 = {};
int g_INT_01d046a4 = {};
int g_INT_01d046a8 = {};
int g_INT_01d04fb8 = {};
int g_INT_01d04fbc = {};
int g_INT_01d04fc0 = {};
int g_INT_01d04fc4 = {};
int g_INT_01d04fc8 = {};
int g_INT_01d04fcc = {};
int g_INT_01d04fd0 = {};
int g_INT_01d04fd4 = {};
int g_INT_01d04fd8 = {};
int g_PixelAspectCorrection = {};
int g_MatrixStackIndex = {};
int g_ViewportStackIndex = {};
int g_INT_01d0612c = {};
int g_INT_01d06134 = {};
int g_INT_01d06138 = {};
int g_INT_01d06a74 = {};
int g_INT_01d06a78 = {};
int g_INT_01d06afc = {};
int g_INT_01d06b3c = {};
int g_CustomKeyCount = {};
int g_StringBufferIndex = {};
int g_INT_01d09854 = {};
int g_INT_01d09858 = {};
int g_INT_01d0985c = {};
int g_INT_01d09864 = {};
int g_INT_01d09868 = {};
int g_INT_01d098bc = {};
int g_INT_01d098c0 = {};
int g_INT_01d098c4 = {};
int g_INT_01d098e0 = {};
int g_INT_01d098e8 = {};
int g_INT_01d098ec = {};
int g_INT_01d09914 = {};
int g_INT_01d09b78 = {};
int g_INT_01d09b84 = {};
int g_INT_01d09b88 = {};
int g_INT_01d09b8c = {};
int g_INT_01d09b90 = {};
int g_INT_01d09b94 = {};
int g_INT_01d0c398 = {};
int g_INT_01d0c39c = {};
int g_INT_01d0c3a0 = {};
int g_INT_01d0d2b4 = {};
int g_INT_01d0d2b8 = {};
int g_INT_01d0d2e4 = {};
int g_INT_01d0d2e8 = {};
int g_INT_01d0d2ec = {};
int g_INT_01d0d2f0 = {};

// int*[31]
int* g_CustomKeyPointers[31] = {};

// int[10]
int g_MatrixStack_M00[10] = {};
int g_MatrixStack_M01[10] = {};
int g_MatrixStack_M02[10] = {};
int g_MatrixStack_M10[10] = {};
int g_MatrixStack_M11[10] = {};
int g_MatrixStack_M12[10] = {};
int g_MatrixStack_M20[10] = {};
int g_MatrixStack_M21[10] = {};
int g_MatrixStack_M22[10] = {};
int g_MatrixStack_RelX[10] = {};
int g_MatrixStack_RelY[10] = {};
int g_MatrixStack_RelZ[10] = {};
int g_MatrixStack_Unk1[10] = {};
int g_MatrixStack_Unk2[10] = {};
int g_MatrixStack_Unk3[10] = {};
int g_ViewportStack_CenterX[10] = {};
int g_ViewportStack_CenterY[10] = {};
int g_ViewportStack_RightFixed[10] = {};
int g_ViewportStack_BottomFixed[10] = {};
int g_ViewportStack_ProjectionScale[10] = {};
int g_ViewportStack_CameraX[10] = {};
int g_ViewportStack_CameraY[10] = {};
int g_ViewportStack_CameraZ[10] = {};
int g_ViewportStack_RotationPitch[10] = {};
int g_ViewportStack_RotationYaw[10] = {};
int g_ViewportStack_RotationRoll[10] = {};
int g_ViewportStack_ExtraState1[10] = {};
int g_ViewportStack_ExtraState2[10] = {};
int g_ViewportStack_ExtraState3[10] = {};
int g_ViewportStack_ClipLeft[10] = {};
int g_ViewportStack_ClipRight[10] = {};
int g_ViewportStack_ClipTop[10] = {};
int g_ViewportStack_ClipBottom[10] = {};

// int[20]
int g_MimicIndices[20] = {};

// int[256]
int g_INT_ARRAY_01d047b0[256] = {};

// int[257]
int g_INT_ARRAY_01d04bb4[257] = {};

// short[1]
short g_SHORT_ARRAY_01d0d2f6[1] = {};

// uint
uint g_SavedRotationX = {};
uint g_SavedRotationY = {};
uint g_SavedRotationZ = {};

// void*
void* g_PTR_01d02f84 = {};
void* g_PTR_01d09918 = {};
void* g_PTR_01d0991c = {};
void* g_PTR_01d0d2cc = {};
void* g_PTR_01d0d2d0 = {};

