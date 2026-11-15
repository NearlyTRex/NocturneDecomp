// Name: core_actor.cpp_deleteActor_FUN_00408560
// Address: 00408560
// Address Range: [[00408560, 0040857d]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_deleteActor_FUN_00408560(CDemonActor *actor_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_deleteActor_FUN_00408560(CDemonActor *actor_ptr)

{
  if (actor_ptr == (CDemonActor *)0x0) {
    return;
  }
  (*((actor_ptr->vtable)._ub)->dtor)(actor_ptr,2);
  return;
}
