// Name: core_manpuz.cpp_CMansionPuzzleCircle_updateReflector_FUN_004cb900
// Address: 004cb900
// Address Range: [[004cb900, 004cb97d]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateReflector_FUN_004cb900(CMansionPuzzleCircle *this_ptr,int reflector_index,float delta_time)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateReflector_FUN_004cb900(CMansionPuzzleCircle *this_ptr,int reflector_index,float delta_time)

{
  float fVar1;
  
  if (this_ptr->panels[this_ptr->reflectors[reflector_index].panel_index].exists == 0) {
    fVar1 = delta_time / 2.0f + this_ptr->reflectors[reflector_index].interp_factor;
    this_ptr->reflectors[reflector_index].interp_factor = fVar1;
    if (1.0 < fVar1) {
      this_ptr->reflectors[reflector_index].interp_factor = 1.0;
      return;
    }
  }
  else {
    fVar1 = this_ptr->reflectors[reflector_index].interp_factor - delta_time / 2.0f;
    this_ptr->reflectors[reflector_index].interp_factor = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->reflectors[reflector_index].interp_factor = 0.0;
      return;
    }
  }
  return;
}
