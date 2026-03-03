// Name: core_stranger.cpp_canPickupObject_FUN_005bafe0
// Address: 005bafe0
// Address Range: [[005bafe0, 005bb008]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_canPickupObject_FUN_005bafe0(CDemonActor *actor,CDemonActor *object)

#include "nocturne.h"

int __cdecl core_stranger_cpp_canPickupObject_FUN_005bafe0(CDemonActor *actor,CDemonActor *object)

{
  int iVar1;
  
  if (object == (CDemonActor *)0x0) {
    return 0;
  }
  iVar1 = (*((object->vtable)._ub)->canPickup)(object,actor);
  return (uint)(iVar1 == 4);
}
