// Name: FUN_00449830
// Address: 00449830
// Address Range: [[00449830, 00449910]]
// Convention: unknown
// Signature: void FUN_00449830(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00449830(int param_1,uint param_2)

{
  byte bVar1;
  uint auStackY_1024 [1016];
  uint *puVar2;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_24;
  uint uStack_18;
  
  bVar1 = 0;
  FUN_005ad770(param_1,param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
  puVar2 = &stack0xffffffdc;
  uStack_24 = uStack_30;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  FUN_00408b40(param_1,puVar2);
  uStack_3c = uStack_18;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  *(uint *)(param_1 + 0x59c) = uStack_3c;
  *(uint *)(param_1 + 0x5a0) = uStack_38;
  *(uint *)(param_1 + 0x5a4) = uStack_34;
  if ((((*(int *)(param_1 + 0x2d4) != 2) || (*(int *)(param_1 + 0x568) < 1)) ||
      (*(int *)(param_1 + 0x56c) != 5)) || (0.0 < *(float *)(param_1 + 0x300))) {
    FUN_004b8ab0(param_1 + 0x57c);
    *(uint *)(param_1 + 0x578) = 0;
  }
  else {
    *(uint *)(param_1 + 0x578) = 1;
  }
  FUN_004b7b90(param_1 + 0x57c,param_2);
  *(uint *)(param_1 + 0xfc) = *(uint *)(param_1 + 0x578);
  return;
}
