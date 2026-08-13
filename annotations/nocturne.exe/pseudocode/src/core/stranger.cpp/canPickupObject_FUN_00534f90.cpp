// Name: core_stranger.cpp_canPickupObject_FUN_00534f90
// Address: 00534f90
// Address Range: [[00534f90, 00534fb8]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_canPickupObject_FUN_00534f90(CDemonActor *actor,CDemonActor *object)

#include "nocturne.h"

int __cdecl core_stranger_cpp_canPickupObject_FUN_00534f90(CDemonActor *actor,CDemonActor *object)

{
  int iVar1;
  
  if (object == (CDemonActor *)0x0) {
    return 0;
  }
  iVar1 = (*((object->vtable)._ub)->canPickup)(object,actor);
  return (uint)(iVar1 == 4);
}
