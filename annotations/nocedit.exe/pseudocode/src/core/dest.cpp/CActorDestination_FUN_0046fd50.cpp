// Name: core_dest.cpp_CActorDestination_FUN_0046fd50
// Address: 0046fd50
// Address Range: [[0046fd50, 0046fda2]]
// Convention: __cdecl
// Signature: int __cdecl core_dest_cpp_CActorDestination_FUN_0046fd50(CActorDestination *this_ptr,CDemonActor *actor)

#include "nocturne.h"

int __cdecl core_dest_cpp_CActorDestination_FUN_0046fd50(CActorDestination *this_ptr,CDemonActor *actor)

{
  int iVar1;
  
  if (this_ptr->triggered == 0) {
    if (this_ptr->dest_class[0] == '\0') {
      if (actor == this_ptr->dest_actor) {
        return 1;
      }
    }
    else {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor,this_ptr->dest_class);
      if (iVar1 != 0) {
        this_ptr->dest_actor = actor;
        return 1;
      }
    }
  }
  return 0;
}
