// Name: core_dest.cpp_CActorDestination_setup_FUN_004591b0
// Address: 004591b0
// Address Range: [[004591b0, 004591ee]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_setup_FUN_004591b0(CActorDestination *this_ptr)

#include "nocturne.h"

void __cdecl core_dest_cpp_CActorDestination_setup_FUN_004591b0(CActorDestination *this_ptr)

{
  int iVar1;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  iVar1 = 0x01D81080;
  (this_ptr->base).is_renderable = 0;
  iVar1 = *(int *)(iVar1 + 0x1008);
  this_ptr->triggered = 0;
  this_ptr->needs_actor_search = 1;
  (this_ptr->base).is_transparent = iVar1;
  return;
}
