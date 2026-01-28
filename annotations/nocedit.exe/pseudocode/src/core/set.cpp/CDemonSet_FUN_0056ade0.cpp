// Name: core_set.cpp_CDemonSet_FUN_0056ade0
// Address: 0056ade0
// Address Range: [[0056ade0, 0056ae42]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_0056ade0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056ade0(CDemonSet *this_ptr)

{
  int in_stack_00000008;
  
  *(uint *)(in_stack_00000008 + 0x140) = 0x1f;
  if ((uint *)(in_stack_00000008 + 0x128) != (uint *)(in_stack_00000008 + 0x20)) {
    *(uint *)(in_stack_00000008 + 0x128) = *(uint *)(in_stack_00000008 + 0x20);
    *(uint *)(in_stack_00000008 + 300) = *(uint *)(in_stack_00000008 + 0x24);
    *(uint *)(in_stack_00000008 + 0x130) = *(uint *)(in_stack_00000008 + 0x28);
  }
  if ((uint *)(in_stack_00000008 + 0x134) == (uint *)(in_stack_00000008 + 0x30)) {
    *(uint *)(in_stack_00000008 + 0x144) = 0;
    return;
  }
  *(uint *)(in_stack_00000008 + 0x134) = *(uint *)(in_stack_00000008 + 0x30);
  *(uint *)(in_stack_00000008 + 0x138) = *(uint *)(in_stack_00000008 + 0x34);
  *(uint *)(in_stack_00000008 + 0x13c) = *(uint *)(in_stack_00000008 + 0x38);
  *(uint *)(in_stack_00000008 + 0x144) = 0;
  return;
}
