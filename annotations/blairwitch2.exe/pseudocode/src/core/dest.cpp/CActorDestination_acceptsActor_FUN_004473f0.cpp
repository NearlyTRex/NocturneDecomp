// Name: core_dest.cpp_CActorDestination_acceptsActor_FUN_004473f0
// Address: 004473f0
// Address Range: [[004473f0, 00447442]]
// Convention: __cdecl
// Signature: int __cdecl core_dest_cpp_CActorDestination_acceptsActor_FUN_004473f0(CActorDestination *this_ptr,CDemonActor *actor)

#include "nocturne.h"

int __cdecl core_dest_cpp_CActorDestination_acceptsActor_FUN_004473f0(CActorDestination *this_ptr,CDemonActor *actor)

{
  int iVar1;
  
  if (this_ptr->triggered == 0) {
    if (this_ptr->dest_class[0] == '\0') {
      if (actor == this_ptr->dest_actor) {
        return 1;
      }
    }
    else {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor,this_ptr->dest_class);
      if (iVar1 != 0) {
        this_ptr->dest_actor = actor;
        return 1;
      }
    }
  }
  return 0;
}
