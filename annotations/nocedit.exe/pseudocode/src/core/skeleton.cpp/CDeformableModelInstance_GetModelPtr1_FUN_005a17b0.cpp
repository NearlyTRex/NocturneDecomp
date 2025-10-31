// Name: core_skeleton.cpp_CDeformableModelInstance_GetModelPtr1_FUN_005a17b0
// Address: 005a17b0
// Address Range: [[005a17b0, 005a17d9]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModelInstance_GetModelPtr1_FUN_005a17b0()
// Cross-references:
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 00597578 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModel_FUN_0059b640
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModelInstance_GetModelPtr1(undefined4 param_1,
   undefined4 param_2, undefined4 param_3) */

void core_skeleton_cpp_CDeformableModelInstance_GetModelPtr1_FUN_005a17b0(void)

{
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
  core_skeleton_cpp_CDeformableModel_FUN_0059b640();
  return;
}


// Assembly code:
// 005a17b0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_GetModelPtr1_FUN_005a17b0
// 005a17b1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a17b5: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005a17b9: PUSH ECX
// 005a17ba: LEA EAX,[EDX + 0xe80]
// 005a17c0: PUSH EAX
// 005a17c1: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005a17c5: PUSH EBX
// 005a17c6: PUSH EDX
// 005a17c7: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a17cc: ADD ESP,0x4
// 005a17cf: PUSH EAX
// 005a17d0: CALL core_skeleton.cpp_CDeformableModel_FUN_0059b640
//   XREF to: 0059b640 (UNCONDITIONAL_CALL)
// 005a17d5: ADD ESP,0x10
// 005a17d8: POP EBX
// 005a17d9: RET
