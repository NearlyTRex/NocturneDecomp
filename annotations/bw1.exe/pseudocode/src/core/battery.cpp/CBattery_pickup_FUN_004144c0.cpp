// Name: core_battery.cpp_CBattery_pickup_FUN_004144c0
// Address: 004144c0
// Address Range: [[004144c0, 004144ce]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_pickup_FUN_004144c0(CBattery *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_battery_cpp_CBattery_pickup_FUN_004144c0(CBattery *this_ptr,CDemonActor *carrier)

{
  *(CDemonActor **)&this_ptr->field_0x2d4 = carrier;
  return;
}
