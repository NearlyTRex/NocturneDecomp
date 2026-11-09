// Name: engine_mini3d.cpp_FUN_004efd7c
// Address: 004efd7c
// Address Range: [[004efd7c, 004efd7f]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004efd7c(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004efd7c(float *param_1)

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
    fVar1 = *param_1 * _DAT_01d76c5c;
    fVar2 = param_1[1] * _DAT_01d76c60;
    param_1[3] = 1.0 / param_1[2];
    fVar2 = _DAT_01d76c68 + fVar2 * param_1[3];
    param_1[5] = _DAT_01d76c64 + fVar1 * param_1[3];
    param_1[6] = fVar2;
    return;
  }
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 0x10;
  return;
}
