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
    core_xform_cpp_setRotationScaleIdentity_FUN_005b5480(&local_88);
    local_88.m[0].z = (param_1->bone_transform).pose_data.root_position.x;
    local_88.m[1].z = (param_1->bone_transform).pose_data.root_position.y;
    local_88.m[2].z = (param_1->bone_transform).pose_data.root_position.z;
  }
  else {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(param_1);
    iVar2 = pCVar1->bone_list[param_2].parent_index;
    local_10 = param_2 * 0xc;
    if (iVar2 < 0) {
      local_88.m[0].z =
           (param_1->bone_transform).pose_data.root_position.x + param_1->bone_origins[param_2].x;
      local_88.m[1].z =
           (param_1->bone_transform).pose_data.root_position.y + param_1->bone_origins[param_2].y;
      local_88.m[2].z =
           (param_1->bone_transform).pose_data.root_position.z + param_1->bone_origins[param_2].z;
    }
    else {
      core_skeleton_cpp_FUN_00568e30(param_1,iVar2);
      puVar3 = (uint *)&stack0xffffff48;
      puVar5 = local_58;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      core_xform_cpp_FUN_005b5080((int)&param_1->bone_origins[0].x + local_10,local_58);
      local_28 = local_24[2];
      local_24[(uint)bVar6 * -2] = local_24[(uint)bVar6 * -2 + 3];
      local_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           local_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      local_88.m[0].z = local_28;
      local_88.m[1].z = local_24[0];
      local_88.m[2].z = local_24[1];
    }
    core_xform_cpp_FUN_005b7410
              (&local_88,(param_1->bone_transform).pose_data.bone_rotations + param_2);
    if ((param_1->bone_transform).bone_scales[param_2] != 1.0) {
      local_88.m[0].w = local_88.m[0].w * (param_1->bone_transform).bone_scales[param_2];
      local_88.m[0].x = local_88.m[0].x * (param_1->bone_transform).bone_scales[param_2];
      local_88.m[0].y = local_88.m[0].y * (param_1->bone_transform).bone_scales[param_2];
      local_88.m[1].w = local_88.m[1].w * (param_1->bone_transform).bone_scales[param_2];
      local_88.m[1].x = local_88.m[1].x * (param_1->bone_transform).bone_scales[param_2];
      local_88.m[1].y = local_88.m[1].y * (param_1->bone_transform).bone_scales[param_2];
      local_88.m[2].w = local_88.m[2].w * (param_1->bone_transform).bone_scales[param_2];
      local_88.m[2].x = local_88.m[2].x * (param_1->bone_transform).bone_scales[param_2];
      local_88.m[2].y = local_88.m[2].y * (param_1->bone_transform).bone_scales[param_2];
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
