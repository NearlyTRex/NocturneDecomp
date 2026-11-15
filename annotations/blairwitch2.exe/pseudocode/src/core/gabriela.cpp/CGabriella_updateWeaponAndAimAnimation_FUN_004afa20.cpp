// Name: core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004afa20
// Address: 004afa20
// Address Range: [[004afa20, 004b0207]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004afa20(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004afa20(CGabriella *this_ptr)

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
  CVector3f local_9c;
  float local_90;
  float local_8c [4];
  float local_7c;
  CVector3f local_78;
  float local_6c;
  float local_68 [4];
  double local_58;
  CDeformableModelInstance *local_50;
  float local_48;
  CDeformableModelInstance *local_44;
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
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  local_9c.x = this_ptr->aim_pitch;
  local_9c.z = 0.0;
  local_9c.y = this_ptr->aim_yaw;
  core_xform_cpp_eulerToQuaternion_FUN_00594380(&local_9c,&local_13c);
  local_1bc.w = local_13c.w;
  puVar5 = (uint *)((int)&local_1bc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_13c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_1bc + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_13c + (uint)bVar7 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  if (0.0 < this_ptr->draw_blend) {
    local_24 = this_ptr->draw_blend / _DAT_005f7330;
    if (1.0 < local_24) {
      local_24 = 1.0;
    }
    if (0x3F51EB85 < this_ptr->draw_blend) {
      local_24 = (1.0 - (1.0 - this_ptr->aim_weight) *
                        ((this_ptr->draw_blend - 0x3F51EB85) / (1.0 - 0x3F51EB85))) * local_24;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c840
                      (&(this_ptr->base).inventories[0].selected_weapons
                        [(this_ptr->base).inventories[0].current_group]->base,&DAT_005d7037);
    if (iVar2 == 0) {
      if ((float)_DAT_005d7043 < local_24) {
        local_1c = this_ptr->draw_blend;
        if (0x3F51EB85 < local_1c) {
          local_1c = 0x3F51EB85;
        }
        local_1c = (local_1c - _DAT_005f7330) / (1.0 - _DAT_005f7330);
        if (local_1c < 0.0) {
          local_1c = 0.0;
        }
        if (1.0 < local_1c) {
          local_1c = 1.0;
        }
        pCVar8 = &(this_ptr->base).base.model;
        local_18 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00503f50
                             (&pCVar8->base,_DAT_01cb06ac,local_1c);
        local_14 = local_18;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
                  (pCVar8,_DAT_01cb06ac,(float)local_18,local_24,_DAT_01cb0688,
                   core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
        if (0x3F51EB85 <= this_ptr->draw_blend) {
          local_28 = ((this_ptr->draw_blend - 0x3F51EB85) / (1.0 - 0x3F51EB85)) *
                     this_ptr->aim_weight;
          if (local_28 < this_ptr->fire_cooldown_timer) {
            local_28 = this_ptr->fire_cooldown_timer;
          }
          if ((float)_DAT_005d7043 < local_28) {
            local_58 = (double)this_ptr->fire_cooldown_timer;
            local_2c = 0.0;
            if (0.0 < local_58) {
              local_2c = 1.0 - this_ptr->fire_cooldown_timer;
            }
            local_14 = &(this_ptr->base).base.model;
            core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
                      (local_14,_DAT_01cb06b0,local_2c,local_28 * (float)_DAT_005d704b,_DAT_01cb06c0
                       ,core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
            local_90 = _DAT_01cb0668 * _DAT_005d7053;
            local_8c[0] = _DAT_01cb066c * _DAT_005d7053;
            local_8c[1] = _DAT_01cb0670 * _DAT_005d7053;
            local_6c = _DAT_01cb0668 * _DAT_005d7053;
            local_68[(uint)bVar7 * -2] = local_8c[(uint)bVar7 * -2];
            local_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 local_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            pCVar9 = &local_1bc;
            local_8c[2] = local_6c * _DAT_005d7057;
            local_8c[3] = local_68[0] * _DAT_005d7057;
            local_7c = local_68[1] * _DAT_005d7057;
            local_78.x = local_6c * _DAT_005d7057;
            *(float *)((int)&local_78 + (uint)bVar7 * -8 + 4) = local_8c[(uint)bVar7 * -2 + 3];
            *(float *)((int)&local_78 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
                 local_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            core_xform_cpp_eulerToQuaternion_FUN_00594380(&local_78,&local_19c);
            local_10c.w = local_19c.w;
            puVar5 = (uint *)((int)&local_10c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            puVar3 = (uint *)((int)&local_19c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            *(uint *)((int)&local_10c + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&local_19c + (uint)bVar7 * -8 + 4);
            *puVar5 = *puVar3;
            puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_10c,pCVar9,&local_18c);
            fVar10 = local_28;
            pcVar11 = core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_004ad230;
            local_12c.w = local_18c.w;
            puVar5 = (uint *)((int)&local_12c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            puVar3 = (uint *)((int)&local_18c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            *(uint *)((int)&local_12c + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&local_18c + (uint)bVar7 * -8 + 4);
            iVar2 = _DAT_01cb06c4;
            *puVar5 = *puVar3;
            puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                      (local_14,&local_12c,fVar10,iVar2,pcVar11);
          }
        }
      }
      core_xform_cpp_slerpQuaternion_FUN_00593df0
                ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + _DAT_01cb06bc
                 ,(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                  _DAT_01cb0690,this_ptr->draw_blend / _DAT_005f7334,&local_14c);
      pfVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01cb06bc].w
      ;
      pfVar6 = pfVar4 + (uint)bVar7 * -2 + 1;
      *pfVar4 = local_14c.w;
      pfVar4 = (float *)((int)&local_14c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *pfVar6 = *(float *)((int)&local_14c + (uint)bVar7 * -8 + 4);
      pfVar6[(uint)bVar7 * -2 + 1] = *pfVar4;
      (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] = pfVar4[(uint)bVar7 * -2 + 1];
      iVar2 = _DAT_01cb06b0;
      if (0.0 < this_ptr->fire_cooldown_timer) {
        fVar10 = this_ptr->fire_cooldown_timer;
        pCVar8 = &(this_ptr->base).base.model;
        (this_ptr->base).base.model.bone_update_mode = BONE_UPDATE_HIERARCHICAL_RESTPOSE;
        local_44 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00503f50
                             (&pCVar8->base,iVar2,fVar10);
        local_14 = local_44;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_00544f80
                  (pCVar8,_DAT_01cb06b0,(float)local_44,0);
        (this_ptr->base).base.model.bone_update_mode = BONE_UPDATE_SIMPLE_FLAT;
      }
    }
    else {
      core_xform_cpp_slerpQuaternion_FUN_00593df0
                ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + _DAT_01cb06bc
                 ,(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                  _DAT_01cb0690,this_ptr->draw_blend / _DAT_005f7334,&local_dc);
      pfVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01cb06bc].w
      ;
      pfVar6 = pfVar4 + (uint)bVar7 * -2 + 1;
      *pfVar4 = local_dc.w;
      pfVar4 = (float *)((int)&local_dc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *pfVar6 = *(float *)((int)&local_dc + (uint)bVar7 * -8 + 4);
      pfVar6[(uint)bVar7 * -2 + 1] = *pfVar4;
      (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] = pfVar4[(uint)bVar7 * -2 + 1];
      if ((float)_DAT_005d7043 < local_24) {
        local_20 = this_ptr->draw_blend;
        if (0x3F51EB85 < local_20) {
          local_20 = 0x3F51EB85;
        }
        local_20 = (local_20 - _DAT_005f7330) / (1.0 - _DAT_005f7330);
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if (1.0 < local_20) {
          local_20 = 1.0;
        }
        pCVar8 = &(this_ptr->base).base.model;
        local_50 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00503f50
                             (&pCVar8->base,_DAT_01cb06ac,local_20);
        local_14 = local_50;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
                  (pCVar8,_DAT_01cb06ac,(float)local_50,local_24,_DAT_01cb0688,
                   core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
        if ((0x3F51EB85 <= this_ptr->draw_blend) &&
           (local_30 = ((this_ptr->draw_blend - 0x3F51EB85) / (1.0 - 0x3F51EB85)) *
                       this_ptr->aim_weight, (float)_DAT_005d7043 < local_30)) {
          if ((DAT_01cb0634 & 1) == 0) {
            DAT_01cb0634 = DAT_01cb0634 | 1;
            core_xform_cpp_quaternionFromAngleZ_FUN_00594020(-1.5707964,&local_11c);
            pCVar9 = &local_cc;
            local_cc.w = local_11c.w;
            puVar5 = (uint *)((int)&local_cc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            puVar3 = (uint *)((int)&local_11c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            *(uint *)((int)&local_cc + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&local_11c + (uint)bVar7 * -8 + 4);
            *puVar5 = *puVar3;
            puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
            core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-1.5707964,&local_20c);
            local_bc.w = local_20c.w;
            puVar5 = (uint *)((int)&local_bc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            puVar3 = (uint *)((int)&local_20c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            *(uint *)((int)&local_bc + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&local_20c + (uint)bVar7 * -8 + 4);
            *puVar5 = *puVar3;
            puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_bc,pCVar9,&local_1fc);
            _DAT_01cb0624 = local_1fc.w;
            puVar3 = (uint *)((int)&local_1fc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            *(uint *)(&DAT_01cb0628 + (uint)bVar7 * -8) =
                 *(uint *)((int)&local_1fc + (uint)bVar7 * -8 + 4);
            *(uint *)(&DAT_01cb062c + (uint)bVar7 * -8 + (uint)bVar7 * -8) = *puVar3;
            *(uint *)
             ((int)(&DAT_01cb062c + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
             ((uint)bVar7 * -2 + 1) * 4) = puVar3[(uint)bVar7 * -2 + 1];
          }
          core_xform_cpp_multiplyQuaternion_FUN_00593c60
                    ((CQuaternion4f *)&DAT_01cb0624,&local_1bc,&local_ec);
          fVar10 = local_30;
          pcVar11 = core_gabriela_cpp_FUN_004ad1a0;
          pCVar9 = &local_ac;
          pCVar8 = &(this_ptr->base).base.model;
          local_ac.w = local_ec.w;
          puVar5 = (uint *)((int)&local_ac + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          puVar3 = (uint *)((int)&local_ec + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          *(uint *)((int)&local_ac + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&local_ec + (uint)bVar7 * -8 + 4);
          iVar2 = _DAT_01cb0688;
          *puVar5 = *puVar3;
          puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
                    (pCVar8,pCVar9,fVar10,iVar2,pcVar11);
        }
      }
      if (0.0 < this_ptr->fire_cooldown_timer) {
        fVar10 = this_ptr->fire_cooldown_timer;
        fVar1 = (float)_DAT_005d704b;
        (this_ptr->base).base.model.bone_update_mode = BONE_UPDATE_HIERARCHICAL_RESTPOSE;
        pCVar8 = &(this_ptr->base).base.model;
        local_40 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00503f50
                             (&pCVar8->base,_DAT_01cb06b4,1.0 - fVar10 * fVar1);
        local_14 = local_40;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_00544f80
                  (pCVar8,_DAT_01cb06b4,(float)local_40,_DAT_01cb0690);
        (this_ptr->base).base.model.bone_update_mode = BONE_UPDATE_SIMPLE_FLAT;
      }
    }
  }
  local_3c = 0x3f490fdb;
  local_38 = 0xbfdf66f3;
  local_34 = 0x3fdf66f3;
  if (local_9c.x < _DAT_005d705b) {
    local_9c.x = -1.2217305;
  }
  if (0.7853982 < local_9c.x) {
    local_9c.x = 0.7853982;
  }
  if (local_9c.y < -1.7453293) {
    local_9c.y = -1.7453293;
  }
  if (1.7453293 < local_9c.y) {
    local_9c.y = 1.7453293;
  }
  pcVar11 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
  fVar10 = this_ptr->aim_blend * this_ptr->aim_weight;
  iVar2 = _DAT_01cb0678;
  core_xform_cpp_eulerToQuaternion_FUN_00594380(&local_9c,&local_fc);
  pCVar9 = &local_1ac;
  pCVar8 = &(this_ptr->base).base.model;
  local_1ac.w = local_fc.w;
  puVar5 = (uint *)((int)&local_1ac + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_fc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_1ac + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_fc + (uint)bVar7 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
            (pCVar8,pCVar9,fVar10,iVar2,pcVar11);
  local_48 = core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004af900(this_ptr);
  local_14 = (CDeformableModelInstance *)local_48;
  local_14 = (CDeformableModelInstance *)
             core_gabriela_cpp_CGabriella_getFlashlightMaxAngle_FUN_004af950(this_ptr);
  _DAT_01cb0674 =
       (1.0 - (this_ptr->flashlight_angle - local_48) / ((float)local_14 - local_48)) *
       (float)_DAT_005d7063;
  if (1.0 < _DAT_01cb0674) {
    _DAT_01cb0674 = 1.0;
  }
  pcVar11 = core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004ad1e0;
  fVar10 = this_ptr->light_aim_blend;
  iVar2 = _DAT_01cb067c;
  core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(this_ptr->flashlight_angle,&local_1ec);
  pCVar9 = &local_16c;
  local_16c.w = local_1ec.w;
  puVar5 = (uint *)((int)&local_16c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_1ec + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_16c + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_1ec + (uint)bVar7 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(1.5707964,&local_1dc);
  local_17c.w = local_1dc.w;
  puVar5 = (uint *)((int)&local_17c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_1dc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_17c + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_1dc + (uint)bVar7 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_17c,pCVar9,&local_1cc);
  pCVar9 = &local_15c;
  pCVar8 = &(this_ptr->base).base.model;
  local_15c.w = local_1cc.w;
  puVar5 = (uint *)((int)&local_15c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  puVar3 = (uint *)((int)&local_1cc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(uint *)((int)&local_15c + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_1cc + (uint)bVar7 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
            (pCVar8,pCVar9,fVar10,iVar2,pcVar11);
  return;
}
