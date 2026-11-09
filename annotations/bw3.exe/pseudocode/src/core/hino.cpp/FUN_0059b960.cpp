// Name: core_hino.cpp_FUN_0059b960
// Address: 0059b960
// Address Range: [[0059b960, 0059cff3]]
// Convention: unknown
// Signature: void core_hino_cpp_FUN_0059b960(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hino_cpp_FUN_0059b960(CEnemy *param_1,float param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  SMotion *pSVar7;
  int iVar8;
  CPathMap *path_map;
  char *pcVar9;
  float *pfVar10;
  char *pcVar11;
  byte bVar12;
  float afStackY_129c [979];
  uint uVar13;
  uint uVar14;
  CVector3f *direction;
  uint uVar15;
  float fVar16;
  uint uVar17;
  EBloodType blood_type;
  float max_distance;
  uint uVar18;
  SDamageInfo aSStack_32c [4];
  uint uStack_328;
  uint uStack_2fc;
  SDamageInfo aSStack_2f0 [4];
  uint uStack_2ec;
  uint uStack_2c0;
  float fStack_2b4;
  float afStack_2b0 [5];
  float fStack_29c;
  float fStack_298;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  uint uStack_280;
  uint uStack_27c;
  uint uStack_278;
  uint uStack_274;
  uint uStack_270;
  float fStack_26c;
  float fStack_268;
  uint uStack_264;
  float fStack_260;
  float afStack_25c [5];
  float fStack_248;
  float afStack_244 [4];
  float fStack_234;
  float afStack_230 [3];
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float afStack_208 [2];
  CVector3f CStack_200;
  float fStack_1f4;
  float afStack_1f0 [5];
  uint uStack_1dc;
  float afStack_1d8 [4];
  float fStack_1c8;
  uint uStack_1c4;
  float afStack_1c0 [5];
  CVector3f CStack_1ac;
  uint uStack_1a0;
  float afStack_19c [5];
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float afStack_178 [5];
  float fStack_164;
  float fStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  uint uStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint uStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float afStack_128 [3];
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  byte auStack_110 [12];
  float fStack_104;
  float afStack_100 [5];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float afStack_a4 [3];
  double dStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  int iStack_6c;
  float fStack_68;
  CMotionController *pCStack_64;
  float fStack_60;
  CMotionController *pCStack_5c;
  CMotionController *pCStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar12 = 0;
  iVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar6 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_7c = param_2 * *(float *)&param_1->field_0xcdcc;
  pCStack_58 = (CMotionController *)&param_1->field_0x158;
  while (0.0 < fStack_7c) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_58,&fStack_7c);
    switch(iVar6) {
    case 0x5dc:
      iVar8 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbf4c + iVar6 * 4));
      if (iVar8 == 0) {
        uVar13 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                           (param_1,"hino_stand_fly.wav");
        *(uint *)(&param_1->field_0xbf4c + iVar6 * 4) = uVar13;
      }
      break;
    case 0x5dd:
      iVar8 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbf4c + iVar6 * 4));
      if (iVar8 == 0) {
        uVar13 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                           (param_1,"hino_walk_fly.wav");
        *(uint *)(&param_1->field_0xbf4c + iVar6 * 4) = uVar13;
      }
      break;
    case 0x5de:
      iVar8 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbf4c + iVar6 * 4));
      if (iVar8 == 0) {
        uVar13 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                           (param_1,"hino_run_fly.wav");
        *(uint *)(&param_1->field_0xbf4c + iVar6 * 4) = uVar13;
      }
      break;
    case 0x5df:
      iVar8 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbf4c + iVar6 * 4));
      if (iVar8 == 0) {
        uVar13 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                           (param_1,"hino_reverse.wav");
        *(uint *)(&param_1->field_0xbf4c + iVar6 * 4) = uVar13;
      }
      break;
    case 0x5e0:
      iVar8 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbf4c + iVar6 * 4));
      if (iVar8 == 0) {
        uVar13 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                           (param_1,"hino_attack_fly.wav");
        *(uint *)(&param_1->field_0xbf4c + iVar6 * 4) = uVar13;
      }
      break;
    case 0x5e1:
      iVar8 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbf4c + iVar6 * 4));
      if (iVar8 == 0) {
        uVar13 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                           (param_1,"hino_attack_fly2.wav");
        *(uint *)(&param_1->field_0xbf4c + iVar6 * 4) = uVar13;
      }
      break;
    case 0x5e2:
      iVar8 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbf4c + iVar6 * 4));
      if (iVar8 == 0) {
        uVar13 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                           (param_1,"hino_damage_fly.wav");
        *(uint *)(&param_1->field_0xbf4c + iVar6 * 4) = uVar13;
      }
      break;
    case 0x5e3:
      iVar8 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbf4c + iVar6 * 4));
      if (iVar8 == 0) {
        uVar13 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                           (param_1,"hino_die_fly.WAV");
        *(uint *)(&param_1->field_0xbf4c + iVar6 * 4) = uVar13;
      }
      break;
    case 0x5e4:
      iVar8 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbf4c + iVar6 * 4));
      if (iVar8 == 0) {
        uVar13 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                           (param_1,"hino_warning.wav");
        *(uint *)(&param_1->field_0xbf4c + iVar6 * 4) = uVar13;
      }
      break;
    case 0x5e5:
      iVar8 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbf4c + iVar6 * 4));
      if (iVar8 == 0) {
        uVar13 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                           (param_1,"hino_big_attack.wav");
        *(uint *)(&param_1->field_0xbf4c + iVar6 * 4) = uVar13;
      }
      break;
    case 0x5e6:
      iVar8 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbf4c + iVar6 * 4));
      if (iVar8 == 0) {
        uVar13 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                           (param_1,"hino_appear.wav");
        *(uint *)(&param_1->field_0xbf4c + iVar6 * 4) = uVar13;
      }
      break;
    case 0x5e7:
      iVar8 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbf4c + iVar6 * 4));
      if (iVar8 == 0) {
        uVar13 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                           (param_1,"hino_disappear.wav");
        *(uint *)(&param_1->field_0xbf4c + iVar6 * 4) = uVar13;
      }
      break;
    default:
      core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,iVar6);
    }
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
  pCStack_5c = (CMotionController *)&param_1->field_0x158;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_5c);
  iVar6 = *(int *)(pSVar7 + 0x24);
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"State: %d\n",iVar6);
  iStack_6c = iVar6;
  iVar8 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
  if (iVar8 == 0) {
    switch(iVar6) {
    case 0:
      if (*(float *)&param_1[1].field_0x14 <= 0.0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        iVar6 = *(int *)&param_1->field_0xcde4;
        if (iVar6 == 0) {
          iVar6 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
          if (iVar6 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_5c,1,1);
          }
        }
        else {
          fStack_bc = *(float *)(iVar6 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_b8 = *(float *)(iVar6 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_b4 = *(float *)(iVar6 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_260 = fStack_bc;
          afStack_25c[(uint)bVar12 * -2] = afStack_100[(uint)bVar12 * -2 + 0x12];
          afStack_25c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13];
          fStack_84 = SQRT(afStack_25c[1] * afStack_25c[1] +
                           fStack_260 * fStack_260 + afStack_25c[0] * afStack_25c[0]);
          fStack_78 = fStack_84;
          if (fStack_84 < 0x40600000) {
            core_vecdir_cpp_FUN_00576250(&fStack_260);
            uStack_1c4 = afStack_1c0[2];
            afStack_1c0[(uint)bVar12 * -2] = afStack_1c0[(uint)bVar12 * -2 + 3];
            afStack_1c0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 afStack_1c0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
            fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                         (afStack_1c0[0] - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005d9e44) {
              iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
              if (iVar6 < 0x32) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_5c,4,1);
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_5c,5,1);
              }
              break;
            }
          }
          if (fStack_78 < *(float *)&param_1->field_0xcddc) {
            if ((0.0 < *(float *)&param_1[1].field_0x10) ||
               (iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), iVar6 < 0x4c)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,2,1);
              *(uint *)&param_1->field_0xcde0 = 0;
            }
            else {
              *(uint *)&param_1[1].field_0xc = 0x40000000;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,0xc,1);
              *(uint *)&param_1[1].field_0x10 = 0x41500000;
              *(uint *)&param_1->field_0xcde0 = 0;
            }
          }
        }
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      fVar16 = 0x40600000;
      pCStack_64 = (CMotionController *)&param_1->field_0x158;
      if (*(int *)&param_1->field_0xcde4 == 0) {
        iVar6 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_64,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_64,1,1);
        }
      }
      else {
        fStack_70 = 0x40600000;
        *(uint *)&param_1->field_0x24a4 = 0;
        auStack_110._8_4_ = fVar16 + (float)_DAT_005d9e34;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        auStack_110._0_4_ = 0;
        auStack_110._4_4_ = 0;
        max_distance = 0.17453292;
        direction = (CVector3f *)auStack_110;
        fVar16 = 0.5;
        fStack_14 = (float)auStack_110._8_4_;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                             (*(int *)&param_1->field_0xcde4);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),path_map,direction,
                           fVar16,max_distance);
        if (-1 < iVar6) {
          iVar6 = *(int *)&param_1->field_0xcde4;
          fStack_218 = *(float *)&param_1->field_0x20 - *(float *)(iVar6 + 0x20);
          fStack_214 = *(float *)&param_1->field_0x24 - *(float *)(iVar6 + 0x24);
          fStack_210 = *(float *)&param_1->field_0x28 - *(float *)(iVar6 + 0x28);
          fStack_14c = fStack_218;
          afStack_178[(uint)bVar12 * -2 + 0xc] = afStack_244[(uint)bVar12 * -2 + 0xc];
          afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
               afStack_244[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
          fStack_60 = SQRT(fStack_144 * fStack_144 + fStack_14c * fStack_14c);
          uStack_148 = 0;
          fStack_68 = fStack_60;
          if (((_DAT_005e81b8 < fStack_60) && (fStack_60 < (float)_DAT_005d9e3c)) &&
             (iStack_6c != 2)) {
            *(uint *)&param_1->field_0xcde0 = 0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_64,2,1);
          }
          if ((fStack_68 <= fStack_70) && (*(float *)&param_1->field_0xcde0 <= 0.0)) {
            iVar6 = *(int *)&param_1->field_0xcde4;
            fStack_c8 = *(float *)(iVar6 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_c4 = *(float *)(iVar6 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_c0 = *(float *)(iVar6 + 0x28) - *(float *)&param_1->field_0x28;
            afStack_128[0] = fStack_c8;
            afStack_178[(uint)bVar12 * -2 + 0x15] = afStack_100[(uint)bVar12 * -2 + 0xf];
            afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16] =
                 afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10];
            core_vecdir_cpp_FUN_00576250(afStack_178 + 0x14);
            uStack_1dc = uStack_1a0;
            afStack_1d8[(uint)bVar12 * -2] = afStack_19c[(uint)bVar12 * -2];
            afStack_1d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 afStack_19c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                         (afStack_1d8[0] - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005d9e44) {
              iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
              if (iVar6 == 0) {
                iVar6 = 5;
              }
              else {
                iVar6 = 4;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,iVar6,1);
              *(uint *)&param_1->field_0xcde0 = 0x40000000;
            }
          }
          if (fStack_68 < (float)_DAT_005d9e3c) {
            if ((0.0 < *(float *)&param_1[1].field_0x10) ||
               (iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), iVar6 < 0x4c)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,2,1);
              *(uint *)&param_1->field_0xcde0 = 0;
            }
            else {
              *(uint *)&param_1[1].field_0xc = 0x40000000;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,0xc,1);
              *(uint *)&param_1[1].field_0x10 = 0x41500000;
            }
          }
          if ((float)_DAT_005d9e3c < fStack_68) {
            *(uint *)&param_1[1].field_0xc = 0x40000000;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,0xc,1);
            *(uint *)&param_1[1].field_0x10 = 0x41500000;
          }
        }
      }
      break;
    case 4:
    case 5:
      (**(code **)(*(int *)(*(int *)&param_1->field_0x25b0 + 0x154) + 0x78))
                (*(int *)&param_1->field_0x25b0,2);
      break;
    case 8:
      if ((*(int *)&param_1->field_0xcdd0 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_0054dbd0(pCStack_5c,0);
        pfVar10 = afStack_100 + 0x17;
        afStack_a4[0] = afStack_19c[2];
        afStack_100[(uint)bVar12 * -2 + 0x18] = afStack_19c[(uint)bVar12 * -2 + 3];
        afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19] =
             afStack_19c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
        core_actor_cpp_FUN_00408b80(param_1,pfVar10);
        blood_type = BLOOD_TYPE_RED;
        CStack_1ac._0_4_ = CStack_200._0_4_;
        *(uint *)((int)&CStack_1ac + (uint)bVar12 * -8 + 4) =
             *(uint *)((int)&CStack_200 + (uint)bVar12 * -8 + 4);
        *(uint *)((int)&CStack_1ac + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             *(uint *)((int)&CStack_200 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        core_gore_cpp_FUN_004cec40(g_CGorePtr,&CStack_1ac,blood_type);
        *(uint *)&param_1->field_0xcdd0 = 1;
      }
      break;
    case 9:
      if (*(int *)&param_1[1].field_0x1c == 0) {
        uVar13 = core_hino_cpp_FUN_0059d000(param_1);
        *(uint *)&param_1[1].field_0x20 = uVar13;
        if (*0x02D0C1A0 == 0) {
          iVar6 = *(int *)&g_CDemonSetPtr->field_0x15aeb8;
          if (&uStack_278 != (uint *)(&g_CDemonSetPtr->field_0x104 + iVar6 * 0x1a4)) {
            uStack_278 = *(uint *)(&g_CDemonSetPtr->field_0x104 + iVar6 * 0x1a4);
            uStack_274 = *(uint *)(&g_CDemonSetPtr->field_0x108 + iVar6 * 0x1a4);
            uStack_270 = *(uint *)(&g_CDemonSetPtr->field_0x10c + iVar6 * 0x1a4);
          }
          if (afStack_2b0 + 0xb != (float *)(&g_CDemonSetPtr->field_0x110 + iVar6 * 0x1a4)) {
            fStack_284 = *(float *)(&g_CDemonSetPtr->field_0x110 + iVar6 * 0x1a4);
            uStack_280 = *(uint *)(&g_CDemonSetPtr->field_0x114 + iVar6 * 0x1a4);
            uStack_27c = *(uint *)(&g_CDemonSetPtr->field_0x118 + iVar6 * 0x1a4);
          }
          core_weather_cpp_FUN_0057d050(0x02D0C1A0,5);
          core_weather_cpp_FUN_0057d1a0(0x02D0C1A0,&uStack_278,afStack_2b0 + 0xb);
        }
        else {
          core_weather_cpp_FUN_0057d050(0x02D0C1A0,5);
        }
        *(uint *)&param_1[1].field_0x1c = 1;
      }
      core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
      if (*(float *)&param_1[1].field_0xc <= 0.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,10,1);
        *(uint *)&param_1[1].field_0xc = 0x40000000;
      }
      else {
        *(float *)&param_1[1].field_0xc = *(float *)&param_1[1].field_0xc - param_2;
      }
      break;
    case 10:
      iStack_38 = 0;
      for (iStack_34 = 0; iStack_34 < *(int *)&g_CDemonSetPtr->field_0x14d164;
          iStack_34 = iStack_34 + 1) {
        pcVar9 = (char *)core_actor_cpp_castToClassHash_FUN_0040c840
                                   (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iStack_38),
                                    g_CWayPointClassInfo.name_hash);
        if (pcVar9 != (char *)0x0) {
          iVar6 = _strcmp(pcVar9,"CenterPoint");
          if (iVar6 == 0) {
            iStack_2c = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (*(uint *)&param_1->field_0x25b0,
                                   g_CWeaponClassInfo.name_hash);
            iStack_20 = iStack_2c;
            if (pcVar9 != (char *)0x0) {
              (**(code **)(*(int *)(iStack_2c + 0x154) + 0xe0))(iStack_2c);
              iVar6 = iStack_20;
              pfVar10 = afStack_178 + 2;
              afStack_178[2] = afStack_100[2];
              afStack_178[(uint)bVar12 * -2 + 3] = afStack_100[(uint)bVar12 * -2 + 3];
              afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
                   afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
              core_actor_cpp_FUN_00408b80(iVar6,pfVar10);
              fStack_140 = fStack_b0;
              afStack_178[(uint)bVar12 * -2 + 0xf] = afStack_100[(uint)bVar12 * -2 + 0x15];
              afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
                   afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16];
              if (&fStack_26c != afStack_178 + 0xe) {
                fStack_26c = fStack_140;
                fStack_268 = fStack_13c;
                uStack_264 = uStack_138;
              }
              (**(code **)(*(int *)(iStack_2c + 0x154) + 0xe0))(iStack_2c);
              afStack_230[0] = afStack_2b0[2];
              afStack_244[(uint)bVar12 * -2 + 6] = afStack_2b0[(uint)bVar12 * -2 + 3];
              afStack_244[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
                   afStack_2b0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
              core_actor_cpp_FUN_00408b80(iStack_2c,afStack_244 + 5);
              fStack_11c = fStack_2b4;
              afStack_178[(uint)bVar12 * -2 + 0x18] = afStack_2b0[(uint)bVar12 * -2];
              afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19] =
                   afStack_2b0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
              if (afStack_1d8 + 2 != afStack_178 + 0x17) {
                afStack_1d8[2] = fStack_11c;
                afStack_1d8[3] = fStack_118;
                fStack_1c8 = fStack_114;
              }
              fStack_268 = fStack_268 + _DAT_005d9e28;
            }
          }
          else {
            pcVar11 = strstr(pcVar9,"Platform");
            if ((pcVar11 == (char *)0x0) || (*(int *)&param_1[1].field_0x20 == 0)) {
              pcVar11 = strstr(pcVar9,"Bridge");
              if ((pcVar11 != (char *)0x0) && (*(int *)&param_1[1].field_0x20 == 0)) {
                fStack_48 = (float)core_actor_cpp_FUN_0040ce40(0xbf800000,0x3f800000);
                fStack_14 = fStack_48;
                afStack_25c[4] = (float)core_actor_cpp_FUN_0040ce40(0xbf800000,0x3f800000);
                afStack_25c[2] = fStack_48;
                afStack_25c[3] = 0.0;
                if (afStack_2b0 + 8 != afStack_25c + 2) {
                  fStack_290 = fStack_48;
                  fStack_28c = 0.0;
                  fStack_288 = afStack_25c[4];
                }
                fStack_50 = SQRT(fStack_288 * fStack_288 +
                                 fStack_290 * fStack_290 + fStack_28c * fStack_28c);
                if (fStack_50 <= 0.0) {
                  fStack_28c = 0.0;
                  fStack_290 = 0.0;
                  fStack_288 = 0.0;
                }
                else {
                  fVar16 = 1.0 / fStack_50;
                  fStack_290 = fStack_290 * fVar16;
                  fStack_28c = fStack_28c * fVar16;
                  fStack_288 = fStack_288 * fVar16;
                }
                fStack_54 = afStack_25c[4];
                fStack_14 = afStack_25c[4];
                fStack_28 = (float)core_actor_cpp_FUN_0040ce40(0,0x40a00000);
                fStack_290 = fStack_290 * fStack_28 + *(float *)(pcVar9 + 0x20);
                fStack_28c = fStack_28c * fStack_28 + *(float *)(pcVar9 + 0x24);
                fStack_288 = fStack_288 * fStack_28 + *(float *)(pcVar9 + 0x28);
                if (afStack_1d8 + 2 != afStack_2b0 + 8) {
                  afStack_1d8[2] = fStack_290;
                  afStack_1d8[3] = fStack_28c;
                  fStack_1c8 = fStack_288;
                }
                fStack_14 = fStack_28;
                core_fire_cpp_FUN_004a3bd0(0x01C73654,afStack_1d8 + 2,0x41f00000,1,0);
                iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
                fStack_248 = *(float *)(iVar6 + 0x20) - *(float *)(pcVar9 + 0x20);
                afStack_244[0] = *(float *)(iVar6 + 0x24) - *(float *)(pcVar9 + 0x24);
                afStack_244[1] = *(float *)(iVar6 + 0x28) - *(float *)(pcVar9 + 0x28);
                fStack_158 = fStack_248;
                afStack_178[(uint)bVar12 * -2 + 9] = afStack_244[(uint)bVar12 * -2];
                afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
                     afStack_244[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
                fStack_8c = fStack_150 * fStack_150 +
                            fStack_158 * fStack_158 + fStack_154 * fStack_154;
                fStack_88 = (float)(((int)fStack_8c >> 1) + _DAT_01d1a0a4);
                if (fStack_88 <= (float)_DAT_005d9e54) {
                  core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_32c);
                  uStack_328 = 0x41c80000;
                  uStack_2fc = 0x6a;
                  iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
                  (**(code **)(*(int *)(iVar6 + 0x154) + 0x108))(iVar6,aSStack_32c);
                }
              }
            }
            else {
              fStack_4c = (float)core_actor_cpp_FUN_0040ce40(0xbf800000,0x3f800000);
              fStack_14 = fStack_4c;
              afStack_1f0[4] = (float)core_actor_cpp_FUN_0040ce40(0xbf800000,0x3f800000);
              afStack_1f0[2] = fStack_4c;
              afStack_1f0[3] = 0.0;
              if (afStack_19c + 5 != afStack_1f0 + 2) {
                fStack_188 = fStack_4c;
                fStack_184 = 0.0;
                fStack_180 = afStack_1f0[4];
              }
              fStack_40 = SQRT(fStack_180 * fStack_180 +
                               fStack_188 * fStack_188 + fStack_184 * fStack_184);
              if (fStack_40 <= 0.0) {
                fStack_184 = 0.0;
                fStack_188 = 0.0;
                fStack_180 = 0.0;
              }
              else {
                fVar16 = 1.0 / fStack_40;
                fStack_188 = fStack_188 * fVar16;
                fStack_184 = fStack_184 * fVar16;
                fStack_180 = fStack_180 * fVar16;
              }
              fStack_44 = afStack_1f0[4];
              fStack_14 = afStack_1f0[4];
              fStack_24 = (float)core_actor_cpp_FUN_0040ce40(0,0x40c00000);
              fStack_188 = fStack_188 * fStack_24 + *(float *)(pcVar9 + 0x20);
              fStack_184 = fStack_184 * fStack_24 + *(float *)(pcVar9 + 0x24);
              fStack_180 = fStack_180 * fStack_24 + *(float *)(pcVar9 + 0x28);
              if (afStack_1d8 + 2 != afStack_19c + 5) {
                afStack_1d8[2] = fStack_188;
                afStack_1d8[3] = fStack_184;
                fStack_1c8 = fStack_180;
              }
              fStack_14 = fStack_24;
              core_fire_cpp_FUN_004a3bd0(0x01C73654,afStack_1d8 + 2,0x41f00000,1,0);
              iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              afStack_244[2] = *(float *)(iVar6 + 0x20) - *(float *)(pcVar9 + 0x20);
              afStack_244[3] = *(float *)(iVar6 + 0x24) - *(float *)(pcVar9 + 0x24);
              fStack_234 = *(float *)(iVar6 + 0x28) - *(float *)(pcVar9 + 0x28);
              fStack_1f4 = afStack_244[2];
              afStack_1f0[(uint)bVar12 * -2] = afStack_244[(uint)bVar12 * -2 + 3];
              afStack_1f0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                   afStack_244[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
              fStack_1c = afStack_1f0[1] * afStack_1f0[1] +
                          fStack_1f4 * fStack_1f4 + afStack_1f0[0] * afStack_1f0[0];
              fStack_18 = (float)(((int)fStack_1c >> 1) + _DAT_01d1a0a4);
              if (fStack_18 <= (float)_DAT_005d9e5c) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_2f0);
                uStack_2ec = 0x41c80000;
                uStack_2c0 = 0x6a;
                iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
                (**(code **)(*(int *)(iVar6 + 0x154) + 0x108))(iVar6,aSStack_2f0);
              }
            }
          }
        }
        iStack_38 = iStack_38 + 4;
      }
      fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
      piVar5 = 0x02D0C1A0;
      if ((float)_DAT_005d9e4c < fStack_14) {
        *(uint *)&param_1[1].field_0x1c = 0;
        core_weather_cpp_FUN_0057d050(piVar5,0);
      }
      break;
    case 0xb:
      fStack_14 = core_motion_cpp_FUN_004fc930(pCStack_5c);
      if (fStack_14 < (float)_DAT_005d9e2c) {
        uVar18 = 0xffff;
        uVar17 = 0x3e800000;
        pfVar10 = (float *)((int)param_1 + (uint)bVar12 * -8 + 0x24);
        fStack_29c = *(float *)&param_1->field_0x20;
        afStack_2b0[(uint)bVar12 * -2 + 6] = *pfVar10;
        afStack_2b0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] = pfVar10[(uint)bVar12 * -2 + 1];
        uVar15 = 3;
        uVar14 = 0x40700000;
        uVar13 = 0x3f400000;
        pfVar10 = (float *)((int)param_1 + (uint)bVar12 * -8 + 0x24);
        fStack_17c = *(float *)&param_1->field_0x20;
        afStack_178[(uint)bVar12 * -2] = *pfVar10;
        afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] = pfVar10[(uint)bVar12 * -2 + 1];
        afStack_178[0] = afStack_178[0] + _DAT_005d9e24;
        fStack_298 = fStack_298 + _DAT_005d9e28;
        core_fire_cpp_FUN_004a3c50
                  (0x01C73654,afStack_19c + 8,afStack_2b0 + 5,0,uVar13,uVar14,uVar15,uVar17,uVar18
                  );
      }
      *(uint *)&param_1[1].field_0x18 = 1;
      *(uint *)&param_1[1].field_0x14 = 0x3e800000;
      break;
    case 0xc:
      fStack_14 = core_motion_cpp_FUN_004fc930(pCStack_5c);
      if (fStack_14 < (float)_DAT_005d9e1c) {
        uVar18 = 0xffff;
        uVar17 = 0x3e800000;
        pfVar10 = (float *)((int)param_1 + (uint)bVar12 * -8 + 0x24);
        fStack_164 = *(float *)&param_1->field_0x20;
        afStack_178[(uint)bVar12 * -2 + 6] = *pfVar10;
        afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] = pfVar10[(uint)bVar12 * -2 + 1];
        uVar15 = 3;
        uVar14 = 0x40700000;
        uVar13 = 0x3f400000;
        pfVar10 = (float *)((int)param_1 + (uint)bVar12 * -8 + 0x24);
        fStack_d4 = *(float *)&param_1->field_0x20;
        afStack_100[(uint)bVar12 * -2 + 0xc] = *pfVar10;
        afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] = pfVar10[(uint)bVar12 * -2 + 1];
        fStack_160 = fStack_160 + _DAT_005d9e28;
        fStack_d0 = fStack_d0 + _DAT_005d9e24;
        core_fire_cpp_FUN_004a3c50
                  (0x01C73654,afStack_100 + 0xb,afStack_178 + 5,0,uVar13,uVar14,uVar15,uVar17,
                   uVar18);
      }
      *(uint *)&param_1[1].field_0x18 = 0;
      *(uint *)&param_1[1].field_0x14 = 0x3e800000;
    }
    goto switchD_0059ceee_caseD_3;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0059ba56:
      iVar6 = 1;
    }
    else {
LAB_0059bf31:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,iVar6,1);
  }
  else {
    if (uVar1 < 3) goto LAB_0059ba56;
    if (uVar1 != 3) goto LAB_0059bf31;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_0059ceee_caseD_3:
  if (0.0 < *(float *)&param_1->field_0xcde0) {
    *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
  }
  if (0.0 < *(float *)&param_1[1].field_0x10) {
    *(float *)&param_1[1].field_0x10 = *(float *)&param_1[1].field_0x10 - param_2;
  }
  dStack_98 = (double)*(float *)&param_1[1].field_0x14;
  if (0.0 < dStack_98) {
    if (((*(int *)&param_1[1].field_0x18 != 0) || (dStack_98 <= 0.0)) ||
       (fStack_74 = *(float *)&param_1[1].field_0x14 - param_2, 0.0 < fStack_74)) {
      *(float *)&param_1[1].field_0x14 = *(float *)&param_1[1].field_0x14 - param_2;
    }
    else {
      iStack_3c = 0;
      *(float *)&param_1[1].field_0x14 = fStack_74;
      for (iStack_30 = 0; iStack_30 < *(int *)&g_CDemonSetPtr->field_0x14d164;
          iStack_30 = iStack_30 + 1) {
        pcVar9 = (char *)core_actor_cpp_castToClassHash_FUN_0040c840
                                   (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iStack_3c),
                                    g_CWayPointClassInfo.name_hash);
        if ((pcVar9 != (char *)0x0) &&
           (iVar6 = _strcmp(pcVar9,"CenterPoint"), iVar6 == 0)) {
          pcVar11 = pcVar9 + 0x20;
          core_fire_cpp_FUN_004a3c50
                    (0x01C73654,&param_1->field_0x20,pcVar11,0,0x3f400000,0x3f400000,3,0x3e800000,
                     0xffff);
          cVar2 = pcVar11[1];
          cVar3 = pcVar11[2];
          cVar4 = pcVar11[3];
          param_1->field_0x20 = pcVar11[0];
          param_1->field_0x21 = cVar2;
          param_1->field_0x22 = cVar3;
          param_1->field_0x23 = cVar4;
          cVar2 = pcVar9[0x25];
          cVar3 = pcVar9[0x26];
          cVar4 = pcVar9[0x27];
          param_1->field_0x24 = pcVar9[0x24];
          param_1->field_0x25 = cVar2;
          param_1->field_0x26 = cVar3;
          param_1->field_0x27 = cVar4;
          cVar2 = pcVar9[0x29];
          cVar3 = pcVar9[0x2a];
          cVar4 = pcVar9[0x2b];
          param_1->field_0x28 = pcVar9[0x28];
          param_1->field_0x29 = cVar2;
          param_1->field_0x2a = cVar3;
          param_1->field_0x2b = cVar4;
          cVar2 = pcVar9[0x2d];
          cVar3 = pcVar9[0x2e];
          cVar4 = pcVar9[0x2f];
          param_1->field_0x2c = pcVar9[0x2c];
          param_1->field_0x2d = cVar2;
          param_1->field_0x2e = cVar3;
          param_1->field_0x2f = cVar4;
        }
        iStack_3c = iStack_3c + 4;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,0xb,1);
    }
  }
  iVar6 = core_charactr_cpp_FUN_0042ccf0((CCharacter *)param_1);
  if (iVar6 != 0) {
    if ((iStack_6c == 8) || (iStack_6c == 7)) {
      core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
    }
    fStack_e0 = *(float *)&param_1->field_0x2518 * param_2;
    fStack_dc = *(float *)&param_1->field_0x251c * param_2;
    fStack_d8 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_224 = fStack_e0;
    afStack_244[(uint)bVar12 * -2 + 9] = afStack_100[(uint)bVar12 * -2 + 9];
    afStack_244[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
         afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
    fStack_ec = fStack_224 + *(float *)&param_1->field_0x250c;
    fStack_e8 = fStack_220 + *(float *)&param_1->field_0x2510;
    fStack_e4 = fStack_21c + *(float *)&param_1->field_0x2514;
    fStack_104 = fStack_ec;
    afStack_100[(uint)bVar12 * -2] = afStack_100[(uint)bVar12 * -2 + 6];
    afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
    fStack_134 = fStack_104 + *(float *)&param_1->field_0x249c;
    fStack_130 = afStack_100[0] + *(float *)&param_1->field_0x24a0;
    fStack_12c = afStack_100[1] + *(float *)&param_1->field_0x24a4;
    fStack_20c = fStack_134;
    afStack_208[(uint)bVar12 * -2] = afStack_178[(uint)bVar12 * -2 + 0x12];
    afStack_208[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)&fStack_20c);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  return;
}
