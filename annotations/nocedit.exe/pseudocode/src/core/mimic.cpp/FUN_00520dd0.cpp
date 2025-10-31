// Name: core_mimic.cpp_FUN_00520dd0
// Address: 00520dd0
// Address Range: [[00520dd0, 00520dfb]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_00520dd0()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mimic.cpp_FUN_00520dd0(undefined4 param_1, undefined4 param_2)
    */

void core_mimic_cpp_FUN_00520dd0(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 00520dd0: PUSH EBX
//   Label: core_mimic.cpp_FUN_00520dd0
// 00520dd1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00520dd5: PUSH EDX
// 00520dd6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00520dda: PUSH ECX
// 00520ddb: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 00520de0: ADD ESP,0x8
// 00520de3: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00520de7: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00520deb: PUSH EBX
// 00520dec: ADD EAX,0x158
// 00520df1: PUSH EAX
// 00520df2: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 00520df7: ADD ESP,0x8
// 00520dfa: POP EBX
// 00520dfb: RET
