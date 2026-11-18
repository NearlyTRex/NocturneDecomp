// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00546790
// Address: 00546790
// Address Range: [[00546790, 0054699c]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00546790(CDeformableModelInstance *this_ptr,int bone_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00546790(CDeformableModelInstance *this_ptr,int bone_index,CMatrix3x4f *out_matrix)

{
  CSkeleton *pCVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  float afStackY_1010 [980];
  CMatrix3x4f local_b8;
  CMatrix3x4f local_88;
  CMatrix3x4f local_58;
  float local_28;
  float local_24 [2];
  CVector3f local_1c;
  int local_10;
  
  bVar5 = 0;
  if (bone_index < 0) {
    core_xform_cpp_setRotationScaleIdentity_FUN_00591930(&local_88);
    local_88.m[0].z = (this_ptr->bone_transform).pose_data.root_position.x;
    local_88.m[1].z = (this_ptr->bone_transform).pose_data.root_position.y;
    local_88.m[2].z = (this_ptr->bone_transform).pose_data.root_position.z;
  }
  else {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
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
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00546790
                (this_ptr,iVar2,&local_b8);
      pCVar3 = &local_b8;
      pCVar4 = &local_58;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar4->m[0].w = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
      }
      core_xform_cpp_transformVector3x4_FUN_00591530
                ((CVector3f *)((int)&this_ptr->bone_origins[0].x + local_10),&local_58,&local_1c);
      local_28 = local_1c.x;
      local_24[(uint)bVar5 * -2] = *(float *)((int)&local_1c + (uint)bVar5 * -8 + 4);
      local_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           *(float *)((int)&local_1c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      local_88.m[0].z = local_28;
      local_88.m[1].z = local_24[0];
      local_88.m[2].z = local_24[1];
    }
    core_xform_cpp_quaternionToMatrix3x3_FUN_005938c0
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
  pCVar4 = out_matrix;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  return out_matrix;
}
