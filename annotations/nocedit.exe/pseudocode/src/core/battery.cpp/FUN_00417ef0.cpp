// Name: core_battery.cpp_FUN_00417ef0
// Address: 00417ef0
// Address Range: [[00417ef0, 00417efa]]
// Convention: unknown
// Signature: undefined core_battery.cpp_FUN_00417ef0()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* Signature: undefined1 actors_other_battery.cpp_FUN_00417ef0(undefined4 param_1) */

void core_battery_cpp_FUN_00417ef0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  in_stack_00000004[2].location.position.y = 0.0;
  return;
}


// Assembly code:
// 00417ef0: PUSH EBX
//   Label: core_battery.cpp_FUN_00417ef0
// 00417ef1: MOV EBX,dword ptr [ESP + 0x8]
// 00417ef5: PUSH EBX
// 00417ef6: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
