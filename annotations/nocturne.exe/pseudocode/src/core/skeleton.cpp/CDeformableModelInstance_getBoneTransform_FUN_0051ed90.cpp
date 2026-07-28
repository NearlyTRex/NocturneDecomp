// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90
// Address: 0051ed90
// Address Range: [[0051ed90, 0051ee58]]
// Convention: __cdecl
// Signature: SPose * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90(CDeformableModelInstance *this_ptr,SPose *bone_transform)

#include "nocturne.h"

SPose * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90(CDeformableModelInstance *this_ptr,SPose *bone_transform)

{
  SPose *pSVar1;
  CSkeleton *pCVar2;
  SPose *pSVar3;
  SPose *pSVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  CMatrix3x4f *pCVar9;
  uint *puVar10;
  uint *puVar11;
  CMatrix3x4f *pCVar12;
  byte bVar13;
  CDeformableModelInstance *local_14;
  CDeformableModelInstance *local_10;
  SPose *local_c;
  
  bVar13 = 0;
  if (bone_transform != &this_ptr->bone_transform) {
    (bone_transform->pose_data).root_position.x =
         (this_ptr->bone_transform).pose_data.root_position.x;
    (bone_transform->pose_data).root_position.y =
         (this_ptr->bone_transform).pose_data.root_position.y;
    (bone_transform->pose_data).root_position.z =
         (this_ptr->bone_transform).pose_data.root_position.z;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  pSVar1 = (SPose *)pCVar2->bone_count;
  iVar6 = 0;
  pSVar4 = pSVar1;
  if (0 < (int)pSVar1) {
    local_10 = this_ptr;
    local_c = bone_transform;
    local_14 = this_ptr;
    pSVar3 = bone_transform;
    do {
      puVar10 = (uint *)((int)bone_transform + (uint)bVar13 * -8 + 0x10);
      puVar7 = (uint *)((int)local_14 + (uint)bVar13 * -8 + 0x6b4);
      (bone_transform->pose_data).bone_rotations[0].w =
           (local_14->bone_transform).pose_data.bone_rotations[0].w;
      puVar11 = puVar10 + (uint)bVar13 * -2 + 1;
      puVar8 = puVar7 + (uint)bVar13 * -2 + 1;
      *puVar10 = *puVar7;
      *puVar11 = *puVar8;
      puVar11[(uint)bVar13 * -2 + 1] = puVar8[(uint)bVar13 * -2 + 1];
      pSVar4 = (SPose *)&(pSVar3->pose_data).bone_rotations[2].x;
      local_c->bone_scales[0] = (this_ptr->bone_transform).bone_scales[0];
      this_ptr = (CDeformableModelInstance *)&(this_ptr->motion_controller).current_motion_index;
      bone_transform = (SPose *)&(bone_transform->pose_data).bone_rotations[0].x;
      pCVar9 = (local_10->bone_transform).bone_world_matrices;
      pCVar12 = pSVar3->bone_world_matrices;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        pCVar12->m[0].w = pCVar9->m[0].w;
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + (uint)bVar13 * -8 + 4);
        pCVar12 = (CMatrix3x4f *)((int)pCVar12 + (uint)bVar13 * -8 + 4);
      }
      iVar6 = iVar6 + 1;
      local_10 = (CDeformableModelInstance *)(local_10->motion_controller).current_motion_name;
      local_c = (SPose *)&(local_c->pose_data).root_position.y;
      local_14 = (CDeformableModelInstance *)&(local_14->motion_controller).tween_speed;
      pSVar3 = pSVar4;
    } while (iVar6 < (int)pSVar1);
  }
  return pSVar4;
}
