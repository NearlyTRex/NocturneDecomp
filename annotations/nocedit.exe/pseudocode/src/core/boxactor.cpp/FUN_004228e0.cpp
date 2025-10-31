// Name: core_boxactor.cpp_FUN_004228e0
// Address: 004228e0
// Address Range: [[004228e0, 004228fa]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_004228e0()
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   core_boxactor.cpp_FUN_004218d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_boxactor.cpp_FUN_004228e0(undefined4 param_1) */

void core_boxactor_cpp_FUN_004228e0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  core_boxactor_cpp_FUN_004218d0();
  return;
}


// Assembly code:
// 004228e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_boxactor.cpp_FUN_004228e0
//   XREF to: Stack[0x4] (READ)
// 004228e4: PUSH EDX
// 004228e5: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 004228ea: ADD ESP,0x4
// 004228ed: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 004228f1: PUSH ECX
// 004228f2: CALL core_boxactor.cpp_FUN_004218d0
//   XREF to: 004218d0 (UNCONDITIONAL_CALL)
// 004228f7: ADD ESP,0x4
// 004228fa: RET
