// Name: core_fire.cpp_FUN_004c2170
// Address: 004c2170
// Address Range: [[004c2170, 004c21c2]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004c2170(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_FUN_004c2170(void)

{
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  if (in_stack_00000004 != in_stack_00000008) {
    *in_stack_00000004 = *in_stack_00000008;
    in_stack_00000004[1] = in_stack_00000008[1];
    in_stack_00000004[2] = in_stack_00000008[2];
  }
  if (in_stack_00000004 + 3 != in_stack_0000000c) {
    in_stack_00000004[3] = *in_stack_0000000c;
    in_stack_00000004[4] = in_stack_0000000c[1];
    in_stack_00000004[5] = in_stack_0000000c[2];
  }
  in_stack_00000004[8] = 2;
  in_stack_00000004[6] = in_stack_00000010;
  in_stack_00000004[7] = in_stack_00000014;
  return;
}
