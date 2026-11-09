// Name: core_ghoul.cpp_FUN_004c6eb0
// Address: 004c6eb0
// Address Range: [[004c6eb0, 004c8c89]]
// Convention: unknown
// Signature: void core_ghoul_cpp_FUN_004c6eb0(CGhoul *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_ghoul_cpp_FUN_004c6eb0(CGhoul *param_1,float param_2)

{
  byte *puVar1;
  uint uVar2;
  CGame *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  CGhoul *pCVar6;
  CPathMap *pCVar7;
  CMotionController *this_ptr;
  uint uVar8;
  uint *puVar9;
  float *pfVar10;
  char *pcVar11;
  uint *puVar12;
  char *pcVar13;
  char cVar14;
  byte bVar15;
  float10 fVar16;
  float10 fVar17;
  float afStackY_135c [920];
  CVector3f *pCVar18;
  CGore *this_ptr_00;
  CVector3f *pCVar19;
  EBloodType EVar21;
  ulonglong uVar20;
  float fVar22;
  int iVar23;
  float fVar24;
  byte auStack_4dc [100];
  SDamageInfo aSStack_478 [4];
  float fStack_474;
  uint uStack_45c;
  float fStack_458;
  uint uStack_454;
  CGhoul *pCStack_444;
  CGhoul *pCStack_440;
  SDamageInfo aSStack_43c [4];
  float fStack_438;
  CGhoul *pCStack_408;
  CGhoul *pCStack_404;
  SDamageInfo aSStack_400 [4];
  float fStack_3fc;
  CGhoul *pCStack_3cc;
  CGhoul *pCStack_3c8;
  char acStack_3c4 [32];
  uint auStack_3a4 [6];
  uint uStack_38c;
  float fStack_388;
  float fStack_37c;
  float fStack_374;
  float afStack_370 [4];
  float fStack_360;
  uint uStack_35c;
  float afStack_358 [5];
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  CVector3f CStack_338;
  CVector3f CStack_32c;
  uint uStack_320;
  float afStack_31c [5];
  float fStack_308;
  float fStack_304;
  float fStack_300;
  uint uStack_2fc;
  CVector3f CStack_2f0;
  uint uStack_2e4;
  float afStack_2e0 [4];
  float fStack_2d0;
  byte auStack_2cc [12];
  uint uStack_2c0;
  float afStack_2bc [2];
  CVector3f CStack_2b4;
  float fStack_2a8;
  float afStack_2a4 [2];
  CVector3f CStack_29c;
  CVector3f CStack_290;
  uint uStack_284;
  float afStack_280 [5];
  uint uStack_26c;
  float afStack_260 [3];
  float afStack_254 [3];
  float fStack_248;
  float fStack_244;
  float fStack_240;
  uint uStack_23c;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float afStack_220 [5];
  uint uStack_20c;
  uint uStack_208;
  float fStack_204;
  float fStack_200;
  float afStack_1fc [4];
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float afStack_1d0 [3];
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  CVector3f CStack_1ac;
  CVector3f CStack_1a0;
  uint uStack_194;
  float afStack_190 [5];
  uint uStack_17c;
  CVector3f CStack_170;
  byte auStack_164 [12];
  CVector3f CStack_158;
  byte auStack_14c [4];
  float afStack_148 [2];
  CVector3f CStack_140;
  float fStack_134;
  float afStack_130 [5];
  uint uStack_11c;
  uint uStack_110;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  CVector3f CStack_f8;
  CVector3f CStack_ec;
  uint uStack_e0;
  float afStack_dc [5];
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  int iStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  int iStack_84;
  int iStack_7c;
  float fStack_78;
  float fStack_74;
  int iStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  int iStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  float fStack_20;
  int iStack_1c;
  CDeformableModelInstance *pCStack_18;
  float fStack_14;
  
  bVar15 = 0;
  iVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1);
  if (iVar4 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_94 = param_2 * *(float *)&param_1->field_0xcdcc;
  pCStack_18 = (CDeformableModelInstance *)&param_1->field_0x158;
switchD_004c795a_caseD_e:
  if (0.0 < fStack_94) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)pCStack_18,&fStack_94);
    switch(iVar4) {
    case 5:
      iStack_1c = 1;
      if ((((*(int *)&param_1->field_0xcde4 != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x10c))(),
           iVar4 == 0)) &&
          (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))(),
          iVar4 == 0)) &&
         (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xe8))
                            (*(int *)&param_1->field_0xcde4,param_1), iVar4 != 0)) {
        fStack_64 = 0x40200000;
        uStack_20c = 0;
        uStack_208 = 0;
        fStack_204 = 0x40200000;
        core_actor_cpp_FUN_00408b80(param_1);
        fStack_2a8 = fStack_1e8;
        afStack_2a4[(uint)bVar15 * -2] = afStack_1fc[(uint)bVar15 * -2 + 6];
        afStack_2a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_1fc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
        fVar24 = fStack_2a8 - *(float *)(*(int *)&param_1->field_0xcde4 + 0x20);
        fVar22 = afStack_2a4[1] - *(float *)(*(int *)&param_1->field_0xcde4 + 0x28);
        if (1.0 < SQRT(fVar22 * fVar22 + fVar24 * fVar24)) {
          iStack_1c = 0;
        }
        iVar4 = *(int *)&param_1->field_0xcde4;
        if (((ABS(afStack_2a4[0] - *(float *)(iVar4 + 0x24)) <= (float)_DAT_005c42bd) &&
            ((iStack_1c == 0 ||
             (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xec))(iVar4,param_1), iVar4 != 0))))
           && (iStack_1c != 0)) break;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)pCStack_18,1,1);
      break;
    default:
      core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,iVar4);
      break;
    case 10:
      if (*(int *)&param_1->field_0xcde4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)pCStack_18,1,1);
      }
      else {
        pCVar6 = (CGhoul *)(**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))();
        if (pCVar6 == param_1) {
          iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x10c))();
          if (iVar4 == 0) {
            (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x1c))();
            puVar9 = auStack_3a4;
            puVar12 = &uStack_38c;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar12 = *puVar9;
              puVar9 = puVar9 + (uint)bVar15 * -2 + 1;
              puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
            }
            fVar24 = fStack_37c - fStack_388;
            pfVar10 = (float *)(*(int *)&param_1->field_0xcde4 + 0x24 + (uint)bVar15 * -8);
            auStack_14c = *(byte (*) [4])(*(int *)&param_1->field_0xcde4 + 0x20);
            afStack_148[(uint)bVar15 * -2] = *pfVar10;
            afStack_148[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] = pfVar10[(uint)bVar15 * -2 + 1];
            afStack_148[0] = fVar24 * (float)_DAT_005c430d + afStack_148[0];
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_478);
            fStack_474 = (float)core_actor_cpp_FUN_0040ce40(0x41700000);
            fStack_14 = fStack_474;
            core_actor_cpp_FUN_00408bf0(*(uint *)&param_1->field_0xcde4);
            uStack_2e4 = afStack_dc[2];
            afStack_2e0[(uint)bVar15 * -2] = afStack_dc[(uint)bVar15 * -2 + 3];
            afStack_2e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_dc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
            if (&uStack_45c != &uStack_2e4) {
              uStack_45c = uStack_2e4;
              fStack_458 = afStack_2e0[0];
              uStack_454 = afStack_2e0[1];
            }
            pCStack_444 = param_1;
            pCStack_440 = param_1;
            (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x108))
                      (*(int *)&param_1->field_0xcde4);
            dStack_c8 = (double)fStack_474;
            if (0.0 < dStack_c8) {
              fVar17 = (float10)fStack_474 * (float10)_DAT_005c4315 * (float10)_DAT_005c4305;
              EVar21 = BLOOD_TYPE_RED;
              round();
              iStack_84 = (int)ROUND(fVar17);
              core_gore_cpp_FUN_004ce9c0
                        (g_CGorePtr,(CVector3f *)auStack_14c,(CVector3f *)0x0,iStack_84,EVar21);
            }
            if (*(float *)(*(int *)&param_1->field_0xcde4 + 0x2538) <= 0.0) {
              (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf0))();
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)pCStack_18,1,1);
            }
            (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
          }
          else {
            (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf0))();
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)pCStack_18,1,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)pCStack_18,1,1);
        }
      }
      break;
    case 0xb:
    case 0xc:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(pCStack_18);
      core_skeleton_cpp_FUN_0054dbd0(pCStack_18);
      uStack_110 = afStack_190[2];
      afStack_130[(uint)bVar15 * -2 + 9] = afStack_190[(uint)bVar15 * -2 + 3];
      afStack_130[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
           afStack_190[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      core_actor_cpp_FUN_00408b80(param_1);
      uVar20 = 0x4140000041000000;
      CStack_1ac._0_4_ = CStack_ec._0_4_;
      *(uint *)((int)&CStack_1ac + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_ec + (uint)bVar15 * -8 + 4);
      *(uint *)((int)&CStack_1ac + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_ec + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
      fStack_14 = (float)core_actor_cpp_FUN_0040ce40(uVar20);
      fVar17 = (float10)fStack_14 * (float10)_DAT_005c4305;
      EVar21 = BLOOD_TYPE_RED;
      round();
      iStack_70 = (int)ROUND(fVar17);
      core_gore_cpp_FUN_004ce9c0(g_CGorePtr,&CStack_1ac,(CVector3f *)0x0,iStack_70,EVar21);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(pCStack_18);
      core_skeleton_cpp_FUN_0054dbd0(pCStack_18);
      uStack_35c = uStack_26c;
      afStack_358[(uint)bVar15 * -2] = afStack_280[(uint)bVar15 * -2 + 6];
      afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_280[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
      core_actor_cpp_FUN_00408b80(param_1);
      uVar20 = 0x4140000041000000;
      CStack_140._0_4_ = CStack_338._0_4_;
      *(uint *)((int)&CStack_140 + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_338 + (uint)bVar15 * -8 + 4);
      *(uint *)((int)&CStack_140 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_338 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
      fStack_14 = (float)core_actor_cpp_FUN_0040ce40(uVar20);
      fVar17 = (float10)fStack_14 * (float10)_DAT_005c4305;
      EVar21 = BLOOD_TYPE_RED;
      round();
      iStack_7c = (int)ROUND(fVar17);
      core_gore_cpp_FUN_004ce9c0(g_CGorePtr,&CStack_140,(CVector3f *)0x0,iStack_7c,EVar21);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(pCStack_18);
      core_skeleton_cpp_FUN_0054dbd0(pCStack_18);
      uStack_320 = uStack_2fc;
      afStack_31c[(uint)bVar15 * -2] = afStack_31c[(uint)bVar15 * -2 + 9];
      afStack_31c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_31c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
      core_actor_cpp_FUN_00408b80(param_1);
      uVar20 = 0x4140000041000000;
      CStack_32c._0_4_ = CStack_2f0._0_4_;
      *(uint *)((int)&CStack_32c + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_2f0 + (uint)bVar15 * -8 + 4);
      *(uint *)((int)&CStack_32c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_2f0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
      fStack_14 = (float)core_actor_cpp_FUN_0040ce40(uVar20);
      fVar17 = (float10)fStack_14 * (float10)_DAT_005c4305;
      EVar21 = BLOOD_TYPE_RED;
      round();
      iStack_98 = (int)ROUND(fVar17);
      core_gore_cpp_FUN_004ce9c0(g_CGorePtr,&CStack_32c,(CVector3f *)0x0,iStack_98,EVar21);
      iVar4 = core_actor_cpp_FUN_0040cf40(0.5);
      if (iVar4 == 0) {
        pcVar11 = "ghoul-dig-?.wav @1.3";
      }
      else {
        pcVar11 = "ghoul-eat-?.wav @1.3";
      }
      pcVar13 = acStack_3c4;
      do {
        cVar14 = *pcVar11;
        *pcVar13 = cVar14;
        if (cVar14 == '\0') break;
        cVar14 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar13[1] = cVar14;
        pcVar13 = pcVar13 + 2;
      } while (cVar14 != '\0');
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
    }
    goto switchD_004c795a_caseD_e;
  }
  fStack_14 = (float)core_motion_cpp_FUN_004fc350(pCStack_18);
  dStack_a8 = (double)param_2;
  *(float *)&param_1->field_0x2524 =
       fStack_14 * (float)_DAT_005c42ad * param_2 * *(float *)&param_1->field_0xcdcc;
  core_charactr_cpp_FUN_00434850(param_1);
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)pCStack_18);
  iStack_34 = *(int *)(pSVar5 + 0x24);
  if (iStack_34 == 0x11) {
    fVar17 = (float10)_DAT_005c42b5;
    *(float *)&param_1->field_0x2528 = *(float *)&param_1->field_0x2528 * (float)_DAT_005c42bd;
    *(float *)&param_1->field_0x2524 =
         (float)((float10)dStack_a8 * fVar17 * (float10)*(float *)&param_1->field_0xcdcc);
  }
  iVar4 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    fStack_28 = -1.0;
    puVar1 = &param_1->field_0x158;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)puVar1);
    switch(*(uint *)(pSVar5 + 0x24)) {
    case 0:
      if (*(float *)&param_1->field_0xd0b0 <= 0.0) {
        iVar4 = *(int *)&param_1->field_0xd0b4;
        if (iVar4 == 0) {
          iVar4 = core_enemy_cpp_FUN_00489ff0((CEnemy *)param_1,param_2);
          if (iVar4 != 0) goto LAB_004c7fd6;
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1);
          if (*(int *)&param_1->field_0xcde4 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,1,1);
            iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1->field_0xd0a4);
            if ((iVar4 == 0) ||
               (iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1->field_0xd0a8), iVar4 == 0)
               ) {
              uVar8 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
              *(uint *)&param_1->field_0xd0a4 = uVar8;
            }
          }
        }
        else {
          fStack_230 = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_22c = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_228 = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
          afStack_358[2] = fStack_230;
          afStack_358[(uint)bVar15 * -2 + 3] = afStack_280[(uint)bVar15 * -2 + 0x15];
          afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
               afStack_280[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16];
          fStack_344 = afStack_358[2];
          afStack_358[(uint)bVar15 * -2 + 6] = afStack_358[(uint)bVar15 * -2 + 3];
          afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
               afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
          fStack_90 = fStack_33c * fStack_33c + fStack_344 * fStack_344 + fStack_340 * fStack_340;
          if (SQRT(fStack_90) < (float)_DAT_005c42bd) {
            fVar24 = *(float *)&param_1->field_0x2538 + param_2;
            *(float *)&param_1->field_0xd0b8 = *(float *)&param_1->field_0xd0b8 - param_2;
            *(float *)&param_1->field_0x2538 = fVar24;
            if ((float)_DAT_005c42fd < fVar24) {
              *(uint *)&param_1->field_0x2538 = 0x42c80000;
            }
            if (*(float *)&param_1->field_0xd0b8 < 0.0) {
              *(uint *)&param_1->field_0xd0b8 = 0;
              *(uint *)&param_1->field_0xd0b4 = 0;
            }
          }
        }
      }
      else {
        *(float *)&param_1->field_0xd0b0 = *(float *)&param_1->field_0xd0b0 - param_2;
      }
      break;
    case 1:
    case 0x11:
      if ((*(int *)&param_1->field_0xd0bc != 0) && (iStack_34 == 1)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,0x11,1);
      }
      if (0.0 < *(float *)&param_1->field_0xd0b0) {
        *(float *)&param_1->field_0xd0b0 = *(float *)&param_1->field_0xd0b0 - param_2;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,0,1);
      }
      else {
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        uStack_24 = (uint)(*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd07c * 4) !=
                          0);
        if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd084 * 4) != 0) {
          uStack_24 = uStack_24 + 1;
        }
        iVar4 = (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) + 0x10c))();
        pCVar3 = g_CGamePtr;
        if (iVar4 == 0) {
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1);
          iVar4 = *(int *)&param_1->field_0xcde4;
          if (iVar4 == 0) {
            iVar4 = core_enemy_cpp_FUN_00489ff0((CEnemy *)param_1,param_2);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,0,1);
            }
          }
          else {
            fStack_248 = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_244 = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_240 = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
            fStack_308 = fStack_248;
            afStack_31c[(uint)bVar15 * -2 + 6] = afStack_280[(uint)bVar15 * -2 + 0xf];
            afStack_31c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
                 afStack_280[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
            fStack_304 = 0.0;
            if (((*(float *)&param_1->field_0x2538 < (float)_DAT_005c42e5) && (0 < (int)uStack_24))
               && (*(int *)&param_1->field_0xd0b4 == 0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004c6c80(param_1,param_2);
            }
            iVar4 = *(int *)&param_1->field_0xd0b4;
            if (iVar4 == 0) {
              fVar22 = 0.17453292;
              fVar24 = 1.0;
              auStack_164._0_4_ = 0;
              auStack_164._8_4_ = 0x40200000;
              pCVar19 = (CVector3f *)auStack_164;
              auStack_164._4_4_ = 0;
              pCVar7 = (CPathMap *)
                       (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                                 (*(int *)&param_1->field_0xcde4);
              iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                ((CCharacter *)param_1,
                                 (CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),pCVar7,pCVar19
                                 ,fVar24,fVar22);
              if (iVar4 < 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)&param_1->field_0x158,0,1);
              }
              else if (((0 < iVar4) && (0 < (int)uStack_24)) &&
                      ((*(float *)&param_1->field_0xcde0 <= 0.0 &&
                       ((iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) +
                                             0xf4))(), iVar4 == 0 &&
                        (*(float *)&param_1->field_0xd068 <= 0.0)))))) {
                fStack_44 = SQRT(fStack_300 * fStack_300 +
                                 fStack_308 * fStack_308 + fStack_304 * fStack_304);
                fStack_2c = 0.0;
                fStack_40 = 0.0;
                fStack_48 = 0.0;
                if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd084 * 4) != 0) {
                  fStack_2c = (1.0 - ABS(fStack_44 - 0x4059999A) / 0x4059999A) *
                              (float)_DAT_005c42ed;
                }
                if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd07c * 4) != 0) {
                  fStack_40 = (1.0 - ABS(fStack_44 - 0x40200000) / 0x40200000) *
                              (float)_DAT_005c42f5;
                }
                fStack_3c = fStack_44;
                iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xe8))
                                  (*(int *)&param_1->field_0xcde4,param_1);
                if (iVar4 != 0) {
                  fStack_48 = (1.0 - ABS(fStack_3c - 0x40200000) / 0x40200000) *
                              (float)_DAT_005c42ed;
                }
                fStack_4c = fStack_2c + fStack_40;
                fStack_54 = fStack_4c + fStack_48;
                if (0.0 < fStack_54) {
                  fStack_50 = (float)core_actor_cpp_FUN_0040ce40(0);
                  if (fStack_2c <= fStack_50) {
                    if (fStack_4c <= fStack_50) {
                      iVar4 = 0xb;
                    }
                    else {
                      iVar4 = 0xc;
                    }
                  }
                  else {
                    iVar4 = 2;
                  }
                  fStack_14 = fStack_50;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            ((CMotionController *)&param_1->field_0x158,iVar4,1);
                  *(uint *)&param_1->field_0xcde0 = 0x3f333333;
                }
              }
            }
            else {
              fVar22 = 0.0;
              fVar24 = 3.0;
              pCVar19 = (CVector3f *)&DAT_02cfd900;
              pCVar7 = (CPathMap *)(**(code **)(*(int *)(iVar4 + 0x154) + 0xc4))(iVar4);
              iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                ((CCharacter *)param_1,
                                 (CVector3f *)(*(int *)&param_1->field_0xd0b4 + 0x20),pCVar7,pCVar19
                                 ,fVar24,fVar22);
              if (0 < iVar4) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)&param_1->field_0x158,0,1);
                fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x41200000);
                *(float *)&param_1->field_0xd0b8 = fStack_14;
              }
              if (iVar4 < 0) {
                *(uint *)&param_1->field_0xd0b8 = 0x41f00000;
                *(uint *)&param_1->field_0xd0b4 = 0;
              }
              if (iStack_34 == 1) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)&param_1->field_0x158,0x11,1);
              }
            }
          }
        }
        else {
          if (*(int *)&param_1->field_0xd064 < 0) {
            cVar14 = *(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd07c * 4) != 0;
            if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd084 * 4) != 0) {
              cVar14 = cVar14 + '\x01';
            }
            if (cVar14 != '\0') {
              if (cVar14 == '\x01') {
                *(uint *)&param_1->field_0xd064 = 0xe;
                *(uint *)&pCVar3->field_0x244 = 1;
              }
              else {
                iVar4 = core_actor_cpp_FUN_0040cf40(0.5);
                *(uint *)&param_1->field_0xd064 = (iVar4 == 0) + 0xd;
                *(uint *)&g_CGamePtr->field_0x244 = 1;
              }
              goto LAB_004c84bd;
            }
            *(uint *)&param_1->field_0xd064 = 0;
          }
          else {
LAB_004c84bd:
            if (*(int *)&param_1->field_0xd064 != 0) {
              uStack_38 = 0x40000000;
              if (*(int *)&param_1->field_0xd064 == 0xe) {
                uStack_38 = 0x40B00000;
              }
              fVar22 = 0.08726646;
              fVar24 = 0.5;
              CStack_29c._8_4_ = uStack_38;
              pCVar19 = &CStack_29c;
              CStack_29c._0_4_ = 0;
              iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              CStack_29c._4_4_ = 0;
              pCVar7 = (CPathMap *)(**(code **)(*(int *)(iVar4 + 0x154) + 0xc4))(iVar4);
              core_skeleton_cpp_FUN_0054dbd0(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x158,0);
              pfVar10 = afStack_220 + 2;
              afStack_220[2] = (float)uStack_17c;
              afStack_220[(uint)bVar15 * -2 + 3] = afStack_190[(uint)bVar15 * -2 + 6];
              afStack_220[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                   afStack_190[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
              core_actor_cpp_FUN_00408b80(*(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),pfVar10);
              pCVar18 = &CStack_290;
              CStack_290._0_4_ = CStack_170._0_4_;
              *(uint *)((int)&CStack_290 + (uint)bVar15 * -8 + 4) =
                   *(uint *)(auStack_164 + (uint)bVar15 * -8 + -8);
              pCVar6 = param_1;
              *(uint *)((int)&CStack_290 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                   *(uint *)(auStack_164 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + -4);
              iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                ((CCharacter *)pCVar6,pCVar18,pCVar7,pCVar19,fVar24,fVar22);
              if (((0 < iVar4) &&
                  (iVar4 = (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) +
                                       0x10c))(), iVar4 == 2)) &&
                 (core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            ((CMotionController *)&param_1->field_0x158,
                             *(int *)&param_1->field_0xd064,1),
                 *(int *)&param_1->field_0xd064 == 0xd)) {
                iVar4 = *(int *)&param_1->field_0x154;
                fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x3f000000);
                (**(code **)(iVar4 + 0x34))(param_1,"ghoul-scream-!-?.wav");
              }
              break;
            }
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,0,1);
        }
      }
      break;
    case 2:
      if (*(int *)&param_1->field_0xcde4 == 0) {
LAB_004c7fd6:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,1,1);
      }
      else {
        iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))();
        if (iVar4 == 0) {
          fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x3e4ccccd);
          *(float *)&param_1->field_0xcde0 = fStack_14;
          if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd084 * 4) != 0) {
            fStack_5c = core_motion_cpp_FUN_004fc930((CMotionController *)puVar1);
            dStack_b8 = (double)fStack_5c;
            fStack_14 = fStack_5c;
            if ((fStack_5c <= (float)_DAT_005c42cd) && (fStack_28 = 0x4059999A, 1.0 <= dStack_b8))
            {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_43c);
              fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x40e00000);
              fStack_438 = fStack_14;
              if (*(int *)&param_1->field_0xd0bc != 0) {
                fStack_438 = fStack_14 * (float)_DAT_005c42cd;
              }
              pCStack_408 = param_1;
              pCStack_404 = param_1;
              core_xform_cpp_FUN_00583260
                        (&DAT_01d22d58,&param_1->field_0xfd8 + _DAT_01d22da8 * 0x30,0x3e4ccccd);
              pfVar10 = afStack_280 + 0xb;
              afStack_254[0] = (float)uStack_11c;
              afStack_280[(uint)bVar15 * -2 + 0xc] = afStack_130[(uint)bVar15 * -2 + 6];
              afStack_280[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
                   afStack_130[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
              core_actor_cpp_FUN_00408b80(param_1,pfVar10);
              pfVar10 = afStack_1fc + 0xb;
              afStack_1d0[0] = afStack_130[2];
              afStack_1fc[(uint)bVar15 * -2 + 0xc] = afStack_130[(uint)bVar15 * -2 + 3];
              pCVar6 = param_1;
              afStack_1fc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
                   afStack_130[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
              iVar4 = core_enemy_cpp_FUN_004893f0(pCVar6,pfVar10);
              if (iVar4 != 0) {
                (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)puVar1,1,1);
        }
      }
      break;
    case 10:
      if (((*(int *)&param_1->field_0xcdd0 == 0) && (*(int *)&param_1->field_0xd070 < 1)) &&
         (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_0054dbd0(puVar1);
        uStack_194 = uStack_2c0;
        afStack_190[(uint)bVar15 * -2] = afStack_2bc[(uint)bVar15 * -2];
        afStack_190[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_2bc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
        core_actor_cpp_FUN_00408b80(param_1);
        pCVar19 = &CStack_1a0;
        EVar21 = BLOOD_TYPE_RED;
        CStack_1a0._0_4_ = CStack_f8._0_4_;
        *(uint *)((int)&CStack_1a0 + (uint)bVar15 * -8 + 4) =
             *(uint *)((int)&CStack_f8 + (uint)bVar15 * -8 + 4);
        this_ptr_00 = g_CGorePtr;
        *(uint *)((int)&CStack_1a0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
             *(uint *)((int)&CStack_f8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        core_gore_cpp_FUN_004cec40(this_ptr_00,pCVar19,EVar21);
        *(uint *)&param_1->field_0xcdd0 = 1;
      }
      *(uint *)&param_1->field_0xd0bc = 0;
      if (((0 < *(int *)&param_1->field_0xd074) || (0 < *(int *)&param_1->field_0xd070)) &&
         (iVar4 = *(int *)&param_1->field_0xd05c - _DAT_01c5fad0,
         *(int *)&param_1->field_0xd05c = iVar4, iVar4 < 1)) {
        if (*(int *)&param_1->field_0xd070 < 1) {
          *(int *)&param_1->field_0xd074 = *(int *)&param_1->field_0xd074 + -1;
        }
        if ((0 < *(int *)&param_1->field_0xd074) || (0 < *(int *)&param_1->field_0xd070)) {
          fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x3f800000);
          fVar17 = (float10)fStack_14 * (float10)_DAT_005c42c5;
          iVar23 = 1;
          iVar4 = 0xf;
          this_ptr = (CMotionController *)round();
          *(int *)&param_1->field_0xd05c = (int)ROUND(fVar17);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr,iVar4,iVar23);
        }
      }
      if (0 < *(int *)&param_1->field_0xd070) {
        iVar4 = *(int *)&param_1->field_0xd060;
        if (iVar4 < 1) {
          iVar4 = iVar4 + _DAT_01c5fad0;
          iStack_58 = 0;
          *(int *)&param_1->field_0xd060 = iVar4;
          if (iVar4 < 0) {
            (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1);
            iVar4 = *(int *)&param_1->field_0xcde4;
            if (iVar4 != 0) {
              afStack_2e0[2] = *(float *)&param_1->field_0x20 - *(float *)(iVar4 + 0x20);
              afStack_2e0[3] = *(float *)&param_1->field_0x24 - *(float *)(iVar4 + 0x24);
              fStack_2d0 = *(float *)&param_1->field_0x28 - *(float *)(iVar4 + 0x28);
              afStack_1fc[2] = afStack_2e0[2];
              afStack_1fc[(uint)bVar15 * -2 + 3] = afStack_2e0[(uint)bVar15 * -2 + 3];
              afStack_1fc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                   afStack_2e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
              if (afStack_370 + 2 != afStack_1fc + 2) {
                afStack_370[2] = afStack_1fc[2];
                afStack_370[3] = afStack_1fc[3];
                fStack_360 = fStack_1ec;
              }
              fStack_78 = fStack_360 * fStack_360 +
                          afStack_370[2] * afStack_370[2] + afStack_370[3] * afStack_370[3];
              fStack_74 = (float)(((int)fStack_78 >> 1) + _DAT_01d1a0a4);
              if (fStack_74 < (float)_DAT_005c42b5) goto LAB_004c7c47;
            }
            if (iStack_58 == 0) break;
          }
          else {
            *(uint *)&param_1->field_0xd060 = 0;
          }
LAB_004c7c47:
          fStack_20 = *(float *)&param_1->field_0x3280;
          if (fStack_20 < *(float *)&param_1->field_0x327c) {
            fStack_20 = *(float *)&param_1->field_0x2490;
          }
          if (fStack_20 < *(float *)&param_1->field_0x327c) {
            fStack_20 = *(float *)&param_1->field_0x327c + (float)_DAT_005c42d5;
          }
          iVar4 = 0;
          do {
            fStack_8c = (float)iVar4 * _DAT_005c431d * _DAT_005c4321;
            fStack_14 = (float)iVar4;
            core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)param_1);
            fVar17 = (float10)fcos((float10)fStack_8c);
            fVar16 = (float10)fsin((float10)fStack_8c);
            fStack_30 = (float)core_setcolid_cpp_FUN_0053de10
                                         (g_CDemonSetPtr,*(uint *)&param_1->field_0x20,
                                          *(uint *)&param_1->field_0x28,
                                          (float)(fVar16 * (float10)_DAT_005c4325),
                                          (float)(fVar17 * (float10)_DAT_005c4325),
                                          *(uint *)&param_1->field_0x3270,
                                          *(float *)&param_1->field_0x24 +
                                          *(float *)&param_1->field_0x327c);
            fStack_14 = fStack_30;
            core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
            if (fStack_30 < 1.0) break;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 4);
          if (iVar4 < 4) {
            *(uint *)&param_1->field_0xd060 = 3;
            *(uint *)&param_1->field_0xcde4 = 0;
          }
          else {
            fStack_14 = (float)(*(int *)&param_1->field_0xd070 + 1);
            fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x41200000);
            *(float *)&param_1->field_0x2538 = fStack_14;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,0x10,1);
          }
        }
        else {
          iVar4 = iVar4 - _DAT_01c5fad0;
          *(int *)&param_1->field_0xd060 = iVar4;
          if (iVar4 < 1) {
            fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0);
            fVar17 = -(float10)fStack_14 * (float10)_DAT_005c42dd;
            round();
            *(int *)&param_1->field_0xd060 = (int)ROUND(fVar17);
          }
        }
      }
      break;
    case 0xb:
      if (*(int *)&param_1->field_0xcde4 == 0) {
LAB_004c887a:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)puVar1,1,1);
      }
      else {
        iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))();
        if (iVar4 == 0) {
          fStack_28 = 0x40200000;
        }
        else {
          pCVar6 = (CGhoul *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))();
          if (pCVar6 != param_1) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)puVar1,1,1);
          }
        }
      }
      break;
    case 0xc:
      if ((*(int *)&param_1->field_0xcde4 == 0) ||
         (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))(),
         iVar4 != 0)) goto LAB_004c887a;
      fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x3e4ccccd);
      *(float *)&param_1->field_0xcde0 = fStack_14;
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd07c * 4) != 0) {
        fStack_60 = core_motion_cpp_FUN_004fc930((CMotionController *)puVar1);
        dStack_b0 = (double)fStack_60;
        fStack_14 = fStack_60;
        if (fStack_60 <= (float)_DAT_005c42cd) {
          fStack_28 = 0x40200000;
          if (1.0 <= dStack_b0) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_400);
            fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x40e00000);
            fStack_3fc = fStack_14;
            if (*(int *)&param_1->field_0xd0bc != 0) {
              fStack_3fc = fStack_14 * (float)_DAT_005c42cd;
            }
            pCStack_3cc = param_1;
            pCStack_3c8 = param_1;
            core_xform_cpp_FUN_00583260
                      (&DAT_01d22d4c,&param_1->field_0xfd8 + _DAT_01d22da4 * 0x30,0x3ecccccd);
            puVar9 = &uStack_284;
            uStack_284 = uStack_23c;
            afStack_280[(uint)bVar15 * -2] = afStack_280[(uint)bVar15 * -2 + 0x12];
            afStack_280[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_280[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13];
            core_actor_cpp_FUN_00408b80(param_1,puVar9);
            pfVar10 = afStack_280 + 2;
            afStack_280[2] = (float)uStack_e0;
            afStack_280[(uint)bVar15 * -2 + 3] = afStack_dc[(uint)bVar15 * -2];
            pCVar6 = param_1;
            afStack_280[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                 afStack_dc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            iVar4 = core_enemy_cpp_FUN_004893f0(pCVar6,pfVar10);
            if (iVar4 != 0) {
              (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar4 = *(int *)&param_1->field_0xd058 - _DAT_01c5fad0;
      *(int *)&param_1->field_0xd058 = iVar4;
      if (iVar4 < 1) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
        fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x41700000);
        fVar17 = (float10)fStack_14 * (float10)_DAT_005c42c5;
        round();
        *(int *)&param_1->field_0xd058 = (int)ROUND(fVar17);
      }
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1);
      if (*(int *)&param_1->field_0xcde4 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,0,1);
      }
    }
    if (((0.0 <= fStack_28) && (*(float *)&param_1->field_0xd068 <= 0.0)) &&
       (*(int *)&param_1->field_0xcde4 != 0)) {
      fVar22 = 0.5235988;
      fVar24 = 3.0;
      auStack_2cc._0_4_ = 0;
      auStack_2cc._8_4_ = fStack_28;
      pCVar19 = (CVector3f *)auStack_2cc;
      auStack_2cc._4_4_ = 0;
      pCVar7 = (CPathMap *)
               (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                         (*(int *)&param_1->field_0xcde4);
      core_skeleton_cpp_FUN_0054dbd0(*(int *)&param_1->field_0xcde4 + 0x158,0);
      afStack_260[0] = afStack_31c[2];
      afStack_280[(uint)bVar15 * -2 + 9] = afStack_31c[(uint)bVar15 * -2 + 3];
      afStack_280[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
           afStack_31c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      core_actor_cpp_FUN_00408b80(*(uint *)&param_1->field_0xcde4,afStack_280 + 8);
      pCVar18 = &CStack_2b4;
      CStack_2b4._0_4_ = CStack_158._0_4_;
      *(uint *)((int)&CStack_2b4 + (uint)bVar15 * -8 + 4) =
           *(uint *)(auStack_14c + (uint)bVar15 * -8 + -8);
      pCVar6 = param_1;
      *(uint *)((int)&CStack_2b4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)(auStack_14c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + -4);
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)pCVar6,pCVar18,pCVar7,pCVar19,fVar24,fVar22);
      if (iVar4 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,1,1);
        *(uint *)&param_1->field_0x2508 = 0;
      }
    }
    goto LAB_004c7010;
  }
  uVar2 = *(uint *)&param_1->field_0x273c;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
      iVar4 = 1;
    }
    else {
LAB_004c799c:
      iVar4 = 0;
    }
LAB_004c6fe9:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,iVar4,1);
  }
  else {
    if (uVar2 < 3) {
      iVar4 = 0x11;
      goto LAB_004c6fe9;
    }
    if (uVar2 != 3) goto LAB_004c799c;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
LAB_004c7010:
  if (0.0 < *(float *)&param_1->field_0xcde0) {
    *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
  iVar4 = core_charactr_cpp_FUN_0042ccf0((CCharacter *)param_1);
  if (iVar4 != 0) {
    if ((*(int *)&param_1->field_0xcde4 != 0) &&
       (pCVar6 = (CGhoul *)(**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))(),
       pCVar6 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xcde4);
    }
    core_charactr_cpp_FUN_0042c1e0(param_1);
    fStack_200 = *(float *)&param_1->field_0x2518 * param_2;
    afStack_1fc[0] = *(float *)&param_1->field_0x251c * param_2;
    afStack_1fc[1] = *(float *)&param_1->field_0x2520 * param_2;
    fStack_104 = fStack_200;
    afStack_130[(uint)bVar15 * -2 + 0xc] = afStack_1fc[(uint)bVar15 * -2];
    afStack_130[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
         afStack_1fc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    fStack_134 = fStack_104 + *(float *)&param_1->field_0x250c;
    afStack_130[0] = fStack_100 + *(float *)&param_1->field_0x2510;
    afStack_130[1] = fStack_fc + *(float *)&param_1->field_0x2514;
    fStack_1c4 = fStack_134;
    afStack_1fc[(uint)bVar15 * -2 + 0xf] = afStack_130[(uint)bVar15 * -2];
    afStack_1fc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] =
         afStack_130[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    fStack_1b8 = fStack_1c4 + *(float *)&param_1->field_0x249c;
    fStack_1b4 = fStack_1c0 + *(float *)&param_1->field_0x24a0;
    fStack_1b0 = fStack_1bc + *(float *)&param_1->field_0x24a4;
    fStack_224 = fStack_1b8;
    afStack_220[(uint)bVar15 * -2] = afStack_1fc[(uint)bVar15 * -2 + 0x12];
    afStack_220[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_1fc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a4;
    core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)&fStack_224);
  }
  puVar1 = &param_1->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)puVar1);
  dStack_c0 = (double)*(float *)&param_1->field_0xd068;
  if (0.0 < dStack_c0) {
    fStack_6c = (float)core_motion_cpp_FUN_004fca20(puVar1,*(uint *)&param_1->field_0xd06c);
    fVar24 = 1.0 - *(float *)&param_1->field_0xd068;
    fStack_68 = 1.0 - fVar24 * fVar24 * fVar24;
    fStack_14 = fStack_6c;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
              ((CDeformableModelInstance *)puVar1,*(int *)&param_1->field_0xd06c,fStack_6c,fStack_68
               ,_DAT_01d22dc4,core_skeleton_cpp_FUN_0054bef0);
    fVar24 = *(float *)&param_1->field_0xd068 - param_2 / _DAT_005e0a3c;
    *(float *)&param_1->field_0xd068 = fVar24;
    if (fVar24 < 0.0) {
      *(uint *)&param_1->field_0xd068 = 0;
    }
  }
  core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  if (((float)_DAT_005c4335 < ABS(*(float *)&param_1->field_0x2508)) ||
     ((float)_DAT_005c4335 <
      SQRT(*(float *)&param_1->field_0x2514 * *(float *)&param_1->field_0x2514 +
           *(float *)&param_1->field_0x250c * *(float *)&param_1->field_0x250c +
           *(float *)&param_1->field_0x2510 * *(float *)&param_1->field_0x2510))) {
    iVar4 = core_sound_cpp_FUN_00560af0(0x02CF5680,*(uint *)&param_1->field_0xd054);
    if (iVar4 == 0) {
      FUN_005a28c0
                (auStack_4dc,"ghoul-walk-?.wav *%f",(double)*(float *)&param_1->field_0xcdcc);
      uVar8 = (**(code **)(*(int *)&param_1->field_0x154 + 0x30))(param_1);
      *(uint *)&param_1->field_0xd054 = uVar8;
    }
  }
  else {
    core_sound_cpp_FUN_00560b00(0x02CF5680,*(uint *)&param_1->field_0xd054);
  }
  if (*(int *)&param_1->field_0xcdd0 == 0) {
    iVar4 = *(int *)&param_1->field_0xd09c;
    if (*(int *)(&param_1->field_0x2298 + iVar4 * 4) == 0) {
      fVar24 = 0.5;
      iVar23 = _DAT_01d22dc8;
    }
    else {
      core_charactr_cpp_FUN_0042fdc0(param_1,*(uint *)&param_1->field_0xd078,_DAT_01d22db4);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd078 * 4) != 0) {
        core_charactr_cpp_FUN_0042fdc0(param_1,*(uint *)&param_1->field_0xd07c,_DAT_01d22dac);
      }
      core_charactr_cpp_FUN_0042fdc0(param_1,*(uint *)&param_1->field_0xd080,_DAT_01d22db8);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd080 * 4) != 0) {
        core_charactr_cpp_FUN_0042fdc0(param_1,*(uint *)&param_1->field_0xd084,_DAT_01d22db0);
      }
      fVar24 = 0.7;
      iVar4 = *(int *)&param_1->field_0xd0a0;
      iVar23 = _DAT_01d22da0;
    }
    core_charactr_cpp_FUN_0042fe90((CCharacter *)param_1,iVar4,iVar23,fVar24);
    core_charactr_cpp_FUN_0042fc90();
  }
  if ((*(int *)&param_1->field_0xd0b4 != 0) && (iStack_34 == 0x11)) {
    fStack_1dc = *(float *)&param_1->field_0x20 - *(float *)&param_1->field_0xd0c4;
    fStack_1d8 = *(float *)&param_1->field_0x24 - *(float *)&param_1->field_0xd0c8;
    fStack_1d4 = *(float *)&param_1->field_0x28 - *(float *)&param_1->field_0xd0cc;
    fStack_374 = fStack_1dc;
    afStack_370[(uint)bVar15 * -2] = afStack_1fc[(uint)bVar15 * -2 + 9];
    afStack_370[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_1fc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
    if (param_2 * (float)_DAT_005c42d5 <=
        SQRT(afStack_370[1] * afStack_370[1] + fStack_374 * fStack_374)) {
      *(uint *)&param_1->field_0xd0c0 = 0x3f800000;
    }
    else {
      param_2 = *(float *)&param_1->field_0xd0c0 - param_2;
      *(float *)&param_1->field_0xd0c0 = param_2;
      if (param_2 < 0.0) {
        *(uint *)&param_1->field_0xd0b8 = 0x41f00000;
        *(uint *)&param_1->field_0xd0b4 = 0;
        *(uint *)&param_1->field_0xd0bc = 0;
      }
    }
  }
  if (&param_1->field_0xd0c4 == &param_1->field_0x20) {
    return;
  }
  *(uint *)&param_1->field_0xd0c4 = *(uint *)&param_1->field_0x20;
  *(uint *)&param_1->field_0xd0c8 = *(uint *)&param_1->field_0x24;
  *(uint *)&param_1->field_0xd0cc = *(uint *)&param_1->field_0x28;
  return;
}
