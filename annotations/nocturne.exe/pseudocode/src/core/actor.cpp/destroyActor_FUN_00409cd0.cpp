// Name: core_actor.cpp_destroyActor_FUN_00409cd0
// Address: 00409cd0
// Address Range: [[00409cd0, 00409ced]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_destroyActor_FUN_00409cd0(CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_actor_cpp_destroyActor_FUN_00409cd0(CDemonActor *actor)

{
  if (actor == (CDemonActor *)0x0) {
    return;
  }
  (*((actor->vtable)._ub)->dtor)(actor,2);
  return;
}
