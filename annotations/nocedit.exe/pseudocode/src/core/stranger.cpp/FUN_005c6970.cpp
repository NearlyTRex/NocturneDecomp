// Name: core_stranger.cpp_FUN_005c6970
// Address: 005c6970
// Address Range: [[005c6970, 005c6992]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_005c6970(void)

#include "nocturne.h"

void __cdecl core_stranger_cpp_FUN_005c6970(void)

{
  int in_stack_00000004;
  uint *in_stack_00000008;
  
  if ((uint *)(in_stack_00000004 + 0x3fe64) == in_stack_00000008) {
    return;
  }
  *(uint *)(in_stack_00000004 + 0x3fe64) = *in_stack_00000008;
  *(uint *)(in_stack_00000004 + 0x3fe68) = in_stack_00000008[1];
  *(uint *)(in_stack_00000004 + 0x3fe6c) = in_stack_00000008[2];
  return;
}
