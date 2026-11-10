// Name: core_skeleton.cpp_FUN_0054d9c0
// Address: 0054d9c0
// Address Range: [[0054d9c0, 0054dbcc]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_0054d9c0(CDeformableModelInstance *param_1,int param_2)

#include "nocturne.h"

void core_skeleton_cpp_FUN_0054d9c0(CDeformableModelInstance *param_1,int param_2)

{
  CSkeleton *pCVar1;
  int iVar2;
  float *unaff_ESI;
  uint *puVar3;
  CMatrix3x4f *pCVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1010 [980];
  CMatrix3x4f local_88;
  uint local_58 [12];
  float local_28;
  float local_24 [5];
  int local_10;
  
  bVar6 = 0;
  if (param_2 < 0) {
    core_xform_cpp_setRotationScaleIdentity_FUN_00583660(&local_88);
    local_88.m[0].z = *(float *)&param_1->field_0x6a4;
    local_88.m[1].z = *(float *)&param_1->field_0x6a8;
    local_88.m[2].z = *(float *)&param_1->field_0x6ac;
  }
  else {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(param_1);
    local_10 = param_2 * 0xc;
    if (*(int *)(pCVar1->bone_list + param_2 * 0x24 + 0x20) < 0) {
      local_88.m[0].z = *(float *)&param_1->field_0x6a4 + param_1->bone_origins[param_2].x;
      local_88.m[1].z = *(float *)&param_1->field_0x6a8 + param_1->bone_origins[param_2].y;
      local_88.m[2].z = *(float *)&param_1->field_0x6ac + param_1->bone_origins[param_2].z;
    }
    else {
      core_skeleton_cpp_FUN_0054d9c0(param_1,*(int *)(pCVar1->bone_list + param_2 * 0x24 + 0x20));
      puVar3 = (uint *)&stack0xffffff48;
      puVar5 = local_58;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      core_xform_cpp_FUN_00583260((int)&param_1->bone_origins[0].x + local_10,local_58);
      local_28 = local_24[2];
      local_24[(uint)bVar6 * -2] = local_24[(uint)bVar6 * -2 + 3];
      local_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           local_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      local_88.m[0].z = local_28;
      local_88.m[1].z = local_24[0];
      local_88.m[2].z = local_24[1];
    }
    core_xform_cpp_quaternionToMatrix3x3_FUN_005855f0
              (&local_88,(CQuaternion4f *)(param_1->rest_bone_scales + param_2 * 4 + 0x67));
    if (*(int *)(&param_1->field_0xcf0 + param_2 * 4) != 0x3f800000) {
      local_88.m[0].w = local_88.m[0].w * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
      local_88.m[0].x = local_88.m[0].x * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
      local_88.m[0].y = local_88.m[0].y * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
      local_88.m[1].w = local_88.m[1].w * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
      local_88.m[1].x = local_88.m[1].x * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
      local_88.m[1].y = local_88.m[1].y * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
      local_88.m[2].w = local_88.m[2].w * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
      local_88.m[2].x = local_88.m[2].x * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
      local_88.m[2].y = local_88.m[2].y * *(float *)(&param_1->field_0xcf0 + param_2 * 4);
    }
  }
  pCVar4 = &local_88;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}
