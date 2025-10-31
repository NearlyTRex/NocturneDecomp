// Name: core_morph.cpp_CMorphModel_CallMorphModel_addPart1_FUN_0052a8d0
// Address: 0052a8d0
// Address Range: [[0052a8d0, 0052a918]]
// Convention: unknown
// Signature: undefined core_morph.cpp_CMorphModel_CallMorphModel_addPart1_FUN_0052a8d0()
// Cross-references:
//   core_morph.cpp_CallToFreeSomething2_FUN_0052b470 (0052b470) at 0052b4a0 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052b580 (0052b580) at 0052b5a7 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
//   core_morph.cpp_CMorphModel_addPart_FUN_0052a580

#include "nocturne.h"

/* Signature: undefined1 core_morph.cpp_CMorphModel_CallMorphModel_addPart1(CMorphModel* param_1,
   undefined4 param_2, undefined4 param_3) */

void core_morph_cpp_CMorphModel_CallMorphModel_addPart1_FUN_0052a8d0(void)

{
  CKeyFramedModel *in_stack_00000008;
  int in_stack_0000000c;
  
  core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(in_stack_00000008,in_stack_0000000c)
  ;
  core_morph_cpp_CMorphModel_addPart_FUN_0052a580();
  return;
}


// Assembly code:
// 0052a8d0: PUSH EBX
//   Label: core_morph.cpp_CMorphModel_CallMorphModel_addPart1_FUN_0052a8d0
// 0052a8d1: PUSH EBP
// 0052a8d2: MOV EBP,ESP
// 0052a8d4: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0052a8d7: MOV EAX,dword ptr [EBX + 0x118]
// 0052a8dd: PUSH EAX
// 0052a8de: LEA EAX,[EBX + 0x124]
// 0052a8e4: PUSH EAX
// 0052a8e5: PUSH 0x48
// 0052a8e7: MOV EAX,dword ptr [EBX + 0x114]
// 0052a8ed: PUSH EAX
// 0052a8ee: MOV EAX,dword ptr [EBX + 0x110]
// 0052a8f4: PUSH EAX
// 0052a8f5: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0052a8f8: PUSH EDX
// 0052a8f9: PUSH EBX
// 0052a8fa: CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
//   XREF to: 00477890 (UNCONDITIONAL_CALL)
// 0052a8ff: ADD ESP,0x8
// 0052a902: PUSH EAX
// 0052a903: MOV EAX,dword ptr [EBX + 0x104]
// 0052a909: PUSH EAX
// 0052a90a: MOV ECX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052a90d: PUSH ECX
// 0052a90e: CALL core_morph.cpp_CMorphModel_addPart_FUN_0052a580
//   XREF to: 0052a580 (UNCONDITIONAL_CALL)
// 0052a913: ADD ESP,0x20
// 0052a916: POP EBP
// 0052a917: POP EBX
// 0052a918: RET
