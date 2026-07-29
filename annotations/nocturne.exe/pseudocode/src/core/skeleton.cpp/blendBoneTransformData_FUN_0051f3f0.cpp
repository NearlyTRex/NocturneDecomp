// Name: core_skeleton.cpp_blendBoneTransformData_FUN_0051f3f0
// Address: 0051f3f0
// Address Range: [[0051f3f0, 0051f564]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_blendBoneTransformData_FUN_0051f3f0(SPose *result_pose,SPose *bone_data_out,SPose *bone_data_in,float blend_weight,CDeformableModelInstance *instance_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_blendBoneTransformData_FUN_0051f3f0(SPose *result_pose,SPose *bone_data_out,SPose *bone_data_in,float blend_weight,CDeformableModelInstance *instance_ptr)

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
  CQuaternion4f *local_18;
  CQuaternion4f *local_14;
  
  bVar5 = 0;
  if (blend_weight < 0.0) {
    blend_weight = 0.0;
  }
  if (1.0 < blend_weight) {
    blend_weight = 1.0;
  }
  local_38 = (bone_data_in->pose_data).root_position.x * blend_weight;
  local_34 = (bone_data_in->pose_data).root_position.y * blend_weight;
  local_20 = 1.0 - blend_weight;
  local_30 = (bone_data_in->pose_data).root_position.z * blend_weight;
  local_2c = (bone_data_out->pose_data).root_position.x * local_20;
  local_28 = (bone_data_out->pose_data).root_position.y * local_20;
  local_24 = (bone_data_out->pose_data).root_position.z * local_20;
  local_44 = local_2c + local_38;
  local_40 = local_28 + local_34;
  local_3c = local_24 + local_30;
  if ((SPose *)&stack0xffffffbc != result_pose) {
    (result_pose->pose_data).root_position.x = local_44;
    (result_pose->pose_data).root_position.y = local_40;
    (result_pose->pose_data).root_position.z = local_3c;
  }
  local_1c = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(instance_ptr);
  iVar2 = 0;
  if (0 < local_1c->bone_count) {
    local_14 = (bone_data_out->pose_data).bone_rotations;
    local_18 = (bone_data_in->pose_data).bone_rotations;
    pSVar1 = result_pose;
    do {
      core_xform_cpp_slerpQuaternion_FUN_0055d2d0(local_14,local_18,blend_weight);
      puVar3 = (uint *)((int)pSVar1 + (uint)bVar5 * -8 + 0x10);
      (pSVar1->pose_data).bone_rotations[0].w = local_54;
      puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
      *puVar3 = *(uint *)(&stack0xffffffb0 + (uint)bVar5 * -8);
      *puVar4 = *(uint *)(&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      puVar4[(uint)bVar5 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
            ((uint)bVar5 * -2 + 1) * 4);
      local_18 = local_18 + 1;
      iVar2 = iVar2 + 1;
      local_14 = local_14 + 1;
      pSVar1 = (SPose *)&(pSVar1->pose_data).bone_rotations[0].x;
    } while (iVar2 < local_1c->bone_count);
  }
  core_skeleton_cpp_computeBoneWorldMatrices_FUN_0051f1d0(result_pose,instance_ptr);
  return;
}
