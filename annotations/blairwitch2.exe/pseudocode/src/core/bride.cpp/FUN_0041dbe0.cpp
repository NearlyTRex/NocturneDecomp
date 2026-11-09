// Name: core_bride.cpp_FUN_0041dbe0
// Address: 0041dbe0
// Address Range: [[0041dbe0, 0041e7f6]]
// Convention: unknown
// Signature: void core_bride_cpp_FUN_0041dbe0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bride_cpp_FUN_0041dbe0(CEnemy *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  CPathMap *pCVar4;
  byte bVar5;
  float afStackY_1174 [952];
  CEnemy *pCVar6;
  CVector3f *pCVar7;
  uint *puVar8;
  float *pfVar9;
  float fVar10;
  EBloodType blood_type;
  SDamageInfo *pSVar11;
  float fVar12;
  byte *puVar13;
  SDamageInfo aSStack_27c [4];
  float fStack_278;
  CEnemy *pCStack_248;
  CEnemy *pCStack_244;
  SDamageInfo aSStack_240 [4];
  float fStack_23c;
  CEnemy *pCStack_20c;
  CEnemy *pCStack_208;
  SDamageInfo aSStack_204 [4];
  float fStack_200;
  CEnemy *pCStack_1d0;
  CEnemy *pCStack_1cc;
  SDamageInfo aSStack_1c8 [4];
  float fStack_1c4;
  CEnemy *pCStack_194;
  CEnemy *pCStack_190;
  CVector3f CStack_18c;
  byte auStack_180 [12];
  float fStack_174;
  float afStack_170 [2];
  byte auStack_168 [4];
  float afStack_164 [2];
  CVector3f CStack_15c;
  uint uStack_150;
  uint auStack_14c [5];
  CVector3f CStack_138;
  CVector3f CStack_12c;
  uint uStack_120;
  float afStack_11c [5];
  uint uStack_108;
  CVector3f CStack_fc;
  CVector3f CStack_f0;
  byte auStack_e4 [12];
  uint uStack_d8;
  uint auStack_d4 [2];
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [2];
  CVector3f CStack_a8;
  uint uStack_9c;
  float afStack_98 [5];
  CVector3f CStack_84;
  uint uStack_78;
  float afStack_74 [5];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  double dStack_54;
  double dStack_4c;
  double dStack_44;
  double dStack_3c;
  double dStack_34;
  double dStack_2c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar2 != 0) {
    if (0.0 <= *(float *)&param_1[1].field_0x24) {
      *(float *)&param_1[1].field_0x24 = *(float *)&param_1[1].field_0x24 - param_2;
    }
    puVar13 = &param_1->field_0x2b4;
    fStack_18 = -1.0;
    iVar2 = core_motion_cpp_FUN_005035c0(puVar13);
    uVar1 = *(uint *)(iVar2 + 0x24);
    if (uVar1 < 5) {
      if (uVar1 == 0) {
        iVar2 = core_enemy_cpp_FUN_00488970(param_1,param_2);
        if (iVar2 == 0) {
          (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
          if (*(int *)&param_1->field_0x10a78 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)puVar13,1,1);
            iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x28);
            if ((iVar2 == 0) &&
               (iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x2c), iVar2 == 0)
               ) {
              uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                                (param_1,"ub-attack?.wav");
              *(uint *)&param_1[1].field_0x2c = uVar3;
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,1,1);
        }
      }
      else if (uVar1 == 1) {
        if (*(float *)&param_1[1].field_0x24 <= 0.0) {
          fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x41200000,0x41a00000);
          *(float *)&param_1[1].field_0x24 = fStack_14;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)puVar13,3,1);
          iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x28);
          if ((iVar2 == 0) &&
             (iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x2c), iVar2 == 0))
          {
            uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                              (param_1,"ub-howl?.wav");
            *(uint *)&param_1[1].field_0x2c = uVar3;
          }
        }
        *(float *)&param_1->field_0x2594 =
             param_2 * *(float *)&param_1->field_0x10a60 * (float)_DAT_005cc869;
        core_charactr_cpp_FUN_0042b2a0(param_1,param_2 * *(float *)&param_1->field_0x10a60);
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
        puVar13 = &param_1->field_0x2b4;
        if (*(int *)&param_1->field_0x10a78 == 0) {
          iVar2 = core_enemy_cpp_FUN_00488970(param_1,param_2);
          if (iVar2 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)puVar13,0,1);
          }
        }
        else {
          fVar12 = 0.17453292;
          fVar10 = 1.0;
          auStack_180._0_4_ = 0;
          auStack_180._8_4_ = 0x40200000;
          pCVar7 = (CVector3f *)auStack_180;
          auStack_180._4_4_ = 0;
          pCVar4 = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                             (*(int *)&param_1->field_0x10a78);
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20),pCVar4,pCVar7,
                             fVar10,fVar12);
          if (iVar2 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)puVar13,0,1);
          }
          else if (((0 < iVar2) && (*(float *)&param_1->field_0x10a74 <= 0.0)) &&
                  (iVar2 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))
                                     (*(int *)&param_1->field_0x10a78), iVar2 == 0)) {
            iVar2 = core_actor_cpp_FUN_0040d060(0.5);
            if (iVar2 == 0) {
              iVar2 = 6;
            }
            else {
              iVar2 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)puVar13,iVar2,1);
            iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x28);
            if ((iVar2 == 0) &&
               (iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x2c), iVar2 == 0)
               ) {
              uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                                (param_1,"ub-attack?.wav");
              *(uint *)&param_1[1].field_0x2c = uVar3;
            }
          }
        }
      }
    }
    else if (uVar1 < 6) {
      iVar2 = *(int *)&param_1->field_0x10a78;
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)puVar13,1,1);
      }
      else {
        iVar2 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0xfc))(iVar2);
        if (iVar2 == 0) {
          fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x3e4ccccd,0x3f000000);
          *(float *)&param_1->field_0x10a74 = fStack_14;
          fStack_20 = core_motion_cpp_FUN_00503e60((CMotionController *)puVar13);
          dStack_34 = (double)fStack_20;
          fStack_14 = fStack_20;
          if (fStack_20 <= (float)_DAT_005cc869) {
            fStack_18 = 0x40200000;
            if ((dStack_34 < 1.0) || (_DAT_005cc851 < dStack_34)) {
              dStack_4c = (double)fStack_20;
              if (((float)_DAT_005cc869 <= fStack_20) &&
                 ((dStack_4c <= _DAT_005cc871 &&
                  (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1[1].field_0x4 * 4) != 0)))) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_1c8);
                fStack_1c4 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
                pSVar11 = aSStack_1c8;
                pCStack_194 = param_1;
                pCStack_190 = param_1;
                fVar10 = 0.4;
                fStack_14 = fStack_1c4;
                core_xform_cpp_FUN_00591530
                          (&DAT_007bcc94,&param_1->field_0x1134 + DAT_007bcce0 * 0x30);
                puVar8 = &uStack_78;
                uStack_78 = uStack_108;
                afStack_74[(uint)bVar5 * -2] = afStack_11c[(uint)bVar5 * -2 + 6];
                afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                     afStack_11c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
                core_actor_cpp_FUN_00408d70(param_1,puVar8);
                pCVar7 = &CStack_12c;
                CStack_12c._0_4_ = CStack_f0._0_4_;
                *(uint *)((int)&CStack_12c + (uint)bVar5 * -8 + 4) =
                     *(uint *)(auStack_e4 + (uint)bVar5 * -8 + -8);
                pCVar6 = param_1;
                *(uint *)((int)&CStack_12c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                     *(uint *)(auStack_e4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -4);
                core_enemy_cpp_FUN_00488110(pCVar6,pCVar7,fVar10,pSVar11);
              }
            }
            else if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1[1].field_0xc * 4) != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_27c);
              fStack_278 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
              pSVar11 = aSStack_27c;
              pCStack_248 = param_1;
              pCStack_244 = param_1;
              fVar10 = 0.4;
              fStack_14 = fStack_278;
              core_xform_cpp_FUN_00591530
                        (&DAT_007bcc94,&param_1->field_0x1134 + DAT_007bcce4 * 0x30);
              puVar8 = &uStack_120;
              uStack_120 = auStack_14c[2];
              afStack_11c[(uint)bVar5 * -2] = (float)auStack_14c[(uint)bVar5 * -2 + 3];
              afStack_11c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                   (float)auStack_14c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
              core_actor_cpp_FUN_00408d70(param_1,puVar8);
              pCVar7 = &CStack_a8;
              CStack_a8._0_4_ = CStack_18c._0_4_;
              *(uint *)((int)&CStack_a8 + (uint)bVar5 * -8 + 4) =
                   *(uint *)(auStack_180 + (uint)bVar5 * -8 + -8);
              pCVar6 = param_1;
              *(uint *)((int)&CStack_a8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                   *(uint *)(auStack_180 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -4);
              core_enemy_cpp_FUN_00488110(pCVar6,pCVar7,fVar10,pSVar11);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)puVar13,1,1);
        }
      }
    }
    else if (uVar1 < 7) {
      iVar2 = *(int *)&param_1->field_0x10a78;
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)puVar13,1,1);
      }
      else {
        iVar2 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0xfc))(iVar2);
        if (iVar2 == 0) {
          fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x3e4ccccd,0x3f000000);
          *(float *)&param_1->field_0x10a74 = fStack_14;
          fStack_1c = core_motion_cpp_FUN_00503e60((CMotionController *)puVar13);
          dStack_54 = (double)fStack_1c;
          fStack_14 = fStack_1c;
          if (fStack_1c <= (float)_DAT_005cc849) {
            fStack_18 = 0x40200000;
            if (((1.0 <= dStack_54) && (dStack_54 <= _DAT_005cc851)) ||
               ((dStack_3c = (double)fStack_1c, (float)_DAT_005cc859 <= fStack_1c &&
                (dStack_3c <= _DAT_005cc861)))) {
              if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1[1].field_0xc * 4) != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_240);
                fStack_23c = (float)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
                pSVar11 = aSStack_240;
                pCStack_20c = param_1;
                pCStack_208 = param_1;
                fVar10 = 0.4;
                fStack_14 = fStack_23c;
                core_xform_cpp_FUN_00591530
                          (&DAT_007bcc94,&param_1->field_0x1134 + DAT_007bcce4 * 0x30);
                pfVar9 = afStack_74 + 2;
                afStack_74[2] = (float)uStack_9c;
                afStack_74[(uint)bVar5 * -2 + 3] = afStack_98[(uint)bVar5 * -2];
                afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
                     afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
                core_actor_cpp_FUN_00408d70(param_1,pfVar9);
                pCVar7 = &CStack_c0;
                CStack_c0._0_4_ = CStack_138._0_4_;
                *(uint *)((int)&CStack_c0 + (uint)bVar5 * -8 + 4) =
                     *(uint *)((int)&CStack_138 + (uint)bVar5 * -8 + 4);
                pCVar6 = param_1;
                *(uint *)((int)&CStack_c0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                     *(uint *)((int)&CStack_138 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
                core_enemy_cpp_FUN_00488110(pCVar6,pCVar7,fVar10,pSVar11);
              }
            }
            else {
              dStack_44 = (double)fStack_1c;
              if (((((float)_DAT_005cc869 <= fStack_1c) && (dStack_44 <= _DAT_005cc871)) ||
                  ((dStack_2c = (double)fStack_1c, (float)_DAT_005cc879 <= fStack_1c &&
                   (dStack_2c <= _DAT_005cc849)))) &&
                 (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1[1].field_0x4 * 4) != 0)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_204);
                fStack_200 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
                pSVar11 = aSStack_204;
                pCStack_1d0 = param_1;
                pCStack_1cc = param_1;
                fVar10 = 0.4;
                fStack_14 = fStack_200;
                core_xform_cpp_FUN_00591530
                          (&DAT_007bcc94,&param_1->field_0x1134 + DAT_007bcce0 * 0x30);
                pfVar9 = afStack_98 + 2;
                afStack_98[2] = afStack_11c[2];
                afStack_98[(uint)bVar5 * -2 + 3] = afStack_11c[(uint)bVar5 * -2 + 3];
                afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
                     afStack_11c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
                core_actor_cpp_FUN_00408d70(param_1,pfVar9);
                pCVar7 = &CStack_84;
                CStack_84._0_4_ = CStack_fc._0_4_;
                *(uint *)((int)&CStack_84 + (uint)bVar5 * -8 + 4) =
                     *(uint *)((int)&CStack_fc + (uint)bVar5 * -8 + 4);
                pCVar6 = param_1;
                *(uint *)((int)&CStack_84 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                     *(uint *)((int)&CStack_fc + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
                core_enemy_cpp_FUN_00488110(pCVar6,pCVar7,fVar10,pSVar11);
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)puVar13,1,1);
        }
      }
    }
    else if ((uVar1 == 0xe) && (*(int *)&param_1->field_0x10a64 == 0)) {
      core_skeleton_cpp_FUN_005469a0(puVar13,0);
      puVar8 = &uStack_150;
      uStack_150 = uStack_d8;
      auStack_14c[(uint)bVar5 * -2] = auStack_d4[(uint)bVar5 * -2];
      auStack_14c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           auStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      core_actor_cpp_FUN_00408d70(param_1,puVar8);
      blood_type = BLOOD_TYPE_RED;
      CStack_15c._0_4_ = CStack_cc._0_4_;
      *(uint *)((int)&CStack_15c + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_cc + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&CStack_15c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_cc + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(g_CGorePtr,&CStack_15c,blood_type);
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0xb0))(param_1,0x32,0x41c80000);
      *(uint *)&param_1->field_0x10a64 = 1;
    }
    if ((*(int *)&param_1->field_0x10a78 != 0) && (0.0 <= fStack_18)) {
      *(float *)&param_1->field_0x2594 =
           param_2 * (float)_DAT_005cc881 * *(float *)&param_1->field_0x10a60;
      core_charactr_cpp_FUN_0042b2a0(param_1,param_2 * *(float *)&param_1->field_0x10a60);
      fVar12 = 0.5235988;
      auStack_e4._0_4_ = 0;
      fVar10 = 3.0;
      auStack_e4._8_4_ = fStack_18;
      pCVar7 = (CVector3f *)auStack_e4;
      auStack_e4._4_4_ = 0;
      pCVar4 = (CPathMap *)
               (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                         (*(int *)&param_1->field_0x10a78);
      iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20)
                         ,pCVar4,pCVar7,fVar10,fVar12);
      if (iVar2 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,1,1);
        *(uint *)&param_1->field_0x2578 = 0;
      }
    }
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    fStack_24 = param_2 * *(float *)&param_1->field_0x10a60;
    while (0.0 < fStack_24) {
      iVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                        ((CMotionController *)&param_1->field_0x2b4,&fStack_24);
      if (iVar2 != 0x11) {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,iVar2);
      }
    }
    if (0.0 < *(float *)&param_1->field_0x10a74) {
      *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
    }
    *(float *)&param_1->field_0x34 =
         *(float *)&param_1->field_0x2578 + *(float *)&param_1->field_0x34;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)param_1);
    iVar2 = core_charactr_cpp_FUN_00424430((CCharacter *)param_1);
    if (iVar2 != 0) {
      core_charactr_cpp_FUN_00423a10(param_1,param_2);
      fStack_60 = *(float *)&param_1->field_0x2588 * param_2;
      puVar13 = &param_1->field_0x2b4;
      fStack_5c = *(float *)&param_1->field_0x258c * param_2;
      fStack_58 = *(float *)&param_1->field_0x2590 * param_2;
      fStack_b4 = fStack_60;
      afStack_b0[(uint)bVar5 * -2] = afStack_74[(uint)bVar5 * -2 + 6];
      afStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
      fStack_174 = fStack_b4 + *(float *)&param_1->field_0x257c;
      afStack_170[0] = afStack_b0[0] + *(float *)&param_1->field_0x2580;
      afStack_170[1] = afStack_b0[1] + *(float *)&param_1->field_0x2584;
      auStack_168 = (byte  [4])fStack_174;
      afStack_164[(uint)bVar5 * -2] = afStack_170[(uint)bVar5 * -2];
      afStack_164[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      iVar2 = core_motion_cpp_FUN_005035c0(puVar13);
      if (*(int *)(iVar2 + 0x24) != 1) {
        auStack_168 = (byte  [4])((float)auStack_168 + *(float *)&param_1->field_0x2508);
        afStack_164[0] = afStack_164[0] + *(float *)&param_1->field_0x250c;
        afStack_164[1] = afStack_164[1] + *(float *)&param_1->field_0x2510;
      }
      core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)auStack_168);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
              ((CDeformableModelInstance *)&param_1->field_0x2b4);
    core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
    if (*(int *)&param_1->field_0x10a64 == 0) {
      core_charactr_cpp_FUN_00427060(param_1,*(uint *)(param_1 + 1),DAT_007bccf0,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x23f4 + *(int *)(param_1 + 1) * 4) != 0) {
        core_charactr_cpp_FUN_00427060
                  (param_1,*(uint *)&param_1[1].field_0x4,DAT_007bcce8,0x3e4ccccd);
      }
      core_charactr_cpp_FUN_00427060
                (param_1,*(uint *)&param_1[1].field_0x8,DAT_007bccf4,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1[1].field_0x8 * 4) != 0) {
        core_charactr_cpp_FUN_00427060
                  (param_1,*(uint *)&param_1[1].field_0xc,DAT_007bccec,0x3e4ccccd);
      }
      core_charactr_cpp_FUN_00427130
                ((CCharacter *)param_1,*(int *)&param_1[1].field_0x20,DAT_007bccdc,0.7);
      core_charactr_cpp_FUN_00426f30(param_1);
    }
  }
  return;
}
