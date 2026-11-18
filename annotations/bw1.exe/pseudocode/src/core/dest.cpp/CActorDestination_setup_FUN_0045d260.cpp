// Name: core_dest.cpp_CActorDestination_setup_FUN_0045d260
// Address: 0045d260
// Address Range: [[0045d260, 0045d29e]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_setup_FUN_0045d260(CActorDestination *this_ptr)

#include "nocturne.h"

void __cdecl core_dest_cpp_CActorDestination_setup_FUN_0045d260(CActorDestination *this_ptr)

{
  int iVar1;
  CDemonMission *pCVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  pCVar2 = g_CDemonMission_PTR_0061f650;
  (this_ptr->base).is_renderable = 0;
  iVar1 = pCVar2->is_in_editor;
  this_ptr->triggered = 0;
  this_ptr->needs_actor_search = 1;
  (this_ptr->base).is_transparent = iVar1;
  return;
}
