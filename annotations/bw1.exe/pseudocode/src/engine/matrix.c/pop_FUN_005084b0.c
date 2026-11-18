// Name: engine_matrix.c_pop_FUN_005084b0
// Address: 005084b0
// Address Range: [[005084b0, 005085b8]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pop_FUN_005084b0(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_pop_FUN_005084b0(void)

{
  g_MatrixStackIndex = g_MatrixStackIndex + -1;
  if (g_MatrixStackIndex < 0) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\matrix.c";
    g_INT_01d1d404 = 0x358;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Matrix unbalance2");
  }
  g_INT_01c51d5c = g_MatrixStack_M00[g_MatrixStackIndex];
  g_INT_01c51d60 = g_MatrixStack_M01[g_MatrixStackIndex];
  g_INT_01c51d64 = g_MatrixStack_M02[g_MatrixStackIndex];
  g_INT_01c51d68 = g_MatrixStack_M10[g_MatrixStackIndex];
  g_INT_01c51d6c = g_MatrixStack_M11[g_MatrixStackIndex];
  g_INT_01c51d70 = g_MatrixStack_M12[g_MatrixStackIndex];
  g_INT_01c51d74 = g_MatrixStack_M20[g_MatrixStackIndex];
  g_INT_01c51d78 = g_MatrixStack_M21[g_MatrixStackIndex];
  g_INT_01c51d7c = g_MatrixStack_M22[g_MatrixStackIndex];
  g_RelativeX = g_MatrixStack_RelX[g_MatrixStackIndex];
  g_RelativeY = g_MatrixStack_RelY[g_MatrixStackIndex];
  g_RelativeZ = g_MatrixStack_RelZ[g_MatrixStackIndex];
  g_LightDirectionX = g_MatrixStack_Unk1[g_MatrixStackIndex];
  g_LightDirectionY = g_MatrixStack_Unk2[g_MatrixStackIndex];
  g_LightDirectionZ = g_MatrixStack_Unk3[g_MatrixStackIndex];
  return;
}
