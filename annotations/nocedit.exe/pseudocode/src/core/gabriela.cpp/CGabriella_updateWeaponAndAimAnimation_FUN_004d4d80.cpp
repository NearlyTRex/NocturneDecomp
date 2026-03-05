// Name: core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80
// Address: 004d4d80
// Address Range: [[004d4d80, 004d5547]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80(CGabriella *this_ptr)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_19d0 [1521];
  CDeformableModelInstance *pCVar7;
  CQuaternion4f *pCVar8;
  float fVar9;
  code *pcVar12;
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
  uint local_3c;
  uint local_38;
  float local_34;
  uint local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  CDeformableModelInstance *local_1c;
  CDeformableModelInstance *local_18;
  CDeformableModelInstance *local_14;
  CDeformableModel_MotionBlendWeightFunc *pcVar10;
  CDeformableModel_MotionBlendWeightFunc *pcVar11;
  
  bVar6 = 0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  local_78.x = this_ptr->aim_pitch;
  local_78.z = 0.0;
  local_78.y = this_ptr->aim_yaw;
  core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&local_78,&local_124);
  local_1a4.w = local_124.w;
  puVar5 = (uint *)((int)&local_1a4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar3 = (uint *)((int)&local_124 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_1a4 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_124 + (uint)bVar6 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
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
        pCVar7 = &(this_ptr->base).base.model;
        local_50 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                             (&pCVar7->motion_controller,INT_02d7b87c,local_24);
        local_14 = local_50;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                  (pCVar7,INT_02d7b87c,(float)local_50,local_28,INT_02d7b858,
                   core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
        if (0.82f <= this_ptr->draw_blend) {
          local_2c = ((this_ptr->draw_blend - 0.82f) / (1.0 - 0.82f)) *
                     this_ptr->aim_weight;
          if (local_2c < this_ptr->fire_cooldown_timer) {
            local_2c = this_ptr->fire_cooldown_timer;
          }
          if ((float)0.001 < local_2c) {
            local_58 = (double)this_ptr->fire_cooldown_timer;
            local_34 = 0.0;
            if (0.0 < local_58) {
              local_34 = 1.0 - this_ptr->fire_cooldown_timer;
            }
            local_14 = &(this_ptr->base).base.model;
            core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                      (local_14,INT_02d7b880,local_34,local_2c * (float)0.90000000000000002,INT_02d7b890
                       ,core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
            local_84 = FLOAT_02d7b838 * 3.141593f;
            local_6c.x = local_84 / 180.0f;
            local_80 = FLOAT_02d7b83c * 3.141593f;
            local_7c = FLOAT_02d7b840 * 3.141593f;
            local_6c.y = local_80 * 0.005555556f;
            local_6c.z = local_7c * 0.005555556f;
            pCVar8 = &local_1a4;
            core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&local_6c,&local_184);
            local_174.w = local_184.w;
            puVar5 = (uint *)((int)&local_174 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            puVar3 = (uint *)((int)&local_184 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            *(uint *)((int)&local_174 + (uint)bVar6 * -8 + 4) =
                 *(uint *)((int)&local_184 + (uint)bVar6 * -8 + 4);
            *puVar5 = *puVar3;
            puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_174,pCVar8,&local_f4);
            fVar9 = local_2c;
            pcVar10 = core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_004d2a80;
            local_104.w = local_f4.w;
            puVar5 = (uint *)((int)&local_104 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            puVar3 = (uint *)((int)&local_f4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            *(uint *)((int)&local_104 + (uint)bVar6 * -8 + 4) =
                 *(uint *)((int)&local_f4 + (uint)bVar6 * -8 + 4);
            iVar2 = INT_02d7b894;
            *puVar5 = *puVar3;
            puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (local_14,&local_104,fVar9,iVar2,pcVar10);
          }
        }
      }
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                ((this_ptr->base).base.model.bone_transform.bone_rotations + INT_02d7b88c,
                 (this_ptr->base).base.model.bone_transform.bone_rotations + INT_02d7b860,
                 this_ptr->draw_blend / 0.64f,&local_1b4);
      pCVar8 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_02d7b88c;
      puVar5 = (uint *)((int)pCVar8 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar8->w = local_1b4.w;
      puVar4 = puVar5 + (uint)bVar6 * -2 + 1;
      puVar3 = (uint *)((int)&local_1b4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *puVar5 = *(uint *)((int)&local_1b4 + (uint)bVar6 * -8 + 4);
      *puVar4 = *puVar3;
      puVar4[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
      iVar2 = INT_02d7b880;
      if (0.0 < this_ptr->fire_cooldown_timer) {
        fVar9 = this_ptr->fire_cooldown_timer;
        pCVar7 = &(this_ptr->base).base.model;
        (this_ptr->base).base.model.bone_update_mode = 2;
        local_1c = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                             (&pCVar7->motion_controller,iVar2,fVar9);
        local_14 = local_1c;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
                  (pCVar7,INT_02d7b880,(float)local_1c,0);
        (this_ptr->base).base.model.bone_update_mode = 0;
      }
    }
    else {
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                ((this_ptr->base).base.model.bone_transform.bone_rotations + INT_02d7b88c,
                 (this_ptr->base).base.model.bone_transform.bone_rotations + INT_02d7b860,
                 this_ptr->draw_blend / 0.64f,&local_1c4);
      pCVar8 = (this_ptr->base).base.model.bone_transform.bone_rotations + INT_02d7b88c;
      puVar5 = (uint *)((int)pCVar8 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar8->w = local_1c4.w;
      puVar4 = puVar5 + (uint)bVar6 * -2 + 1;
      puVar3 = (uint *)((int)&local_1c4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *puVar5 = *(uint *)((int)&local_1c4 + (uint)bVar6 * -8 + 4);
      *puVar4 = *puVar3;
      puVar4[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
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
        pCVar7 = &(this_ptr->base).base.model;
        local_44 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                             (&pCVar7->motion_controller,INT_02d7b87c,local_20);
        local_14 = local_44;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                  (pCVar7,INT_02d7b87c,(float)local_44,local_28,INT_02d7b858,
                   core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
        if ((0.82f <= this_ptr->draw_blend) &&
           (local_40 = ((this_ptr->draw_blend - 0.82f) / (1.0 - 0.82f)) *
                       this_ptr->aim_weight, (float)0.001 < local_40)) {
          if ((DAT_02d7b804 & 1) == 0) {
            DAT_02d7b804 = DAT_02d7b804 | 1;
            core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(-1.5707964,&local_e4);
            pCVar8 = &local_a4;
            local_a4.w = local_e4.w;
            puVar5 = (uint *)((int)&local_a4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            puVar3 = (uint *)((int)&local_e4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            *(uint *)((int)&local_a4 + (uint)bVar6 * -8 + 4) =
                 *(uint *)((int)&local_e4 + (uint)bVar6 * -8 + 4);
            *puVar5 = *puVar3;
            puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-1.5707964,&local_1f4);
            local_b4.w = local_1f4.w;
            puVar5 = (uint *)((int)&local_b4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            puVar3 = (uint *)((int)&local_1f4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            *(uint *)((int)&local_b4 + (uint)bVar6 * -8 + 4) =
                 *(uint *)((int)&local_1f4 + (uint)bVar6 * -8 + 4);
            *puVar5 = *puVar3;
            puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_b4,pCVar8,&local_1e4);
            CQuaternion4f_02d7b7f4.w = local_1e4.w;
            puVar5 = (uint *)((uint)bVar6 * -8 + 0x2d7b7fc + (uint)bVar6 * -8);
            puVar3 = (uint *)((int)&local_1e4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            *(uint *)((int)&CQuaternion4f_02d7b7f4 + (uint)bVar6 * -8 + 4) =
                 *(uint *)((int)&local_1e4 + (uint)bVar6 * -8 + 4);
            *puVar5 = *puVar3;
            puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
          }
          core_xform_cpp_multiplyQuaternion_FUN_005f7640
                    (&CQuaternion4f_02d7b7f4,&local_1a4,&local_1d4);
          fVar9 = local_40;
          pcVar12 = core_gabriela_cpp_weaponDrawBlendWeightCallback_FUN_004d29f0;
          pCVar8 = &local_114;
          pCVar7 = &(this_ptr->base).base.model;
          local_114.w = local_1d4.w;
          puVar5 = (uint *)((int)&local_114 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          puVar3 = (uint *)((int)&local_1d4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          *(uint *)((int)&local_114 + (uint)bVar6 * -8 + 4) =
               *(uint *)((int)&local_1d4 + (uint)bVar6 * -8 + 4);
          iVar2 = INT_02d7b858;
          *puVar5 = *puVar3;
          pcVar11 = pcVar12;
          puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
                    (pCVar7,pCVar8,fVar9,iVar2,pcVar11);
        }
      }
      if (0.0 < this_ptr->fire_cooldown_timer) {
        fVar9 = this_ptr->fire_cooldown_timer;
        fVar1 = (float)0.90000000000000002;
        (this_ptr->base).base.model.bone_update_mode = 2;
        pCVar7 = &(this_ptr->base).base.model;
        local_18 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                             (&pCVar7->motion_controller,INT_02d7b884,1.0 - fVar9 * fVar1);
        local_14 = local_18;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
                  (pCVar7,INT_02d7b884,(float)local_18,INT_02d7b860);
        (this_ptr->base).base.model.bone_update_mode = 0;
      }
    }
  }
  local_3c = 0x3f490fdb;
  local_30 = 0xbfdf66f3;
  local_38 = 0x3fdf66f3;
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
  fVar9 = this_ptr->aim_blend * this_ptr->aim_weight;
  iVar2 = INT_02d7b848;
  core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&local_78,&local_c4);
  pCVar8 = &local_194;
  pCVar7 = &(this_ptr->base).base.model;
  local_194.w = local_c4.w;
  puVar5 = (uint *)((int)&local_194 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar3 = (uint *)((int)&local_c4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_194 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_c4 + (uint)bVar6 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            (pCVar7,pCVar8,fVar9,iVar2,pcVar12);
  local_4c = core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004d4c90(this_ptr);
  local_14 = (CDeformableModelInstance *)local_4c;
  local_14 = (CDeformableModelInstance *)
             core_gabriela_cpp_CGabriella_getFlashlightMaxAngle_FUN_004d4ce0(this_ptr);
  FLOAT_02d7b844 =
       (1.0 - (this_ptr->flashlight_angle - local_4c) / ((float)local_14 - local_4c)) *
       (float)1.3;
  if (1.0 < FLOAT_02d7b844) {
    FLOAT_02d7b844 = 1.0;
  }
  pcVar12 = core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004d2a30;
  fVar9 = this_ptr->light_aim_blend;
  iVar2 = INT_02d7b84c;
  core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(this_ptr->flashlight_angle,&local_d4);
  pCVar8 = &local_154;
  local_154.w = local_d4.w;
  puVar5 = (uint *)((int)&local_154 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar3 = (uint *)((int)&local_d4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_154 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_d4 + (uint)bVar6 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(1.5707964,&local_134);
  local_164.w = local_134.w;
  puVar5 = (uint *)((int)&local_164 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar3 = (uint *)((int)&local_134 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_164 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_134 + (uint)bVar6 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_164,pCVar8,&local_94);
  pCVar8 = &local_144;
  pCVar7 = &(this_ptr->base).base.model;
  local_144.w = local_94.w;
  puVar5 = (uint *)((int)&local_144 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar3 = (uint *)((int)&local_94 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_144 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_94 + (uint)bVar6 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            (pCVar7,pCVar8,fVar9,iVar2,pcVar12);
  return;
}
