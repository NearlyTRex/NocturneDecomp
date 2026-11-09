// Name: core_gabriela.cpp_FUN_004c89c0
// Address: 004c89c0
// Address Range: [[004c89c0, 004c91a0]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_FUN_004c89c0(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_FUN_004c89c0(CGabriella *this_ptr)

{
  uint uVar1;
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
  uint local_1cc;
  uint local_1bc;
  uint local_1ac;
  float afStack_1a8 [7];
  uint local_18c;
  float local_17c [4];
  float local_16c [4];
  uint local_15c;
  uint auStack_158 [3];
  uint local_14c;
  float afStack_148 [7];
  uint local_12c;
  float local_11c [4];
  uint local_10c;
  uint local_fc;
  float local_ec [4];
  float local_dc [4];
  uint local_cc;
  float afStack_c8 [7];
  uint local_ac;
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
  local_78 = *(float *)&this_ptr->field_0x1ffdc;
  local_70 = 0;
  local_74 = *(float *)&this_ptr->field_0x1ffe0;
  core_xform_cpp_FUN_005b7ed0(afStack_c8 + 0x14);
  local_1bc = local_18c;
  *(float *)((int)&stack0xfffffe48 + (uint)bVar3 * 0xfffffffe * 4) =
       afStack_1a8[(uint)bVar3 * -2 + 8];
  afStack_1a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -3] =
       afStack_1a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9];
  (afStack_1a8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + -3)[(uint)bVar3 * -2 + 1] =
       (afStack_1a8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 9)[(uint)bVar3 * -2 + 1];
  if (0.0 < *(float *)&this_ptr->field_0x1ffb4) {
    local_24 = *(float *)&this_ptr->field_0x1ffb4 / _DAT_00600d50;
    if (1.0 < local_24) {
      local_24 = 1.0;
    }
    if (0x3F51EB85 < *(float *)&this_ptr->field_0x1ffb4) {
      local_24 = (1.0 - (1.0 - *(float *)&this_ptr->field_0x1ffe8) *
                        ((*(float *)&this_ptr->field_0x1ffb4 - 0x3F51EB85) / (1.0 - 0x3F51EB85))
                 ) * local_24;
    }
    iVar2 = core_actor_cpp_FUN_0040c550(*(CDemonActor **)&this_ptr->field_0x1fe20,&DAT_005e10b0);
    if (iVar2 == 0) {
      if ((float)_DAT_005e10bc < local_24) {
        local_1c = *(float *)&this_ptr->field_0x1ffb4;
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
        if (0x3F51EB85 <= *(float *)&this_ptr->field_0x1ffb4) {
          local_28 = ((*(float *)&this_ptr->field_0x1ffb4 - 0x3F51EB85) / (1.0 - 0x3F51EB85)) *
                     *(float *)&this_ptr->field_0x1ffe8;
          if (local_28 < *(float *)&this_ptr->field_0x1ffe4) {
            local_28 = *(float *)&this_ptr->field_0x1ffe4;
          }
          if ((float)_DAT_005e10bc < local_28) {
            local_60 = (double)*(float *)&this_ptr->field_0x1ffe4;
            local_30 = 0.0;
            if (0.0 < local_60) {
              local_30 = 1.0 - *(float *)&this_ptr->field_0x1ffe4;
            }
            local_14 = (CDeformableModelInstance *)&this_ptr->field_0x158;
            core_skeleton_cpp_FUN_00568100
                      (local_14,_DAT_01cc9140,local_30,local_28 * (float)_DAT_005e10c4,_DAT_01cc9150
                       ,core_skeleton_cpp_FUN_00567360);
            local_90 = _DAT_01cc90f8 * _DAT_005e10cc;
            local_8c = _DAT_01cc90fc * _DAT_005e10cc;
            local_88 = _DAT_01cc9100 * _DAT_005e10cc;
            local_9c = _DAT_01cc90f8 * _DAT_005e10cc;
            afStack_c8[(uint)bVar3 * -2 + 0xc] = afStack_c8[(uint)bVar3 * -2 + 0xf];
            afStack_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
                 afStack_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10];
            puVar9 = &stack0xfffffe44;
            local_6c = local_9c * _DAT_005e10d0;
            local_68[0] = local_98 * _DAT_005e10d0;
            local_68[1] = local_94 * _DAT_005e10d0;
            local_84[0] = local_9c * _DAT_005e10d0;
            afStack_c8[(uint)bVar3 * -2 + 0x12] = local_68[(uint)bVar3 * -2];
            afStack_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x13] =
                 local_68[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
            core_xform_cpp_FUN_005b7ed0(afStack_c8 + 0x11,puVar9);
            local_11c[0] = afStack_c8[3];
            afStack_148[(uint)bVar3 * -2 + 0xc] = afStack_c8[(uint)bVar3 * -2 + 4];
            afStack_148[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
                 afStack_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5];
            (afStack_148 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd)[(uint)bVar3 * -2 + 1] =
                 (afStack_c8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005b77b0(afStack_148 + 0xb);
            fVar7 = local_28;
            pcVar8 = core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_004c61e0;
            local_cc = afStack_1a8[3];
            afStack_c8[(uint)bVar3 * -2] = afStack_1a8[(uint)bVar3 * -2 + 4];
            iVar2 = _DAT_01cc9154;
            afStack_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
                 afStack_1a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5];
            (afStack_c8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
                 (afStack_1a8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1];
            core_skeleton_cpp_FUN_005695e0(local_14,(CQuaternion4f *)&local_cc,fVar7,iVar2,pcVar8);
          }
        }
      }
      core_xform_cpp_FUN_005b7940
                (&this_ptr->field_0x808 + _DAT_01cc914c * 0x10,
                 &this_ptr->field_0x808 + _DAT_01cc9120 * 0x10,
                 *(float *)&this_ptr->field_0x1ffb4 / _DAT_00600d54);
      puVar9 = (uint *)(&this_ptr->field_0x808 + _DAT_01cc914c * 0x10);
      pfVar6 = (float *)(puVar9 + (uint)bVar3 * -2 + 1);
      *puVar9 = afStack_148[3];
      *pfVar6 = afStack_148[(uint)bVar3 * -2 + 4];
      pfVar6[(uint)bVar3 * -2 + 1] = afStack_148[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5];
      (pfVar6 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           (afStack_148 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1];
      uVar1 = _DAT_01cc9140;
      if (0.0 < *(float *)&this_ptr->field_0x1ffe4) {
        *(uint *)&this_ptr->field_0x2498 = 2;
        local_40 = (CDeformableModelInstance *)
                   core_motion_cpp_FUN_00525110
                             (&this_ptr->field_0x158,uVar1,*(uint *)&this_ptr->field_0x1ffe4);
        local_14 = local_40;
        core_skeleton_cpp_FUN_00567620(&this_ptr->field_0x158,_DAT_01cc9140,local_40,0);
        *(uint *)&this_ptr->field_0x2498 = 0;
      }
    }
    else {
      core_xform_cpp_FUN_005b7940
                (&this_ptr->field_0x808 + _DAT_01cc914c * 0x10,
                 &this_ptr->field_0x808 + _DAT_01cc9120 * 0x10,
                 *(float *)&this_ptr->field_0x1ffb4 / _DAT_00600d54);
      puVar9 = (uint *)(&this_ptr->field_0x808 + _DAT_01cc914c * 0x10);
      pfVar6 = (float *)(puVar9 + (uint)bVar3 * -2 + 1);
      *puVar9 = local_fc;
      *pfVar6 = afStack_148[(uint)bVar3 * -2 + 0x14];
      pfVar6[(uint)bVar3 * -2 + 1] = afStack_148[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x15];
      (pfVar6 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           (afStack_148 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x15)[(uint)bVar3 * -2 + 1];
      if ((float)_DAT_005e10bc < local_24) {
        local_20 = *(float *)&this_ptr->field_0x1ffb4;
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
        if ((0x3F51EB85 <= *(float *)&this_ptr->field_0x1ffb4) &&
           (local_2c = ((*(float *)&this_ptr->field_0x1ffb4 - 0x3F51EB85) / (1.0 - 0x3F51EB85))
                       * *(float *)&this_ptr->field_0x1ffe8, (float)_DAT_005e10bc < local_2c)) {
          if ((DAT_01cc90c4 & 1) == 0) {
            DAT_01cc90c4 = DAT_01cc90c4 | 1;
            core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(0xbfc90fdb);
            pfVar6 = afStack_148 + 0x17;
            local_ec[0] = (float)local_ac;
            afStack_148[(uint)bVar3 * -2 + 0x18] = afStack_c8[(uint)bVar3 * -2 + 8];
            afStack_148[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19] =
                 afStack_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9];
            (afStack_148 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19)[(uint)bVar3 * -2 + 1] =
                 (afStack_c8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 9)[(uint)bVar3 * -2 + 1];
            core_xform_cpp_FUN_005b7b30(0xbfc90fdb,pfVar6);
            local_dc[0] = (float)local_12c;
            afStack_148[(uint)bVar3 * -2 + 0x1c] = afStack_148[(uint)bVar3 * -2 + 8];
            afStack_148[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1d] =
                 afStack_148[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9];
            (afStack_148 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1d)[(uint)bVar3 * -2 + 1] =
                 (afStack_148 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 9)[(uint)bVar3 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005b77b0(afStack_148 + 0x1b);
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
          pCVar5 = (CQuaternion4f *)&local_14c;
          pCVar4 = (CDeformableModelInstance *)&this_ptr->field_0x158;
          local_14c = local_1fc;
          afStack_148[(uint)bVar3 * -2] = *(float *)(&stack0xfffffe08 + (uint)bVar3 * -8);
          iVar2 = _DAT_01cc9118;
          afStack_148[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               *(float *)(&stack0xfffffe0c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          (afStack_148 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
               *(float *)((int)(&stack0xfffffe0c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                         ((uint)bVar3 * -2 + 1) * 4);
          core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
                    (pCVar4,pCVar5,fVar7,iVar2,pcVar8);
        }
      }
      if (0.0 < *(float *)&this_ptr->field_0x1ffe4) {
        fVar7 = (float)_DAT_005e10c4;
        *(uint *)&this_ptr->field_0x2498 = 2;
        local_18 = (CDeformableModelInstance *)
                   core_motion_cpp_FUN_00525110
                             (&this_ptr->field_0x158,_DAT_01cc9144,
                              1.0 - *(float *)&this_ptr->field_0x1ffe4 * fVar7);
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
  fVar7 = *(float *)&this_ptr->field_0x1ffb8 * *(float *)&this_ptr->field_0x1ffe8;
  iVar2 = _DAT_01cc9108;
  core_xform_cpp_FUN_005b7ed0(afStack_c8 + 0x14);
  pCVar5 = (CQuaternion4f *)&local_1ac;
  pCVar4 = (CDeformableModelInstance *)&this_ptr->field_0x158;
  local_1ac = local_10c;
  afStack_1a8[(uint)bVar3 * -2] = afStack_148[(uint)bVar3 * -2 + 0x10];
  afStack_1a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       afStack_148[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11];
  (afStack_1a8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
       (afStack_148 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11)[(uint)bVar3 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
            (pCVar4,pCVar5,fVar7,iVar2,pcVar8);
  local_48 = (float)core_gabriela_cpp_FUN_004c88a0(this_ptr);
  local_14 = (CDeformableModelInstance *)local_48;
  local_14 = (CDeformableModelInstance *)core_gabriela_cpp_FUN_004c88f0(this_ptr);
  _DAT_01cc9104 =
       (1.0 - (*(float *)&this_ptr->field_0x1ffc0 - local_48) / ((float)local_14 - local_48)) *
       (float)_DAT_005e10dc;
  if (1.0 < _DAT_01cc9104) {
    _DAT_01cc9104 = 1.0;
  }
  pcVar8 = core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004c6190;
  fVar7 = *(float *)&this_ptr->field_0x1ffbc;
  iVar2 = _DAT_01cc910c;
  core_xform_cpp_FUN_005b7af0(*(uint *)&this_ptr->field_0x1ffc0);
  pfVar6 = afStack_1a8 + 0xf;
  local_16c[0] = (float)local_1ec;
  afStack_1a8[(uint)bVar3 * -2 + 0x10] = *(float *)(&stack0xfffffe18 + (uint)bVar3 * -8);
  afStack_1a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11] =
       *(float *)(&stack0xfffffe1c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  (afStack_1a8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11)[(uint)bVar3 * -2 + 1] =
       *(float *)((int)(&stack0xfffffe1c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                 ((uint)bVar3 * -2 + 1) * 4);
  core_xform_cpp_FUN_005b7b30(0x3fc90fdb,pfVar6);
  local_17c[0] = (float)local_1dc;
  afStack_1a8[(uint)bVar3 * -2 + 0xc] = *(float *)(&stack0xfffffe28 + (uint)bVar3 * -8);
  afStack_1a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
       *(float *)(&stack0xfffffe2c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  (afStack_1a8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd)[(uint)bVar3 * -2 + 1] =
       *(float *)((int)(&stack0xfffffe2c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                 ((uint)bVar3 * -2 + 1) * 4);
  core_xform_cpp_multiplyQuaternion_FUN_005b77b0(afStack_1a8 + 0xb);
  pCVar5 = (CQuaternion4f *)&local_15c;
  pCVar4 = (CDeformableModelInstance *)&this_ptr->field_0x158;
  local_15c = local_1cc;
  auStack_158[(uint)bVar3 * -2] = *(uint *)(&stack0xfffffe38 + (uint)bVar3 * -8);
  auStack_158[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       *(uint *)(&stack0xfffffe3c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  (auStack_158 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffe3c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
            (pCVar4,pCVar5,fVar7,iVar2,pcVar8);
  return;
}
