// Name: engine_matrix.c_matrixPush_FUN_004cdac0
// Address: 004cdac0
// Address Range: [[004cdac0, 004cdbbe]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_matrixPush_FUN_004cdac0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_matrixPush_FUN_004cdac0(void)

{
  *(int *)(_DAT_01cc5174 * 4 + 0x1cc52e0) = g_RelativeX;
  *(int *)(_DAT_01cc5174 * 4 + 0x1cc5308) = g_RelativeY;
  *(int *)(_DAT_01cc5174 * 4 + 0x1cc5330) = g_RelativeZ;
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5358) = _DAT_01c039dc;
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5380) = _DAT_01c039e0;
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc53a8) = _DAT_01c039e4;
  *(int *)(_DAT_01cc5174 * 4 + 0x1cc5178) = g_TransformMatrix.m[0].x;
  *(int *)(_DAT_01cc5174 * 4 + 0x1cc51a0) = g_TransformMatrix.m[0].y;
  *(int *)(_DAT_01cc5174 * 4 + 0x1cc51c8) = g_TransformMatrix.m[0].z;
  *(int *)(_DAT_01cc5174 * 4 + 0x1cc51f0) = g_TransformMatrix.m[1].x;
  *(int *)(_DAT_01cc5174 * 4 + 0x1cc5218) = g_TransformMatrix.m[1].y;
  *(int *)(_DAT_01cc5174 * 4 + 0x1cc5240) = g_TransformMatrix.m[1].z;
  *(int *)(_DAT_01cc5174 * 4 + 0x1cc5268) = g_TransformMatrix.m[2].x;
  *(int *)(_DAT_01cc5174 * 4 + 0x1cc5290) = g_TransformMatrix.m[2].y;
  *(int *)(_DAT_01cc5174 * 4 + 0x1cc52b8) = g_TransformMatrix.m[2].z;
  _DAT_01cc5174 = _DAT_01cc5174 + 1;
  if (_DAT_01cc5174 < 10) {
    return;
  }
  g_CurrentFilename = "..\\engine\\matrix.c";
  g_CurrentLineNumber = 840;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Matrix unbalance");
  return;
}
