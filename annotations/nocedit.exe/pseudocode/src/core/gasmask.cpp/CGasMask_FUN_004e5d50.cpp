// Name: core_gasmask.cpp_CGasMask_FUN_004e5d50
// Address: 004e5d50
// Address Range: [[004e5d50, 004e5d59]]
// Convention: unknown
// Signature: undefined core_gasmask.cpp_CGasMask_FUN_004e5d50()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* Signature: undefined1 actors_other_gasmask.cpp_CGasMask_FUN_004e5d50(undefined4 param_1) */

void core_gasmask_cpp_CGasMask_FUN_004e5d50(void)

{
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000008 + 0x158));
  return;
}


// Assembly code:
// 004e5d50: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_gasmask.cpp_CGasMask_FUN_004e5d50
// 004e5d54: PUSH EDX
// 004e5d55: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
