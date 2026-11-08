// Name: FUN_0049b7f0
// Address: 0049b7f0
// Address Range: [[0049b7f0, 0049b882]]
// Convention: unknown
// Signature: void FUN_0049b7f0(int param_1)

#include "nocturne.h"

void FUN_0049b7f0(int param_1)

{
  byte bVar1;
  float afStackY_1008 [1015];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  bVar1 = 0;
  if (*(float *)(param_1 + 0x24) <= 0.0) {
    return;
  }
  FUN_00510ef0(param_1);
  fStack_8 = *(float *)(0x01CB6900 + 0x284);
  fStack_20 = *(float *)(param_1 + 0x4c) * fStack_8;
  fStack_1c = *(float *)(param_1 + 0x50) * fStack_8;
  fStack_18 = *(float *)(param_1 + 0x54) * fStack_8;
  fStack_14 = fStack_20;
  *(uint *)((int)&stack0xfffffff0 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fStack_14;
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + fStack_10;
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) + fStack_c;
  return;
}
