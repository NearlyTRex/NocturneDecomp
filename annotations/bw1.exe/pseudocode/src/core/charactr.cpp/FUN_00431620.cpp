// Name: core_charactr.cpp_FUN_00431620
// Address: 00431620
// Address Range: [[00431620, 004316aa]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_00431620(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint core_charactr_cpp_FUN_00431620(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  uint auStackY_100c [1015];
  uint uStack_24;
  uint uStack_18;
  
  bVar2 = 0;
  if (*(int *)(param_1 + 0x27b0) != 0) {
    return 0;
  }
  core_actor_cpp_FUN_00408bb0(param_1,param_2);
  uStack_18 = uStack_24;
  *(uint *)((int)&stack0xffffffec + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8);
  *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0xac))(param_1,&stack0xffffffe8,param_3);
  if (iVar1 == 0) {
    *(uint *)(param_4 + 4) = 0;
    return 0;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x108))(param_1,param_4);
  return 1;
}
