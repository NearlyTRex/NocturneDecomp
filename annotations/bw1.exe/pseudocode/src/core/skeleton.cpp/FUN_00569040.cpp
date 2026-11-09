// Name: core_skeleton.cpp_FUN_00569040
// Address: 00569040
// Address Range: [[00569040, 0056912a]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00569040(CDeformableModelInstance *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_skeleton_cpp_FUN_00569040(CDeformableModelInstance *param_1,int param_2)

{
  float *pfVar1;
  CSkeleton *pCVar2;
  int iVar3;
  uint *unaff_ESI;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_1000 [986];
  uint local_60 [12];
  float local_30;
  float local_2c;
  float local_28;
  uint local_24 [3];
  uint local_18;
  uint auStack_14 [2];
  
  bVar6 = 0;
  if (param_2 < 0) {
    puVar4 = (uint *)&param_1->field_0x6a4;
  }
  else {
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(param_1);
    pfVar1 = (float *)(&param_1->field_0x58 + param_2 * 0xc);
    if (*(int *)(&pCVar2->field_0x1de9c + param_2 * 0x24) < 0) {
      local_30 = *pfVar1 + *(float *)&param_1->field_0x6a4;
      local_2c = pfVar1[1] + *(float *)&param_1->field_0x6a8;
      puVar4 = &local_30;
      local_28 = pfVar1[2] + *(float *)&param_1->field_0x6ac;
    }
    else {
      core_skeleton_cpp_FUN_00568e30(param_1,*(int *)(&pCVar2->field_0x1de9c + param_2 * 0x24));
      puVar4 = (uint *)&stack0xffffff70;
      puVar5 = local_60;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      core_xform_cpp_FUN_005b5080(pfVar1,local_60);
      puVar4 = local_24;
    }
  }
  local_18 = *puVar4;
  *(uint *)((int)auStack_14 + (uint)bVar6 * 0xfffffff8) = puVar4[(uint)bVar6 * -2 + 1];
  auStack_14[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1] =
       (puVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  *unaff_ESI = local_18;
  unaff_ESI[(uint)bVar6 * -2 + 1] = *(uint *)((int)auStack_14 + (uint)bVar6 * 0xfffffff8);
  (unaff_ESI + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       auStack_14[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1];
  return;
}
