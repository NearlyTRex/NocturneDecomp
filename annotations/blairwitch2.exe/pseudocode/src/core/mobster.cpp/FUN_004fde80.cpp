// Name: core_mobster.cpp_FUN_004fde80
// Address: 004fde80
// Address Range: [[004fde80, 004fef25]]
// Convention: unknown
// Signature: void core_mobster_cpp_FUN_004fde80(CMobster *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mobster_cpp_FUN_004fde80(CMobster *param_1,float param_2)

{
  byte *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  CMobster *pCVar5;
  int iVar6;
  CPathMap *pCVar7;
  byte bVar8;
  float afStackY_11d8 [982];
  float *pfVar9;
  CGore *this_ptr;
  CVector3f *pCVar10;
  float fVar11;
  SDamageInfo *pSVar12;
  uint uVar13;
  uint *puVar14;
  EBloodType blood_type;
  float fVar15;
  SDamageInfo aSStack_268 [4];
  uint uStack_264;
  CMobster *pCStack_234;
  CMobster *pCStack_230;
  SDamageInfo aSStack_22c [4];
  float fStack_228;
  CMobster *pCStack_1f8;
  CMobster *pCStack_1f4;
  float fStack_1f0;
  float afStack_1ec [5];
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  CVector3f CStack_1cc;
  uint uStack_1c0;
  float afStack_1bc [2];
  CVector3f CStack_1b4;
  float fStack_1a8;
  float afStack_1a4 [5];
  CVector3f CStack_190;
  float fStack_184;
  float afStack_180 [5];
  CVector3f CStack_16c;
  uint uStack_160;
  float afStack_15c [2];
  CVector3f CStack_154;
  uint uStack_148;
  float afStack_144 [4];
  float fStack_134;
  uint uStack_130;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint uStack_118;
  float fStack_114;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  byte auStack_f4 [12];
  float fStack_e8;
  float afStack_e4 [5];
  byte auStack_d0 [12];
  float fStack_c4;
  float afStack_c0 [5];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  CVector3f CStack_a0;
  uint uStack_94;
  float afStack_90 [4];
  float fStack_80;
  uint uStack_7c;
  float fStack_78;
  float afStack_70 [3];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CMotionController *pCStack_2c;
  uint uStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar8 = 0;
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar3 == 0) {
    if (*(int *)&param_1->field_0x10b1c != 0) {
      core_mobster_cpp_FUN_004fdc60(param_1);
      core_charactr_cpp_FUN_00428e30((CCharacter *)param_1,param_2);
    }
    return;
  }
  if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10bc4 * 4) == 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_268);
    pCStack_234 = param_1;
    pCStack_230 = param_1;
    uStack_264 = 0x4479f99a;
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x110))(param_1,aSStack_268);
  }
  if (*(int *)&param_1->field_0x10224 != 0) {
    *(uint *)&param_1->field_0x10228 = 0;
  }
  if (0 < *(int *)&param_1->field_0x3564) {
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x130))(param_1,1,0);
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x130))(param_1,0,0);
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10b90);
    iVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x114))(param_1);
    if (((iVar3 == 0) &&
        (iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10b98), iVar3 == 0)) &&
       (iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10b8c), iVar3 == 0)) {
      uVar4 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"mob-scream?.wav")
      ;
      *(uint *)&param_1->field_0x10b98 = uVar4;
    }
  }
  fVar11 = *(float *)&param_1->field_0x10bcc - param_2;
  *(float *)&param_1->field_0x10bcc = fVar11;
  if (fVar11 < 0.0) {
    *(uint *)&param_1->field_0x10bcc = 0;
  }
  fVar11 = *(float *)&param_1->field_0x10b10 - param_2;
  *(float *)&param_1->field_0x10b10 = fVar11;
  if (fVar11 < 0.0) {
    *(uint *)&param_1->field_0x10b10 = 0;
  }
  if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10ba8 * 4) == 0) {
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x130))(param_1,1,0);
  }
  if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10ba0 * 4) == 0) {
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x130))(param_1,0,0);
  }
  if ((*(int *)&param_1->field_0x10b24 == 0) &&
     (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,&param_1->field_0x10b28), iVar3 != 0)) {
    *(uint *)&param_1->field_0x10b24 = 1;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  fStack_40 = param_2 * *(float *)&param_1->field_0x10a60;
  pCStack_20 = (CMotionController *)&param_1->field_0x2b4;
  while (0.0 < fStack_40) {
    iVar3 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)&param_1->field_0x2b4,afStack_90 + 0x14);
    if (iVar3 == 100) {
      iVar3 = *(int *)&param_1->field_0x10b04;
      if (iVar3 != 0) {
        *(uint *)&param_1->field_0x10b04 = 0;
        core_charactr_cpp_FUN_00428b10(param_1,1,iVar3,0x3e4ccccd,0);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,iVar3);
    }
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2 * *(float *)&param_1->field_0x10a60);
  iVar3 = core_motion_cpp_FUN_005035c0(pCStack_20);
  uVar4 = *(uint *)(iVar3 + 0x24);
  iVar3 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar3 == 0) {
    switch(uVar4) {
    case 0:
      if (*(int *)&param_1->field_0x10b24 == 0) {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
        if (*(int *)&param_1->field_0x10a78 == 0) {
          iVar3 = core_enemy_cpp_FUN_00488970((CEnemy *)param_1,param_2);
          if (iVar3 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,1,1);
          }
          break;
        }
        iVar3 = *(int *)&param_1->field_0x10b18;
        if (iVar3 != 0) {
          if (*(int *)&param_1->field_0x10b14 == 0) {
            fStack_1d8 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
            fStack_1d4 = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
            fStack_1d0 = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
            fStack_124 = fStack_1d8;
            afStack_144[(uint)bVar8 * -2 + 9] = afStack_1ec[(uint)bVar8 * -2 + 6];
            afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
                 afStack_1ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
            if ((float)_DAT_005dedc5 <
                SQRT(fStack_11c * fStack_11c + fStack_124 * fStack_124 + fStack_120 * fStack_120)) {
              *(uint *)&param_1->field_0x10b14 = 1;
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,8,1);
              break;
            }
          }
          else {
            *(uint *)&param_1->field_0x10b14 = 0;
          }
        }
        if (*(int *)&param_1->field_0x10b1c == 0) {
          iVar3 = *(int *)&param_1->field_0x10a78;
          fStack_4c = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_48 = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_44 = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_64 = fStack_4c;
          afStack_90[(uint)bVar8 * -2 + 0xc] = afStack_90[(uint)bVar8 * -2 + 0x12];
          afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
               afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
          fStack_30 = SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60);
          fStack_1c = fStack_30;
          if (fStack_30 < 0x40400000 + 1.0) {
            core_vecdir_cpp_FUN_005838f0(afStack_90 + 0xb);
            uStack_7c = uStack_130;
            afStack_90[(uint)bVar8 * -2 + 6] = afStack_144[(uint)bVar8 * -2 + 6];
            afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
                 afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
            fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                         (fStack_78 - *(float *)&param_1->field_0x34);
            if ((ABS(fStack_14) < (float)_DAT_005dedbd) &&
               (*(float *)&param_1->field_0x10a74 <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,9,1);
              *(uint *)&param_1->field_0x10a74 = 0x40000000;
            }
          }
          if (fStack_30 < *(float *)&param_1->field_0x10a70) {
            if (_DAT_005fa238 <= fStack_30) {
              iVar3 = 8;
            }
            else {
              iVar3 = 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,iVar3,1);
          }
          if ((*(int *)&param_1->field_0x10b08 == 0) &&
             (iVar3 = core_actor_cpp_FUN_0040d060(0.7), iVar3 != 0)) {
            core_mobster_cpp_FUN_00500370(param_1,1);
            *(uint *)&param_1->field_0x10b08 = 1;
          }
          else {
            *(uint *)&param_1->field_0x10b08 = 1;
          }
          break;
        }
        if (*(float *)&param_1->field_0x10bc8 <= (float)_DAT_005dedb5) break;
        iVar3 = core_actor_cpp_FUN_0040d060(0.25);
        if (iVar3 != 0) {
          core_mobster_cpp_FUN_004fdd50(param_1);
          break;
        }
      }
      else {
        *(uint *)&param_1->field_0x10a78 = *(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        if (*(float *)&param_1->field_0x10bc8 <= (float)_DAT_005dedb5) break;
      }
      core_mobster_cpp_FUN_004ffb00(param_1);
      break;
    case 1:
    case 8:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
      puVar1 = &param_1->field_0x2b4;
      if (*(int *)&param_1->field_0x10a78 == 0) {
        iVar3 = core_enemy_cpp_FUN_00488970((CEnemy *)param_1,param_2);
        if (iVar3 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)puVar1,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)puVar1,1,1);
        }
      }
      else if (*(int *)&param_1->field_0x10b14 == 0) {
        iVar3 = core_mobster_cpp_FUN_004ff610(param_1,param_2);
        if (iVar3 == 0) {
          fStack_38 = 0x40400000 + 1.0;
          if (*(int *)&param_1->field_0x2698 != 0) {
            fStack_38 = 0x41F00000;
          }
          fVar15 = 0.17453292;
          fVar11 = 0.5;
          *(uint *)&param_1->field_0x2510 = 0;
          *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
          *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
          auStack_d0._0_4_ = 0;
          fStack_34 = 0x40400000;
          auStack_d0._8_4_ = 0x40400000;
          pCVar10 = (CVector3f *)auStack_d0;
          auStack_d0._4_4_ = 0;
          pCVar7 = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                             (*(int *)&param_1->field_0x10a78);
          iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20),pCVar7,pCVar10,
                             fVar11,fVar15);
          if (-1 < iVar3) {
            puVar1 = &param_1->field_0x20;
            iVar3 = *(int *)&param_1->field_0x10a78;
            afStack_144[2] = *(float *)puVar1 - *(float *)(iVar3 + 0x20);
            afStack_144[3] = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
            fStack_134 = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
            fStack_c4 = afStack_144[2];
            afStack_c0[(uint)bVar8 * -2] = afStack_144[(uint)bVar8 * -2 + 3];
            afStack_c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            fStack_24 = SQRT(afStack_c0[1] * afStack_c0[1] + fStack_c4 * fStack_c4);
            afStack_c0[0] = 0.0;
            fStack_3c = fStack_24;
            if ((fStack_24 <= fStack_38) && (*(float *)&param_1->field_0x10a74 <= 0.0)) {
              pCStack_2c = (CMotionController *)&param_1->field_0x2b4;
              if (*(int *)&param_1->field_0x2698 == 0) {
                fStack_100 = *(float *)(iVar3 + 0x20) - *(float *)puVar1;
                fStack_fc = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
                fStack_f8 = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
                afStack_e4[2] = fStack_100;
                afStack_e4[(uint)bVar8 * -2 + 3] = afStack_144[(uint)bVar8 * -2 + 0x12];
                afStack_e4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                     afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
                core_vecdir_cpp_FUN_005838f0(afStack_e4 + 2);
                uStack_118 = afStack_c0[2];
                afStack_144[(uint)bVar8 * -2 + 0xc] = afStack_c0[(uint)bVar8 * -2 + 3];
                afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
                     afStack_c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
                fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                             (fStack_114 - *(float *)&param_1->field_0x34);
                if (ABS(fStack_14) < (float)_DAT_005dedbd) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_2c,9,1);
                }
              }
              else if (fStack_34 + 1.0 <= fStack_24) {
                if (((float)_DAT_005dedb5 < *(float *)&param_1->field_0x10bc8) &&
                   (*(float *)&param_1->field_0x10bcc <= 0.0)) {
                  *(uint *)&param_1->field_0x10b10 = 0;
                  iVar3 = core_actor_cpp_FUN_0040d060(0.3);
                  if (iVar3 != 0) {
                    core_mobster_cpp_FUN_00500370(param_1,2);
                  }
                  if (*(float *)&param_1->field_0x10b10 <= 0.0) {
                    core_mobster_cpp_FUN_004ffb00(param_1);
                  }
                  else if (*(int *)&param_1->field_0x2620 == 0) {
                    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                              ((CMotionController *)&param_1->field_0x2b4,10,1);
                  }
                  else {
                    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                              ((CMotionController *)&param_1->field_0x2b4,0xb,1);
                  }
                }
              }
              else {
                fStack_e8 = *(float *)(iVar3 + 0x20) - *(float *)puVar1;
                afStack_e4[0] = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
                afStack_e4[1] = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
                afStack_180[2] = fStack_e8;
                afStack_180[(uint)bVar8 * -2 + 3] = afStack_e4[(uint)bVar8 * -2];
                afStack_180[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                     afStack_e4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
                core_vecdir_cpp_FUN_005838f0(afStack_180 + 2);
                uStack_160 = uStack_148;
                afStack_15c[(uint)bVar8 * -2] = afStack_144[(uint)bVar8 * -2];
                afStack_15c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                     afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
                fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                             (afStack_15c[0] - *(float *)&param_1->field_0x34);
                if ((ABS(fStack_14) < (float)_DAT_005dedbd) &&
                   (*(float *)&param_1->field_0x10a74 <= 0.0)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_2c,9,1);
                  *(uint *)&param_1->field_0x10a74 = 0x40000000;
                }
              }
              *(uint *)&param_1->field_0x10a74 = 0x3f800000;
            }
            if (*(float *)&param_1->field_0x10a70 < fStack_3c) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,0,1);
            }
          }
        }
      }
      else {
        fVar15 = 0.17453292;
        fVar11 = 0.5;
        *(uint *)&param_1->field_0x2510 = 0;
        *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
        *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
        auStack_f4._0_4_ = 0;
        auStack_f4._8_4_ = 0x40400000;
        pCVar10 = (CVector3f *)auStack_f4;
        auStack_f4._4_4_ = 0;
        pCVar7 = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0x10b18 + 0x2b0) + 0xcc))
                           (*(int *)&param_1->field_0x10b18);
        iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0x10b18 + 0x20),pCVar7,pCVar10,
                           fVar11,fVar15);
        if (iVar3 < 1) {
          if (iVar3 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)puVar1,0,1);
            *(uint *)&param_1->field_0x10b18 = 0;
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)puVar1,0,1);
        }
      }
      break;
    case 2:
    case 6:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
      if (*(int *)&param_1->field_0x10a78 != 0) {
        iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)&param_1->field_0x2698,g_CWeaponClassInfo.name_hash);
        if (iVar3 != 0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
          uStack_28 = *(uint *)(iVar3 + 0x6c4);
          *(uint *)(iVar3 + 0x6c4) = 100;
          iVar6 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0xf0))(iVar3);
          if (iVar6 != 0) {
            (**(code **)(*(int *)(iVar3 + 0x2b0) + 0xec))(iVar3);
          }
          *(uint *)(iVar3 + 0x6c4) = uStack_28;
        }
        iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)&param_1->field_0x2620,g_CWeaponClassInfo.name_hash);
        iStack_18 = iVar3;
        if (iVar3 != 0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
          uVar4 = *(uint *)(iVar3 + 0x6c4);
          *(uint *)(iVar3 + 0x6c4) = 100;
          iVar6 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0xf0))(iVar3);
          if (iVar6 == 0) {
            *(uint *)(iStack_18 + 0x6c4) = uVar4;
          }
          else {
            (**(code **)(*(int *)(iVar3 + 0x2b0) + 0xec))(iVar3);
            *(uint *)(iStack_18 + 0x6c4) = uVar4;
          }
        }
      }
      if ((*(float *)&param_1->field_0x10bc8 < (float)_DAT_005dedb5) ||
         (*(float *)&param_1->field_0x10bcc <= 0.0)) {
        if (*(int *)&param_1->field_0x10b24 == 0) {
          uVar13 = 0x40800000;
          uVar4 = 0x40000000;
        }
        else {
          uVar13 = 0x40a00000;
          uVar4 = 0x40800000;
        }
        fStack_14 = (float)core_actor_cpp_FUN_0040cf60(uVar4,uVar13);
        *(float *)&param_1->field_0x10bcc = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,0,1);
        iVar3 = core_actor_cpp_FUN_0040d060(0.3);
        if (iVar3 != 0) {
          core_mobster_cpp_FUN_00500370(param_1,3);
        }
      }
      break;
    case 5:
      if ((*(int *)&param_1->field_0x10a64 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_005469a0(pCStack_20,0);
        puVar14 = &uStack_94;
        uStack_94 = uStack_1c0;
        afStack_90[(uint)bVar8 * -2] = afStack_1bc[(uint)bVar8 * -2];
        afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_1bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        core_actor_cpp_FUN_00408d70(param_1,puVar14);
        blood_type = BLOOD_TYPE_RED;
        pCVar10 = &CStack_a0;
        CStack_a0._0_4_ = CStack_1b4._0_4_;
        *(uint *)((int)&CStack_a0 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_1b4 + (uint)bVar8 * -8 + 4);
        this_ptr = g_CGorePtr;
        *(uint *)((int)&CStack_a0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_1b4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr,pCVar10,blood_type);
        *(uint *)&param_1->field_0x10a64 = 1;
      }
      break;
    case 9:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_22c);
      fStack_228 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
      pCStack_1f8 = param_1;
      pCStack_1f4 = param_1;
      fStack_14 = fStack_228;
      if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10ba0 * 4) != 0) {
        pSVar12 = aSStack_22c;
        fVar11 = 0.4;
        core_xform_cpp_FUN_00591530(&DAT_0265370c,&param_1->field_0x1134 + _DAT_01d1c714 * 0x30);
        pfVar9 = afStack_90 + 8;
        afStack_70[0] = afStack_1ec[2];
        afStack_90[(uint)bVar8 * -2 + 9] = afStack_1ec[(uint)bVar8 * -2 + 3];
        afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
             afStack_1ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        core_actor_cpp_FUN_00408d70(param_1,pfVar9);
        pCVar10 = &CStack_16c;
        CStack_16c._0_4_ = CStack_1cc._0_4_;
        *(uint *)((int)&CStack_16c + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_1cc + (uint)bVar8 * -8 + 4);
        pCVar5 = param_1;
        *(uint *)((int)&CStack_16c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_1cc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_enemy_cpp_FUN_00488110((CEnemy *)pCVar5,pCVar10,fVar11,pSVar12);
      }
      fStack_228 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
      fStack_14 = fStack_228;
      if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10ba8 * 4) != 0) {
        pSVar12 = aSStack_22c;
        fVar11 = 0.4;
        core_xform_cpp_FUN_00591530(&DAT_0265370c,&param_1->field_0x1134 + _DAT_01d1c718 * 0x30);
        pfVar9 = afStack_1a4 + 2;
        afStack_1a4[2] = (float)uStack_58;
        afStack_1a4[(uint)bVar8 * -2 + 3] = afStack_90[(uint)bVar8 * -2 + 0xf];
        afStack_1a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
        core_actor_cpp_FUN_00408d70(param_1,pfVar9);
        pCVar10 = &CStack_190;
        CStack_190._0_4_ = CStack_154._0_4_;
        *(uint *)((int)&CStack_190 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_154 + (uint)bVar8 * -8 + 4);
        pCVar5 = param_1;
        *(uint *)((int)&CStack_190 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_154 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_enemy_cpp_FUN_00488110((CEnemy *)pCVar5,pCVar10,fVar11,pSVar12);
      }
      break;
    case 10:
    case 0xb:
      if (*(float *)&param_1->field_0x10b10 <= 0.0) {
        core_mobster_cpp_FUN_004ffb00(param_1);
      }
    }
    goto switchD_004fef11_caseD_3;
  }
  uVar2 = *(uint *)&param_1->field_0x27ac;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_004fe1b6:
      iVar3 = 1;
    }
    else {
LAB_004fe42b:
      iVar3 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar3,1);
  }
  else {
    if (uVar2 < 3) goto LAB_004fe1b6;
    if (uVar2 != 3) goto LAB_004fe42b;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
switchD_004fef11_caseD_3:
  if (0.0 < *(float *)&param_1->field_0x10a74) {
    *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
  }
  if (*(int *)&param_1->field_0x10b1c == 0) {
    iVar3 = core_charactr_cpp_FUN_00424430((CCharacter *)param_1);
    if (iVar3 != 0) {
      iVar3 = *(int *)&param_1->field_0x10a78;
      if ((iVar3 != 0) &&
         (pCVar5 = (CMobster *)(**(code **)(*(int *)(iVar3 + 0x2b0) + 0xfc))(iVar3),
         pCVar5 == param_1)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                  (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x10a78);
      }
      core_charactr_cpp_FUN_00423a10(param_1,param_2);
      fStack_1f0 = *(float *)&param_1->field_0x2588 * param_2;
      afStack_1ec[0] = *(float *)&param_1->field_0x258c * param_2;
      afStack_1ec[1] = *(float *)&param_1->field_0x2590 * param_2;
      fStack_1a8 = fStack_1f0;
      afStack_1a4[(uint)bVar8 * -2] = afStack_1ec[(uint)bVar8 * -2];
      afStack_1a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_1ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      fStack_ac = fStack_1a8 + *(float *)&param_1->field_0x257c;
      fStack_a8 = afStack_1a4[0] + *(float *)&param_1->field_0x2580;
      fStack_a4 = afStack_1a4[1] + *(float *)&param_1->field_0x2584;
      fStack_10c = fStack_ac;
      afStack_144[(uint)bVar8 * -2 + 0xf] = afStack_c0[(uint)bVar8 * -2 + 6];
      afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
           afStack_c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      afStack_90[2] = fStack_10c + *(float *)&param_1->field_0x2508;
      afStack_90[3] = fStack_108 + *(float *)&param_1->field_0x250c;
      fStack_80 = fStack_104 + *(float *)&param_1->field_0x2510;
      fStack_184 = afStack_90[2];
      afStack_180[(uint)bVar8 * -2] = afStack_90[(uint)bVar8 * -2 + 3];
      afStack_180[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      *(uint *)&param_1->field_0x2584 = 0;
      *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
      *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
      *(uint *)&param_1->field_0x2510 = 0;
      *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
      *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x2510;
      core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)&fStack_184);
    }
  }
  else {
    core_mobster_cpp_FUN_004fdc60(param_1);
  }
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)&param_1->field_0x2698,g_CWeaponClassInfo.name_hash);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x14))(iVar3,param_2);
  }
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)&param_1->field_0x2620,g_CWeaponClassInfo.name_hash);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x14))(iVar3,param_2);
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  iVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x114))(param_1);
  if (iVar3 == 0) {
    core_mobster_cpp_CMobster_aimTommyGun_FUN_004fef30(param_1,param_2);
  }
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  return;
}
