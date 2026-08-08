// Name: engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
// Address: 00460bf0
// Address Range: [[00460bf0, 00460bf4]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(void)

{
  _DAT_01cc5174 = _DAT_01cc5174 + -1;
  if (_DAT_01cc5174 < 0) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 853;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Matrix unbalance2");
  }
  g_TransformMatrix.m[0].x = *(int *)(_DAT_01cc5174 * 4 + 0x1cc5178);
  g_TransformMatrix.m[0].y = *(int *)(_DAT_01cc5174 * 4 + 0x1cc51a0);
  g_TransformMatrix.m[0].z = *(int *)(_DAT_01cc5174 * 4 + 0x1cc51c8);
  g_TransformMatrix.m[1].x = *(int *)(_DAT_01cc5174 * 4 + 0x1cc51f0);
  g_TransformMatrix.m[1].y = *(int *)(_DAT_01cc5174 * 4 + 0x1cc5218);
  g_TransformMatrix.m[1].z = *(int *)(_DAT_01cc5174 * 4 + 0x1cc5240);
  g_TransformMatrix.m[2].x = *(int *)(_DAT_01cc5174 * 4 + 0x1cc5268);
  g_TransformMatrix.m[2].y = *(int *)(_DAT_01cc5174 * 4 + 0x1cc5290);
  g_TransformMatrix.m[2].z = *(int *)(_DAT_01cc5174 * 4 + 0x1cc52b8);
  g_RelativeX = *(int *)(_DAT_01cc5174 * 4 + 0x1cc52e0);
  g_RelativeY = *(int *)(_DAT_01cc5174 * 4 + 0x1cc5308);
  g_RelativeZ = *(int *)(_DAT_01cc5174 * 4 + 0x1cc5330);
  _DAT_01c039dc = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5358);
  _DAT_01c039e0 = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5380);
  _DAT_01c039e4 = *(uint *)(_DAT_01cc5174 * 4 + 0x1cc53a8);
  return;
}
