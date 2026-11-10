// Name: core_trap.cpp_CTrap_pickup_FUN_00599dc0
// Address: 00599dc0
// Address Range: [[00599dc0, 00599dce]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_pickup_FUN_00599dc0(CTrap *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_pickup_FUN_00599dc0(CTrap *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier = carrier;
  return;
}
