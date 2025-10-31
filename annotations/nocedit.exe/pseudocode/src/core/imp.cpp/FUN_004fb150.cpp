// Name: core_imp.cpp_FUN_004fb150
// Address: 004fb150
// Address Range: [[004fb150, 004fb17b]]
// Convention: unknown
// Signature: undefined core_imp.cpp_FUN_004fb150()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_imp.cpp_FUN_004fb150(undefined4 param_1, undefined4 param_2)
    */

void core_imp_cpp_FUN_004fb150(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 004fb150: PUSH EBX
//   Label: core_imp.cpp_FUN_004fb150
// 004fb151: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004fb155: PUSH EDX
// 004fb156: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004fb15a: PUSH ECX
// 004fb15b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 004fb160: ADD ESP,0x8
// 004fb163: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004fb167: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004fb16b: PUSH EBX
// 004fb16c: ADD EAX,0x158
// 004fb171: PUSH EAX
// 004fb172: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 004fb177: ADD ESP,0x8
// 004fb17a: POP EBX
// 004fb17b: RET
