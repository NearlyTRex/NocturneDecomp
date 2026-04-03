// Name: core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80
// Address: 004d4d80
// Address Range: [[004d4d80, 004d5547] [00605402, 00605476] [0060f778, 0060f8d5]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80(CGabriella *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_19d0 [1521];
  CQuaternion4f *pCVar5;
  int iVar6;
  CQuaternion4f local_1f4;
  CQuaternion4f local_1e4;
  CQuaternion4f local_1d4;
  CQuaternion4f local_1c4;
  CQuaternion4f local_1b4;
  CQuaternion4f local_1a4;
  CQuaternion4f local_194;
  CQuaternion4f local_184;
  CQuaternion4f local_174;
  CQuaternion4f local_164;
  CQuaternion4f local_154;
  CQuaternion4f local_144;
  CQuaternion4f local_134;
  CQuaternion4f local_124;
  CQuaternion4f local_114;
  CQuaternion4f local_104;
  CQuaternion4f local_f4;
  CQuaternion4f local_e4;
  CQuaternion4f local_d4;
  CQuaternion4f local_c4;
  CQuaternion4f local_b4;
  CQuaternion4f local_a4;
  CQuaternion4f local_94;
  float local_84;
  float local_80;
  float local_7c;
  CVector3f local_78;
  CVector3f local_6c;
  double local_58;
  CDeformableModelInstance *local_50;
  float local_4c;
  CDeformableModelInstance *local_44;
  float local_40;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  CDeformableModelInstance *local_1c;
  CDeformableModelInstance *local_18;
  CDeformableModelInstance *local_14;
  CDeformableModel_MotionBlendWeightFunc *pcVar10;
  CDeformableModel_MotionBlendWeightFunc *blend_callback;
  CDeformableModel_MotionBlendWeightFunc *pcVar11;
  CQuaternion4f *pCVar8;
  CDeformableModelInstance *pCVar7;
  float fVar1;
  byte *pcVar12;
  float fVar9;
  
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  local_78.x = this_ptr->aim_pitch;
  local_78.z = 0.0;
  local_78.y = this_ptr->aim_yaw;
  core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&local_78,&local_124);
  if (0.0 < this_ptr->draw_blend) {
    local_28 = this_ptr->draw_blend / 0.2f;
    if (1.0 < local_28) {
      local_28 = 1.0;
    }
    if (0.82f < this_ptr->draw_blend) {
      local_28 = (1.0 - (1.0 - this_ptr->aim_weight) *
                        ((this_ptr->draw_blend - 0.82f) / (1.0 - 0.82f))) *
                 local_28;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0
                      (&((this_ptr->base).inventory.selected_weapon)->base,"CGun");
    if (iVar2 == 0) {
      if ((float)0.001 < local_28) {
        local_24 = this_ptr->draw_blend;
        if (0.82f < local_24) {
          local_24 = 0.82f;
        }
        local_24 = (local_24 - 0.2f) / (1.0 - 0.2f);
        if (local_24 < 0.0) {
          local_24 = 0.0;
        }
        if (1.0 < local_24) {
          local_24 = 1.0;
        }
        pCVar1 = &(this_ptr->base).base.model;
        fVar3 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                          (&pCVar1->motion_controller,g_GabriellaIndices[0xd],local_24);
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                  (pCVar1,g_GabriellaIndices[0xd],fVar3,local_28,g_GabriellaIndices[4],
                   core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
        if (0.82f <= this_ptr->draw_blend) {
          local_2c = ((this_ptr->draw_blend - 0.82f) / (1.0 - 0.82f)) *
                     this_ptr->aim_weight;
          if (local_2c < this_ptr->fire_cooldown_timer) {
            local_2c = this_ptr->fire_cooldown_timer;
          }
          if ((float)0.001 < local_2c) {
            local_34 = 0.0;
            if (0.0 < this_ptr->fire_cooldown_timer) {
              local_34 = 1.0 - this_ptr->fire_cooldown_timer;
            }
            pCVar1 = &(this_ptr->base).base.model;
            core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                      (pCVar1,g_GabriellaIndices[0xe],local_34,local_2c * (float)0.90000000000000002,
                       g_GabriellaIndices[0x12],core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
            local_6c.x = (FLOAT_02d7b838 * 3.141593f) / 180.0f;
            local_6c.y = FLOAT_02d7b83c * 3.141593f * 0.005555556f;
            local_6c.z = FLOAT_02d7b840 * 3.141593f * 0.005555556f;
            pCVar5 = &local_1a4;
            core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&local_6c,&local_184);
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_174,pCVar5,&local_f4);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (pCVar1,&local_104,local_2c,g_GabriellaIndices[0x13],
                       core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_004d2a80);
          }
        }
      }
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                 g_GabriellaIndices[0x11],
                 (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                 g_GabriellaIndices[6],this_ptr->draw_blend / 0.64f,&local_1b4);
      pfVar2 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
                [g_GabriellaIndices[0x11]].w;
      *pfVar2 = local_1b4.w;
      pfVar2[1] = local_1b4.x;
      pfVar2[2] = local_1b4.y;
      pfVar2[3] = local_1b4.z;
      iVar6 = g_GabriellaIndices[0xe];
      if (0.0 < this_ptr->fire_cooldown_timer) {
        fVar3 = this_ptr->fire_cooldown_timer;
        pCVar1 = &(this_ptr->base).base.model;
        (this_ptr->base).base.model.bone_update_mode = 2;
        fVar3 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                          (&pCVar1->motion_controller,iVar6,fVar3);
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
                  (pCVar1,g_GabriellaIndices[0xe],fVar3,0);
        (this_ptr->base).base.model.bone_update_mode = 0;
      }
    }
    else {
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                 g_GabriellaIndices[0x11],
                 (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                 g_GabriellaIndices[6],this_ptr->draw_blend / 0.64f,&local_1c4);
      pfVar2 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
                [g_GabriellaIndices[0x11]].w;
      *pfVar2 = local_1c4.w;
      pfVar2[1] = local_1c4.x;
      pfVar2[2] = local_1c4.y;
      pfVar2[3] = local_1c4.z;
      if ((float)0.001 < local_28) {
        local_20 = this_ptr->draw_blend;
        if (0.82f < local_20) {
          local_20 = 0.82f;
        }
        local_20 = (local_20 - 0.2f) / (1.0 - 0.2f);
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if (1.0 < local_20) {
          local_20 = 1.0;
        }
        pCVar1 = &(this_ptr->base).base.model;
        fVar3 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                          (&pCVar1->motion_controller,g_GabriellaIndices[0xd],local_20);
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                  (pCVar1,g_GabriellaIndices[0xd],fVar3,local_28,g_GabriellaIndices[4],
                   core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
        if ((0.82f <= this_ptr->draw_blend) &&
           (fVar3 = ((this_ptr->draw_blend - 0.82f) / (1.0 - 0.82f)) *
                    this_ptr->aim_weight, (float)0.001 < fVar3)) {
          if ((g_GabriellaWeaponAimRotationInitFlag & 1) == 0) {
            g_GabriellaWeaponAimRotationInitFlag = g_GabriellaWeaponAimRotationInitFlag | 1;
            core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(-1.5707964,&local_e4);
            pCVar5 = &local_a4;
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-1.5707964,&local_1f4);
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_b4,pCVar5,&local_1e4);
            g_GabriellaWeaponAimRotation.w = local_1e4.w;
            g_GabriellaWeaponAimRotation.x = local_1e4.x;
            g_GabriellaWeaponAimRotation.y = local_1e4.y;
            g_GabriellaWeaponAimRotation.z = local_1e4.z;
          }
          core_xform_cpp_multiplyQuaternion_FUN_005f7640
                    (&g_GabriellaWeaponAimRotation,&local_1a4,&local_1d4);
          core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
                    (&(this_ptr->base).base.model,&local_114,fVar3,g_GabriellaIndices[4],
                     core_gabriela_cpp_weaponDrawBlendWeightCallback_FUN_004d29f0);
        }
      }
      if (0.0 < this_ptr->fire_cooldown_timer) {
        fVar3 = this_ptr->fire_cooldown_timer;
        fVar1 = (float)0.90000000000000002;
        (this_ptr->base).base.model.bone_update_mode = 2;
        pCVar1 = &(this_ptr->base).base.model;
        fVar3 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                          (&pCVar1->motion_controller,g_GabriellaIndices[0xf],1.0 - fVar3 * fVar1);
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
                  (pCVar1,g_GabriellaIndices[0xf],fVar3,g_GabriellaIndices[6]);
        (this_ptr->base).base.model.bone_update_mode = 0;
      }
    }
  }
  if (local_78.x < -1.22173f) {
    local_78.x = -1.2217305;
  }
  if (0.7853982 < local_78.x) {
    local_78.x = 0.7853982;
  }
  if (local_78.y < -1.7453293) {
    local_78.y = -1.7453293;
  }
  if (1.7453293 < local_78.y) {
    local_78.y = 1.7453293;
  }
  pcVar12 = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
  fVar3 = this_ptr->aim_blend * this_ptr->aim_weight;
  iVar6 = g_GabriellaIndices[0];
  core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&local_78,&local_c4);
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            (&(this_ptr->base).base.model,&local_194,fVar3,iVar6,
             (CDeformableModel_MotionBlendWeightFunc *)pcVar12);
  fVar3 = core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004d4c90(this_ptr);
  fVar4 = core_gabriela_cpp_CGabriella_getFlashlightMaxAngle_FUN_004d4ce0(this_ptr);
  FLOAT_02d7b844 =
       (1.0 - (this_ptr->flashlight_angle - fVar3) / (fVar4 - fVar3)) * (float)1.3;
  if (1.0 < FLOAT_02d7b844) {
    FLOAT_02d7b844 = 1.0;
  }
  blend_callback = core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004d2a30;
  fVar3 = this_ptr->light_aim_blend;
  iVar6 = g_GabriellaIndices[1];
  core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(this_ptr->flashlight_angle,&local_d4);
  pCVar5 = &local_154;
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(1.5707964,&local_134);
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_164,pCVar5,&local_94);
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            (&(this_ptr->base).base.model,&local_144,fVar3,iVar6,blend_callback);
  return;
}
