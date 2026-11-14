// Name: core_crate.cpp_CCrate_pickup_FUN_00445d30
// Address: 00445d30
// Address Range: [[00445d30, 00445d3e]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_pickup_FUN_00445d30(CCrate *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_pickup_FUN_00445d30(CCrate *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier = carrier;
  return;
}
