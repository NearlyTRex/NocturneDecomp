// Name: FUN_004897d0
// Address: 004897d0
// Address Range: [[004897d0, 00489849]]
// Convention: unknown
// Signature: void FUN_004897d0(int param_1)

#include "nocturne.h"

void FUN_004897d0(int param_1)

{
  float fVar1;
  
  if (*(float *)(param_1 + 0x18) <= 0.0) {
    return;
  }
  FUN_004ef120(param_1);
  fVar1 = *(float *)(0x01C775EC + 0x264);
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x44) * fVar1;
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x48) * fVar1;
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x4c) * fVar1;
  return;
}
