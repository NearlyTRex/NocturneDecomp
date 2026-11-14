// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
// Address: 005469a0
// Address Range: [[005469a0, 00546a8a]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0(CDeformableModelInstance *this_ptr,int bone_index,CVector3f *out_position)

#include "nocturne.h"

CVector3f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0(CDeformableModelInstance *this_ptr,int bone_index,CVector3f *out_position)

{
  CVector3f *pCVar1;
  CSkeleton *pCVar2;
  int iVar3;
  uint *puVar4;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  uint auStackY_1000 [986];
  CMatrix3x4f local_90;
  uint local_60 [12];
  float local_30;
  float local_2c;
  float local_28;
  float local_18;
  uint auStack_14 [2];
  SPose *pSVar5;
  
  bVar7 = 0;
  if (bone_index < 0) {
    pSVar5 = &this_ptr->bone_transform;
  }
  else {
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
    iVar3 = pCVar2->bone_list[bone_index].parent_index;
    pCVar1 = this_ptr->bone_origins + bone_index;
    if (iVar3 < 0) {
      local_30 = pCVar1->x + (this_ptr->bone_transform).pose_data.root_position.x;
      local_2c = pCVar1->y + (this_ptr->bone_transform).pose_data.root_position.y;
      pSVar5 = (SPose *)&local_30;
      local_28 = pCVar1->z + (this_ptr->bone_transform).pose_data.root_position.z;
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00546790
                (this_ptr,iVar3,&local_90);
      pCVar6 = &local_90;
      puVar4 = local_60;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *(uint *)pCVar6;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      }
      core_xform_cpp_FUN_00591530(pCVar1,local_60);
      pSVar5 = (SPose *)&stack0xffffffdc;
    }
  }
  puVar4 = (uint *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
  local_18 = (pSVar5->pose_data).root_position.x;
  auStack_14[(uint)bVar7 * -2] = *puVar4;
  auStack_14[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
  puVar4 = (uint *)((int)out_position + (uint)bVar7 * -8 + 4);
  out_position->x = local_18;
  *puVar4 = auStack_14[(uint)bVar7 * -2];
  puVar4[(uint)bVar7 * -2 + 1] = auStack_14[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  return out_position;
}
