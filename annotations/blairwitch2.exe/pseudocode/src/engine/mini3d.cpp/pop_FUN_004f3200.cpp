// Name: engine_mini3d.cpp_pop_FUN_004f3200
// Address: 004f3200
// Address Range: [[004f3200, 004f3263]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_pop_FUN_004f3200(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_pop_FUN_004f3200(void)

{
  g_PTR_01d0991c = g_PTR_01d0991c + -1;
  if ((int)g_PTR_01d0991c < 0) {
    g_CurrentFilename = "..\\engine\\mini3d.cpp";
    g_CurrentLineNumber = 1215;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Matrix unbalance2");
  }
  g_INT_01d0c398 = 1;
  g_PTR_01d09918 = (byte *)(&g_FLOAT_01d09920 + (int)g_PTR_01d0991c * 0xf);
  return;
}
