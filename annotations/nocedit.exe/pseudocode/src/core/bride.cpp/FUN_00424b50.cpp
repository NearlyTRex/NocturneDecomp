// Name: core_bride.cpp_FUN_00424b50
// Address: 00424b50
// Address Range: [[00424b50, 00424b7b]]
// Convention: unknown
// Signature: undefined core_bride.cpp_FUN_00424b50()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bride.cpp_FUN_00424b50(undefined4 param_1, undefined4 param_2)
    */

void core_bride_cpp_FUN_00424b50(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 00424b50: PUSH EBX
//   Label: core_bride.cpp_FUN_00424b50
// 00424b51: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00424b55: PUSH EDX
// 00424b56: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00424b5a: PUSH ECX
// 00424b5b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 00424b60: ADD ESP,0x8
// 00424b63: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00424b67: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00424b6b: PUSH EBX
// 00424b6c: ADD EAX,0x158
// 00424b71: PUSH EAX
// 00424b72: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 00424b77: ADD ESP,0x8
// 00424b7a: POP EBX
// 00424b7b: RET
