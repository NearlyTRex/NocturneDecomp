// Name: core_morph.cpp_CMorphModel_FUN_0052a870
// Address: 0052a870
// Address Range: [[0052a870, 0052a8cb]]
// Convention: __cdecl
// Signature: void core_morph.cpp_CMorphModel_FUN_0052a870(CMorphModel * this_ptr)
// Cross-references:
//   core_morph.cpp_FUN_0052b430 (0052b430) at 0052b45b [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052b550 (0052b550) at 0052b571 [UNCONDITIONAL_CALL]
// Function calls:
//   core_morph.cpp_CMorphModel_FUN_0052a710
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_FUN_0052a870(CMorphModel *this_ptr)

{
  CDeformableModelInstance *in_stack_00000008;
  CMorphModel *in_stack_0000000c;
  
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(in_stack_00000008,0);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(in_stack_00000008);
  core_morph_cpp_CMorphModel_FUN_0052a710(in_stack_0000000c);
  return;
}


// Assembly code:
// 0052a870: PUSH EBX
//   Label: core_morph.cpp_CMorphModel_FUN_0052a870
// 0052a871: PUSH ESI
// 0052a872: PUSH EDI
// 0052a873: PUSH EBP
// 0052a874: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052a878: PUSH 0x0
// 0052a87a: PUSH EBX
// 0052a87b: CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 0052a880: ADD ESP,0x8
// 0052a883: PUSH EBX
// 0052a884: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0052a889: MOV EDX,EAX
// 0052a88b: MOV EAX,dword ptr [EBX + 0x2230]
// 0052a891: SHL EAX,0x2
// 0052a894: ADD EAX,EDX
// 0052a896: ADD ESP,0x4
// 0052a899: MOV ECX,dword ptr [EAX + 0x90]
// 0052a89f: PUSH ECX
// 0052a8a0: ADD EDX,0xc0
// 0052a8a6: PUSH EDX
// 0052a8a7: MOV ESI,dword ptr [EAX + 0x7c]
// 0052a8aa: PUSH ESI
// 0052a8ab: MOV EDI,dword ptr [EAX + 0x54]
// 0052a8ae: PUSH EDI
// 0052a8af: MOV EBP,dword ptr [EBX + 0x2234]
// 0052a8b5: PUSH EBP
// 0052a8b6: MOV EDX,dword ptr [EAX + 0x2c]
// 0052a8b9: PUSH EDX
// 0052a8ba: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0052a8be: PUSH ECX
// 0052a8bf: CALL core_morph.cpp_CMorphModel_FUN_0052a710
//   XREF to: 0052a710 (UNCONDITIONAL_CALL)
// 0052a8c4: ADD ESP,0x1c
// 0052a8c7: POP EBP
// 0052a8c8: POP EDI
// 0052a8c9: POP ESI
// 0052a8ca: POP EBX
// 0052a8cb: RET
