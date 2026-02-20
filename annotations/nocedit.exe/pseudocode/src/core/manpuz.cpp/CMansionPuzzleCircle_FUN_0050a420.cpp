// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a420
// Address: 0050a420
// Address Range: [[0050a420, 0050a48d]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a420(CMansionPuzzleCircle *this_ptr)

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
  if ((this_ptr->panels[in_stack_00000008].exists != 0) &&
     (ABS(this_ptr->panels[in_stack_00000008].anim_speed) == 0.0)) {
    *in_stack_0000000c = (float)this_ptr->panels[in_stack_00000008].color.r;
    *in_stack_00000010 = (float)this_ptr->panels[in_stack_00000008].color.g;
    *in_stack_00000014 = (float)this_ptr->panels[in_stack_00000008].color.b;
    return;
  }
  return;
}
