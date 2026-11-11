// Name: core_skeleton.cpp_FUN_005469a0
// Address: 005469a0
// Address Range: [[005469a0, 00546a8a]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_005469a0(CDeformableModelInstance *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_skeleton_cpp_FUN_005469a0(CDeformableModelInstance *param_1,int param_2)

{
  CVector3f *pCVar1;
  CSkeleton *pCVar2;
  int iVar3;
  float *unaff_ESI;
  uint *puVar4;
  uint *puVar6;
  byte bVar7;
  float afStackY_1000 [986];
  uint local_60 [12];
  float local_30;
  float local_2c;
  float local_28;
  float local_18;
  float afStack_14 [2];
  SPose *pSVar5;
  
  bVar7 = 0;
  if (param_2 < 0) {
    pSVar5 = &param_1->bone_transform;
  }
  else {
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(param_1);
    iVar3 = pCVar2->bone_list[param_2].parent_index;
    pCVar1 = param_1->bone_origins + param_2;
    if (iVar3 < 0) {
      local_30 = pCVar1->x + (param_1->bone_transform).pose_data.root_position.x;
      local_2c = pCVar1->y + (param_1->bone_transform).pose_data.root_position.y;
      pSVar5 = (SPose *)&local_30;
      local_28 = pCVar1->z + (param_1->bone_transform).pose_data.root_position.z;
    }
    else {
      core_skeleton_cpp_FUN_00546790(param_1,iVar3);
      puVar4 = (uint *)&stack0xffffff70;
      puVar6 = local_60;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      core_xform_cpp_FUN_00591530(pCVar1,local_60);
      pSVar5 = (SPose *)&stack0xffffffdc;
    }
  }
  puVar4 = (uint *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
  local_18 = (pSVar5->pose_data).root_position.x;
  *(uint *)((int)afStack_14 + (uint)bVar7 * 0xfffffff8) = *puVar4;
  afStack_14[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 1] =
       (float)puVar4[(uint)bVar7 * -2 + 1];
  *unaff_ESI = local_18;
  unaff_ESI[(uint)bVar7 * -2 + 1] = *(float *)((int)afStack_14 + (uint)bVar7 * 0xfffffff8);
  (unaff_ESI + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
       afStack_14[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 1];
  return;
}
