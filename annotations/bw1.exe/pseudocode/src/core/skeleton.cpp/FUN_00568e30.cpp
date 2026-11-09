// Name: core_skeleton.cpp_FUN_00568e30
// Address: 00568e30
// Address Range: [[00568e30, 0056903c]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00568e30(CDeformableModelInstance *param_1,int param_2)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00568e30(CDeformableModelInstance *param_1,int param_2)

{
  CSkeleton *pCVar1;
  int iVar2;
  float *unaff_ESI;
  uint *puVar3;
  float *pfVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1010 [980];
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  uint local_58 [12];
  float local_28;
  float local_24 [5];
  int local_10;
  
  bVar6 = 0;
  if (param_2 < 0) {
    core_xform_cpp_setRotationScaleIdentity_FUN_005b5480(&local_88);
    local_7c = (float)*(uint *)&param_1->field_0x6a4;
    local_6c = (float)*(uint *)&param_1->field_0x6a8;
    local_5c = (float)*(uint *)&param_1->field_0x6ac;
  }
  else {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(param_1);
    local_10 = param_2 * 0xc;
    if (*(int *)(&pCVar1->field_0x1de9c + param_2 * 0x24) < 0) {
      local_7c = *(float *)&param_1->field_0x6a4 + *(float *)(&param_1->field_0x58 + local_10);
      local_6c = *(float *)&param_1->field_0x6a8 + *(float *)(&param_1->field_0x5c + local_10);
      local_5c = *(float *)&param_1->field_0x6ac + *(float *)(&param_1->field_0x60 + local_10);
    }
    else {
      core_skeleton_cpp_FUN_00568e30(param_1,*(int *)(&pCVar1->field_0x1de9c + param_2 * 0x24));
      puVar3 = (uint *)&stack0xffffff48;
      puVar5 = local_58;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      core_xform_cpp_FUN_005b5080(&param_1->field_0x58 + local_10,local_58);
      local_28 = local_24[2];
      local_24[(uint)bVar6 * -2] = local_24[(uint)bVar6 * -2 + 3];
      local_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           local_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      local_7c = local_28;
      local_6c = local_24[0];
      local_5c = local_24[1];
    }
    core_xform_cpp_FUN_005b7410
              ((CMatrix3x4f *)&local_88,(CQuaternion4f *)(&param_1->field_0x6b0 + param_2 * 0x10));
    if (*(int *)(&param_1->field_0xcf0 + param_2 * 4) != 0x3f800000) {
      local_88 = local_88 * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
      local_84 = local_84 * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
      local_80 = local_80 * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
      local_78 = local_78 * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
      local_74 = local_74 * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
      local_70 = local_70 * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
      local_68 = local_68 * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
      local_64 = local_64 * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
      local_60 = local_60 * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
    }
  }
  pfVar4 = &local_88;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}
