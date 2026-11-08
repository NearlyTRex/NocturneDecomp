// Name: FUN_004e73e0
// Address: 004e73e0
// Address Range: [[004e73e0, 004e74aa]]
// Convention: unknown
// Signature: void FUN_004e73e0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e73e0(int param_1,float param_2)

{
  float fVar1;
  byte bVar2;
  uint auStackY_1024 [1012];
  uint uStack_3c;
  uint uStack_30;
  uint uStack_24;
  uint uStack_18;
  
  bVar2 = 0;
  FUN_0057b160(param_1,param_2);
  if ((0 < *(int *)(param_1 + 0x5ac)) &&
     (param_2 = *(float *)(param_1 + 0x5b0) - param_2, *(float *)(param_1 + 0x5b0) = param_2,
     param_2 <= 0.0)) {
    fVar1 = *(float *)(param_1 + 0x5b4) * (float)_DAT_005c7162;
    *(int *)(param_1 + 0x5ac) = *(int *)(param_1 + 0x5ac) + -1;
    *(float *)(param_1 + 0x5b4) = fVar1;
    *(float *)(param_1 + 0x5b0) = fVar1;
    (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
    uStack_24 = uStack_3c;
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8);
    *(uint *)(&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    FUN_00408b80(param_1,&stack0xffffffdc);
    uStack_30 = uStack_18;
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffec + (uint)bVar2 * -8);
    *(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    FUN_004ce8a0(0x01D22E44,&stack0xffffffd0,&DAT_02cfd900,*(uint *)(param_1 + 0x5a8));
    return;
  }
  return;
}
