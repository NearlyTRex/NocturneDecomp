// Name: core_trap.cpp_CTrap_pickup_FUN_005468d0
// Address: 005468d0
// Address Range: [[005468d0, 005468de]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_pickup_FUN_005468d0(CTrap *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_pickup_FUN_005468d0(CTrap *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier = carrier;
  return;
}
