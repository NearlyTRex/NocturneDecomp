// Name: core_actor.cpp_CDemonActor_setup_FUN_00409fc0
// Address: 00409fc0
// Address Range: [[00409fc0, 00409ffe]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor *this_ptr)

{
  CPathMap *this_ptr_00;
  
  this_ptr->blood_effect_timer = 0;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(this_ptr);
  this_ptr_00 = (*((this_ptr->vtable)._ub)->getPathMap)(this_ptr);
  if (this_ptr_00 == (CPathMap *)0x0) {
    return;
  }
  core_path_cpp_CPathMap_updateIfNeeded_FUN_004f0360(this_ptr_00,&(this_ptr->location).position,1);
  return;
}
