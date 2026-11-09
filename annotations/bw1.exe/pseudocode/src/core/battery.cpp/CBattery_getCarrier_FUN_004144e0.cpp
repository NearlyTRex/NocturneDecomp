// Name: core_battery.cpp_CBattery_getCarrier_FUN_004144e0
// Address: 004144e0
// Address Range: [[004144e0, 004144ef]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_battery_cpp_CBattery_getCarrier_FUN_004144e0(CBattery *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_battery_cpp_CBattery_getCarrier_FUN_004144e0(CBattery *this_ptr)

{
  return *(CDemonActor **)&this_ptr->field_0x2d4;
}
