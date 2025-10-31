#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2F00000
// =============================================================================

int[257] g_SinTable = {};
int[257] g_CosTable = {};
int[10] g_MatrixStack_M00 = {};
int[10] g_MatrixStack_M01 = {};
int[10] g_MatrixStack_M02 = {};
int[10] g_MatrixStack_M10 = {};
int[10] g_MatrixStack_M11 = {};
int[10] g_MatrixStack_M12 = {};
int[10] g_MatrixStack_M20 = {};
int[10] g_MatrixStack_M21 = {};
int[10] g_MatrixStack_M22 = {};
int[10] g_MatrixStack_RelX = {};
int[10] g_MatrixStack_RelY = {};
int[10] g_MatrixStack_RelZ = {};
int[10] g_MatrixStack_Unk1 = {};
int[10] g_MatrixStack_Unk2 = {};
int[10] g_MatrixStack_Unk3 = {};
int[10] g_ViewportStack_CenterX = {};
int[10] g_ViewportStack_CenterY = {};
int[10] g_ViewportStack_RightFixed = {};
int[10] g_ViewportStack_BottomFixed = {};
int[10] g_ViewportStack_ProjectionScale = {};
int[10] g_ViewportStack_CameraX = {};
int[10] g_ViewportStack_CameraY = {};
int[10] g_ViewportStack_CameraZ = {};
int[10] g_ViewportStack_RotationPitch = {};
int[10] g_ViewportStack_RotationYaw = {};
int[10] g_ViewportStack_RotationRoll = {};
int[10] g_ViewportStack_ExtraState1 = {};
int[10] g_ViewportStack_ExtraState2 = {};
int[10] g_ViewportStack_ExtraState3 = {};
int[10] g_ViewportStack_ClipLeft = {};
int[10] g_ViewportStack_ClipRight = {};
int[10] g_ViewportStack_ClipTop = {};
int[10] g_ViewportStack_ClipBottom = {};
FileTrackingEntry[100] g_FileRegistry = {};

