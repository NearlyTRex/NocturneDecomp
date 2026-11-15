// Name: core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0058aab0
// Address: 0058aab0
// Address Range: [[0058aab0, 0058aea6]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_applyArmAimRotation_FUN_0058aab0(CStranger *this_ptr,int arm_side)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_applyArmAimRotation_FUN_0058aab0(CStranger *this_ptr,int arm_side)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  uint *puVar1;
  float *pfVar2;
  float *pfVar3;
  uint *puVar4;
  char *pcVar5;
  byte bVar6;
  float afStackY_19b8 [1520];
  CQuaternion4f *pCVar7;
  int iVar8;
  uint uVar9;
  float local_1e0;
  CQuaternion4f local_1dc;
  CQuaternion4f local_1cc;
  CQuaternion4f local_1bc;
  float local_1ac [4];
  CQuaternion4f local_19c;
  CQuaternion4f local_18c;
  CQuaternion4f local_17c;
  CQuaternion4f local_16c;
  CQuaternion4f local_15c;
  float local_14c;
  float afStack_148 [3];
  CQuaternion4f local_13c;
  CQuaternion4f local_12c;
  CQuaternion4f local_11c;
  float local_10c;
  float afStack_108 [3];
  CQuaternion4f local_fc;
  float local_ec [4];
  CQuaternion4f local_dc;
  uint local_cc;
  float afStack_c8 [3];
  CQuaternion4f local_bc;
  CQuaternion4f local_ac;
  float local_9c;
  float afStack_98 [3];
  CQuaternion4f local_8c;
  CQuaternion4f local_7c;
  uint local_6c;
  float afStack_68 [3];
  CQuaternion4f local_5c;
  CQuaternion4f local_4c;
  float local_34;
  char *local_30;
  int local_2c;
  int local_28;
  int local_24;
  SArmAimData *local_20;
  CDeformableModelInstance *local_1c;
  float local_18;
  
  bVar6 = 0;
  if (arm_side == 0) {
    local_24 = _DAT_02c8360c;
    local_28 = _DAT_02c83614;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(1.5707964,&local_11c);
    local_1cc.w = local_11c.w;
    puVar4 = (uint *)((int)&local_1cc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_11c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1cc + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_11c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(0x3fc90fdb);
    local_20 = &this_ptr->left_arm_aim;
    pfVar2 = local_1ac;
  }
  else {
    local_24 = _DAT_02c83610;
    local_28 = _DAT_02c83618;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-1.5707964,&local_1dc);
    local_1cc.w = local_1dc.w;
    puVar4 = (uint *)((int)&local_1cc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_1dc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1cc + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_1dc + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(0xbfc90fdb);
    local_20 = &this_ptr->right_arm_aim;
    pfVar2 = local_ec;
  }
  pfVar3 = pfVar2 + (uint)bVar6 * -2 + 1;
  local_1bc.w = *pfVar2;
  local_1ac[(uint)bVar6 * -2 + -3] = *pfVar3;
  local_1ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -2] = pfVar3[(uint)bVar6 * -2 + 1];
  (local_1ac + (uint)bVar6 * -2 + (uint)bVar6 * -2 + -2)[(uint)bVar6 * -2 + 1] =
       (pfVar3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  local_1e0 = (this_ptr->base).base.layer_action_t;
  local_1e0 = (1.0 - (1.0 - local_20->kickback_factor) * local_1e0) * local_1e0;
  if (0.0 < local_1e0) {
    iVar8 = 1;
    pcVar5 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
             motion_name;
    local_1c = &(this_ptr->base).base.model;
    this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(local_1c);
    iVar8 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                      (&this_ptr_01->motion_list,pcVar5,iVar8);
    this_ptr_00 = local_1c;
    local_34 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00525110
                         (&local_1c->base,iVar8,(this_ptr->base).base.layer_action_t);
    local_18 = local_34;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
              (this_ptr_00,iVar8,local_34,local_1e0,local_24,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_20->target_yaw,&local_4c);
    pCVar7 = &local_16c;
    local_16c.w = local_4c.w;
    puVar4 = (uint *)((int)&local_16c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_4c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_16c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_4c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(local_20->target_pitch,&local_19c);
    local_17c.w = local_19c.w;
    puVar4 = (uint *)((int)&local_17c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_19c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_17c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_19c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_17c,pCVar7,&local_ac);
    pCVar7 = &local_1cc;
    uVar9 = 0x3f733333;
    local_18c.w = local_ac.w;
    puVar4 = (uint *)((int)&local_18c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_ac + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_18c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_ac + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005b7940(&DAT_006081e0,pCVar7,uVar9);
    pCVar7 = &local_18c;
    local_15c.w = local_9c;
    pfVar2 = (float *)((int)&local_15c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_15c + (uint)bVar6 * -8 + 4) = afStack_98[(uint)bVar6 * -2];
    *pfVar2 = afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar2[(uint)bVar6 * -2 + 1] =
         (afStack_98 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_15c,pCVar7,&local_bc);
    local_14c = local_bc.w;
    pfVar2 = (float *)((int)&local_bc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    afStack_148[(uint)bVar6 * -2] = *(float *)((int)&local_bc + (uint)bVar6 * -8 + 4);
    afStack_148[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] = *pfVar2;
    (afStack_148 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         pfVar2[(uint)bVar6 * -2 + 1];
    iVar8 = local_24 * 0x10;
    local_2c = (int)((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + local_24)
    ;
    core_xform_cpp_slerpQuaternion_FUN_005b7940(local_2c,&local_14c);
    local_30 = (this_ptr->base).base.base.actor_name + iVar8;
    pcVar5 = local_30 + (uint)bVar6 * -8 + 0x80c;
    *(uint *)(local_30 + 0x808) = local_6c;
    *(float *)pcVar5 = afStack_68[(uint)bVar6 * -2];
    *(float *)(pcVar5 + ((uint)bVar6 * -2 + 1) * 4) =
         afStack_68[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    *(float *)(pcVar5 + ((uint)bVar6 * -2 + 1) * 4 + ((uint)bVar6 * -2 + 1) * 4) =
         (afStack_68 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    pCVar7 = &local_18c;
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_1cc,&local_1bc,&local_8c);
    local_12c.w = local_8c.w;
    puVar4 = (uint *)((int)&local_12c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_8c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_12c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_8c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_12c,pCVar7,&local_7c);
    local_13c.w = local_7c.w;
    puVar4 = (uint *)((int)&local_13c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_7c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_13c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_7c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (local_1c,&local_13c,local_1e0,local_28,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    if ((float)_DAT_005f6b89 < this_ptr->arm_recoil_blend) {
      core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(1.5707964,&local_5c);
      pCVar7 = &local_fc;
      local_fc.w = local_5c.w;
      pfVar2 = (float *)((int)&local_5c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      local_ec[(uint)bVar6 * -2 + -3] = *(float *)((int)&local_5c + (uint)bVar6 * -8 + 4);
      local_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -2] = *pfVar2;
      (local_ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + -2)[(uint)bVar6 * -2 + 1] =
           pfVar2[(uint)bVar6 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_15c,pCVar7,&local_dc);
      local_10c = local_dc.w;
      pfVar2 = (float *)((int)&local_dc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      afStack_108[(uint)bVar6 * -2] = *(float *)((int)&local_dc + (uint)bVar6 * -8 + 4);
      afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] = *pfVar2;
      (afStack_108 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
           pfVar2[(uint)bVar6 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_005b7940(local_2c,&local_10c,this_ptr->arm_recoil_blend);
      pcVar5 = local_30 + (uint)bVar6 * -8 + 0x80c;
      *(uint *)(local_30 + 0x808) = local_cc;
      *(float *)pcVar5 = afStack_c8[(uint)bVar6 * -2];
      *(float *)(pcVar5 + ((uint)bVar6 * -2 + 1) * 4) =
           afStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      *(float *)(pcVar5 + ((uint)bVar6 * -2 + 1) * 4 + ((uint)bVar6 * -2 + 1) * 4) =
           (afStack_c8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      return;
    }
  }
  return;
}
