// Name: core_hostage.cpp_FUN_004f6b30
// Address: 004f6b30
// Address Range: [[004f6b30, 004f6b5b]]
// Convention: unknown
// Signature: undefined core_hostage.cpp_FUN_004f6b30()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

/* Signature: undefined1 actors_npc_hostage.cpp_FUN_004f6b30(undefined4 param_1, undefined4 param_2)
    */

void core_hostage_cpp_FUN_004f6b30(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 004f6b30: PUSH EBX
//   Label: core_hostage.cpp_FUN_004f6b30
// 004f6b31: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f6b35: PUSH EDX
// 004f6b36: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004f6b3a: PUSH ECX
// 004f6b3b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 004f6b40: ADD ESP,0x8
// 004f6b43: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f6b47: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f6b4b: PUSH EBX
// 004f6b4c: ADD EAX,0x158
// 004f6b51: PUSH EAX
// 004f6b52: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 004f6b57: ADD ESP,0x8
// 004f6b5a: POP EBX
// 004f6b5b: RET
