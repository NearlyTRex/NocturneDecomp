// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
// Address: 005a1510
// Address Range: [[005a1510, 005a15d8]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(CDeformableModelInstance * this_ptr, SBoneTransformData * bone_transform)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
          (CDeformableModelInstance *this_ptr,SBoneTransformData *bone_transform)

{
  int iVar1;
  CSkeleton *pCVar2;
  SBoneTransformData *pSVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  CMatrix3x4f *pCVar8;
  uint *puVar9;
  uint *puVar10;
  CMatrix3x4f *pCVar11;
  byte bVar12;
  CDeformableModelInstance *local_10;
  CDeformableModelInstance *local_c;
  SBoneTransformData *pSVar13;
  
  bVar12 = 0;
  if (bone_transform != &this_ptr->bone_transform) {
    (bone_transform->root_position).x = (this_ptr->bone_transform).root_position.x;
    (bone_transform->root_position).y = (this_ptr->bone_transform).root_position.y;
    (bone_transform->root_position).z = (this_ptr->bone_transform).root_position.z;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar1 = pCVar2->bone_count;
  iVar5 = 0;
  if (0 < iVar1) {
    local_c = this_ptr;
    local_10 = this_ptr;
    pSVar3 = bone_transform;
    pSVar13 = bone_transform;
    do {
      puVar9 = (uint *)((int)bone_transform + (uint)bVar12 * -8 + 0x10);
      puVar6 = (uint *)((int)local_10 + (uint)bVar12 * -8 + 0x6b4);
      bone_transform->bone_rotations[0].w = (local_10->bone_transform).bone_rotations[0].w;
      puVar10 = puVar9 + (uint)bVar12 * -2 + 1;
      puVar7 = puVar6 + (uint)bVar12 * -2 + 1;
      *puVar9 = *puVar6;
      *puVar10 = *puVar7;
      puVar10[(uint)bVar12 * -2 + 1] = puVar7[(uint)bVar12 * -2 + 1];
      pSVar13->current_pose_data[0] = (this_ptr->bone_transform).current_pose_data[0];
      this_ptr = (CDeformableModelInstance *)&(this_ptr->motion_controller).current_motion_index;
      bone_transform = (SBoneTransformData *)&bone_transform->bone_rotations[0].x;
      pCVar8 = (local_c->bone_transform).bone_world_matrices;
      pCVar11 = pSVar3->bone_world_matrices;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar11->m[0].w = pCVar8->m[0].w;
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + (uint)bVar12 * -8 + 4);
        pCVar11 = (CMatrix3x4f *)((int)pCVar11 + (uint)bVar12 * -8 + 4);
      }
      iVar5 = iVar5 + 1;
      local_c = (CDeformableModelInstance *)(local_c->motion_controller).current_motion_name;
      pSVar13 = (SBoneTransformData *)&(pSVar13->root_position).y;
      local_10 = (CDeformableModelInstance *)&(local_10->motion_controller).tween_speed;
      pSVar3 = (SBoneTransformData *)&pSVar3->bone_rotations[2].x;
    } while (iVar5 < iVar1);
  }
  return;
}
