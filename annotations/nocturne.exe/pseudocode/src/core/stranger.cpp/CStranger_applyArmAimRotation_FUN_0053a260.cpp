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
  CDeformableModelInstance *pCVar1;
  CSkeleton *this_ptr_00;
  CQuaternion4f *pCVar2;
  uint *puVar3;
  float *pfVar4;
  char *pcVar5;
  byte bVar6;
  float afStackY_19b8 [1520];
  uint *puVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float *pfVar11;
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
  uint local_34;
  char *local_30;
  int local_2c;
  int local_28;
  int local_24;
  SArmAimData *local_20;
  CDeformableModelInstance *local_1c;
  uint local_18;
  
  bVar6 = 0;
  if (arm_side == 0) {
    local_24 = _DAT_02dc9f5c;
    local_28 = _DAT_02dc9f64;
    core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(0x3fc90fdb);
    local_1cc = afStack_128[3];
    *(float *)((int)&stack0xfffffe38 + (uint)bVar6 * 0xfffffffe * 4) =
         afStack_128[(uint)bVar6 * -2 + 4];
    *(float *)(&stack0xfffffe3c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    *(float *)((int)(&stack0xfffffe3c + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
              ((uint)bVar6 * -2 + 1) * 4) =
         (afStack_128 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_0055d520(1.5707964,&local_1ac);
    local_20 = &this_ptr->left_arm_aim;
    pCVar2 = &local_1ac;
  }
  else {
    local_24 = _DAT_02dc9f60;
    local_28 = _DAT_02dc9f68;
    core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(0xbfc90fdb);
    local_1cc = local_1dc;
    *(uint *)((int)&stack0xfffffe38 + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffe28 + (uint)bVar6 * -8);
    *(uint *)(&stack0xfffffe3c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xfffffe2c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    *(uint *)
     ((int)(&stack0xfffffe3c + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffe2c + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
          ((uint)bVar6 * -2 + 1) * 4);
    core_xform_cpp_quaternionFromAngleZ_FUN_0055d520(-1.5707964,&local_ec);
    local_20 = &this_ptr->right_arm_aim;
    pCVar2 = &local_ec;
  }
  puVar7 = (uint *)((int)pCVar2 + ((uint)bVar6 * -2 + 1) * 4);
  local_1bc = pCVar2->w;
  puVar3 = puVar7 + (uint)bVar6 * -2 + 1;
  *(uint *)((int)&stack0xfffffe48 + (uint)bVar6 * 0xfffffffe * 4) = *puVar7;
  *(uint *)(&stack0xfffffe4c + (uint)bVar6 * -8 + (uint)bVar6 * -8) = *puVar3;
  *(uint *)
   ((int)(&stack0xfffffe4c + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4) =
       puVar3[(uint)bVar6 * -2 + 1];
  local_1e0 = (this_ptr->base).base.layer_action_t;
  local_1e0 = (1.0 - (1.0 - local_20->kickback_factor) * local_1e0) * local_1e0;
  if (0.0 < local_1e0) {
    iVar8 = 1;
    pcVar5 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
             motion_name;
    local_1c = &(this_ptr->base).base.model;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(local_1c);
    iVar8 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010
                      (&this_ptr_00->motion_list,pcVar5,iVar8);
    pCVar1 = local_1c;
    local_34 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                         (local_1c,iVar8,(this_ptr->base).base.layer_action_t);
    local_18 = local_34;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
              (pCVar1,iVar8,local_34,local_1e0,local_24,core_skeleton_cpp_FUN_0051b650);
    core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_20->target_yaw);
    local_16c = local_4c;
    afStack_188[(uint)bVar6 * -2 + 8] = afStack_48[(uint)bVar6 * -2];
    afStack_188[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9] =
         afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    (afStack_188 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1] =
         (afStack_48 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(local_20->target_pitch,&local_19c);
    afStack_188[3] = local_19c.w;
    pfVar11 = (float *)((int)&local_19c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    afStack_188[(uint)bVar6 * -2 + 4] = *(float *)((int)&local_19c + (uint)bVar6 * -8 + 4);
    afStack_188[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5] = *pfVar11;
    (afStack_188 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
         pfVar11[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_0055d130(afStack_188 + 3);
    puVar7 = &stack0xfffffe34;
    uVar9 = 0x3f733333;
    local_18c = local_ac;
    afStack_188[(uint)bVar6 * -2] = afStack_d8[(uint)bVar6 * -2 + 0xc];
    afStack_188[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    (afStack_188 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (afStack_d8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0(&DAT_005a4508,puVar7,uVar9);
    puVar7 = &local_18c;
    local_15c[0] = (float)local_9c;
    afStack_188[(uint)bVar6 * -2 + 0xc] = afStack_d8[(uint)bVar6 * -2 + 0x10];
    fVar10 = local_1e0;
    afStack_188[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         afStack_d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11];
    (afStack_188 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1] =
         (afStack_d8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_0055d130(afStack_188 + 0xb,puVar7,fVar10);
    local_14c[0] = (float)local_bc;
    afStack_188[(uint)bVar6 * -2 + 0x10] = afStack_d8[(uint)bVar6 * -2 + 8];
    afStack_188[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11] =
         afStack_d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9];
    (afStack_188 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11)[(uint)bVar6 * -2 + 1] =
         (afStack_d8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1];
    iVar8 = local_24 * 0x10;
    local_2c = (int)((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + local_24)
    ;
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0(local_2c,afStack_188 + 0xf);
    local_30 = (this_ptr->base).base.base.actor_name + iVar8;
    pcVar5 = local_30 + (uint)bVar6 * -8 + 0x804;
    *(uint *)(local_30 + 0x800) = local_6c;
    *(float *)pcVar5 = afStack_d8[(uint)bVar6 * -2 + 0x1c];
    *(float *)(pcVar5 + ((uint)bVar6 * -2 + 1) * 4) =
         afStack_d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1d];
    *(float *)(pcVar5 + ((uint)bVar6 * -2 + 1) * 4 + ((uint)bVar6 * -2 + 1) * 4) =
         (afStack_d8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1d)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_0055d130(&stack0xfffffe34,&stack0xfffffe44,&local_18c);
    local_12c = local_8c;
    afStack_128[(uint)bVar6 * -2] = afStack_d8[(uint)bVar6 * -2 + 0x14];
    afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15];
    (afStack_128 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (afStack_d8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_12c);
    local_13c.w = local_7c;
    pfVar11 = (float *)((int)&local_13c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_13c + (uint)bVar6 * -8 + 4) = afStack_d8[(uint)bVar6 * -2 + 0x18];
    *pfVar11 = afStack_d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
    pfVar11[(uint)bVar6 * -2 + 1] =
         (afStack_d8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (local_1c,&local_13c,local_1e0,local_28,core_skeleton_cpp_FUN_0051b650);
    if ((float)0.0001 < this_ptr->arm_recoil_blend) {
      core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(1.5707964,&local_5c);
      pfVar11 = afStack_128 + 0xb;
      local_fc[0] = local_5c.w;
      pfVar4 = (float *)((int)&local_5c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      afStack_128[(uint)bVar6 * -2 + 0xc] = *(float *)((int)&local_5c + (uint)bVar6 * -8 + 4);
      afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] = *pfVar4;
      (afStack_128 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1] =
           pfVar4[(uint)bVar6 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_0055d130(afStack_188 + 0xb,pfVar11);
      local_10c[0] = (float)local_dc;
      afStack_128[(uint)bVar6 * -2 + 8] = afStack_d8[(uint)bVar6 * -2];
      afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9] =
           afStack_d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      (afStack_128 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1] =
           (afStack_d8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_0055d2d0
                (local_2c,afStack_128 + 7,this_ptr->arm_recoil_blend);
      pcVar5 = local_30 + (uint)bVar6 * -8 + 0x804;
      *(float *)(local_30 + 0x800) = afStack_d8[3];
      *(float *)pcVar5 = afStack_d8[(uint)bVar6 * -2 + 4];
      *(float *)(pcVar5 + ((uint)bVar6 * -2 + 1) * 4) =
           afStack_d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
      *(float *)(pcVar5 + ((uint)bVar6 * -2 + 1) * 4 + ((uint)bVar6 * -2 + 1) * 4) =
           (afStack_d8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
      return;
    }
  }
  return;
}
