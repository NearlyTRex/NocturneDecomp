// Name: core_battery.cpp_CBattery_archive_FUN_004145a0
// Address: 004145a0
// Address Range: [[004145a0, 004145eb]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_archive_FUN_004145a0(CBattery *this_ptr)

#include "nocturne.h"

void __cdecl core_battery_cpp_CBattery_archive_FUN_004145a0(CBattery *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770
            (&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x2d8,"rechargeTime");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x2dc,"dischargeTime");
  return;
}
