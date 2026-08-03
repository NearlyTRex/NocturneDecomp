// Name: core_battery.cpp_CBattery_archive_FUN_00414ef0
// Address: 00414ef0
// Address Range: [[00414ef0, 00414f3b]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_archive_FUN_00414ef0(CBattery *this_ptr)

#include "nocturne.h"

void __cdecl core_battery_cpp_CBattery_archive_FUN_00414ef0(CBattery *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->recharge_time,"rechargeTime");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->discharge_time,"dischargeTime");
  return;
}
