// Name: core_actor.cpp_deleteActor_FUN_004085a0
// Address: 004085a0
// Address Range: [[004085a0, 004085bd]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_deleteActor_FUN_004085a0(CDemonActor *actor_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_deleteActor_FUN_004085a0(CDemonActor *actor_ptr)

{
  if (actor_ptr == (CDemonActor *)0x0) {
    return;
  }
  (*((actor_ptr->vtable)._ub)->dtor)(actor_ptr,2);
  return;
}
