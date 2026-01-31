// Name: core_battery.cpp_CBattery_pickup_FUN_00417f40
// Address: 00417f40
// Address Range: [[00417f40, 00417f4e]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_pickup_FUN_00417f40(CBattery *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_battery_cpp_CBattery_pickup_FUN_00417f40(CBattery *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier = carrier;
  return;
}
