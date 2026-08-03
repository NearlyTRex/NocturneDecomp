// Name: core_vessel.cpp_CCryptVessel_pickup_FUN_0054fc00
// Address: 0054fc00
// Address Range: [[0054fc00, 0054fc0e]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_pickup_FUN_0054fc00(CCryptVessel *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_pickup_FUN_0054fc00(CCryptVessel *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier = carrier;
  return;
}
