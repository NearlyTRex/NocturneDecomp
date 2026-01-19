#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CAlphaBitmap.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CMatrix3x3i.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2F00000
// =============================================================================

// CAlphaBitmap
extern CAlphaBitmap g_LoadingScreenBitmap1;
extern CAlphaBitmap g_LoadingScreenBitmap2;
extern CAlphaBitmap g_LoadingScreenBitmap3;
extern CAlphaBitmap g_LoadingScreenBitmap4;

// CDemonActorType
extern CDemonActorType g_CMansionPuzzleCircleClassInfo;
extern CDemonActorType g_CMirrorHackClassInfo;
extern CDemonActorType g_CMarqueeClassInfo;
extern CDemonActorType g_CMeleeClassInfo;

// CMatrix3x3i
extern CMatrix3x3i g_InverseMatrix;
extern CMatrix3x3i g_TransformMatrixCopy;

// FileTrackingEntry[100]
extern FileTrackingEntry g_FileRegistry[100];

// int[10]
extern int g_MatrixStack_M00[10];
extern int g_MatrixStack_M01[10];
extern int g_MatrixStack_M02[10];
extern int g_MatrixStack_M10[10];
extern int g_MatrixStack_M11[10];
extern int g_MatrixStack_M12[10];
extern int g_MatrixStack_M20[10];
extern int g_MatrixStack_M21[10];
extern int g_MatrixStack_M22[10];
extern int g_MatrixStack_RelX[10];
extern int g_MatrixStack_RelY[10];
extern int g_MatrixStack_RelZ[10];
extern int g_MatrixStack_Unk1[10];
extern int g_MatrixStack_Unk2[10];
extern int g_MatrixStack_Unk3[10];
extern int g_ViewportStack_CenterX[10];
extern int g_ViewportStack_CenterY[10];
extern int g_ViewportStack_RightFixed[10];
extern int g_ViewportStack_BottomFixed[10];
extern int g_ViewportStack_ProjectionScale[10];
extern int g_ViewportStack_CameraX[10];
extern int g_ViewportStack_CameraY[10];
extern int g_ViewportStack_CameraZ[10];
extern int g_ViewportStack_RotationPitch[10];
extern int g_ViewportStack_RotationYaw[10];
extern int g_ViewportStack_RotationRoll[10];
extern int g_ViewportStack_ExtraState1[10];
extern int g_ViewportStack_ExtraState2[10];
extern int g_ViewportStack_ExtraState3[10];
extern int g_ViewportStack_ClipLeft[10];
extern int g_ViewportStack_ClipRight[10];
extern int g_ViewportStack_ClipTop[10];
extern int g_ViewportStack_ClipBottom[10];

// int[257]
extern int g_SinTable[257];
extern int g_CosTable[257];

