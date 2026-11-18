// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
// Address: 005469a0
// Address Range: [[005469a0, 00546a8a]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0(CDeformableModelInstance *this_ptr,int bone_index,CVector3f *out_position)

#include "nocturne.h"

CVector3f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0(CDeformableModelInstance *this_ptr,int bone_index,CVector3f *out_position)

{
  CVector3f *input_vector;
  CSkeleton *pCVar1;
  int iVar2;
  uint *puVar3;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  uint auStackY_1000 [986];
  CMatrix3x4f local_90;
  CMatrix3x4f local_60;
  CVector3f local_30;
  CVector3f local_24;
  float local_18;
  uint auStack_14 [2];
  CVector3f *pCVar4;
  
  bVar7 = 0;
  if (bone_index < 0) {
    pCVar4 = (CVector3f *)&this_ptr->bone_transform;
  }
  else {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
    iVar2 = pCVar1->bone_list[bone_index].parent_index;
    input_vector = this_ptr->bone_origins + bone_index;
    if (iVar2 < 0) {
      local_30.x = input_vector->x + (this_ptr->bone_transform).pose_data.root_position.x;
      local_30.y = input_vector->y + (this_ptr->bone_transform).pose_data.root_position.y;
      pCVar4 = &local_30;
      local_30.z = input_vector->z + (this_ptr->bone_transform).pose_data.root_position.z;
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00546790
                (this_ptr,iVar2,&local_90);
      pCVar5 = &local_90;
      pCVar6 = &local_60;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar6->m[0].w = *(float *)pCVar5;
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
      }
      core_xform_cpp_transformVector3x4_FUN_00591530(input_vector,&local_60,&local_24);
      pCVar4 = &local_24;
    }
  }
  puVar3 = (uint *)((int)pCVar4 + (uint)bVar7 * -8 + 4);
  local_18 = pCVar4->x;
  auStack_14[(uint)bVar7 * -2] = *puVar3;
  auStack_14[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  puVar3 = (uint *)((int)out_position + (uint)bVar7 * -8 + 4);
  out_position->x = local_18;
  *puVar3 = auStack_14[(uint)bVar7 * -2];
  puVar3[(uint)bVar7 * -2 + 1] = auStack_14[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  return out_position;
}
