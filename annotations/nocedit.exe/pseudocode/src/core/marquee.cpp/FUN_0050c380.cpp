// Name: core_marquee.cpp_FUN_0050c380
// Address: 0050c380
// Address Range: [[0050c380, 0050c3d2]]
// Convention: unknown
// Signature: void core_marquee_cpp_FUN_0050c380(void)

#include "nocturne.h"

/* Signature: byte actors_other_marquee.cpp_FUN_0050c380(uint param_1, uint
   param_2) */

void core_marquee_cpp_FUN_0050c380(void)

{
  int in_stack_00000004;
  uint *in_stack_00000008;
  
  if (in_stack_00000008 == (uint *)(in_stack_00000004 + 0x184)) {
    if (in_stack_00000008 + 3 == (uint *)(in_stack_00000004 + 400)) {
      return;
    }
  }
  else {
    *in_stack_00000008 = *(uint *)(in_stack_00000004 + 0x184);
    in_stack_00000008[1] = *(uint *)(in_stack_00000004 + 0x188);
    in_stack_00000008[2] = *(uint *)(in_stack_00000004 + 0x18c);
    if (in_stack_00000008 + 3 == (uint *)(in_stack_00000004 + 400)) {
      return;
    }
  }
  in_stack_00000008[3] = *(uint *)(in_stack_00000004 + 400);
  in_stack_00000008[4] = *(uint *)(in_stack_00000004 + 0x194);
  in_stack_00000008[5] = *(uint *)(in_stack_00000004 + 0x198);
  return;
}
