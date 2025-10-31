// Name: core_litecone.cpp_FUN_00506bb0
// Address: 00506bb0
// Address Range: [[00506bb0, 00506bb9]]
// Convention: unknown
// Signature: undefined core_litecone.cpp_FUN_00506bb0()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* Signature: undefined1 actors_other_litecone.cpp_FUN_00506bb0(undefined4 param_1) */

void core_litecone_cpp_FUN_00506bb0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  return;
}


// Assembly code:
// 00506bb0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_litecone.cpp_FUN_00506bb0
// 00506bb4: PUSH EDX
// 00506bb5: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
