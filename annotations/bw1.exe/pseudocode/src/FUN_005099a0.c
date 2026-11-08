// Name: FUN_005099a0
// Address: 005099a0
// Address Range: [[005099a0, 00509a6a]]
// Convention: unknown
// Signature: void FUN_005099a0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005099a0(int param_1,float param_2)

{
  float fVar1;
  byte bVar2;
  uint auStackY_1024 [1012];
  uint uStack_3c;
  uint uStack_30;
  uint uStack_24;
  uint uStack_18;
  
  bVar2 = 0;
  FUN_005ad770(param_1,param_2);
  if ((0 < *(int *)(param_1 + 0x590)) &&
     (param_2 = *(float *)(param_1 + 0x594) - param_2, *(float *)(param_1 + 0x594) = param_2,
     param_2 <= 0.0)) {
    fVar1 = *(float *)(param_1 + 0x598) * (float)_DAT_005e7976;
    *(int *)(param_1 + 0x590) = *(int *)(param_1 + 0x590) + -1;
    *(float *)(param_1 + 0x598) = fVar1;
    *(float *)(param_1 + 0x594) = fVar1;
    (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
    uStack_24 = uStack_3c;
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8);
    *(uint *)(&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    FUN_00408b40(param_1,&stack0xffffffdc);
    uStack_30 = uStack_18;
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffec + (uint)bVar2 * -8);
    *(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    FUN_004e5f40(0x01CD0E3C,&stack0xffffffd0,&DAT_02c8af28,*(uint *)(param_1 + 0x58c));
    return;
  }
  return;
}
