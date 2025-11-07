// Name: core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
// Address: 005a01d0
// Address Range: [[005a01d0, 005a020c]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
// Cross-references:
//   core_bugs.cpp_FUN_00425fe0 (00425fe0) at 0042612b [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00427400 (00427400) at 00427533 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_FUN_0052a870 (0052a870) at 0052a87b [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052aa30 (0052aa30) at 0052aa42 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052beaa [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00597ddc [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690 (0058e690) at 0058e77a [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformable_groundBias_FUN_0058e4e0 (0058e4e0) at 0058e55c [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a05e0 (005a05e0) at 005a0629 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040 (005a1040) at 005a10a3 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0 (005a10e0) at 005a114c [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_005a14b0 (005a14b0) at 005a1503 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005a02f0 (005a02f0) at 005a0327 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005a02a0 (005a02a0) at 005a02d7 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250 (005a0250) at 005a0287 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0 (0059c2f0) at 0059c39f [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460 (0059d460) at 0059d544 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModel_skinVertices_FUN_0059a880
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
          (CDeformableModelInstance *this_ptr,int lod_index)

{
  CDeformableModel *this_ptr_00;
  int in_stack_00000010;
  CMatrix3x4f *lod_index_00;
  CVector3i *bone_matrices;
  int *output_buffer;
  
  output_buffer = this_ptr->part_visibility_flags;
  bone_matrices = this_ptr->skinned_vertices_buffer;
  lod_index_00 = (this_ptr->bone_transform).bone_world_matrices;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_skinVertices_FUN_0059a880
            (this_ptr_00,(int)lod_index_00,(CMatrix3x4f *)bone_matrices,output_buffer);
  this_ptr->cached_skinned_lod_index = in_stack_00000010;
  return;
}


// Assembly code:
// 005a01d0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
// 005a01d1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a01d5: LEA EAX,[EBX + 0x2140]
// 005a01db: PUSH EAX
// 005a01dc: MOV EDX,dword ptr [EBX + 0x2234]
// 005a01e2: PUSH EDX
// 005a01e3: LEA EAX,[EBX + 0xe80]
// 005a01e9: PUSH EAX
// 005a01ea: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a01ee: PUSH ECX
// 005a01ef: PUSH EBX
// 005a01f0: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a01f5: ADD ESP,0x4
// 005a01f8: PUSH EAX
// 005a01f9: CALL core_skeleton.cpp_CDeformableModel_skinVertices_FUN_0059a880
//   XREF to: 0059a880 (UNCONDITIONAL_CALL)
// 005a01fe: ADD ESP,0x14
// 005a0201: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005a0205: MOV dword ptr [EBX + 0x2230],EAX
// 005a020b: POP EBX
// 005a020c: RET
