// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_005a02a0
// Address: 005a02a0
// Address Range: [[005a02a0, 005a02e0]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_FUN_005a02a0(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0150 (005a0150) at 005a01b6 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModel_lightVertices_FUN_0059ab50
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a01d0
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_FUN_005a02a0(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *this_ptr_00;
  int unaff_EBX;
  int in_stack_00000008;
  int lod_index;
  
  if (in_stack_00000008 != this_ptr->field13_0x2230) {
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a01d0(this_ptr);
  }
  lod_index = this_ptr->field14_0x2234;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_lightVertices_FUN_0059ab50(this_ptr_00,lod_index,unaff_EBX);
  return;
}


// Assembly code:
// 005a02a0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_005a02a0
// 005a02a1: PUSH ESI
// 005a02a2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a02a6: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005a02aa: CMP EAX,dword ptr [EBX + 0x2230]
// 005a02b0: JNZ 0x005a02d5
//   XREF to: 005a02d5 (CONDITIONAL_JUMP)
// 005a02b2: MOV ECX,dword ptr [EBX + 0x2234]
//   Label: LAB_005a02b2
// 005a02b8: PUSH ECX
// 005a02b9: MOV ESI,dword ptr [EBX + 0x2230]
// 005a02bf: PUSH ESI
// 005a02c0: PUSH EBX
// 005a02c1: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a02c6: ADD ESP,0x4
// 005a02c9: PUSH EAX
// 005a02ca: CALL core_skeleton.cpp_CDeformableModel_lightVertices_FUN_0059ab50
//   XREF to: 0059ab50 (UNCONDITIONAL_CALL)
// 005a02cf: ADD ESP,0xc
// 005a02d2: POP ESI
// 005a02d3: POP EBX
// 005a02d4: RET
// 005a02d5: PUSH EAX
//   Label: LAB_005a02d5
// 005a02d6: PUSH EBX
// 005a02d7: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 005a02dc: ADD ESP,0x8
// 005a02df: JMP 0x005a02b2
//   XREF to: 005a02b2 (UNCONDITIONAL_JUMP)
