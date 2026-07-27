// Name: core_bugs.cpp_FUN_00423cc0
// Address: 00423cc0
// Address Range: [[00423cc0, 00423cfc]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_00423cc0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_bugs_cpp_FUN_00423cc0(void)

{
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  
  if (in_stack_00000004 == in_stack_00000008) {
    if (in_stack_00000004 + 3 == in_stack_00000008) {
      return;
    }
  }
  else {
    *in_stack_00000004 = *in_stack_00000008;
    in_stack_00000004[1] = in_stack_00000008[1];
    in_stack_00000004[2] = in_stack_00000008[2];
    if (in_stack_00000004 + 3 == in_stack_00000008) {
      return;
    }
  }
  in_stack_00000004[3] = *in_stack_00000008;
  in_stack_00000004[4] = in_stack_00000008[1];
  in_stack_00000004[5] = in_stack_00000008[2];
  return;
}
