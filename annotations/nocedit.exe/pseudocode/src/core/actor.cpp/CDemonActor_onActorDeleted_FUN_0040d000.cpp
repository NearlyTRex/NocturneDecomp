// Name: core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000
// Address: 0040d000
// Address Range: [[0040d000, 0040d030]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000 (CDemonActor *this_ptr,CDemonActor *deleted_actor)

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000
          (CDemonActor *this_ptr,CDemonActor *deleted_actor)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_0000000c;
  
  pCVar1 = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
  if (pCVar1 != in_stack_0000000c) {
    return;
  }
  (*((this_ptr->vtable)._ub)->onDropped)(this_ptr,(CVector3f *)0x0);
  return;
}
