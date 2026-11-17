// Name: engine_matrix.c_popViewport_FUN_00509210
// Address: 00509210
// Address Range: [[00509210, 0050933f]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_popViewport_FUN_00509210(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_popViewport_FUN_00509210(void)

{
  g_INT_01d1dfd0 = g_INT_01d1dfd0 + -1;
  if (g_INT_01d1dfd0 < 0) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\matrix.c";
    g_INT_01d1d404 = 0x56c;
    core_main_c_displayErrorAndQuit_FUN_005030e0("3D Window unbalance");
  }
  g_INT_01c51d38 = g_INT_ARRAY_01d1e09c[g_INT_01d1dfd0];
  g_INT_01c51d3c = g_INT_ARRAY_01d1e0c4[g_INT_01d1dfd0];
  g_INT_01c51d40 = g_INT_ARRAY_01d1e0ec[g_INT_01d1dfd0];
  g_INT_01c51d44 = g_INT_ARRAY_01d1e114[g_INT_01d1dfd0];
  g_INT_01c51d48 = g_INT_ARRAY_01d1e13c[g_INT_01d1dfd0];
  g_INT_01c51d4c = g_INT_ARRAY_01d1e164[g_INT_01d1dfd0];
  g_INT_01c51d50 = g_INT_ARRAY_01d1e18c[g_INT_01d1dfd0];
  g_INT_01c51d54 = g_INT_ARRAY_01d1e1b4[g_INT_01d1dfd0];
  g_INT_01c51d58 = g_INT_ARRAY_01d1e1dc[g_INT_01d1dfd0];
  g_INT_01c4eff8 = g_INT_ARRAY_01d1dfd4[g_INT_01d1dfd0];
  g_INT_01c4effc = g_INT_ARRAY_01d1dffc[g_INT_01d1dfd0];
  g_INT_01c4f000 = g_INT_ARRAY_01d1e024[g_INT_01d1dfd0];
  g_INT_01c4f004 = g_INT_ARRAY_01d1e04c[g_INT_01d1dfd0];
  g_INT_0061b4c4 = g_INT_ARRAY_01d1e074[g_INT_01d1dfd0];
  g_INT_01c4f008 = g_INT_ARRAY_01d1e204[g_INT_01d1dfd0];
  g_INT_01c4f010 = g_INT_ARRAY_01d1e22c[g_INT_01d1dfd0];
  g_INT_01c4f00c = g_INT_ARRAY_01d1e254[g_INT_01d1dfd0];
  g_INT_01c4f014 = g_INT_ARRAY_01d1e27c[g_INT_01d1dfd0];
  return;
}
