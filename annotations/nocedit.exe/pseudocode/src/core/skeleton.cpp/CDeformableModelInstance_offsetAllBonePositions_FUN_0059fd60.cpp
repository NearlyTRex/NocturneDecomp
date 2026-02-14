// Name: core_skeleton.cpp_CDeformableModelInstance_offsetAllBonePositions_FUN_0059fd60
// Address: 0059fd60
// Address Range: [[0059fd60, 0059fdce]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_offsetAllBonePositions_FUN_0059fd60(CDeformableModelInstance *this_ptr,CVector3f *offset_vector)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_offsetAllBonePositions_FUN_0059fd60(CDeformableModelInstance *this_ptr,CVector3f *offset_vector)

{
  CSkeleton *pCVar1;
  CDeformableModelInstance *pCVar2;
  int iVar3;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < pCVar1->bone_count) {
    do {
      (pCVar2->bone_transform).bone_world_matrices[0].m[0].z =
           offset_vector->x + (pCVar2->bone_transform).bone_world_matrices[0].m[0].z;
      (pCVar2->bone_transform).bone_world_matrices[0].m[1].z =
           offset_vector->y + (pCVar2->bone_transform).bone_world_matrices[0].m[1].z;
      iVar3 = iVar3 + 1;
      (pCVar2->bone_transform).bone_world_matrices[0].m[2].z =
           offset_vector->z + (pCVar2->bone_transform).bone_world_matrices[0].m[2].z;
      pCVar2 = (CDeformableModelInstance *)(pCVar2->motion_controller).current_motion_name;
    } while (iVar3 < pCVar1->bone_count);
  }
  this_ptr->cached_skinned_lod_index = -1;
  return;
}
