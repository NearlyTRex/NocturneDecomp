// Name: core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000
// Address: 0040d000
// Address Range: [[0040d000, 0040d030]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000(CDemonActor * this_ptr, CDemonActor * deleted_actor)

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000
          (CDemonActor *this_ptr,CDemonActor *deleted_actor)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000014;
  
  pCVar1 = (*this_ptr->vtable->getCarrier)(this_ptr);
  if (pCVar1 != in_stack_00000014) {
    return;
  }
  (*this_ptr->vtable->onDropped)(this_ptr,(CVector3f *)0x0);
  return;
}
