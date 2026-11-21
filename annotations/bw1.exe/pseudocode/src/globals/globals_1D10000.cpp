#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1D10000
// =============================================================================

// CAlphaBitmap
CAlphaBitmap g_BatteryIconBitmap = {};
CAlphaBitmap CAlphaBitmap_01d1b9e4 = {};
CAlphaBitmap CAlphaBitmap_01d1b9f8 = {};
CAlphaBitmap CAlphaBitmap_01d1ba0c = {};
CAlphaBitmap CAlphaBitmap_01d1ba20 = {};
CAlphaBitmap CAlphaBitmap_01d1ba34 = {};
CAlphaBitmap CAlphaBitmap_01d1ba48 = {};
CAlphaBitmap CAlphaBitmap_01d1ba5c = {};
CAlphaBitmap CAlphaBitmap_01d1ba70 = {};
CAlphaBitmap CAlphaBitmap_01d1ba84 = {};
CAlphaBitmap CAlphaBitmap_01d1ba98 = {};
CAlphaBitmap CAlphaBitmap_01d1baf4 = {};
CAlphaBitmap CAlphaBitmap_01d1d40c = {};
CAlphaBitmap CAlphaBitmap_01d1d420 = {};
CAlphaBitmap CAlphaBitmap_01d1d434 = {};
CAlphaBitmap CAlphaBitmap_01d1d448 = {};
CAlphaBitmap g_MenuBlurLeft = {};
CAlphaBitmap g_MenuBlurMiddle = {};
CAlphaBitmap g_MenuBlurRight = {};
CAlphaBitmap g_CalibrationBitmap = {};

// CAlphaBitmap[16]
CAlphaBitmap CAlphaBitmap_ARRAY_01d1bb08[16] = {};

// CAlphaBitmap[8]
CAlphaBitmap g_MenuBitmaps[8] = {};

// CDemonActorType
CDemonActorType g_CKeyActorClassInfo = {};
CDemonActorType g_CLadderClassInfo = {};
CDemonActorType g_CLarvaClassInfo = {};
CDemonActorType g_CLeverClassInfo = {};
CDemonActorType g_CLightGunClassInfo = {};
CDemonActorType g_CLightPisClassInfo = {};
CDemonActorType g_CLightConeClassInfo = {};
CDemonActorType g_CMansionPuzzleCircleClassInfo = {};
CDemonActorType g_CMirrorHackClassInfo = {};
CDemonActorType g_CMarqueeClassInfo = {};
CDemonActorType g_CMeleeClassInfo = {};

// CKeyFramedModel
CKeyFramedModel g_LoadingMoonModel = {};

// CLevelLoader
CLevelLoader g_CLevelLoaderInstance = {};

// CMatrix3x3i
CMatrix3x3i g_TransformMatrixCopy = {};

// CMoon
CMoon g_CMoonInstance = {};

// CVector3i
CVector3i g_CachedViewPosition = {};
CVector3i g_NormalizedViewVector = {};

// SMRGLTextureBasic
SMRGLTextureBasic g_SMRGLTextureBasic_01d1baac = {};

// char*
char* g_CurrentFilename = {};
char* g_CHAR_PTR_01d1ffe0 = {};

// char*[16]
char* g_GraphicsCardDriverNames[16] = {};
char* g_GraphicsCardNames[16] = {};

// char*[9]
char* g_GraphicsMenuTextPointers[9] = {};

// char[2304]
char g_CHAR_ARRAY_01d1f6e0[2304] = {};

// char[256]
char g_CHAR_ARRAY_01d1efb8[256] = {};
char g_CHAR_ARRAY_01d1f0b8[256] = {};
char g_CHAR_ARRAY_01d1f1b8[256] = {};
char g_CHAR_ARRAY_01d1f3b8[256] = {};

// char[4352]
char g_CHAR_ARRAY_01d1c300[4352] = {};

// char[9]
char g_CHAR_ARRAY_01d1eeb8[9] = {};

// int
int g_INT_01d1bc48 = {};
int g_InventoryScreenHeight = {};
int g_InventoryLightAngle = {};
int g_LightDirectionX2 = {};
int g_LightDirectionY2 = {};
int g_LightDirectionZ2 = {};
int g_CurrentLineNumber = {};
int g_INT_01d1d408 = {};
int g_INT_01d1dd18 = {};
int g_INT_01d1dd1c = {};
int g_INT_01d1dd20 = {};
int g_INT_01d1dd24 = {};
int g_INT_01d1dd28 = {};
int g_INT_01d1dd2c = {};
int g_INT_01d1dd30 = {};
int g_INT_01d1dd34 = {};
int g_INT_01d1dd38 = {};
int g_PixelAspectCorrection = {};
int g_MatrixStackIndex = {};
int g_ViewportStackIndex = {};
int g_MenuLeftRightPressed = {};
int g_INT_01d1ee90 = {};
int g_AudioVisualizationCounter = {};
int g_MenuInputHappened = {};

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

// int[16]
int g_GraphicsCardVendorIDs[16] = {};

// int[17]
int g_GraphicsCardDeviceIDs[17] = {};

// int[256]
int g_INT_ARRAY_01d1d510[256] = {};

// int[257]
int g_INT_ARRAY_01d1d914[257] = {};

// uint
uint g_SavedRotationX = {};
uint g_SavedRotationY = {};
uint g_SavedRotationZ = {};

// void*
void* g_PTR_01d1bca0 = {};

