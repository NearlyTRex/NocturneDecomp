// Name: core_trap.cpp_FUN_005764a0
// Address: 005764a0
// Address Range: [[005764a0, 005764c8]]
// Convention: unknown
// Signature: void core_trap_cpp_FUN_005764a0(CDemonActor *param_1)

#include "nocturne.h"

void core_trap_cpp_FUN_005764a0(CDemonActor *param_1)

{
  core_actor_cpp_FUN_00408a80(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 1));
  *(uint *)&param_1[1].field_0x17c = 0;
  return;
}
