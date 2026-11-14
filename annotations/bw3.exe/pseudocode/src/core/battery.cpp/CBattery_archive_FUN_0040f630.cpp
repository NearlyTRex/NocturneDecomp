// Name: core_battery.cpp_CBattery_archive_FUN_0040f630
// Address: 0040f630
// Address Range: [[0040f630, 0040f67b]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_archive_FUN_0040f630(CBattery *this_ptr)

#include "nocturne.h"

void __cdecl core_battery_cpp_CBattery_archive_FUN_0040f630(CBattery *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0(&this_ptr->model,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->recharge_time,"rechargeTime");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->discharge_time,"dischargeTime");
  return;
}
