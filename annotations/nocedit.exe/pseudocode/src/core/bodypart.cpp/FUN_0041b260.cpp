// Name: core_bodypart.cpp_FUN_0041b260
// Address: 0041b260
// Address Range: [[0041b260, 0041b27a]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041b260()
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   core_bodypart.cpp_FUN_0041b070

#include "nocturne.h"

/* Signature: undefined1 actors_other_bodypart.cpp_FUN_0041b260(undefined4 param_1) */

void core_bodypart_cpp_FUN_0041b260(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  core_bodypart_cpp_FUN_0041b070();
  return;
}


// Assembly code:
// 0041b260: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_bodypart.cpp_FUN_0041b260
//   XREF to: Stack[0x4] (READ)
// 0041b264: PUSH EDX
// 0041b265: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 0041b26a: ADD ESP,0x4
// 0041b26d: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0041b271: PUSH ECX
// 0041b272: CALL core_bodypart.cpp_FUN_0041b070
//   XREF to: 0041b070 (UNCONDITIONAL_CALL)
// 0041b277: ADD ESP,0x4
// 0041b27a: RET
