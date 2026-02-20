// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050af00
// Address: 0050af00
// Address Range: [[0050af00, 0050af7d]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050af00(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050af00(CMansionPuzzleCircle *this_ptr)

{
  float fVar1;
  int in_stack_00000008;
  float in_stack_0000000c;
  
  if (this_ptr->panels[this_ptr->reflectors[in_stack_00000008].panel_index].exists == 0) {
    fVar1 = in_stack_0000000c / 2.0f +
            this_ptr->reflectors[in_stack_00000008].interp_factor;
    this_ptr->reflectors[in_stack_00000008].interp_factor = fVar1;
    if (1.0 < fVar1) {
      this_ptr->reflectors[in_stack_00000008].interp_factor = 1.0;
      return;
    }
  }
  else {
    fVar1 = this_ptr->reflectors[in_stack_00000008].interp_factor -
            in_stack_0000000c / 2.0f;
    this_ptr->reflectors[in_stack_00000008].interp_factor = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->reflectors[in_stack_00000008].interp_factor = 0.0;
      return;
    }
  }
  return;
}
