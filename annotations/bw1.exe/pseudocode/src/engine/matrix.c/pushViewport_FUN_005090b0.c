// Name: engine_matrix.c_pushViewport_FUN_005090b0
// Address: 005090b0
// Address Range: [[005090b0, 00509209]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pushViewport_FUN_005090b0(int x,int y,int width,int height)

#include "nocturne.h"

void __cdecl engine_matrix_c_pushViewport_FUN_005090b0(int x,int y,int width,int height)

{
  g_INT_ARRAY_01d1e09c[g_INT_01d1dfd0] = g_INT_01c51d38;
  g_INT_ARRAY_01d1e0c4[g_INT_01d1dfd0] = g_INT_01c51d3c;
  g_INT_ARRAY_01d1e0ec[g_INT_01d1dfd0] = g_INT_01c51d40;
  g_INT_ARRAY_01d1e114[g_INT_01d1dfd0] = g_INT_01c51d44;
  g_INT_ARRAY_01d1e13c[g_INT_01d1dfd0] = g_INT_01c51d48;
  g_INT_ARRAY_01d1e164[g_INT_01d1dfd0] = g_INT_01c51d4c;
  g_INT_ARRAY_01d1e18c[g_INT_01d1dfd0] = g_INT_01c51d50;
  g_INT_ARRAY_01d1e1b4[g_INT_01d1dfd0] = g_INT_01c51d54;
  g_INT_ARRAY_01d1e1dc[g_INT_01d1dfd0] = g_INT_01c51d58;
  g_INT_ARRAY_01d1dfd4[g_INT_01d1dfd0] = g_INT_01c4eff8;
  g_INT_ARRAY_01d1dffc[g_INT_01d1dfd0] = g_INT_01c4effc;
  g_INT_ARRAY_01d1e024[g_INT_01d1dfd0] = g_INT_01c4f000;
  g_INT_ARRAY_01d1e04c[g_INT_01d1dfd0] = g_INT_01c4f004;
  g_INT_ARRAY_01d1e074[g_INT_01d1dfd0] = g_INT_0061b4c4;
  g_INT_ARRAY_01d1e204[g_INT_01d1dfd0] = g_INT_01c4f008;
  g_INT_ARRAY_01d1e22c[g_INT_01d1dfd0] = g_INT_01c4f010;
  g_INT_ARRAY_01d1e254[g_INT_01d1dfd0] = g_INT_01c4f00c;
  g_INT_ARRAY_01d1e27c[g_INT_01d1dfd0] = g_INT_01c4f014;
  g_INT_01d1dfd0 = g_INT_01d1dfd0 + 1;
  if (9 < g_INT_01d1dfd0) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\matrix.c";
    g_INT_01d1d404 = 0x540;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Too many 3D windows");
  }
  engine_2d_c_setupViewportAndClipping_FUN_00401810(x,y,x + width,y + height);
  g_INT_0061b4c4 = 0x10000;
  return;
}
