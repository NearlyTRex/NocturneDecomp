// Name: core_mobster.cpp_FUN_00527c40
// Address: 00527c40
// Address Range: [[00527c40, 00527c6b]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00527c40()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mobster.cpp_FUN_00527c40(undefined4 param_1, undefined4
   param_2) */

void core_mobster_cpp_FUN_00527c40(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 00527c40: PUSH EBX
//   Label: core_mobster.cpp_FUN_00527c40
// 00527c41: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00527c45: PUSH EDX
// 00527c46: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00527c4a: PUSH ECX
// 00527c4b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 00527c50: ADD ESP,0x8
// 00527c53: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00527c57: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00527c5b: PUSH EBX
// 00527c5c: ADD EAX,0x158
// 00527c61: PUSH EAX
// 00527c62: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 00527c67: ADD ESP,0x8
// 00527c6a: POP EBX
// 00527c6b: RET
