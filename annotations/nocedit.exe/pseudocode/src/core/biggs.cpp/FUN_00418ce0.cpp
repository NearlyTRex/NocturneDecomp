// Name: core_biggs.cpp_FUN_00418ce0
// Address: 00418ce0
// Address Range: [[00418ce0, 00418d0b]]
// Convention: unknown
// Signature: undefined core_biggs.cpp_FUN_00418ce0()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_biggs.cpp_FUN_00418ce0(undefined4 param_1, undefined4 param_2)
    */

void core_biggs_cpp_FUN_00418ce0(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 00418ce0: PUSH EBX
//   Label: core_biggs.cpp_FUN_00418ce0
// 00418ce1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00418ce5: PUSH EDX
// 00418ce6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00418cea: PUSH ECX
// 00418ceb: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 00418cf0: ADD ESP,0x8
// 00418cf3: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00418cf7: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00418cfb: PUSH EBX
// 00418cfc: ADD EAX,0x158
// 00418d01: PUSH EAX
// 00418d02: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 00418d07: ADD ESP,0x8
// 00418d0a: POP EBX
// 00418d0b: RET
