// Name: engine_mini3d.cpp_FUN_004f585c
// Address: 004f585c
// Address Range: [[004f585c, 004f585f]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f585c(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f585c(float *param_1)

{
  float fVar1;
  float fVar2;
  
  param_1[4] = 0.0;
  if (param_1[2] < *param_1) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
  }
  if (*param_1 < -param_1[2]) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 2;
  }
  if (param_1[2] < param_1[1]) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 4;
  }
  if (param_1[1] < -param_1[2]) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 8;
  }
  if (0.0 < param_1[2]) {
    if (param_1[4] != 0.0) {
      return;
    }
    fVar1 = *param_1 * _DAT_01d0987c;
    fVar2 = param_1[1] * _DAT_01d09880;
    param_1[3] = 1.0 / param_1[2];
    fVar2 = _DAT_01d09888 + fVar2 * param_1[3];
    param_1[5] = _DAT_01d09884 + fVar1 * param_1[3];
    param_1[6] = fVar2;
    return;
  }
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 0x10;
  return;
}
