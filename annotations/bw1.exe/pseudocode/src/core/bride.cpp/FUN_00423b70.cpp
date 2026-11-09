// Name: core_bride.cpp_FUN_00423b70
// Address: 00423b70
// Address Range: [[00423b70, 00424835]]
// Convention: unknown
// Signature: void core_bride_cpp_FUN_00423b70(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bride_cpp_FUN_00423b70(CEnemy *param_1,float param_2)

{
  byte *puVar1;
  uint uVar2;
  int iVar3;
  SMotion *pSVar4;
  uint uVar5;
  CPathMap *pCVar6;
  byte bVar7;
  float afStackY_1174 [937];
  CEnemy *pCVar8;
  CVector3f *pCVar9;
  float *pfVar10;
  uint *puVar11;
  float fVar12;
  EBloodType blood_type;
  SDamageInfo *pSVar13;
  float fVar14;
  CMotionController *this_ptr;
  SDamageInfo aSStack_2b8 [4];
  float fStack_2b4;
  CEnemy *pCStack_284;
  CEnemy *pCStack_280;
  SDamageInfo aSStack_27c [4];
  uint uStack_278;
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
  CVector3f CStack_180;
  float fStack_174;
  float afStack_170 [2];
  byte auStack_168 [12];
  uint uStack_15c;
  float afStack_158 [2];
  CVector3f CStack_150;
  CVector3f CStack_144;
  CVector3f CStack_138;
  byte auStack_12c [12];
  uint uStack_120;
  float afStack_11c [2];
  CVector3f CStack_114;
  float fStack_108;
  float afStack_104 [2];
  CVector3f CStack_fc;
  uint uStack_f0;
  float afStack_ec [2];
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [5];
  uint uStack_b4;
  uint uStack_a8;
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [5];
  float afStack_78 [3];
  uint uStack_6c;
  uint uStack_60;
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
  
  bVar7 = 0;
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar3 != 0) {
    if (0.0 <= *(float *)&param_1[1].field_0x28) {
      *(float *)&param_1[1].field_0x28 = *(float *)&param_1[1].field_0x28 - param_2;
    }
    puVar1 = &param_1->field_0x158;
    fStack_1c = -1.0;
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)puVar1);
    uVar2 = *(uint *)(pSVar4 + 0x24);
    if (uVar2 < 5) {
      if (uVar2 == 0) {
        iVar3 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        if (iVar3 == 0) {
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
          if (*(int *)&param_1->field_0xc1e8 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)puVar1,1,1);
            iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x2c);
            if ((iVar3 == 0) &&
               (iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x30), iVar3 == 0)
               ) {
              uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                (param_1,"ub-attack?.wav");
              *(uint *)&param_1[1].field_0x30 = uVar5;
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,1,1);
        }
      }
      else if (uVar2 == 1) {
        if (*(float *)&param_1[1].field_0x28 <= 0.0) {
          fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x41200000,0x41a00000);
          *(float *)&param_1[1].field_0x28 = fStack_14;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)puVar1,3,1);
          iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x2c);
          if ((iVar3 == 0) &&
             (iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x30), iVar3 == 0))
          {
            uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"ub-howl?.wav");
            *(uint *)&param_1[1].field_0x30 = uVar5;
          }
        }
        *(float *)&param_1->field_0x2524 =
             param_2 * *(float *)&param_1->field_0xc1d0 * (float)_DAT_005d4f58;
        core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
        if ((((*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xc * 4) == 0) &&
             (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x4 * 4) == 0)) ||
            (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x20 * 4) == 0)) &&
           ((0.0 <= *(float *)&param_1[1].field_0x24 &&
            (fVar12 = *(float *)&param_1[1].field_0x24 + param_2,
            *(float *)&param_1[1].field_0x24 = fVar12, (float)_DAT_005d4f50 <= fVar12)))) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_27c);
          uStack_278 = 0x461c3f9a;
          pCStack_248 = param_1;
          pCStack_244 = param_1;
          (**(code **)(*(int *)&param_1->field_0x154 + 0x108))(param_1,aSStack_27c);
          *(uint *)&param_1[1].field_0x24 = 0xbf800000;
        }
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        puVar1 = &param_1->field_0x158;
        if (*(int *)&param_1->field_0xc1e8 == 0) {
          iVar3 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
          if (iVar3 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)puVar1,0,1);
          }
        }
        else {
          fVar14 = 0.17453292;
          fVar12 = 1.0;
          auStack_168._0_4_ = 0;
          auStack_168._8_4_ = 0x40200000;
          pCVar9 = (CVector3f *)auStack_168;
          auStack_168._4_4_ = 0;
          pCVar6 = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                             (*(int *)&param_1->field_0xc1e8);
          iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),pCVar6,pCVar9,
                             fVar12,fVar14);
          if (iVar3 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)puVar1,0,1);
          }
          else if (((0 < iVar3) && (*(float *)&param_1->field_0xc1e4 <= 0.0)) &&
                  (iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))
                                     (*(int *)&param_1->field_0xc1e8), iVar3 == 0)) {
            iVar3 = core_actor_cpp_FUN_0040cd00(0.5);
            if (iVar3 == 0) {
              iVar3 = 6;
            }
            else {
              iVar3 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)puVar1,iVar3,1);
            iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x2c);
            if ((iVar3 == 0) &&
               (iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x30), iVar3 == 0)
               ) {
              uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                (param_1,"ub-attack?.wav");
              *(uint *)&param_1[1].field_0x30 = uVar5;
            }
          }
        }
      }
    }
    else if (uVar2 < 6) {
      iVar3 = *(int *)&param_1->field_0xc1e8;
      if (iVar3 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)puVar1,1,1);
      }
      else {
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3);
        if (iVar3 == 0) {
          fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x3e4ccccd,0x3f000000);
          *(float *)&param_1->field_0xc1e4 = fStack_14;
          fStack_20 = core_motion_cpp_FUN_00525020((CMotionController *)puVar1);
          dStack_34 = (double)fStack_20;
          fStack_14 = fStack_20;
          if (fStack_20 <= (float)_DAT_005d4f58) {
            fStack_1c = 0x40200000;
            if ((dStack_34 < 1.0) || (_DAT_005d4f40 < dStack_34)) {
              dStack_3c = (double)fStack_20;
              if (((float)_DAT_005d4f58 <= fStack_20) &&
                 ((dStack_3c <= _DAT_005d4f60 &&
                  (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x4 * 4) != 0)))) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_240);
                fStack_23c = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
                pSVar13 = aSStack_240;
                pCStack_20c = param_1;
                pCStack_208 = param_1;
                fVar12 = 0.4;
                fStack_14 = fStack_23c;
                core_xform_cpp_FUN_005b5080
                          (&DAT_007c5340,&param_1->field_0xfd8 + DAT_007c538c * 0x30);
                puVar11 = &uStack_f0;
                uStack_f0 = uStack_b4;
                afStack_ec[(uint)bVar7 * -2] = afStack_c8[(uint)bVar7 * -2 + 6];
                afStack_ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                     afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
                core_actor_cpp_FUN_00408b40(param_1,puVar11);
                pCVar9 = &CStack_e4;
                CStack_e4._0_4_ = CStack_180._0_4_;
                *(uint *)((int)&CStack_e4 + (uint)bVar7 * -8 + 4) =
                     *(uint *)((int)&CStack_180 + (uint)bVar7 * -8 + 4);
                pCVar8 = param_1;
                *(uint *)((int)&CStack_e4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
                     *(uint *)((int)&CStack_180 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
                core_enemy_cpp_FUN_004a0770(pCVar8,pCVar9,fVar12,pSVar13);
              }
            }
            else if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xc * 4) != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_2b8);
              fStack_2b4 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
              pSVar13 = aSStack_2b8;
              pCStack_284 = param_1;
              pCStack_280 = param_1;
              fVar12 = 0.4;
              fStack_14 = fStack_2b4;
              core_xform_cpp_FUN_005b5080(&DAT_007c5340,&param_1->field_0xfd8 + DAT_007c5390 * 0x30)
              ;
              puVar11 = &uStack_15c;
              uStack_15c = afStack_c8[2];
              afStack_158[(uint)bVar7 * -2] = afStack_c8[(uint)bVar7 * -2 + 3];
              afStack_158[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                   afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
              core_actor_cpp_FUN_00408b40(param_1,puVar11);
              pCVar9 = &CStack_18c;
              CStack_18c._0_4_ = CStack_d8._0_4_;
              *(uint *)((int)&CStack_18c + (uint)bVar7 * -8 + 4) =
                   *(uint *)((int)&CStack_d8 + (uint)bVar7 * -8 + 4);
              pCVar8 = param_1;
              *(uint *)((int)&CStack_18c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
                   *(uint *)((int)&CStack_d8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
              core_enemy_cpp_FUN_004a0770(pCVar8,pCVar9,fVar12,pSVar13);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)puVar1,1,1);
        }
      }
    }
    else if (uVar2 < 7) {
      iVar3 = *(int *)&param_1->field_0xc1e8;
      if (iVar3 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)puVar1,1,1);
      }
      else {
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3);
        if (iVar3 == 0) {
          fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x3e4ccccd,0x3f000000);
          *(float *)&param_1->field_0xc1e4 = fStack_14;
          fStack_18 = core_motion_cpp_FUN_00525020((CMotionController *)puVar1);
          dStack_44 = (double)fStack_18;
          fStack_14 = fStack_18;
          if (fStack_18 <= (float)_DAT_005d4f38) {
            fStack_1c = 0x40200000;
            if (((1.0 <= dStack_44) && (dStack_44 <= _DAT_005d4f40)) ||
               ((dStack_2c = (double)fStack_18, (float)_DAT_005d4f48 <= fStack_18 &&
                (dStack_2c <= _DAT_005d4f50)))) {
              if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xc * 4) != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_204);
                fStack_200 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
                pSVar13 = aSStack_204;
                pCStack_1d0 = param_1;
                pCStack_1cc = param_1;
                fVar12 = 0.4;
                fStack_14 = fStack_200;
                core_xform_cpp_FUN_005b5080
                          (&DAT_007c5340,&param_1->field_0xfd8 + DAT_007c5390 * 0x30);
                pfVar10 = afStack_8c + 2;
                afStack_8c[2] = (float)uStack_a8;
                afStack_8c[(uint)bVar7 * -2 + 3] = afStack_c8[(uint)bVar7 * -2 + 9];
                afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                     afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
                core_actor_cpp_FUN_00408b40(param_1,pfVar10);
                pCVar9 = &CStack_150;
                CStack_150._0_4_ = CStack_9c._0_4_;
                *(uint *)((int)&CStack_150 + (uint)bVar7 * -8 + 4) =
                     *(uint *)((int)&CStack_9c + (uint)bVar7 * -8 + 4);
                pCVar8 = param_1;
                *(uint *)((int)&CStack_150 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
                     *(uint *)((int)&CStack_9c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
                core_enemy_cpp_FUN_004a0770(pCVar8,pCVar9,fVar12,pSVar13);
              }
            }
            else {
              dStack_54 = (double)fStack_18;
              if (((((float)_DAT_005d4f58 <= fStack_18) && (dStack_54 <= _DAT_005d4f60)) ||
                  ((dStack_4c = (double)fStack_18, (float)_DAT_005d4f68 <= fStack_18 &&
                   (dStack_4c <= _DAT_005d4f38)))) &&
                 (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x4 * 4) != 0)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_1c8);
                fStack_1c4 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
                pSVar13 = aSStack_1c8;
                pCStack_194 = param_1;
                pCStack_190 = param_1;
                fVar12 = 0.4;
                fStack_14 = fStack_1c4;
                core_xform_cpp_FUN_005b5080
                          (&DAT_007c5340,&param_1->field_0xfd8 + DAT_007c538c * 0x30);
                puVar11 = &uStack_120;
                uStack_120 = uStack_6c;
                afStack_11c[(uint)bVar7 * -2] = afStack_8c[(uint)bVar7 * -2 + 9];
                afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                     afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
                core_actor_cpp_FUN_00408b40(param_1,puVar11);
                pCVar9 = &CStack_114;
                CStack_114._0_4_ = CStack_138._0_4_;
                *(uint *)((int)&CStack_114 + (uint)bVar7 * -8 + 4) =
                     *(uint *)(auStack_12c + (uint)bVar7 * -8 + -8);
                pCVar8 = param_1;
                *(uint *)((int)&CStack_114 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
                     *(uint *)(auStack_12c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4);
                core_enemy_cpp_FUN_004a0770(pCVar8,pCVar9,fVar12,pSVar13);
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)puVar1,1,1);
        }
      }
    }
    else if ((uVar2 == 0xe) && (*(int *)&param_1->field_0xc1d4 == 0)) {
      core_skeleton_cpp_FUN_00569040(puVar1,0);
      pfVar10 = afStack_8c + 5;
      afStack_78[0] = (float)uStack_60;
      afStack_8c[(uint)bVar7 * -2 + 6] = afStack_8c[(uint)bVar7 * -2 + 0xc];
      afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
      core_actor_cpp_FUN_00408b40(param_1,pfVar10);
      blood_type = BLOOD_TYPE_RED;
      CStack_fc._0_4_ = CStack_144._0_4_;
      *(uint *)((int)&CStack_fc + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_144 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_fc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_144 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(g_CGorePtr,&CStack_fc,blood_type);
      (**(code **)(*(int *)&param_1->field_0x154 + 0xa8))(param_1,0x32,0x41c80000);
      *(uint *)&param_1->field_0xc1d4 = 1;
    }
    if ((*(int *)&param_1->field_0xc1e8 != 0) && (0.0 <= fStack_1c)) {
      *(float *)&param_1->field_0x2524 =
           param_2 * (float)_DAT_005d4f70 * *(float *)&param_1->field_0xc1d0;
      core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
      fVar14 = 0.5235988;
      auStack_12c._0_4_ = 0;
      fVar12 = 3.0;
      auStack_12c._8_4_ = fStack_1c;
      pCVar9 = (CVector3f *)auStack_12c;
      auStack_12c._4_4_ = 0;
      pCVar6 = (CPathMap *)
               (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                         (*(int *)&param_1->field_0xc1e8);
      iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),
                         pCVar6,pCVar9,fVar12,fVar14);
      if (iVar3 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,1,1);
        *(uint *)&param_1->field_0x2508 = 0;
      }
    }
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    fStack_24 = param_2 * *(float *)&param_1->field_0xc1d0;
    while (0.0 < fStack_24) {
      iVar3 = core_motion_cpp_CMotionController_advance_FUN_00524270
                        ((CMotionController *)&param_1->field_0x158,&fStack_24);
      if (iVar3 != 0x11) {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,iVar3);
      }
    }
    if (0.0 < *(float *)&param_1->field_0xc1e4) {
      *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
    }
    *(float *)&param_1->field_0x34 =
         *(float *)&param_1->field_0x2508 + *(float *)&param_1->field_0x34;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)param_1);
    iVar3 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
    if (iVar3 != 0) {
      core_charactr_cpp_FUN_0042d700(param_1,param_2);
      fStack_108 = *(float *)&param_1->field_0x2518 * param_2;
      this_ptr = (CMotionController *)&param_1->field_0x158;
      afStack_104[0] = *(float *)&param_1->field_0x251c * param_2;
      afStack_104[1] = *(float *)&param_1->field_0x2520 * param_2;
      fStack_90 = fStack_108;
      afStack_8c[(uint)bVar7 * -2] = afStack_104[(uint)bVar7 * -2];
      afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_104[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      fStack_174 = fStack_90 + *(float *)&param_1->field_0x250c;
      afStack_170[0] = afStack_8c[0] + *(float *)&param_1->field_0x2510;
      afStack_170[1] = afStack_8c[1] + *(float *)&param_1->field_0x2514;
      fStack_cc = fStack_174;
      afStack_c8[(uint)bVar7 * -2] = afStack_170[(uint)bVar7 * -2];
      afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_170[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr);
      if (*(int *)(pSVar4 + 0x24) != 1) {
        fStack_cc = fStack_cc + *(float *)&param_1->field_0x249c;
        afStack_c8[0] = afStack_c8[0] + *(float *)&param_1->field_0x24a0;
        afStack_c8[1] = afStack_c8[1] + *(float *)&param_1->field_0x24a4;
      }
      core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_cc);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
              ((CDeformableModelInstance *)&param_1->field_0x158);
    core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
    if (*(int *)&param_1->field_0xc1d4 == 0) {
      core_charactr_cpp_FUN_00430a90(param_1,*(uint *)(param_1 + 1),DAT_007c539c,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x2298 + *(int *)(param_1 + 1) * 4) != 0) {
        core_charactr_cpp_FUN_00430a90
                  (param_1,*(uint *)&param_1[1].field_0x4,DAT_007c5394,0x3e4ccccd);
      }
      core_charactr_cpp_FUN_00430a90
                (param_1,*(uint *)&param_1[1].field_0x8,DAT_007c53a0,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x8 * 4) != 0) {
        core_charactr_cpp_FUN_00430a90
                  (param_1,*(uint *)&param_1[1].field_0xc,DAT_007c5398,0x3e4ccccd);
      }
      core_charactr_cpp_FUN_00430b60
                ((CCharacter *)param_1,*(int *)&param_1[1].field_0x20,DAT_007c5388,0.7);
      core_charactr_cpp_FUN_00430960(param_1);
    }
  }
  return;
}
