// Name: core_crate.cpp_CCrate_pickup_FUN_00448620
// Address: 00448620
// Address Range: [[00448620, 0044862e]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_pickup_FUN_00448620(CCrate *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_pickup_FUN_00448620(CCrate *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier = carrier;
  return;
}
