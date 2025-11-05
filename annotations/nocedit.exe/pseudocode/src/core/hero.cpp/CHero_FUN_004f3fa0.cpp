// Name: core_hero.cpp_CHero_FUN_004f3fa0
// Address: 004f3fa0
// Address Range: [[004f3fa0, 004f3fe4]]
// Convention: __cdecl
// Signature: void core_hero.cpp_CHero_FUN_004f3fa0(CHero * this_ptr)
// Cross-references:
//   core_baron.cpp_CBaron_FUN_00414070 (00414070) at 0041407a [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_00440630 (00440630) at 0044063a [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d7630 (004d7630) at 004d763a [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f1cf0 (004f1cf0) at 004f1cfa [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f97c0 (004f97c0) at 004f97ca [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_005299b0 (005299b0) at 005299ba [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00559140 (00559140) at 0055914a [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c6910 (005c6910) at 005c691a [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d9f30 (005d9f30) at 005d9f3a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_MODELS_s_0062edc4
// Function calls:
//   core_skeledit.cpp_FUN_0058a2b0
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_FUN_004f3fa0(CHero *this_ptr)

{
  CDeformableModel *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  FILE *in_stack_0000000c;
  
  this_ptr_00 = &(this_ptr->base_character).model;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_0000000c,"MODELS\\%s\n",pCVar1->model_filename);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  core_skeledit_cpp_FUN_0058a2b0();
  return;
}


// Assembly code:
// 004f3fa0: PUSH EBX
//   Label: core_hero.cpp_CHero_FUN_004f3fa0
// 004f3fa1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f3fa5: ADD EBX,0x158
// 004f3fab: PUSH EBX
// 004f3fac: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 004f3fb1: ADD ESP,0x4
// 004f3fb4: ADD EAX,0x8fb0
// 004f3fb9: PUSH EAX
// 004f3fba: PUSH 0x62edc4
//   XREF to: 0062edc4 (DATA)
// 004f3fbf: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004f3fc3: PUSH EDX
// 004f3fc4: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004f3fc9: ADD ESP,0xc
// 004f3fcc: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f3fd0: PUSH ECX
// 004f3fd1: PUSH EBX
// 004f3fd2: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 004f3fd7: ADD ESP,0x4
// 004f3fda: PUSH EAX
// 004f3fdb: CALL core_skeledit.cpp_FUN_0058a2b0
//   XREF to: 0058a2b0 (UNCONDITIONAL_CALL)
// 004f3fe0: ADD ESP,0x8
// 004f3fe3: POP EBX
// 004f3fe4: RET
