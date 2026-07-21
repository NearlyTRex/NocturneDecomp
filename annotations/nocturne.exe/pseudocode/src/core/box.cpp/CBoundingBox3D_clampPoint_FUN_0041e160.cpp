// Name: core_box.cpp_CBoundingBox3D_clampPoint_FUN_0041e160
// Address: 0041e160
// Address Range: [[0041e160, 0041e1f1]]
// Convention: __cdecl
// Signature: float * __cdecl core_box_cpp_CBoundingBox3D_clampPoint_FUN_0041e160(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

float * __cdecl core_box_cpp_CBoundingBox3D_clampPoint_FUN_0041e160(float *param_1,float *param_2,float *param_3)

{
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  if (*param_2 < *param_1) {
    *param_2 = *param_1;
  }
  if (param_1[3] < *param_2) {
    *param_2 = param_1[3];
  }
  if (param_2[1] < param_1[1]) {
    param_2[1] = param_1[1];
  }
  if (param_1[4] < param_2[1]) {
    param_2[1] = param_1[4];
  }
  if (param_2[2] < param_1[2]) {
    param_2[2] = param_1[2];
  }
  if (param_2[2] <= param_1[5]) {
    return param_2;
  }
  param_2[2] = param_1[5];
  return param_2;
}
