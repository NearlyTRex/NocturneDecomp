// Name: core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
// Address: 005a15e0
// Address Range: [[005a15e0, 005a16bc]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0(CDeformableModelInstance *this_ptr,SPose *bone_transform)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0(CDeformableModelInstance *this_ptr,SPose *bone_transform)

{
  CSkeleton *pCVar2;
  CDeformableModelInstance *pCVar3;
  int iVar4;
  int iVar5;
  CDeformableModelInstance *pCVar6;
  uint *puVar7;
  uint *puVar8;
  CMatrix3x4f *pCVar9;
  uint *puVar10;
  uint *puVar11;
  CMatrix3x4f *pCVar12;
  byte bVar13;
  SPose *local_14;
  SPose *local_10;
  CDeformableModelInstance *local_c;
  int iVar1;
  
  bVar13 = 0;
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
  iVar5 = 0;
  if (0 < iVar1) {
    local_10 = bone_transform;
    local_14 = bone_transform;
    local_c = this_ptr;
    pCVar3 = this_ptr;
    pCVar6 = this_ptr;
    do {
      puVar10 = (uint *)((int)pCVar6 + (uint)bVar13 * -8 + 0x6b4);
      puVar7 = (uint *)((int)local_14 + (uint)bVar13 * -8 + 0x10);
      (pCVar6->bone_transform).pose_data.bone_rotations[0].w =
           (local_14->pose_data).bone_rotations[0].w;
      puVar11 = puVar10 + (uint)bVar13 * -2 + 1;
      puVar8 = puVar7 + (uint)bVar13 * -2 + 1;
      *puVar10 = *puVar7;
      *puVar11 = *puVar8;
      puVar11[(uint)bVar13 * -2 + 1] = puVar8[(uint)bVar13 * -2 + 1];
      (local_c->bone_transform).bone_scales[0] = bone_transform->bone_scales[0];
      bone_transform = (SPose *)&(bone_transform->pose_data).root_position.y;
      pCVar6 = (CDeformableModelInstance *)&(pCVar6->motion_controller).tween_speed;
      pCVar9 = local_10->bone_world_matrices;
      pCVar12 = (pCVar3->bone_transform).bone_world_matrices;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar12 = (CMatrix3x4f *)((int)pCVar12 + (uint)bVar13 * -8 + 4);
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + (uint)bVar13 * -8 + 4);
        pCVar12->m[0].w = pCVar9->m[0].w;
        pCVar9 = pCVar9;
        pCVar12 = pCVar12;
      }
      iVar5 = iVar5 + 1;
      local_10 = (SPose *)&(local_10->pose_data).bone_rotations[2].x;
      local_c = (CDeformableModelInstance *)&(local_c->motion_controller).current_motion_index;
      local_14 = (SPose *)&(local_14->pose_data).bone_rotations[0].x;
      pCVar3 = (CDeformableModelInstance *)(pCVar3->motion_controller).current_motion_name;
    } while (iVar5 < iVar1);
  }
  this_ptr->cached_skinned_lod_index = -1;
  return;
}
