// Name: engine_matrix.c_popMatrixRelativeOffset_FUN_00509480
// Address: 00509480
// Address Range: [[00509480, 005094e5]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_00509480(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_00509480(void)

{
  g_INT_01d1dd74 = g_INT_01d1dd74 + -1;
  if (g_INT_01d1dd74 < 0) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\matrix.c";
    g_INT_01d1d404 = 0x5d9;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Matrix unbalance4");
  }
  g_INT_01c51d2c = g_INT_ARRAY_01d1dee0[g_INT_01d1dd74];
  g_INT_01c51d30 = g_INT_ARRAY_01d1df08[g_INT_01d1dd74];
  g_INT_01c51d34 = g_INT_ARRAY_01d1df30[g_INT_01d1dd74];
  return;
}
