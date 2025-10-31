// Name: core_grave.cpp_FUN_004ee5a0
// Address: 004ee5a0
// Address Range: [[004ee5a0, 004ee5bb]]
// Convention: unknown
// Signature: undefined core_grave.cpp_FUN_004ee5a0()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60

#include "nocturne.h"

/* Signature: undefined1 actors_other_grave.cpp_FUN_004ee5a0(undefined4 param_1) */

void core_grave_cpp_FUN_004ee5a0(void)

{
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000008);
  return;
}


// Assembly code:
// 004ee5a0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_grave.cpp_FUN_004ee5a0
// 004ee5a4: ADD EAX,0x158
// 004ee5a9: PUSH EAX
// 004ee5aa: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004ee5af: ADD ESP,0x4
// 004ee5b2: MOV EDX,dword ptr [ESP + 0x4]
// 004ee5b6: PUSH EDX
// 004ee5b7: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
