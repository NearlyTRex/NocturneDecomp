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
  byte bVar3;
  float afStackY_19e8 [1521];
  CDeformableModelInstance *pCVar4;
  CQuaternion4f *pCVar5;
  float *pfVar6;
  float fVar7;
  code *pcVar8;
  uint *puVar9;
  uint local_20c;
  uint local_1fc;
  uint local_1ec;
  uint local_1dc;
  float local_1cc;
  uint local_1bc;
  CQuaternion4f local_1ac;
  uint local_19c;
  float afStack_198 [7];
  float local_17c [4];
  float local_16c [4];
  CQuaternion4f local_15c;
  uint local_14c;
  float afStack_148 [7];
  CQuaternion4f local_12c;
  uint local_11c;
  float afStack_118 [7];
  float local_fc;
  float local_ec;
  uint local_dc;
  float local_cc [4];
  float local_bc [4];
  CQuaternion4f local_ac;
  float local_9c;
  float local_98;
  uint local_94;
  float local_90;
  float local_8c [4];
  float local_7c;
  float local_78 [3];
  float local_6c;
  float local_68;
  float local_64;
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
  
  bVar3 = 0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  local_9c = this_ptr->aim_pitch;
  local_94 = 0;
  local_98 = this_ptr->aim_yaw;
  core_xform_cpp_FUN_00594380(&local_9c);
  local_1bc = afStack_148[3];
  *(float *)((int)&stack0xfffffe48 + (uint)bVar3 * 0xfffffffe * 4) =
       afStack_148[(uint)bVar3 * -2 + 4];
  afStack_198[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -7] =
       afStack_148[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5];
  (afStack_198 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + -7)[(uint)bVar3 * -2 + 1] =
       (afStack_148 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1];
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
        pCVar4 = &(this_ptr->base).base.model;
        local_18 = (CDeformableModelInstance *)
                   core_motion_cpp_FUN_00503f50(pCVar4,_DAT_01cb06ac,local_1c);
        local_14 = local_18;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
                  (pCVar4,_DAT_01cb06ac,(float)local_18,local_24,_DAT_01cb0688,
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
            local_8c[(uint)bVar3 * -2 + 9] = local_8c[(uint)bVar3 * -2];
            local_8c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
                 local_8c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
            puVar9 = &stack0xfffffe44;
            local_8c[2] = local_6c * _DAT_005d7057;
            local_8c[3] = local_68 * _DAT_005d7057;
            local_7c = local_64 * _DAT_005d7057;
            local_78[0] = local_6c * _DAT_005d7057;
            local_8c[(uint)bVar3 * -2 + 6] = local_8c[(uint)bVar3 * -2 + 3];
            local_8c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
                 local_8c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
            core_xform_cpp_FUN_00594380(local_8c + 5,puVar9);
            afStack_118[3] = (float)local_19c;
            afStack_118[(uint)bVar3 * -2 + 4] = afStack_198[(uint)bVar3 * -2];
            afStack_118[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5] =
                 afStack_198[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
            (afStack_118 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1] =
                 (afStack_198 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_118 + 3);
            fVar7 = local_28;
            pcVar8 = core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_004ad230;
            local_12c.w = afStack_198[3];
            pfVar6 = (float *)((int)&local_12c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
            *(float *)((int)&local_12c + (uint)bVar3 * -8 + 4) = afStack_198[(uint)bVar3 * -2 + 4];
            iVar2 = _DAT_01cb06c4;
            *pfVar6 = afStack_198[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5];
            pfVar6[(uint)bVar3 * -2 + 1] =
                 (afStack_198 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                      (local_14,&local_12c,fVar7,iVar2,pcVar8);
          }
        }
      }
      core_xform_cpp_slerpQuaternion_FUN_00593df0
                ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + _DAT_01cb06bc
                 ,(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                  _DAT_01cb0690,this_ptr->draw_blend / _DAT_005f7334);
      puVar9 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01cb06bc].w
      ;
      pfVar6 = (float *)(puVar9 + (uint)bVar3 * -2 + 1);
      *puVar9 = local_14c;
      *pfVar6 = afStack_148[(uint)bVar3 * -2];
      pfVar6[(uint)bVar3 * -2 + 1] = afStack_148[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      (pfVar6 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           (afStack_148 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
      iVar2 = _DAT_01cb06b0;
      if (0.0 < this_ptr->fire_cooldown_timer) {
        fVar7 = this_ptr->fire_cooldown_timer;
        pCVar4 = &(this_ptr->base).base.model;
        (this_ptr->base).base.model.bone_update_mode = BONE_UPDATE_HIERARCHICAL_RESTPOSE;
        local_44 = (CDeformableModelInstance *)core_motion_cpp_FUN_00503f50(pCVar4,iVar2,fVar7);
        local_14 = local_44;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_00544f80
                  (pCVar4,_DAT_01cb06b0,(float)local_44,0);
        (this_ptr->base).base.model.bone_update_mode = BONE_UPDATE_SIMPLE_FLAT;
      }
    }
    else {
      core_xform_cpp_slerpQuaternion_FUN_00593df0
                ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + _DAT_01cb06bc
                 ,(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                  _DAT_01cb0690,this_ptr->draw_blend / _DAT_005f7334);
      puVar9 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01cb06bc].w
      ;
      pfVar6 = (float *)(puVar9 + (uint)bVar3 * -2 + 1);
      *puVar9 = local_dc;
      *pfVar6 = afStack_118[(uint)bVar3 * -2 + 0x10];
      pfVar6[(uint)bVar3 * -2 + 1] = afStack_118[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11];
      (pfVar6 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           (afStack_118 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11)[(uint)bVar3 * -2 + 1];
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
        pCVar4 = &(this_ptr->base).base.model;
        local_50 = (CDeformableModelInstance *)
                   core_motion_cpp_FUN_00503f50(pCVar4,_DAT_01cb06ac,local_20);
        local_14 = local_50;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
                  (pCVar4,_DAT_01cb06ac,(float)local_50,local_24,_DAT_01cb0688,
                   core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
        if ((0x3F51EB85 <= this_ptr->draw_blend) &&
           (local_30 = ((this_ptr->draw_blend - 0x3F51EB85) / (1.0 - 0x3F51EB85)) *
                       this_ptr->aim_weight, (float)_DAT_005d7043 < local_30)) {
          if ((DAT_01cb0634 & 1) == 0) {
            DAT_01cb0634 = DAT_01cb0634 | 1;
            core_xform_cpp_quaternionFromAngleZ_FUN_00594020(0xbfc90fdb);
            pfVar6 = afStack_118 + 0x13;
            local_cc[0] = (float)local_11c;
            afStack_118[(uint)bVar3 * -2 + 0x14] = afStack_118[(uint)bVar3 * -2];
            afStack_118[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x15] =
                 afStack_118[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
            (afStack_118 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x15)[(uint)bVar3 * -2 + 1] =
                 (afStack_118 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
            core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0xbfc90fdb,pfVar6);
            local_bc[0] = (float)local_20c;
            afStack_118[(uint)bVar3 * -2 + 0x18] = *(float *)(&stack0xfffffdf8 + (uint)bVar3 * -8);
            afStack_118[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19] =
                 *(float *)(&stack0xfffffdfc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            (afStack_118 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19)[(uint)bVar3 * -2 + 1] =
                 *(float *)((int)(&stack0xfffffdfc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                           ((uint)bVar3 * -2 + 1) * 4);
            core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_118 + 0x17);
            _DAT_01cb0624 = local_1fc;
            *(uint *)(&DAT_01cb0628 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffe08 + (uint)bVar3 * -8);
            *(uint *)(&DAT_01cb062c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffe0c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            *(uint *)
             ((int)(&DAT_01cb062c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
             ((uint)bVar3 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xfffffe0c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                  ((uint)bVar3 * -2 + 1) * 4);
          }
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(&DAT_01cb0624,&stack0xfffffe44);
          fVar7 = local_30;
          pcVar8 = core_gabriela_cpp_FUN_004ad1a0;
          pCVar5 = &local_ac;
          pCVar4 = &(this_ptr->base).base.model;
          local_ac.w = local_ec;
          pfVar6 = (float *)((int)&local_ac + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
          *(float *)((int)&local_ac + (uint)bVar3 * -8 + 4) = afStack_118[(uint)bVar3 * -2 + 0xc];
          iVar2 = _DAT_01cb0688;
          *pfVar6 = afStack_118[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd];
          pfVar6[(uint)bVar3 * -2 + 1] =
               (afStack_118 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd)[(uint)bVar3 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
                    (pCVar4,pCVar5,fVar7,iVar2,pcVar8);
        }
      }
      if (0.0 < this_ptr->fire_cooldown_timer) {
        fVar7 = this_ptr->fire_cooldown_timer;
        fVar1 = (float)_DAT_005d704b;
        (this_ptr->base).base.model.bone_update_mode = BONE_UPDATE_HIERARCHICAL_RESTPOSE;
        pCVar4 = &(this_ptr->base).base.model;
        local_40 = (CDeformableModelInstance *)
                   core_motion_cpp_FUN_00503f50(pCVar4,_DAT_01cb06b4,1.0 - fVar7 * fVar1);
        local_14 = local_40;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_00544f80
                  (pCVar4,_DAT_01cb06b4,(float)local_40,_DAT_01cb0690);
        (this_ptr->base).base.model.bone_update_mode = BONE_UPDATE_SIMPLE_FLAT;
      }
    }
  }
  local_3c = 0x3f490fdb;
  local_38 = 0xbfdf66f3;
  local_34 = 0x3fdf66f3;
  if (local_9c < _DAT_005d705b) {
    local_9c = -1.2217305;
  }
  if (0.7853982 < local_9c) {
    local_9c = 0.7853982;
  }
  if (local_98 < -1.7453293) {
    local_98 = -1.7453293;
  }
  if (1.7453293 < local_98) {
    local_98 = 1.7453293;
  }
  pcVar8 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
  fVar7 = this_ptr->aim_blend * this_ptr->aim_weight;
  iVar2 = _DAT_01cb0678;
  core_xform_cpp_FUN_00594380(&local_9c);
  pCVar5 = &local_1ac;
  pCVar4 = &(this_ptr->base).base.model;
  local_1ac.w = local_fc;
  pfVar6 = (float *)((int)&local_1ac + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(float *)((int)&local_1ac + (uint)bVar3 * -8 + 4) = afStack_118[(uint)bVar3 * -2 + 8];
  *pfVar6 = afStack_118[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9];
  pfVar6[(uint)bVar3 * -2 + 1] =
       (afStack_118 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 9)[(uint)bVar3 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
            (pCVar4,pCVar5,fVar7,iVar2,pcVar8);
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
  pcVar8 = core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004ad1e0;
  fVar7 = this_ptr->light_aim_blend;
  iVar2 = _DAT_01cb067c;
  core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(this_ptr->flashlight_angle);
  pfVar6 = afStack_198 + 0xb;
  local_16c[0] = (float)local_1ec;
  afStack_198[(uint)bVar3 * -2 + 0xc] = *(float *)(&stack0xfffffe18 + (uint)bVar3 * -8);
  afStack_198[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
       *(float *)(&stack0xfffffe1c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  (afStack_198 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd)[(uint)bVar3 * -2 + 1] =
       *(float *)((int)(&stack0xfffffe1c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                 ((uint)bVar3 * -2 + 1) * 4);
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0x3fc90fdb,pfVar6);
  local_17c[0] = (float)local_1dc;
  afStack_198[(uint)bVar3 * -2 + 8] = *(float *)(&stack0xfffffe28 + (uint)bVar3 * -8);
  afStack_198[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9] =
       *(float *)(&stack0xfffffe2c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  (afStack_198 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 9)[(uint)bVar3 * -2 + 1] =
       *(float *)((int)(&stack0xfffffe2c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                 ((uint)bVar3 * -2 + 1) * 4);
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_198 + 7);
  pCVar5 = &local_15c;
  pCVar4 = &(this_ptr->base).base.model;
  local_15c.w = local_1cc;
  puVar9 = (uint *)((int)&local_15c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(uint *)((int)&local_15c + (uint)bVar3 * -8 + 4) =
       *(uint *)(&stack0xfffffe38 + (uint)bVar3 * -8);
  *puVar9 = *(uint *)(&stack0xfffffe3c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  puVar9[(uint)bVar3 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffe3c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
            (pCVar4,pCVar5,fVar7,iVar2,pcVar8);
  return;
}
