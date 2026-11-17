// Name: engine_matrix.c_popMatrixRelativeOffset_FUN_004e6ec0
// Address: 004e6ec0
// Address Range: [[004e6ec0, 004e6f25]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_004e6ec0(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_004e6ec0(void)

{
  g_MatrixStackIndex = g_MatrixStackIndex + -1;
  if (g_MatrixStackIndex < 0) {
    g_CHAR_PTR_01d71de0 = "..\\engine\\matrix.c";
    g_INT_01d71de4 = 0x5d9;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Matrix unbalance4");
  }
  g_RelativeX = g_MatrixStack_RelX[g_MatrixStackIndex];
  g_RelativeY = g_MatrixStack_RelY[g_MatrixStackIndex];
  g_RelativeZ = g_MatrixStack_RelZ[g_MatrixStackIndex];
  return;
}
