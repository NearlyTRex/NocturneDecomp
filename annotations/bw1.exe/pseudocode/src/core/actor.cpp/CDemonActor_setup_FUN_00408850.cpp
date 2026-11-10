// Name: core_actor.cpp_CDemonActor_setup_FUN_00408850
// Address: 00408850
// Address Range: [[00408850, 0040888f] [00408891, 004088a1]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_setup_FUN_00408850(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_setup_FUN_00408850(CDemonActor *this_ptr)

{
  CPathMap *this_ptr_00;
  
  this_ptr->blood_effect_timer = 0;
  this_ptr->footstep_sound_code[0] = '\0';
  this_ptr->footstep_sound_code[1] = '\0';
  this_ptr->footstep_sound_code[2] = '\0';
  this_ptr->footstep_sound_code[3] = '\0';
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(this_ptr);
  this_ptr_00 = (*((this_ptr->vtable)._ub)->getPathMap)(this_ptr);
  if (this_ptr_00 == (CPathMap *)0x0) {
    return;
  }
  core_path_cpp_CPathMap_updateIfNeeded_FUN_005334f0(this_ptr_00,&(this_ptr->location).position,1);
  return;
}
