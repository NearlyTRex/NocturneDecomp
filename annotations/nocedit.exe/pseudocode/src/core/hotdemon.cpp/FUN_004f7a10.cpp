// Name: core_hotdemon.cpp_FUN_004f7a10
// Address: 004f7a10
// Address Range: [[004f7a10, 004f7a3b]]
// Convention: unknown
// Signature: undefined core_hotdemon.cpp_FUN_004f7a10()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_hotdemon.cpp_FUN_004f7a10(undefined4 param_1, undefined4
   param_2) */

void core_hotdemon_cpp_FUN_004f7a10(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 004f7a10: PUSH EBX
//   Label: core_hotdemon.cpp_FUN_004f7a10
// 004f7a11: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f7a15: PUSH EDX
// 004f7a16: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004f7a1a: PUSH ECX
// 004f7a1b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 004f7a20: ADD ESP,0x8
// 004f7a23: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f7a27: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f7a2b: PUSH EBX
// 004f7a2c: ADD EAX,0x158
// 004f7a31: PUSH EAX
// 004f7a32: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 004f7a37: ADD ESP,0x8
// 004f7a3a: POP EBX
// 004f7a3b: RET
