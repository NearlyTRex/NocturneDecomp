// Name: core_battery.cpp_CBattery_setup_FUN_0040f500
// Address: 0040f500
// Address Range: [[0040f500, 0040f528]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_setup_FUN_0040f500(CBattery *this_ptr)

#include "nocturne.h"

void __cdecl core_battery_cpp_CBattery_setup_FUN_0040f500(CBattery *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->model);
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
