// Name: core_ghoul.cpp_FUN_004e8ee0
// Address: 004e8ee0
// Address Range: [[004e8ee0, 004e8f0b]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_FUN_004e8ee0()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_ghoul.cpp_FUN_004e8ee0(undefined4 param_1, undefined4 param_2)
    */

void core_ghoul_cpp_FUN_004e8ee0(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 004e8ee0: PUSH EBX
//   Label: core_ghoul.cpp_FUN_004e8ee0
// 004e8ee1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004e8ee5: PUSH EDX
// 004e8ee6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004e8eea: PUSH ECX
// 004e8eeb: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 004e8ef0: ADD ESP,0x8
// 004e8ef3: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004e8ef7: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004e8efb: PUSH EBX
// 004e8efc: ADD EAX,0x158
// 004e8f01: PUSH EAX
// 004e8f02: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 004e8f07: ADD ESP,0x8
// 004e8f0a: POP EBX
// 004e8f0b: RET
