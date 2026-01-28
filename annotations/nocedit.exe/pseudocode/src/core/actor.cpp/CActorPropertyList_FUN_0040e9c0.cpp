// Name: core_actor.cpp_CActorPropertyList_FUN_0040e9c0
// Address: 0040e9c0
// Address Range: [[0040e9c0, 0040e9fe]]
// Convention: unknown
// Signature: int core_actor_cpp_CActorPropertyList_FUN_0040e9c0(void)

#include "nocturne.h"

int core_actor_cpp_CActorPropertyList_FUN_0040e9c0(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  iVar1 = (in_stack_0000000c - *(int *)(in_stack_00000004 + 0x2500)) / 0xe;
  if ((((iVar1 < 0) || (*(int *)(in_stack_00000004 + 4) <= iVar1)) ||
      (in_stack_00000008 < *(int *)(in_stack_00000004 + 0x24f8))) ||
     (*(int *)(in_stack_00000004 + 0x24fc) < in_stack_00000008)) {
    iVar1 = -1;
  }
  return iVar1;
}
