// Name: core_stranger.cpp_FUN_005bafe0
// Address: 005bafe0
// Address Range: [[005bafe0, 005bb008]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005bafe0()

#include "nocturne.h"

bool core_stranger_cpp_FUN_005bafe0(void)

{
  int iVar1;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    return false;
  }
  iVar1 = (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x7c))();
  return iVar1 == 4;
}
