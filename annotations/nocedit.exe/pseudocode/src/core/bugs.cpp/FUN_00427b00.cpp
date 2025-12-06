// Name: core_bugs.cpp_FUN_00427b00
// Address: 00427b00
// Address Range: [[00427b00, 00427b3c]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00427b00()

#include "nocturne.h"

void core_bugs_cpp_FUN_00427b00(void)

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
