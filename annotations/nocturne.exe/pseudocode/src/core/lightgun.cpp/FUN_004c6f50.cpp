// Name: core_lightgun.cpp_FUN_004c6f50
// Address: 004c6f50
// Address Range: [[004c6f50, 004c6fe9]]
// Convention: unknown
// Signature: undefined4 core_lightgun_cpp_FUN_004c6f50(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_lightgun_cpp_FUN_004c6f50(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = (**(code **)(*(int *)(in_stack_00000004 + 0x14c) + 0xd8))();
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0();
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0();
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0();
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0();
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
