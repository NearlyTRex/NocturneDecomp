// Name: core_stranger.cpp_FUN_00540a40
// Address: 00540a40
// Address Range: [[00540a40, 00540a62]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_00540a40(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_stranger_cpp_FUN_00540a40(void)

{
  int in_stack_00000004;
  uint *in_stack_00000008;
  
  if ((uint *)(in_stack_00000004 + 0x3ab24) == in_stack_00000008) {
    return;
  }
  *(uint *)(in_stack_00000004 + 0x3ab24) = *in_stack_00000008;
  *(uint *)(in_stack_00000004 + 0x3ab28) = in_stack_00000008[1];
  *(uint *)(in_stack_00000004 + 0x3ab2c) = in_stack_00000008[2];
  return;
}
