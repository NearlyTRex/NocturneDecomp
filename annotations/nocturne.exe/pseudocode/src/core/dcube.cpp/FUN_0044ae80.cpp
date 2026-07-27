// Name: core_dcube.cpp_FUN_0044ae80
// Address: 0044ae80
// Address Range: [[0044ae80, 0044aecd]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_0044ae80(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_dcube_cpp_FUN_0044ae80(void)

{
  int in_stack_00000004;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  
  if ((uint *)(in_stack_00000004 + 8) == in_stack_00000008) {
    if ((uint *)(in_stack_00000004 + 0x14) == in_stack_0000000c) {
      return;
    }
  }
  else {
    *(uint *)(in_stack_00000004 + 8) = *in_stack_00000008;
    *(uint *)(in_stack_00000004 + 0xc) = in_stack_00000008[1];
    *(uint *)(in_stack_00000004 + 0x10) = in_stack_00000008[2];
    if ((uint *)(in_stack_00000004 + 0x14) == in_stack_0000000c) {
      return;
    }
  }
  *(uint *)(in_stack_00000004 + 0x14) = *in_stack_0000000c;
  *(uint *)(in_stack_00000004 + 0x18) = in_stack_0000000c[1];
  *(uint *)(in_stack_00000004 + 0x1c) = in_stack_0000000c[2];
  return;
}
