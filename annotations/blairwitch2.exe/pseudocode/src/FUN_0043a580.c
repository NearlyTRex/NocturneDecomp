// Name: FUN_0043a580
// Address: 0043a580
// Address Range: [[0043a580, 0043a660]]
// Convention: unknown
// Signature: void FUN_0043a580(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0043a580(int param_1,uint param_2)

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
  FUN_00589c80(param_1,param_2);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xe8))(param_1);
  puVar2 = &stack0xffffffdc;
  uStack_24 = uStack_30;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  FUN_00408d70(param_1,puVar2);
  uStack_3c = uStack_18;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  *(uint *)(param_1 + 0x6f8) = uStack_3c;
  *(uint *)(param_1 + 0x6fc) = uStack_38;
  *(uint *)(param_1 + 0x700) = uStack_34;
  if ((((*(int *)(param_1 + 0x430) != 2) || (*(int *)(param_1 + 0x6c4) < 1)) ||
      (*(int *)(param_1 + 0x6c8) != 5)) || (0.0 < *(float *)(param_1 + 0x45c))) {
    FUN_004a0200(param_1 + 0x6d8);
    *(uint *)(param_1 + 0x6d4) = 0;
  }
  else {
    *(uint *)(param_1 + 0x6d4) = 1;
  }
  FUN_0049f2e0(param_1 + 0x6d8,param_2);
  *(uint *)(param_1 + 0xfc) = *(uint *)(param_1 + 0x6d4);
  return;
}
