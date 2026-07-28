// Name: core_battery.cpp_CBattery_archive_FUN_00414ef0
// Address: 00414ef0
// Address Range: [[00414ef0, 00414f3b]]
// Convention: unknown
// Signature: void core_battery_cpp_CBattery_archive_FUN_00414ef0(CDemonActor *param_1)

#include "nocturne.h"

void core_battery_cpp_CBattery_archive_FUN_00414ef0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"modelName");
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)&param_1[2].orient,"rechargeTime");
  core_actor_cpp_archiveFloat_FUN_0040c880(&param_1[2].orient.vec.y,"dischargeTime");
  return;
}
