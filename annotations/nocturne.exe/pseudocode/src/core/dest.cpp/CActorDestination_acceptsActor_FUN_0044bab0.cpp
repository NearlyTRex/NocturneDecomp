// Name: core_dest.cpp_CActorDestination_acceptsActor_FUN_0044bab0
// Address: 0044bab0
// Address Range: [[0044bab0, 0044bb02]]
// Convention: __cdecl
// Signature: int __cdecl core_dest_cpp_CActorDestination_acceptsActor_FUN_0044bab0(CActorDestination *this_ptr,CDemonActor *actor)

#include "nocturne.h"

int __cdecl core_dest_cpp_CActorDestination_acceptsActor_FUN_0044bab0(CActorDestination *this_ptr,CDemonActor *actor)

{
  int iVar1;
  
  if (this_ptr->triggered == 0) {
    if (this_ptr->dest_class[0] == '\0') {
      if (actor == this_ptr->dest_actor) {
        return 1;
      }
    }
    else {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor,this_ptr->dest_class);
      if (iVar1 != 0) {
        this_ptr->dest_actor = actor;
        return 1;
      }
    }
  }
  return 0;
}
