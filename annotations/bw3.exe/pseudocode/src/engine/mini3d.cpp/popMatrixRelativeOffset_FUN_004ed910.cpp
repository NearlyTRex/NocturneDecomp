// Name: engine_mini3d.cpp_popMatrixRelativeOffset_FUN_004ed910
// Address: 004ed910
// Address Range: [[004ed910, 004ed973]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_popMatrixRelativeOffset_FUN_004ed910(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_popMatrixRelativeOffset_FUN_004ed910(void)

{
  g_PTR_01d76d00 = g_PTR_01d76d00 + -1;
  if ((int)g_PTR_01d76d00 < 0) {
    g_CurrentFilename = "..\\engine\\mini3d.cpp";
    g_CurrentLineNumber = 1285;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Matrix unbalance2");
  }
  g_INT_01d7977c = 1;
  g_PTR_01d76cfc = (byte *)(&g_FLOAT_01d76d04 + (int)g_PTR_01d76d00 * 0xf);
  return;
}
