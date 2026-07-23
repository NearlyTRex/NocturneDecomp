// Name: core_imp.cpp_CImp_process_FUN_004bbaf0
// Address: 004bbaf0
// Address Range: [[004bbaf0, 004bc7b3]]
// Convention: unknown
// Signature: void core_imp_cpp_CImp_process_FUN_004bbaf0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_imp_cpp_CImp_process_FUN_004bbaf0(int param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  uint uVar10;
  byte local_1a0 [4];
  float local_19c;
  int local_16c;
  int local_168;
  byte local_164 [4];
  float local_160;
  int local_130;
  int local_12c;
  float local_128;
  float local_124;
  float local_120;
  byte local_11c [4];
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  byte local_104 [12];
  byte local_f8 [12];
  byte local_ec [4];
  float local_e8;
  byte local_e0 [4];
  float local_dc;
  float local_d4;
  float local_d0;
  float local_cc;
  byte local_c8 [12];
  float local_bc;
  float local_b8;
  float local_b4;
  byte local_b0 [12];
  float local_a4;
  uint local_a0;
  float local_9c;
  int local_98;
  int local_94;
  float local_90;
  byte local_8c [12];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  byte local_5c [12];
  uint local_50;
  uint local_4c;
  float local_48;
  int local_3c;
  float local_34 [2];
  float local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar4 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd54) * 4) == 0) &&
     (iVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1), iVar4 == 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,6,1);
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_34[0] = param_2 * *(float *)(param_1 + 0xbc8c);
  iVar4 = param_1 + 0x150;
LAB_004bbb59:
  if (0.0 < local_34[0]) {
    uVar5 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(iVar4,local_34);
    if (uVar5 < 0x29a) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar5);
      goto LAB_004bbb59;
    }
    if (uVar5 < 0x29b) {
      iVar7 = *(int *)(param_1 + 0xbca4);
      if ((((iVar7 != 0) &&
           (iVar7 = (**(code **)(*(int *)(iVar7 + 0x14c) + 0x104))(iVar7), iVar7 == 0)) &&
          (iVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))
                             (*(int *)(param_1 + 0xbca4)), iVar7 == 0)) &&
         (iVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xe0))
                            (*(int *)(param_1 + 0xbca4),param_1,0), iVar7 != 0)) {
        local_48 = 0x40000000;
        local_50 = 0;
        local_4c = 0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&local_68,&local_50);
        fVar1 = local_68 - *(float *)(*(int *)(param_1 + 0xbca4) + 0x20);
        fVar3 = local_60 - *(float *)(*(int *)(param_1 + 0xbca4) + 0x28);
        bVar2 = (float)0.80000000000000004 < SQRT(fVar3 * fVar3 + fVar1 * fVar1);
        if (((ABS(local_64 - *(float *)(*(int *)(param_1 + 0xbca4) + 0x24)) <=
              (float)4) &&
            ((bVar2 || (iVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xe4))
                                          (*(int *)(param_1 + 0xbca4),param_1,0), iVar7 != 0)))) &&
           (!bVar2)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,9,1);
          goto LAB_004bbb59;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
      goto LAB_004bbb59;
    }
    if (uVar5 == 0x29b) {
      if (*(int *)(param_1 + 0xbca4) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
      }
      else {
        uVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (iVar4,local_104,_DAT_01cae30c);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_8c,uVar6);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_164);
        local_160 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                     (0x40a00000,0x41200000);
        local_130 = param_1;
        local_12c = param_1;
        local_14 = local_160;
        (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x100))
                  (*(int *)(param_1 + 0xbca4),local_164);
        uVar10 = 0;
        uVar6 = 0x4bbd84;
        fVar9 = (float10)round
                                   ((float10)local_160 * (float10)2.5 *
                                    (float10)0.25);
        local_3c = (int)ROUND(fVar9);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                  (0x01C78C7C,local_8c,0,local_3c,uVar6,uVar10);
        iVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x104))
                          (*(int *)(param_1 + 0xbca4));
        if (iVar7 < 1) {
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"ghoul-eat-?.wav");
        }
        else {
          (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xe8))
                    (*(int *)(param_1 + 0xbca4));
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar5);
    }
    goto LAB_004bbb59;
  }
  fVar1 = (float)3.1415926535000001;
  iVar4 = param_1 + 0x150;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar1 * *(float *)(param_1 + 0xbc8c);
  iVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar4);
  iVar7 = *(int *)(iVar7 + 0x24);
  local_24 = iVar7;
  iVar8 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar8 == 0) {
    switch(iVar7) {
    case 0:
      iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      iVar7 = (**(code **)(*(int *)(iVar7 + 0x14c) + 0x104))(iVar7);
      if (iVar7 == 0) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
        iVar7 = *(int *)(param_1 + 0xbca4);
        if (iVar7 == 0) {
          iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
          if (iVar7 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,1,1);
          }
        }
        else if (*(int *)(iVar7 + 0x2590) == 0) {
          local_80 = *(float *)(iVar7 + 0x20) - *(float *)(param_1 + 0x20);
          local_7c = *(float *)(iVar7 + 0x24) - *(float *)(param_1 + 0x24);
          local_78 = *(float *)(iVar7 + 0x28) - *(float *)(param_1 + 0x28);
          local_20 = SQRT(local_78 * local_78 + local_80 * local_80 + local_7c * local_7c);
          local_18 = local_20;
          if (local_20 < 0x40000000) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_e0,&local_80);
            local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                        (local_dc - *(float *)(param_1 + 0x34));
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,4,1);
            }
          }
          if (local_20 < *(float *)(param_1 + 0xbc9c)) {
            if (_DAT_0059f578 <= local_20) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,3,1);
        }
      }
      else {
        iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0x3dcccccd);
        if (iVar4 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,3,1);
        }
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      fVar1 = 0x40000000;
      iVar4 = param_1 + 0x150;
      if (*(int *)(param_1 + 0xbca4) == 0) {
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,1,1);
        }
      }
      else {
        iVar7 = *(int *)(*(int *)(param_1 + 0xbca4) + 0x2590);
        if (iVar7 == 0) {
          local_28 = 0x40000000;
          *(uint *)(param_1 + 0x23ac) = 0;
          *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
          *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
          local_90 = fVar1;
          local_98 = iVar7;
          local_94 = iVar7;
          uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                            (*(int *)(param_1 + 0xbca4),&local_98,0x3f000000,0x3e32b8c2);
          iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar6);
          if (-1 < iVar7) {
            local_a4 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0xbca4) + 0x20);
            local_9c = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0xbca4) + 0x28);
            local_a0 = 0;
            local_2c = SQRT(local_9c * local_9c + local_a4 * local_a4);
            local_1c = local_2c;
            if ((_DAT_0059f578 < local_2c) && (local_24 == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,2,1);
            }
            if (((local_1c < _DAT_0059f57c) &&
                (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))
                                   (*(int *)(param_1 + 0xbca4)), iVar4 == 0)) &&
               (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd58) * 4) != 0)) {
              iVar4 = *(int *)(param_1 + 0xbca4);
              local_74 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
              local_70 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
              local_6c = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_ec,&local_74);
              local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                          (local_e8 - *(float *)(param_1 + 0x34));
              if ((ABS(local_14) < (float)0.52359877558333301) &&
                 (iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0x3dcccccd), iVar4 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,8,1);
                iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                  (*(uint *)(param_1 + 0xbd24));
                if (iVar4 == 0) {
                  uVar6 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                                    (param_1,"imp-jump?.wav");
                  *(uint *)(param_1 + 0xbd24) = uVar6;
                }
              }
            }
            if ((local_1c <= local_28) && (*(float *)(param_1 + 0xbca0) <= 0.0)) {
              iVar4 = *(int *)(param_1 + 0xbca4);
              local_d4 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
              local_d0 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
              local_cc = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_11c,&local_d4);
              local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                          (local_118 - *(float *)(param_1 + 0x34));
              if (ABS(local_14) < (float)0.52359877558333301) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,4,1);
                *(uint *)(param_1 + 0xbca0) = 0x40800000;
              }
            }
            if (*(float *)(param_1 + 0xbc9c) < local_1c) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
            }
            fVar1 = *(float *)(param_1 + 0xbd2c) - param_2;
            *(float *)(param_1 + 0xbd2c) = fVar1;
            if (fVar1 < 0.0) {
              *(uint *)(param_1 + 0xbd2c) = 0;
              iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd24))
              ;
              if ((iVar4 == 0) &&
                 (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                    (*(uint *)(param_1 + 0xbd28)), iVar4 == 0)) {
                uVar6 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                                  (param_1,"imp-laugh?.wav");
                *(uint *)(param_1 + 0xbd24) = uVar6;
                local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                            (0x41200000,0x41a00000);
                *(float *)(param_1 + 0xbd2c) = local_14;
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,3,1);
        }
      }
      break;
    case 3:
      fVar1 = *(float *)(param_1 + 0xbd2c) - param_2 * 4.0f;
      *(float *)(param_1 + 0xbd2c) = fVar1;
      if (fVar1 < 0.0) {
        *(uint *)(param_1 + 0xbd2c) = 0;
        iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd24));
        if ((iVar4 == 0) &&
           (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd28)),
           iVar4 == 0)) {
          uVar6 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"imp-laugh?.wav");
          *(uint *)(param_1 + 0xbd24) = uVar6;
          local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                      (0x41200000,0x41a00000);
          *(float *)(param_1 + 0xbd2c) = local_14;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_1a0);
      local_19c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40400000,0x40a00000);
      local_16c = param_1;
      local_168 = param_1;
      local_14 = local_19c;
      uVar6 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                        (local_b0,&DAT_02dd1184,param_1 + 0xfd0 + _DAT_01cae314 * 0x30,0x3ecccccd,
                         local_1a0);
      uVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_5c,uVar6);
      iVar4 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar6);
      if (iVar4 != 0) {
        iVar7 = 0;
        iVar4 = 0;
        while (iVar4 < *(int *)(0x01E57284 + 0x150bf4)) {
          iVar8 = core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(uint *)(iVar7 + 0x150bf8 + 0x01E57284),_DAT_01cae374);
          if (((iVar8 == 0) || (iVar8 == param_1)) ||
             (*(int *)(param_1 + 0xbca4) != *(int *)(iVar8 + 0xbca4))) {
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar8 + 0x150,3,1);
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 4;
          }
        }
      }
      break;
    case 7:
      if ((*(int *)(param_1 + 0xbc90) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        uVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (iVar4,local_f8,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_c8,uVar6);
        FUN_004b0480(0x01C78C7C,local_c8,0);
        *(uint *)(param_1 + 0xbc90) = 1;
      }
      break;
    case 9:
      iVar7 = *(int *)(param_1 + 0xbca4);
      if ((iVar7 != 0) &&
         (iVar7 = (**(code **)(*(int *)(iVar7 + 0x14c) + 0x104))(iVar7), iVar7 == 0)) {
        iVar7 = *(int *)(*(int *)(param_1 + 0xbca4) + 0x2590);
        if (param_1 == iVar7) {
          fVar1 = (float)0.75;
          *(float *)(iVar7 + 0x20) =
               *(float *)(*(int *)(param_1 + 0xbca4) + 0x20) - *(float *)(iVar7 + 0x44) * fVar1;
          *(float *)(iVar7 + 0x28) =
               *(float *)(*(int *)(iVar7 + 0xbca4) + 0x28) - *(float *)(iVar7 + 0x5c) * fVar1;
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,5,1);
    }
    goto switchD_004bc7ad_caseD_5;
  }
  uVar5 = *(uint *)(param_1 + 0x25a8);
  if (uVar5 < 2) {
    if (uVar5 == 1) {
LAB_004bbe84:
      uVar6 = 1;
    }
    else {
LAB_004bc023:
      uVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar6,1);
  }
  else {
    if (uVar5 < 3) goto LAB_004bbe84;
    if (uVar5 != 3) goto LAB_004bc023;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
switchD_004bc7ad_caseD_5:
  if (0.0 < *(float *)(param_1 + 0xbca0)) {
    *(float *)(param_1 + 0xbca0) = *(float *)(param_1 + 0xbca0) - param_2;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(param_1);
  if ((iVar4 != 0) && (local_24 != 9)) {
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
    local_bc = *(float *)(param_1 + 0x2420) * param_2;
    local_b8 = *(float *)(param_1 + 0x2424) * param_2;
    local_b4 = param_2 * *(float *)(param_1 + 0x2428);
    local_128 = local_bc + *(float *)(param_1 + 0x2414);
    local_124 = local_b8 + *(float *)(param_1 + 0x2418);
    local_120 = local_b4 + *(float *)(param_1 + 0x241c);
    local_110 = local_128 + *(float *)(param_1 + 0x23a4);
    local_10c = local_124 + *(float *)(param_1 + 0x23a8);
    local_108 = local_120 + *(float *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23a8);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_110);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  return;
}
