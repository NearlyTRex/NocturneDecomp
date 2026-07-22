// Name: core_dtri.cpp_cylinderEdgeIntersection_FUN_0046c820
// Address: 0046c820
// Address Range: [[0046c820, 0046caf1]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_dtri_cpp_cylinderEdgeIntersection_FUN_0046c820(float *param_1)

#include "nocturne.h"

uint __cdecl core_dtri_cpp_cylinderEdgeIntersection_FUN_0046c820(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_3c;
  float local_14;
  float local_10;
  
  fVar2 = param_1[0x12] - param_1[0x10];
  fVar1 = param_1[0x11] - param_1[0xf];
  local_10 = -fVar2;
  fVar5 = fVar1 * fVar1 + local_10 * local_10;
  if (0.0 < fVar5) {
    local_14 = 1.0 / SQRT(fVar5);
    local_10 = local_10 * local_14;
    local_14 = fVar1 * local_14;
    if (0.0 < (param_1[5] - param_1[0x10]) * local_14 + (param_1[4] - param_1[0xf]) * local_10) {
      local_14 = -local_14;
      local_10 = -local_10;
    }
    fVar5 = param_1[7] * local_14 + param_1[6] * local_10;
    if (fVar5 <= 0.0) {
      return 0;
    }
    local_3c = param_1[0x10] * local_14 + param_1[0xf] * local_10;
    if (local_3c < param_1[5] * local_14 + param_1[4] * local_10) {
      return 0;
    }
    fVar4 = local_10 * param_1[8] + param_1[4];
    fVar3 = local_14 * param_1[8] + param_1[5];
    local_3c = local_3c - (fVar3 * local_14 + fVar4 * local_10);
    if (fVar5 < local_3c) {
      return 0;
    }
    local_3c = local_3c / fVar5;
    if (*param_1 <= local_3c) {
      return 0;
    }
    param_1[0x15] = param_1[6] * local_3c + fVar4;
    param_1[0x16] = param_1[7] * local_3c + fVar3;
    if (ABS(fVar1) <= ABS(fVar2)) {
      fVar1 = (param_1[0x16] - param_1[0x10]) / fVar2;
    }
    else {
      fVar1 = (param_1[0x15] - param_1[0xf]) / fVar1;
    }
    param_1[0x14] = fVar1;
    if (0.0 <= param_1[0x14]) {
      if (param_1[0x14] <= 1.0) {
        if (local_3c < 0.0) {
          local_3c = 0.0;
        }
        param_1[0x13] = local_3c;
        return 1;
      }
      param_1[0x14] = 1.0;
      fVar1 = param_1[0x11];
      fVar5 = param_1[0x12];
    }
    else {
      param_1[0x14] = 0.0;
      fVar1 = param_1[0xf];
      fVar5 = param_1[0x10];
    }
    param_1[0x16] = fVar5;
    param_1[0x15] = fVar1;
    fVar5 = param_1[0x15] - param_1[4];
    fVar3 = param_1[0x16] - param_1[5];
    fVar1 = param_1[7] * param_1[7] + param_1[6] * param_1[6];
    fVar2 = (param_1[7] * fVar3 + param_1[6] * fVar5) * -2.0f;
    fVar5 = fVar2 * fVar2 -
            fVar1 * 4.0f * ((fVar3 * fVar3 + fVar5 * fVar5) - param_1[8] * param_1[8]);
    if (0.0 <= fVar5) {
      fVar1 = (-fVar2 - SQRT(fVar5)) / (fVar1 * 5.3049894774131808e-315._0_4_);
      param_1[0x13] = fVar1;
      if (((0.0 <= fVar1) && (fVar1 <= 1.0)) && (param_1[0x13] < *param_1)) {
        return 1;
      }
    }
  }
  return 0;
}
