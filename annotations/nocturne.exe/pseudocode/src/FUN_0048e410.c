// Name: FUN_0048e410
// Address: 0048e410
// Address Range: [[0048e410, 0048e54c]]
// Convention: unknown
// Signature: void FUN_0048e410(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048e410(int param_1)

{
  float fVar1;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float afStack_20 [6];
  
  FUN_00409fc0(param_1);
  FUN_00454510(param_1 + 0x150);
  *(uint *)(param_1 + 0x4e4) = 0;
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&local_38);
  *(uint *)(param_1 + 0x358) = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x35c) = *(uint *)(param_1 + 0x24);
  *(uint *)(param_1 + 0x360) = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x35c) = (fStack_28 - fStack_34) + *(float *)(param_1 + 0x35c);
  if ((float *)(param_1 + 0x488) != afStack_20) {
    *(float *)(param_1 + 0x488) = fStack_2c - local_38;
    *(float *)(param_1 + 0x48c) = fStack_28 - fStack_34;
    *(float *)(param_1 + 0x490) = fStack_24 - fStack_30;
  }
  *(uint *)(param_1 + 0x4d8) = 0;
  fVar1 = *(float *)(param_1 + 0x488) * (float)_DAT_0058164f;
  *(uint *)(param_1 + 0x4dc) = 0;
  if (*(float *)(param_1 + 0x48c) < fVar1) {
    *(float *)(param_1 + 0x48c) = fVar1;
  }
  *(uint *)(param_1 + 0x5d4) = 0;
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
