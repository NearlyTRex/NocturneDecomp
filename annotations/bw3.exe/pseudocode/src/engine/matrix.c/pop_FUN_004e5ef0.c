// Name: engine_matrix.c_pop_FUN_004e5ef0
// Address: 004e5ef0
// Address Range: [[004e5ef0, 004e5ff8]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pop_FUN_004e5ef0(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_pop_FUN_004e5ef0(void)

{
  g_MatrixStackIndex = g_MatrixStackIndex + -1;
  if (g_MatrixStackIndex < 0) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 856;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Matrix unbalance2");
  }
  g_INT_01c6e2fc = g_MatrixStack_M00[g_MatrixStackIndex];
  g_INT_01c6e300 = g_MatrixStack_M01[g_MatrixStackIndex];
  g_INT_01c6e304 = g_MatrixStack_M02[g_MatrixStackIndex];
  g_INT_01c6e308 = g_MatrixStack_M10[g_MatrixStackIndex];
  g_INT_01c6e30c = g_MatrixStack_M11[g_MatrixStackIndex];
  g_INT_01c6e310 = g_MatrixStack_M12[g_MatrixStackIndex];
  g_INT_01c6e314 = g_MatrixStack_M20[g_MatrixStackIndex];
  g_INT_01c6e318 = g_MatrixStack_M21[g_MatrixStackIndex];
  g_INT_01c6e31c = g_MatrixStack_M22[g_MatrixStackIndex];
  g_RelativeX = g_MatrixStack_RelX[g_MatrixStackIndex];
  g_RelativeY = g_MatrixStack_RelY[g_MatrixStackIndex];
  g_RelativeZ = g_MatrixStack_RelZ[g_MatrixStackIndex];
  g_LightDirectionX = g_MatrixStack_Unk1[g_MatrixStackIndex];
  g_LightDirectionY = g_MatrixStack_Unk2[g_MatrixStackIndex];
  g_LightDirectionZ = g_MatrixStack_Unk3[g_MatrixStackIndex];
  return;
}
