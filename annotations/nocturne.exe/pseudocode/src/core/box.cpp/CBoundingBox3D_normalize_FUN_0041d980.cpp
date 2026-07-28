// Name: core_box.cpp_CBoundingBox3D_normalize_FUN_0041d980
// Address: 0041d980
// Address Range: [[0041d980, 0041d9cf]]
// Convention: unknown
// Signature: void core_box_cpp_CBoundingBox3D_normalize_FUN_0041d980(float *param_1)

#include "nocturne.h"

void core_box_cpp_CBoundingBox3D_normalize_FUN_0041d980(float *param_1)

{
  float fVar1;
  
  if (param_1[3] < *param_1) {
    fVar1 = *param_1;
    *param_1 = param_1[3];
    param_1[3] = fVar1;
  }
  if (param_1[4] < param_1[1]) {
    fVar1 = param_1[1];
    param_1[1] = param_1[4];
    param_1[4] = fVar1;
  }
  if (param_1[2] <= param_1[5]) {
    return;
  }
  fVar1 = param_1[2];
  param_1[2] = param_1[5];
  param_1[5] = fVar1;
  return;
}
