// Name: engine_matrix.c_popMatrixRelativeOffset_FUN_004ea7e0
// Address: 004ea7e0
// Address Range: [[004ea7e0, 004ea845]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_004ea7e0(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_004ea7e0(void)

{
  g_INT_01d05014 = g_INT_01d05014 + -1;
  if (g_INT_01d05014 < 0) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\matrix.c";
    g_INT_01d046a4 = 0x5d9;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Matrix unbalance4");
  }
  g_INT_01c38b6c = g_INT_ARRAY_01d05180[g_INT_01d05014];
  g_INT_01c38b70 = g_INT_ARRAY_01d051a8[g_INT_01d05014];
  g_INT_01c38b74 = g_INT_ARRAY_01d051d0[g_INT_01d05014];
  return;
}
