// Name: core_dest.cpp_CActorDestination_setup_FUN_00447100
// Address: 00447100
// Address Range: [[00447100, 0044713e]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_setup_FUN_00447100(CActorDestination *this_ptr)

#include "nocturne.h"

void __cdecl core_dest_cpp_CActorDestination_setup_FUN_00447100(CActorDestination *this_ptr)

{
  int iVar1;
  CDemonMission *pCVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  pCVar2 = g_CDemonMission_PTR_00618170;
  (this_ptr->base).is_renderable = 0;
  iVar1 = pCVar2->is_in_editor;
  this_ptr->triggered = 0;
  this_ptr->needs_actor_search = 1;
  (this_ptr->base).is_transparent = iVar1;
  return;
}
