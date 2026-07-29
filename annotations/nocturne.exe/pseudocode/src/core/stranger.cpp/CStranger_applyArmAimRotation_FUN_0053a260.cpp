// Name: core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0053a260
// Address: 0053a260
// Address Range: [[0053a260, 0053a656]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_applyArmAimRotation_FUN_0053a260(CStranger *this_ptr,int arm_side)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_applyArmAimRotation_FUN_0053a260(CStranger *this_ptr,int arm_side)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CQuaternion4f *pCVar1;
  uint *puVar2;
  float *pfVar3;
  char *pcVar4;
  byte bVar5;
  float afStackY_19b8 [1520];
  uint *puVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float *pfVar10;
  float local_1e0;
  uint local_1dc;
  uint local_1cc;
  float local_1bc;
  CQuaternion4f local_1ac;
  CQuaternion4f local_19c;
  uint local_18c;
  float afStack_188 [7];
  uint local_16c;
  float local_15c [4];
  float local_14c [4];
  CQuaternion4f local_13c;
  uint local_12c;
  float afStack_128 [7];
  float local_10c [4];
  float local_fc [4];
  CQuaternion4f local_ec;
  uint local_dc;
  float afStack_d8 [7];
  uint local_bc;
  uint local_ac;
  uint local_9c;
  uint local_8c;
  float local_7c;
  uint local_6c;
  CQuaternion4f local_5c;
  uint local_4c;
  float afStack_48 [5];
  float local_34;
  char *local_30;
  int local_2c;
  int local_28;
  int local_24;
  SArmAimData *local_20;
  CDeformableModelInstance *local_1c;
  float local_18;
  
  bVar5 = 0;
  if (arm_side == 0) {
    local_24 = _DAT_02dc9f5c;
    local_28 = _DAT_02dc9f64;
    core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(0x3fc90fdb);
    local_1cc = afStack_128[3];
    *(float *)((int)&stack0xfffffe38 + (uint)bVar5 * 0xfffffffe * 4) =
         afStack_128[(uint)bVar5 * -2 + 4];
    *(float *)(&stack0xfffffe3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         afStack_128[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
    *(float *)((int)(&stack0xfffffe3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
              ((uint)bVar5 * -2 + 1) * 4) =
         (afStack_128 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_0055d520(1.5707964,&local_1ac);
    local_20 = &this_ptr->left_arm_aim;
    pCVar1 = &local_1ac;
  }
  else {
    local_24 = _DAT_02dc9f60;
    local_28 = _DAT_02dc9f68;
    core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(0xbfc90fdb);
    local_1cc = local_1dc;
    *(uint *)((int)&stack0xfffffe38 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffe28 + (uint)bVar5 * -8);
    *(uint *)(&stack0xfffffe3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xfffffe2c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    *(uint *)
     ((int)(&stack0xfffffe3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffe2c + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
          ((uint)bVar5 * -2 + 1) * 4);
    core_xform_cpp_quaternionFromAngleZ_FUN_0055d520(-1.5707964,&local_ec);
    local_20 = &this_ptr->right_arm_aim;
    pCVar1 = &local_ec;
  }
  puVar6 = (uint *)((int)pCVar1 + ((uint)bVar5 * -2 + 1) * 4);
  local_1bc = pCVar1->w;
  puVar2 = puVar6 + (uint)bVar5 * -2 + 1;
  *(uint *)((int)&stack0xfffffe48 + (uint)bVar5 * 0xfffffffe * 4) = *puVar6;
  *(uint *)(&stack0xfffffe4c + (uint)bVar5 * -8 + (uint)bVar5 * -8) = *puVar2;
  *(uint *)
   ((int)(&stack0xfffffe4c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       puVar2[(uint)bVar5 * -2 + 1];
  local_1e0 = (this_ptr->base).base.layer_action_t;
  local_1e0 = (1.0 - (1.0 - local_20->kickback_factor) * local_1e0) * local_1e0;
  if (0.0 < local_1e0) {
    iVar7 = 1;
    pcVar4 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
             motion_name;
    local_1c = &(this_ptr->base).base.model;
    this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(local_1c);
    iVar7 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010
                      (&this_ptr_01->motion_list,pcVar4,iVar7);
    this_ptr_00 = local_1c;
    local_34 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                         (&local_1c->motion_controller,iVar7,(this_ptr->base).base.layer_action_t);
    local_18 = local_34;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
              (this_ptr_00,iVar7,local_34,local_1e0,local_24,core_skeleton_cpp_FUN_0051b650);
    core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_20->target_yaw);
    local_16c = local_4c;
    afStack_188[(uint)bVar5 * -2 + 8] = afStack_48[(uint)bVar5 * -2];
    afStack_188[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9] =
         afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    (afStack_188 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1] =
         (afStack_48 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(local_20->target_pitch,&local_19c);
    afStack_188[3] = local_19c.w;
    pfVar10 = (float *)((int)&local_19c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    afStack_188[(uint)bVar5 * -2 + 4] = *(float *)((int)&local_19c + (uint)bVar5 * -8 + 4);
    afStack_188[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5] = *pfVar10;
    (afStack_188 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1] =
         pfVar10[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_0055d130(afStack_188 + 3);
    puVar6 = &stack0xfffffe34;
    uVar8 = 0x3f733333;
    local_18c = local_ac;
    afStack_188[(uint)bVar5 * -2] = afStack_d8[(uint)bVar5 * -2 + 0xc];
    afStack_188[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    (afStack_188 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0(&DAT_005a4508,puVar6,uVar8);
    puVar6 = &local_18c;
    local_15c[0] = (float)local_9c;
    afStack_188[(uint)bVar5 * -2 + 0xc] = afStack_d8[(uint)bVar5 * -2 + 0x10];
    fVar9 = local_1e0;
    afStack_188[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
         afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11];
    (afStack_188 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1] =
         (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_0055d130(afStack_188 + 0xb,puVar6,fVar9);
    local_14c[0] = (float)local_bc;
    afStack_188[(uint)bVar5 * -2 + 0x10] = afStack_d8[(uint)bVar5 * -2 + 8];
    afStack_188[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11] =
         afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
    (afStack_188 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1] =
         (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
    iVar7 = local_24 * 0x10;
    local_2c = (int)((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + local_24)
    ;
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0(local_2c,afStack_188 + 0xf);
    local_30 = (this_ptr->base).base.base.actor_name + iVar7;
    pcVar4 = local_30 + (uint)bVar5 * -8 + 0x804;
    *(uint *)(local_30 + 0x800) = local_6c;
    *(float *)pcVar4 = afStack_d8[(uint)bVar5 * -2 + 0x1c];
    *(float *)(pcVar4 + ((uint)bVar5 * -2 + 1) * 4) =
         afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d];
    *(float *)(pcVar4 + ((uint)bVar5 * -2 + 1) * 4 + ((uint)bVar5 * -2 + 1) * 4) =
         (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_0055d130(&stack0xfffffe34,&stack0xfffffe44,&local_18c);
    local_12c = local_8c;
    afStack_128[(uint)bVar5 * -2] = afStack_d8[(uint)bVar5 * -2 + 0x14];
    afStack_128[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15];
    (afStack_128 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_12c);
    local_13c.w = local_7c;
    pfVar10 = (float *)((int)&local_13c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&local_13c + (uint)bVar5 * -8 + 4) = afStack_d8[(uint)bVar5 * -2 + 0x18];
    *pfVar10 = afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
    pfVar10[(uint)bVar5 * -2 + 1] =
         (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19)[(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (local_1c,&local_13c,local_1e0,local_28,core_skeleton_cpp_FUN_0051b650);
    if ((float)0.0001 < this_ptr->arm_recoil_blend) {
      core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(1.5707964,&local_5c);
      pfVar10 = afStack_128 + 0xb;
      local_fc[0] = local_5c.w;
      pfVar3 = (float *)((int)&local_5c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      afStack_128[(uint)bVar5 * -2 + 0xc] = *(float *)((int)&local_5c + (uint)bVar5 * -8 + 4);
      afStack_128[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] = *pfVar3;
      (afStack_128 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1] =
           pfVar3[(uint)bVar5 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_0055d130(afStack_188 + 0xb,pfVar10);
      local_10c[0] = (float)local_dc;
      afStack_128[(uint)bVar5 * -2 + 8] = afStack_d8[(uint)bVar5 * -2];
      afStack_128[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9] =
           afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      (afStack_128 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1] =
           (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_0055d2d0
                (local_2c,afStack_128 + 7,this_ptr->arm_recoil_blend);
      pcVar4 = local_30 + (uint)bVar5 * -8 + 0x804;
      *(float *)(local_30 + 0x800) = afStack_d8[3];
      *(float *)pcVar4 = afStack_d8[(uint)bVar5 * -2 + 4];
      *(float *)(pcVar4 + ((uint)bVar5 * -2 + 1) * 4) =
           afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
      *(float *)(pcVar4 + ((uint)bVar5 * -2 + 1) * 4 + ((uint)bVar5 * -2 + 1) * 4) =
           (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
      return;
    }
  }
  return;
}
