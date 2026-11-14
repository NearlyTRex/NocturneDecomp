// Name: core_crate.cpp_CCrate_pickup_FUN_00439ec0
// Address: 00439ec0
// Address Range: [[00439ec0, 00439ece]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_pickup_FUN_00439ec0(CCrate *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_pickup_FUN_00439ec0(CCrate *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier = carrier;
  return;
}
