// Name: core_manpuz.cpp_FUN_0050a420
// Address: 0050a420
// Address Range: [[0050a420, 0050a48d]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050a420()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_0050a420(uint param_1, uint
   param_2, uint param_3, uint param_4, uint param_5) */

void core_manpuz_cpp_FUN_0050a420(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  float *in_stack_00000014;
  
  *in_stack_00000014 = 0.0;
  *in_stack_00000010 = *in_stack_00000014;
  *in_stack_0000000c = *in_stack_00000010;
  in_stack_00000004 = in_stack_00000008 * 100 + in_stack_00000004;
  if ((*(int *)(in_stack_00000004 + 0x5f0) != 0) &&
     ((*(uint *)(in_stack_00000004 + 0x5f8) & 0x7fffffff) == 0)) {
    *in_stack_0000000c = (float)*(int *)(in_stack_00000004 + 0x63c);
    *in_stack_00000010 = (float)*(int *)(in_stack_00000004 + 0x640);
    *in_stack_00000014 = (float)*(int *)(in_stack_00000004 + 0x644);
    return;
  }
  return;
}
