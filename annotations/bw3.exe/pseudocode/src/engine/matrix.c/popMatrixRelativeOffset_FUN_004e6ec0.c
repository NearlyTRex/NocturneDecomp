// Name: engine_matrix.c_popMatrixRelativeOffset_FUN_004e6ec0
// Address: 004e6ec0
// Address Range: [[004e6ec0, 004e6f25]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_004e6ec0(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_004e6ec0(void)

{
  g_INT_01d726a0 = g_INT_01d726a0 + -1;
  if (g_INT_01d726a0 < 0) {
    g_CHAR_PTR_01d71de0 = "..\\engine\\matrix.c";
    g_INT_01d71de4 = 0x5d9;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Matrix unbalance4");
  }
  g_INT_01c6e2cc = g_INT_ARRAY_01d7280c[g_INT_01d726a0];
  g_INT_01c6e2d0 = g_INT_ARRAY_01d72834[g_INT_01d726a0];
  g_INT_01c6e2d4 = g_INT_ARRAY_01d7285c[g_INT_01d726a0];
  return;
}
