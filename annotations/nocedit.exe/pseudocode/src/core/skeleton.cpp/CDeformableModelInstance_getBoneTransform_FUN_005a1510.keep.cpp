// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
// Address: 005a1510
// MANUAL RECONSTRUCTION
// Address Range: [[005a1510, 005a15d8] [00604b64, 00604b87] [03fc3dbc, 03fc3e25]]
// Convention: __cdecl
// Signature: SPose * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(CDeformableModelInstance *this_ptr,SPose *bone_transform)

#include "nocturne.h"

SPose * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(CDeformableModelInstance *this_ptr,SPose *bone_transform)

{
  CSkeleton *pCVar2;
  int iVar5;

  if (bone_transform != &this_ptr->bone_transform) {
    (bone_transform->pose_data).root_position = (this_ptr->bone_transform).pose_data.root_position;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  for (iVar5 = 0; iVar5 < pCVar2->bone_count; iVar5 = iVar5 + 1) {
    (bone_transform->pose_data).bone_rotations[iVar5] =
         (this_ptr->bone_transform).pose_data.bone_rotations[iVar5];
    bone_transform->bone_scales[iVar5] = (this_ptr->bone_transform).bone_scales[iVar5];
    bone_transform->bone_world_matrices[iVar5] =
         (this_ptr->bone_transform).bone_world_matrices[iVar5];
  }
  return bone_transform;
}
