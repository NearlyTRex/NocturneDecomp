// Name: engine_mini3d.cpp_popMatrixRelativeOffset_FUN_00512140
// Address: 00512140
// Address Range: [[00512140, 005121a3]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_popMatrixRelativeOffset_FUN_00512140(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_popMatrixRelativeOffset_FUN_00512140(void)

{
  g_PTR_01d22580 = g_PTR_01d22580 + -1;
  if ((int)g_PTR_01d22580 < 0) {
    g_CurrentFilename = "..\\engine\\mini3d.cpp";
    g_CurrentLineNumber = 1285;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Matrix unbalance2");
  }
  g_INT_01d24ffc = 1;
  g_PTR_01d2257c = (byte *)(&g_FLOAT_01d22584 + (int)g_PTR_01d22580 * 0xf);
  return;
}
