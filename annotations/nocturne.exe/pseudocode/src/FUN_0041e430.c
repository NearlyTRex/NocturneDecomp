// Name: FUN_0041e430
// Address: 0041e430
// Address Range: [[0041e430, 0041e4ca]]
// Convention: unknown
// Signature: void FUN_0041e430(int param_1)

#include "nocturne.h"

void FUN_0041e430(int param_1)

{
  int iVar1;
  
  FUN_00409fc0(param_1);
  FUN_00454510(param_1 + 0x150);
  iVar1 = FUN_00454530(param_1 + 0x150);
  iVar1 = *(int *)(iVar1 + 0x100);
  if (*(float *)(param_1 + 0x308) < 0.0) {
    *(uint *)(param_1 + 0x308) = 0;
  }
  if ((float)iVar1 <= *(float *)(param_1 + 0x308)) {
    *(float *)(param_1 + 0x308) = (float)(iVar1 + -1);
  }
  if (-1 < *(int *)(param_1 + 0x5e0)) {
    *(uint *)(param_1 + 800) = 0;
    return;
  }
  FUN_0041e4d0(param_1);
  *(uint *)(param_1 + 800) = 0;
  return;
}
