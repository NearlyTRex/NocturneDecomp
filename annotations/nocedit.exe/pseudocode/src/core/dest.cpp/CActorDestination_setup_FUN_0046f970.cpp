// Name: core_dest.cpp_CActorDestination_setup_FUN_0046f970
// Address: 0046f970
// Address Range: [[0046f970, 0046f9ab]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_setup_FUN_0046f970(CActorDestination *this_ptr)

#include "nocturne.h"

void __cdecl core_dest_cpp_CActorDestination_setup_FUN_0046f970(CActorDestination *this_ptr)

{
  int iVar1;
  CDemonMission *pCVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  pCVar2 = g_CDemonMissionPtr;
  (this_ptr->base).is_renderable = 0;
  iVar1 = pCVar2->is_in_editor;
  this_ptr->triggered = 0;
  this_ptr->needs_actor_search = 1;
  (this_ptr->base).is_transparent = iVar1;
  return;
}
