// Name: core_boneguy.cpp_FUN_0041da10
// Address: 0041da10
// Address Range: [[0041da10, 0041da3b]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041da10()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_boneguy.cpp_FUN_0041da10(undefined4 param_1, undefined4
   param_2) */

void core_boneguy_cpp_FUN_0041da10(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 0041da10: PUSH EBX
//   Label: core_boneguy.cpp_FUN_0041da10
// 0041da11: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0041da15: PUSH EDX
// 0041da16: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0041da1a: PUSH ECX
// 0041da1b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 0041da20: ADD ESP,0x8
// 0041da23: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0041da27: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0041da2b: PUSH EBX
// 0041da2c: ADD EAX,0x158
// 0041da31: PUSH EAX
// 0041da32: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 0041da37: ADD ESP,0x8
// 0041da3a: POP EBX
// 0041da3b: RET
