// Name: core_battery.cpp_CBattery_setup_FUN_00417ef0
// Address: 00417ef0
// Address Range: [[00417ef0, 00417efa]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_setup_FUN_00417ef0(CBattery *this_ptr)

#include "nocturne.h"

void __cdecl core_battery_cpp_CBattery_setup_FUN_00417ef0(CBattery *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
