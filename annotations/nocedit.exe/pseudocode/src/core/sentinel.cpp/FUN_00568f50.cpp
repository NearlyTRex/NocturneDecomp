// Name: core_sentinel.cpp_FUN_00568f50
// Address: 00568f50
// Address Range: [[00568f50, 00568f7b]]
// Convention: unknown
// Signature: undefined core_sentinel.cpp_FUN_00568f50()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_sentinel.cpp_FUN_00568f50(undefined4 param_1, undefined4
   param_2) */

void core_sentinel_cpp_FUN_00568f50(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 00568f50: PUSH EBX
//   Label: core_sentinel.cpp_FUN_00568f50
// 00568f51: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00568f55: PUSH EDX
// 00568f56: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00568f5a: PUSH ECX
// 00568f5b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 00568f60: ADD ESP,0x8
// 00568f63: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00568f67: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00568f6b: PUSH EBX
// 00568f6c: ADD EAX,0x158
// 00568f71: PUSH EAX
// 00568f72: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 00568f77: ADD ESP,0x8
// 00568f7a: POP EBX
// 00568f7b: RET
