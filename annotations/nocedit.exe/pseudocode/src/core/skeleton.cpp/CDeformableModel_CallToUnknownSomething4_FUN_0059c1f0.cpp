// Name: core_skeleton.cpp_CDeformableModel_CallToUnknownSomething4_FUN_0059c1f0
// Address: 0059c1f0
// Address Range: [[0059c1f0, 0059c212]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_CallToUnknownSomething4_FUN_0059c1f0()
// Cross-references:
//   core_skeleton.cpp_CDeformableModel_LoadSkeletonAndRenderTexture_FUN_0059a780 (0059a780) at 0059a79e [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_FUN_0059d9e0
//   core_skeleton.cpp_FUN_0059dbe0

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModel_CallToUnknownSomething4(undefined4
   param_1, undefined4 param_2) */

void core_skeleton_cpp_CDeformableModel_CallToUnknownSomething4_FUN_0059c1f0(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x8fac) = in_stack_00000008;
  core_skeleton_cpp_FUN_0059d9e0();
  core_skeleton_cpp_FUN_0059dbe0();
  return;
}


// Assembly code:
// 0059c1f0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_CallToUnknownSomething4_FUN_0059c1f0
// 0059c1f1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0059c1f5: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0059c1f9: PUSH EBX
// 0059c1fa: MOV dword ptr [EBX + 0x8fac],EAX
// 0059c200: CALL core_skeleton.cpp_FUN_0059d9e0
//   XREF to: 0059d9e0 (UNCONDITIONAL_CALL)
// 0059c205: ADD ESP,0x4
// 0059c208: PUSH EBX
// 0059c209: CALL core_skeleton.cpp_FUN_0059dbe0
//   XREF to: 0059dbe0 (UNCONDITIONAL_CALL)
// 0059c20e: ADD ESP,0x4
// 0059c211: POP EBX
// 0059c212: RET
