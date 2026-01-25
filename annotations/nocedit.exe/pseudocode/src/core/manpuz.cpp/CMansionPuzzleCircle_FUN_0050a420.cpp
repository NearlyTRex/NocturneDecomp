// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a420
// Address: 0050a420
// Address Range: [[0050a420, 0050a48d]]
// Convention: __cdecl
// Signature: void core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a420(CMansionPuzzleCircle * this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a420(CMansionPuzzleCircle *this_ptr)

{
  int in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  float *in_stack_00000014;
  
  *in_stack_00000014 = 0.0;
  *in_stack_00000010 = *in_stack_00000014;
  *in_stack_0000000c = *in_stack_00000010;
  if ((*(int *)(this_ptr->field6_0x5f4 + in_stack_00000008 * 100 + -4) != 0) &&
     ((*(uint *)(this_ptr->field6_0x5f4 + in_stack_00000008 * 100 + 4) & 0x7fffffff) == 0)) {
    *in_stack_0000000c = (float)*(int *)(this_ptr->field10_0x648 + in_stack_00000008 * 100 + -0xc);
    *in_stack_00000010 = (float)*(int *)(this_ptr->field10_0x648 + in_stack_00000008 * 100 + -8);
    *in_stack_00000014 = (float)*(int *)(this_ptr->field10_0x648 + in_stack_00000008 * 100 + -4);
    return;
  }
  return;
}
