// Name: core_smiley.cpp_FUN_005a3850
// Address: 005a3850
// Address Range: [[005a3850, 005a387b]]
// Convention: unknown
// Signature: undefined core_smiley.cpp_FUN_005a3850()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_smiley.cpp_FUN_005a3850(undefined4 param_1, undefined4
   param_2) */

void core_smiley_cpp_FUN_005a3850(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 005a3850: PUSH EBX
//   Label: core_smiley.cpp_FUN_005a3850
// 005a3851: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005a3855: PUSH EDX
// 005a3856: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a385a: PUSH ECX
// 005a385b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 005a3860: ADD ESP,0x8
// 005a3863: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005a3867: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a386b: PUSH EBX
// 005a386c: ADD EAX,0x158
// 005a3871: PUSH EAX
// 005a3872: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 005a3877: ADD ESP,0x8
// 005a387a: POP EBX
// 005a387b: RET
