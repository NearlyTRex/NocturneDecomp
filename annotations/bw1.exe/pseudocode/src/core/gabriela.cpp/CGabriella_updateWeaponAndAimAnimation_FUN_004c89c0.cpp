// Name: core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004c89c0
// Address: 004c89c0
// Address Range: [[004c89c0, 004c91a0]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004c89c0(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004c89c0(CGabriella *this_ptr)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  float *pfVar4;
  uint *puVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_19e8 [1521];
  CDeformableModelInstance *pCVar8;
  CQuaternion4f *pCVar9;
  float fVar10;
  code *pcVar11;
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
  float local_9c;
  float local_98 [4];
  float local_88;
  CVector3f local_84;
  CVector3f local_78;
  float local_6c;
  float local_68 [2];
  double local_60;
  CDeformableModelInstance *local_50;
  CDeformableModelInstance *local_4c;
  float local_48;
  CDeformableModelInstance *local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  CDeformableModelInstance *local_14;
  
  bVar7 = 0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  local_78.x = this_ptr->aim_pitch;
  local_78.z = 0.0;
  local_78.y = this_ptr->aim_yaw;
  core_xform_cpp_eulerToQuaternion_FUN_005b7ed0(&local_78,&local_18c);
  local_1bc.w = local_18c.w;
  puVar5 = (uint *)((int)&local_1bc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_18c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_1bc + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_18c + (uint)bVar7 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  if (0.0 < this_ptr->draw_blend) {
    local_24 = this_ptr->draw_blend / 0.2f;
    if (1.0 < local_24) {
      local_24 = 1.0;
    }
    if (0.82f < this_ptr->draw_blend) {
      local_24 = (1.0 - (1.0 - this_ptr->aim_weight) *
                        ((this_ptr->draw_blend - 0.82f) / (1.0 - 0.82f))) *
                 local_24;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c550
                      (&((this_ptr->base).inventory.selected_weapon)->base,"CGun");
    if (iVar2 == 0) {
      if ((float)0.001 < local_24) {
        local_1c = this_ptr->draw_blend;
        if (0.82f < local_1c) {
          local_1c = 0.82f;
        }
        local_1c = (local_1c - 0.2f) / (1.0 - 0.2f);
        if (local_1c < 0.0) {
          local_1c = 0.0;
        }
        if (1.0 < local_1c) {
          local_1c = 1.0;
        }
        pCVar8 = &(this_ptr->base).base.model;
        local_4c = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00525110
                             (&pCVar8->base,g_INT_ARRAY_01cc9108[0xd],local_1c);
        local_14 = local_4c;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
                  (pCVar8,g_INT_ARRAY_01cc9108[0xd],(float)local_4c,local_24,g_INT_ARRAY_01cc9108[4]
                   ,core_skeleton_cpp_blendWeightCallback_FUN_00567360);
        if (0.82f <= this_ptr->draw_blend) {
          local_28 = ((this_ptr->draw_blend - 0.82f) / (1.0 - 0.82f)) *
                     this_ptr->aim_weight;
          if (local_28 < this_ptr->fire_cooldown_timer) {
            local_28 = this_ptr->fire_cooldown_timer;
          }
          if ((float)0.001 < local_28) {
            local_60 = (double)this_ptr->fire_cooldown_timer;
            local_30 = 0.0;
            if (0.0 < local_60) {
              local_30 = 1.0 - this_ptr->fire_cooldown_timer;
            }
            local_14 = &(this_ptr->base).base.model;
            core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
                      (local_14,g_INT_ARRAY_01cc9108[0xe],local_30,
                       local_28 * (float)0.90000000000000002,g_INT_ARRAY_01cc9108[0x12],
                       core_skeleton_cpp_blendWeightCallback_FUN_00567360);
            local_98[2] = g_FLOAT_01cc90f8 * 3.141593f;
            local_98[3] = g_FLOAT_01cc90fc * 3.141593f;
            local_88 = g_FLOAT_01cc9100 * 3.141593f;
            local_9c = g_FLOAT_01cc90f8 * 3.141593f;
            local_98[(uint)bVar7 * -2] = local_98[(uint)bVar7 * -2 + 3];
            local_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 local_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            pCVar9 = &local_1bc;
            local_6c = local_9c * 0.005555556f;
            local_68[0] = local_98[0] * 0.005555556f;
            local_68[1] = local_98[1] * 0.005555556f;
            local_84.x = local_9c * 0.005555556f;
            *(float *)((int)&local_84 + (uint)bVar7 * -8 + 4) = local_68[(uint)bVar7 * -2];
            *(float *)((int)&local_84 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
                 local_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            core_xform_cpp_eulerToQuaternion_FUN_005b7ed0(&local_84,&local_bc);
            local_11c.w = local_bc.w;
            puVar5 = (uint *)((int)&local_11c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            puVar3 = (uint *)((int)&local_bc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            *(uint *)((int)&local_11c + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&local_bc + (uint)bVar7 * -8 + 4);
            *puVar5 = *puVar3;
            puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_11c,pCVar9,&local_19c);
            fVar10 = local_28;
            pcVar11 = core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_004c61e0;
            local_cc.w = local_19c.w;
            puVar5 = (uint *)((int)&local_cc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            puVar3 = (uint *)((int)&local_19c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            *(uint *)((int)&local_cc + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&local_19c + (uint)bVar7 * -8 + 4);
            iVar2 = g_INT_ARRAY_01cc9108[0x13];
            *puVar5 = *puVar3;
            puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                      (local_14,&local_cc,fVar10,iVar2,pcVar11);
          }
        }
      }
      core_xform_cpp_slerpQuaternion_FUN_005b7940
                ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                 g_INT_ARRAY_01cc9108[0x11],
                 (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                 g_INT_ARRAY_01cc9108[6],this_ptr->draw_blend / 0.64f,&local_13c);
      pfVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
                [g_INT_ARRAY_01cc9108[0x11]].w;
      pfVar6 = pfVar4 + (uint)bVar7 * -2 + 1;
      *pfVar4 = local_13c.w;
      pfVar4 = (float *)((int)&local_13c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *pfVar6 = *(float *)((int)&local_13c + (uint)bVar7 * -8 + 4);
      pfVar6[(uint)bVar7 * -2 + 1] = *pfVar4;
      (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] = pfVar4[(uint)bVar7 * -2 + 1];
      iVar2 = g_INT_ARRAY_01cc9108[0xe];
      if (0.0 < this_ptr->fire_cooldown_timer) {
        fVar10 = this_ptr->fire_cooldown_timer;
        pCVar8 = &(this_ptr->base).base.model;
        (this_ptr->base).base.model.bone_update_mode = BONE_UPDATE_HIERARCHICAL_RESTPOSE;
        local_40 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00525110
                             (&pCVar8->base,iVar2,fVar10);
        local_14 = local_40;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_00567620
                  (pCVar8,g_INT_ARRAY_01cc9108[0xe],(float)local_40,0);
        (this_ptr->base).base.model.bone_update_mode = BONE_UPDATE_SIMPLE_FLAT;
      }
    }
    else {
      core_xform_cpp_slerpQuaternion_FUN_005b7940
                ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                 g_INT_ARRAY_01cc9108[0x11],
                 (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                 g_INT_ARRAY_01cc9108[6],this_ptr->draw_blend / 0.64f,&local_fc);
      pfVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
                [g_INT_ARRAY_01cc9108[0x11]].w;
      pfVar6 = pfVar4 + (uint)bVar7 * -2 + 1;
      *pfVar4 = local_fc.w;
      pfVar4 = (float *)((int)&local_fc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *pfVar6 = *(float *)((int)&local_fc + (uint)bVar7 * -8 + 4);
      pfVar6[(uint)bVar7 * -2 + 1] = *pfVar4;
      (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] = pfVar4[(uint)bVar7 * -2 + 1];
      if ((float)0.001 < local_24) {
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
        local_50 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00525110
                             (&pCVar8->base,g_INT_ARRAY_01cc9108[0xd],local_20);
        local_14 = local_50;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
                  (pCVar8,g_INT_ARRAY_01cc9108[0xd],(float)local_50,local_24,g_INT_ARRAY_01cc9108[4]
                   ,core_skeleton_cpp_blendWeightCallback_FUN_00567360);
        if ((0.82f <= this_ptr->draw_blend) &&
           (local_2c = ((this_ptr->draw_blend - 0.82f) / (1.0 - 0.82f)) *
                       this_ptr->aim_weight, (float)0.001 < local_2c)) {
          if ((g_UCHAR_01cc90c4 & 1) == 0) {
            g_UCHAR_01cc90c4 = g_UCHAR_01cc90c4 | 1;
            core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(-1.5707964,&local_ac);
            pCVar9 = &local_ec;
            local_ec.w = local_ac.w;
            puVar5 = (uint *)((int)&local_ec + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            puVar3 = (uint *)((int)&local_ac + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            *(uint *)((int)&local_ec + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&local_ac + (uint)bVar7 * -8 + 4);
            *puVar5 = *puVar3;
            puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
            core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-1.5707964,&local_12c);
            local_dc.w = local_12c.w;
            puVar5 = (uint *)((int)&local_dc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            puVar3 = (uint *)((int)&local_12c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            *(uint *)((int)&local_dc + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&local_12c + (uint)bVar7 * -8 + 4);
            *puVar5 = *puVar3;
            puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_dc,pCVar9,&local_20c);
            g_CQuaternion4f_01cc90b4.w = local_20c.w;
            puVar5 = (uint *)((uint)bVar7 * -8 + 0x1cc90bc + (uint)bVar7 * -8);
            puVar3 = (uint *)((int)&local_20c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            *(uint *)((int)&g_CQuaternion4f_01cc90b4 + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&local_20c + (uint)bVar7 * -8 + 4);
            *puVar5 = *puVar3;
            puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
          }
          core_xform_cpp_multiplyQuaternion_FUN_005b77b0
                    (&g_CQuaternion4f_01cc90b4,&local_1bc,&local_1fc);
          fVar10 = local_2c;
          pcVar11 = core_gabriela_cpp_weaponDrawBlendWeightCallback_FUN_004c6150;
          pCVar9 = &local_14c;
          pCVar8 = &(this_ptr->base).base.model;
          local_14c.w = local_1fc.w;
          puVar5 = (uint *)((int)&local_14c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          puVar3 = (uint *)((int)&local_1fc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          *(uint *)((int)&local_14c + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&local_1fc + (uint)bVar7 * -8 + 4);
          iVar2 = g_INT_ARRAY_01cc9108[4];
          *puVar5 = *puVar3;
          puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
                    (pCVar8,pCVar9,fVar10,iVar2,pcVar11);
        }
      }
      if (0.0 < this_ptr->fire_cooldown_timer) {
        fVar10 = this_ptr->fire_cooldown_timer;
        fVar1 = (float)0.90000000000000002;
        (this_ptr->base).base.model.bone_update_mode = BONE_UPDATE_HIERARCHICAL_RESTPOSE;
        pCVar8 = &(this_ptr->base).base.model;
        local_18 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00525110
                             (&pCVar8->base,g_INT_ARRAY_01cc9108[0xf],1.0 - fVar10 * fVar1);
        local_14 = local_18;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_00567620
                  (pCVar8,g_INT_ARRAY_01cc9108[0xf],(float)local_18,g_INT_ARRAY_01cc9108[6]);
        (this_ptr->base).base.model.bone_update_mode = BONE_UPDATE_SIMPLE_FLAT;
      }
    }
  }
  local_34 = 0x3f490fdb;
  local_3c = 0xbfdf66f3;
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
  pcVar11 = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
  fVar10 = this_ptr->aim_blend * this_ptr->aim_weight;
  iVar2 = g_INT_ARRAY_01cc9108[0];
  core_xform_cpp_eulerToQuaternion_FUN_005b7ed0(&local_78,&local_10c);
  pCVar9 = &local_1ac;
  pCVar8 = &(this_ptr->base).base.model;
  local_1ac.w = local_10c.w;
  puVar5 = (uint *)((int)&local_1ac + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_10c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_1ac + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_10c + (uint)bVar7 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
            (pCVar8,pCVar9,fVar10,iVar2,pcVar11);
  local_48 = core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004c88a0(this_ptr);
  local_14 = (CDeformableModelInstance *)local_48;
  local_14 = (CDeformableModelInstance *)
             core_gabriela_cpp_CGabriella_getFlashlightMaxAngle_FUN_004c88f0(this_ptr);
  g_FLOAT_01cc9104 =
       (1.0 - (this_ptr->flashlight_angle - local_48) / ((float)local_14 - local_48)) *
       (float)1.3;
  if (1.0 < g_FLOAT_01cc9104) {
    g_FLOAT_01cc9104 = 1.0;
  }
  pcVar11 = core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004c6190;
  fVar10 = this_ptr->light_aim_blend;
  iVar2 = g_INT_ARRAY_01cc9108[1];
  core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(this_ptr->flashlight_angle,&local_1ec);
  pCVar9 = &local_16c;
  local_16c.w = local_1ec.w;
  puVar5 = (uint *)((int)&local_16c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_1ec + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_16c + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_1ec + (uint)bVar7 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(1.5707964,&local_1dc);
  local_17c.w = local_1dc.w;
  puVar5 = (uint *)((int)&local_17c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_1dc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_17c + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_1dc + (uint)bVar7 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_17c,pCVar9,&local_1cc);
  pCVar9 = &local_15c;
  pCVar8 = &(this_ptr->base).base.model;
  local_15c.w = local_1cc.w;
  puVar5 = (uint *)((int)&local_15c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_1cc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_15c + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_1cc + (uint)bVar7 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
            (pCVar8,pCVar9,fVar10,iVar2,pcVar11);
  return;
}
