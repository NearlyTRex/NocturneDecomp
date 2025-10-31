// Name: core_morph.cpp_CallToMorphModelAnimate_FUN_0052aa80
// Address: 0052aa80
// Address Range: [[0052aa80, 0052aab2]]
// Convention: unknown
// Signature: undefined core_morph.cpp_CallToMorphModelAnimate_FUN_0052aa80()
// Cross-references:
//   core_morph.cpp_CallToCallToMorphAnimate_FUN_0052b640 (0052b640) at 0052b66d [UNCONDITIONAL_CALL]
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
//   core_morph.cpp_CMorphModel_animate_FUN_0052a920

#include "nocturne.h"

/* Signature: undefined1 core_morph.cpp_CallToMorphModelAnimate(undefined4 param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4) */

void core_morph_cpp_CallToMorphModelAnimate_FUN_0052aa80(void)

{
  CKeyFramedModel *in_stack_0000000c;
  int in_stack_00000010;
  
  core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(in_stack_0000000c,in_stack_00000010)
  ;
  core_morph_cpp_CMorphModel_animate_FUN_0052a920();
  return;
}


// Assembly code:
// 0052aa80: PUSH EBX
//   Label: core_morph.cpp_CallToMorphModelAnimate_FUN_0052aa80
// 0052aa81: PUSH ESI
// 0052aa82: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0052aa86: MOV EAX,dword ptr [EDX + 0x104]
// 0052aa8c: PUSH EAX
// 0052aa8d: PUSH 0x0
// 0052aa8f: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0052aa93: PUSH ECX
// 0052aa94: PUSH EDX
// 0052aa95: CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
//   XREF to: 00477890 (UNCONDITIONAL_CALL)
// 0052aa9a: ADD ESP,0x8
// 0052aa9d: PUSH EAX
// 0052aa9e: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0052aaa2: PUSH EBX
// 0052aaa3: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0052aaa7: PUSH ESI
// 0052aaa8: CALL core_morph.cpp_CMorphModel_animate_FUN_0052a920
//   XREF to: 0052a920 (UNCONDITIONAL_CALL)
// 0052aaad: ADD ESP,0x14
// 0052aab0: POP ESI
// 0052aab1: POP EBX
// 0052aab2: RET
