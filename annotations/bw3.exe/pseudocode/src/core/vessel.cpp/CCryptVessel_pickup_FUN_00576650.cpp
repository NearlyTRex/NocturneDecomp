// Name: core_vessel.cpp_CCryptVessel_pickup_FUN_00576650
// Address: 00576650
// Address Range: [[00576650, 0057665e]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_pickup_FUN_00576650(CCryptVessel *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_pickup_FUN_00576650(CCryptVessel *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier = carrier;
  return;
}
