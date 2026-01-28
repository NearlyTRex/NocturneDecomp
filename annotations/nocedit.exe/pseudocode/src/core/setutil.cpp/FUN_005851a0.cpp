// Name: core_setutil.cpp_FUN_005851a0
// Address: 005851a0
// Address Range: [[005851a0, 005851c0]]
// Convention: unknown
// Signature: void core_setutil_cpp_FUN_005851a0(void)

#include "nocturne.h"

void core_setutil_cpp_FUN_005851a0(void)

{
  int in_stack_00000004;
  uint *in_stack_00000008;
  
  if ((uint *)(in_stack_00000004 + 4) == in_stack_00000008) {
    return;
  }
  *(uint *)(in_stack_00000004 + 4) = *in_stack_00000008;
  *(uint *)(in_stack_00000004 + 8) = in_stack_00000008[1];
  *(uint *)(in_stack_00000004 + 0xc) = in_stack_00000008[2];
  return;
}
