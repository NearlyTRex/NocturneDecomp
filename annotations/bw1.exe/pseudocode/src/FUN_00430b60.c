// Name: FUN_00430b60
// Address: 00430b60
// Address Range: [[00430b60, 00430c06]]
// Convention: unknown
// Signature: void FUN_00430b60(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00430b60(int param_1,int param_2,uint param_3,uint param_4)

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
    iVar1 = FUN_0040cd00(param_4);
    if (iVar1 != 0) {
      FUN_00569130(param_1 + 0x158,param_3);
      puVar3 = &stack0xfffffff0;
      local_10 = local_34;
      *(uint *)((int)&stack0xfffffff4 + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
      *(uint *)(&stack0xfffffff8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      FUN_00408b40(param_1,puVar3);
      local_40 = local_28;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8);
      *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      local_1c = 0;
      local_18 = 0x40e00000;
      local_14 = 0;
      FUN_004e5f40(0x01CD0E3C,&stack0xffffffc0,&stack0xffffffe4,*(uint *)(param_1 + 0x27a0))
      ;
      return;
    }
  }
  return;
}
