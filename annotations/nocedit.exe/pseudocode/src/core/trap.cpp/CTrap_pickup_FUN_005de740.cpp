// Name: core_trap.cpp_CTrap_pickup_FUN_005de740
// Address: 005de740
// Address Range: [[005de740, 005de74e]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_pickup_FUN_005de740(CTrap *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_pickup_FUN_005de740(CTrap *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier = carrier;
  return;
}
