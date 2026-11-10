// Name: core_battery.cpp_CBattery_pickup_FUN_0040f550
// Address: 0040f550
// Address Range: [[0040f550, 0040f55e]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_pickup_FUN_0040f550(CBattery *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_battery_cpp_CBattery_pickup_FUN_0040f550(CBattery *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier = carrier;
  return;
}
