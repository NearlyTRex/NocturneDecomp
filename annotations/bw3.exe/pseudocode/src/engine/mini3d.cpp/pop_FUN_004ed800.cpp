// Name: engine_mini3d.cpp_pop_FUN_004ed800
// Address: 004ed800
// Address Range: [[004ed800, 004ed863]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_pop_FUN_004ed800(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_pop_FUN_004ed800(void)

{
  g_PTR_01d76d00 = g_PTR_01d76d00 + -1;
  if ((int)g_PTR_01d76d00 < 0) {
    g_CHAR_PTR_01d71de0 = "..\\engine\\mini3d.cpp";
    g_INT_01d71de4 = 0x4cf;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Matrix unbalance2");
  }
  g_INT_01d7977c = 1;
  g_PTR_01d76cfc = (byte *)(&g_FLOAT_01d76d04 + (int)g_PTR_01d76d00 * 0xf);
  return;
}
