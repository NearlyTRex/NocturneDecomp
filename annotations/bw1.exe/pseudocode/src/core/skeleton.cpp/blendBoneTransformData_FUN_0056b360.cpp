// Name: core_skeleton.cpp_blendBoneTransformData_FUN_0056b360
// Address: 0056b360
// Address Range: [[0056b360, 0056b51d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_blendBoneTransformData_FUN_0056b360(SPose *result_pose,SPose *bone_data_out,SPose *bone_data_in,float blend_weight,CDeformableModelInstance *instance_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_blendBoneTransformData_FUN_0056b360(SPose *result_pose,SPose *bone_data_out,SPose *bone_data_in,float blend_weight,CDeformableModelInstance *instance_ptr)

{
  CQuaternion4f *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1854 [1524];
  float fStack_78;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CSkeleton *pCStack_1c;
  CQuaternion4f *pCStack_18;
  SPose *pSStack_14;
  
  bVar5 = 0;
  if (blend_weight < 0.0) {
    blend_weight = 0.0;
  }
  if (1.0 < blend_weight) {
    blend_weight = 1.0;
  }
  fStack_68 = (bone_data_in->pose_data).root_position.x * blend_weight;
  fStack_64 = (bone_data_in->pose_data).root_position.y * blend_weight;
  fStack_60 = (bone_data_in->pose_data).root_position.z * blend_weight;
  fStack_20 = 1.0 - blend_weight;
  fStack_5c = (bone_data_out->pose_data).root_position.x * fStack_20;
  fStack_58 = (bone_data_out->pose_data).root_position.y * fStack_20;
  fStack_54 = (bone_data_out->pose_data).root_position.z * fStack_20;
  fStack_50 = fStack_5c + fStack_68;
  fStack_4c = fStack_58 + fStack_64;
  fStack_48 = fStack_54 + fStack_60;
  if ((SPose *)&fStack_38 != result_pose) {
    (result_pose->pose_data).root_position.x = fStack_50;
    (result_pose->pose_data).root_position.y = fStack_4c;
    (result_pose->pose_data).root_position.z = fStack_48;
  }
  iVar2 = 0;
  fStack_44 = fStack_5c;
  fStack_40 = fStack_58;
  fStack_3c = fStack_54;
  fStack_38 = fStack_50;
  fStack_34 = fStack_4c;
  fStack_30 = fStack_48;
  fStack_2c = fStack_68;
  fStack_28 = fStack_64;
  fStack_24 = fStack_60;
  pCStack_1c = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(instance_ptr);
  if (0 < pCStack_1c->bone_count) {
    pCVar1 = (bone_data_out->pose_data).bone_rotations;
    pCStack_18 = (bone_data_in->pose_data).bone_rotations;
    pSStack_14 = result_pose;
    do {
      core_xform_cpp_slerpQuaternion_FUN_005b7940(pCVar1,pCStack_18,blend_weight);
      iVar2 = iVar2 + 1;
      pCVar1 = pCVar1 + 1;
      puVar3 = (uint *)((int)pSStack_14 + (uint)bVar5 * -8 + 0x10);
      (pSStack_14->pose_data).bone_rotations[0].w = fStack_78;
      puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
      *puVar3 = *(uint *)(&stack0xffffff8c + (uint)bVar5 * -8);
      *puVar4 = *(uint *)(&stack0xffffff90 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      puVar4[(uint)bVar5 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffff90 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
            ((uint)bVar5 * -2 + 1) * 4);
      pSStack_14 = (SPose *)&(pSStack_14->pose_data).bone_rotations[0].x;
      pCStack_18 = pCStack_18 + 1;
    } while (iVar2 < pCStack_1c->bone_count);
  }
  core_skeleton_cpp_computeBoneModelMatrices_FUN_0056b130(result_pose,instance_ptr);
  return;
}
