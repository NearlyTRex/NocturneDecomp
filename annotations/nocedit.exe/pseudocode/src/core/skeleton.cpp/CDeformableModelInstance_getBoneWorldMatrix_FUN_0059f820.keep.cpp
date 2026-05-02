// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
// Address: 0059f820
// MANUAL RECONSTRUCTION
// Address Range: [[0059f820, 0059fa1c] [03fc4d24, 03fc4de4]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820(CDeformableModelInstance *this_ptr,int bone_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820(CDeformableModelInstance *this_ptr,int bone_index,CMatrix3x4f *out_matrix)

{
  int bone_index_00;
  CSkeleton *pCVar1;
  CMatrix3x4f local_ac;
  CMatrix3x4f local_7c;
  CVector3f local_1c;

  if (bone_index < 0) {
    core_xform_cpp_setRotationScaleIdentity_FUN_005f5190(&local_7c);
    local_7c.m[0].z = (this_ptr->bone_transform).pose_data.root_position.x;
    local_7c.m[1].z = (this_ptr->bone_transform).pose_data.root_position.y;
    local_7c.m[2].z = (this_ptr->bone_transform).pose_data.root_position.z;
  }
  else {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    bone_index_00 = pCVar1->bone_list[bone_index].parent_index;
    if (bone_index_00 < 0) {
      local_7c.m[0].z =
           (this_ptr->bone_transform).pose_data.root_position.x +
           this_ptr->transformed_vertices[bone_index].x;
      local_7c.m[1].z =
           (this_ptr->bone_transform).pose_data.root_position.y +
           this_ptr->transformed_vertices[bone_index].y;
      local_7c.m[2].z =
           (this_ptr->bone_transform).pose_data.root_position.z +
           this_ptr->transformed_vertices[bone_index].z;
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
                (this_ptr,bone_index_00,&local_ac);
      core_xform_cpp_transformVector3x4_FUN_005f4dc0
                (&local_1c,this_ptr->transformed_vertices + bone_index,&local_ac);
      local_7c.m[0].z = local_1c.x;
      local_7c.m[1].z = local_1c.y;
      local_7c.m[2].z = local_1c.z;
    }
    core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280
              (&local_7c,(this_ptr->bone_transform).pose_data.bone_rotations + bone_index);
    if ((this_ptr->bone_transform).bone_scales[bone_index] != 1.0) {
      local_7c.m[0].w = local_7c.m[0].w * (this_ptr->bone_transform).bone_scales[bone_index];
      local_7c.m[0].x = local_7c.m[0].x * (this_ptr->bone_transform).bone_scales[bone_index];
      local_7c.m[0].y = local_7c.m[0].y * (this_ptr->bone_transform).bone_scales[bone_index];
      local_7c.m[1].w = local_7c.m[1].w * (this_ptr->bone_transform).bone_scales[bone_index];
      local_7c.m[1].x = local_7c.m[1].x * (this_ptr->bone_transform).bone_scales[bone_index];
      local_7c.m[1].y = local_7c.m[1].y * (this_ptr->bone_transform).bone_scales[bone_index];
      local_7c.m[2].w = local_7c.m[2].w * (this_ptr->bone_transform).bone_scales[bone_index];
      local_7c.m[2].x = local_7c.m[2].x * (this_ptr->bone_transform).bone_scales[bone_index];
      local_7c.m[2].y = local_7c.m[2].y * (this_ptr->bone_transform).bone_scales[bone_index];
    }
  }
  out_matrix->m[0].w = local_7c.m[0].w;
  out_matrix->m[0].x = local_7c.m[0].x;
  out_matrix->m[0].y = local_7c.m[0].y;
  out_matrix->m[0].z = local_7c.m[0].z;
  out_matrix->m[1].w = local_7c.m[1].w;
  out_matrix->m[1].x = local_7c.m[1].x;
  out_matrix->m[1].y = local_7c.m[1].y;
  out_matrix->m[1].z = local_7c.m[1].z;
  out_matrix->m[2].w = local_7c.m[2].w;
  out_matrix->m[2].x = local_7c.m[2].x;
  out_matrix->m[2].y = local_7c.m[2].y;
  out_matrix->m[2].z = local_7c.m[2].z;
  return out_matrix;
}
