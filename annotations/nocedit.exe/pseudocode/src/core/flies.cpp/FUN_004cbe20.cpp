// Name: core_flies.cpp_FUN_004cbe20
// Address: 004cbe20
// Address Range: [[004cbe20, 004cbe2b]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cbe20()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* Signature: undefined1 actors_other_flies.cpp_FUN_004cbe20(undefined4 param_1) */

void core_flies_cpp_FUN_004cbe20(void)

{
  int iVar1;
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  iVar1 = 0;
  if (0 < *(int *)(in_stack_00000004[1].actor_name + 0xc)) {
    do {
      core_flies_cpp_FUN_004cc760();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_stack_00000004[1].actor_name + 0xc));
  }
  in_stack_00000004[0x1f].create_prob = 1.4013e-45;
  return;
}


// Assembly code:
// 004cbe20: PUSH EBX
//   Label: core_flies.cpp_FUN_004cbe20
// 004cbe21: PUSH ESI
// 004cbe22: MOV ESI,dword ptr [ESP + 0xc]
// 004cbe26: PUSH ESI
// 004cbe27: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
