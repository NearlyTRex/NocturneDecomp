// Name: core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00
// Address: 0041cc00
// Address Range: [[0041cc00, 0041cc6b]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(float *param_1,float *param_2)

#include "nocturne.h"

void __cdecl core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(float *param_1,float *param_2)

{
  if (*param_2 < *param_1) {
    *param_1 = *param_2;
  }
  if (param_1[3] < *param_2) {
    param_1[3] = *param_2;
  }
  if (param_2[1] < param_1[1]) {
    param_1[1] = param_2[1];
  }
  if (param_1[4] < param_2[1]) {
    param_1[4] = param_2[1];
  }
  if (param_2[2] < param_1[2]) {
    param_1[2] = param_2[2];
  }
  if (param_2[2] <= param_1[5]) {
    return;
  }
  param_1[5] = param_2[2];
  return;
}
