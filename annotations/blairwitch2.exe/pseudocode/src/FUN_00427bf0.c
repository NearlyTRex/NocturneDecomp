// Name: FUN_00427bf0
// Address: 00427bf0
// Address Range: [[00427bf0, 00427c7a]]
// Convention: unknown
// Signature: undefined4 FUN_00427bf0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint FUN_00427bf0(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  uint auStackY_100c [1015];
  uint uStack_24;
  uint uStack_18;
  
  bVar2 = 0;
  if (*(int *)(param_1 + 0x281c) != 0) {
    return 0;
  }
  FUN_00408de0(param_1,param_2);
  uStack_18 = uStack_24;
  *(uint *)((int)&stack0xffffffec + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8);
  *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0xb4))(param_1,&stack0xffffffe8,param_3);
  if (iVar1 == 0) {
    *(uint *)(param_4 + 4) = 0;
    return 0;
  }
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x110))(param_1,param_4);
  return 1;
}
