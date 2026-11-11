// Name: core_manpuz.cpp_CMansionPuzzleCircle_updateReflector_FUN_004e7580
// Address: 004e7580
// Address Range: [[004e7580, 004e75fd]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateReflector_FUN_004e7580(CMansionPuzzleCircle *this_ptr,int reflector_index,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateReflector_FUN_004e7580(CMansionPuzzleCircle *this_ptr,int reflector_index,float delta_time)

{
  float fVar1;
  
  if (this_ptr->panels[this_ptr->reflectors[reflector_index].panel_index].exists == 0) {
    fVar1 = delta_time / _DAT_005f98cc + this_ptr->reflectors[reflector_index].interp_factor;
    this_ptr->reflectors[reflector_index].interp_factor = fVar1;
    if (1.0 < fVar1) {
      this_ptr->reflectors[reflector_index].interp_factor = 1.0;
      return;
    }
  }
  else {
    fVar1 = this_ptr->reflectors[reflector_index].interp_factor - delta_time / _DAT_005f98cc;
    this_ptr->reflectors[reflector_index].interp_factor = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->reflectors[reflector_index].interp_factor = 0.0;
      return;
    }
  }
  return;
}
