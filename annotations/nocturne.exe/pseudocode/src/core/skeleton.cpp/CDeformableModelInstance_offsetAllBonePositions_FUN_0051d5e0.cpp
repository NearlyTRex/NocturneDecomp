// Name: core_skeleton.cpp_CDeformableModelInstance_offsetAllBonePositions_FUN_0051d5e0
// Address: 0051d5e0
// Address Range: [[0051d5e0, 0051d64e]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModelInstance_offsetAllBonePositions_FUN_0051d5e0(CDeformableModelInstance *param_1,float *param_2)

#include "nocturne.h"

void core_skeleton_cpp_CDeformableModelInstance_offsetAllBonePositions_FUN_0051d5e0(CDeformableModelInstance *param_1,float *param_2)

{
  CSkeleton *pCVar1;
  CDeformableModelInstance *pCVar2;
  int iVar3;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1);
  iVar3 = 0;
  pCVar2 = param_1;
  if (0 < pCVar1->bone_count) {
    do {
      (pCVar2->bone_transform).bone_world_matrices[0].m[0].z =
           *param_2 + (pCVar2->bone_transform).bone_world_matrices[0].m[0].z;
      (pCVar2->bone_transform).bone_world_matrices[0].m[1].z =
           param_2[1] + (pCVar2->bone_transform).bone_world_matrices[0].m[1].z;
      iVar3 = iVar3 + 1;
      (pCVar2->bone_transform).bone_world_matrices[0].m[2].z =
           param_2[2] + (pCVar2->bone_transform).bone_world_matrices[0].m[2].z;
      pCVar2 = (CDeformableModelInstance *)(pCVar2->motion_controller).current_motion_name;
    } while (iVar3 < pCVar1->bone_count);
  }
  param_1->cached_skinned_lod_index = -1;
  return;
}
