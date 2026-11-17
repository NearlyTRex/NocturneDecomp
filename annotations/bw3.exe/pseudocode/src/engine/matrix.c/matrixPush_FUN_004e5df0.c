// Name: engine_matrix.c_matrixPush_FUN_004e5df0
// Address: 004e5df0
// Address Range: [[004e5df0, 004e5eee]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_matrixPush_FUN_004e5df0(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_matrixPush_FUN_004e5df0(void)

{
  g_INT_ARRAY_01d7280c[g_INT_01d726a0] = g_INT_01c6e2cc;
  g_INT_ARRAY_01d72834[g_INT_01d726a0] = g_INT_01c6e2d0;
  g_INT_ARRAY_01d7285c[g_INT_01d726a0] = g_INT_01c6e2d4;
  g_INT_ARRAY_01d72884[g_INT_01d726a0] = g_INT_01c6e2f0;
  g_INT_ARRAY_01d728ac[g_INT_01d726a0] = g_INT_01c6e2f4;
  g_INT_ARRAY_01d728d4[g_INT_01d726a0] = g_INT_01c6e2f8;
  g_INT_ARRAY_01d726a4[g_INT_01d726a0] = g_INT_01c6e2fc;
  g_INT_ARRAY_01d726cc[g_INT_01d726a0] = g_INT_01c6e300;
  g_INT_ARRAY_01d726f4[g_INT_01d726a0] = g_INT_01c6e304;
  g_INT_ARRAY_01d7271c[g_INT_01d726a0] = g_INT_01c6e308;
  g_INT_ARRAY_01d72744[g_INT_01d726a0] = g_INT_01c6e30c;
  g_INT_ARRAY_01d7276c[g_INT_01d726a0] = g_INT_01c6e310;
  g_INT_ARRAY_01d72794[g_INT_01d726a0] = g_INT_01c6e314;
  g_INT_ARRAY_01d727bc[g_INT_01d726a0] = g_INT_01c6e318;
  g_INT_ARRAY_01d727e4[g_INT_01d726a0] = g_INT_01c6e31c;
  g_INT_01d726a0 = g_INT_01d726a0 + 1;
  if (g_INT_01d726a0 < 10) {
    return;
  }
  g_CHAR_PTR_01d71de0 = "..\\engine\\matrix.c";
  g_INT_01d71de4 = 0x34b;
  core_main_c_displayErrorAndQuit_FUN_004e4330("Matrix unbalance");
  return;
}
