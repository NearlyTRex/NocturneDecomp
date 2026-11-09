// Name: core_gabriela.cpp_FUN_004afa20
// Address: 004afa20
// Address Range: [[004afa20, 004b0207]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_FUN_004afa20(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_FUN_004afa20(CGabriella *this_ptr)

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
  float afStack_158 [7];
  uint local_13c;
  uint local_12c;
  float afStack_128 [7];
  float local_10c [4];
  uint local_fc;
  uint local_ec;
  uint local_dc;
  float local_cc [4];
  float local_bc [4];
  uint local_ac;
  float afStack_a8 [7];
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
            ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
  afStack_a8[3] = *(float *)&this_ptr->field_0x25670;
  afStack_a8[5] = 0.0;
  afStack_a8[4] = *(float *)&this_ptr->field_0x25674;
  core_xform_cpp_FUN_00594380(afStack_a8 + 3);
  local_1bc = local_13c;
  *(float *)((int)&stack0xfffffe48 + (uint)bVar3 * 0xfffffffe * 4) =
       afStack_158[(uint)bVar3 * -2 + 8];
  afStack_1a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -3] =
       afStack_158[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9];
  (afStack_1a8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + -3)[(uint)bVar3 * -2 + 1] =
       (afStack_158 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 9)[(uint)bVar3 * -2 + 1];
  if (0.0 < *(float *)&this_ptr->field_0x25648) {
    local_24 = *(float *)&this_ptr->field_0x25648 / _DAT_005f7330;
    if (1.0 < local_24) {
      local_24 = 1.0;
    }
    if (0x3F51EB85 < *(float *)&this_ptr->field_0x25648) {
      local_24 = (1.0 - (1.0 - *(float *)&this_ptr->field_0x2567c) *
                        ((*(float *)&this_ptr->field_0x25648 - 0x3F51EB85) / (1.0 - 0x3F51EB85))
                 ) * local_24;
    }
    iVar2 = core_actor_cpp_FUN_0040c840
                      (*(CDemonActor **)
                        (&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4),
                       &DAT_005d7037);
    if (iVar2 == 0) {
      if ((float)_DAT_005d7043 < local_24) {
        local_1c = *(float *)&this_ptr->field_0x25648;
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
        local_18 = (CDeformableModelInstance *)
                   core_motion_cpp_FUN_00503f50(&this_ptr->field_0x2b4,_DAT_01cb06ac,local_1c);
        local_14 = local_18;
        core_skeleton_cpp_FUN_00545a60
                  (&this_ptr->field_0x2b4,_DAT_01cb06ac,local_18,local_24,_DAT_01cb0688,
                   core_skeleton_cpp_FUN_00544cc0);
        if (0x3F51EB85 <= *(float *)&this_ptr->field_0x25648) {
          local_28 = ((*(float *)&this_ptr->field_0x25648 - 0x3F51EB85) / (1.0 - 0x3F51EB85)) *
                     *(float *)&this_ptr->field_0x2567c;
          if (local_28 < *(float *)&this_ptr->field_0x25678) {
            local_28 = *(float *)&this_ptr->field_0x25678;
          }
          if ((float)_DAT_005d7043 < local_28) {
            local_58 = (double)*(float *)&this_ptr->field_0x25678;
            local_2c = 0.0;
            if (0.0 < local_58) {
              local_2c = 1.0 - *(float *)&this_ptr->field_0x25678;
            }
            local_14 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
            core_skeleton_cpp_FUN_00545a60
                      (local_14,_DAT_01cb06b0,local_2c,local_28 * (float)_DAT_005d704b,_DAT_01cb06c0
                       ,core_skeleton_cpp_FUN_00544cc0);
            afStack_a8[6] = _DAT_01cb0668 * _DAT_005d7053;
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
            local_10c[0] = afStack_1a8[3];
            afStack_128[(uint)bVar3 * -2 + 8] = afStack_1a8[(uint)bVar3 * -2 + 4];
            afStack_128[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9] =
                 afStack_1a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5];
            (afStack_128 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 9)[(uint)bVar3 * -2 + 1] =
                 (afStack_1a8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_128 + 7);
            fVar7 = local_28;
            pcVar8 = core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_004ad230;
            local_12c = local_18c;
            afStack_128[(uint)bVar3 * -2] = afStack_1a8[(uint)bVar3 * -2 + 8];
            iVar2 = _DAT_01cb06c4;
            afStack_128[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
                 afStack_1a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9];
            (afStack_128 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
                 (afStack_1a8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 9)[(uint)bVar3 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                      (local_14,(CQuaternion4f *)&local_12c,fVar7,iVar2,pcVar8);
          }
        }
      }
      core_xform_cpp_slerpQuaternion_FUN_00593df0
                (&this_ptr->field_0x964 + _DAT_01cb06bc * 0x10,
                 &this_ptr->field_0x964 + _DAT_01cb0690 * 0x10,
                 *(float *)&this_ptr->field_0x25648 / _DAT_005f7334);
      puVar9 = (uint *)(&this_ptr->field_0x964 + _DAT_01cb06bc * 0x10);
      pfVar6 = (float *)(puVar9 + (uint)bVar3 * -2 + 1);
      *puVar9 = afStack_158[3];
      *pfVar6 = afStack_158[(uint)bVar3 * -2 + 4];
      pfVar6[(uint)bVar3 * -2 + 1] = afStack_158[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5];
      (pfVar6 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           (afStack_158 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1];
      uVar1 = _DAT_01cb06b0;
      if (0.0 < *(float *)&this_ptr->field_0x25678) {
        *(uint *)&this_ptr->field_0x2504 = 2;
        local_44 = (CDeformableModelInstance *)
                   core_motion_cpp_FUN_00503f50
                             (&this_ptr->field_0x2b4,uVar1,*(uint *)&this_ptr->field_0x25678);
        local_14 = local_44;
        core_skeleton_cpp_FUN_00544f80(&this_ptr->field_0x2b4,_DAT_01cb06b0,local_44,0);
        *(uint *)&this_ptr->field_0x2504 = 0;
      }
    }
    else {
      core_xform_cpp_slerpQuaternion_FUN_00593df0
                (&this_ptr->field_0x964 + _DAT_01cb06bc * 0x10,
                 &this_ptr->field_0x964 + _DAT_01cb0690 * 0x10,
                 *(float *)&this_ptr->field_0x25648 / _DAT_005f7334);
      puVar9 = (uint *)(&this_ptr->field_0x964 + _DAT_01cb06bc * 0x10);
      pfVar6 = (float *)(puVar9 + (uint)bVar3 * -2 + 1);
      *puVar9 = local_dc;
      *pfVar6 = afStack_128[(uint)bVar3 * -2 + 0x14];
      pfVar6[(uint)bVar3 * -2 + 1] = afStack_128[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x15];
      (pfVar6 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           (afStack_128 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x15)[(uint)bVar3 * -2 + 1];
      if ((float)_DAT_005d7043 < local_24) {
        local_20 = *(float *)&this_ptr->field_0x25648;
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
        local_50 = (CDeformableModelInstance *)
                   core_motion_cpp_FUN_00503f50(&this_ptr->field_0x2b4,_DAT_01cb06ac,local_20);
        local_14 = local_50;
        core_skeleton_cpp_FUN_00545a60
                  (&this_ptr->field_0x2b4,_DAT_01cb06ac,local_50,local_24,_DAT_01cb0688,
                   core_skeleton_cpp_FUN_00544cc0);
        if ((0x3F51EB85 <= *(float *)&this_ptr->field_0x25648) &&
           (local_30 = ((*(float *)&this_ptr->field_0x25648 - 0x3F51EB85) / (1.0 - 0x3F51EB85))
                       * *(float *)&this_ptr->field_0x2567c, (float)_DAT_005d7043 < local_30)) {
          if ((DAT_01cb0634 & 1) == 0) {
            DAT_01cb0634 = DAT_01cb0634 | 1;
            core_xform_cpp_quaternionFromAngleZ_FUN_00594020(0xbfc90fdb);
            pfVar6 = afStack_128 + 0x17;
            local_cc[0] = afStack_128[3];
            afStack_128[(uint)bVar3 * -2 + 0x18] = afStack_128[(uint)bVar3 * -2 + 4];
            afStack_128[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19] =
                 afStack_128[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5];
            (afStack_128 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19)[(uint)bVar3 * -2 + 1] =
                 (afStack_128 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1];
            core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0xbfc90fdb,pfVar6);
            local_bc[0] = (float)local_20c;
            afStack_128[(uint)bVar3 * -2 + 0x1c] = *(float *)(&stack0xfffffdf8 + (uint)bVar3 * -8);
            afStack_128[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1d] =
                 *(float *)(&stack0xfffffdfc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            (afStack_128 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1d)[(uint)bVar3 * -2 + 1] =
                 *(float *)((int)(&stack0xfffffdfc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                           ((uint)bVar3 * -2 + 1) * 4);
            core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_128 + 0x1b);
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
          pCVar5 = (CQuaternion4f *)&local_ac;
          pCVar4 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
          local_ac = local_ec;
          afStack_a8[(uint)bVar3 * -2] = afStack_128[(uint)bVar3 * -2 + 0x10];
          iVar2 = _DAT_01cb0688;
          afStack_a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               afStack_128[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11];
          (afStack_a8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
               (afStack_128 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11)[(uint)bVar3 * -2 + 1];
          core_skeleton_cpp_FUN_005466c0(pCVar4,pCVar5,fVar7,iVar2,pcVar8);
        }
      }
      if (0.0 < *(float *)&this_ptr->field_0x25678) {
        fVar7 = (float)_DAT_005d704b;
        *(uint *)&this_ptr->field_0x2504 = 2;
        local_40 = (CDeformableModelInstance *)
                   core_motion_cpp_FUN_00503f50
                             (&this_ptr->field_0x2b4,_DAT_01cb06b4,
                              1.0 - *(float *)&this_ptr->field_0x25678 * fVar7);
        local_14 = local_40;
        core_skeleton_cpp_FUN_00544f80(&this_ptr->field_0x2b4,_DAT_01cb06b4,local_40,_DAT_01cb0690);
        *(uint *)&this_ptr->field_0x2504 = 0;
      }
    }
  }
  local_3c = 0x3f490fdb;
  local_38 = 0xbfdf66f3;
  local_34 = 0x3fdf66f3;
  if (afStack_a8[3] < _DAT_005d705b) {
    afStack_a8[3] = -1.2217305;
  }
  if (0.7853982 < afStack_a8[3]) {
    afStack_a8[3] = 0.7853982;
  }
  if (afStack_a8[4] < -1.7453293) {
    afStack_a8[4] = -1.7453293;
  }
  if (1.7453293 < afStack_a8[4]) {
    afStack_a8[4] = 1.7453293;
  }
  pcVar8 = core_skeleton_cpp_FUN_00544cc0;
  fVar7 = *(float *)&this_ptr->field_0x2564c * *(float *)&this_ptr->field_0x2567c;
  iVar2 = _DAT_01cb0678;
  core_xform_cpp_FUN_00594380(afStack_a8 + 3);
  pCVar5 = (CQuaternion4f *)&local_1ac;
  pCVar4 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
  local_1ac = local_fc;
  afStack_1a8[(uint)bVar3 * -2] = afStack_128[(uint)bVar3 * -2 + 0xc];
  afStack_1a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       afStack_128[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd];
  (afStack_1a8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
       (afStack_128 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd)[(uint)bVar3 * -2 + 1];
  core_skeleton_cpp_FUN_005466c0(pCVar4,pCVar5,fVar7,iVar2,pcVar8);
  local_48 = (float)core_gabriela_cpp_FUN_004af900(this_ptr);
  local_14 = (CDeformableModelInstance *)local_48;
  local_14 = (CDeformableModelInstance *)core_gabriela_cpp_FUN_004af950(this_ptr);
  _DAT_01cb0674 =
       (1.0 - (*(float *)&this_ptr->field_0x25654 - local_48) / ((float)local_14 - local_48)) *
       (float)_DAT_005d7063;
  if (1.0 < _DAT_01cb0674) {
    _DAT_01cb0674 = 1.0;
  }
  pcVar8 = core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004ad1e0;
  fVar7 = *(float *)&this_ptr->field_0x25650;
  iVar2 = _DAT_01cb067c;
  core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(*(uint *)&this_ptr->field_0x25654);
  pfVar6 = afStack_1a8 + 0xf;
  local_16c[0] = (float)local_1ec;
  afStack_1a8[(uint)bVar3 * -2 + 0x10] = *(float *)(&stack0xfffffe18 + (uint)bVar3 * -8);
  afStack_1a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11] =
       *(float *)(&stack0xfffffe1c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  (afStack_1a8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11)[(uint)bVar3 * -2 + 1] =
       *(float *)((int)(&stack0xfffffe1c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                 ((uint)bVar3 * -2 + 1) * 4);
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0x3fc90fdb,pfVar6);
  local_17c[0] = (float)local_1dc;
  afStack_1a8[(uint)bVar3 * -2 + 0xc] = *(float *)(&stack0xfffffe28 + (uint)bVar3 * -8);
  afStack_1a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
       *(float *)(&stack0xfffffe2c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  (afStack_1a8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd)[(uint)bVar3 * -2 + 1] =
       *(float *)((int)(&stack0xfffffe2c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                 ((uint)bVar3 * -2 + 1) * 4);
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_1a8 + 0xb);
  pCVar5 = (CQuaternion4f *)&local_15c;
  pCVar4 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
  local_15c = local_1cc;
  afStack_158[(uint)bVar3 * -2] = *(float *)(&stack0xfffffe38 + (uint)bVar3 * -8);
  afStack_158[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       *(float *)(&stack0xfffffe3c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  (afStack_158 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
       *(float *)((int)(&stack0xfffffe3c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                 ((uint)bVar3 * -2 + 1) * 4);
  core_skeleton_cpp_FUN_005466c0(pCVar4,pCVar5,fVar7,iVar2,pcVar8);
  return;
}
