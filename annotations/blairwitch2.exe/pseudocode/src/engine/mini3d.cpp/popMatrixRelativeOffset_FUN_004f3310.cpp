// Name: engine_mini3d.cpp_popMatrixRelativeOffset_FUN_004f3310
// Address: 004f3310
// Address Range: [[004f3310, 004f3373]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_popMatrixRelativeOffset_FUN_004f3310(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_popMatrixRelativeOffset_FUN_004f3310(void)

{
  g_PTR_01d0991c = g_PTR_01d0991c + -1;
  if ((int)g_PTR_01d0991c < 0) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\mini3d.cpp";
    g_INT_01d046a4 = 0x4f5;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Matrix unbalance2");
  }
  g_INT_01d0c398 = 1;
  g_PTR_01d09918 = (byte *)(&g_FLOAT_01d09920 + (int)g_PTR_01d0991c * 0xf);
  return;
}
