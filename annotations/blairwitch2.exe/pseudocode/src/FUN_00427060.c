// Name: FUN_00427060
// Address: 00427060
// Address Range: [[00427060, 00427123]]
// Convention: unknown
// Signature: void FUN_00427060(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00427060(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  uint auStackY_1040 [1012];
  uint *puVar3;
  uint local_58;
  uint local_4c;
  uint local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_1c;
  uint local_10;
  
  bVar2 = 0;
  if (*(int *)(param_1 + 0x23f4 + param_2 * 4) == 0) {
    iVar1 = FUN_0040d060(param_4);
    if (iVar1 != 0) {
      FUN_00546a90(param_1 + 0x2b4,param_3);
      puVar3 = &stack0xffffffd8;
      local_28 = local_58;
      *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffac + (uint)bVar2 * -8);
      *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffb0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      FUN_00408d70(param_1,puVar3);
      local_10 = local_4c;
      *(uint *)((int)&stack0xfffffff4 + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffb8 + (uint)bVar2 * -8);
      *(uint *)(&stack0xfffffff8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffbc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      local_34 = 0xc0400000;
      local_30 = 0;
      local_2c = 0;
      FUN_00408cf0(param_1,&stack0xffffffcc);
      local_1c = local_40;
      *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8);
      *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      FUN_004c9730(0x01CB8284,&stack0xfffffff0,&stack0xffffffe4,*(uint *)(param_1 + 0x280c))
      ;
      return;
    }
  }
  return;
}
