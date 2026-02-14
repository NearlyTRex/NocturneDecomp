// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
// Address: 0059f820
// Address Range: [[0059f820, 0059fa1c]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820(CDeformableModelInstance *this_ptr,int bone_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820(CDeformableModelInstance *this_ptr,int bone_index,CMatrix3x4f *out_matrix)

{
  CSkeleton *pCVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  CMatrix3x4f local_ac;
  int local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  CMatrix3x4f local_4c;
  CVector3f local_1c;
  int local_10;
  
  bVar6 = 0;
  if (bone_index < 0) {
    core_xform_cpp_setRotationScaleIdentity_FUN_005f5190((CMatrix3x4f *)&local_7c);
    local_70 = (this_ptr->bone_transform).root_position.x;
    local_60 = (this_ptr->bone_transform).root_position.y;
    local_50 = (this_ptr->bone_transform).root_position.z;
  }
  else {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    iVar2 = pCVar1->bone_list[bone_index].parent_index;
    local_10 = bone_index * 0xc;
    if (iVar2 < 0) {
      local_70 = (this_ptr->bone_transform).root_position.x +
                 this_ptr->transformed_vertices[bone_index].x;
      local_60 = (this_ptr->bone_transform).root_position.y +
                 this_ptr->transformed_vertices[bone_index].y;
      local_50 = (this_ptr->bone_transform).root_position.z +
                 this_ptr->transformed_vertices[bone_index].z;
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
                (this_ptr,iVar2,&local_ac);
      pCVar3 = &local_ac;
      pCVar5 = &local_4c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar5->m[0].w = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
      }
      core_xform_cpp_transformVector3x4_FUN_005f4dc0
                (&local_1c,(CVector3f *)((int)&this_ptr->transformed_vertices[0].x + local_10),
                 &local_4c);
      local_70 = local_1c.x;
      local_60 = local_1c.y;
      local_50 = local_1c.z;
    }
    core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280
              ((CMatrix3x3f *)&local_7c,(this_ptr->bone_transform).bone_rotations + bone_index);
    if ((this_ptr->bone_transform).current_pose_data[bone_index] != 1.0) {
      local_7c = (int)((float)local_7c * (this_ptr->bone_transform).current_pose_data[bone_index]);
      local_78 = local_78 * (this_ptr->bone_transform).current_pose_data[bone_index];
      local_74 = local_74 * (this_ptr->bone_transform).current_pose_data[bone_index];
      local_6c = local_6c * (this_ptr->bone_transform).current_pose_data[bone_index];
      local_68 = local_68 * (this_ptr->bone_transform).current_pose_data[bone_index];
      local_64 = local_64 * (this_ptr->bone_transform).current_pose_data[bone_index];
      local_5c = local_5c * (this_ptr->bone_transform).current_pose_data[bone_index];
      local_58 = local_58 * (this_ptr->bone_transform).current_pose_data[bone_index];
      local_54 = local_54 * (this_ptr->bone_transform).current_pose_data[bone_index];
    }
  }
  pfVar4 = (float *)&local_7c;
  pCVar3 = out_matrix;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar3->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
  }
  return out_matrix;
}
