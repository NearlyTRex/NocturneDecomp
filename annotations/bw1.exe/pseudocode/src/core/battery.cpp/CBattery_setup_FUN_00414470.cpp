// Name: core_battery.cpp_CBattery_setup_FUN_00414470
// Address: 00414470
// Address Range: [[00414470, 00414498]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_setup_FUN_00414470(CBattery *this_ptr)

#include "nocturne.h"

void __cdecl core_battery_cpp_CBattery_setup_FUN_00414470(CBattery *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
