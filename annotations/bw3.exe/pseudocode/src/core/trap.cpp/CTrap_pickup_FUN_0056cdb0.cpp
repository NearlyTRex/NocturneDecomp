// Name: core_trap.cpp_CTrap_pickup_FUN_0056cdb0
// Address: 0056cdb0
// Address Range: [[0056cdb0, 0056cdbe]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_pickup_FUN_0056cdb0(CTrap *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_pickup_FUN_0056cdb0(CTrap *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier = carrier;
  return;
}
