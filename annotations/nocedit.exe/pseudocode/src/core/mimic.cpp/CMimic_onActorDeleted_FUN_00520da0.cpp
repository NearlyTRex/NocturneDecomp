// Name: core_mimic.cpp_CMimic_onActorDeleted_FUN_00520da0
// Address: 00520da0
// Address Range: [[00520da0, 00520dc4]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_onActorDeleted_FUN_00520da0(CMimic *this_ptr,CDemonActor *deleted_actor)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_onActorDeleted_FUN_00520da0(CMimic *this_ptr,CDemonActor *deleted_actor)

{
  if (deleted_actor == this_ptr->mirror_plane_actor) {
    this_ptr->mirror_plane_actor = (CDemonActor *)0x0;
  }
  core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0((CCharacter *)this_ptr,deleted_actor);
  return;
}
