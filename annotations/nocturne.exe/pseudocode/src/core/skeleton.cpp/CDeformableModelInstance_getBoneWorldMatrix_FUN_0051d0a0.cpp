// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
// Address: 0051d0a0
// Address Range: [[0051d0a0, 0051d29c]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0(CDeformableModelInstance *this_ptr,int bone_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0(CDeformableModelInstance *this_ptr,int bone_index,CMatrix3x4f *out_matrix)

{
  CSkeleton *pCVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  CMatrix3x4f local_ac;
  CMatrix3x4f local_7c;
  CMatrix3x4f local_4c;
  CVector3f local_1c;
  int local_10;
  
  bVar5 = 0;
  if (bone_index < 0) {
    core_xform_cpp_setRotationScaleIdentity_FUN_0055ac80(&local_7c);
    local_7c.m[0].z = (this_ptr->bone_transform).pose_data.root_position.x;
    local_7c.m[1].z = (this_ptr->bone_transform).pose_data.root_position.y;
    local_7c.m[2].z = (this_ptr->bone_transform).pose_data.root_position.z;
  }
  else {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
    iVar2 = pCVar1->bone_list[bone_index].parent_index;
    local_10 = bone_index * 0xc;
    if (iVar2 < 0) {
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
      core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
                (this_ptr,iVar2,&local_ac);
      pCVar3 = &local_ac;
      pCVar4 = &local_4c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar4->m[0].w = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
      }
      core_xform_cpp_transformVector3x4_FUN_0055a8b0
                (&local_1c,(CVector3f *)((int)&this_ptr->transformed_vertices[0].x + local_10),
                 &local_4c);
      local_7c.m[0].z = local_1c.x;
      local_7c.m[1].z = local_1c.y;
      local_7c.m[2].z = local_1c.z;
    }
    core_xform_cpp_quaternionToMatrix3x3_FUN_0055cd70
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
  pCVar3 = &local_7c;
  pCVar4 = out_matrix;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  return out_matrix;
}
