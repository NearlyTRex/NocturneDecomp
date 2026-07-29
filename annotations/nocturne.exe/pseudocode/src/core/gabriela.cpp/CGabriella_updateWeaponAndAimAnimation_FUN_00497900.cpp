// Name: core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_00497900
// Address: 00497900
// Address Range: [[00497900, 004980c7]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_00497900(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_00497900(CGabriella *this_ptr)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_19d0 [1521];
  CDeformableModelInstance *pCVar6;
  CQuaternion4f *pCVar7;
  float *pfVar8;
  float fVar9;
  code *pcVar10;
  uint *puVar11;
  uint local_1f4;
  uint local_1e4;
  float local_1d4;
  uint local_1c4;
  uint local_1b4;
  uint local_1a4;
  CQuaternion4f local_194;
  uint local_184;
  float afStack_180 [7];
  float local_164 [4];
  float local_154 [4];
  CQuaternion4f local_144;
  uint local_134;
  float afStack_130 [7];
  CQuaternion4f local_114;
  CQuaternion4f local_104;
  float local_f4;
  float afStack_f0 [3];
  CQuaternion4f local_e4;
  CQuaternion4f local_d4;
  float local_c4;
  uint auStack_c0 [7];
  float local_a4 [4];
  float local_94;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  uint local_70;
  float local_6c;
  float local_68;
  float local_64;
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
  
  bVar5 = 0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(this_ptr->base).base.model);
  local_78 = this_ptr->aim_pitch;
  local_70 = 0;
  local_74 = this_ptr->aim_yaw;
  core_xform_cpp_eulerToQuaternion_FUN_0055d610(&local_78);
  local_1a4 = afStack_130[3];
  *(float *)((int)&stack0xfffffe60 + (uint)bVar5 * 0xfffffffe * 4) =
       afStack_130[(uint)bVar5 * -2 + 4];
  afStack_180[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -7] =
       afStack_130[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
  (afStack_180 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -7)[(uint)bVar5 * -2 + 1] =
       (afStack_130 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
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
    iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0
                      (&((this_ptr->base).inventory.selected_weapon)->base,(char *)&FLOAT_005820f6);
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
        pCVar6 = &(this_ptr->base).base.model;
        local_50 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                             (&pCVar6->motion_controller,_DAT_01c713cc,local_24);
        local_14 = local_50;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
                  (pCVar6,_DAT_01c713cc,(float)local_50,local_28,_DAT_01c713a8,
                   core_skeleton_cpp_FUN_0051b650);
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
            core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
                      (local_14,_DAT_01c713d0,local_34,local_2c * (float)0.90000000000000002,
                       _DAT_01c713e0,core_skeleton_cpp_FUN_0051b650);
            local_84 = CVector3f_01c71388.x * 3.141593f;
            local_6c = local_84 / 180.0f;
            local_80 = CVector3f_01c71388.y * 3.141593f;
            local_7c = CVector3f_01c71388.z * 3.141593f;
            local_68 = local_80 * 0.005555556f;
            local_64 = local_7c * 0.005555556f;
            core_xform_cpp_eulerToQuaternion_FUN_0055d610(&local_6c,&stack0xfffffe5c);
            afStack_180[3] = (float)local_184;
            afStack_180[(uint)bVar5 * -2 + 4] = afStack_180[(uint)bVar5 * -2];
            afStack_180[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5] =
                 afStack_180[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            (afStack_180 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1] =
                 (afStack_180 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(afStack_180 + 3);
            fVar9 = local_2c;
            pcVar10 = core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_00495610;
            local_104.w = local_f4;
            pfVar8 = (float *)((int)&local_104 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
            *(float *)((int)&local_104 + (uint)bVar5 * -8 + 4) = afStack_f0[(uint)bVar5 * -2];
            iVar2 = _DAT_01c713e4;
            *pfVar8 = afStack_f0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            pfVar8[(uint)bVar5 * -2 + 1] =
                 (afStack_f0 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                      (local_14,&local_104,fVar9,iVar2,pcVar10);
          }
        }
      }
      core_xform_cpp_slerpQuaternion_FUN_0055d2d0
                ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + _DAT_01c713dc
                 ,(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                  _DAT_01c713b0,this_ptr->draw_blend / 0.64f);
      puVar11 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01c713dc].
                 w;
      puVar4 = puVar11 + (uint)bVar5 * -2 + 1;
      *puVar11 = local_1b4;
      *puVar4 = *(uint *)(&stack0xfffffe50 + (uint)bVar5 * -8);
      puVar4[(uint)bVar5 * -2 + 1] =
           *(uint *)(&stack0xfffffe54 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xfffffe54 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
            ((uint)bVar5 * -2 + 1) * 4);
      iVar2 = _DAT_01c713d0;
      if (0.0 < this_ptr->fire_cooldown_timer) {
        fVar9 = this_ptr->fire_cooldown_timer;
        pCVar6 = &(this_ptr->base).base.model;
        (this_ptr->base).base.model.bone_update_mode = 2;
        local_1c = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                             (&pCVar6->motion_controller,iVar2,fVar9);
        local_14 = local_1c;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
                  (pCVar6,_DAT_01c713d0,(float)local_1c,0);
        (this_ptr->base).base.model.bone_update_mode = 0;
      }
    }
    else {
      core_xform_cpp_slerpQuaternion_FUN_0055d2d0
                ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + _DAT_01c713dc
                 ,(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                  _DAT_01c713b0,this_ptr->draw_blend / 0.64f);
      puVar11 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01c713dc].
                 w;
      puVar4 = puVar11 + (uint)bVar5 * -2 + 1;
      *puVar11 = local_1c4;
      *puVar4 = *(uint *)(&stack0xfffffe40 + (uint)bVar5 * -8);
      puVar4[(uint)bVar5 * -2 + 1] =
           *(uint *)(&stack0xfffffe44 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xfffffe44 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
            ((uint)bVar5 * -2 + 1) * 4);
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
        pCVar6 = &(this_ptr->base).base.model;
        local_44 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                             (&pCVar6->motion_controller,_DAT_01c713cc,local_20);
        local_14 = local_44;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
                  (pCVar6,_DAT_01c713cc,(float)local_44,local_28,_DAT_01c713a8,
                   core_skeleton_cpp_FUN_0051b650);
        if ((0.82f <= this_ptr->draw_blend) &&
           (local_40 = ((this_ptr->draw_blend - 0.82f) / (1.0 - 0.82f)) *
                       this_ptr->aim_weight, (float)0.001 < local_40)) {
          if ((DAT_01c71354 & 1) == 0) {
            DAT_01c71354 = DAT_01c71354 | 1;
            core_xform_cpp_quaternionFromAngleZ_FUN_0055d520(-1.5707964,&local_e4);
            puVar11 = auStack_c0 + 7;
            local_a4[0] = local_e4.w;
            puVar4 = (uint *)((int)&local_e4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
            auStack_c0[(uint)bVar5 * -2 + 8] =
                 *(uint *)((int)&local_e4 + (uint)bVar5 * -8 + 4);
            auStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9] = *puVar4;
            (auStack_c0 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1] =
                 puVar4[(uint)bVar5 * -2 + 1];
            core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(0xbfc90fdb,puVar11);
            auStack_c0[3] = local_1f4;
            auStack_c0[(uint)bVar5 * -2 + 4] = *(uint *)(&stack0xfffffe10 + (uint)bVar5 * -8);
            auStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5] =
                 *(uint *)(&stack0xfffffe14 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            (auStack_c0 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1] =
                 *(uint *)
                  ((int)(&stack0xfffffe14 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
                  ((uint)bVar5 * -2 + 1) * 4);
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(auStack_c0 + 3);
            _DAT_01c71344 = local_1e4;
            *(uint *)(&DAT_01c71348 + (uint)bVar5 * -8) =
                 *(uint *)(&stack0xfffffe20 + (uint)bVar5 * -8);
            *(uint *)(&DAT_01c7134c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                 *(uint *)(&stack0xfffffe24 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            *(uint *)
             ((int)(&DAT_01c7134c + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
             ((uint)bVar5 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xfffffe24 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
                  ((uint)bVar5 * -2 + 1) * 4);
          }
          core_xform_cpp_multiplyQuaternion_FUN_0055d130(&DAT_01c71344,&stack0xfffffe5c);
          fVar9 = local_40;
          pcVar10 = core_gabriela_cpp_FUN_00495580;
          pCVar7 = &local_114;
          pCVar6 = &(this_ptr->base).base.model;
          local_114.w = local_1d4;
          puVar11 = (uint *)((int)&local_114 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
          *(uint *)((int)&local_114 + (uint)bVar5 * -8 + 4) =
               *(uint *)(&stack0xfffffe30 + (uint)bVar5 * -8);
          iVar2 = _DAT_01c713a8;
          *puVar11 = *(uint *)(&stack0xfffffe34 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          puVar11[(uint)bVar5 * -2 + 1] =
               *(uint *)
                ((int)(&stack0xfffffe34 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
                ((uint)bVar5 * -2 + 1) * 4);
          core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
                    (pCVar6,pCVar7,fVar9,iVar2,pcVar10);
        }
      }
      if (0.0 < this_ptr->fire_cooldown_timer) {
        fVar9 = this_ptr->fire_cooldown_timer;
        fVar1 = (float)0.90000000000000002;
        (this_ptr->base).base.model.bone_update_mode = 2;
        pCVar6 = &(this_ptr->base).base.model;
        local_18 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                             (&pCVar6->motion_controller,_DAT_01c713d4,1.0 - fVar9 * fVar1);
        local_14 = local_18;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
                  (pCVar6,_DAT_01c713d4,(float)local_18,_DAT_01c713b0);
        (this_ptr->base).base.model.bone_update_mode = 0;
      }
    }
  }
  local_3c = 0x3f490fdb;
  local_30 = 0xbfdf66f3;
  local_38 = 0x3fdf66f3;
  if (local_78 < -1.22173f) {
    local_78 = -1.2217305;
  }
  if (0.7853982 < local_78) {
    local_78 = 0.7853982;
  }
  if (local_74 < -1.7453293) {
    local_74 = -1.7453293;
  }
  if (1.7453293 < local_74) {
    local_74 = 1.7453293;
  }
  pcVar10 = core_skeleton_cpp_FUN_0051b650;
  fVar9 = this_ptr->aim_blend * this_ptr->aim_weight;
  iVar2 = _DAT_01c71398;
  core_xform_cpp_eulerToQuaternion_FUN_0055d610(&local_78);
  pCVar7 = &local_194;
  pCVar6 = &(this_ptr->base).base.model;
  local_194.w = local_c4;
  puVar11 = (uint *)((int)&local_194 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  *(uint *)((int)&local_194 + (uint)bVar5 * -8 + 4) = auStack_c0[(uint)bVar5 * -2];
  *puVar11 = auStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  puVar11[(uint)bVar5 * -2 + 1] =
       (auStack_c0 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
            (pCVar6,pCVar7,fVar9,iVar2,pcVar10);
  local_4c = core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_00497810(this_ptr);
  local_14 = (CDeformableModelInstance *)local_4c;
  local_14 = (CDeformableModelInstance *)
             core_gabriela_cpp_CGabriella_getFlashlightMaxAngle_FUN_00497860(this_ptr);
  _DAT_01c71394 =
       (1.0 - (this_ptr->flashlight_angle - local_4c) / ((float)local_14 - local_4c)) *
       (float)1.3;
  if (1.0 < _DAT_01c71394) {
    _DAT_01c71394 = 1.0;
  }
  pcVar10 = core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004955c0;
  fVar9 = this_ptr->light_aim_blend;
  iVar2 = _DAT_01c7139c;
  core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(this_ptr->flashlight_angle,&local_d4);
  pfVar8 = afStack_180 + 0xb;
  local_154[0] = local_d4.w;
  pfVar3 = (float *)((int)&local_d4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  afStack_180[(uint)bVar5 * -2 + 0xc] = *(float *)((int)&local_d4 + (uint)bVar5 * -8 + 4);
  afStack_180[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] = *pfVar3;
  (afStack_180 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1] =
       pfVar3[(uint)bVar5 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(0x3fc90fdb,pfVar8);
  local_164[0] = (float)local_134;
  afStack_180[(uint)bVar5 * -2 + 8] = afStack_130[(uint)bVar5 * -2];
  afStack_180[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9] =
       afStack_130[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  (afStack_180 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1] =
       (afStack_130 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(afStack_180 + 7);
  pCVar7 = &local_144;
  pCVar6 = &(this_ptr->base).base.model;
  local_144.w = local_94;
  puVar11 = (uint *)((int)&local_144 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  *(uint *)((int)&local_144 + (uint)bVar5 * -8 + 4) = auStack_c0[(uint)bVar5 * -2 + 0xc];
  *puVar11 = auStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
  puVar11[(uint)bVar5 * -2 + 1] =
       (auStack_c0 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
            (pCVar6,pCVar7,fVar9,iVar2,pcVar10);
  return;
}
