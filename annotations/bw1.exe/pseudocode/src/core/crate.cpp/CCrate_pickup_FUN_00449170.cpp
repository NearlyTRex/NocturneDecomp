// Name: core_crate.cpp_CCrate_pickup_FUN_00449170
// Address: 00449170
// Address Range: [[00449170, 0044917e]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_pickup_FUN_00449170(CCrate *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_pickup_FUN_00449170(CCrate *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier = carrier;
  return;
}
