// Name: core_kedward.cpp_FUN_00590010
// Address: 00590010
// Address Range: [[00590010, 0059166d]]
// Convention: unknown
// Signature: void core_kedward_cpp_FUN_00590010(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_kedward_cpp_FUN_00590010(CEnemy *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  int iVar4;
  uint uVar5;
  CPathMap *path_map;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float afStackY_12bc [965];
  CEnemy *pCVar9;
  CVector3f *direction;
  uint *puVar10;
  float *pfVar11;
  float fVar12;
  EBloodType blood_type;
  float fVar13;
  SDamageInfo aSStack_388 [4];
  uint uStack_384;
  CEnemy *pCStack_354;
  CEnemy *pCStack_350;
  SDamageInfo aSStack_34c [4];
  uint uStack_348;
  CEnemy *pCStack_318;
  CEnemy *pCStack_314;
  SDamageInfo aSStack_310 [4];
  uint uStack_30c;
  CEnemy *pCStack_2dc;
  CEnemy *pCStack_2d8;
  float fStack_2d4;
  float afStack_2d0 [4];
  float fStack_2c0;
  float afStack_2bc [3];
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float afStack_298 [3];
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  byte auStack_280 [12];
  uint uStack_274;
  float afStack_270 [4];
  float fStack_260;
  CVector3f CStack_25c;
  uint uStack_250;
  float afStack_24c [4];
  float fStack_23c;
  float fStack_238;
  float afStack_234 [5];
  float afStack_220 [3];
  float afStack_214 [3];
  float fStack_208;
  float afStack_204 [5];
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  uint uStack_1e4;
  float afStack_1e0 [5];
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  uint uStack_1c0;
  float afStack_1bc [4];
  float fStack_1ac;
  float fStack_1a8;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  uint uStack_184;
  float afStack_178 [3];
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  uint uStack_160;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float afStack_144 [5];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float afStack_120 [4];
  float fStack_110;
  CVector3f CStack_10c;
  float fStack_100;
  float afStack_fc [4];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [5];
  float afStack_b8 [3];
  float afStack_ac [5];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_5c;
  float fStack_58;
  float *pfStack_54;
  byte *puStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float *pfStack_40;
  float *pfStack_3c;
  float *pfStack_38;
  CDeformableModelInstance *pCStack_34;
  float fStack_30;
  CVector3f *pCStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_1c;
  uint uStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar2 != 0) {
    if (0.0 < *(float *)(param_1 + 1)) {
      *(float *)(param_1 + 1) = *(float *)(param_1 + 1) - param_2;
    }
    fVar12 = *(float *)&param_1[1].field_0x10 + param_2;
    *(float *)&param_1[1].field_0x10 = fVar12;
    if (*(float *)&param_1[1].field_0x18 <= fVar12) {
      *(uint *)&param_1[1].field_0x10 = *(uint *)&param_1[1].field_0x18;
    }
    if (*(int *)&param_1[1].field_0x40 == 0) {
      if ((*(int *)&param_1[1].field_0x38 == 0) && (*(int *)&param_1[1].field_0x34 == 0)) {
        fVar12 = *(float *)&param_1->field_0xcdcc;
        *(uint *)&param_1[1].field_0x34 = 1;
        fVar12 = fVar12 + _DAT_005d8e54;
        *(uint *)&param_1[1].field_0x30 = 1;
        *(float *)&param_1->field_0xcdcc = fVar12;
      }
      if ((0.0 < *(float *)&param_1[1].field_0x28) &&
         (*(float *)&param_1[1].field_0x28 - param_2 <= 0.0)) {
        iVar2 = *(int *)&param_1->field_0xcde4;
        afStack_fc[2] = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
        afStack_fc[3] = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
        fStack_ec = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
        fStack_2a4 = afStack_fc[2];
        afStack_2d0[(uint)bVar6 * -2 + 0xc] = afStack_fc[(uint)bVar6 * -2 + 3];
        afStack_2d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
             afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        fStack_84 = fStack_29c * fStack_29c + fStack_2a4 * fStack_2a4 + fStack_2a0 * fStack_2a0;
        fStack_94 = (float)(((int)fStack_84 >> 1) + _DAT_01d1a0a4);
        if (fStack_94 < (float)_DAT_005d8e5c) {
          *(uint *)&param_1[1].field_0x28 = 0x3f000000;
        }
        else {
          fVar12 = *(float *)&param_1->field_0xcdcc;
          *(uint *)&param_1[1].field_0x28 = 0;
          iVar2 = _DAT_01d5ba14;
          *(float *)&param_1->field_0xcdcc = fVar12 + _DAT_005d8e64;
          iVar2 = *(int *)(iVar2 * 4 + 0x1d5ba04);
          afStack_120[2] = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
          afStack_120[3] = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_110 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_2d4 = afStack_120[2];
          afStack_2d0[(uint)bVar6 * -2] = afStack_120[(uint)bVar6 * -2 + 3];
          afStack_2d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_120[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
          core_vecdir_cpp_FUN_00576250(&fStack_2d4);
          afStack_cc[2] = afStack_234[2];
          afStack_cc[(uint)bVar6 * -2 + 3] = afStack_234[(uint)bVar6 * -2 + 3];
          afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               afStack_234[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
          fStack_8c = (float)core_actor_cpp_FUN_0040cfa0
                                       (afStack_cc[3] - *(float *)&param_1->field_0x34);
          fStack_14 = fStack_8c;
          fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                       (afStack_cc[2] - *(float *)&param_1->field_0x30);
          *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_8c;
          *(float *)&param_1->field_0x30 = *(float *)&param_1->field_0x30 + fStack_14;
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)param_1);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,0xd,1);
        }
      }
      fVar12 = *(float *)&param_1[1].field_0x2c - param_2;
      *(float *)&param_1[1].field_0x2c = fVar12;
      if (fVar12 < 0.0) {
        *(uint *)&param_1[1].field_0x2c = 0;
      }
      fVar12 = *(float *)&param_1[1].field_0x28 - param_2;
      *(float *)&param_1[1].field_0x28 = fVar12;
      if (fVar12 < 0.0) {
        *(uint *)&param_1[1].field_0x24 = 0;
        *(uint *)&param_1[1].field_0x30 = 0;
        if (*(float *)&param_1[1].field_0x28 < (float)_DAT_005d8e6c) {
          *(uint *)&param_1[1].field_0x28 = 0;
          *(uint *)&param_1[1].field_0x34 = 0;
        }
      }
    }
    pfStack_54 = (float *)&param_1->field_0x2518;
    fStack_90 = param_2 * *(float *)&param_1->field_0xcdcc;
    pfStack_40 = (float *)&param_1->field_0x250c;
    pfStack_38 = (float *)&param_1->field_0x249c;
    pCStack_34 = (CDeformableModelInstance *)&param_1->field_0x158;
    pCStack_2c = (CVector3f *)&param_1[1].field_0x44;
    puStack_50 = &param_1->field_0xfd8;
    pfStack_3c = (float *)&param_1->field_0x20;
    while (0.0 < fStack_90) {
      iVar2 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                        ((CMotionController *)pCStack_34,&fStack_90);
      switch(iVar2) {
      case 0x514:
        iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbc54 + iVar2 * 4));
        if (iVar4 == 0) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"keddem_stand.wav");
          *(uint *)(&param_1->field_0xbc54 + iVar2 * 4) = uVar5;
        }
        break;
      case 0x515:
        iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbc54 + iVar2 * 4));
        if (iVar4 == 0) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"keddem_chasewalk.wav");
          *(uint *)(&param_1->field_0xbc54 + iVar2 * 4) = uVar5;
        }
        break;
      case 0x516:
        iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbc54 + iVar2 * 4));
        if (iVar4 == 0) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"keddem_chasefast.wav");
          *(uint *)(&param_1->field_0xbc54 + iVar2 * 4) = uVar5;
        }
        break;
      case 0x517:
        iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbc54 + iVar2 * 4));
        if (iVar4 == 0) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"keddem_attack1.wav");
          *(uint *)(&param_1->field_0xbc54 + iVar2 * 4) = uVar5;
        }
        break;
      case 0x518:
        iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbc54 + iVar2 * 4));
        if (iVar4 == 0) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"keddem_attack2.wav");
          *(uint *)(&param_1->field_0xbc54 + iVar2 * 4) = uVar5;
        }
        break;
      case 0x519:
        iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbc54 + iVar2 * 4));
        if (iVar4 == 0) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"keddem_attack3.wav");
          *(uint *)(&param_1->field_0xbc54 + iVar2 * 4) = uVar5;
        }
        break;
      case 0x51a:
        iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbc54 + iVar2 * 4));
        if (iVar4 == 0) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"keddem_pain.wav");
          *(uint *)(&param_1->field_0xbc54 + iVar2 * 4) = uVar5;
        }
        break;
      case 0x51b:
        iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbc54 + iVar2 * 4));
        if (iVar4 == 0) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"keddem_die.wav");
          *(uint *)(&param_1->field_0xbc54 + iVar2 * 4) = uVar5;
        }
        break;
      case 0x51c:
        iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbc54 + iVar2 * 4));
        if (iVar4 == 0) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"keddem_warning.wav");
          *(uint *)(&param_1->field_0xbc54 + iVar2 * 4) = uVar5;
        }
        break;
      case 0x51d:
        iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbc54 + iVar2 * 4));
        if (iVar4 == 0) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"keddem_appear.wav");
          *(uint *)(&param_1->field_0xbc54 + iVar2 * 4) = uVar5;
        }
        break;
      case 0x51e:
        iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbc54 + iVar2 * 4));
        if (iVar4 == 0) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"keddem_disappear.wav");
          *(uint *)(&param_1->field_0xbc54 + iVar2 * 4) = uVar5;
        }
      }
      *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
      core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                         ((CMotionController *)pCStack_34);
      uVar5 = *(uint *)(pSVar3 + 0x24);
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"State: %d\n",uVar5);
      iVar2 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
      if (iVar2 == 0) {
        switch(uVar5) {
        case 0:
          if ((*(int *)&param_1[1].field_0x40 == 0) &&
             (iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
             iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2), iVar2 == 0)) {
            iVar2 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
            if (iVar2 != 0) {
              core_kedward_cpp_FUN_005919a0(param_1);
            }
            (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
            if (*(int *)&param_1->field_0xcde4 == 0) {
              iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
              if (iVar2 == 0) break;
              *(uint *)&g_CGamePtr->field_0x244 = 1;
              *(uint *)&param_1->field_0xcde4 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)
              ;
            }
            if (*(int *)&param_1->field_0xcde4 != 0) {
              core_kedward_cpp_FUN_005919a0(param_1);
            }
          }
          break;
        case 1:
        case 2:
          if ((*(int *)&param_1[1].field_0x14 == 0) && (*(int *)&param_1[1].field_0x40 != 0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)pCStack_34,0,1);
          }
          else {
            iVar2 = *(int *)&param_1->field_0xcde4;
            (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
            if ((*(int *)&param_1->field_0xcde4 == 0) &&
               (iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
               iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), iVar4 != 0)) {
              *(uint *)&g_CGamePtr->field_0x244 = 1;
              *(uint *)&param_1->field_0xcde4 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)
              ;
            }
            if (*(int *)&param_1->field_0xcde4 == 0) {
              iVar2 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
              if (iVar2 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)pCStack_34,0,1);
              }
            }
            else if (iVar2 == 0) {
              core_kedward_cpp_FUN_005919a0(param_1);
            }
            else {
              pfStack_38[2] = 0.0;
              pfStack_38[1] = pfStack_38[2];
              *pfStack_38 = pfStack_38[1];
              iVar2 = *(int *)&param_1[1].field_0x24;
              if (iVar2 == 0) {
                fVar13 = 0.34906584;
                fVar12 = 1.1;
                auStack_280._8_4_ = 0x40733333;
                direction = (CVector3f *)auStack_280;
                auStack_280._0_4_ = iVar2;
                auStack_280._4_4_ = iVar2;
                path_map = (CPathMap *)
                           (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                                     (*(int *)&param_1->field_0xcde4);
                iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                  ((CCharacter *)param_1,
                                   (CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),path_map,
                                   direction,fVar12,fVar13);
                if (iVar2 < 0) {
                  engine_console_cpp_FUN_00441ff0
                            (g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1);
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            ((CMotionController *)pCStack_34,0,1);
                }
                else if (0 < iVar2) {
                  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
                  if (iVar2 < 0x4b) {
                    iVar2 = 3;
                  }
                  else {
                    iVar2 = 4;
                  }
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            ((CMotionController *)pCStack_34,iVar2,1);
                  *(uint *)&param_1->field_0xcde0 = 0x3f4ccccd;
                }
              }
              else {
                if (*(float *)&param_1[1].field_0x2c <= 0.0) {
                  uStack_1c = core_actor_cpp_FUN_0040ce40(0xc0a00000,0x40a00000);
                  afStack_214[0] = (float)core_actor_cpp_FUN_0040ce40(0xc0a00000,0x40a00000);
                  uStack_18 = uStack_1c;
                  afStack_214[1] = 0.0;
                  afStack_214[2] = (float)uStack_1c;
                  if ((CVector3f *)afStack_214 != pCStack_2c) {
                    *(float *)pCStack_2c = afStack_214[0];
                    *(uint *)&pCStack_2c->field_0x4 = 0;
                    *(uint *)&pCStack_2c->field_0x8 = uStack_1c;
                  }
                  fStack_5c = SQRT(*(float *)&pCStack_2c->field_0x8 *
                                   *(float *)&pCStack_2c->field_0x8 +
                                   *(float *)pCStack_2c * *(float *)pCStack_2c +
                                   *(float *)&pCStack_2c->field_0x4 *
                                   *(float *)&pCStack_2c->field_0x4);
                  if (fStack_5c <= 0.0) {
                    *(uint *)&pCStack_2c->field_0x8 = 0;
                    *(uint *)&pCStack_2c->field_0x4 = *(uint *)&pCStack_2c->field_0x8;
                    *(float *)pCStack_2c = *(float *)&pCStack_2c->field_0x4;
                  }
                  else {
                    fVar12 = 1.0 / fStack_5c;
                    *(float *)pCStack_2c = *(float *)pCStack_2c * fVar12;
                    *(float *)&pCStack_2c->field_0x4 = *(float *)&pCStack_2c->field_0x4 * fVar12;
                    *(float *)&pCStack_2c->field_0x8 = *(float *)&pCStack_2c->field_0x8 * fVar12;
                  }
                  fVar12 = *(float *)&pCStack_2c->field_0x4 * _DAT_005d8e74;
                  fVar13 = *(float *)&pCStack_2c->field_0x8 * _DAT_005d8e74;
                  *(float *)pCStack_2c = *(float *)pCStack_2c * _DAT_005d8e74;
                  *(float *)&pCStack_2c->field_0x4 = fVar12;
                  *(float *)&pCStack_2c->field_0x8 = fVar13;
                  iVar2 = *(int *)&param_1->field_0xcde4;
                  *(float *)pCStack_2c = *(float *)(iVar2 + 0x20) + *(float *)pCStack_2c;
                  *(float *)&pCStack_2c->field_0x4 =
                       *(float *)(iVar2 + 0x24) + *(float *)&pCStack_2c->field_0x4;
                  *(float *)&pCStack_2c->field_0x8 =
                       *(float *)(iVar2 + 0x28) + *(float *)&pCStack_2c->field_0x8;
                  *(uint *)&param_1[1].field_0x2c = 0x3f800000;
                  fStack_58 = afStack_214[0];
                  fStack_14 = afStack_214[0];
                }
                CStack_25c._0_4_ = 0;
                CStack_25c._4_4_ = 0;
                CStack_25c._8_4_ = 0;
                core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)param_1,pCStack_2c,(CPathMap *)0x0,&CStack_25c,1.0,0.0);
              }
            }
          }
          break;
        case 3:
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
          iVar2 = *(int *)&param_1->field_0xcde4;
          if (iVar2 == 0) {
            core_kedward_cpp_FUN_005919a0(param_1);
          }
          else {
            fStack_28c = *pfStack_3c - *(float *)(iVar2 + 0x20);
            fStack_288 = pfStack_3c[1] - *(float *)(iVar2 + 0x24);
            fStack_284 = pfStack_3c[2] - *(float *)(iVar2 + 0x28);
            fStack_d0 = fStack_28c;
            afStack_cc[(uint)bVar6 * -2] = afStack_2d0[(uint)bVar6 * -2 + 0x12];
            afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_2d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
            if (afStack_1e0 + 5 != &fStack_d0) {
              fStack_1cc = fStack_d0;
              fStack_1c8 = afStack_cc[0];
              fStack_1c4 = afStack_cc[1];
            }
            fStack_48 = core_motion_cpp_FUN_004fc930((CMotionController *)pCStack_34);
            fStack_70 = fStack_1c4 * fStack_1c4 + fStack_1cc * fStack_1cc + fStack_1c8 * fStack_1c8;
            fStack_6c = (float)(((int)fStack_70 >> 1) + _DAT_01d1a0a4);
            fStack_14 = fStack_48;
            if ((fStack_6c <= 0x40733333) || (fStack_48 <= (float)_DAT_005d8eac)) {
              if ((0x3f7fffff < (int)fStack_48) && ((int)fStack_48 < 0x40000001)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_34c);
                uStack_348 = 0x41200000;
                pCStack_318 = param_1;
                pCStack_314 = param_1;
                core_xform_cpp_FUN_00583260
                          (&DAT_02cfd900,puStack_50 + *(int *)&param_1[1].field_0x20 * 0x30,
                           0x40000000,aSStack_34c);
                pfVar11 = afStack_2d0 + 0xe;
                afStack_298[0] = (float)uStack_274;
                afStack_2d0[(uint)bVar6 * -2 + 0xf] = afStack_270[(uint)bVar6 * -2];
                afStack_2d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
                     afStack_270[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
                core_actor_cpp_FUN_00408b80(param_1,pfVar11);
                pfVar11 = afStack_1bc + 0x11;
                afStack_178[0] = (float)uStack_250;
                afStack_1bc[(uint)bVar6 * -2 + 0x12] = afStack_24c[(uint)bVar6 * -2];
                pCVar9 = param_1;
                afStack_1bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
                     afStack_24c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
                core_enemy_cpp_FUN_004893f0(pCVar9,pfVar11);
              }
            }
            else {
              core_kedward_cpp_FUN_005919a0(param_1);
            }
          }
          break;
        case 4:
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
          iVar2 = *(int *)&param_1->field_0xcde4;
          if (iVar2 == 0) {
            core_kedward_cpp_FUN_005919a0(param_1);
          }
          else {
            afStack_1bc[2] = *pfStack_3c - *(float *)(iVar2 + 0x20);
            afStack_1bc[3] = pfStack_3c[1] - *(float *)(iVar2 + 0x24);
            fStack_1ac = pfStack_3c[2] - *(float *)(iVar2 + 0x28);
            fStack_148 = afStack_1bc[2];
            afStack_144[(uint)bVar6 * -2] = afStack_1bc[(uint)bVar6 * -2 + 3];
            afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_1bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
            if (afStack_1bc + 0x1a != &fStack_148) {
              fStack_154 = fStack_148;
              fStack_150 = afStack_144[0];
              fStack_14c = afStack_144[1];
            }
            fStack_4c = core_motion_cpp_FUN_004fc930((CMotionController *)pCStack_34);
            fStack_78 = fStack_14c * fStack_14c + fStack_154 * fStack_154 + fStack_150 * fStack_150;
            fStack_74 = (float)(((int)fStack_78 >> 1) + _DAT_01d1a0a4);
            fStack_14 = fStack_4c;
            if ((fStack_74 <= 0x40733333 + 1.0) || (fStack_4c <= (float)_DAT_005d8ea4)) {
              if ((0x3f7fffff < (int)fStack_4c) && ((int)fStack_4c < 0x40000001)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_310);
                uStack_30c = 0x41a00000;
                pCStack_2dc = param_1;
                pCStack_2d8 = param_1;
                core_xform_cpp_FUN_00583260
                          (&DAT_02cfd900,puStack_50 + *(int *)&param_1[1].field_0x20 * 0x30,
                           0x40000000,aSStack_310);
                pfVar11 = afStack_234 + 5;
                afStack_220[0] = (float)uStack_1e4;
                afStack_234[(uint)bVar6 * -2 + 6] = afStack_1e0[(uint)bVar6 * -2];
                afStack_234[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
                     afStack_1e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
                core_actor_cpp_FUN_00408b80(param_1,pfVar11);
                pfVar11 = afStack_cc + 8;
                afStack_ac[0] = afStack_1e0[2];
                afStack_cc[(uint)bVar6 * -2 + 9] = afStack_1e0[(uint)bVar6 * -2 + 3];
                pCVar9 = param_1;
                afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
                     afStack_1e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
                core_enemy_cpp_FUN_004893f0(pCVar9,pfVar11);
              }
            }
            else {
              core_kedward_cpp_FUN_005919a0(param_1);
            }
          }
          break;
        case 5:
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
          iVar2 = *(int *)&param_1->field_0xcde4;
          if (iVar2 == 0) {
            core_kedward_cpp_FUN_005919a0(param_1);
          }
          else {
            fStack_208 = *pfStack_3c - *(float *)(iVar2 + 0x20);
            afStack_204[0] = pfStack_3c[1] - *(float *)(iVar2 + 0x24);
            afStack_204[1] = pfStack_3c[2] - *(float *)(iVar2 + 0x28);
            afStack_2d0[2] = fStack_208;
            afStack_2d0[(uint)bVar6 * -2 + 3] = afStack_204[(uint)bVar6 * -2];
            afStack_2d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                 afStack_204[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            if (afStack_204 + 5 != afStack_2d0 + 2) {
              fStack_1f0 = afStack_2d0[2];
              fStack_1ec = afStack_2d0[3];
              fStack_1e8 = fStack_2c0;
            }
            fStack_44 = core_motion_cpp_FUN_004fc930((CMotionController *)pCStack_34);
            fStack_80 = fStack_1e8 * fStack_1e8 + fStack_1f0 * fStack_1f0 + fStack_1ec * fStack_1ec;
            fStack_68 = (float)(((int)fStack_80 >> 1) + _DAT_01d1a0a4);
            fStack_14 = fStack_44;
            if ((fStack_68 <= 0x40733333) || (fStack_44 <= (float)_DAT_005d8ea4)) {
              if ((0x3f7fffff < (int)fStack_44) && ((int)fStack_44 < 0x40000001)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_388);
                uStack_384 = 0x41f00000;
                pCStack_354 = param_1;
                pCStack_350 = param_1;
                core_xform_cpp_FUN_00583260
                          (&DAT_02cfd900,puStack_50 + *(int *)&param_1[1].field_0x20 * 0x30,
                           0x40000000,aSStack_388);
                puVar10 = &uStack_1c0;
                uStack_1c0 = afStack_144[2];
                afStack_1bc[(uint)bVar6 * -2] = afStack_144[(uint)bVar6 * -2 + 3];
                afStack_1bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                     afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
                core_actor_cpp_FUN_00408b80(param_1,puVar10);
                pfVar11 = afStack_2d0 + 5;
                afStack_2bc[0] = (float)uStack_184;
                afStack_2d0[(uint)bVar6 * -2 + 6] = afStack_1bc[(uint)bVar6 * -2 + 0xf];
                pCVar9 = param_1;
                afStack_2d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
                     afStack_1bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
                core_enemy_cpp_FUN_004893f0(pCVar9,pfVar11);
              }
            }
            else {
              core_kedward_cpp_FUN_005919a0(param_1);
            }
          }
          break;
        case 8:
          if ((*(int *)&param_1->field_0xcdd0 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
            core_skeleton_cpp_FUN_0054dbd0(pCStack_34,0);
            pfVar11 = afStack_cc + 5;
            afStack_b8[0] = (float)uStack_160;
            afStack_cc[(uint)bVar6 * -2 + 6] = afStack_1bc[(uint)bVar6 * -2 + 0x18];
            afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
                 afStack_1bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
            core_actor_cpp_FUN_00408b80(param_1,pfVar11);
            blood_type = BLOOD_TYPE_RED;
            CStack_10c._0_4_ = CStack_dc._0_4_;
            *(uint *)((int)&CStack_10c + (uint)bVar6 * -8 + 4) =
                 *(uint *)((int)&CStack_dc + (uint)bVar6 * -8 + 4);
            *(uint *)((int)&CStack_10c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
                 *(uint *)((int)&CStack_dc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            core_gore_cpp_FUN_004cec40(g_CGorePtr,&CStack_10c,blood_type);
            *(uint *)&param_1->field_0xcdd0 = 1;
          }
          break;
        case 10:
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
          iVar2 = *(int *)&param_1->field_0xcde4;
          if (iVar2 != 0) {
            fStack_e8 = *pfStack_3c - *(float *)(iVar2 + 0x20);
            fStack_e4 = pfStack_3c[1] - *(float *)(iVar2 + 0x24);
            fStack_e0 = pfStack_3c[2] - *(float *)(iVar2 + 0x28);
            fStack_19c = fStack_e8;
            afStack_1bc[(uint)bVar6 * -2 + 9] = afStack_fc[(uint)bVar6 * -2 + 6];
            afStack_1bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
                 afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
            if (afStack_24c + 2 != afStack_1bc + 8) {
              afStack_24c[2] = fStack_19c;
              afStack_24c[3] = fStack_198;
              fStack_23c = fStack_194;
            }
            fStack_28 = fStack_23c * fStack_23c +
                        afStack_24c[2] * afStack_24c[2] + afStack_24c[3] * afStack_24c[3];
            fStack_24 = (float)(((int)fStack_28 >> 1) + _DAT_01d1a0a4);
            if (fStack_24 <= (float)_DAT_005d8e94) {
              fStack_30 = *(float *)&param_1->field_0x3280;
              if (fStack_30 < *(float *)&param_1->field_0x327c) {
                fStack_30 = *(float *)&param_1->field_0x2490;
              }
              if (fStack_30 < *(float *)&param_1->field_0x327c) {
                fStack_30 = *(float *)&param_1->field_0x327c + (float)_DAT_005d8e9c;
              }
              iVar2 = 0;
              do {
                fStack_20 = (float)iVar2 * _DAT_005d8e78 * _DAT_005d8e7c;
                fStack_14 = (float)iVar2;
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                          (g_CDemonSetPtr,(CDemonActor *)param_1);
                fVar7 = (float10)fcos((float10)fStack_20);
                fVar8 = (float10)fsin((float10)fStack_20);
                fStack_98 = (float)core_setcolid_cpp_FUN_0053de10
                                             (g_CDemonSetPtr,*(uint *)&param_1->field_0x20,
                                              *(uint *)&param_1->field_0x28,
                                              (float)(fVar8 * (float10)_DAT_005d8e84),
                                              (float)(fVar7 * (float10)_DAT_005d8e84),
                                              *(uint *)&param_1->field_0x3270,
                                              *(float *)&param_1->field_0x24 +
                                              *(float *)&param_1->field_0x327c,
                                              *(float *)&param_1->field_0x24 + fStack_30);
                fStack_14 = fStack_98;
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                if (fStack_98 < 1.0) break;
                iVar2 = iVar2 + 1;
              } while (iVar2 < 4);
              if (iVar2 < 4) {
                *(uint *)&param_1->field_0xcde4 = 0;
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)pCStack_34,0,1);
              }
            }
          }
          break;
        case 0xc:
          iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
          if (iVar2 == 0) {
            iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            fStack_2b0 = *(float *)(iVar2 + 0x20) - *pfStack_3c;
            fStack_2ac = *(float *)(iVar2 + 0x24) - pfStack_3c[1];
            fStack_2a8 = *(float *)(iVar2 + 0x28) - pfStack_3c[2];
            afStack_204[2] = fStack_2b0;
            afStack_204[(uint)bVar6 * -2 + 3] = afStack_2d0[(uint)bVar6 * -2 + 9];
            afStack_204[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                 afStack_2d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
            core_vecdir_cpp_FUN_00576250(afStack_204 + 2);
            fStack_100 = fStack_1a8;
            afStack_fc[(uint)bVar6 * -2] = afStack_1bc[(uint)bVar6 * -2 + 6];
            afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_1bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
            fStack_64 = (float)core_actor_cpp_FUN_0040cfa0
                                         (afStack_fc[0] - *(float *)&param_1->field_0x34);
            fStack_14 = fStack_64;
            fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                         (fStack_100 - *(float *)&param_1->field_0x30);
            *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_64;
            *(float *)&param_1->field_0x30 = *(float *)&param_1->field_0x30 + fStack_14;
            core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)param_1);
          }
          iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
          if ((iVar2 != 0) &&
             (fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)pCStack_34),
             (float)_DAT_005d8e8c < fStack_14)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)pCStack_34,0,1);
          }
          break;
        case 0xd:
        case 0xf:
        case 0x10:
          if (*(int *)&param_1[1].field_0x14 == 0) {
            *(uint *)&param_1[1].field_0x14 = 1;
            *(uint *)&param_1[1].field_0x10 = 0;
          }
          break;
        case 0xe:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
          if (*(int *)&param_1[1].field_0x14 == 1) {
            *(uint *)&param_1[1].field_0x14 = 0;
            *(uint *)&param_1[1].field_0x10 = 0;
            if (*(int *)&param_1[1].field_0x40 == 0) {
              *(uint *)&param_1[1].field_0x28 = 0x40800000;
              *(uint *)&param_1[1].field_0x24 = 1;
            }
          }
        }
      }
      else {
        uVar1 = *(uint *)&param_1->field_0x273c;
        if (uVar1 < 2) {
          if (uVar1 == 1) {
LAB_005901a2:
            iVar2 = 1;
          }
          else {
LAB_00590865:
            iVar2 = 0;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)pCStack_34,iVar2,1);
        }
        else {
          if (uVar1 < 3) goto LAB_005901a2;
          if (uVar1 != 3) goto LAB_00590865;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)pCStack_34,0,1);
          engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1)
          ;
        }
        switch(uVar5) {
        case 0xd:
        case 0xf:
        case 0x10:
          if (*(int *)&param_1[1].field_0x14 == 0) {
            *(uint *)&param_1[1].field_0x14 = 1;
            *(uint *)&param_1[1].field_0x10 = 0;
          }
          break;
        case 0xe:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
          if (*(int *)&param_1[1].field_0x14 == 1) {
            *(uint *)&param_1[1].field_0x14 = 0;
            *(uint *)&param_1[1].field_0x10 = 0;
            if (*(int *)&param_1[1].field_0x40 == 0) {
              *(uint *)&param_1[1].field_0x28 = 0x40800000;
              *(uint *)&param_1[1].field_0x24 = 1;
            }
          }
        }
        pfStack_38[2] = 0.0;
        pfStack_38[1] = pfStack_38[2];
        *pfStack_38 = pfStack_38[1];
      }
      if (0.0 < *(float *)&param_1->field_0xcde0) {
        *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
      }
      iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
      if (iVar2 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)pCStack_34,0xc,1);
      }
      core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
      afStack_270[2] = *pfStack_54 * param_2;
      afStack_270[3] = pfStack_54[1] * param_2;
      fStack_260 = pfStack_54[2] * param_2;
      fStack_16c = *pfStack_54 * param_2;
      afStack_1bc[(uint)bVar6 * -2 + 0x15] = afStack_270[(uint)bVar6 * -2 + 3];
      afStack_1bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           afStack_270[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      fStack_190 = fStack_16c + *pfStack_40;
      fStack_18c = fStack_168 + pfStack_40[1];
      fStack_188 = fStack_164 + pfStack_40[2];
      fStack_130 = fStack_16c + *pfStack_40;
      afStack_144[(uint)bVar6 * -2 + 6] = afStack_1bc[(uint)bVar6 * -2 + 0xc];
      pfVar11 = pfStack_40;
      afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_1bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
      fStack_238 = fStack_130 + *pfStack_38;
      afStack_234[0] = fStack_12c + pfStack_38[1];
      afStack_234[1] = fStack_128 + pfStack_38[2];
      fStack_124 = fStack_130 + *pfStack_38;
      afStack_120[(uint)bVar6 * -2] = afStack_234[(uint)bVar6 * -2];
      afStack_120[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_234[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      pfVar11[2] = 0.0;
      pfVar11[1] = pfVar11[2];
      *pfVar11 = pfVar11[1];
      pfStack_38[2] = 0.0;
      pfStack_38[1] = pfStack_38[2];
      *pfStack_38 = pfStack_38[1];
      core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)&fStack_124);
    }
    core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(pCStack_34);
    core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  }
  return;
}
