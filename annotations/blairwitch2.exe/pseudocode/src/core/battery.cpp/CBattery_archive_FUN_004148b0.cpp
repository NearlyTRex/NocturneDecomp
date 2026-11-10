// Name: core_battery.cpp_CBattery_archive_FUN_004148b0
// Address: 004148b0
// Address Range: [[004148b0, 004148fb]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_archive_FUN_004148b0(CBattery *this_ptr)

#include "nocturne.h"

void __cdecl core_battery_cpp_CBattery_archive_FUN_004148b0(CBattery *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(&this_ptr->model,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->recharge_time,"rechargeTime");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->discharge_time,"dischargeTime");
  return;
}
