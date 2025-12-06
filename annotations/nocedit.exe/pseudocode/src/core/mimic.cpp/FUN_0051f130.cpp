// Name: core_mimic.cpp_FUN_0051f130
// Address: 0051f130
// Address Range: [[0051f130, 0051f181]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_0051f130()

#include "nocturne.h"

void core_mimic_cpp_FUN_0051f130(void)

{
  engine_matrix_c_matrixPush_FUN_0050d620();
  g_RelativeX = -g_RelativeX;
  g_LightDirectionX = -g_LightDirectionX;
  g_TransformMatrix.m[0].x = -g_TransformMatrix.m[0].x;
  g_TransformMatrix.m[0].y = -g_TransformMatrix.m[0].y;
  g_TransformMatrix.m[0].z = -g_TransformMatrix.m[0].z;
  return;
}
