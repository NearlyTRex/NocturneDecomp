// Name: engine_matrix.c_popMatrixRelativeOffset_FUN_004ceb90
// Address: 004ceb90
// Address Range: [[004ceb90, 004cebf5]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_004ceb90(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_004ceb90(void)

{
  g_INT_01cc5174 = g_INT_01cc5174 + -1;
  if (g_INT_01cc5174 < 0) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 1494;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Matrix unbalance4");
  }
  g_RelativeX = g_INT_ARRAY_01cc52e0[g_INT_01cc5174];
  g_RelativeY = g_INT_ARRAY_01cc5308[g_INT_01cc5174];
  g_RelativeZ = g_INT_ARRAY_01cc5330[g_INT_01cc5174];
  return;
}
