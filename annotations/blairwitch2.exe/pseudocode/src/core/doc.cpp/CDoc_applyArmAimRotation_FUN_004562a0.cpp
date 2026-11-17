// Name: core_doc.cpp_CDoc_applyArmAimRotation_FUN_004562a0
// Address: 004562a0
// Address Range: [[004562a0, 004567b4]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_applyArmAimRotation_FUN_004562a0(CDoc *this_ptr,int arm_side)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_doc_cpp_CDoc_applyArmAimRotation_FUN_004562a0(CDoc *this_ptr,int arm_side)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CQuaternion4f *pCVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  byte bVar6;
  float afStackY_1a78 [1520];
  int iVar7;
  float fVar8;
  float local_2a0;
  CQuaternion4f local_29c;
  CQuaternion4f local_28c;
  CQuaternion4f local_27c;
  CQuaternion4f local_26c;
  CQuaternion4f local_25c;
  CQuaternion4f local_24c;
  CQuaternion4f local_23c;
  CQuaternion4f local_22c;
  CQuaternion4f local_21c;
  CQuaternion4f local_20c;
  CQuaternion4f local_1fc;
  CQuaternion4f local_1ec;
  CQuaternion4f local_1dc;
  CQuaternion4f local_1cc;
  CQuaternion4f local_1bc;
  CQuaternion4f local_1ac;
  CQuaternion4f local_19c;
  CQuaternion4f local_18c;
  CQuaternion4f local_17c;
  CQuaternion4f local_16c;
  CQuaternion4f local_15c;
  CQuaternion4f local_14c;
  CQuaternion4f local_13c;
  CQuaternion4f local_12c;
  CQuaternion4f local_11c;
  CQuaternion4f local_10c;
  CQuaternion4f local_fc;
  CQuaternion4f local_ec;
  CQuaternion4f local_dc;
  CQuaternion4f local_cc;
  CQuaternion4f local_bc;
  CQuaternion4f local_ac;
  CQuaternion4f local_9c;
  CQuaternion4f local_8c;
  CQuaternion4f local_7c;
  CQuaternion4f local_6c;
  CQuaternion4f local_5c;
  CQuaternion4f local_4c;
  float local_34;
  int local_30;
  char *local_2c;
  CQuaternion4f *local_28;
  int local_24;
  SArmAimData *local_20;
  CDeformableModelInstance *local_1c;
  float local_18;
  
  bVar6 = 0;
  if (arm_side == 0) {
    local_24 = g_INT_01b4d264;
    local_30 = g_INT_01b4d26c;
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(1.5707964,&local_1ac);
    local_28c.w = local_1ac.w;
    puVar3 = (uint *)((int)&local_28c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar2 = (uint *)((int)&local_1ac + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_28c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_1ac + (uint)bVar6 * -8 + 4);
    *puVar3 = *puVar2;
    puVar3[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(1.5707964,&local_29c);
    local_27c.w = local_29c.w;
    puVar3 = (uint *)((int)&local_27c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar2 = (uint *)((int)&local_29c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_27c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_29c + (uint)bVar6 * -8 + 4);
    *puVar3 = *puVar2;
    puVar3[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(-0.7853982,&local_20c);
    pCVar1 = &local_1bc;
    local_1bc.w = local_20c.w;
    puVar3 = (uint *)((int)&local_1bc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar2 = (uint *)((int)&local_20c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1bc + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_20c + (uint)bVar6 * -8 + 4);
    *puVar3 = *puVar2;
    puVar3[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(1.5707964,&local_17c);
    local_1cc.w = local_17c.w;
    puVar3 = (uint *)((int)&local_1cc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar2 = (uint *)((int)&local_17c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1cc + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_17c + (uint)bVar6 * -8 + 4);
    *puVar3 = *puVar2;
    puVar3[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_1cc,pCVar1,&local_16c);
    local_20 = &this_ptr->left_arm_aim;
    pCVar1 = &local_16c;
  }
  else {
    local_24 = g_INT_01b4d268;
    local_30 = g_INT_01b4d270;
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-1.5707964,&local_24c);
    local_28c.w = local_24c.w;
    puVar3 = (uint *)((int)&local_28c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar2 = (uint *)((int)&local_24c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_28c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_24c + (uint)bVar6 * -8 + 4);
    *puVar3 = *puVar2;
    puVar3[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(-1.5707964,&local_12c);
    local_27c.w = local_12c.w;
    puVar3 = (uint *)((int)&local_27c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar2 = (uint *)((int)&local_12c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_27c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_12c + (uint)bVar6 * -8 + 4);
    *puVar3 = *puVar2;
    puVar3[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(-0.7853982,&local_11c);
    pCVar1 = &local_25c;
    local_25c.w = local_11c.w;
    puVar3 = (uint *)((int)&local_25c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar2 = (uint *)((int)&local_11c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_25c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_11c + (uint)bVar6 * -8 + 4);
    *puVar3 = *puVar2;
    puVar3[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(-1.5707964,&local_10c);
    local_15c.w = local_10c.w;
    puVar3 = (uint *)((int)&local_15c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar2 = (uint *)((int)&local_10c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_15c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_10c + (uint)bVar6 * -8 + 4);
    *puVar3 = *puVar2;
    puVar3[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_15c,pCVar1,&local_fc);
    local_20 = &this_ptr->right_arm_aim;
    pCVar1 = &local_fc;
  }
  puVar2 = (uint *)((int)pCVar1 + ((uint)bVar6 * -2 + 1) * 4);
  local_26c.w = pCVar1->w;
  puVar4 = (uint *)((int)&local_26c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar3 = puVar2 + (uint)bVar6 * -2 + 1;
  *(uint *)((int)&local_26c + (uint)bVar6 * -8 + 4) = *puVar2;
  *puVar4 = *puVar3;
  puVar4[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
  local_2a0 = (this_ptr->base).base.layer_action_t;
  local_2a0 = (1.0 - (1.0 - local_20->kickback_factor) * local_2a0) * local_2a0;
  if (0.0 < local_2a0) {
    iVar7 = 1;
    pcVar5 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
             motion_name;
    local_1c = &(this_ptr->base).base.model;
    this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(local_1c);
    iVar7 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                      (&this_ptr_01->motion_list,pcVar5,iVar7);
    this_ptr_00 = local_1c;
    local_34 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00503f50
                         (&local_1c->base,iVar7,(this_ptr->base).base.layer_action_t);
    local_18 = local_34;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
              (this_ptr_00,iVar7,local_34,local_2a0,local_24,
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_20->target_yaw,&local_8c);
    pCVar1 = &local_21c;
    local_21c.w = local_8c.w;
    puVar3 = (uint *)((int)&local_21c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar2 = (uint *)((int)&local_8c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_21c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_8c + (uint)bVar6 * -8 + 4);
    *puVar3 = *puVar2;
    puVar3[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_20->target_pitch,&local_6c);
    local_22c.w = local_6c.w;
    puVar3 = (uint *)((int)&local_22c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar2 = (uint *)((int)&local_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_22c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_6c + (uint)bVar6 * -8 + 4);
    *puVar3 = *puVar2;
    puVar3[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_22c,pCVar1,&local_ec);
    pCVar1 = &local_28c;
    fVar8 = 0.95;
    local_23c.w = local_ec.w;
    puVar3 = (uint *)((int)&local_23c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar2 = (uint *)((int)&local_ec + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_23c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_ec + (uint)bVar6 * -8 + 4);
    *puVar3 = *puVar2;
    puVar3[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_00593df0(&g_IdentityQuaternion,pCVar1,fVar8,&local_dc);
    core_xform_cpp_slerpQuaternion_FUN_00593df0(&g_IdentityQuaternion,&local_26c,0.95,&local_cc);
    pCVar1 = &local_23c;
    local_7c.w = local_cc.w;
    puVar3 = (uint *)((int)&local_7c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar2 = (uint *)((int)&local_cc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_7c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_cc + (uint)bVar6 * -8 + 4);
    fVar8 = local_2a0;
    *puVar3 = *puVar2;
    puVar3[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_7c,pCVar1,&local_bc);
    local_1fc.w = local_bc.w;
    puVar3 = (uint *)((int)&local_1fc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar2 = (uint *)((int)&local_bc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1fc + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_bc + (uint)bVar6 * -8 + 4);
    *puVar3 = *puVar2;
    puVar3[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
    iVar7 = local_24 * 0x10;
    local_28 = (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + local_24;
    core_xform_cpp_slerpQuaternion_FUN_00593df0(local_28,&local_1fc,fVar8,&local_9c);
    local_2c = (this_ptr->base).base.base.actor_name + iVar7;
    pcVar5 = local_2c + (uint)bVar6 * -8 + 0x968;
    *(float *)(local_2c + 0x964) = local_9c.w;
    puVar2 = (uint *)((int)&local_9c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)pcVar5 = *(uint *)((int)&local_9c + (uint)bVar6 * -8 + 4);
    *(uint *)(pcVar5 + ((uint)bVar6 * -2 + 1) * 4) = *puVar2;
    *(uint *)(pcVar5 + ((uint)bVar6 * -2 + 1) * 4 + ((uint)bVar6 * -2 + 1) * 4) =
         puVar2[(uint)bVar6 * -2 + 1];
    pCVar1 = &local_23c;
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_28c,&local_27c,&local_19c);
    local_1dc.w = local_19c.w;
    puVar3 = (uint *)((int)&local_1dc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar2 = (uint *)((int)&local_19c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1dc + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_19c + (uint)bVar6 * -8 + 4);
    *puVar3 = *puVar2;
    puVar3[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_1dc,pCVar1,&local_18c);
    local_1ec.w = local_18c.w;
    puVar3 = (uint *)((int)&local_1ec + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar2 = (uint *)((int)&local_18c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1ec + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_18c + (uint)bVar6 * -8 + 4);
    *puVar3 = *puVar2;
    puVar3[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (local_1c,&local_1ec,local_2a0,local_30,
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
    if ((float)0.0001 < this_ptr->arm_recoil_blend) {
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(0.7853982,&local_14c);
      pCVar1 = &local_4c;
      local_4c.w = local_14c.w;
      puVar3 = (uint *)((int)&local_4c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar2 = (uint *)((int)&local_14c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_4c + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_14c + (uint)bVar6 * -8 + 4);
      *puVar3 = *puVar2;
      puVar3[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_7c,pCVar1,&local_13c);
      local_5c.w = local_13c.w;
      puVar3 = (uint *)((int)&local_5c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar2 = (uint *)((int)&local_13c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_5c + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_13c + (uint)bVar6 * -8 + 4);
      *puVar3 = *puVar2;
      puVar3[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_00593df0
                (local_28,&local_5c,this_ptr->arm_recoil_blend,&local_ac);
      pcVar5 = local_2c + (uint)bVar6 * -8 + 0x968;
      *(float *)(local_2c + 0x964) = local_ac.w;
      puVar2 = (uint *)((int)&local_ac + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)pcVar5 = *(uint *)((int)&local_ac + (uint)bVar6 * -8 + 4);
      *(uint *)(pcVar5 + ((uint)bVar6 * -2 + 1) * 4) = *puVar2;
      *(uint *)(pcVar5 + ((uint)bVar6 * -2 + 1) * 4 + ((uint)bVar6 * -2 + 1) * 4) =
           puVar2[(uint)bVar6 * -2 + 1];
      return;
    }
  }
  return;
}
