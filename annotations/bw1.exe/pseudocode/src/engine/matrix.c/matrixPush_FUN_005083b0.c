// Name: engine_matrix.c_matrixPush_FUN_005083b0
// Address: 005083b0
// Address Range: [[005083b0, 005084ae]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_matrixPush_FUN_005083b0(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_matrixPush_FUN_005083b0(void)

{
  g_INT_ARRAY_01d1dee0[g_INT_01d1dd74] = g_INT_01c51d2c;
  g_INT_ARRAY_01d1df08[g_INT_01d1dd74] = g_INT_01c51d30;
  g_INT_ARRAY_01d1df30[g_INT_01d1dd74] = g_INT_01c51d34;
  g_INT_ARRAY_01d1df58[g_INT_01d1dd74] = g_INT_01c51d50;
  g_INT_ARRAY_01d1df80[g_INT_01d1dd74] = g_INT_01c51d54;
  g_INT_ARRAY_01d1dfa8[g_INT_01d1dd74] = g_INT_01c51d58;
  g_INT_ARRAY_01d1dd78[g_INT_01d1dd74] = g_INT_01c51d5c;
  g_INT_ARRAY_01d1dda0[g_INT_01d1dd74] = g_INT_01c51d60;
  g_INT_ARRAY_01d1ddc8[g_INT_01d1dd74] = g_INT_01c51d64;
  g_INT_ARRAY_01d1ddf0[g_INT_01d1dd74] = g_INT_01c51d68;
  g_INT_ARRAY_01d1de18[g_INT_01d1dd74] = g_INT_01c51d6c;
  g_INT_ARRAY_01d1de40[g_INT_01d1dd74] = g_INT_01c51d70;
  g_INT_ARRAY_01d1de68[g_INT_01d1dd74] = g_INT_01c51d74;
  g_INT_ARRAY_01d1de90[g_INT_01d1dd74] = g_INT_01c51d78;
  g_INT_ARRAY_01d1deb8[g_INT_01d1dd74] = g_INT_01c51d7c;
  g_INT_01d1dd74 = g_INT_01d1dd74 + 1;
  if (g_INT_01d1dd74 < 10) {
    return;
  }
  g_CHAR_PTR_01d1d400 = "..\\engine\\matrix.c";
  g_INT_01d1d404 = 0x34b;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Matrix unbalance");
  return;
}
