// Name: core_skeleton.cpp_computeBoneWorldMatrices_FUN_005a1950
// Address: 005a1950
// Address Range: [[005a1950, 005a1b60]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_computeBoneWorldMatrices_FUN_005a1950(SBoneTransformData * bone_data, CDeformableModelInstance * instance_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_computeBoneWorldMatrices_FUN_005a1950
          (SBoneTransformData *bone_data,CDeformableModelInstance *instance_ptr)

{
  SBoneTransformData *pSVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  SBoneTransformData *pSVar3;
  int in_stack_0000000c;
  int in_stack_00000010;
  CVector3f local_34;
  CSkeleton *local_28;
  CMatrix3x4f *local_24;
  int local_20;
  CSkeleton *local_1c;
  CMatrix3x4f *local_18;
  CQuaternion4f *local_14;
  int iVar4;
  
  local_28 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(instance_ptr);
  iVar4 = 0;
  if (0 < local_28->bone_count) {
    local_24 = bone_data->bone_world_matrices;
    local_14 = bone_data->bone_rotations;
    local_34.z = (float)(in_stack_0000000c + 0x58);
    iVar2 = 0;
    pSVar1 = bone_data;
    pSVar3 = bone_data;
    local_1c = local_28;
    local_18 = local_24;
    do {
      local_20 = iVar4 * 0x30;
      core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)local_18,local_14);
      if (pSVar1->current_pose_data[0] != 1.0) {
        *(float *)((int)&bone_data->bone_world_matrices[0].m[1].y +
                  (int)((local_1c->motion_list).state_names + -1) + 2) =
             pSVar1->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[1].y +
                       (int)((local_1c->motion_list).state_names + -1) + 2);
        *(float *)((int)&bone_data->bone_world_matrices[0].m[0].x + (int)local_1c) =
             pSVar1->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[0].x + (int)local_1c);
        *(float *)((int)&bone_data->bone_world_matrices[0].m[0].y + (int)local_1c) =
             pSVar1->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[0].y + (int)local_1c);
        *(float *)((int)&bone_data->bone_world_matrices[0].m[0].z +
                  (int)(local_1c->motion_list).state_names) =
             pSVar1->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[0].z +
                       (int)(local_1c->motion_list).state_names);
        *(float *)((int)&bone_data->bone_world_matrices[0].m[1].x + (int)local_1c) =
             pSVar1->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[1].x + (int)local_1c);
        *(float *)((int)&bone_data->bone_world_matrices[0].m[1].y + (int)local_1c) =
             pSVar1->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[1].y + (int)local_1c);
        *(float *)((int)&bone_data->bone_world_matrices[0].m[1].z +
                  (int)(local_1c->motion_list).state_names) =
             pSVar1->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[1].z +
                       (int)(local_1c->motion_list).state_names);
        *(float *)((int)&bone_data->bone_world_matrices[0].m[2].x + (int)local_1c) =
             pSVar1->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[2].x + (int)local_1c);
        *(float *)((int)&bone_data->bone_world_matrices[0].m[2].y + (int)local_1c) =
             pSVar1->current_pose_data[0] *
             *(float *)((int)&bone_data->bone_world_matrices[0].m[2].y + (int)local_1c);
      }
      if (*(int *)((int)(local_18 + 0xd72) + 0x1c) < 0) {
        pSVar3->bone_world_matrices[0].m[0].z =
             *(float *)(in_stack_00000010 + 0x58 + iVar2) + (bone_data->root_position).x;
        pSVar3->bone_world_matrices[0].m[1].z =
             *(float *)(in_stack_00000010 + 0x5c + iVar2) + (bone_data->root_position).y;
        pSVar3->bone_world_matrices[0].m[2].z =
             *(float *)(in_stack_00000010 + 0x60 + iVar2) + (bone_data->root_position).z;
      }
      else {
        core_xform_cpp_transformVector3x4_FUN_005f4dc0
                  (&local_34,
                   (CVector3f *)((int)((local_28->motion_list).state_names + -1) + 0x1a + iVar2),
                   (CMatrix3x4f *)(*(int *)((int)(local_18 + 0xd72) + 0x1c) * 0x30 + local_20));
        pSVar3->bone_world_matrices[0].m[0].z = local_34.y;
        pSVar3->bone_world_matrices[0].m[1].z = local_34.z;
        pSVar3->bone_world_matrices[0].m[2].z = (float)local_28;
      }
      pSVar1 = (SBoneTransformData *)&(pSVar1->root_position).y;
      pSVar3 = (SBoneTransformData *)&pSVar3->bone_rotations[2].x;
      iVar2 = iVar2 + 0xc;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
      local_1c = (CSkeleton *)((local_1c->motion_list).state_names[1] + 2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_28->bone_count);
  }
  return;
}
