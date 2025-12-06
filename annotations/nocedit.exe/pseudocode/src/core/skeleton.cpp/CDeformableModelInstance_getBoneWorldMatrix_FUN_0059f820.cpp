// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
// Address: 0059f820
// Address Range: [[0059f820, 0059fa1c]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820(CDeformableModelInstance * this_ptr, int bone_index, CMatrix3x4f * out_matrix)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
          (CDeformableModelInstance *this_ptr,int bone_index,CMatrix3x4f *out_matrix)

{
  CSkeleton *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float *unaff_ESI;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  CMatrix3x4f *in_stack_ffffff54;
  float afStack_a8 [11];
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
  float local_4c;
  CMatrix3x4f CStack_48;
  CVector3f local_18;
  
  bVar5 = 0;
  if (bone_index < 0) {
    core_xform_cpp_setRotationScaleIdentity_FUN_005f5190((CMatrix3x4f *)&local_7c);
    local_6c = (this_ptr->bone_transform).root_position.x;
    local_5c = (this_ptr->bone_transform).root_position.y;
    local_4c = (this_ptr->bone_transform).root_position.z;
  }
  else {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    iVar2 = pCVar1->bone_list[bone_index].parent_index;
    local_18.z = (float)(bone_index * 0xc);
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
                (this_ptr,iVar2,in_stack_ffffff54);
      pfVar3 = afStack_a8;
      pfVar4 = &local_4c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = *pfVar3;
        pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
        pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
      }
      core_xform_cpp_transformVector3x4_FUN_005f4dc0
                (&local_18,(CVector3f *)((int)&this_ptr->transformed_vertices[0].x + unaff_EBP),
                 &CStack_48);
      local_68 = local_18.y;
      local_58 = local_18.z;
    }
    core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280
              ((CMatrix3x3f *)&local_7c,(this_ptr->bone_transform).bone_rotations + bone_index);
    if ((this_ptr->bone_transform).current_pose_data[(int)out_matrix] != 1.0) {
      local_78 = local_78 * (this_ptr->bone_transform).current_pose_data[(int)out_matrix];
      local_74 = local_74 * (this_ptr->bone_transform).current_pose_data[(int)out_matrix];
      local_70 = local_70 * (this_ptr->bone_transform).current_pose_data[(int)out_matrix];
      local_68 = local_68 * (this_ptr->bone_transform).current_pose_data[(int)out_matrix];
      local_64 = local_64 * (this_ptr->bone_transform).current_pose_data[(int)out_matrix];
      local_60 = local_60 * (this_ptr->bone_transform).current_pose_data[(int)out_matrix];
      local_58 = local_58 * (this_ptr->bone_transform).current_pose_data[(int)out_matrix];
      local_54 = local_54 * (this_ptr->bone_transform).current_pose_data[(int)out_matrix];
      local_50 = local_50 * (this_ptr->bone_transform).current_pose_data[(int)out_matrix];
    }
  }
  pfVar3 = &local_78;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
