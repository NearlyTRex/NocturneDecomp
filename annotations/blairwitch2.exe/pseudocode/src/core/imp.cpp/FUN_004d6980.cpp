// Name: core_imp.cpp_FUN_004d6980
// Address: 004d6980
// Address Range: [[004d6980, 004d781e]]
// Convention: unknown
// Signature: void core_imp_cpp_FUN_004d6980(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_imp_cpp_FUN_004d6980(CEnemy *param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  CEnemy *pCVar4;
  CPathMap *path_map;
  uint uVar5;
  byte bVar6;
  float10 fVar7;
  float afStackY_11f0 [982];
  CGore *this_ptr;
  float *pfVar8;
  CVector3f *pCVar9;
  float fVar10;
  float fVar11;
  EBloodType EVar12;
  SDamageInfo *pSVar13;
  float max_distance;
  SDamageInfo aSStack_280 [4];
  float fStack_27c;
  CEnemy *pCStack_24c;
  CEnemy *pCStack_248;
  SDamageInfo aSStack_244 [4];
  float fStack_240;
  CEnemy *pCStack_210;
  CEnemy *pCStack_20c;
  CVector3f CStack_208;
  float fStack_1fc;
  float afStack_1f8 [5];
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  uint uStack_1d8;
  float fStack_1d4;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  uint uStack_1bc;
  float fStack_1b8;
  CVector3f CStack_1b4;
  byte auStack_1a8 [12];
  CVector3f CStack_19c;
  uint uStack_190;
  float afStack_18c [5];
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float afStack_13c [3];
  uint uStack_130;
  CVector3f CStack_124;
  CVector3f CStack_118;
  float fStack_10c;
  float afStack_108 [5];
  uint uStack_f4;
  float afStack_f0 [5];
  float fStack_dc;
  float afStack_d8 [5];
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float afStack_b8 [3];
  CVector3f CStack_ac;
  uint uStack_a0;
  float afStack_9c [5];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint uStack_70;
  float fStack_6c;
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [2];
  int iStack_4c;
  float fStack_44;
  float fStack_40;
  float afStack_3c [2];
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  CMotionController *pCStack_24;
  CMotionController *pCStack_20;
  CMotionController *pCStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  if ((*(int *)(&param_1->field_0x23f4 + *(int *)&param_1[1].field_0x30 * 4) == 0) &&
     (iVar1 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x114))(param_1), iVar1 == 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,6,1);
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  afStack_3c[0] = param_2 * *(float *)&param_1->field_0x10a60;
  pCStack_1c = (CMotionController *)&param_1->field_0x2b4;
LAB_004d69ec:
  if (0.0 < afStack_3c[0]) {
    uVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_1c,afStack_3c);
    if (uVar2 < 0x29a) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,uVar2);
    }
    else {
      if (uVar2 < 0x29b) {
        iVar1 = *(int *)&param_1->field_0x10a78;
        iStack_18 = 1;
        if ((((iVar1 != 0) &&
             (iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1), iVar1 == 0)) &&
            ((iStack_18 == 0 ||
             (iVar1 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))
                                (*(int *)&param_1->field_0x10a78), iVar1 == 0)))) &&
           ((iStack_18 == 0 ||
            (iVar1 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xf0))
                               (*(int *)&param_1->field_0x10a78,param_1,0), iVar1 != 0)))) {
          if (iStack_18 != 0) {
            afStack_108[4] = 0x40000000;
            afStack_108[2] = 0.0;
            afStack_108[3] = 0.0;
            core_actor_cpp_FUN_00408d70(param_1,afStack_108 + 2);
            fStack_154 = fStack_16c;
            afStack_18c[(uint)bVar6 * -2 + 0xf] = afStack_18c[(uint)bVar6 * -2 + 9];
            afStack_18c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
                 afStack_18c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
            fVar10 = fStack_154 - *(float *)(*(int *)&param_1->field_0x10a78 + 0x20);
            fVar11 = fStack_14c - *(float *)(*(int *)&param_1->field_0x10a78 + 0x28);
            if ((float)_DAT_005dab09 < SQRT(fVar11 * fVar11 + fVar10 * fVar10)) {
              iStack_18 = 0;
            }
            if ((float)_DAT_005dab11 <
                ABS(fStack_150 - *(float *)(*(int *)&param_1->field_0x10a78 + 0x24)))
            goto LAB_004d6a63;
          }
          if (((iStack_18 == 0) ||
              (iVar1 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xf4))
                                 (*(int *)&param_1->field_0x10a78,param_1,0), iVar1 != 0)) &&
             (iStack_18 != 0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,9,1);
            goto LAB_004d69ec;
          }
        }
LAB_004d6a63:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,0,1);
        goto LAB_004d69ec;
      }
      if (uVar2 == 0x29b) {
        if (*(int *)&param_1->field_0x10a78 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,0,1);
        }
        else {
          core_skeleton_cpp_FUN_005469a0(pCStack_1c,_DAT_01cee138);
          pfVar8 = afStack_d8 + 2;
          afStack_d8[2] = (float)uStack_130;
          afStack_d8[(uint)bVar6 * -2 + 3] = afStack_18c[(uint)bVar6 * -2 + 0x18];
          afStack_d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               afStack_18c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
          core_actor_cpp_FUN_00408d70(param_1,pfVar8);
          pSVar13 = aSStack_244;
          CStack_19c._0_4_ = CStack_118._0_4_;
          *(uint *)((int)&CStack_19c + (uint)bVar6 * -8 + 4) =
               *(uint *)((int)&CStack_118 + (uint)bVar6 * -8 + 4);
          *(uint *)((int)&CStack_19c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               *(uint *)((int)&CStack_118 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          CStack_1b4._0_4_ = CStack_19c._0_4_;
          *(uint *)(auStack_1a8 + (uint)bVar6 * -8 + -8) =
               *(uint *)((int)&CStack_19c + (uint)bVar6 * -8 + 4);
          *(uint *)(auStack_1a8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + -4) =
               *(uint *)((int)&CStack_19c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(pSVar13);
          fStack_240 = (float)core_actor_cpp_FUN_0040cf60(0x40a00000,0x41200000);
          pCStack_210 = param_1;
          pCStack_20c = param_1;
          fStack_14 = fStack_240;
          (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x110))
                    (*(int *)&param_1->field_0x10a78,aSStack_244);
          fVar7 = (float10)fStack_240 * (float10)_DAT_005daaf9 * (float10)_DAT_005dab01;
          EVar12 = BLOOD_TYPE_RED;
          round();
          iStack_4c = (int)ROUND(fVar7);
          core_gore_cpp_FUN_004c9850(g_CGorePtr,&CStack_1b4,(CVector3f *)0x0,iStack_4c,EVar12);
          iVar1 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x114))
                            (*(int *)&param_1->field_0x10a78);
          if (iVar1 < 1) {
            (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"ghoul-eat-?.wav");
          }
          else {
            (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xf8))
                      (*(int *)&param_1->field_0x10a78);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,0,1);
          }
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,uVar2);
      }
    }
    goto LAB_004d69ec;
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2 * *(float *)&param_1->field_0x10a60);
  pCStack_20 = (CMotionController *)&param_1->field_0x2b4;
  iVar1 = core_motion_cpp_FUN_005035c0(pCStack_20);
  iVar1 = *(int *)(iVar1 + 0x24);
  iStack_2c = iVar1;
  iVar3 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar3 == 0) {
    switch(iVar1) {
    case 0:
      iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1);
      if (iVar1 == 0) {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
        iVar1 = *(int *)&param_1->field_0x10a78;
        if (iVar1 == 0) {
          iVar1 = core_enemy_cpp_FUN_00488970(param_1,param_2);
          if (iVar1 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,1,1);
          }
        }
        else if (*(int *)(iVar1 + 0x276c) == 0) {
          fStack_c4 = *(float *)(iVar1 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_c0 = *(float *)(iVar1 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_bc = *(float *)(iVar1 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_88 = fStack_c4;
          afStack_9c[(uint)bVar6 * -2 + 6] = afStack_d8[(uint)bVar6 * -2 + 6];
          afStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
               afStack_d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
          fStack_44 = SQRT(fStack_80 * fStack_80 + fStack_88 * fStack_88 + fStack_84 * fStack_84);
          fStack_34 = fStack_44;
          if (fStack_44 < 0x40000000) {
            core_vecdir_cpp_FUN_005838f0(afStack_9c + 5);
            uStack_f4 = afStack_f0[2];
            afStack_f0[(uint)bVar6 * -2] = afStack_f0[(uint)bVar6 * -2 + 3];
            afStack_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
            fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                         (afStack_f0[0] - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005daaf1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,4,1);
            }
          }
          if (fStack_34 < *(float *)&param_1->field_0x10a70) {
            if (_DAT_005f8d68 <= fStack_34) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,1,1);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,3,1);
        }
      }
      else {
        iVar1 = core_actor_cpp_FUN_0040d060(0.1);
        if (iVar1 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,3,1);
        }
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
      fVar10 = 0x40000000;
      pCStack_24 = (CMotionController *)&param_1->field_0x2b4;
      if (*(int *)&param_1->field_0x10a78 == 0) {
        iVar1 = core_enemy_cpp_FUN_00488970(param_1,param_2);
        if (iVar1 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,1,1);
        }
      }
      else {
        iVar1 = *(int *)(*(int *)&param_1->field_0x10a78 + 0x276c);
        if (iVar1 == 0) {
          fStack_30 = 0x40000000;
          max_distance = 0.17453292;
          *(uint *)&param_1->field_0x2510 = 0;
          fVar11 = 0.5;
          *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
          *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
          auStack_1a8._8_4_ = fVar10;
          pCVar9 = (CVector3f *)auStack_1a8;
          auStack_1a8._0_4_ = iVar1;
          auStack_1a8._4_4_ = iVar1;
          path_map = (CPathMap *)
                     (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                               (*(int *)&param_1->field_0x10a78);
          iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20),path_map,pCVar9,
                             fVar11,max_distance);
          if (-1 < iVar1) {
            iVar1 = *(int *)&param_1->field_0x10a78;
            fStack_10c = *(float *)&param_1->field_0x20 - *(float *)(iVar1 + 0x20);
            afStack_108[0] = *(float *)&param_1->field_0x24 - *(float *)(iVar1 + 0x24);
            afStack_108[1] = *(float *)&param_1->field_0x28 - *(float *)(iVar1 + 0x28);
            fStack_1c0 = fStack_10c;
            afStack_1f8[(uint)bVar6 * -2 + 0xf] = afStack_108[(uint)bVar6 * -2];
            afStack_1f8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
                 afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            fStack_40 = SQRT(fStack_1b8 * fStack_1b8 + fStack_1c0 * fStack_1c0);
            uStack_1bc = 0;
            fStack_28 = fStack_40;
            if ((_DAT_005f8d68 < fStack_40) && (iStack_2c == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,2,1);
            }
            if (((fStack_28 < _DAT_005f8d6c) &&
                (iVar1 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))
                                   (*(int *)&param_1->field_0x10a78), iVar1 == 0)) &&
               (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1[1].field_0x34 * 4) != 0)) {
              iVar1 = *(int *)&param_1->field_0x10a78;
              fStack_148 = *(float *)(iVar1 + 0x20) - *(float *)&param_1->field_0x20;
              fStack_144 = *(float *)(iVar1 + 0x24) - *(float *)&param_1->field_0x24;
              fStack_140 = *(float *)(iVar1 + 0x28) - *(float *)&param_1->field_0x28;
              afStack_b8[0] = fStack_148;
              afStack_d8[(uint)bVar6 * -2 + 9] = afStack_18c[(uint)bVar6 * -2 + 0x12];
              afStack_d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
                   afStack_18c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
              core_vecdir_cpp_FUN_005838f0(afStack_b8);
              uStack_1d8 = afStack_9c[2];
              afStack_1f8[(uint)bVar6 * -2 + 9] = afStack_9c[(uint)bVar6 * -2 + 3];
              afStack_1f8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
                   afStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
              fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                           (fStack_1d4 - *(float *)&param_1->field_0x34);
              if ((ABS(fStack_14) < (float)_DAT_005daaf1) &&
                 (iVar1 = core_actor_cpp_FUN_0040d060(0.1), iVar1 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&param_1->field_0x2b4,8,1);
                iVar1 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(param_1 + 1));
                if (iVar1 == 0) {
                  uVar5 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                                    (param_1,"imp-jump?.wav");
                  *(uint *)(param_1 + 1) = uVar5;
                }
              }
            }
            if ((fStack_28 <= fStack_30) && (*(float *)&param_1->field_0x10a74 <= 0.0)) {
              iVar1 = *(int *)&param_1->field_0x10a78;
              fStack_7c = *(float *)(iVar1 + 0x20) - *(float *)&param_1->field_0x20;
              fStack_78 = *(float *)(iVar1 + 0x24) - *(float *)&param_1->field_0x24;
              fStack_74 = *(float *)(iVar1 + 0x28) - *(float *)&param_1->field_0x28;
              fStack_58 = fStack_7c;
              afStack_54[(uint)bVar6 * -2] = afStack_9c[(uint)bVar6 * -2 + 9];
              afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                   afStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
              core_vecdir_cpp_FUN_005838f0(&fStack_58);
              uStack_70 = afStack_1f8[2];
              afStack_9c[(uint)bVar6 * -2 + 0xc] = afStack_1f8[(uint)bVar6 * -2 + 3];
              afStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
                   afStack_1f8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
              fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                           (fStack_6c - *(float *)&param_1->field_0x34);
              if (ABS(fStack_14) < (float)_DAT_005daaf1) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&param_1->field_0x2b4,4,1);
                *(uint *)&param_1->field_0x10a74 = 0x40800000;
              }
            }
            if (*(float *)&param_1->field_0x10a70 < fStack_28) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,0,1);
            }
            fVar10 = *(float *)&param_1[1].field_0x8 - param_2;
            *(float *)&param_1[1].field_0x8 = fVar10;
            if (fVar10 < 0.0) {
              uVar2 = *(uint *)(param_1 + 1);
              *(uint *)&param_1[1].field_0x8 = 0;
              iVar1 = sound_sndmain_cpp_FUN_00550b70(uVar2);
              if ((iVar1 == 0) &&
                 (iVar1 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x4), iVar1 == 0
                 )) {
                uVar5 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                                  (param_1,"imp-laugh?.wav");
                *(uint *)(param_1 + 1) = uVar5;
                fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x41200000,0x41a00000);
                *(float *)&param_1[1].field_0x8 = fStack_14;
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,3,1);
        }
      }
      break;
    case 3:
      fVar10 = *(float *)&param_1[1].field_0x8 - param_2 * _DAT_005daae9;
      *(float *)&param_1[1].field_0x8 = fVar10;
      if (fVar10 < 0.0) {
        uVar2 = *(uint *)(param_1 + 1);
        *(uint *)&param_1[1].field_0x8 = 0;
        iVar1 = sound_sndmain_cpp_FUN_00550b70(uVar2);
        if ((iVar1 == 0) &&
           (iVar1 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x4), iVar1 == 0)) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                            (param_1,"imp-laugh?.wav");
          *(uint *)(param_1 + 1) = uVar5;
          fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x41200000,0x41a00000);
          *(float *)&param_1[1].field_0x8 = fStack_14;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_280);
      fStack_27c = (float)core_actor_cpp_FUN_0040cf60(0x40400000,0x40a00000);
      pSVar13 = aSStack_280;
      pCStack_24c = param_1;
      pCStack_248 = param_1;
      fVar10 = 0.4;
      fStack_14 = fStack_27c;
      core_xform_cpp_FUN_00591530(&DAT_0265370c,&param_1->field_0x1134 + _DAT_01cee140 * 0x30);
      pfVar8 = afStack_18c + 2;
      afStack_18c[2] = (float)uStack_190;
      afStack_18c[(uint)bVar6 * -2 + 3] = afStack_18c[(uint)bVar6 * -2];
      afStack_18c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_18c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_actor_cpp_FUN_00408d70(param_1,pfVar8);
      pCVar9 = &CStack_208;
      CStack_208._0_4_ = CStack_124._0_4_;
      *(uint *)((int)&CStack_208 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_124 + (uint)bVar6 * -8 + 4);
      pCVar4 = param_1;
      *(uint *)((int)&CStack_208 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_124 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      iVar1 = core_enemy_cpp_FUN_00488110(pCVar4,pCVar9,fVar10,pSVar13);
      if (iVar1 != 0) {
        iVar3 = 0;
        iVar1 = 0;
        while (iVar1 < *(int *)&g_CDemonSetPtr->field_0x150fec) {
          pCVar4 = (CEnemy *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + iVar3),
                              g_CImpClassInfo.name_hash);
          if (((pCVar4 == (CEnemy *)0x0) || (pCVar4 == param_1)) ||
             (*(int *)&param_1->field_0x10a78 != *(int *)&pCVar4->field_0x10a78)) {
            iVar1 = iVar1 + 1;
            iVar3 = iVar3 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&pCVar4->field_0x2b4,3,1);
            iVar1 = iVar1 + 1;
            iVar3 = iVar3 + 4;
          }
        }
      }
      break;
    case 7:
      if ((*(int *)&param_1->field_0x10a64 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_005469a0(pCStack_20,0);
        pfVar8 = afStack_18c + 0x14;
        afStack_13c[0] = (float)uStack_a0;
        afStack_18c[(uint)bVar6 * -2 + 0x15] = afStack_9c[(uint)bVar6 * -2];
        afStack_18c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
             afStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        core_actor_cpp_FUN_00408d70(param_1,pfVar8);
        EVar12 = BLOOD_TYPE_RED;
        pCVar9 = &CStack_ac;
        CStack_ac._0_4_ = CStack_64._0_4_;
        *(uint *)((int)&CStack_ac + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)&CStack_64 + (uint)bVar6 * -8 + 4);
        this_ptr = g_CGorePtr;
        *(uint *)((int)&CStack_ac + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)&CStack_64 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr,pCVar9,EVar12);
        *(uint *)&param_1->field_0x10a64 = 1;
      }
      break;
    case 9:
      iVar1 = *(int *)&param_1->field_0x10a78;
      if (iVar1 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,5,1);
      }
      else {
        iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1);
        if (iVar1 == 0) {
          pCVar4 = *(CEnemy **)(*(int *)&param_1->field_0x10a78 + 0x276c);
          if (param_1 == pCVar4) {
            fVar10 = (float)_DAT_005daae1;
            *(float *)&pCVar4->field_0x20 =
                 *(float *)(*(int *)&param_1->field_0x10a78 + 0x20) -
                 *(float *)&pCVar4->field_0x44 * fVar10;
            *(float *)&pCVar4->field_0x28 =
                 *(float *)(*(int *)&pCVar4->field_0x10a78 + 0x28) -
                 *(float *)&pCVar4->field_0x5c * fVar10;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,5,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,5,1);
        }
      }
    }
    goto switchD_004d7818_caseD_5;
  }
  uVar2 = *(uint *)&param_1->field_0x27ac;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_004d6d91:
      iVar1 = 1;
    }
    else {
LAB_004d6f73:
      iVar1 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar1,1);
  }
  else {
    if (uVar2 < 3) goto LAB_004d6d91;
    if (uVar2 != 3) goto LAB_004d6f73;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
switchD_004d7818_caseD_5:
  if (0.0 < *(float *)&param_1->field_0x10a74) {
    *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
  }
  iVar1 = core_charactr_cpp_FUN_00424430((CCharacter *)param_1);
  if ((iVar1 != 0) && (iStack_2c != 9)) {
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    fStack_178 = *(float *)&param_1->field_0x2588 * param_2;
    fStack_174 = *(float *)&param_1->field_0x258c * param_2;
    fStack_170 = *(float *)&param_1->field_0x2590 * param_2;
    fStack_160 = fStack_178;
    afStack_18c[(uint)bVar6 * -2 + 0xc] = afStack_18c[(uint)bVar6 * -2 + 6];
    afStack_18c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         afStack_18c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    fStack_1cc = fStack_160 + *(float *)&param_1->field_0x257c;
    fStack_1c8 = fStack_15c + *(float *)&param_1->field_0x2580;
    fStack_1c4 = fStack_158 + *(float *)&param_1->field_0x2584;
    fStack_1e4 = fStack_1cc;
    afStack_1f8[(uint)bVar6 * -2 + 6] = afStack_1f8[(uint)bVar6 * -2 + 0xc];
    afStack_1f8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_1f8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    fStack_1fc = fStack_1e4 + *(float *)&param_1->field_0x2508;
    afStack_1f8[0] = fStack_1e0 + *(float *)&param_1->field_0x250c;
    afStack_1f8[1] = fStack_1dc + *(float *)&param_1->field_0x2510;
    fStack_dc = fStack_1fc;
    afStack_d8[(uint)bVar6 * -2] = afStack_1f8[(uint)bVar6 * -2];
    afStack_d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_1f8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)&fStack_dc);
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  return;
}
