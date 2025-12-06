// Name: core_set.cpp_FUN_005714c0
// Address: 005714c0
// Address Range: [[005714c0, 00571504]]
// Convention: unknown
// Signature: undefined core_set.cpp_FUN_005714c0()

#include "nocturne.h"

void core_set_cpp_FUN_005714c0(void)

{
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  
  if (in_stack_00000004 == in_stack_00000008) {
    if (in_stack_00000004 + 3 == in_stack_00000008 + 3) {
      return;
    }
  }
  else {
    *in_stack_00000004 = *in_stack_00000008;
    in_stack_00000004[1] = in_stack_00000008[1];
    in_stack_00000004[2] = in_stack_00000008[2];
    if (in_stack_00000004 + 3 == in_stack_00000008 + 3) {
      return;
    }
  }
  in_stack_00000004[3] = in_stack_00000008[3];
  in_stack_00000004[4] = in_stack_00000008[4];
  in_stack_00000004[5] = in_stack_00000008[5];
  return;
}
