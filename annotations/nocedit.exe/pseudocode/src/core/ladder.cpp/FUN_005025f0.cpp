// Name: core_ladder.cpp_FUN_005025f0
// Address: 005025f0
// Address Range: [[005025f0, 005025f9]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_005025f0()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* Signature: undefined1 actors_other_ladder.cpp_FUN_005025f0(undefined4 param_1) */

void core_ladder_cpp_FUN_005025f0(void)

{
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000008 + 0x158));
  return;
}


// Assembly code:
// 005025f0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_ladder.cpp_FUN_005025f0
// 005025f4: PUSH EDX
// 005025f5: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
