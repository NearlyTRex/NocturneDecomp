// Name: core_battery.cpp_FUN_00417ef0
// Address: 00417ef0
// Address Range: [[00417ef0, 00417efa]]
// Convention: unknown
// Signature: void core_battery_cpp_FUN_00417ef0(void)

#include "nocturne.h"

/* Signature: byte actors_other_battery.cpp_FUN_00417ef0(uint param_1) */

void core_battery_cpp_FUN_00417ef0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  in_stack_00000004[2].location.position.y = 0.0;
  return;
}
