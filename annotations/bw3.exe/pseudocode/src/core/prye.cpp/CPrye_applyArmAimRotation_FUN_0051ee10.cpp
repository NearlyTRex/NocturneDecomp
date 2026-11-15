// Name: core_prye.cpp_CPrye_applyArmAimRotation_FUN_0051ee10
// Address: 0051ee10
// Address Range: [[0051ee10, 0051f351]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_applyArmAimRotation_FUN_0051ee10(CPrye *this_ptr,int arm_side)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_applyArmAimRotation_FUN_0051ee10(CPrye *this_ptr,int arm_side)

{
  CDeformableModelInstance *pCVar1;
  CSkeleton *pCVar2;
  CQuaternion4f *pCVar3;
  CQuaternion4f *pCVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  float *pfVar8;
  float *pfVar9;
  byte bVar10;
  float afStackY_1a18 [1520];
  float fVar11;
  char *motion_name;
  int iVar12;
  uint uVar13;
  code *blend_callback;
  float local_240;
  CQuaternion4f local_23c;
  CQuaternion4f local_22c;
  CQuaternion4f local_21c;
  CQuaternion4f local_20c;
  CQuaternion4f local_1fc;
  CQuaternion4f local_1ec;
  CQuaternion4f local_1dc;
  CQuaternion4f local_1cc;
  CQuaternion4f local_1bc;
  float local_1ac;
  float afStack_1a8 [3];
  CQuaternion4f local_19c;
  CQuaternion4f local_18c;
  float local_17c;
  float afStack_178 [3];
  CQuaternion4f local_16c;
  float local_15c;
  uint auStack_158 [3];
  CQuaternion4f local_14c;
  CQuaternion4f local_13c;
  float local_12c;
  float afStack_128 [7];
  uint local_10c;
  CQuaternion4f local_fc;
  float local_ec;
  float afStack_e8 [3];
  CQuaternion4f local_dc;
  CQuaternion4f local_cc;
  CQuaternion4f local_bc;
  CQuaternion4f local_ac;
  CQuaternion4f local_9c;
  CQuaternion4f local_8c;
  CQuaternion4f local_7c;
  CQuaternion4f local_6c;
  CQuaternion4f local_5c;
  float local_4c;
  uint auStack_48 [5];
  int local_34;
  float local_30;
  int local_2c;
  CQuaternion4f *local_28;
  int local_24;
  SArmAimData *local_20;
  CDeformableModelInstance *local_1c;
  float local_18;
  
  bVar10 = 0;
  if (arm_side == 0) {
    local_24 = _DAT_01ed36e8;
    local_2c = _DAT_01ed36f0;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(0x3fc90fdb);
    local_22c.w = local_17c;
    pfVar8 = (float *)((int)&local_22c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&local_22c + (uint)bVar10 * -8 + 4) = afStack_178[(uint)bVar10 * -2];
    *pfVar8 = afStack_178[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar8[(uint)bVar10 * -2 + 1] =
         (afStack_178 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(0.0,&local_20c);
    local_20 = &this_ptr->left_arm_aim;
    pCVar4 = &local_20c;
  }
  else {
    local_24 = _DAT_01ed36ec;
    local_2c = _DAT_01ed36f4;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(0xbfc90fdb);
    local_22c.w = local_15c;
    puVar5 = (uint *)((int)&local_22c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&local_22c + (uint)bVar10 * -8 + 4) = auStack_158[(uint)bVar10 * -2];
    *puVar5 = auStack_158[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    puVar5[(uint)bVar10 * -2 + 1] =
         (auStack_158 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(-1.5707964,&local_14c);
    local_20 = &this_ptr->right_arm_aim;
    pCVar4 = &local_14c;
  }
  puVar5 = (uint *)((int)pCVar4 + ((uint)bVar10 * -2 + 1) * 4);
  local_21c.w = pCVar4->w;
  puVar7 = (uint *)((int)&local_21c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
  *(uint *)((int)&local_21c + (uint)bVar10 * -8 + 4) = *puVar5;
  *puVar7 = *puVar6;
  puVar7[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
  local_240 = (this_ptr->base).base.layer_action_t;
  local_240 = (1.0 - (1.0 - local_20->kickback_factor) * local_240) * local_240;
  if (0.0 < local_240) {
    iVar12 = 1;
    motion_name = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
                  motion_name;
    local_1c = &(this_ptr->base).base.model;
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(local_1c);
    iVar12 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                       (&pCVar2->motion_list,motion_name,iVar12);
    pCVar1 = local_1c;
    local_30 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004fca20
                         (&local_1c->base,iVar12,(this_ptr->base).base.layer_action_t);
    local_18 = local_30;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
              (pCVar1,iVar12,local_30,local_240,local_24,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_20->target_yaw);
    pCVar4 = &local_1cc;
    local_1cc.w = local_ec;
    pfVar8 = (float *)((int)&local_1cc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&local_1cc + (uint)bVar10 * -8 + 4) = afStack_e8[(uint)bVar10 * -2];
    *pfVar8 = afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar8[(uint)bVar10 * -2 + 1] =
         (afStack_e8 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(local_20->target_pitch,&local_dc);
    local_1dc.w = local_dc.w;
    puVar6 = (uint *)((int)&local_1dc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar5 = (uint *)((int)&local_dc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&local_1dc + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&local_dc + (uint)bVar10 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_1dc,pCVar4,&local_cc);
    pCVar4 = &local_22c;
    uVar13 = 0x3f733333;
    local_1ec.w = local_cc.w;
    puVar6 = (uint *)((int)&local_1ec + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar5 = (uint *)((int)&local_cc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&local_1ec + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&local_cc + (uint)bVar10 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_00585b20(&DAT_005e65b0,pCVar4,uVar13);
    pCVar4 = &local_1ec;
    local_1bc.w = local_4c;
    puVar5 = (uint *)((int)&local_1bc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&local_1bc + (uint)bVar10 * -8 + 4) = auStack_48[(uint)bVar10 * -2];
    *puVar5 = auStack_48[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    puVar5[(uint)bVar10 * -2 + 1] =
         (auStack_48 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_1bc,pCVar4,&local_1fc);
    local_1ac = local_1fc.w;
    pfVar8 = (float *)((int)&local_1fc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    afStack_1a8[(uint)bVar10 * -2] = *(float *)((int)&local_1fc + (uint)bVar10 * -8 + 4);
    iVar12 = local_24;
    afStack_1a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] = *pfVar8;
    (afStack_1a8 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         pfVar8[(uint)bVar10 * -2 + 1];
    local_28 = (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations;
    core_xform_cpp_slerpQuaternion_FUN_00585b20(local_28 + local_24,&local_1ac);
    puVar5 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[iVar12].w;
    pfVar8 = (float *)(puVar5 + (uint)bVar10 * -2 + 1);
    *puVar5 = local_10c;
    *pfVar8 = afStack_128[(uint)bVar10 * -2 + 8];
    pfVar8[(uint)bVar10 * -2 + 1] = afStack_128[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
    (pfVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (afStack_128 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 9)[(uint)bVar10 * -2 + 1];
    pCVar4 = &local_1ec;
    core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_22c,&local_21c,&local_fc);
    local_18c.w = local_fc.w;
    puVar6 = (uint *)((int)&local_18c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar5 = (uint *)((int)&local_fc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&local_18c + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&local_fc + (uint)bVar10 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_18c,pCVar4,&local_9c);
    iVar12 = local_2c;
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0054bef0;
    local_19c.w = local_9c.w;
    puVar6 = (uint *)((int)&local_19c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar5 = (uint *)((int)&local_9c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&local_19c + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&local_9c + (uint)bVar10 * -8 + 4);
    pCVar1 = local_1c;
    fVar11 = local_240;
    *puVar6 = *puVar5;
    puVar6[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0
              (local_1c,&local_19c,fVar11,iVar12,blend_callback);
    if (arm_side == 0) {
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar1);
      local_18 = (float)core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                                  (pCVar2,"?Bip01 L Finger1" + 1,1);
      local_34 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (pCVar2,"Bip01 L Finger11",1);
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(1.5707964,&local_6c);
      fVar11 = local_18;
      pCVar4 = &local_8c;
      local_18 = (float)((int)local_18 * 0x10);
      pCVar3 = local_28 + (int)fVar11;
      local_8c.w = local_6c.w;
      puVar6 = (uint *)((int)&local_8c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar5 = (uint *)((int)&local_6c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&local_8c + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_6c + (uint)bVar10 * -8 + 4);
      *puVar6 = *puVar5;
      puVar6[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00585990(pCVar3,pCVar4,&local_5c);
      local_19c.w = local_5c.w;
      puVar6 = (uint *)((int)&local_19c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar5 = (uint *)((int)&local_5c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&local_19c + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_5c + (uint)bVar10 * -8 + 4);
      *puVar6 = *puVar5;
      puVar6[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1];
      pfVar8 = (float *)((int)&(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
                               [0].w + (int)local_18);
      pfVar9 = pfVar8 + (uint)bVar10 * -2 + 1;
      *pfVar8 = local_5c.w;
      pfVar8 = (float *)((int)&local_5c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *pfVar9 = *(float *)((int)&local_5c + (uint)bVar10 * -8 + 4);
      pfVar9[(uint)bVar10 * -2 + 1] = *pfVar8;
      (pfVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] = pfVar8[(uint)bVar10 * -2 + 1];
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(3.1415927,&local_13c);
      pCVar4 = &local_7c;
      local_18 = (float)(local_34 * 0x10);
      pCVar3 = local_28 + local_34;
      local_7c.w = local_13c.w;
      puVar6 = (uint *)((int)&local_7c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar5 = (uint *)((int)&local_13c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&local_7c + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_13c + (uint)bVar10 * -8 + 4);
      *puVar6 = *puVar5;
      puVar6[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00585990(pCVar3,pCVar4,&local_23c);
      local_19c.w = local_23c.w;
      puVar6 = (uint *)((int)&local_19c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar5 = (uint *)((int)&local_23c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&local_19c + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_23c + (uint)bVar10 * -8 + 4);
      *puVar6 = *puVar5;
      puVar6[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1];
      pfVar8 = (float *)((int)&(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
                               [0].w + (int)local_18);
      pfVar9 = pfVar8 + (uint)bVar10 * -2 + 1;
      *pfVar8 = local_23c.w;
      pfVar8 = (float *)((int)&local_23c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *pfVar9 = *(float *)((int)&local_23c + (uint)bVar10 * -8 + 4);
      pfVar9[(uint)bVar10 * -2 + 1] = *pfVar8;
      (pfVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] = pfVar8[(uint)bVar10 * -2 + 1];
    }
    if ((float)_DAT_005cd48f < this_ptr->arm_recoil_blend) {
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(1.5707964,&local_bc);
      pCVar4 = &local_16c;
      local_16c.w = local_bc.w;
      puVar6 = (uint *)((int)&local_16c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar5 = (uint *)((int)&local_bc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&local_16c + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_bc + (uint)bVar10 * -8 + 4);
      *puVar6 = *puVar5;
      puVar6[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_1bc,pCVar4,&local_ac);
      local_12c = local_ac.w;
      pfVar8 = (float *)((int)&local_ac + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      afStack_128[(uint)bVar10 * -2] = *(float *)((int)&local_ac + (uint)bVar10 * -8 + 4);
      iVar12 = local_24;
      afStack_128[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] = *pfVar8;
      (afStack_128 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
           pfVar8[(uint)bVar10 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_00585b20
                ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + local_24,
                 &local_12c,this_ptr->arm_recoil_blend);
      puVar5 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[iVar12].w;
      pfVar8 = (float *)(puVar5 + (uint)bVar10 * -2 + 1);
      *puVar5 = afStack_128[3];
      *pfVar8 = afStack_128[(uint)bVar10 * -2 + 4];
      pfVar8[(uint)bVar10 * -2 + 1] = afStack_128[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
      (pfVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
           (afStack_128 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
      return;
    }
  }
  return;
}
