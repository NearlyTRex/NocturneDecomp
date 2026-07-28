// Name: core_skeleton.cpp_blendBoneTransformData_FUN_0051f3f0
// Address: 0051f3f0
// Address Range: [[0051f3f0, 0051f564]]
// Convention: unknown
// Signature: void core_skeleton_cpp_blendBoneTransformData_FUN_0051f3f0(SPose *param_1,float *param_2,float *param_3,float param_4,CDeformableModelInstance *param_5)

#include "nocturne.h"

void core_skeleton_cpp_blendBoneTransformData_FUN_0051f3f0(SPose *param_1,float *param_2,float *param_3,float param_4,CDeformableModelInstance *param_5)

{
  SPose *pSVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1830 [1524];
  float local_54;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  CSkeleton *local_1c;
  float *local_18;
  float *local_14;
  
  bVar5 = 0;
  if (param_4 < 0.0) {
    param_4 = 0.0;
  }
  if (1.0 < param_4) {
    param_4 = 1.0;
  }
  local_38 = *param_3 * param_4;
  local_34 = param_3[1] * param_4;
  local_20 = 1.0 - param_4;
  local_30 = param_3[2] * param_4;
  local_2c = *param_2 * local_20;
  local_28 = param_2[1] * local_20;
  local_24 = param_2[2] * local_20;
  local_44 = local_2c + local_38;
  local_40 = local_28 + local_34;
  local_3c = local_24 + local_30;
  if ((SPose *)&stack0xffffffbc != param_1) {
    (param_1->pose_data).root_position.x = local_44;
    (param_1->pose_data).root_position.y = local_40;
    (param_1->pose_data).root_position.z = local_3c;
  }
  local_1c = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_5);
  iVar2 = 0;
  if (0 < local_1c->bone_count) {
    local_14 = param_2 + 3;
    local_18 = param_3 + 3;
    pSVar1 = param_1;
    do {
      core_xform_cpp_slerpQuaternion_FUN_0055d2d0(local_14,local_18,param_4);
      puVar3 = (uint *)((int)pSVar1 + (uint)bVar5 * -8 + 0x10);
      (pSVar1->pose_data).bone_rotations[0].w = local_54;
      puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
      *puVar3 = *(uint *)(&stack0xffffffb0 + (uint)bVar5 * -8);
      *puVar4 = *(uint *)(&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      puVar4[(uint)bVar5 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
            ((uint)bVar5 * -2 + 1) * 4);
      local_18 = local_18 + 4;
      iVar2 = iVar2 + 1;
      local_14 = local_14 + 4;
      pSVar1 = (SPose *)&(pSVar1->pose_data).bone_rotations[0].x;
    } while (iVar2 < local_1c->bone_count);
  }
  core_skeleton_cpp_computeBoneWorldMatrices_FUN_0051f1d0(param_1,param_5);
  return;
}
