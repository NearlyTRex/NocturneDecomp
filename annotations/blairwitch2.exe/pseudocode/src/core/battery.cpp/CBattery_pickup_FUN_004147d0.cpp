// Name: core_battery.cpp_CBattery_pickup_FUN_004147d0
// Address: 004147d0
// Address Range: [[004147d0, 004147de]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_pickup_FUN_004147d0(CBattery *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_battery_cpp_CBattery_pickup_FUN_004147d0(CBattery *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier = carrier;
  return;
}
