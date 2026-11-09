// Name: unkaddr_0059aa80.cpp_FUN_0059ad20
// Address: 0059ad20
// Address Range: [[0059ad20, 0059ad91]]
// Convention: unknown
// Signature: void unkaddr_0059aa80_cpp_FUN_0059ad20(int param_1,int param_2)

#include "nocturne.h"

void unkaddr_0059aa80_cpp_FUN_0059ad20(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = core_actor_cpp_FUN_0040cfc0(10,DAT_006141b8 + -0x14);
  *(int *)(param_1 + 4) = iVar1;
  iVar1 = core_actor_cpp_FUN_0040cfc0(10,DAT_006141bc + -0x14);
  *(int *)(param_1 + 8) = iVar1;
  iVar1 = core_actor_cpp_FUN_0040cfc0(*(int *)(param_1 + 4) + 5,DAT_006141b8 + -10);
  *(int *)(param_1 + 0xc) = iVar1;
  iVar1 = core_actor_cpp_FUN_0040cfc0(*(int *)(param_1 + 8) + 5,DAT_006141bc + -10);
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}
