// Name: core_actor.cpp_CActorPropertyList_FUN_0040e770
// Address: 0040e770
// Address Range: [[0040e770, 0040e840]]
// Convention: unknown
// Signature: undefined core_actor.cpp_CActorPropertyList_FUN_0040e770()

#include "nocturne.h"

void core_actor_cpp_CActorPropertyList_FUN_0040e770(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  int local_14;
  
  iVar2 = 0;
  iVar3 = 0;
  local_14 = 0;
  if (0 < *(int *)(in_stack_00000004 + 4)) {
    do {
      iVar1 = core_actor_cpp_FUN_0040ee30();
      if (iVar2 < iVar1) {
        iVar2 = iVar1;
      }
      iVar1 = core_actor_cpp_FUN_0040ee50();
      if (local_14 < iVar1) {
        local_14 = iVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_stack_00000004 + 4));
  }
  iVar3 = engine_2d_c_getStringWidth_FUN_004018a0(": ");
  *(int *)(in_stack_00000004 + 0x24f0) = in_stack_00000008 + iVar2 + iVar3 + 2;
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(": ");
  *(int *)(in_stack_00000004 + 0x24f4) = *(int *)(in_stack_00000004 + 0x24f0) + iVar1;
  *(int *)(in_stack_00000004 + 0x24f8) = in_stack_00000008;
  *(uint *)(in_stack_00000004 + 0x24fc) = in_stack_00000010;
  *(int *)(in_stack_00000004 + 0x2500) = in_stack_0000000c + 3;
  *(int *)(in_stack_00000004 + 0x24e8) = local_14 + iVar2 + iVar3;
  *(int *)(in_stack_00000004 + 0x24ec) = *(int *)(in_stack_00000004 + 4) * 0xe + 6;
  return;
}
