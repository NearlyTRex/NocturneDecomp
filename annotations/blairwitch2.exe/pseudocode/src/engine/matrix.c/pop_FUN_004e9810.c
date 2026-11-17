// Name: engine_matrix.c_pop_FUN_004e9810
// Address: 004e9810
// Address Range: [[004e9810, 004e9918]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pop_FUN_004e9810(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_pop_FUN_004e9810(void)

{
  g_INT_01d05014 = g_INT_01d05014 + -1;
  if (g_INT_01d05014 < 0) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\matrix.c";
    g_INT_01d046a4 = 0x358;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Matrix unbalance2");
  }
  g_INT_01c38b9c = g_INT_ARRAY_01d05018[g_INT_01d05014];
  g_INT_01c38ba0 = g_INT_ARRAY_01d05040[g_INT_01d05014];
  g_INT_01c38ba4 = g_INT_ARRAY_01d05068[g_INT_01d05014];
  g_INT_01c38ba8 = g_INT_ARRAY_01d05090[g_INT_01d05014];
  g_INT_01c38bac = g_INT_ARRAY_01d050b8[g_INT_01d05014];
  g_INT_01c38bb0 = g_INT_ARRAY_01d050e0[g_INT_01d05014];
  g_INT_01c38bb4 = g_INT_ARRAY_01d05108[g_INT_01d05014];
  g_INT_01c38bb8 = g_INT_ARRAY_01d05130[g_INT_01d05014];
  g_INT_01c38bbc = g_INT_ARRAY_01d05158[g_INT_01d05014];
  g_INT_01c38b6c = g_INT_ARRAY_01d05180[g_INT_01d05014];
  g_INT_01c38b70 = g_INT_ARRAY_01d051a8[g_INT_01d05014];
  g_INT_01c38b74 = g_INT_ARRAY_01d051d0[g_INT_01d05014];
  g_INT_01c38b90 = g_INT_ARRAY_01d051f8[g_INT_01d05014];
  g_INT_01c38b94 = g_INT_ARRAY_01d05220[g_INT_01d05014];
  g_INT_01c38b98 = g_INT_ARRAY_01d05248[g_INT_01d05014];
  return;
}
