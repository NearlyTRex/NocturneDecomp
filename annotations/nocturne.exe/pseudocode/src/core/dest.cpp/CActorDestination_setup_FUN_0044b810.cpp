// Name: core_dest.cpp_CActorDestination_setup_FUN_0044b810
// Address: 0044b810
// Address Range: [[0044b810, 0044b84b]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_setup_FUN_0044b810(CActorDestination *this_ptr)

#include "nocturne.h"

void __cdecl core_dest_cpp_CActorDestination_setup_FUN_0044b810(CActorDestination *this_ptr)

{
  int iVar1;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  iVar1 = 0x01CC9450;
  (this_ptr->base).is_renderable = 0;
  iVar1 = *(int *)(iVar1 + 4);
  this_ptr->triggered = 0;
  this_ptr->needs_actor_search = 1;
  (this_ptr->base).is_transparent = iVar1;
  return;
}
