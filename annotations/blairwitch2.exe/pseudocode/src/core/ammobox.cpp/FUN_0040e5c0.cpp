// Name: core_ammobox.cpp_FUN_0040e5c0
// Address: 0040e5c0
// Address Range: [[0040e5c0, 0040e5ef]]
// Convention: unknown
// Signature: void core_ammobox_cpp_FUN_0040e5c0(CDemonActor *param_1)

#include "nocturne.h"

void core_ammobox_cpp_FUN_0040e5c0(CDemonActor *param_1)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_actor_cpp_FUN_00408a80(param_1);
  *(uint *)&param_1[1].field_0x1f0 = 0;
  return;
}
