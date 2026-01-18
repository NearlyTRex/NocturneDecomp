#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2F00000
// =============================================================================

CAlphaBitmap g_LoadingScreenBitmap1;
CAlphaBitmap g_LoadingScreenBitmap2;
CAlphaBitmap g_LoadingScreenBitmap3;
CAlphaBitmap g_LoadingScreenBitmap4;
CDemonActorType g_CMansionPuzzleCircleClassInfo;
CDemonActorType g_CMirrorHackClassInfo;
CDemonActorType g_CMarqueeClassInfo;
int g_SinTable[257] = {};
int g_CosTable[257] = {};
CMatrix3x3i g_InverseMatrix;
CMatrix3x3i g_TransformMatrixCopy;
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
CDemonActorType g_CMeleeClassInfo;
FileTrackingEntry g_FileRegistry[100] = {};

