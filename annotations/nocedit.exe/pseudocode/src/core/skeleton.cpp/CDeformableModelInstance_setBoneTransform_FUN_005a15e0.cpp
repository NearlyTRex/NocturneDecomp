// Name: core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
// Address: 005a15e0
// Address Range: [[005a15e0, 005a16bc]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0(CDeformableModelInstance * this_ptr, SBoneTransformData * bone_transform)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
          (CDeformableModelInstance *this_ptr,SBoneTransformData *bone_transform)

{
  int iVar1;
  CSkeleton *pCVar2;
  SBoneTransformData *pSVar3;
  int iVar4;
  int iVar5;
  SBoneTransformData *pSVar6;
  SBoneTransformData *pSVar7;
  uint *puVar8;
  uint *puVar9;
  CMatrix3x4f *pCVar10;
  uint *puVar11;
  uint *puVar12;
  float *pfVar13;
  byte bVar14;
  SBoneTransformData *local_10;
  SBoneTransformData *local_c;
  SBoneTransformData *pSVar15;
  
  bVar14 = 0;
  if (&this_ptr->bone_transform != bone_transform) {
    (this_ptr->bone_transform).root_position.x = (bone_transform->root_position).x;
    (this_ptr->bone_transform).root_position.y = (bone_transform->root_position).y;
    (this_ptr->bone_transform).root_position.z = (bone_transform->root_position).z;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar1 = pCVar2->bone_count;
  iVar5 = 0;
  if (0 < iVar1) {
    local_c = bone_transform;
    local_10 = bone_transform;
    pSVar3 = bone_transform;
    pSVar6 = bone_transform;
    pSVar7 = bone_transform;
    pSVar15 = bone_transform;
    do {
      puVar11 = (uint *)((int)pSVar7 + (uint)bVar14 * -8 + 0x6b4);
      puVar8 = (uint *)((int)local_10 + (uint)bVar14 * -8 + 0x10);
      pSVar7->current_pose_data[0x19] = local_10->bone_rotations[0].w;
      puVar12 = puVar11 + (uint)bVar14 * -2 + 1;
      puVar9 = puVar8 + (uint)bVar14 * -2 + 1;
      *puVar11 = *puVar8;
      *puVar12 = *puVar9;
      puVar12[(uint)bVar14 * -2 + 1] = puVar9[(uint)bVar14 * -2 + 1];
      pSVar15->bone_world_matrices[0x1b].m[0].x = pSVar6->current_pose_data[0];
      pSVar6 = (SBoneTransformData *)&(pSVar6->root_position).y;
      pSVar7 = (SBoneTransformData *)&pSVar7->bone_rotations[0].x;
      pCVar10 = local_c->bone_world_matrices;
      pfVar13 = &pSVar3->bone_world_matrices[0x23].m[1].x;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar13 = pCVar10->m[0].w;
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + (uint)bVar14 * -8 + 4);
        pfVar13 = pfVar13 + (uint)bVar14 * -2 + 1;
      }
      iVar5 = iVar5 + 1;
      local_c = (SBoneTransformData *)&local_c->bone_rotations[2].x;
      pSVar15 = (SBoneTransformData *)&(pSVar15->root_position).y;
      local_10 = (SBoneTransformData *)&local_10->bone_rotations[0].x;
      pSVar3 = (SBoneTransformData *)&pSVar3->bone_rotations[2].x;
    } while (iVar5 < iVar1);
  }
  bone_transform[1].current_pose_data[0x52] = -NAN;
  return;
}
