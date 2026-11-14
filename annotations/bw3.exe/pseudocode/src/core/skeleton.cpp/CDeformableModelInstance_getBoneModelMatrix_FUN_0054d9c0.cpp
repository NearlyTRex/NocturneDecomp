// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_0054d9c0
// Address: 0054d9c0
// Address Range: [[0054d9c0, 0054dbcc]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_0054d9c0(CDeformableModelInstance *this_ptr,int bone_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_0054d9c0(CDeformableModelInstance *this_ptr,int bone_index,CMatrix3x4f *out_matrix)

{
  CSkeleton *pCVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  float afStackY_1010 [980];
  CMatrix3x4f local_b8;
  CMatrix3x4f local_88;
  float local_58 [12];
  float local_28;
  float local_24 [5];
  int local_10;
  
  bVar6 = 0;
  if (bone_index < 0) {
    core_xform_cpp_setRotationScaleIdentity_FUN_00583660(&local_88);
    local_88.m[0].z = (this_ptr->bone_transform).pose_data.root_position.x;
    local_88.m[1].z = (this_ptr->bone_transform).pose_data.root_position.y;
    local_88.m[2].z = (this_ptr->bone_transform).pose_data.root_position.z;
  }
  else {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
    iVar2 = pCVar1->bone_list[bone_index].parent_index;
    local_10 = bone_index * 0xc;
    if (iVar2 < 0) {
      local_88.m[0].z =
           (this_ptr->bone_transform).pose_data.root_position.x +
           this_ptr->bone_origins[bone_index].x;
      local_88.m[1].z =
           (this_ptr->bone_transform).pose_data.root_position.y +
           this_ptr->bone_origins[bone_index].y;
      local_88.m[2].z =
           (this_ptr->bone_transform).pose_data.root_position.z +
           this_ptr->bone_origins[bone_index].z;
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_0054d9c0
                (this_ptr,iVar2,&local_b8);
      pCVar3 = &local_b8;
      pfVar4 = local_58;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
        pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
      }
      core_xform_cpp_FUN_00583260((int)&this_ptr->bone_origins[0].x + local_10,local_58);
      local_28 = local_24[2];
      local_24[(uint)bVar6 * -2] = local_24[(uint)bVar6 * -2 + 3];
      local_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           local_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      local_88.m[0].z = local_28;
      local_88.m[1].z = local_24[0];
      local_88.m[2].z = local_24[1];
    }
    core_xform_cpp_quaternionToMatrix3x3_FUN_005855f0
              (&local_88,(this_ptr->bone_transform).pose_data.bone_rotations + bone_index);
    if ((this_ptr->bone_transform).bone_scales[bone_index] != 1.0) {
      local_88.m[0].w = local_88.m[0].w * (this_ptr->bone_transform).bone_scales[bone_index];
      local_88.m[0].x = local_88.m[0].x * (this_ptr->bone_transform).bone_scales[bone_index];
      local_88.m[0].y = local_88.m[0].y * (this_ptr->bone_transform).bone_scales[bone_index];
      local_88.m[1].w = local_88.m[1].w * (this_ptr->bone_transform).bone_scales[bone_index];
      local_88.m[1].x = local_88.m[1].x * (this_ptr->bone_transform).bone_scales[bone_index];
      local_88.m[1].y = local_88.m[1].y * (this_ptr->bone_transform).bone_scales[bone_index];
      local_88.m[2].w = local_88.m[2].w * (this_ptr->bone_transform).bone_scales[bone_index];
      local_88.m[2].x = local_88.m[2].x * (this_ptr->bone_transform).bone_scales[bone_index];
      local_88.m[2].y = local_88.m[2].y * (this_ptr->bone_transform).bone_scales[bone_index];
    }
  }
  pCVar3 = &local_88;
  pCVar5 = out_matrix;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar5->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  return out_matrix;
}
