// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
// Address: 0051d0a0
// Address Range: [[0051d0a0, 0051d29c]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0(CDeformableModelInstance *param_1,int param_2)

#include "nocturne.h"

void core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0(CDeformableModelInstance *param_1,int param_2)

{
  CSkeleton *pCVar1;
  int iVar2;
  float *unaff_ESI;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  float local_ac [12];
  CMatrix3x4f local_7c;
  CMatrix3x4f local_4c;
  CVector3f local_1c;
  int local_10;
  
  bVar5 = 0;
  if (param_2 < 0) {
    core_xform_cpp_setRotationScaleIdentity_FUN_0055ac80(&local_7c);
    local_7c.m[0].z = (param_1->bone_transform).pose_data.root_position.x;
    local_7c.m[1].z = (param_1->bone_transform).pose_data.root_position.y;
    local_7c.m[2].z = (param_1->bone_transform).pose_data.root_position.z;
  }
  else {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1);
    iVar2 = pCVar1->bone_list[param_2].parent_index;
    local_10 = param_2 * 0xc;
    if (iVar2 < 0) {
      local_7c.m[0].z =
           (param_1->bone_transform).pose_data.root_position.x +
           param_1->transformed_vertices[param_2].x;
      local_7c.m[1].z =
           (param_1->bone_transform).pose_data.root_position.y +
           param_1->transformed_vertices[param_2].y;
      local_7c.m[2].z =
           (param_1->bone_transform).pose_data.root_position.z +
           param_1->transformed_vertices[param_2].z;
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0(param_1,iVar2);
      pfVar3 = local_ac;
      pCVar4 = &local_4c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar4->m[0].w = *pfVar3;
        pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
      }
      core_xform_cpp_transformVector3x4_FUN_0055a8b0
                (&local_1c,(CVector3f *)((int)&param_1->transformed_vertices[0].x + local_10),
                 &local_4c);
      local_7c.m[0].z = local_1c.x;
      local_7c.m[1].z = local_1c.y;
      local_7c.m[2].z = local_1c.z;
    }
    core_xform_cpp_quaternionToMatrix3x3_FUN_0055cd70
              (&local_7c,(param_1->bone_transform).pose_data.bone_rotations + param_2);
    if ((param_1->bone_transform).bone_scales[param_2] != 1.0) {
      local_7c.m[0].w = local_7c.m[0].w * (param_1->bone_transform).bone_scales[param_2];
      local_7c.m[0].x = local_7c.m[0].x * (param_1->bone_transform).bone_scales[param_2];
      local_7c.m[0].y = local_7c.m[0].y * (param_1->bone_transform).bone_scales[param_2];
      local_7c.m[1].w = local_7c.m[1].w * (param_1->bone_transform).bone_scales[param_2];
      local_7c.m[1].x = local_7c.m[1].x * (param_1->bone_transform).bone_scales[param_2];
      local_7c.m[1].y = local_7c.m[1].y * (param_1->bone_transform).bone_scales[param_2];
      local_7c.m[2].w = local_7c.m[2].w * (param_1->bone_transform).bone_scales[param_2];
      local_7c.m[2].x = local_7c.m[2].x * (param_1->bone_transform).bone_scales[param_2];
      local_7c.m[2].y = local_7c.m[2].y * (param_1->bone_transform).bone_scales[param_2];
    }
  }
  pCVar4 = &local_7c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
