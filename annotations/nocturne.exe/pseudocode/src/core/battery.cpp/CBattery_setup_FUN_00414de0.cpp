// Name: core_battery.cpp_CBattery_setup_FUN_00414de0
// Address: 00414de0
// Address Range: [[00414de0, 00414e08]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_setup_FUN_00414de0(CBattery *this_ptr)

#include "nocturne.h"

void __cdecl core_battery_cpp_CBattery_setup_FUN_00414de0(CBattery *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
