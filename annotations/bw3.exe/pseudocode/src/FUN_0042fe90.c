// Name: FUN_0042fe90
// Address: 0042fe90
// Address Range: [[0042fe90, 0042ff36]]
// Convention: unknown
// Signature: void FUN_0042fe90(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0042fe90(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  uint auStackY_1028 [1012];
  uint *puVar3;
  uint local_40;
  uint local_34;
  uint local_28;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  bVar2 = 0;
  if (*(int *)(param_1 + 0x2298 + param_2 * 4) == 0) {
    iVar1 = FUN_0040cf40(param_4);
    if (iVar1 != 0) {
      FUN_0054dcc0(param_1 + 0x158,param_3);
      puVar3 = &stack0xfffffff0;
      local_10 = local_34;
      *(uint *)((int)&stack0xfffffff4 + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
      *(uint *)(&stack0xfffffff8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      FUN_00408b80(param_1,puVar3);
      local_40 = local_28;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8);
      *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      local_1c = 0;
      local_18 = 0x40e00000;
      local_14 = 0;
      FUN_004ce8a0(0x01D22E44,&stack0xffffffc0,&stack0xffffffe4,*(uint *)(param_1 + 0x27a0))
      ;
      return;
    }
  }
  return;
}
