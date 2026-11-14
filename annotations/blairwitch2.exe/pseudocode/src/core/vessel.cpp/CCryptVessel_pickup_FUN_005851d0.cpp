// Name: core_vessel.cpp_CCryptVessel_pickup_FUN_005851d0
// Address: 005851d0
// Address Range: [[005851d0, 005851de]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_pickup_FUN_005851d0(CCryptVessel *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_pickup_FUN_005851d0(CCryptVessel *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier = carrier;
  return;
}
