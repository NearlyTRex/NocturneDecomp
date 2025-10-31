// Name: core_manpuz.cpp_FUN_0050b160
// Address: 0050b160
// Address Range: [[0050b160, 0050b169]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b160()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050b160(undefined4 param_1) */

void core_manpuz_cpp_FUN_0050b160(void)

{
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000008 + 0x158));
  return;
}


// Assembly code:
// 0050b160: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_manpuz.cpp_FUN_0050b160
// 0050b164: PUSH EDX
// 0050b165: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
