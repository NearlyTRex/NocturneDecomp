// Name: core_skeleton.cpp_computeBoneWorldMatrices_FUN_005a1950
// Address: 005a1950
// Address Range: [[005a1950, 005a1b60]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_computeBoneWorldMatrices_FUN_005a1950 (SBoneTransformData *bone_data,CDeformableModelInstance *instance_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_computeBoneWorldMatrices_FUN_005a1950
          (SBoneTransformData *bone_data,CDeformableModelInstance *instance_ptr)

{
  int iVar1;
  SBoneTransformData *pSVar2;
  int iVar3;
  SBoneTransformData *pSVar4;
  CVector3f local_3c;
  CVector3f *local_30;
  CSkeleton *local_2c;
  CMatrix3x4f *local_28;
  int local_24;
  CSkeleton *local_20;
  CMatrix3x4f *local_1c;
  CQuaternion4f *local_18;
  int local_14;
  
  local_2c = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(instance_ptr);
  local_14 = 0;
  if (0 < local_2c->bone_count) {
    local_28 = bone_data->bone_world_matrices;
    local_18 = bone_data->bone_rotations;
    local_30 = instance_ptr->transformed_vertices;
    iVar3 = 0;
    pSVar2 = bone_data;
    pSVar4 = bone_data;
    local_20 = local_2c;
    local_1c = local_28;
    do {
      local_24 = local_14 * 0x30;
      core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)local_1c,local_18);
      if (pSVar2->current_pose_data[0] != 1.0) {
        *(float *)((int)&bone_data->bone_world_matrices[0].m[0].w + local_24) =
             pSVar2->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[0].w + local_24);
        *(float *)((int)&bone_data->bone_world_matrices[0].m[0].x + local_24) =
             pSVar2->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[0].x + local_24);
        *(float *)((int)&bone_data->bone_world_matrices[0].m[0].y + local_24) =
             pSVar2->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[0].y + local_24);
        *(float *)((int)&bone_data->bone_world_matrices[0].m[1].w + local_24) =
             pSVar2->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[1].w + local_24);
        *(float *)((int)&bone_data->bone_world_matrices[0].m[1].x + local_24) =
             pSVar2->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[1].x + local_24);
        *(float *)((int)&bone_data->bone_world_matrices[0].m[1].y + local_24) =
             pSVar2->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[1].y + local_24);
        *(float *)((int)&bone_data->bone_world_matrices[0].m[2].w + local_24) =
             pSVar2->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[2].w + local_24);
        *(float *)((int)&bone_data->bone_world_matrices[0].m[2].x + local_24) =
             pSVar2->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[2].x + local_24);
        *(float *)((int)&bone_data->bone_world_matrices[0].m[2].y + local_24) =
             pSVar2->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[2].y + local_24);
      }
      iVar1 = local_20->bone_list[0].parent_index;
      if (iVar1 < 0) {
        pSVar4->bone_world_matrices[0].m[0].z =
             *(float *)((int)&instance_ptr->transformed_vertices[0].x + iVar3) +
             (bone_data->root_position).x;
        pSVar4->bone_world_matrices[0].m[1].z =
             *(float *)((int)&instance_ptr->transformed_vertices[0].y + iVar3) +
             (bone_data->root_position).y;
        pSVar4->bone_world_matrices[0].m[2].z =
             *(float *)((int)&instance_ptr->transformed_vertices[0].z + iVar3) +
             (bone_data->root_position).z;
      }
      else {
        core_xform_cpp_transformVector3x4_FUN_005f4dc0
                  (&local_3c,(CVector3f *)((int)&local_30->x + iVar3),local_28 + iVar1);
        pSVar4->bone_world_matrices[0].m[0].z = local_3c.x;
        pSVar4->bone_world_matrices[0].m[1].z = local_3c.y;
        pSVar4->bone_world_matrices[0].m[2].z = local_3c.z;
      }
      pSVar2 = (SBoneTransformData *)&(pSVar2->root_position).y;
      pSVar4 = (SBoneTransformData *)&pSVar4->bone_rotations[2].x;
      iVar3 = iVar3 + 0xc;
      local_1c = local_1c + 1;
      local_18 = local_18 + 1;
      local_20 = (CSkeleton *)((local_20->motion_list).state_names[1] + 2);
      local_14 = local_14 + 1;
    } while (local_14 < local_2c->bone_count);
  }
  return;
}
