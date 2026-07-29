// Name: core_battery.cpp_CBattery_pickup_FUN_00414e30
// Address: 00414e30
// Address Range: [[00414e30, 00414e3e]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_pickup_FUN_00414e30(CBattery *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_battery_cpp_CBattery_pickup_FUN_00414e30(CBattery *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier = carrier;
  return;
}
