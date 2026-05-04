// Name: core_skeleton.cpp_computeBoneWorldMatrices_FUN_005a1950
// Address: 005a1950
// MANUAL RECONSTRUCTION
// Address Range: [[005a1950, 005a1b60]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_computeBoneWorldMatrices_FUN_005a1950(SPose *bone_data,CDeformableModelInstance *instance_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_computeBoneWorldMatrices_FUN_005a1950(SPose *bone_data,CDeformableModelInstance *instance_ptr)

{
  CSkeleton *pCVar1;
  CVector3f local_3c;
  CMatrix3x4f *local_1c;
  CQuaternion4f *local_18;
  int local_14;
  int iVar1;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(instance_ptr);
  local_14 = 0;
  if (0 < pCVar1->bone_count) {
    local_18 = (bone_data->pose_data).bone_rotations;
    local_1c = bone_data->bone_world_matrices;
    do {
      core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280(local_1c,local_18);
      if (bone_data->bone_scales[local_14] != 1.0) {
        bone_data->bone_world_matrices[local_14].m[0].w =
             bone_data->bone_scales[local_14] * bone_data->bone_world_matrices[local_14].m[0].w;
        bone_data->bone_world_matrices[local_14].m[0].x =
             bone_data->bone_scales[local_14] * bone_data->bone_world_matrices[local_14].m[0].x;
        bone_data->bone_world_matrices[local_14].m[0].y =
             bone_data->bone_scales[local_14] * bone_data->bone_world_matrices[local_14].m[0].y;
        bone_data->bone_world_matrices[local_14].m[1].w =
             bone_data->bone_scales[local_14] * bone_data->bone_world_matrices[local_14].m[1].w;
        bone_data->bone_world_matrices[local_14].m[1].x =
             bone_data->bone_scales[local_14] * bone_data->bone_world_matrices[local_14].m[1].x;
        bone_data->bone_world_matrices[local_14].m[1].y =
             bone_data->bone_scales[local_14] * bone_data->bone_world_matrices[local_14].m[1].y;
        bone_data->bone_world_matrices[local_14].m[2].w =
             bone_data->bone_scales[local_14] * bone_data->bone_world_matrices[local_14].m[2].w;
        bone_data->bone_world_matrices[local_14].m[2].x =
             bone_data->bone_scales[local_14] * bone_data->bone_world_matrices[local_14].m[2].x;
        bone_data->bone_world_matrices[local_14].m[2].y =
             bone_data->bone_scales[local_14] * bone_data->bone_world_matrices[local_14].m[2].y;
      }
      iVar1 = pCVar1->bone_list[local_14].parent_index;
      if (iVar1 < 0) {
        bone_data->bone_world_matrices[local_14].m[0].z =
             instance_ptr->transformed_vertices[local_14].x +
             (bone_data->pose_data).root_position.x;
        bone_data->bone_world_matrices[local_14].m[1].z =
             instance_ptr->transformed_vertices[local_14].y +
             (bone_data->pose_data).root_position.y;
        bone_data->bone_world_matrices[local_14].m[2].z =
             instance_ptr->transformed_vertices[local_14].z +
             (bone_data->pose_data).root_position.z;
      }
      else {
        core_xform_cpp_transformVector3x4_FUN_005f4dc0
                  (&local_3c,&instance_ptr->transformed_vertices[local_14],
                   bone_data->bone_world_matrices + iVar1);
        bone_data->bone_world_matrices[local_14].m[0].z = local_3c.x;
        bone_data->bone_world_matrices[local_14].m[1].z = local_3c.y;
        bone_data->bone_world_matrices[local_14].m[2].z = local_3c.z;
      }
      local_1c = local_1c + 1;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    } while (local_14 < pCVar1->bone_count);
  }
  return;
}
