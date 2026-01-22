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
  CVector3f *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1830 [1524];
  CQuaternion4f local_54;
  CVector3f local_44;
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
  
  bVar6 = 0;
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
  local_1c = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(instance_ptr);
  iVar2 = 0;
  if (0 < local_1c->bone_count) {
    local_14 = bone_data_out->bone_rotations;
    local_18 = bone_data_in->bone_rotations;
    pCVar1 = result_root_pos;
    do {
      core_xform_cpp_slerpQuaternion_FUN_005f77e0(local_14,local_18,blend_weight,&local_54);
      puVar4 = (uint *)((int)pCVar1 + (uint)bVar6 * -8 + 0x10);
      pCVar1[1].x = local_54.w;
      puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar3 = (uint *)((int)&local_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *puVar4 = *(uint *)((int)&local_54 + (uint)bVar6 * -8 + 4);
      *puVar5 = *puVar3;
      puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
      local_18 = local_18 + 1;
      iVar2 = iVar2 + 1;
      local_14 = local_14 + 1;
      pCVar1 = (CVector3f *)&pCVar1[1].y;
    } while (iVar2 < local_1c->bone_count);
  }
  core_skeleton_cpp_computeBoneWorldMatrices_FUN_005a1950
            ((SBoneTransformData *)result_root_pos,instance_ptr);
  return;
}
