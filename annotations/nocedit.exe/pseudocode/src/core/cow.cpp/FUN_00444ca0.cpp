// Name: core_cow.cpp_FUN_00444ca0
// Address: 00444ca0
// Address Range: [[00444ca0, 00444ccb]]
// Convention: unknown
// Signature: undefined core_cow.cpp_FUN_00444ca0()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_cow.cpp_FUN_00444ca0(undefined4 param_1, undefined4 param_2)
    */

void core_cow_cpp_FUN_00444ca0(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 00444ca0: PUSH EBX
//   Label: core_cow.cpp_FUN_00444ca0
// 00444ca1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00444ca5: PUSH EDX
// 00444ca6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00444caa: PUSH ECX
// 00444cab: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 00444cb0: ADD ESP,0x8
// 00444cb3: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00444cb7: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00444cbb: PUSH EBX
// 00444cbc: ADD EAX,0x158
// 00444cc1: PUSH EAX
// 00444cc2: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 00444cc7: ADD ESP,0x8
// 00444cca: POP EBX
// 00444ccb: RET
