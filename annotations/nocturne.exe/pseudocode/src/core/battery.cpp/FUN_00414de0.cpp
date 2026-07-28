// Name: core_battery.cpp_FUN_00414de0
// Address: 00414de0
// Address Range: [[00414de0, 00414e08]]
// Convention: unknown
// Signature: void core_battery_cpp_FUN_00414de0(CDemonActor *param_1)

#include "nocturne.h"

void core_battery_cpp_FUN_00414de0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1 + 1));
  param_1[2].location.area_id = 0;
  return;
}
