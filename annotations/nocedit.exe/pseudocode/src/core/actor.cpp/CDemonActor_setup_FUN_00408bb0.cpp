// Name: core_actor.cpp_CDemonActor_setup_FUN_00408bb0
// Address: 00408bb0
// Address Range: [[00408bb0, 00408c01]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor *this_ptr)

{
  CPathMap *this_ptr_00;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x23f);
  this_ptr->unk8 = 0;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(this_ptr);
  this_ptr_00 = (*((this_ptr->vtable)._ub)->getPathMap)(this_ptr);
  if (this_ptr_00 == (CPathMap *)0x0) {
    return;
  }
  core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60(this_ptr_00,&(this_ptr->location).position,1);
  return;
}
