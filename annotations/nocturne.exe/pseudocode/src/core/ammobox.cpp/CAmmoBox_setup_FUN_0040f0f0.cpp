// Name: core_ammobox.cpp_CAmmoBox_setup_FUN_0040f0f0
// Address: 0040f0f0
// Address Range: [[0040f0f0, 0040f11f]]
// Convention: unknown
// Signature: void core_ammobox_cpp_CAmmoBox_setup_FUN_0040f0f0(CDemonActor *param_1)

#include "nocturne.h"

void core_ammobox_cpp_CAmmoBox_setup_FUN_0040f0f0(CDemonActor *param_1)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  param_1[2].create_event[0x28] = '\0';
  param_1[2].create_event[0x29] = '\0';
  param_1[2].create_event[0x2a] = '\0';
  param_1[2].create_event[0x2b] = '\0';
  return;
}
