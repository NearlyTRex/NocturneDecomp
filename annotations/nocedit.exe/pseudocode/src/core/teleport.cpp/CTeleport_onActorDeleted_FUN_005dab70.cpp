// Name: core_teleport.cpp_CTeleport_onActorDeleted_FUN_005dab70
// Address: 005dab70
// Address Range: [[005dab70, 005dab9c]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleport_onActorDeleted_FUN_005dab70(CTeleport *this_ptr,CDemonActor *deleted_actor)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_onActorDeleted_FUN_005dab70(CTeleport *this_ptr,CDemonActor *deleted_actor)

{
  core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000(&this_ptr->base,deleted_actor);
  if (this_ptr->destination != deleted_actor) {
    return;
  }
  this_ptr->destination = (CDemonActor *)0x0;
  return;
}
