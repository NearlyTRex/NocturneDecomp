// Name: core_larva.cpp_FUN_00503c90
// Address: 00503c90
// Address Range: [[00503c90, 00503cbb]]
// Convention: unknown
// Signature: undefined core_larva.cpp_FUN_00503c90()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_larva.cpp_FUN_00503c90(undefined4 param_1, undefined4 param_2)
    */

void core_larva_cpp_FUN_00503c90(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 00503c90: PUSH EBX
//   Label: core_larva.cpp_FUN_00503c90
// 00503c91: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00503c95: PUSH EDX
// 00503c96: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00503c9a: PUSH ECX
// 00503c9b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 00503ca0: ADD ESP,0x8
// 00503ca3: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00503ca7: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00503cab: PUSH EBX
// 00503cac: ADD EAX,0x158
// 00503cb1: PUSH EAX
// 00503cb2: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 00503cb7: ADD ESP,0x8
// 00503cba: POP EBX
// 00503cbb: RET
