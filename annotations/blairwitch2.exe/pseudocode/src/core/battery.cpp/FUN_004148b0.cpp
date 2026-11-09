// Name: core_battery.cpp_FUN_004148b0
// Address: 004148b0
// Address Range: [[004148b0, 004148fb]]
// Convention: unknown
// Signature: void core_battery_cpp_FUN_004148b0(CDemonActor *param_1)

#include "nocturne.h"

void core_battery_cpp_FUN_004148b0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x180,"rechargeTime");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x184,"dischargeTime");
  return;
}
