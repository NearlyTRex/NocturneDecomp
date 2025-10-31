// Name: core_keyactor.cpp_FUN_005016f0
// Address: 005016f0
// Address Range: [[005016f0, 0050170b]]
// Convention: unknown
// Signature: undefined core_keyactor.cpp_FUN_005016f0()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60

#include "nocturne.h"

/* Signature: undefined1 actors_other_keyactor.cpp_FUN_005016f0(undefined4 param_1) */

void core_keyactor_cpp_FUN_005016f0(void)

{
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000008);
  return;
}


// Assembly code:
// 005016f0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_keyactor.cpp_FUN_005016f0
// 005016f4: ADD EAX,0x158
// 005016f9: PUSH EAX
// 005016fa: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 005016ff: ADD ESP,0x4
// 00501702: MOV EDX,dword ptr [ESP + 0x4]
// 00501706: PUSH EDX
// 00501707: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
