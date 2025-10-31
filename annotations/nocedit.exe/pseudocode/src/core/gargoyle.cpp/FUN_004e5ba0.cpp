// Name: core_gargoyle.cpp_FUN_004e5ba0
// Address: 004e5ba0
// Address Range: [[004e5ba0, 004e5bcb]]
// Convention: unknown
// Signature: undefined core_gargoyle.cpp_FUN_004e5ba0()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_gargoyle.cpp_FUN_004e5ba0(undefined4 param_1, undefined4
   param_2) */

void core_gargoyle_cpp_FUN_004e5ba0(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 004e5ba0: PUSH EBX
//   Label: core_gargoyle.cpp_FUN_004e5ba0
// 004e5ba1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004e5ba5: PUSH EDX
// 004e5ba6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004e5baa: PUSH ECX
// 004e5bab: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 004e5bb0: ADD ESP,0x8
// 004e5bb3: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004e5bb7: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004e5bbb: PUSH EBX
// 004e5bbc: ADD EAX,0x158
// 004e5bc1: PUSH EAX
// 004e5bc2: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 004e5bc7: ADD ESP,0x8
// 004e5bca: POP EBX
// 004e5bcb: RET
