// Name: core_trap.cpp_CTrap_pickup_FUN_00576500
// Address: 00576500
// Address Range: [[00576500, 0057650e]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_pickup_FUN_00576500(CTrap *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_pickup_FUN_00576500(CTrap *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier = carrier;
  return;
}
