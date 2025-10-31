// Name: core_beast.cpp_FUN_00418460
// Address: 00418460
// Address Range: [[00418460, 0041848b]]
// Convention: unknown
// Signature: undefined core_beast.cpp_FUN_00418460()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_beast.cpp_FUN_00418460(undefined4 param_1, undefined4 param_2)
    */

void core_beast_cpp_FUN_00418460(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 00418460: PUSH EBX
//   Label: core_beast.cpp_FUN_00418460
// 00418461: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00418465: PUSH EDX
// 00418466: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0041846a: PUSH ECX
// 0041846b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 00418470: ADD ESP,0x8
// 00418473: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00418477: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0041847b: PUSH EBX
// 0041847c: ADD EAX,0x158
// 00418481: PUSH EAX
// 00418482: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 00418487: ADD ESP,0x8
// 0041848a: POP EBX
// 0041848b: RET
