// Name: core_skeleton.cpp_blendBoneTransformData_FUN_005a1b70
// Address: 005a1b70
// MANUAL RECONSTRUCTION
// Address Range: [[005a1b70, 005a1ce4] [00604bac, 00604bcf]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_blendBoneTransformData_FUN_005a1b70(SPose *result_pose,SPose *bone_data_out,SPose *bone_data_in,float blend_weight,CDeformableModelInstance *instance_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_blendBoneTransformData_FUN_005a1b70(SPose *result_pose,SPose *bone_data_out,SPose *bone_data_in,float blend_weight,CDeformableModelInstance *instance_ptr)

{
  float fVar1;
  CSkeleton *pCVar2;
  int iVar2;
  CQuaternion4f local_54;
  CVector3f local_44;
  CQuaternion4f *local_18;
  CQuaternion4f *local_14;
  
  if (blend_weight < 0.0) {
    blend_weight = 0.0;
  }
  if (1.0 < blend_weight) {
    blend_weight = 1.0;
  }
  fVar1 = 1.0 - blend_weight;
  local_44.x = (bone_data_out->pose_data).root_position.x * fVar1 +
               (bone_data_in->pose_data).root_position.x * blend_weight;
  local_44.y = (bone_data_out->pose_data).root_position.y * fVar1 +
               (bone_data_in->pose_data).root_position.y * blend_weight;
  local_44.z = (bone_data_out->pose_data).root_position.z * fVar1 +
               (bone_data_in->pose_data).root_position.z * blend_weight;
  (result_pose->pose_data).root_position = local_44;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(instance_ptr);
  iVar2 = 0;
  if (0 < pCVar2->bone_count) {
    local_14 = (bone_data_out->pose_data).bone_rotations;
    local_18 = (bone_data_in->pose_data).bone_rotations;
    do {
      core_xform_cpp_slerpQuaternion_FUN_005f77e0(local_14,local_18,blend_weight,&local_54);
      result_pose->pose_data.bone_rotations[iVar2] = local_54;
      local_18 = local_18 + 1;
      iVar2 = iVar2 + 1;
      local_14 = local_14 + 1;
    } while (iVar2 < pCVar2->bone_count);
  }
  core_skeleton_cpp_computeBoneWorldMatrices_FUN_005a1950(result_pose,instance_ptr);
  return;
}
