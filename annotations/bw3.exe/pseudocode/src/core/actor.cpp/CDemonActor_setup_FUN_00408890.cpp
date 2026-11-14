// Name: core_actor.cpp_CDemonActor_setup_FUN_00408890
// Address: 00408890
// Address Range: [[00408890, 004088cf] [004088d1, 004088e1]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_setup_FUN_00408890(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_setup_FUN_00408890(CDemonActor *this_ptr)

{
  CPathMap *this_ptr_00;
  
  this_ptr->blood_effect_timer = 0;
  this_ptr->footstep_particle_count = 0;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(this_ptr);
  this_ptr_00 = (*((this_ptr->vtable)._ub)->getPathMap)(this_ptr);
  if (this_ptr_00 == (CPathMap *)0x0) {
    return;
  }
  core_path_cpp_CPathMap_updateIfNeeded_FUN_0050b1d0(this_ptr_00,&(this_ptr->location).position,1);
  return;
}
