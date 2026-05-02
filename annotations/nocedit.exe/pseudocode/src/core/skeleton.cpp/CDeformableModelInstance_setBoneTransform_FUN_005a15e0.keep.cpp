// Name: core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
// Address: 005a15e0
// MANUAL RECONSTRUCTION
// Address Range: [[005a15e0, 005a16bc] [00604b88, 00604bab]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0(CDeformableModelInstance *this_ptr,SPose *bone_transform)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0(CDeformableModelInstance *this_ptr,SPose *bone_transform)

{
  CSkeleton *pCVar2;
  int iVar5;
  int iVar1;

  if (&this_ptr->bone_transform != bone_transform) {
    (this_ptr->bone_transform).pose_data.root_position.x =
         (bone_transform->pose_data).root_position.x;
    (this_ptr->bone_transform).pose_data.root_position.y =
         (bone_transform->pose_data).root_position.y;
    (this_ptr->bone_transform).pose_data.root_position.z =
         (bone_transform->pose_data).root_position.z;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar1 = pCVar2->bone_count;
  for (iVar5 = 0; iVar5 < iVar1; iVar5++) {
    (this_ptr->bone_transform).pose_data.bone_rotations[iVar5] =
         (bone_transform->pose_data).bone_rotations[iVar5];
    (this_ptr->bone_transform).bone_scales[iVar5] = bone_transform->bone_scales[iVar5];
    (this_ptr->bone_transform).bone_world_matrices[iVar5] =
         bone_transform->bone_world_matrices[iVar5];
  }
  this_ptr->cached_skinned_lod_index = -1;
  return;
}
