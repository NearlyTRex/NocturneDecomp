// Name: core_battery.cpp_FUN_00414780
// Address: 00414780
// Address Range: [[00414780, 004147a8]]
// Convention: unknown
// Signature: void core_battery_cpp_FUN_00414780(CDemonActor *param_1)

#include "nocturne.h"

void core_battery_cpp_FUN_00414780(CDemonActor *param_1)

{
  core_actor_cpp_FUN_00408a80(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 1));
  *(uint *)&param_1[1].field_0x17c = 0;
  return;
}
