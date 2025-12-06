// Name: engine_matrix.c_matrixPush_FUN_0050d620
// Address: 0050d620
// Address Range: [[0050d620, 0050d71e]]
// Convention: __cdecl
// Signature: void engine_matrix.c_matrixPush_FUN_0050d620(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_matrixPush_FUN_0050d620(void)

{
  g_MatrixStack_RelX[g_MatrixStackIndex] = g_RelativeX;
  g_MatrixStack_RelY[g_MatrixStackIndex] = g_RelativeY;
  g_MatrixStack_RelZ[g_MatrixStackIndex] = g_RelativeZ;
  g_MatrixStack_Unk1[g_MatrixStackIndex] = g_LightDirectionX;
  g_MatrixStack_Unk2[g_MatrixStackIndex] = g_LightDirectionY;
  g_MatrixStack_Unk3[g_MatrixStackIndex] = g_LightDirectionZ;
  g_MatrixStack_M00[g_MatrixStackIndex] = g_TransformMatrix.m[0].x;
  g_MatrixStack_M01[g_MatrixStackIndex] = g_TransformMatrix.m[0].y;
  g_MatrixStack_M02[g_MatrixStackIndex] = g_TransformMatrix.m[0].z;
  g_MatrixStack_M10[g_MatrixStackIndex] = g_TransformMatrix.m[1].x;
  g_MatrixStack_M11[g_MatrixStackIndex] = g_TransformMatrix.m[1].y;
  g_MatrixStack_M12[g_MatrixStackIndex] = g_TransformMatrix.m[1].z;
  g_MatrixStack_M20[g_MatrixStackIndex] = g_TransformMatrix.m[2].x;
  g_MatrixStack_M21[g_MatrixStackIndex] = g_TransformMatrix.m[2].y;
  g_MatrixStack_M22[g_MatrixStackIndex] = g_TransformMatrix.m[2].z;
  g_MatrixStackIndex = g_MatrixStackIndex + 1;
  if (g_MatrixStackIndex < 10) {
    return;
  }
  g_CurrentFilename = "..\\engine\\matrix.c";
  g_CurrentLineNumber = 0x34b;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Matrix unbalance");
  return;
}
