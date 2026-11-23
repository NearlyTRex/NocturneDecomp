// Name: engine_matrix.c_matrixPush_FUN_004e9710
// Address: 004e9710
// Address Range: [[004e9710, 004e980e]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_matrixPush_FUN_004e9710(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_matrixPush_FUN_004e9710(void)

{
  g_MatrixStack_RelX[g_MatrixStackIndex] = g_RelativeX;
  g_MatrixStack_RelY[g_MatrixStackIndex] = g_RelativeY;
  g_MatrixStack_RelZ[g_MatrixStackIndex] = g_RelativeZ;
  g_MatrixStack_Unk1[g_MatrixStackIndex] = g_LightDirectionX;
  g_MatrixStack_Unk2[g_MatrixStackIndex] = g_LightDirectionY;
  g_MatrixStack_Unk3[g_MatrixStackIndex] = g_LightDirectionZ;
  g_MatrixStack_M00[g_MatrixStackIndex] = g_INT_01c38b9c;
  g_MatrixStack_M01[g_MatrixStackIndex] = g_INT_01c38ba0;
  g_MatrixStack_M02[g_MatrixStackIndex] = g_INT_01c38ba4;
  g_MatrixStack_M10[g_MatrixStackIndex] = g_INT_01c38ba8;
  g_MatrixStack_M11[g_MatrixStackIndex] = g_INT_01c38bac;
  g_MatrixStack_M12[g_MatrixStackIndex] = g_INT_01c38bb0;
  g_MatrixStack_M20[g_MatrixStackIndex] = g_INT_01c38bb4;
  g_MatrixStack_M21[g_MatrixStackIndex] = g_INT_01c38bb8;
  g_MatrixStack_M22[g_MatrixStackIndex] = g_INT_01c38bbc;
  g_MatrixStackIndex = g_MatrixStackIndex + 1;
  if (g_MatrixStackIndex < 10) {
    return;
  }
  g_CurrentFilename = "..\\engine\\matrix.c";
  g_CurrentLineNumber = 843;
  core_main_c_displayErrorAndQuit_FUN_004e4500("Matrix unbalance");
  return;
}
