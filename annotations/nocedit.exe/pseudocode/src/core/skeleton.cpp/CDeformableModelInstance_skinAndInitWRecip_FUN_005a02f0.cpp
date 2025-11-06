// Name: core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005a02f0
// Address: 005a02f0
// Address Range: [[005a02f0, 005a0330]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005a02f0(CDeformableModelInstance * this_ptr, int lod_index)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 (005a0150) at 005a01c2 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005a02f0
          (CDeformableModelInstance *this_ptr,int lod_index)

{
  CDeformableModel *this_ptr_00;
  CVector3i *lod_index_00;
  
  if (lod_index != this_ptr->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr,lod_index);
  }
  lod_index_00 = this_ptr->skinned_vertices_buffer;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90(this_ptr_00,(int)lod_index_00);
  return;
}


// Assembly code:
// 005a02f0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005a02f0
// 005a02f1: PUSH ESI
// 005a02f2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a02f6: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005a02fa: CMP EAX,dword ptr [EBX + 0x2230]
// 005a0300: JNZ 0x005a0325
//   XREF to: 005a0325 (CONDITIONAL_JUMP)
// 005a0302: MOV ECX,dword ptr [EBX + 0x2234]
//   Label: LAB_005a0302
// 005a0308: PUSH ECX
// 005a0309: MOV ESI,dword ptr [EBX + 0x2230]
// 005a030f: PUSH ESI
// 005a0310: PUSH EBX
// 005a0311: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a0316: ADD ESP,0x4
// 005a0319: PUSH EAX
// 005a031a: CALL core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90
//   XREF to: 0059ab90 (UNCONDITIONAL_CALL)
// 005a031f: ADD ESP,0xc
// 005a0322: POP ESI
// 005a0323: POP EBX
// 005a0324: RET
// 005a0325: PUSH EAX
//   Label: LAB_005a0325
// 005a0326: PUSH EBX
// 005a0327: CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 005a032c: ADD ESP,0x8
// 005a032f: JMP 0x005a0302
//   XREF to: 005a0302 (UNCONDITIONAL_JUMP)
