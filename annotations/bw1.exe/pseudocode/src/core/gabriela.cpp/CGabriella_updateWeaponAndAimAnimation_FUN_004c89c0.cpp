// Name: core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004c89c0
// Address: 004c89c0
// Address Range: [[004c89c0, 004c91a0]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004c89c0(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004c89c0(CGabriella *this_ptr)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  float afStackY_19e8 [1521];
  CDeformableModelInstance *pCVar4;
  CQuaternion4f *pCVar5;
  uint *puVar6;
  float fVar7;
  code *pcVar8;
  float *pfVar9;
  uint local_20c;
  float local_1fc;
  uint local_1ec;
  uint local_1dc;
  float local_1cc;
  uint local_1bc;
  CQuaternion4f local_1ac;
  float local_19c;
  uint auStack_198 [7];
  uint local_17c [4];
  uint local_16c [4];
  CQuaternion4f local_15c;
  CQuaternion4f local_14c;
  uint local_13c;
  float afStack_138 [7];
  float local_11c [4];
  float local_10c;
  uint local_fc;
  float local_ec [4];
  float local_dc [4];
  CQuaternion4f local_cc;
  uint local_bc;
  float afStack_b8 [7];
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84 [3];
  float local_78;
  float local_74;
  uint local_70;
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
  
  bVar3 = 0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  local_78 = this_ptr->aim_pitch;
  local_70 = 0;
  local_74 = this_ptr->aim_yaw;
  core_xform_cpp_FUN_005b7ed0(afStack_b8 + 0x10);
  local_1bc = auStack_198[3];
  *(uint *)((int)&stack0xfffffe48 + (uint)bVar3 * 0xfffffffe * 4) =
       auStack_198[(uint)bVar3 * -2 + 4];
  auStack_198[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -7] =
       auStack_198[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5];
  (auStack_198 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + -7)[(uint)bVar3 * -2 + 1] =
       (auStack_198 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1];
  if (0.0 < this_ptr->draw_blend) {
    local_24 = this_ptr->draw_blend / _DAT_00600d50;
    if (1.0 < local_24) {
      local_24 = 1.0;
    }
    if (0x3F51EB85 < this_ptr->draw_blend) {
      local_24 = (1.0 - (1.0 - this_ptr->aim_weight) *
                        ((this_ptr->draw_blend - 0x3F51EB85) / (1.0 - 0x3F51EB85))) * local_24;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c550
                      (*(CDemonActor **)&this_ptr->field_0x1fe20,&DAT_005e10b0);
    if (iVar2 == 0) {
      if ((float)_DAT_005e10bc < local_24) {
        local_1c = this_ptr->draw_blend;
        if (0x3F51EB85 < local_1c) {
          local_1c = 0x3F51EB85;
        }
        local_1c = (local_1c - _DAT_00600d50) / (1.0 - _DAT_00600d50);
        if (local_1c < 0.0) {
          local_1c = 0.0;
        }
        if (1.0 < local_1c) {
          local_1c = 1.0;
        }
        local_4c = (CDeformableModelInstance *)
                   core_motion_cpp_FUN_00525110(&this_ptr->field_0x158,_DAT_01cc913c,local_1c);
        local_14 = local_4c;
        core_skeleton_cpp_FUN_00568100
                  (&this_ptr->field_0x158,_DAT_01cc913c,local_4c,local_24,_DAT_01cc9118,
                   core_skeleton_cpp_FUN_00567360);
        if (0x3F51EB85 <= this_ptr->draw_blend) {
          local_28 = ((this_ptr->draw_blend - 0x3F51EB85) / (1.0 - 0x3F51EB85)) *
                     this_ptr->aim_weight;
          if (local_28 < this_ptr->fire_cooldown_timer) {
            local_28 = this_ptr->fire_cooldown_timer;
          }
          if ((float)_DAT_005e10bc < local_28) {
            local_60 = (double)this_ptr->fire_cooldown_timer;
            local_30 = 0.0;
            if (0.0 < local_60) {
              local_30 = 1.0 - this_ptr->fire_cooldown_timer;
            }
            local_14 = (CDeformableModelInstance *)&this_ptr->field_0x158;
            core_skeleton_cpp_FUN_00568100
                      (local_14,_DAT_01cc9140,local_30,local_28 * (float)_DAT_005e10c4,_DAT_01cc9150
                       ,core_skeleton_cpp_FUN_00567360);
            local_90 = _DAT_01cc90f8 * _DAT_005e10cc;
            local_8c = _DAT_01cc90fc * _DAT_005e10cc;
            local_88 = _DAT_01cc9100 * _DAT_005e10cc;
            local_9c = _DAT_01cc90f8 * _DAT_005e10cc;
            afStack_b8[(uint)bVar3 * -2 + 8] = afStack_b8[(uint)bVar3 * -2 + 0xb];
            afStack_b8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9] =
                 afStack_b8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xc];
            puVar6 = &stack0xfffffe44;
            local_6c = local_9c * _DAT_005e10d0;
            local_68[0] = local_98 * _DAT_005e10d0;
            local_68[1] = local_94 * _DAT_005e10d0;
            local_84[0] = local_9c * _DAT_005e10d0;
            afStack_b8[(uint)bVar3 * -2 + 0xe] = local_68[(uint)bVar3 * -2];
            afStack_b8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xf] =
                 local_68[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
            core_xform_cpp_FUN_005b7ed0(afStack_b8 + 0xd,puVar6);
            local_11c[0] = (float)local_bc;
            afStack_138[(uint)bVar3 * -2 + 8] = afStack_b8[(uint)bVar3 * -2];
            afStack_138[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9] =
                 afStack_b8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
            (afStack_138 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 9)[(uint)bVar3 * -2 + 1] =
                 (afStack_b8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005b77b0(afStack_138 + 7);
            fVar7 = local_28;
            pcVar8 = core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_004c61e0;
            local_cc.w = local_19c;
            puVar6 = (uint *)((int)&local_cc + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
            *(uint *)((int)&local_cc + (uint)bVar3 * -8 + 4) = auStack_198[(uint)bVar3 * -2];
            iVar2 = _DAT_01cc9154;
            *puVar6 = auStack_198[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
            puVar6[(uint)bVar3 * -2 + 1] =
                 (auStack_198 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                      (local_14,&local_cc,fVar7,iVar2,pcVar8);
          }
        }
      }
      core_xform_cpp_slerpQuaternion_FUN_005b7940
                (&this_ptr->field_0x808 + _DAT_01cc914c * 0x10,
                 &this_ptr->field_0x808 + _DAT_01cc9120 * 0x10,this_ptr->draw_blend / _DAT_00600d54)
      ;
      puVar6 = (uint *)(&this_ptr->field_0x808 + _DAT_01cc914c * 0x10);
      pfVar9 = (float *)(puVar6 + (uint)bVar3 * -2 + 1);
      *puVar6 = local_13c;
      *pfVar9 = afStack_138[(uint)bVar3 * -2];
      pfVar9[(uint)bVar3 * -2 + 1] = afStack_138[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      (pfVar9 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           (afStack_138 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
      uVar1 = _DAT_01cc9140;
      if (0.0 < this_ptr->fire_cooldown_timer) {
        *(uint *)&this_ptr->field_0x2498 = 2;
        local_40 = (CDeformableModelInstance *)
                   core_motion_cpp_FUN_00525110
                             (&this_ptr->field_0x158,uVar1,this_ptr->fire_cooldown_timer);
        local_14 = local_40;
        core_skeleton_cpp_FUN_00567620(&this_ptr->field_0x158,_DAT_01cc9140,local_40,0);
        *(uint *)&this_ptr->field_0x2498 = 0;
      }
    }
    else {
      core_xform_cpp_slerpQuaternion_FUN_005b7940
                (&this_ptr->field_0x808 + _DAT_01cc914c * 0x10,
                 &this_ptr->field_0x808 + _DAT_01cc9120 * 0x10,this_ptr->draw_blend / _DAT_00600d54)
      ;
      puVar6 = (uint *)(&this_ptr->field_0x808 + _DAT_01cc914c * 0x10);
      pfVar9 = (float *)(puVar6 + (uint)bVar3 * -2 + 1);
      *puVar6 = local_fc;
      *pfVar9 = afStack_138[(uint)bVar3 * -2 + 0x10];
      pfVar9[(uint)bVar3 * -2 + 1] = afStack_138[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11];
      (pfVar9 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           (afStack_138 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11)[(uint)bVar3 * -2 + 1];
      if ((float)_DAT_005e10bc < local_24) {
        local_20 = this_ptr->draw_blend;
        if (0x3F51EB85 < local_20) {
          local_20 = 0x3F51EB85;
        }
        local_20 = (local_20 - _DAT_00600d50) / (1.0 - _DAT_00600d50);
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if (1.0 < local_20) {
          local_20 = 1.0;
        }
        local_50 = (CDeformableModelInstance *)
                   core_motion_cpp_FUN_00525110(&this_ptr->field_0x158,_DAT_01cc913c,local_20);
        local_14 = local_50;
        core_skeleton_cpp_FUN_00568100
                  (&this_ptr->field_0x158,_DAT_01cc913c,local_50,local_24,_DAT_01cc9118,
                   core_skeleton_cpp_FUN_00567360);
        if ((0x3F51EB85 <= this_ptr->draw_blend) &&
           (local_2c = ((this_ptr->draw_blend - 0x3F51EB85) / (1.0 - 0x3F51EB85)) *
                       this_ptr->aim_weight, (float)_DAT_005e10bc < local_2c)) {
          if ((DAT_01cc90c4 & 1) == 0) {
            DAT_01cc90c4 = DAT_01cc90c4 | 1;
            core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(0xbfc90fdb);
            pfVar9 = afStack_138 + 0x13;
            local_ec[0] = afStack_b8[3];
            afStack_138[(uint)bVar3 * -2 + 0x14] = afStack_b8[(uint)bVar3 * -2 + 4];
            afStack_138[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x15] =
                 afStack_b8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5];
            (afStack_138 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x15)[(uint)bVar3 * -2 + 1] =
                 (afStack_b8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1];
            core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(0xbfc90fdb,pfVar9);
            local_dc[0] = afStack_138[3];
            afStack_138[(uint)bVar3 * -2 + 0x18] = afStack_138[(uint)bVar3 * -2 + 4];
            afStack_138[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19] =
                 afStack_138[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5];
            (afStack_138 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19)[(uint)bVar3 * -2 + 1] =
                 (afStack_138 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005b77b0(afStack_138 + 0x17);
            _DAT_01cc90b4 = local_20c;
            *(uint *)(&DAT_01cc90b8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffdf8 + (uint)bVar3 * -8);
            *(uint *)(&DAT_01cc90bc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffdfc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            *(uint *)
             ((int)(&DAT_01cc90bc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
             ((uint)bVar3 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xfffffdfc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                  ((uint)bVar3 * -2 + 1) * 4);
          }
          core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&DAT_01cc90b4,&stack0xfffffe44);
          fVar7 = local_2c;
          pcVar8 = core_gabriela_cpp_FUN_004c6150;
          pCVar5 = &local_14c;
          pCVar4 = (CDeformableModelInstance *)&this_ptr->field_0x158;
          local_14c.w = local_1fc;
          puVar6 = (uint *)((int)&local_14c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
          *(uint *)((int)&local_14c + (uint)bVar3 * -8 + 4) =
               *(uint *)(&stack0xfffffe08 + (uint)bVar3 * -8);
          iVar2 = _DAT_01cc9118;
          *puVar6 = *(uint *)(&stack0xfffffe0c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          puVar6[(uint)bVar3 * -2 + 1] =
               *(uint *)
                ((int)(&stack0xfffffe0c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                ((uint)bVar3 * -2 + 1) * 4);
          core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
                    (pCVar4,pCVar5,fVar7,iVar2,pcVar8);
        }
      }
      if (0.0 < this_ptr->fire_cooldown_timer) {
        fVar7 = (float)_DAT_005e10c4;
        *(uint *)&this_ptr->field_0x2498 = 2;
        local_18 = (CDeformableModelInstance *)
                   core_motion_cpp_FUN_00525110
                             (&this_ptr->field_0x158,_DAT_01cc9144,
                              1.0 - this_ptr->fire_cooldown_timer * fVar7);
        local_14 = local_18;
        core_skeleton_cpp_FUN_00567620(&this_ptr->field_0x158,_DAT_01cc9144,local_18,_DAT_01cc9120);
        *(uint *)&this_ptr->field_0x2498 = 0;
      }
    }
  }
  local_34 = 0x3f490fdb;
  local_3c = 0xbfdf66f3;
  local_38 = 0x3fdf66f3;
  if (local_78 < _DAT_005e10d4) {
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
  pcVar8 = core_skeleton_cpp_FUN_00567360;
  fVar7 = this_ptr->aim_blend * this_ptr->aim_weight;
  iVar2 = _DAT_01cc9108;
  core_xform_cpp_FUN_005b7ed0(afStack_b8 + 0x10);
  pCVar5 = &local_1ac;
  pCVar4 = (CDeformableModelInstance *)&this_ptr->field_0x158;
  local_1ac.w = local_10c;
  pfVar9 = (float *)((int)&local_1ac + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(float *)((int)&local_1ac + (uint)bVar3 * -8 + 4) = afStack_138[(uint)bVar3 * -2 + 0xc];
  *pfVar9 = afStack_138[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd];
  pfVar9[(uint)bVar3 * -2 + 1] =
       (afStack_138 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd)[(uint)bVar3 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
            (pCVar4,pCVar5,fVar7,iVar2,pcVar8);
  local_48 = core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004c88a0(this_ptr);
  local_14 = (CDeformableModelInstance *)local_48;
  local_14 = (CDeformableModelInstance *)
             core_gabriela_cpp_CGabriella_getFlashlightMaxAngle_FUN_004c88f0(this_ptr);
  _DAT_01cc9104 =
       (1.0 - (this_ptr->flashlight_angle - local_48) / ((float)local_14 - local_48)) *
       (float)_DAT_005e10dc;
  if (1.0 < _DAT_01cc9104) {
    _DAT_01cc9104 = 1.0;
  }
  pcVar8 = core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004c6190;
  fVar7 = this_ptr->light_aim_blend;
  iVar2 = _DAT_01cc910c;
  core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(this_ptr->flashlight_angle);
  puVar6 = auStack_198 + 0xb;
  local_16c[0] = local_1ec;
  auStack_198[(uint)bVar3 * -2 + 0xc] = *(uint *)(&stack0xfffffe18 + (uint)bVar3 * -8);
  auStack_198[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
       *(uint *)(&stack0xfffffe1c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  (auStack_198 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd)[(uint)bVar3 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffe1c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(0x3fc90fdb,puVar6);
  local_17c[0] = local_1dc;
  auStack_198[(uint)bVar3 * -2 + 8] = *(uint *)(&stack0xfffffe28 + (uint)bVar3 * -8);
  auStack_198[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9] =
       *(uint *)(&stack0xfffffe2c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  (auStack_198 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 9)[(uint)bVar3 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffe2c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  core_xform_cpp_multiplyQuaternion_FUN_005b77b0(auStack_198 + 7);
  pCVar5 = &local_15c;
  pCVar4 = (CDeformableModelInstance *)&this_ptr->field_0x158;
  local_15c.w = local_1cc;
  puVar6 = (uint *)((int)&local_15c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(uint *)((int)&local_15c + (uint)bVar3 * -8 + 4) =
       *(uint *)(&stack0xfffffe38 + (uint)bVar3 * -8);
  *puVar6 = *(uint *)(&stack0xfffffe3c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  puVar6[(uint)bVar3 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffe3c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
            (pCVar4,pCVar5,fVar7,iVar2,pcVar8);
  return;
}
