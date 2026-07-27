// Name: core_platfrm.cpp_FUN_004f76c0
// Address: 004f76c0
// Address Range: [[004f76c0, 004f76f1]]
// Convention: unknown
// Signature: void core_platfrm_cpp_FUN_004f76c0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_platfrm_cpp_FUN_004f76c0(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = in_stack_00000004 + 0x208;
  do {
    while (in_stack_00000008 == *(int *)(in_stack_00000004 + 0x514)) {
      *(uint *)(in_stack_00000004 + 0x514) = 0;
      in_stack_00000004 = in_stack_00000004 + 0x34;
      if (in_stack_00000004 == iVar1) {
        return;
      }
    }
    in_stack_00000004 = in_stack_00000004 + 0x34;
  } while (in_stack_00000004 != iVar1);
  return;
}
