// Name: engine_matrix.c_pushViewport_FUN_004e6af0
// Address: 004e6af0
// Address Range: [[004e6af0, 004e6c49]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pushViewport_FUN_004e6af0(int x,int y,int width,int height)

#include "nocturne.h"

void __cdecl engine_matrix_c_pushViewport_FUN_004e6af0(int x,int y,int width,int height)

{
  g_INT_ARRAY_01d729c8[g_INT_01d728fc] = g_INT_01c6e2d8;
  g_INT_ARRAY_01d729f0[g_INT_01d728fc] = g_INT_01c6e2dc;
  g_INT_ARRAY_01d72a18[g_INT_01d728fc] = g_INT_01c6e2e0;
  g_INT_ARRAY_01d72a40[g_INT_01d728fc] = g_INT_01c6e2e4;
  g_INT_ARRAY_01d72a68[g_INT_01d728fc] = g_INT_01c6e2e8;
  g_INT_ARRAY_01d72a90[g_INT_01d728fc] = g_INT_01c6e2ec;
  g_INT_ARRAY_01d72ab8[g_INT_01d728fc] = g_INT_01c6e2f0;
  g_INT_ARRAY_01d72ae0[g_INT_01d728fc] = g_INT_01c6e2f4;
  g_INT_ARRAY_01d72b08[g_INT_01d728fc] = g_INT_01c6e2f8;
  g_INT_ARRAY_01d72900[g_INT_01d728fc] = g_INT_01c6b598;
  g_INT_ARRAY_01d72928[g_INT_01d728fc] = g_INT_01c6b59c;
  g_INT_ARRAY_01d72950[g_INT_01d728fc] = g_INT_01c6b5a0;
  g_INT_ARRAY_01d72978[g_INT_01d728fc] = g_INT_01c6b5a4;
  g_INT_ARRAY_01d729a0[g_INT_01d728fc] = g_INT_005fba44;
  g_INT_ARRAY_01d72b30[g_INT_01d728fc] = g_INT_01c6b5a8;
  g_INT_ARRAY_01d72b58[g_INT_01d728fc] = g_INT_01c6b5b0;
  g_INT_ARRAY_01d72b80[g_INT_01d728fc] = g_INT_01c6b5ac;
  g_INT_ARRAY_01d72ba8[g_INT_01d728fc] = g_INT_01c6b5b4;
  g_INT_01d728fc = g_INT_01d728fc + 1;
  if (9 < g_INT_01d728fc) {
    g_CHAR_PTR_01d71de0 = "..\\engine\\matrix.c";
    g_INT_01d71de4 = 0x540;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Too many 3D windows");
  }
  engine_2d_c_setupViewportAndClipping_FUN_00401810(x,y,x + width,y + height);
  g_INT_005fba44 = 0x10000;
  return;
}
