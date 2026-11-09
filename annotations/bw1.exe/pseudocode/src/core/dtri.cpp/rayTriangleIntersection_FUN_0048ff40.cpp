// Name: core_dtri.cpp_rayTriangleIntersection_FUN_0048ff40
// Address: 0048ff40
// Address Range: [[0048ff40, 00490143]]
// Convention: unknown
// Signature: float core_dtri_cpp_rayTriangleIntersection_FUN_0048ff40(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

float core_dtri_cpp_rayTriangleIntersection_FUN_0048ff40(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_14;
  float local_10;
  
  fVar2 = param_1[0xb] * param_3[2] + param_1[9] * *param_3 + param_1[10] * param_3[1];
  if (fVar2 <= 0.0) {
    return -1.0;
  }
  fVar3 = -(param_1[0xb] * param_2[2] +
           param_1[10] * param_2[1] + param_1[9] * *param_2 + param_1[0xc]);
  if (fVar3 < 0.0) {
    return -1.0;
  }
  if (fVar2 < fVar3) {
    return -1.0;
  }
  fVar3 = fVar3 / fVar2;
  fVar2 = param_1[0xd];
  fVar4 = fVar3 * *param_3 + *param_2;
  fVar5 = fVar3 * param_3[1] + param_2[1];
  if (fVar2 == 0.0) {
    fVar2 = param_1[5];
    fVar1 = param_1[8];
    local_20 = fVar5 - param_1[1];
    local_28 = param_1[4] - param_1[1];
    local_24 = param_1[7] - param_1[1];
  }
  else {
    if (1 < (uint)fVar2) {
      if (fVar2 == 2.8026e-45) {
        local_20 = fVar4 - *param_1;
        local_28 = param_1[3] - *param_1;
        local_24 = param_1[6] - *param_1;
        local_10 = fVar5 - param_1[1];
        local_14 = param_1[4] - param_1[1];
        local_2c = param_1[7] - param_1[1];
      }
      goto LAB_0049004e;
    }
    fVar2 = param_1[5];
    fVar1 = param_1[8];
    local_20 = fVar4 - *param_1;
    local_28 = param_1[3] - *param_1;
    local_24 = param_1[6] - *param_1;
  }
  local_10 = (fVar3 * param_3[2] + param_2[2]) - param_1[2];
  local_14 = fVar2 - param_1[2];
  local_2c = fVar1 - param_1[2];
LAB_0049004e:
  fVar4 = 1.0 / (local_28 * local_2c - local_14 * local_24);
  fVar2 = (local_20 * local_2c - local_24 * local_10) * fVar4;
  if (((0.0 <= fVar2) && (fVar4 = (local_28 * local_10 - local_14 * local_20) * fVar4, 0.0 <= fVar4)
      ) && (fVar2 + fVar4 <= 1.0)) {
    return fVar3;
  }
  return -1.0;
}
