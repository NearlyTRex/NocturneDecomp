// Name: FUN_00497900
// Address: 00497900
// Address Range: [[00497900, 004980c7]]
// Convention: unknown
// Signature: void FUN_00497900(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00497900(int param_1)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  float afStackY_19d0 [1521];
  uint *puVar4;
  float fVar5;
  uint uVar6;
  byte *puVar7;
  uint local_1f4;
  uint local_1e4;
  uint local_1d4;
  uint local_1c4;
  uint local_1b4;
  uint local_1a4;
  uint local_194;
  uint local_184;
  uint local_174;
  uint local_164;
  uint local_154;
  uint local_144;
  uint local_134;
  uint local_124;
  uint local_114;
  uint local_104;
  uint local_f4;
  uint local_e4;
  uint local_d4;
  uint local_c4;
  uint local_b4;
  uint local_a4;
  uint local_94;
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
  int local_50;
  float local_4c;
  int local_44;
  float local_40;
  uint local_3c;
  uint local_38;
  float local_34;
  uint local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar3 = 0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  local_78 = *(float *)(param_1 + 0x1fa6c);
  local_70 = 0;
  local_74 = *(float *)(param_1 + 0x1fa70);
  FUN_0055d610(&local_78);
  local_1a4 = local_124;
  *(uint *)((int)&stack0xfffffe60 + (uint)bVar3 * 0xfffffffe * 4) =
       *(uint *)(&stack0xfffffee0 + (uint)bVar3 * -8);
  *(uint *)(&stack0xfffffe64 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xfffffee4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)
   ((int)(&stack0xfffffe64 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xfffffee4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  if (0.0 < *(float *)(param_1 + 0x1fa44)) {
    local_28 = *(float *)(param_1 + 0x1fa44) / _DAT_0059dca0;
    if (1.0 < local_28) {
      local_28 = 1.0;
    }
    if (0x3F51EB85 < *(float *)(param_1 + 0x1fa44)) {
      local_28 = (1.0 - (1.0 - *(float *)(param_1 + 0x1fa78)) *
                        ((*(float *)(param_1 + 0x1fa44) - 0x3F51EB85) / (1.0 - 0x3F51EB85))) *
                 local_28;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(*(uint *)(param_1 + 0x1f8d0),&DAT_005820f6);
    if (iVar1 == 0) {
      if ((float)_DAT_00582102 < local_28) {
        local_24 = *(float *)(param_1 + 0x1fa44);
        if (0x3F51EB85 < local_24) {
          local_24 = 0x3F51EB85;
        }
        local_24 = (local_24 - _DAT_0059dca0) / (1.0 - _DAT_0059dca0);
        if (local_24 < 0.0) {
          local_24 = 0.0;
        }
        if (1.0 < local_24) {
          local_24 = 1.0;
        }
        local_50 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                             (param_1 + 0x150,_DAT_01c713cc,local_24);
        local_14 = (float)local_50;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
                  (param_1 + 0x150,_DAT_01c713cc,local_50,local_28,_DAT_01c713a8,&LAB_0051b650);
        if (0x3F51EB85 <= *(float *)(param_1 + 0x1fa44)) {
          local_2c = ((*(float *)(param_1 + 0x1fa44) - 0x3F51EB85) / (1.0 - 0x3F51EB85)) *
                     *(float *)(param_1 + 0x1fa78);
          if (local_2c < *(float *)(param_1 + 0x1fa74)) {
            local_2c = *(float *)(param_1 + 0x1fa74);
          }
          if ((float)_DAT_00582102 < local_2c) {
            local_58 = (double)*(float *)(param_1 + 0x1fa74);
            local_34 = 0.0;
            if (0.0 < local_58) {
              local_34 = 1.0 - *(float *)(param_1 + 0x1fa74);
            }
            local_14 = (float)(param_1 + 0x150);
            core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
                      (local_14,_DAT_01c713d0,local_34,local_2c * (float)_DAT_0058210a,_DAT_01c713e0
                       ,&LAB_0051b650);
            local_84 = _DAT_01c71388 * _DAT_00582112;
            local_6c = local_84 / _DAT_00582116;
            local_80 = _DAT_01c7138c * _DAT_00582112;
            local_7c = _DAT_01c71390 * _DAT_00582112;
            local_68 = local_80 * _DAT_0058211a;
            local_64 = local_7c * _DAT_0058211a;
            FUN_0055d610(&local_6c,&stack0xfffffe5c);
            local_174 = local_184;
            *(uint *)((int)&stack0xfffffe90 + (uint)bVar3 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xfffffe80 + (uint)bVar3 * -8);
            *(uint *)(&stack0xfffffe94 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffe84 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            *(uint *)
             ((int)(&stack0xfffffe94 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
             ((uint)bVar3 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xfffffe84 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                  ((uint)bVar3 * -2 + 1) * 4);
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(&stack0xfffffe8c);
            fVar5 = local_2c;
            puVar7 = &LAB_00495610;
            local_104 = local_f4;
            *(uint *)((int)&stack0xffffff00 + (uint)bVar3 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xffffff10 + (uint)bVar3 * -8);
            uVar6 = _DAT_01c713e4;
            *(uint *)(&stack0xffffff04 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xffffff14 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            *(uint *)
             ((int)(&stack0xffffff04 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
             ((uint)bVar3 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xffffff14 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                  ((uint)bVar3 * -2 + 1) * 4);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                      (local_14,&stack0xfffffefc,fVar5,uVar6,puVar7);
          }
        }
      }
      core_xform_cpp_slerpQuaternion_FUN_0055d2d0
                (param_1 + 0x800 + _DAT_01c713dc * 0x10,_DAT_01c713b0 * 0x10 + param_1 + 0x800,
                 *(float *)(param_1 + 0x1fa44) / _DAT_0059dca4);
      puVar4 = (uint *)(_DAT_01c713dc * 0x10 + 0x800 + param_1);
      puVar2 = puVar4 + (uint)bVar3 * -2 + 1;
      *puVar4 = local_1b4;
      *puVar2 = *(uint *)(&stack0xfffffe50 + (uint)bVar3 * -8);
      puVar2[(uint)bVar3 * -2 + 1] =
           *(uint *)(&stack0xfffffe54 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      (puVar2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xfffffe54 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
            ((uint)bVar3 * -2 + 1) * 4);
      uVar6 = _DAT_01c713d0;
      if (0.0 < *(float *)(param_1 + 0x1fa74)) {
        *(uint *)(param_1 + 0x23a0) = 2;
        local_1c = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                             (param_1 + 0x150,uVar6,*(uint *)(param_1 + 0x1fa74));
        local_14 = (float)local_1c;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
                  (param_1 + 0x150,_DAT_01c713d0,local_1c,0);
        *(uint *)(param_1 + 0x23a0) = 0;
      }
    }
    else {
      core_xform_cpp_slerpQuaternion_FUN_0055d2d0
                (param_1 + 0x800 + _DAT_01c713dc * 0x10,_DAT_01c713b0 * 0x10 + param_1 + 0x800,
                 *(float *)(param_1 + 0x1fa44) / _DAT_0059dca4);
      puVar4 = (uint *)(param_1 + 0x800 + _DAT_01c713dc * 0x10);
      puVar2 = puVar4 + (uint)bVar3 * -2 + 1;
      *puVar4 = local_1c4;
      *puVar2 = *(uint *)(&stack0xfffffe40 + (uint)bVar3 * -8);
      puVar2[(uint)bVar3 * -2 + 1] =
           *(uint *)(&stack0xfffffe44 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      (puVar2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xfffffe44 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
            ((uint)bVar3 * -2 + 1) * 4);
      if ((float)_DAT_00582102 < local_28) {
        local_20 = *(float *)(param_1 + 0x1fa44);
        if (0x3F51EB85 < local_20) {
          local_20 = 0x3F51EB85;
        }
        local_20 = (local_20 - _DAT_0059dca0) / (1.0 - _DAT_0059dca0);
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if (1.0 < local_20) {
          local_20 = 1.0;
        }
        local_44 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                             (param_1 + 0x150,_DAT_01c713cc,local_20);
        local_14 = (float)local_44;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
                  (param_1 + 0x150,_DAT_01c713cc,local_44,local_28,_DAT_01c713a8,&LAB_0051b650);
        if ((0x3F51EB85 <= *(float *)(param_1 + 0x1fa44)) &&
           (local_40 = ((*(float *)(param_1 + 0x1fa44) - 0x3F51EB85) / (1.0 - 0x3F51EB85)) *
                       *(float *)(param_1 + 0x1fa78), (float)_DAT_00582102 < local_40)) {
          if ((DAT_01c71354 & 1) == 0) {
            DAT_01c71354 = DAT_01c71354 | 1;
            FUN_0055d520(0xbfc90fdb);
            puVar4 = &stack0xffffff5c;
            local_a4 = local_e4;
            *(uint *)((int)&stack0xffffff60 + (uint)bVar3 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xffffff20 + (uint)bVar3 * -8);
            *(uint *)(&stack0xffffff64 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xffffff24 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            *(uint *)
             ((int)(&stack0xffffff64 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
             ((uint)bVar3 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xffffff24 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                  ((uint)bVar3 * -2 + 1) * 4);
            FUN_0055d4e0(0xbfc90fdb,puVar4);
            local_b4 = local_1f4;
            *(uint *)((int)&stack0xffffff50 + (uint)bVar3 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xfffffe10 + (uint)bVar3 * -8);
            *(uint *)(&stack0xffffff54 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffe14 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            *(uint *)
             ((int)(&stack0xffffff54 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
             ((uint)bVar3 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xfffffe14 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                  ((uint)bVar3 * -2 + 1) * 4);
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(&stack0xffffff4c);
            _DAT_01c71344 = local_1e4;
            *(uint *)(&DAT_01c71348 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffe20 + (uint)bVar3 * -8);
            *(uint *)(&DAT_01c7134c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffe24 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            *(uint *)
             ((int)(&DAT_01c7134c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
             ((uint)bVar3 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xfffffe24 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                  ((uint)bVar3 * -2 + 1) * 4);
          }
          core_xform_cpp_multiplyQuaternion_FUN_0055d130(&DAT_01c71344,&stack0xfffffe5c);
          fVar5 = local_40;
          puVar7 = &LAB_00495580;
          puVar4 = &stack0xfffffeec;
          iVar1 = param_1 + 0x150;
          local_114 = local_1d4;
          *(uint *)((int)&stack0xfffffef0 + (uint)bVar3 * 0xfffffffe * 4) =
               *(uint *)(&stack0xfffffe30 + (uint)bVar3 * -8);
          uVar6 = _DAT_01c713a8;
          *(uint *)(&stack0xfffffef4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xfffffe34 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          *(uint *)
           ((int)(&stack0xfffffef4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
           ((uint)bVar3 * -2 + 1) * 4) =
               *(uint *)
                ((int)(&stack0xfffffe34 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                ((uint)bVar3 * -2 + 1) * 4);
          core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
                    (iVar1,puVar4,fVar5,uVar6,puVar7);
        }
      }
      if (0.0 < *(float *)(param_1 + 0x1fa74)) {
        fVar5 = (float)_DAT_0058210a;
        *(uint *)(param_1 + 0x23a0) = 2;
        local_18 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                             (param_1 + 0x150,_DAT_01c713d4,
                              1.0 - *(float *)(param_1 + 0x1fa74) * fVar5);
        local_14 = (float)local_18;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
                  (param_1 + 0x150,_DAT_01c713d4,local_18,_DAT_01c713b0);
        *(uint *)(param_1 + 0x23a0) = 0;
      }
    }
  }
  local_3c = 0x3f490fdb;
  local_30 = 0xbfdf66f3;
  local_38 = 0x3fdf66f3;
  if (local_78 < _DAT_0058211e) {
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
  FUN_0055d610(&local_78,*(float *)(param_1 + 0x1fa48) * *(float *)(param_1 + 0x1fa78),_DAT_01c71398
               ,&LAB_0051b650);
  puVar4 = &stack0xfffffe6c;
  iVar1 = param_1 + 0x150;
  local_194 = local_c4;
  *(uint *)((int)&stack0xfffffe70 + (uint)bVar3 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff40 + (uint)bVar3 * -8);
  *(uint *)(&stack0xfffffe74 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffff44 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)
   ((int)(&stack0xfffffe74 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff44 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(iVar1,puVar4);
  local_4c = (float)FUN_00497810(param_1);
  local_14 = local_4c;
  local_14 = (float)FUN_00497860(param_1);
  _DAT_01c71394 =
       (1.0 - (*(float *)(param_1 + 0x1fa50) - local_4c) / (local_14 - local_4c)) *
       (float)_DAT_00582122;
  if (1.0 < _DAT_01c71394) {
    _DAT_01c71394 = 1.0;
  }
  FUN_0055d4a0(*(uint *)(param_1 + 0x1fa50),*(uint *)(param_1 + 0x1fa4c),_DAT_01c7139c,
               &LAB_004955c0);
  puVar4 = &stack0xfffffeac;
  local_154 = local_d4;
  *(uint *)((int)&stack0xfffffeb0 + (uint)bVar3 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff30 + (uint)bVar3 * -8);
  *(uint *)(&stack0xfffffeb4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffff34 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)
   ((int)(&stack0xfffffeb4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff34 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  FUN_0055d4e0(0x3fc90fdb,puVar4);
  local_164 = local_134;
  *(uint *)((int)&stack0xfffffea0 + (uint)bVar3 * 0xfffffffe * 4) =
       *(uint *)(&stack0xfffffed0 + (uint)bVar3 * -8);
  *(uint *)(&stack0xfffffea4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xfffffed4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)
   ((int)(&stack0xfffffea4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xfffffed4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(&stack0xfffffe9c);
  puVar4 = &stack0xfffffebc;
  param_1 = param_1 + 0x150;
  local_144 = local_94;
  *(uint *)((int)&stack0xfffffec0 + (uint)bVar3 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff70 + (uint)bVar3 * -8);
  *(uint *)(&stack0xfffffec4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffff74 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)
   ((int)(&stack0xfffffec4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff74 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(param_1,puVar4);
  return;
}
