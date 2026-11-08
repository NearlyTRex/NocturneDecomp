// Name: FUN_00427130
// Address: 00427130
// Address Range: [[00427130, 004271d6]]
// Convention: unknown
// Signature: void FUN_00427130(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00427130(int param_1,int param_2,uint param_3,uint param_4)

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
  if (*(int *)(param_1 + 0x23f4 + param_2 * 4) == 0) {
    iVar1 = FUN_0040d060(param_4);
    if (iVar1 != 0) {
      FUN_00546a90(param_1 + 0x2b4,param_3);
      puVar3 = &stack0xfffffff0;
      local_10 = local_34;
      *(uint *)((int)&stack0xfffffff4 + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
      *(uint *)(&stack0xfffffff8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      FUN_00408d70(param_1,puVar3);
      local_40 = local_28;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8);
      *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      local_1c = 0;
      local_18 = 0x40e00000;
      local_14 = 0;
      FUN_004c9730(0x01CB8284,&stack0xffffffc0,&stack0xffffffe4,*(uint *)(param_1 + 0x280c))
      ;
      return;
    }
  }
  return;
}
