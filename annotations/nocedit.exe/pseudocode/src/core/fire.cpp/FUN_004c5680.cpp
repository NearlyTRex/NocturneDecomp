// Name: core_fire.cpp_FUN_004c5680
// Address: 004c5680
// Address Range: [[004c5680, 004c56dd]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004c5680()

#include "nocturne.h"

void core_fire_cpp_FUN_004c5680(void)

{
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  if (in_stack_00000004 + 1 != in_stack_00000008) {
    in_stack_00000004[1] = *in_stack_00000008;
    in_stack_00000004[2] = in_stack_00000008[1];
    in_stack_00000004[3] = in_stack_00000008[2];
  }
  if (in_stack_00000004 + 7 != in_stack_0000000c) {
    in_stack_00000004[7] = *in_stack_0000000c;
    in_stack_00000004[8] = in_stack_0000000c[1];
    in_stack_00000004[9] = in_stack_0000000c[2];
  }
  *in_stack_00000004 = 1;
  in_stack_00000004[5] = 0x3e800000;
  in_stack_00000004[6] = in_stack_00000010;
  in_stack_00000004[10] = in_stack_00000014;
  return;
}
