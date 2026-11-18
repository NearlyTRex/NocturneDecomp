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
CDemonActorType g_CMobsterClassInfo = {};
CDemonActorType g_CMolochClassInfo = {};

// CKeyFramedModel
CKeyFramedModel g_LoadingMoonModel = {};
CKeyFramedModel g_MoonBatModel = {};

// CKeys
CKeys g_CKeysInstance = {};

// CLevelLoader
CLevelLoader g_CLevelLoader = {};

// CMatrix3x3i
CMatrix3x3i g_TransformMatrixCopy = {};

// CMoon
CMoon g_CMoonInstance = {};

// CVector3f[32]
CVector3f g_MirrorInputVertices[32] = {};
CVector3f g_MirrorOutputVertices[32] = {};

// CVector3i
CVector3i g_CachedViewPosition = {};
CVector3i g_NormalizedViewVector = {};

// CVector3i[2000]
CVector3i g_MorphVertexBuffer[2000] = {};

// SBat[30]
SBat g_MoonBats[30] = {};

// SMRGLPrimitiveQuadIndex
SMRGLPrimitiveQuadIndex g_MirrorTempPrimitive = {};

// char*
char* g_CurrentFilename = {};
char* g_CHAR_PTR_01cc6480 = {};
char* g_CHAR_PTR_01cc64ac = {};
char* g_CHAR_PTR_01cc64ec = {};
char* g_CHAR_PTR_01cc8110 = {};

// char*[10]
char* g_ControlOptionsMenuPointers[10] = {};
char* g_SoundOptionsMenuPointers[10] = {};

// char*[4]
char* g_OptionsMenuPointers[4] = {};

// char[10][256]
char g_SoundMenuTextBuffers[10][256] = {};
char g_StringBuffers[10][256] = {};

// char[256]
char g_CHAR_ARRAY_01cc5b80[256] = {};
char g_CHAR_ARRAY_01cc5c80[256] = {};
char g_CHAR_ARRAY_01cc5d80[256] = {};
char g_CHAR_ARRAY_01cc5e80[256] = {};
char g_CHAR_ARRAY_01cc5f80[256] = {};
char g_CHAR_ARRAY_01cc6180[256] = {};

// char[30][40]
char g_CustomKeyNames[30][40] = {};

// char[4352]
char g_CHAR_ARRAY_01cc3700[4352] = {};

// char[4][256]
char g_OptionsMenuTextBuffers[4][256] = {};

// char[8100]
char g_PendingMissionName[8100] = {};

// char[9][256]
char g_ControlsMenuTextBuffers[9][256] = {};

// float
float g_MoonAnimationTimer = {};

// int
int g_InventoryScreenHeight = {};
int g_InventoryLightAngle = {};
int g_LightDirectionX2 = {};
int g_LightDirectionY2 = {};
int g_LightDirectionZ2 = {};
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
int g_PixelAspectCorrection = {};
int g_MatrixStackIndex = {};
int g_ViewportStackIndex = {};
int g_MenuLeftRightPressed = {};
int g_AudioVisualizationCounter = {};
int g_MenuInputHappened = {};
int g_CurrentGraphicsBoard = {};
int g_INT_01cc64a8 = {};
int g_INT_01cc652c = {};
int g_INT_01cc656c = {};
int g_CustomKeyCount = {};
int g_StringBufferIndex = {};
int g_MirrorInputVertexCount = {};
int g_MirrorOutputVertexCount = {};
int g_MoonCloudScrollX = {};
int g_MoonCloudScrollY = {};

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

// int[12]
int g_MobsterIndices[12] = {};

// int[20]
int g_MimicIndices[20] = {};

// int[257]
int g_SinTable[257] = {};
int g_CosTable[257] = {};

// int[5]
int g_MobsterTauntCounters[5] = {};

// uint
uint g_SavedRotationX = {};
uint g_SavedRotationY = {};
uint g_SavedRotationZ = {};

