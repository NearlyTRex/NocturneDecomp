// Name: core_skeleton.cpp_computeBoneWorldMatrices_FUN_005a1950
// Address: 005a1950
// Address Range: [[005a1950, 005a1b60]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_computeBoneWorldMatrices_FUN_005a1950(SPose *bone_data,CDeformableModelInstance *instance_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_computeBoneWorldMatrices_FUN_005a1950(SPose *bone_data,CDeformableModelInstance *instance_ptr)

{
  CSkeleton *pCVar1;
  SPose *pSVar2;
  int iVar3;
  SPose *pSVar4;
  CVector3f local_3c;
  CVector3f *local_30;
  CSkeleton *local_2c;
  CMatrix3x4f *local_28;
  int local_24;
  CSkeleton *local_20;
  CMatrix3x4f *local_1c;
  CQuaternion4f *local_18;
  int local_14;
  int iVar1;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(instance_ptr);
  local_14 = 0;
  if (0 < pCVar1->bone_count) {
    local_18 = (bone_data->pose_data).bone_rotations;
    iVar3 = 0;
    pSVar2 = bone_data;
    pSVar4 = bone_data;
    local_20 = pCVar1;
    local_1c = bone_data->bone_world_matrices;
    do {
      core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)local_1c,local_18);
      if (pSVar2->bone_scales[0] != 1.0) {
        bone_data->bone_world_matrices[local_14].m[0].w =
             pSVar2->bone_scales[0] * bone_data->bone_world_matrices[local_14].m[0].w;
        bone_data->bone_world_matrices[local_14].m[0].x =
             pSVar2->bone_scales[0] * bone_data->bone_world_matrices[local_14].m[0].x;
        bone_data->bone_world_matrices[local_14].m[0].y =
             pSVar2->bone_scales[0] * bone_data->bone_world_matrices[local_14].m[0].y;
        bone_data->bone_world_matrices[local_14].m[1].w =
             pSVar2->bone_scales[0] * bone_data->bone_world_matrices[local_14].m[1].w;
        bone_data->bone_world_matrices[local_14].m[1].x =
             pSVar2->bone_scales[0] * bone_data->bone_world_matrices[local_14].m[1].x;
        bone_data->bone_world_matrices[local_14].m[1].y =
             pSVar2->bone_scales[0] * bone_data->bone_world_matrices[local_14].m[1].y;
        bone_data->bone_world_matrices[local_14].m[2].w =
             pSVar2->bone_scales[0] * bone_data->bone_world_matrices[local_14].m[2].w;
        bone_data->bone_world_matrices[local_14].m[2].x =
             pSVar2->bone_scales[0] * bone_data->bone_world_matrices[local_14].m[2].x;
        bone_data->bone_world_matrices[local_14].m[2].y =
             pSVar2->bone_scales[0] * bone_data->bone_world_matrices[local_14].m[2].y;
      }
      iVar1 = local_20->bone_list[0].parent_index;
      if (iVar1 < 0) {
        pSVar4->bone_world_matrices[0].m[0].z =
             *(float *)((int)&instance_ptr->transformed_vertices[0].x + iVar3) +
             (bone_data->pose_data).root_position.x;
        pSVar4->bone_world_matrices[0].m[1].z =
             *(float *)((int)&instance_ptr->transformed_vertices[0].y + iVar3) +
             (bone_data->pose_data).root_position.y;
        pSVar4->bone_world_matrices[0].m[2].z =
             *(float *)((int)&instance_ptr->transformed_vertices[0].z + iVar3) +
             (bone_data->pose_data).root_position.z;
      }
      else {
        core_xform_cpp_transformVector3x4_FUN_005f4dc0
                  (&local_3c,(CVector3f *)((int)&instance_ptr->transformed_vertices[0].x + iVar3),
                   bone_data->bone_world_matrices + iVar1);
        pSVar4->bone_world_matrices[0].m[0].z = local_3c.x;
        pSVar4->bone_world_matrices[0].m[1].z = local_3c.y;
        pSVar4->bone_world_matrices[0].m[2].z = local_3c.z;
      }
      pSVar2 = (SPose *)&(pSVar2->pose_data).root_position.y;
      pSVar4 = (SPose *)&(pSVar4->pose_data).bone_rotations[2].x;
      iVar3 = iVar3 + 0xc;
      local_1c = local_1c + 1;
      local_18 = local_18 + 1;
      local_20 = (CSkeleton *)((local_20->motion_list).state_names[1] + 2);
      local_14 = local_14 + 1;
    } while (local_14 < pCVar1->bone_count);
  }
  return;
}
