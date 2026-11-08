// Name: FUN_0054efa0
// Address: 0054efa0
// Address Range: [[0054efa0, 0054f038]]
// Convention: unknown
// Signature: void FUN_0054efa0(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

#include "nocturne.h"

void FUN_0054efa0(int param_1,uint param_2,uint param_3,float param_4)

{
  byte bVar1;
  float afStackY_1020 [1015];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  bVar1 = 0;
  FUN_0054f040(param_1,param_2,param_3);
  fStack_20 = fStack_2c;
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  fStack_14 = fStack_20 * param_4;
  fStack_10 = fStack_1c * param_4;
  fStack_c = fStack_18 * param_4;
  fStack_38 = fStack_20 * param_4;
  *(uint *)((int)&stack0xffffffcc + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  *(float *)(param_1 + 0x2344) = *(float *)(param_1 + 0x2344) + fStack_38;
  *(float *)(param_1 + 0x2348) = *(float *)(param_1 + 0x2348) + fStack_34;
  *(float *)(param_1 + 0x234c) = *(float *)(param_1 + 0x234c) + fStack_30;
  return;
}
