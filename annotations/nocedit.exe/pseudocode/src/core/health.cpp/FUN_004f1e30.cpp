// Name: core_health.cpp_FUN_004f1e30
// Address: 004f1e30
// Address Range: [[004f1e30, 004f1e4b]]
// Convention: unknown
// Signature: undefined core_health.cpp_FUN_004f1e30()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60

#include "nocturne.h"

void core_health_cpp_FUN_004f1e30(void)

{
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000008);
  return;
}


// Assembly code:
// 004f1e30: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_health.cpp_FUN_004f1e30
// 004f1e34: ADD EAX,0x158
// 004f1e39: PUSH EAX
// 004f1e3a: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004f1e3f: ADD ESP,0x4
// 004f1e42: MOV EDX,dword ptr [ESP + 0x4]
// 004f1e46: PUSH EDX
// 004f1e47: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
