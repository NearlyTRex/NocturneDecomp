// Name: engine_matrix.c_pushViewport_FUN_004ea410
// Address: 004ea410
// Address Range: [[004ea410, 004ea569]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pushViewport_FUN_004ea410(int x,int y,int width,int height)

#include "nocturne.h"

void __cdecl engine_matrix_c_pushViewport_FUN_004ea410(int x,int y,int width,int height)

{
  g_INT_ARRAY_01d0533c[g_INT_01d05270] = g_INT_01c38b78;
  g_INT_ARRAY_01d05364[g_INT_01d05270] = g_INT_01c38b7c;
  g_INT_ARRAY_01d0538c[g_INT_01d05270] = g_INT_01c38b80;
  g_INT_ARRAY_01d053b4[g_INT_01d05270] = g_INT_01c38b84;
  g_INT_ARRAY_01d053dc[g_INT_01d05270] = g_INT_01c38b88;
  g_INT_ARRAY_01d05404[g_INT_01d05270] = g_INT_01c38b8c;
  g_INT_ARRAY_01d0542c[g_INT_01d05270] = g_INT_01c38b90;
  g_INT_ARRAY_01d05454[g_INT_01d05270] = g_INT_01c38b94;
  g_INT_ARRAY_01d0547c[g_INT_01d05270] = g_INT_01c38b98;
  g_INT_ARRAY_01d05274[g_INT_01d05270] = g_INT_01c35e38;
  g_INT_ARRAY_01d0529c[g_INT_01d05270] = g_INT_01c35e3c;
  g_INT_ARRAY_01d052c4[g_INT_01d05270] = g_INT_01c35e40;
  g_INT_ARRAY_01d052ec[g_INT_01d05270] = g_INT_01c35e44;
  g_INT_ARRAY_01d05314[g_INT_01d05270] = g_INT_006141e4;
  g_INT_ARRAY_01d054a4[g_INT_01d05270] = g_INT_01c35e48;
  g_INT_ARRAY_01d054cc[g_INT_01d05270] = g_INT_01c35e50;
  g_INT_ARRAY_01d054f4[g_INT_01d05270] = g_INT_01c35e4c;
  g_INT_ARRAY_01d0551c[g_INT_01d05270] = g_INT_01c35e54;
  g_INT_01d05270 = g_INT_01d05270 + 1;
  if (9 < g_INT_01d05270) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\matrix.c";
    g_INT_01d046a4 = 0x540;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Too many 3D windows");
  }
  engine_2d_c_setupViewportAndClipping_FUN_00401810(x,y,x + width,y + height);
  g_INT_006141e4 = 0x10000;
  return;
}
