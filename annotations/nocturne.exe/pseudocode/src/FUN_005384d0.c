// Name: FUN_005384d0
// Address: 005384d0
// Address Range: [[005384d0, 005396c1]]
// Convention: unknown
// Signature: void FUN_005384d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005384d0(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar8;
  byte bVar10;
  float10 fVar11;
  code *pcVar12;
  float local_1f0c;
  float local_1f08;
  float local_1ef8;
  float local_1ef4;
  float local_1ee0;
  float local_1edc;
  uint local_1ecc [2];
  uint local_1ec4;
  uint auStack_1bcc [1510];
  byte auStack_434 [4];
  byte local_430 [40];
  float local_408 [6];
  uint local_3f0;
  uint auStack_3ec [6];
  uint uStack_3d4;
  uint auStack_3c4 [4];
  uint uStack_3b4;
  uint local_3b0 [8];
  uint local_390 [3];
  uint uStack_384;
  uint local_380 [8];
  uint local_360;
  uint auStack_35c [6];
  uint uStack_344;
  uint local_330;
  uint auStack_32c [7];
  uint local_310 [4];
  uint local_300 [3];
  uint uStack_2f4;
  uint local_2f0 [7];
  uint uStack_2d4;
  uint local_2c0;
  uint auStack_2bc [6];
  uint auStack_2a4 [4];
  uint auStack_294 [4];
  uint auStack_284 [4];
  uint uStack_274;
  uint local_260;
  uint auStack_25c [7];
  uint local_240;
  uint auStack_23c [7];
  uint local_220;
  uint auStack_214 [4];
  uint uStack_204;
  uint local_1f0;
  uint auStack_1ec [6];
  uint uStack_1d4;
  uint auStack_1c4 [4];
  uint uStack_1b4;
  uint auStack_1a4 [5];
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float fStack_178;
  float fStack_174;
  byte local_16c [4];
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  byte local_154 [8];
  uint uStack_14c;
  uint local_148 [2];
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float local_130;
  float local_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  uint uStack_118;
  byte local_10c [12];
  float local_100;
  float local_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  byte local_c4 [4];
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  byte local_a0 [12];
  float local_94;
  float local_90;
  float local_8c [4];
  uint local_7c;
  uint local_78;
  float local_70;
  float local_6c;
  float local_68 [4];
  byte local_58 [12];
  float local_4c;
  uint local_48;
  float local_38;
  float local_34;
  float local_30;
  uint local_2c;
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  uint *puVar7;
  uint *puVar9;
  
  bVar10 = 0;
  local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                              (param_1 + 0x150,0);
  local_1f08 = local_18;
  if (*(int *)(param_1 + 0x1fabc) < 0x3e19999a) {
    local_1f08 = (*(float *)(param_1 + 0x1fabc) / 0.15f) * local_18;
  }
  if (0.85 < *(float *)(param_1 + 0x1fabc)) {
    local_1f08 = ((1.0 - *(float *)(param_1 + 0x1fabc)) / 0.15) * local_1f08;
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  if ((0.0 < local_1f08) && (-1 < *(int *)(param_1 + 0x1faec))) {
    FUN_005396d0(param_1,local_1ecc);
    local_1ecc[0] = 0;
    local_1ec4 = 0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0051cab0
              (param_1 + 0x150,local_1ecc,local_1f08,0xffffffff,FUN_0051b650);
  }
  core_stranger_cpp_CStranger_makeDrawDecision_FUN_00539b10(param_1);
  pfVar4 = (float *)(param_1 + 0x150);
  pfVar1 = (float *)(param_1 + 0x1fb00);
  pcVar12 = (code *)pfVar4;
  iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(pfVar4);
  iVar3 = *(int *)(iVar3 + 0x24);
  if (iVar3 == 0x15) {
    local_160 = *pfVar1;
    local_15c = *(float *)(param_1 + 0x1fb04);
    local_158 = *(float *)(param_1 + 0x1fb08);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
              (pfVar4,&local_184,_DAT_02dc9f60);
    local_190 = local_160 - local_184;
    local_18c = local_15c - local_180;
    local_188 = local_158 - local_17c;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_7c,auStack_1ec + 0x17);
    fVar2 = *(float *)(param_1 + 0x158);
    if ((float)13 <= fVar2) {
      local_1ee0 = 1.0 - (fVar2 + (float)-13) * (float)0.0769230769230769;
      if (local_1ee0 < 0.0) {
        local_1ee0 = 0.0;
      }
    }
    else {
      local_1ee0 = fVar2 * (float)0.0769230769230769;
    }
    core_xform_cpp_FUN_0055d4a0(local_7c);
    local_360 = auStack_32c[3];
    auStack_35c[(uint)bVar10 * -2] = auStack_32c[(uint)bVar10 * -2 + 4];
    auStack_35c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         auStack_32c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
    (auStack_35c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (auStack_32c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
    local_18 = (float)(param_1 + 0x150);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
              (local_18,local_380 + 8,local_1ee0,_DAT_02dc9f94,FUN_0051b650);
    core_xform_cpp_FUN_0055d4e0(local_78);
    pcVar12 = FUN_0051b650;
    puVar8 = local_390;
    puVar6 = local_300;
LAB_00538745:
    puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
    puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
    *puVar8 = *puVar6;
    *puVar9 = *puVar7;
    puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  }
  else if (iVar3 == 0x13) {
    local_e8 = *pfVar1;
    local_e4 = *(float *)(param_1 + 0x1fb04);
    local_e0 = *(float *)(param_1 + 0x1fb08);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
              (pfVar4,&local_b8,_DAT_02dc9f60);
    local_70 = local_e8 - local_b8;
    local_6c = local_e4 - local_b4;
    local_68[0] = local_e0 - local_b0;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_4c,&local_70);
    fVar2 = *(float *)(param_1 + 0x158);
    if ((float)24 <= fVar2) {
      local_1ef4 = 1.0 - (fVar2 + (float)-24) * (float)0.10000000000000001;
      if (local_1ef4 < 0.0) {
        local_1ef4 = 0.0;
      }
    }
    else {
      local_1ef4 = fVar2 * (float)0.041666666666666699;
    }
    core_xform_cpp_FUN_0055d4a0(-local_4c);
    auStack_23c[3] = local_2c0;
    auStack_23c[(uint)bVar10 * -2 + 4] = auStack_2bc[(uint)bVar10 * -2];
    auStack_23c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5] =
         auStack_2bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    (auStack_23c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1] =
         (auStack_2bc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    local_18 = (float)(param_1 + 0x150);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
              (param_1 + 0x150,auStack_23c + 3,local_1ef4,_DAT_02dc9f60,FUN_0051b650);
    core_xform_cpp_FUN_0055d4e0(local_48);
    auStack_1ec[3] = local_240;
    auStack_1ec[(uint)bVar10 * -2 + 4] = auStack_23c[(uint)bVar10 * -2];
    auStack_1ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5] =
         auStack_23c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    (auStack_1ec + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1] =
         (auStack_23c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    pcVar12 = FUN_0051b650;
  }
  else {
    if (iVar3 != 0x16) {
      if (iVar3 == 0x1f) {
        if (*(int *)(param_1 + 0x1fa10) == 0) {
          uVar5 = core_lever_cpp_CLever_getHandlePosition_FUN_004c6640(_DAT_02dc9f2c,local_10c);
          pfVar4 = (float *)core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                                      (param_1,local_154,uVar5);
          if (pfVar1 != pfVar4) {
            *pfVar1 = *pfVar4;
            *(float *)(param_1 + 0x1fb04) = pfVar4[1];
            *(float *)(param_1 + 0x1fb08) = pfVar4[2];
          }
        }
        else {
          uVar5 = core_lever_cpp_CLever_getHandlePosition_FUN_004c6640
                            (*(int *)(param_1 + 0x1fa10),local_58);
          pfVar4 = (float *)core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                                      (param_1,local_a0,uVar5);
          if (pfVar1 != pfVar4) {
            *pfVar1 = *pfVar4;
            *(float *)(param_1 + 0x1fb04) = pfVar4[1];
            *(float *)(param_1 + 0x1fb08) = pfVar4[2];
          }
          _DAT_02dc9f2c = *(uint *)(param_1 + 0x1fa10);
        }
        local_100 = *(float *)(param_1 + 0x1fb00);
        local_fc = *(float *)(param_1 + 0x1fb04);
        local_f8 = *(float *)(param_1 + 0x1fb08);
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                  (param_1 + 0x150,&local_94,_DAT_02dc9f60);
        local_130 = local_100 - local_94;
        local_12c = local_fc - local_90;
        local_128 = local_f8 - local_8c[0];
        pcVar12 = (code *)&local_ac;
        local_ac = local_130;
        local_a8 = local_12c;
        local_a4 = local_128;
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_148,pcVar12);
        local_24 = SQRT(local_128 * local_128 + local_130 * local_130 + local_12c * local_12c);
        if (local_24 < 2.7f) {
          pcVar12 = (code *)0x5389fd;
          fVar11 = (float10)acos
                                      ((float10)local_24 / (float10)2.7f);
          local_20 = (float)fVar11;
          core_xform_cpp_FUN_0055d4e0(local_20,pcVar12);
          auStack_2a4[0] = uStack_2d4;
          auStack_2bc[(uint)bVar10 * -2 + 7] = local_2f0[(uint)bVar10 * -2 + 8];
          auStack_2bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 8] =
               local_2f0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
          (auStack_2bc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 8)[(uint)bVar10 * -2 + 1] =
               (local_2f0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 9)[(uint)bVar10 * -2 + 1];
          local_1c = param_1 + 0x150;
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                    (param_1 + 0x150,auStack_2bc + 6,local_1f08,_DAT_02dc9f60,FUN_0051b650);
          core_xform_cpp_FUN_0055d4e0(-local_20);
          auStack_1c4[0] = auStack_2bc[2];
          auStack_1ec[(uint)bVar10 * -2 + 0xb] = auStack_2bc[(uint)bVar10 * -2 + 3];
          auStack_1ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xc] =
               auStack_2bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          (auStack_1ec + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1] =
               (auStack_2bc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 4)[(uint)bVar10 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                    (local_1c,auStack_1ec + 10,local_1f08,_DAT_02dc9f68,FUN_0051b650);
        }
        core_xform_cpp_FUN_0055d4a0(uStack_14c);
        uStack_3b4 = uStack_1d4;
        local_3b0[(uint)bVar10 * -2] = auStack_1ec[(uint)bVar10 * -2 + 7];
        local_3b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             auStack_1ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 8];
        (local_3b0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
             (auStack_1ec + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 8)[(uint)bVar10 * -2 + 1];
        local_1c = param_1 + 0x150;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                  (local_1c,&uStack_3b4,local_1f08,_DAT_02dc9f60,FUN_0051b650);
        core_xform_cpp_FUN_0055d4e0(local_148[0]);
        puVar8 = auStack_25c + 2;
        puVar6 = local_3b0 + 3;
      }
      else if (iVar3 == 0x17) {
        local_1ef8 = *(float *)(param_1 + 0x158) * (float)0.066666666666666693;
        if (1.0 < local_1ef8) {
          local_1ef8 = 1.0;
        }
        fVar11 = (float10)fpatan((float10)*(float *)(param_1 + 0x1fb18) / (float10)2.7f,
                                 (float10)1);
        local_38 = (float)fVar11;
        core_xform_cpp_FUN_0055d4e0(local_38);
        local_330 = local_3f0;
        auStack_32c[(uint)bVar10 * -2] = auStack_3ec[(uint)bVar10 * -2];
        auStack_32c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             auStack_3ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        (auStack_32c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
             (auStack_3ec + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        local_18 = (float)(param_1 + 0x150);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                  (local_18,auStack_35c + 0xb,local_1ef8,_DAT_02dc9f60,FUN_0051b650);
        core_xform_cpp_FUN_0055d4e0(-local_38);
        pcVar12 = FUN_0051b650;
        puVar8 = auStack_35c + 0xb;
        puVar6 = auStack_32c + 7;
      }
      else {
        if (iVar3 != 0x18) {
          if (iVar3 == 0x19) {
            local_1f0c = 1.0 - (*(float *)(param_1 + 0x158) + (float)-15) *
                               (float)0.066666666666666693;
            if (local_1f0c < 0.0) {
              local_1f0c = 0.0;
            }
            if (1.0 < local_1f0c) {
              local_1f0c = 1.0;
            }
            fVar11 = (float10)fpatan((float10)*(float *)(param_1 + 0x1fb18) /
                                     (float10)2.7f,(float10)1);
            local_34 = (float)fVar11;
            core_xform_cpp_FUN_0055d4e0(local_34);
            local_1f0 = local_260;
            auStack_1ec[(uint)bVar10 * -2] = auStack_25c[(uint)bVar10 * -2];
            auStack_1ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 auStack_25c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            (auStack_1ec + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
                 (auStack_25c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
            local_18 = (float)(param_1 + 0x150);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                      (param_1 + 0x150,auStack_23c + 0x13,local_1f0c,_DAT_02dc9f60,FUN_0051b650);
            core_xform_cpp_FUN_0055d4e0(-local_34);
            local_1f0 = local_220;
            auStack_1ec[(uint)bVar10 * -2] = auStack_23c[(uint)bVar10 * -2 + 8];
            auStack_1ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 auStack_23c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
            (auStack_1ec + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
                 (auStack_23c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 9)[(uint)bVar10 * -2 + 1];
            pcVar12 = FUN_0051b650;
          }
          else {
            if (iVar3 != 0x1a) goto LAB_00538751;
            local_18 = (float)(param_1 + 0x150);
            core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                      (local_18,local_16c,_DAT_02dc9f60);
            pcVar12 = (code *)0x539513;
            fVar11 = (float10)atan2
                                        ((float10)local_168 - (float10)*(float *)(param_1 + 0x1fb04)
                                         ,(float10)2.7f);
            core_xform_cpp_FUN_0055d4a0((float)fVar11,pcVar12);
            iVar3 = local_1c;
            auStack_3ec[2] = uStack_344;
            auStack_3ec[(uint)bVar10 * -2 + 3] = auStack_35c[(uint)bVar10 * -2 + 7];
            auStack_3ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
                 auStack_35c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 8];
            (auStack_3ec + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 4)[(uint)bVar10 * -2 + 1] =
                 (auStack_35c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 8)[(uint)bVar10 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                      (iVar3,auStack_3ec + 2,local_1ef4,_DAT_02dc9f60,FUN_0051b650);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                      (local_1c,auStack_3ec + 2,local_1ef4,_DAT_02dc9f5c,FUN_0051b650);
            fVar11 = (float10)fpatan((float10)*(float *)(param_1 + 0x1fb18) /
                                     (float10)2.7f,(float10)1);
            local_30 = (float)fVar11;
            core_xform_cpp_FUN_0055d4e0(local_30);
            iVar3 = local_1c;
            auStack_214[0] = uStack_204;
            auStack_23c[(uint)bVar10 * -2 + 0xb] = auStack_23c[(uint)bVar10 * -2 + 0xf];
            auStack_23c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xc] =
                 auStack_23c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
            (auStack_23c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1] =
                 (auStack_23c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10)[(uint)bVar10 * -2 + 1]
            ;
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                      (iVar3,auStack_23c + 10,local_1ef4,_DAT_02dc9f60,FUN_0051b650);
            core_xform_cpp_FUN_0055d4e0(-local_30);
            auStack_214[0] = auStack_35c[2];
            auStack_23c[(uint)bVar10 * -2 + 0xb] = auStack_35c[(uint)bVar10 * -2 + 3];
            auStack_23c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xc] =
                 auStack_35c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
            (auStack_23c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1] =
                 (auStack_35c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 4)[(uint)bVar10 * -2 + 1];
          }
          goto LAB_00538749;
        }
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                  (param_1 + 0x150,local_c4,_DAT_02dc9f60);
        local_20 = (*(float *)(param_1 + 0x1fb04) + *(float *)(param_1 + 0x1fb1c)) -
                   *(float *)(param_1 + 0x1fb10);
        if (*(int *)(param_1 + 0x1fa08) != 0) {
          _DAT_02dc9fe8 =
               (float)core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00534fc0
                                (*(int *)(param_1 + 0x1fa08));
          local_18 = _DAT_02dc9fe8;
        }
        local_20 = local_20 - _DAT_02dc9fe8;
        pcVar12 = (code *)0x539214;
        fVar11 = (float10)atan2
                                    ((float10)local_c0 - (float10)local_20,(float10)2.7f);
        core_xform_cpp_FUN_0055d4a0((float)fVar11,pcVar12);
        auStack_294[0] = uStack_384;
        auStack_2bc[(uint)bVar10 * -2 + 0xb] = local_380[(uint)bVar10 * -2];
        auStack_2bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xc] =
             local_380[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        (auStack_2bc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1] =
             (local_380 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        local_1c = param_1 + 0x150;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                  (param_1 + 0x150,auStack_2bc + 10,local_1ee0,_DAT_02dc9f60,FUN_0051b650);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                  (local_1c,auStack_2bc + 10,local_1ee0,_DAT_02dc9f5c,FUN_0051b650);
        fVar11 = (float10)fpatan((float10)*(float *)(param_1 + 0x1fb18) / (float10)2.7f,
                                 (float10)1);
        local_34 = (float)fVar11;
        core_xform_cpp_FUN_0055d4e0(local_34);
        auStack_1a4[0] = uStack_2f4;
        auStack_1ec[(uint)bVar10 * -2 + 0x13] = local_2f0[(uint)bVar10 * -2];
        auStack_1ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x14] =
             local_2f0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        (auStack_1ec + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x14)[(uint)bVar10 * -2 + 1] =
             (local_2f0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                  (local_1c,auStack_1ec + 0x12,local_1ee0,_DAT_02dc9f60,FUN_0051b650);
        core_xform_cpp_FUN_0055d4e0(-local_34);
        puVar8 = auStack_1ec + 0x12;
        puVar6 = auStack_3ec + 10;
      }
      goto LAB_00538745;
    }
    pcVar12 = (code *)(param_1 + 0x1fa2c);
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(local_430,pcVar12);
    if ((DAT_02dc9f30 & 1) == 0) {
      DAT_02dc9f30 = DAT_02dc9f30 | 1;
    }
    iVar3 = *(int *)(param_1 + 0x1fa1c);
    if (iVar3 != 0) {
      pcVar12 = (code *)local_408;
      pfVar4 = (float *)(**(code **)(*(int *)(iVar3 + 0x14c) + 0x14))(iVar3,pcVar12);
      fStack_d4 = *pfVar4 + pfVar4[3];
      fStack_d0 = pfVar4[1] + pfVar4[4];
      local_17c = fStack_d4 * 0.5f;
      fStack_cc = pfVar4[2] + pfVar4[5];
      fStack_178 = fStack_d0 * 0.5f;
      fStack_174 = fStack_cc * 0.5f;
      if (&stack0x00000000 != &DAT_02dca09c) {
        _DAT_02dc9f20 = local_17c;
        _DAT_02dc9f24 = fStack_178;
        _DAT_02dc9f28 = fStack_174;
      }
    }
    pfVar4 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                (auStack_434,local_68,&DAT_02dc9f20);
    fStack_140 = *(float *)(param_1 + 0x1fa20) + *pfVar4;
    fStack_13c = *(float *)(param_1 + 0x1fa24) + pfVar4[1];
    fStack_138 = *(float *)(param_1 + 0x1fa28) + pfVar4[2];
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,&local_128,&fStack_140);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
              (param_1 + 0x150,&local_e0,_DAT_02dc9f60);
    local_f8 = local_128 - local_e0;
    fStack_f4 = fStack_124 - fStack_dc;
    fStack_f0 = fStack_120 - fStack_d8;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&uStack_11c,&local_f8);
    local_1edc = *(float *)(param_1 + 0x158);
    if ((float)21 <= local_1edc) {
      local_1edc = 1.0 - (local_1edc + (float)-21) * (float)0.071428571428571397;
      if (local_1edc < 0.0) {
        local_1edc = 0.0;
      }
    }
    else {
      local_1edc = local_1edc * (float)0.047619047619047603;
    }
    core_xform_cpp_FUN_0055d4a0(uStack_11c);
    auStack_284[0] = uStack_1b4;
    auStack_2bc[(uint)bVar10 * -2 + 0xf] = auStack_1ec[(uint)bVar10 * -2 + 0xf];
    auStack_2bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
         auStack_1ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
    (auStack_2bc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10)[(uint)bVar10 * -2 + 1] =
         (auStack_1ec + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10)[(uint)bVar10 * -2 + 1];
    local_1c = param_1 + 0x150;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
              (param_1 + 0x150,auStack_2bc + 0xe,local_1edc,_DAT_02dc9f94,FUN_0051b650);
    core_xform_cpp_FUN_0055d4e0(uStack_118);
    uStack_274 = local_380[3];
    auStack_2bc[(uint)bVar10 * -2 + 0x13] = local_380[(uint)bVar10 * -2 + 4];
    auStack_2bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x14] =
         local_380[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
    (auStack_2bc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x14)[(uint)bVar10 * -2 + 1] =
         (local_380 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
  }
LAB_00538749:
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0();
LAB_00538751:
  if (*(int *)(0x01C775EC + 0x240) != 0) {
    local_8c[1] = 0.0;
    local_8c[2] = 0.0;
    local_8c[0] = 0.0;
    if ((*(int *)(param_1 + 0x1fa3c) != 0) && (*(int *)(param_1 + 0x1fa94) != 0)) {
      local_8c[0] = *(float *)(param_1 + 0x1fa58);
    }
    core_xform_cpp_FUN_0055d610(local_8c,0x3f800000,_DAT_02dc9f50,FUN_0051b650,pcVar12);
    local_2f0[3] = uStack_3d4;
    local_2f0[(uint)bVar10 * -2 + 4] = auStack_3ec[(uint)bVar10 * -2 + 7];
    local_2f0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5] =
         auStack_3ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 8];
    (local_2f0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1] =
         (auStack_3ec + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 8)[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (param_1 + 0x150,local_2f0 + 3);
  }
  if (*(float *)(param_1 + 0x1faac) <= 0.0) {
    return;
  }
  iVar3 = param_1 + 0x150;
  uVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                    (iVar3,"draw_holsters2aimPistols",1);
  uVar5 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(uVar5);
  local_2c = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                       (iVar3,uVar5,0x3f800000);
  local_1c = local_2c;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
            (iVar3,uVar5,local_2c,*(uint *)(param_1 + 0x1faac),_DAT_02dc9f90,FUN_0051b650);
  return;
}
