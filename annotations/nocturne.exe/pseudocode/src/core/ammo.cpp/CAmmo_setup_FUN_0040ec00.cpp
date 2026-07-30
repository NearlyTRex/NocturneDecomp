// Name: core_ammo.cpp_CAmmo_setup_FUN_0040ec00
// Address: 0040ec00
// Address Range: [[0040ec00, 0040ec1f]]
// Convention: unknown
// Signature: void core_ammo_cpp_CAmmo_setup_FUN_0040ec00(CDemonActor *param_1)

#include "nocturne.h"

void core_ammo_cpp_CAmmo_setup_FUN_0040ec00(CDemonActor *param_1)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  return;
}
