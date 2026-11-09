// Name: core_vessel.cpp_CCryptVessel_pickup_FUN_005a8e00
// Address: 005a8e00
// Address Range: [[005a8e00, 005a8e0e]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_pickup_FUN_005a8e00(CCryptVessel *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_pickup_FUN_005a8e00(CCryptVessel *this_ptr,CDemonActor *carrier)

{
  *(CDemonActor **)&this_ptr->field_0x2d4 = carrier;
  return;
}
