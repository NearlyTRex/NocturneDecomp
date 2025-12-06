// Name: core_skeleton.cpp_blendBoneTransformData_FUN_005a1b70
// Address: 005a1b70
// Address Range: [[005a1b70, 005a1ce4]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_blendBoneTransformData_FUN_005a1b70(CVector3f * result_root_pos, SBoneTransformData * bone_data_out, SBoneTransformData * bone_data_in, float blend_weight, CDeformableModelInstance * instance_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_blendBoneTransformData_FUN_005a1b70
          (CVector3f *result_root_pos,SBoneTransformData *bone_data_out,
          SBoneTransformData *bone_data_in,float blend_weight,CDeformableModelInstance *instance_ptr
          )

{
  SBoneTransformData *pSVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  CDeformableModelInstance *in_stack_00000018;
  float afStackY_182c [1524];
  float in_stack_ffffffb0;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  CSkeleton *local_18;
  CQuaternion4f *local_14;
  CQuaternion4f *result_out;
  
  bVar5 = 0;
  if (blend_weight < 0.0) {
    blend_weight = 0.0;
  }
  if (1.0 < blend_weight) {
    blend_weight = 1.0;
  }
  local_38 = (bone_data_in->root_position).x * blend_weight;
  local_34 = (bone_data_in->root_position).y * blend_weight;
  local_20 = 1.0 - blend_weight;
  local_30 = (bone_data_in->root_position).z * blend_weight;
  local_2c = (bone_data_out->root_position).x * local_20;
  local_28 = (bone_data_out->root_position).y * local_20;
  local_24 = (bone_data_out->root_position).z * local_20;
  local_44.x = local_2c + local_38;
  local_44.y = local_28 + local_34;
  local_44.z = local_24 + local_30;
  if (&local_44 != result_root_pos) {
    result_root_pos->x = local_44.x;
    result_root_pos->y = local_44.y;
    result_root_pos->z = local_44.z;
  }
  local_18 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(instance_ptr);
  iVar2 = 0;
  if (0 < local_18->bone_count) {
    result_out = bone_data_out->bone_rotations;
    local_14 = bone_data_in->bone_rotations;
    pSVar1 = bone_data_out;
    do {
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                (result_out,local_14,(CQuaternion4f *)instance_ptr,in_stack_ffffffb0);
      puVar3 = (uint *)((int)pSVar1 + (uint)bVar5 * -8 + 0x10);
      pSVar1->bone_rotations[0].w = in_stack_ffffffb0;
      puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
      *puVar3 = *(uint *)(&stack0xffffffb4 + (uint)bVar5 * -8);
      *puVar4 = *(uint *)(&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      puVar4[(uint)bVar5 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
            ((uint)bVar5 * -2 + 1) * 4);
      local_14 = local_14 + 1;
      iVar2 = iVar2 + 1;
      result_out = result_out + 1;
      pSVar1 = (SBoneTransformData *)&pSVar1->bone_rotations[0].x;
    } while (iVar2 < local_18->bone_count);
  }
  core_skeleton_cpp_computeBoneWorldMatrices_FUN_005a1950(bone_data_out,in_stack_00000018);
  return;
}
