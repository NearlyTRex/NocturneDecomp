// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
// Address: 005a1510
// Address Range: [[005a1510, 005a15d8] [00604b64, 00604b87]]
// Convention: __cdecl
// Signature: SPose * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(CDeformableModelInstance *this_ptr,SPose *bone_transform)

#include "nocturne.h"

SPose * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(CDeformableModelInstance *this_ptr,SPose *bone_transform)

{
  SPose *pSVar1;
  CSkeleton *pCVar2;
  SPose *pSVar3;
  SPose *pSVar2;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  CMatrix3x4f *pCVar8;
  uint *puVar9;
  uint *puVar10;
  CMatrix3x4f *pCVar11;
  byte bVar12;
  CDeformableModelInstance *local_14;
  CDeformableModelInstance *local_10;
  SPose *local_c;
  int iVar1;
  
  bVar12 = 0;
  if (bone_transform != &this_ptr->bone_transform) {
    (bone_transform->pose_data).root_position.x =
         (this_ptr->bone_transform).pose_data.root_position.x;
    (bone_transform->pose_data).root_position.y =
         (this_ptr->bone_transform).pose_data.root_position.y;
    (bone_transform->pose_data).root_position.z =
         (this_ptr->bone_transform).pose_data.root_position.z;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  pSVar1 = (SPose *)pCVar2->bone_count;
  iVar5 = 0;
  pSVar2 = pSVar1;
  if (0 < (int)pSVar1) {
    local_10 = this_ptr;
    local_c = bone_transform;
    local_14 = this_ptr;
    pSVar3 = bone_transform;
    do {
      (bone_transform->pose_data).bone_rotations[0].w =
           (local_14->bone_transform).pose_data.bone_rotations[0].w;
      (bone_transform->pose_data).bone_rotations[0].x =
           (local_14->bone_transform).pose_data.bone_rotations[0].x;
      (bone_transform->pose_data).bone_rotations[0].y =
           (local_14->bone_transform).pose_data.bone_rotations[0].y;
      (bone_transform->pose_data).bone_rotations[0].z =
           (local_14->bone_transform).pose_data.bone_rotations[0].z;
      pSVar2 = (SPose *)&(pSVar3->pose_data).bone_rotations[2].x;
      local_c->bone_scales[0] = (this_ptr->bone_transform).bone_scales[0];
      this_ptr = (CDeformableModelInstance *)&(this_ptr->motion_controller).current_motion_index;
      bone_transform = (SPose *)&(bone_transform->pose_data).bone_rotations[0].x;
      pCVar8 = (local_10->bone_transform).bone_world_matrices;
      pCVar11 = pSVar3->bone_world_matrices;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar11 = (CMatrix3x4f *)((int)pCVar11 + (uint)bVar12 * -8 + 4);
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + (uint)bVar12 * -8 + 4);
        pCVar11->m[0].w = pCVar8->m[0].w;
        pCVar8 = pCVar8;
        pCVar11 = pCVar11;
      }
      iVar5 = iVar5 + 1;
      local_10 = (CDeformableModelInstance *)(local_10->motion_controller).current_motion_name;
      local_c = (SPose *)&(local_c->pose_data).root_position.y;
      local_14 = (CDeformableModelInstance *)&(local_14->motion_controller).tween_speed;
      pSVar3 = pSVar2;
    } while (iVar5 < (int)pSVar1);
  }
  return pSVar2;
}
