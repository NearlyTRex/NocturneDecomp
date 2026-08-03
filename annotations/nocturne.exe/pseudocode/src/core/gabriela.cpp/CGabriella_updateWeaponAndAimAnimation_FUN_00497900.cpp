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
  uint *puVar3;
  float *pfVar4;
  uint *puVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_19d0 [1521];
  CDeformableModelInstance *pCVar8;
  CQuaternion4f *pCVar9;
  float fVar10;
  code *pcVar11;
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
  
  bVar7 = 0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(this_ptr->base).base.model);
  local_78.x = this_ptr->aim_pitch;
  local_78.z = 0.0;
  local_78.y = this_ptr->aim_yaw;
  core_xform_cpp_eulerToQuaternion_FUN_0055d610(&local_78,&local_124);
  local_1a4.w = local_124.w;
  puVar5 = (uint *)((int)&local_1a4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_124 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_1a4 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_124 + (uint)bVar7 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
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
        pCVar8 = &(this_ptr->base).base.model;
        local_50 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                             (&pCVar8->motion_controller,_DAT_01c713cc,local_24);
        local_14 = local_50;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
                  (pCVar8,_DAT_01c713cc,(float)local_50,local_28,_DAT_01c713a8,
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
            local_6c.x = local_84 / 180.0f;
            local_80 = CVector3f_01c71388.y * 3.141593f;
            local_7c = CVector3f_01c71388.z * 3.141593f;
            local_6c.y = local_80 * 0.005555556f;
            local_6c.z = local_7c * 0.005555556f;
            pCVar9 = &local_1a4;
            core_xform_cpp_eulerToQuaternion_FUN_0055d610(&local_6c,&local_184);
            local_174.w = local_184.w;
            puVar5 = (uint *)((int)&local_174 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            puVar3 = (uint *)((int)&local_184 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            *(uint *)((int)&local_174 + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&local_184 + (uint)bVar7 * -8 + 4);
            *puVar5 = *puVar3;
            puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_174,pCVar9,&local_f4);
            fVar10 = local_2c;
            pcVar11 = core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_00495610;
            local_104.w = local_f4.w;
            puVar5 = (uint *)((int)&local_104 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            puVar3 = (uint *)((int)&local_f4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            *(uint *)((int)&local_104 + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&local_f4 + (uint)bVar7 * -8 + 4);
            iVar2 = _DAT_01c713e4;
            *puVar5 = *puVar3;
            puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                      (local_14,&local_104,fVar10,iVar2,pcVar11);
          }
        }
      }
      core_xform_cpp_slerpQuaternion_FUN_0055d2d0
                ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + _DAT_01c713dc
                 ,(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                  _DAT_01c713b0,this_ptr->draw_blend / 0.64f,&local_1b4);
      pfVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01c713dc].w
      ;
      pfVar6 = pfVar4 + (uint)bVar7 * -2 + 1;
      *pfVar4 = local_1b4.w;
      pfVar4 = (float *)((int)&local_1b4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *pfVar6 = *(float *)((int)&local_1b4 + (uint)bVar7 * -8 + 4);
      pfVar6[(uint)bVar7 * -2 + 1] = *pfVar4;
      (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] = pfVar4[(uint)bVar7 * -2 + 1];
      iVar2 = _DAT_01c713d0;
      if (0.0 < this_ptr->fire_cooldown_timer) {
        fVar10 = this_ptr->fire_cooldown_timer;
        pCVar8 = &(this_ptr->base).base.model;
        (this_ptr->base).base.model.bone_update_mode = 2;
        local_1c = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                             (&pCVar8->motion_controller,iVar2,fVar10);
        local_14 = local_1c;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
                  (pCVar8,_DAT_01c713d0,(float)local_1c,0);
        (this_ptr->base).base.model.bone_update_mode = 0;
      }
    }
    else {
      core_xform_cpp_slerpQuaternion_FUN_0055d2d0
                ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + _DAT_01c713dc
                 ,(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                  _DAT_01c713b0,this_ptr->draw_blend / 0.64f,&local_1c4);
      pfVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01c713dc].w
      ;
      pfVar6 = pfVar4 + (uint)bVar7 * -2 + 1;
      *pfVar4 = local_1c4.w;
      pfVar4 = (float *)((int)&local_1c4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *pfVar6 = *(float *)((int)&local_1c4 + (uint)bVar7 * -8 + 4);
      pfVar6[(uint)bVar7 * -2 + 1] = *pfVar4;
      (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] = pfVar4[(uint)bVar7 * -2 + 1];
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
        pCVar8 = &(this_ptr->base).base.model;
        local_44 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                             (&pCVar8->motion_controller,_DAT_01c713cc,local_20);
        local_14 = local_44;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
                  (pCVar8,_DAT_01c713cc,(float)local_44,local_28,_DAT_01c713a8,
                   core_skeleton_cpp_FUN_0051b650);
        if ((0.82f <= this_ptr->draw_blend) &&
           (local_40 = ((this_ptr->draw_blend - 0.82f) / (1.0 - 0.82f)) *
                       this_ptr->aim_weight, (float)0.001 < local_40)) {
          if ((DAT_01c71354 & 1) == 0) {
            DAT_01c71354 = DAT_01c71354 | 1;
            core_xform_cpp_quaternionFromAngleZ_FUN_0055d520(-1.5707964,&local_e4);
            pCVar9 = &local_a4;
            local_a4.w = local_e4.w;
            puVar5 = (uint *)((int)&local_a4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            puVar3 = (uint *)((int)&local_e4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            *(uint *)((int)&local_a4 + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&local_e4 + (uint)bVar7 * -8 + 4);
            *puVar5 = *puVar3;
            puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
            core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(-1.5707964,&local_1f4);
            local_b4.w = local_1f4.w;
            puVar5 = (uint *)((int)&local_b4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            puVar3 = (uint *)((int)&local_1f4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            *(uint *)((int)&local_b4 + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&local_1f4 + (uint)bVar7 * -8 + 4);
            *puVar5 = *puVar3;
            puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_b4,pCVar9,&local_1e4);
            _DAT_01c71344 = local_1e4.w;
            puVar3 = (uint *)((int)&local_1e4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            *(uint *)(&DAT_01c71348 + (uint)bVar7 * -8) =
                 *(uint *)((int)&local_1e4 + (uint)bVar7 * -8 + 4);
            *(uint *)(&DAT_01c7134c + (uint)bVar7 * -8 + (uint)bVar7 * -8) = *puVar3;
            *(uint *)
             ((int)(&DAT_01c7134c + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
             ((uint)bVar7 * -2 + 1) * 4) = puVar3[(uint)bVar7 * -2 + 1];
          }
          core_xform_cpp_multiplyQuaternion_FUN_0055d130
                    ((CQuaternion4f *)&DAT_01c71344,&local_1a4,&local_1d4);
          fVar10 = local_40;
          pcVar11 = core_gabriela_cpp_FUN_00495580;
          pCVar9 = &local_114;
          pCVar8 = &(this_ptr->base).base.model;
          local_114.w = local_1d4.w;
          puVar5 = (uint *)((int)&local_114 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          puVar3 = (uint *)((int)&local_1d4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          *(uint *)((int)&local_114 + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&local_1d4 + (uint)bVar7 * -8 + 4);
          iVar2 = _DAT_01c713a8;
          *puVar5 = *puVar3;
          puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
                    (pCVar8,pCVar9,fVar10,iVar2,pcVar11);
        }
      }
      if (0.0 < this_ptr->fire_cooldown_timer) {
        fVar10 = this_ptr->fire_cooldown_timer;
        fVar1 = (float)0.90000000000000002;
        (this_ptr->base).base.model.bone_update_mode = 2;
        pCVar8 = &(this_ptr->base).base.model;
        local_18 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                             (&pCVar8->motion_controller,_DAT_01c713d4,1.0 - fVar10 * fVar1);
        local_14 = local_18;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
                  (pCVar8,_DAT_01c713d4,(float)local_18,_DAT_01c713b0);
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
  pcVar11 = core_skeleton_cpp_FUN_0051b650;
  fVar10 = this_ptr->aim_blend * this_ptr->aim_weight;
  iVar2 = _DAT_01c71398;
  core_xform_cpp_eulerToQuaternion_FUN_0055d610(&local_78,&local_c4);
  pCVar9 = &local_194;
  pCVar8 = &(this_ptr->base).base.model;
  local_194.w = local_c4.w;
  puVar5 = (uint *)((int)&local_194 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_c4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_194 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_c4 + (uint)bVar7 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
            (pCVar8,pCVar9,fVar10,iVar2,pcVar11);
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
  pcVar11 = core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004955c0;
  fVar10 = this_ptr->light_aim_blend;
  iVar2 = _DAT_01c7139c;
  core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(this_ptr->flashlight_angle,&local_d4);
  pCVar9 = &local_154;
  local_154.w = local_d4.w;
  puVar5 = (uint *)((int)&local_154 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_d4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_154 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_d4 + (uint)bVar7 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(1.5707964,&local_134);
  local_164.w = local_134.w;
  puVar5 = (uint *)((int)&local_164 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_134 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_164 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_134 + (uint)bVar7 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_164,pCVar9,&local_94);
  pCVar9 = &local_144;
  pCVar8 = &(this_ptr->base).base.model;
  local_144.w = local_94.w;
  puVar5 = (uint *)((int)&local_144 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_94 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_144 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_94 + (uint)bVar7 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
            (pCVar8,pCVar9,fVar10,iVar2,pcVar11);
  return;
}
