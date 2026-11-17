// Name: engine_matrix.c_pop_FUN_004cdbc0
// Address: 004cdbc0
// Address Range: [[004cdbc0, 004cdcc8]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pop_FUN_004cdbc0(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_pop_FUN_004cdbc0(void)

{
  g_INT_01cc5174 = g_INT_01cc5174 + -1;
  if (g_INT_01cc5174 < 0) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 853;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Matrix unbalance2");
  }
  g_TransformMatrix.m[0].x = g_INT_ARRAY_01cc5178[g_INT_01cc5174];
  g_TransformMatrix.m[0].y = g_INT_ARRAY_01cc51a0[g_INT_01cc5174];
  g_TransformMatrix.m[0].z = g_INT_ARRAY_01cc51c8[g_INT_01cc5174];
  g_TransformMatrix.m[1].x = g_INT_ARRAY_01cc51f0[g_INT_01cc5174];
  g_TransformMatrix.m[1].y = g_INT_ARRAY_01cc5218[g_INT_01cc5174];
  g_TransformMatrix.m[1].z = g_INT_ARRAY_01cc5240[g_INT_01cc5174];
  g_TransformMatrix.m[2].x = g_INT_ARRAY_01cc5268[g_INT_01cc5174];
  g_TransformMatrix.m[2].y = g_INT_ARRAY_01cc5290[g_INT_01cc5174];
  g_TransformMatrix.m[2].z = g_INT_ARRAY_01cc52b8[g_INT_01cc5174];
  g_RelativeX = g_INT_ARRAY_01cc52e0[g_INT_01cc5174];
  g_RelativeY = g_INT_ARRAY_01cc5308[g_INT_01cc5174];
  g_RelativeZ = g_INT_ARRAY_01cc5330[g_INT_01cc5174];
  g_INT_01c039dc = g_INT_ARRAY_01cc5358[g_INT_01cc5174];
  g_INT_01c039e0 = g_INT_ARRAY_01cc5380[g_INT_01cc5174];
  g_INT_01c039e4 = g_INT_ARRAY_01cc53a8[g_INT_01cc5174];
  return;
}
