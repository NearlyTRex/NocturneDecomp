// Name: FUN_00495a20
// Address: 00495a20
// Address Range: [[00495a20, 00496d0f]]
// Convention: unknown
// Signature: void FUN_00495a20(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00495a20(int param_1,float param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  uint *puVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  char *pcVar18;
  byte local_1dc [40];
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190 [3];
  float local_184 [2];
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c [2];
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  byte local_154 [12];
  byte local_148 [12];
  byte local_13c [12];
  byte local_130 [12];
  byte local_124 [12];
  byte local_118 [12];
  byte local_10c [12];
  byte local_100 [12];
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  byte local_dc [12];
  uint local_d0;
  uint local_cc;
  uint local_c8;
  byte local_c4 [12];
  byte local_b8 [4];
  float local_b4;
  float local_b0;
  float local_ac;
  uint local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  byte local_94 [12];
  float local_88;
  float local_84;
  float local_80;
  byte local_7c [12];
  byte local_70 [12];
  double local_64;
  int local_54;
  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar9 = FUN_004259f0(param_1,param_2);
  if (iVar9 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xbc90) == 2) {
    core_gabriela_cpp_CGabriella_processAI_FUN_00496d10(param_1,param_2);
  }
  fVar8 = *(float *)(param_1 + 0xbc8c) - param_2;
  *(float *)(param_1 + 0xbc8c) = fVar8;
  if (fVar8 < 0.0) {
    *(uint *)(param_1 + 0xbc8c) = 0;
  }
  uVar10 = FUN_00497870(param_1,local_10c);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_184,uVar10);
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  core_gabriela_cpp_CGabriella_processMotionEvents_FUN_00497410(param_1,param_2);
  bVar3 = *(float *)(param_1 + 0x2434) <= 0.0;
  bVar14 = *(int *)(param_1 + 0x2590) != 0;
  bVar15 = *(int *)(param_1 + 0x1fa0c) != 0;
  bVar16 = *(int *)(param_1 + 0x1fa14) != 0;
  local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                              (param_1 + 0x150,8);
  bVar4 = 0.0 < local_14;
  local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                              (param_1 + 0x150,0xb);
  bVar5 = 0.0 < local_14;
  local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                              (param_1 + 0x150,0xc);
  bVar6 = 0.0 < local_14;
  local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                              (param_1 + 0x150,0x12);
  bVar7 = 0.0 < local_14;
  *(uint *)(param_1 + 0x2430) = 0;
  *(uint *)(param_1 + 0x242c) = 0;
  local_20 = 0.0;
  if (*(int *)(param_1 + 0x2408) != 0) {
    iVar9 = param_1 + 0x150;
    local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar9,1);
    *(float *)(param_1 + 0x242c) = local_14 * _DAT_01c71358 + *(float *)(param_1 + 0x242c);
    local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar9,2);
    *(float *)(param_1 + 0x242c) = local_14 * _DAT_01c7135c + *(float *)(param_1 + 0x242c);
    local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar9,3);
    *(float *)(param_1 + 0x242c) = *(float *)(param_1 + 0x242c) - local_14 * _DAT_01c71360;
    local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar9,0x14)
    ;
    local_20 = 0.0 - local_14 * _DAT_0059dcd8;
    local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar9,0x15)
    ;
    iVar9 = 0x01C775EC;
    fVar8 = local_14 * _DAT_0059dcd8;
    *(float *)(param_1 + 0x2430) = param_2 * (float)_DAT_00581ff2;
    local_20 = fVar8 + local_20;
    if (*(int *)(iVar9 + 0x228) != 0) {
      *(float *)(param_1 + 0x2430) = *(float *)(param_1 + 0x2430) * (float)_DAT_00581ffa;
    }
  }
  local_20 = local_20 * param_2;
  iVar9 = *(int *)(param_1 + 0x1fa14);
  *(float *)(param_1 + 0x242c) = *(float *)(param_1 + 0x242c) * param_2;
  if (iVar9 == 0) {
    if (*(int *)(param_1 + 0x2590) != 0) {
      if (*(int *)(param_1 + 0x2594) == 0) {
        uVar10 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                           (param_1,local_124,*(int *)(param_1 + 0x2590) + 0x20);
        iVar9 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_118,uVar10);
        local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(iVar9 + 4))
        ;
        local_18 = local_14;
        if (local_14 < (float)_DAT_0058202a) {
          local_18 = local_14 + _DAT_00582032;
        }
        if ((float)_DAT_0058203a < local_18) {
          local_18 = local_18 + _DAT_00582042;
        }
        local_28 = param_2 * (float)_DAT_00582022;
        local_34 = -local_28;
        if (local_18 < local_34) {
          local_18 = local_34;
        }
        if (local_28 < local_18) {
          local_18 = local_28;
        }
        *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + local_18;
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
      }
      local_54 = *(int *)(param_1 + 0x2590);
      local_14 = *(float *)(local_54 + 0x14c);
      uVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                         (param_1 + 0x150,local_13c,0);
      iVar9 = (**(code **)((int)local_14 + 0x108))(local_54,param_1,uVar10);
      if (iVar9 == 0) {
        *(uint *)(param_1 + 0x2590) = 0;
      }
      else if (*(int *)(param_1 + 0x2590) != 0) {
        if (*(int *)(param_1 + 0xbca0) != 0) {
          uVar10 = 7;
          goto LAB_00495d95;
        }
        goto LAB_00495d9d;
      }
      goto LAB_00495d8e;
    }
    if (*(int *)(param_1 + 0x1fa0c) == 0) {
      iVar12 = FUN_00428c00(param_1,param_2);
      iVar9 = param_1 + 0x150;
      if (iVar12 == 0) {
        if (!bVar7 && (!bVar6 &&
                      (!bVar5 && (!bVar4 && (!bVar16 && (!bVar15 && (!bVar14 && !bVar3))))))) {
          iVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar9);
          uVar2 = *(uint *)(iVar12 + 0x24);
          if (uVar2 < 0xe) {
            if ((((uVar2 == 0) || (uVar2 < 2)) || (uVar2 < 3)) || (uVar2 == 3)) goto LAB_00496679;
          }
          else if (uVar2 < 0xf) {
            local_2c = core_actor_cpp_castToClassHash_FUN_0040d890
                                 (*(uint *)(param_1 + 0x1fa08),DAT_00764230);
            if (local_2c != 0) {
              local_14 = (float)core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                                          (iVar9);
              core_ammobox_cpp_CAmmoBox_openBox_FUN_0040f130(local_2c,local_14);
            }
          }
          else if (uVar2 < 0x11) {
            if (uVar2 == 0x10) {
LAB_00496679:
              if (*(int *)(param_1 + 0x2408) != 0) {
                iVar9 = 0;
                if (*(int *)(param_1 + 0xbc94) != 0) {
                  if (*(int *)(param_1 + 0xbc9c) == 0) {
                    iVar9 = 1;
                  }
                  else {
                    iVar9 = 2;
                  }
                }
                if (*(int *)(param_1 + 0xbc98) != 0) {
                  iVar9 = 3;
                }
                local_3c = param_1 + 0x150;
                *(float *)(param_1 + 0x2410) =
                     *(float *)(param_1 + 0xbcb8) * *(float *)(param_1 + 0x2430);
                *(float *)(param_1 + 0x241c) =
                     *(float *)(param_1 + 0x242c) + *(float *)(param_1 + 0x241c);
                *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2414) + local_20;
                iVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(local_3c);
                if (iVar9 != *(int *)(iVar12 + 0x24)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(local_3c,iVar9,1);
                }
                if ((*(int *)(param_1 + 0xbca4) != 0) &&
                   (iVar9 = core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004983f0
                                      (param_1), iVar9 == 0)) {
                  core_gabriela_cpp_CGabriella_tryThrowObject_FUN_00498bd0(param_1);
                }
              }
            }
          }
          else if ((uVar2 < 0x12) || ((0x13 < uVar2 && ((uVar2 < 0x15 || (uVar2 == 0x15))))))
          goto LAB_00496679;
        }
        goto LAB_00495d9d;
      }
      uVar2 = *(uint *)(param_1 + 0x25a8);
      if (uVar2 < 2) {
        if (uVar2 != 1) goto LAB_00495d8e;
        uVar10 = 1;
      }
      else {
        if (2 < uVar2) {
          if (uVar2 == 3) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar9,0,1);
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
            goto LAB_00495d9d;
          }
          goto LAB_00495d8e;
        }
        uVar10 = 2;
      }
      goto LAB_00495d95;
    }
    local_50 = iVar9;
    if (*(int *)(param_1 + 0xbca0) != 0) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa0c) + 0x14c) + 0x14))
                (*(int *)(param_1 + 0x1fa0c),&local_1b4);
      local_19c = local_1b4 + local_1a8;
      local_198 = local_1b0 + local_1a4;
      local_a0 = local_19c * _DAT_00582002;
      local_9c = local_198 * _DAT_00582002;
      local_194 = local_1ac + local_1a0;
      local_98 = local_194 * _DAT_00582002;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                (*(uint *)(param_1 + 0x1fa0c),local_148,&local_a0);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,local_b8,local_148);
      iVar9 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_dc,local_b8);
      local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(iVar9 + 4));
      local_88 = local_1a8 - local_1b4;
      local_80 = local_1a0 - local_1ac;
      local_ac = local_88 * _DAT_00582002;
      local_a4 = local_80 * _DAT_00582002;
      local_a8 = 0;
      local_84 = local_1a4 - local_1b0;
      local_1c = local_14;
      if ((((local_b0 - SQRT(local_a4 * local_a4 + local_ac * local_ac) < (float)_DAT_0058200a) &&
           (local_64 = (double)local_b4, 1.0 < local_64)) && (local_64 < _DAT_00582012)) &&
         (ABS(local_14) < (float)_DAT_0058201a)) {
        local_24 = param_2 * (float)_DAT_00582022;
        if (local_14 < -local_24) {
          local_1c = -local_24;
        }
        if (local_24 < local_1c) {
          local_1c = local_24;
        }
        *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + local_1c;
        goto LAB_00495d9d;
      }
    }
    if (local_50 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
      core_hero_cpp_CHero_stopPushingBox_FUN_004b56f0(param_1);
    }
  }
  else {
    iVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                      (*(uint *)(param_1 + 0x1fa14),local_130,iVar9 + 0x2cc);
    if (*(float *)(param_1 + 0x24) <= *(float *)(iVar9 + 4)) goto LAB_00495d9d;
    *(uint *)(param_1 + 0x1fa14) = 0;
    local_f4 = 0;
    local_f0 = 0x3f000000;
    local_ec = 0x40800000;
    pfVar11 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                 (param_1,local_c4,&local_f4);
    *(float *)(param_1 + 0x20) = *pfVar11 + *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x24) = pfVar11[1] + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = pfVar11[2] + *(float *)(param_1 + 0x28);
    local_14 = (float)(**(code **)(*(int *)(param_1 + 0x14c) + 0x38))
                                (param_1,*(uint *)(param_1 + 0x2dd4),0);
    *(float *)(param_1 + 0x240c) = local_14;
    *(uint *)(param_1 + 0x2408) =
         (uint)(*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x240c) + (float)_DAT_0058204a);
LAB_00495d8e:
    uVar10 = 0;
LAB_00495d95:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar10,1);
  }
LAB_00495d9d:
  if (*(int *)(param_1 + 0x1fa14) == 0) {
    if (((!bVar7 && (!bVar6 && (!bVar5 && (!bVar4 && (!bVar16 && (!bVar15 && (!bVar14 && !bVar3)))))
                    )) ||
        (iVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150),
        *(int *)(iVar9 + 0x24) == 0xd)) || (*(int *)(param_1 + 0xdc) != 0)) {
      local_178 = *(float *)(param_1 + 0x2414);
      local_174 = *(float *)(param_1 + 0x2418);
      local_170 = *(float *)(param_1 + 0x241c);
      iVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
      uVar2 = *(uint *)(iVar9 + 0x24);
      if (uVar2 < 3) {
        if (uVar2 == 0) {
          bVar17 = true;
LAB_00496832:
          if (!bVar17) {
LAB_00496834:
            local_178 = local_178 + *(float *)(param_1 + 0x23a4);
            local_174 = local_174 + *(float *)(param_1 + 0x23a8);
            local_170 = local_170 + *(float *)(param_1 + 0x23ac);
          }
        }
      }
      else if (3 < uVar2) {
        if (uVar2 < 0x11) {
          bVar17 = uVar2 == 0x10;
          goto LAB_00496832;
        }
        if (0x11 < uVar2) {
          if (uVar2 < 0x14) goto LAB_00496834;
          if (0x14 < uVar2) {
            bVar17 = uVar2 == 0x15;
            goto LAB_00496832;
          }
        }
      }
      *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)_DAT_00582052;
      local_160 = *(float *)(param_1 + 0x2420) * param_2;
      local_15c = *(float *)(param_1 + 0x2424) * param_2;
      local_158 = param_2 * *(float *)(param_1 + 0x2428);
      local_178 = local_178 + local_160;
      local_174 = local_174 + local_15c;
      local_170 = local_170 + local_158;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_178);
    }
  }
  else {
    pfVar11 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                 (param_1,local_70,(uint *)(param_1 + 0x23a4));
    *(float *)(param_1 + 0x20) = *pfVar11 + *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x24) = pfVar11[1] + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = pfVar11[2] + *(float *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  if (((!bVar7 && (!bVar6 && (!bVar5 && (!bVar4 && (!bVar16 && (!bVar15 && (!bVar14 && !bVar3)))))))
      && (*(int *)(param_1 + 0xbcac) != 0)) && (*(int *)(param_1 + 0x1f8d0) != 0)) {
    bVar1 = *(byte *)(param_1 + 0x1fa3c);
    if ((bVar1 & 3) == 0) {
      *(byte *)(param_1 + 0x1fa3c) = bVar1 | 2;
    }
    else {
      *(byte *)(param_1 + 0x1fa3c) = bVar1 & 0xfc;
    }
  }
  iVar9 = core_actor_cpp_castToClassHash_FUN_0040d890
                    (*(uint *)(param_1 + 0x24ac),DAT_00764ad4);
  if (iVar9 != 0) {
    if (((*(int *)(param_1 + 0xbca8) != 0) &&
        (!bVar7 && (!bVar6 && (!bVar5 && (!bVar4 && (!bVar16 && (!bVar15 && (!bVar14 && !bVar3))))))
        )) && (*(uint *)(iVar9 + 0x231c) = (uint)(*(int *)(iVar9 + 0x231c) == 0),
              *(int *)(iVar9 + 0x664) == 1)) {
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"flashlit.wav");
    }
    if (*(int *)(iVar9 + 0x231c) != 0) {
      *(float *)(param_1 + 0x1fa50) =
           *(float *)(param_1 + 0xbcbc) * (float)_DAT_00582022 * (float)_DAT_0058205a * param_2 +
           *(float *)(param_1 + 0x1fa50);
      local_48 = (float)FUN_00497810(param_1);
      local_14 = local_48;
      local_4c = (float)FUN_00497860(param_1);
      if (*(float *)(param_1 + 0x1fa50) < local_48) {
        *(float *)(param_1 + 0x1fa50) = local_48;
      }
      local_14 = local_4c;
      if (local_4c < *(float *)(param_1 + 0x1fa50)) {
        *(float *)(param_1 + 0x1fa50) = local_4c;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x1fa3c) & 1) == 0) {
    fVar8 = *(float *)(param_1 + 0x1fa40) - param_2 / _DAT_0059dc9c;
    *(float *)(param_1 + 0x1fa40) = fVar8;
    if (fVar8 < 0.0) {
      *(uint *)(param_1 + 0x1fa40) = 0;
    }
  }
  else {
    fVar8 = param_2 / _DAT_0059dc98 + *(float *)(param_1 + 0x1fa40);
    *(float *)(param_1 + 0x1fa40) = fVar8;
    if (1.0 < fVar8) {
      *(uint *)(param_1 + 0x1fa40) = 0x3f800000;
    }
  }
  if ((*(byte *)(param_1 + 0x1fa3c) & 2) == 0) {
    local_30 = *(float *)(param_1 + 0x1fa44);
    fVar8 = local_30 - param_2 / _DAT_0059dc9c;
    *(float *)(param_1 + 0x1fa44) = fVar8;
    if (fVar8 < 0.0) {
      *(uint *)(param_1 + 0x1fa44) = 0;
    }
    local_38 = _DAT_0059dca4 + (float)_DAT_00582062;
    if ((local_38 <= local_30) && (*(float *)(param_1 + 0x1fa44) < local_38)) {
      pcVar18 = "undraw-s.wav @ .7";
      goto LAB_00495f6c;
    }
  }
  else {
    local_44 = *(float *)(param_1 + 0x1fa44);
    fVar8 = param_2 / _DAT_0059dc98 + local_44;
    *(float *)(param_1 + 0x1fa44) = fVar8;
    if (1.0 < fVar8) {
      *(uint *)(param_1 + 0x1fa44) = 0x3f800000;
    }
    local_40 = _DAT_0059dca4 + (float)_DAT_0058206a;
    if ((local_44 <= local_40) && (local_40 < *(float *)(param_1 + 0x1fa44))) {
      FUN_004a3a70(0x01C775EC);
      pcVar18 = "draw-f.wav @ 1.5";
LAB_00495f6c:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,pcVar18);
    }
  }
  if ((*(byte *)(param_1 + 0x1fa3c) & 3) == 0) {
    fVar8 = *(float *)(param_1 + 0x1fa48) - param_2 / _DAT_0059dc9c;
    *(float *)(param_1 + 0x1fa48) = fVar8;
    if (fVar8 < 0.0) {
      *(uint *)(param_1 + 0x1fa48) = 0;
    }
  }
  else {
    fVar8 = param_2 / _DAT_0059dc98 + *(float *)(param_1 + 0x1fa48);
    *(float *)(param_1 + 0x1fa48) = fVar8;
    if (1.0 < fVar8) {
      *(uint *)(param_1 + 0x1fa48) = 0x3f800000;
    }
  }
  if (bVar7 || (bVar6 || (bVar5 || (bVar4 || (bVar16 || (bVar15 || (bVar14 || bVar3))))))) {
    fVar8 = (param_2 / _DAT_0059dc9c) * (float)_DAT_0058200a;
LAB_00495fcb:
    fVar8 = *(float *)(param_1 + 0x1fa4c) - fVar8;
  }
  else {
    if (((iVar9 == 0) || (*(int *)(iVar9 + 0x231c) == 0)) ||
       (iVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150),
       *(int *)(iVar9 + 0x24) == 5)) {
      fVar8 = param_2 / _DAT_0059dc9c;
      goto LAB_00495fcb;
    }
    fVar8 = param_2 / _DAT_0059dc98 + *(float *)(param_1 + 0x1fa4c);
  }
  *(float *)(param_1 + 0x1fa4c) = fVar8;
  if (*(float *)(param_1 + 0x1fa4c) < 0.0) {
    *(uint *)(param_1 + 0x1fa4c) = 0;
  }
  if ((float)_DAT_00582072 < *(float *)(param_1 + 0x1fa4c)) {
    *(uint *)(param_1 + 0x1fa4c) = 0x3f666666;
  }
  core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004990c0
            (param_1,param_2,
             bVar7 || (bVar6 || (bVar5 || (bVar4 || (bVar16 || (bVar15 || (bVar14 || bVar3)))))));
  fVar8 = *(float *)(param_1 + 0x1fa74) - param_2 / _DAT_0059dcac;
  *(float *)(param_1 + 0x1fa74) = fVar8;
  if (((fVar8 <= 0.0) &&
      (*(uint *)(param_1 + 0x1fa74) = 0,
      !bVar7 && (!bVar6 && (!bVar5 && (!bVar4 && (!bVar16 && (!bVar15 && (!bVar14 && !bVar3))))))))
     && ((*(int *)(param_1 + 0xbca0) != 0 && (*(int *)(param_1 + 0x1fa54) == 0)))) {
    if (*(int *)(param_1 + 0x1fa3c) == 0) {
      if ((*(float *)(param_1 + 0x1fa44) <= 0.0) &&
         (iVar9 = core_hero_cpp_CHero_tryInteract_FUN_004b4e90(param_1), iVar9 == 0)) {
        iVar9 = FUN_004b5110(param_1);
        switch(iVar9) {
        case 0:
        case 1:
          break;
        case 2:
        case 3:
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x12,1);
          break;
        default:
          FUN_004b5270(param_1);
        }
        if ((iVar9 == 0) &&
           (iVar9 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(param_1), iVar9 == 0))
        {
          iVar9 = core_hero_cpp_CHero_tryPushNearbyBox_FUN_004b54c0(param_1);
          if (iVar9 == 0) {
            iVar9 = FUN_004b52f0(param_1);
            if (iVar9 == 0) {
              core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004987e0(param_1);
            }
            else {
              core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(param_1);
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0xd,1);
          }
        }
      }
    }
    else {
      *(uint *)(param_1 + 0x1fa54) = 3;
    }
  }
  FUN_00497900(param_1);
  FUN_004998c0(param_1,param_2,
               !bVar7 && (!bVar6 &&
                         (!bVar5 && (!bVar4 && (!bVar16 && (!bVar15 && (!bVar14 && !bVar3)))))));
  FUN_0042a150(param_1,param_2);
  local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                              (param_1 + 0x150,0xd);
  if (local_14 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004b56f0(param_1);
  }
  else {
    local_14 = (float)core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                                (param_1 + 0x150);
    if ((1.0 < local_14) &&
       (iVar9 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(param_1 + 0x1fa0c),DAT_00764838), iVar9 != 0)) {
      FUN_00497870(param_1,local_7c);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_16c,local_7c);
      local_190[0] = local_16c[0] - local_184[0];
      local_190[2] = local_164 - local_17c;
      local_190[1] = 0.0;
      iVar12 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                         (param_1,local_154,local_190);
      if (0.0 < *(float *)(iVar12 + 8)) {
        FUN_0041ef90(iVar9,local_184,local_190);
      }
    }
  }
  FUN_004980d0(param_1,param_2);
  if (*(int *)(param_1 + 0x1fa54) == 3) {
    iVar9 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(param_1 + 0x1f8d0),_DAT_01bca0c0);
    if (iVar9 != 0) {
      if (*(int *)(param_1 + 0xbca0) == 0) {
        *(uint *)(param_1 + 0x1fa54) = 2;
      }
      else {
        fVar8 = param_2 * (float)_DAT_0058207a + *(float *)(param_1 + 0x5a5ac);
        *(float *)(param_1 + 0x5a5ac) = fVar8;
        if (0x42700000 < fVar8) {
          *(uint *)(param_1 + 0xbca0) = 0;
          *(uint *)(param_1 + 0x1fa54) = 2;
          *(float *)(param_1 + 0x5a5ac) = 0x42700000;
        }
      }
      local_e8 = *(uint *)(param_1 + 0x1fa6c);
      local_e0 = 0;
      local_e4 = 0;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(local_1dc,&local_e8);
      local_c8 = *(uint *)(param_1 + 0x5a5ac);
      local_d0 = 0;
      local_cc = 0;
      uVar10 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                         (local_1dc,local_100,&local_d0);
      puVar13 = (uint *)
                core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,local_94,uVar10);
      if ((uint *)(iVar9 + 0x574) != puVar13) {
        *(uint *)(iVar9 + 0x574) = *puVar13;
        *(uint *)(iVar9 + 0x578) = puVar13[1];
        *(uint *)(iVar9 + 0x57c) = puVar13[2];
      }
      goto LAB_00496cc5;
    }
    *(uint *)(param_1 + 0x1fa54) = 2;
LAB_004961ba:
    *(uint *)(param_1 + 0x5a5ac) = _DAT_0059dcdc;
    iVar9 = core_gabriela_cpp_CGabriella_canFireWeapon_FUN_00498af0(param_1);
    if (iVar9 == 0) goto LAB_00496cd2;
    *(uint *)(param_1 + 0x1fa54) = 1;
  }
  else {
LAB_00496cc5:
    if (*(int *)(param_1 + 0x1fa54) == 2) goto LAB_004961ba;
LAB_00496cd2:
    if (*(int *)(param_1 + 0x1fa54) != 1) goto LAB_0049620e;
  }
  *(uint *)(param_1 + 0x1fa54) = 0;
  core_gabriela_cpp_CGabriella_tryFireWeapon_FUN_00498b60(param_1);
  if (*(int *)(*(int *)(param_1 + 0x1f8d0) + 0x2e4) == 0) {
    *(uint *)(param_1 + 0xbca0) = 0;
  }
LAB_0049620e:
  iVar9 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  if (iVar9 != 2) {
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (param_1 + 0x1fa7c,param_1 + 0x20,param_1 + 0x30,param_2,
               *(uint *)(param_1 + 0x240c),param_1 + 0x150);
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x1f8d0) + 0x14c) + 4))
            (*(int *)(param_1 + 0x1f8d0),param_2);
  if (*(int *)(*(int *)(param_1 + 0x1f8d0) + 0xfc) == 0) {
    return;
  }
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
