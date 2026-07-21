// Name: core_dtri.cpp_rayTriangleIntersection_FUN_0046c620
// Address: 0046c620
// Address Range: [[0046c620, 0046c81e]]
// Convention: unknown
// Signature: float core_dtri_cpp_rayTriangleIntersection_FUN_0046c620(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

float core_dtri_cpp_rayTriangleIntersection_FUN_0046c620(float *param_1,float *param_2,float *param_3)

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
  float local_1c;
  float local_14;
  
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
  fVar4 = fVar3 * *param_3 + *param_2;
  fVar5 = fVar3 * param_3[1] + param_2[1];
  fVar2 = param_1[0xd];
  if (fVar2 == 0.0) {
    fVar2 = param_1[5];
    fVar1 = param_1[8];
    local_14 = fVar5 - param_1[1];
    local_24 = param_1[4] - param_1[1];
    local_28 = param_1[7] - param_1[1];
  }
  else {
    if (1 < (uint)fVar2) {
      if (fVar2 == 2.8026e-45) {
        local_14 = fVar4 - *param_1;
        local_24 = param_1[3] - *param_1;
        local_28 = param_1[6] - *param_1;
        local_2c = fVar5 - param_1[1];
        local_1c = param_1[4] - param_1[1];
        local_20 = param_1[7] - param_1[1];
      }
      goto LAB_0046c72b;
    }
    fVar2 = param_1[5];
    fVar1 = param_1[8];
    local_14 = fVar4 - *param_1;
    local_24 = param_1[3] - *param_1;
    local_28 = param_1[6] - *param_1;
  }
  local_2c = (fVar3 * param_3[2] + param_2[2]) - param_1[2];
  local_1c = fVar2 - param_1[2];
  local_20 = fVar1 - param_1[2];
LAB_0046c72b:
  fVar4 = 1.0 / (local_24 * local_20 - local_1c * local_28);
  fVar2 = (local_14 * local_20 - local_28 * local_2c) * fVar4;
  if (((0.0 <= fVar2) && (fVar4 = (local_24 * local_2c - local_1c * local_14) * fVar4, 0.0 <= fVar4)
      ) && (fVar2 + fVar4 <= 1.0)) {
    return fVar3;
  }
  return -1.0;
}
