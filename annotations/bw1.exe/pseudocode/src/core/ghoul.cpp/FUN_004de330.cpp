// Name: core_ghoul.cpp_FUN_004de330
// Address: 004de330
// Address Range: [[004de330, 004e00fa]]
// Convention: unknown
// Signature: void core_ghoul_cpp_FUN_004de330(CGhoul *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_ghoul_cpp_FUN_004de330(CGhoul *param_1,float param_2)

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
  SDamageInfo *pSVar24;
  float fVar25;
  byte auStack_4dc [100];
  SDamageInfo aSStack_478 [4];
  float fStack_474;
  CGhoul *pCStack_444;
  CGhoul *pCStack_440;
  SDamageInfo aSStack_43c [4];
  float fStack_438;
  CGhoul *pCStack_408;
  CGhoul *pCStack_404;
  SDamageInfo aSStack_400 [4];
  float fStack_3fc;
  uint uStack_3e4;
  float fStack_3e0;
  uint uStack_3dc;
  CGhoul *pCStack_3cc;
  CGhoul *pCStack_3c8;
  char acStack_3c4 [32];
  uint auStack_3a4 [6];
  uint uStack_38c;
  float fStack_388;
  float fStack_37c;
  CVector3f CStack_374;
  uint uStack_368;
  float afStack_364 [2];
  byte auStack_35c [12];
  float fStack_350;
  float afStack_34c [5];
  CVector3f CStack_338;
  uint uStack_32c;
  float afStack_328 [5];
  CVector3f CStack_314;
  uint uStack_308;
  float afStack_304 [2];
  CVector3f CStack_2fc;
  uint uStack_2f0;
  float afStack_2ec [4];
  float fStack_2dc;
  uint uStack_2d8;
  CVector3f CStack_2cc;
  CVector3f CStack_2c0;
  float fStack_2b4;
  float afStack_2b0 [4];
  float fStack_2a0;
  CVector3f CStack_29c;
  uint uStack_290;
  float afStack_28c [2];
  CVector3f CStack_284;
  float fStack_278;
  float afStack_274 [5];
  float afStack_260 [3];
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  uint uStack_248;
  uint uStack_23c;
  float fStack_230;
  float afStack_22c [5];
  CVector3f CStack_218;
  float fStack_20c;
  float afStack_208 [2];
  CVector3f CStack_200;
  float fStack_1f4;
  float afStack_1f0 [2];
  CVector3f CStack_1e8;
  float fStack_1dc;
  float afStack_1d8 [4];
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  uint uStack_1b8;
  uint uStack_1ac;
  uint uStack_1a0;
  CVector3f CStack_194;
  uint uStack_188;
  float afStack_184 [2];
  byte auStack_17c [12];
  CVector3f CStack_170;
  float fStack_164;
  float afStack_160 [2];
  CVector3f CStack_158;
  byte auStack_14c [4];
  float afStack_148 [4];
  float fStack_138;
  float fStack_134;
  float afStack_130 [5];
  CVector3f CStack_11c;
  float fStack_110;
  float afStack_10c [5];
  CVector3f CStack_f8;
  float fStack_ec;
  float afStack_e8 [2];
  CVector3f CStack_e0;
  uint uStack_d4;
  float afStack_d0 [2];
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_a8;
  double dStack_a0;
  int iStack_98;
  float fStack_94;
  float fStack_90;
  int iStack_8c;
  int iStack_80;
  float fStack_7c;
  float fStack_78;
  int iStack_74;
  float fStack_70;
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
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_70 = param_2 * *(float *)&param_1->field_0xc1d0;
  pCStack_18 = (CDeformableModelInstance *)&param_1->field_0x158;
switchD_004dedc4_caseD_e:
  if (0.0 < fStack_70) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)pCStack_18,&fStack_70);
    switch(iVar4) {
    case 5:
      iStack_1c = 1;
      if ((((*(int *)&param_1->field_0xc1e8 != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x10c))(),
           iVar4 == 0)) &&
          (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))(),
          iVar4 == 0)) &&
         (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xe8))
                            (*(int *)&param_1->field_0xc1e8,param_1), iVar4 != 0)) {
        fStack_64 = 0x40200000;
        afStack_34c[2] = 0.0;
        afStack_34c[3] = 0.0;
        afStack_34c[4] = 0x40200000;
        core_actor_cpp_FUN_00408b40(param_1);
        fStack_2b4 = fStack_1f4;
        afStack_2b0[(uint)bVar15 * -2] = afStack_1f0[(uint)bVar15 * -2];
        afStack_2b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_1f0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
        fVar25 = fStack_2b4 - *(float *)(*(int *)&param_1->field_0xc1e8 + 0x20);
        fVar22 = afStack_2b0[1] - *(float *)(*(int *)&param_1->field_0xc1e8 + 0x28);
        if (1.0 < SQRT(fVar22 * fVar22 + fVar25 * fVar25)) {
          iStack_1c = 0;
        }
        iVar4 = *(int *)&param_1->field_0xc1e8;
        if (((ABS(afStack_2b0[0] - *(float *)(iVar4 + 0x24)) <= (float)_DAT_005e3cb1) &&
            ((iStack_1c == 0 ||
             (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xec))(iVar4,param_1), iVar4 != 0))))
           && (iStack_1c != 0)) break;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)pCStack_18,1,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,iVar4);
      break;
    case 10:
      if (*(int *)&param_1->field_0xc1e8 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)pCStack_18,1,1);
      }
      else {
        pCVar6 = (CGhoul *)(**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))();
        if (pCVar6 == param_1) {
          iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x10c))();
          if (iVar4 == 0) {
            (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x1c))();
            puVar9 = auStack_3a4;
            puVar12 = &uStack_38c;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar12 = *puVar9;
              puVar9 = puVar9 + (uint)bVar15 * -2 + 1;
              puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
            }
            fVar25 = fStack_37c - fStack_388;
            pfVar10 = (float *)(*(int *)&param_1->field_0xc1e8 + 0x24 + (uint)bVar15 * -8);
            auStack_14c = *(byte (*) [4])(*(int *)&param_1->field_0xc1e8 + 0x20);
            afStack_148[(uint)bVar15 * -2] = *pfVar10;
            afStack_148[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] = pfVar10[(uint)bVar15 * -2 + 1];
            afStack_148[0] = fVar25 * (float)_DAT_005e3d01 + afStack_148[0];
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_400);
            fStack_3fc = (float)core_actor_cpp_FUN_0040cc00(0x41700000);
            fStack_14 = fStack_3fc;
            core_actor_cpp_FUN_00408bb0(*(uint *)&param_1->field_0xc1e8);
            uStack_d4 = afStack_10c[2];
            afStack_d0[(uint)bVar15 * -2] = afStack_10c[(uint)bVar15 * -2 + 3];
            afStack_d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_10c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
            if (&uStack_3e4 != &uStack_d4) {
              uStack_3e4 = uStack_d4;
              fStack_3e0 = afStack_d0[0];
              uStack_3dc = afStack_d0[1];
            }
            pCStack_3cc = param_1;
            pCStack_3c8 = param_1;
            (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x108))
                      (*(int *)&param_1->field_0xc1e8);
            dStack_c8 = (double)fStack_3fc;
            if (0.0 < dStack_c8) {
              fVar17 = (float10)fStack_3fc * (float10)_DAT_005e3d09 * (float10)_DAT_005e3cf9;
              EVar21 = BLOOD_TYPE_RED;
              round();
              iStack_8c = (int)ROUND(fVar17);
              core_gore_cpp_FUN_004e6060
                        (g_CGorePtr,(CVector3f *)auStack_14c,(CVector3f *)0x0,iStack_8c,EVar21);
            }
            if (*(float *)(*(int *)&param_1->field_0xc1e8 + 0x2538) <= 0.0) {
              (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf0))();
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)pCStack_18,1,1);
            }
            (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
          }
          else {
            (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf0))();
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)pCStack_18,1,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)pCStack_18,1,1);
        }
      }
      break;
    case 0xb:
    case 0xc:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCStack_18);
      core_skeleton_cpp_FUN_00569040(pCStack_18);
      afStack_130[2] = (float)uStack_1ac;
      afStack_130[(uint)bVar15 * -2 + 3] = afStack_1d8[(uint)bVar15 * -2 + 0xc];
      afStack_130[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
           afStack_1d8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
      core_actor_cpp_FUN_00408b40(param_1);
      uVar20 = 0x4140000041000000;
      CStack_1e8._0_4_ = CStack_e0._0_4_;
      *(uint *)((int)&CStack_1e8 + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_e0 + (uint)bVar15 * -8 + 4);
      *(uint *)((int)&CStack_1e8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_e0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
      fStack_14 = (float)core_actor_cpp_FUN_0040cc00(uVar20);
      fVar17 = (float10)fStack_14 * (float10)_DAT_005e3cf9;
      EVar21 = BLOOD_TYPE_RED;
      round();
      iStack_74 = (int)ROUND(fVar17);
      core_gore_cpp_FUN_004e6060(g_CGorePtr,&CStack_1e8,(CVector3f *)0x0,iStack_74,EVar21);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCStack_18);
      core_skeleton_cpp_FUN_00569040(pCStack_18);
      uStack_368 = uStack_2d8;
      afStack_364[(uint)bVar15 * -2] = afStack_2ec[(uint)bVar15 * -2 + 6];
      afStack_364[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_2ec[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
      core_actor_cpp_FUN_00408b40(param_1);
      uVar20 = 0x4140000041000000;
      CStack_314._0_4_ = CStack_374._0_4_;
      *(uint *)((int)&CStack_314 + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_374 + (uint)bVar15 * -8 + 4);
      *(uint *)((int)&CStack_314 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_374 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
      fStack_14 = (float)core_actor_cpp_FUN_0040cc00(uVar20);
      fVar17 = (float10)fStack_14 * (float10)_DAT_005e3cf9;
      EVar21 = BLOOD_TYPE_RED;
      round();
      iStack_80 = (int)ROUND(fVar17);
      core_gore_cpp_FUN_004e6060(g_CGorePtr,&CStack_314,(CVector3f *)0x0,iStack_80,EVar21);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCStack_18);
      core_skeleton_cpp_FUN_00569040(pCStack_18);
      uStack_32c = uStack_308;
      afStack_328[(uint)bVar15 * -2] = afStack_304[(uint)bVar15 * -2];
      afStack_328[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_304[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      core_actor_cpp_FUN_00408b40(param_1);
      uVar20 = 0x4140000041000000;
      CStack_338._0_4_ = CStack_2fc._0_4_;
      *(uint *)((int)&CStack_338 + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_2fc + (uint)bVar15 * -8 + 4);
      *(uint *)((int)&CStack_338 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_2fc + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
      fStack_14 = (float)core_actor_cpp_FUN_0040cc00(uVar20);
      fVar17 = (float10)fStack_14 * (float10)_DAT_005e3cf9;
      EVar21 = BLOOD_TYPE_RED;
      round();
      iStack_98 = (int)ROUND(fVar17);
      core_gore_cpp_FUN_004e6060(g_CGorePtr,&CStack_338,(CVector3f *)0x0,iStack_98,EVar21);
      iVar4 = core_actor_cpp_FUN_0040cd00(0.5);
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
    goto switchD_004dedc4_caseD_e;
  }
  fStack_14 = (float)core_motion_cpp_FUN_00524a40(pCStack_18);
  dStack_a0 = (double)param_2;
  *(float *)&param_1->field_0x2524 =
       fStack_14 * (float)_DAT_005e3ca1 * param_2 * *(float *)&param_1->field_0xc1d0;
  core_charactr_cpp_FUN_00435320(param_1);
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)pCStack_18);
  iStack_34 = *(int *)(pSVar5 + 0x24);
  if (iStack_34 == 0x11) {
    fVar17 = (float10)_DAT_005e3ca9;
    *(float *)&param_1->field_0x2528 = *(float *)&param_1->field_0x2528 * (float)_DAT_005e3cb1;
    *(float *)&param_1->field_0x2524 =
         (float)((float10)dStack_a0 * fVar17 * (float10)*(float *)&param_1->field_0xc1d0);
  }
  iVar4 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    fStack_28 = -1.0;
    puVar1 = &param_1->field_0x158;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)puVar1);
    switch(*(uint *)(pSVar5 + 0x24)) {
    case 0:
      if (*(float *)&param_1->field_0xc2c4 <= 0.0) {
        iVar4 = *(int *)&param_1->field_0xc2c8;
        if (iVar4 == 0) {
          iVar4 = core_enemy_cpp_FUN_004a0fe0((CEnemy *)param_1,param_2);
          if (iVar4 != 0) goto LAB_004df445;
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1);
          if (*(int *)&param_1->field_0xc1e8 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&param_1->field_0x158,1,1);
            iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0xc2b8);
            if ((iVar4 == 0) ||
               (iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0xc2bc), iVar4 == 0)
               ) {
              uVar8 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
              *(uint *)&param_1->field_0xc2b8 = uVar8;
            }
          }
        }
        else {
          afStack_2b0[2] = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
          afStack_2b0[3] = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_2a0 = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
          afStack_22c[2] = afStack_2b0[2];
          afStack_22c[(uint)bVar15 * -2 + 3] = afStack_2b0[(uint)bVar15 * -2 + 3];
          afStack_22c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
               afStack_2b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
          fStack_20c = afStack_22c[2];
          afStack_208[(uint)bVar15 * -2] = afStack_22c[(uint)bVar15 * -2 + 3];
          afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_22c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
          fStack_94 = afStack_208[1] * afStack_208[1] +
                      fStack_20c * fStack_20c + afStack_208[0] * afStack_208[0];
          if (SQRT(fStack_94) < (float)_DAT_005e3cb1) {
            fVar25 = *(float *)&param_1->field_0x2538 + param_2;
            *(float *)&param_1->field_0xc2cc = *(float *)&param_1->field_0xc2cc - param_2;
            *(float *)&param_1->field_0x2538 = fVar25;
            if ((float)_DAT_005e3cf1 < fVar25) {
              *(uint *)&param_1->field_0x2538 = 0x42c80000;
            }
            if (*(float *)&param_1->field_0xc2cc < 0.0) {
              *(uint *)&param_1->field_0xc2cc = 0;
              *(uint *)&param_1->field_0xc2c8 = 0;
            }
          }
        }
      }
      else {
        *(float *)&param_1->field_0xc2c4 = *(float *)&param_1->field_0xc2c4 - param_2;
      }
      break;
    case 1:
    case 0x11:
      if ((*(int *)&param_1->field_0xc2d0 != 0) && (iStack_34 == 1)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0x11,1);
      }
      if (0.0 < *(float *)&param_1->field_0xc2c4) {
        *(float *)&param_1->field_0xc2c4 = *(float *)&param_1->field_0xc2c4 - param_2;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0,1);
      }
      else {
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        uStack_24 = (uint)(*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc290 * 4) !=
                          0);
        if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc298 * 4) != 0) {
          uStack_24 = uStack_24 + 1;
        }
        iVar4 = (**(code **)(*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x154) + 0x10c))();
        pCVar3 = g_CGamePtr;
        if (iVar4 == 0) {
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1);
          iVar4 = *(int *)&param_1->field_0xc1e8;
          if (iVar4 == 0) {
            iVar4 = core_enemy_cpp_FUN_004a0fe0((CEnemy *)param_1,param_2);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,0,1);
            }
          }
          else {
            fStack_254 = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_250 = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_24c = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
            fStack_350 = fStack_254;
            afStack_34c[(uint)bVar15 * -2] = afStack_274[(uint)bVar15 * -2 + 9];
            afStack_34c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_274[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
            afStack_34c[0] = 0.0;
            if (((*(float *)&param_1->field_0x2538 < (float)_DAT_005e3cd9) && (0 < (int)uStack_24))
               && (*(int *)&param_1->field_0xc2c8 == 0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004de100(param_1,param_2);
            }
            iVar4 = *(int *)&param_1->field_0xc2c8;
            if (iVar4 == 0) {
              fVar22 = 0.17453292;
              fVar25 = 1.0;
              auStack_17c._0_4_ = 0;
              auStack_17c._8_4_ = 0x40200000;
              pCVar19 = (CVector3f *)auStack_17c;
              auStack_17c._4_4_ = 0;
              pCVar7 = (CPathMap *)
                       (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                                 (*(int *)&param_1->field_0xc1e8);
              iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                                ((CCharacter *)param_1,
                                 (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),pCVar7,pCVar19
                                 ,fVar25,fVar22);
              if (iVar4 < 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&param_1->field_0x158,0,1);
              }
              else if (((0 < iVar4) && (0 < (int)uStack_24)) &&
                      ((*(float *)&param_1->field_0xc1e4 <= 0.0 &&
                       ((iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) +
                                             0xf4))(), iVar4 == 0 &&
                        (*(float *)&param_1->field_0xc27c <= 0.0)))))) {
                fStack_48 = SQRT(afStack_34c[1] * afStack_34c[1] +
                                 fStack_350 * fStack_350 + afStack_34c[0] * afStack_34c[0]);
                fStack_30 = 0.0;
                fStack_40 = 0.0;
                fStack_54 = 0.0;
                if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc298 * 4) != 0) {
                  fStack_30 = (1.0 - ABS(fStack_48 - 0x4059999A) / 0x4059999A) *
                              (float)_DAT_005e3ce1;
                }
                if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc290 * 4) != 0) {
                  fStack_40 = (1.0 - ABS(fStack_48 - 0x40200000) / 0x40200000) *
                              (float)_DAT_005e3ce9;
                }
                fStack_3c = fStack_48;
                iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xe8))
                                  (*(int *)&param_1->field_0xc1e8,param_1);
                if (iVar4 != 0) {
                  fStack_54 = (1.0 - ABS(fStack_3c - 0x40200000) / 0x40200000) *
                              (float)_DAT_005e3ce1;
                }
                fStack_50 = fStack_30 + fStack_40;
                fStack_4c = fStack_50 + fStack_54;
                if (0.0 < fStack_4c) {
                  fStack_44 = (float)core_actor_cpp_FUN_0040cc00(0);
                  if (fStack_30 <= fStack_44) {
                    if (fStack_50 <= fStack_44) {
                      iVar4 = 0xb;
                    }
                    else {
                      iVar4 = 0xc;
                    }
                  }
                  else {
                    iVar4 = 2;
                  }
                  fStack_14 = fStack_44;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                            ((CMotionController *)&param_1->field_0x158,iVar4,1);
                  *(uint *)&param_1->field_0xc1e4 = 0x3f333333;
                }
              }
            }
            else {
              fVar22 = 0.0;
              fVar25 = 3.0;
              pCVar19 = (CVector3f *)&DAT_02c8af28;
              pCVar7 = (CPathMap *)(**(code **)(*(int *)(iVar4 + 0x154) + 0xc4))(iVar4);
              iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                                ((CCharacter *)param_1,
                                 (CVector3f *)(*(int *)&param_1->field_0xc2c8 + 0x20),pCVar7,pCVar19
                                 ,fVar25,fVar22);
              if (0 < iVar4) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&param_1->field_0x158,0,1);
                fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x41200000);
                *(float *)&param_1->field_0xc2cc = fStack_14;
              }
              if (iVar4 < 0) {
                *(uint *)&param_1->field_0xc2cc = 0x41f00000;
                *(uint *)&param_1->field_0xc2c8 = 0;
              }
              if (iStack_34 == 1) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&param_1->field_0x158,0x11,1);
              }
            }
          }
        }
        else {
          if (*(int *)&param_1->field_0xc278 < 0) {
            cVar14 = *(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc290 * 4) != 0;
            if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc298 * 4) != 0) {
              cVar14 = cVar14 + '\x01';
            }
            if (cVar14 != '\0') {
              if (cVar14 == '\x01') {
                *(uint *)&param_1->field_0xc278 = 0xe;
                *(uint *)&pCVar3->field_0x23c = 1;
              }
              else {
                iVar4 = core_actor_cpp_FUN_0040cd00(0.5);
                *(uint *)&param_1->field_0xc278 = (iVar4 == 0) + 0xd;
                *(uint *)&g_CGamePtr->field_0x23c = 1;
              }
              goto LAB_004df92c;
            }
            *(uint *)&param_1->field_0xc278 = 0;
          }
          else {
LAB_004df92c:
            if (*(int *)&param_1->field_0xc278 != 0) {
              uStack_38 = 0x40000000;
              if (*(int *)&param_1->field_0xc278 == 0xe) {
                uStack_38 = 0x40B00000;
              }
              fVar22 = 0.08726646;
              fVar25 = 0.5;
              CStack_2cc._8_4_ = uStack_38;
              pCVar19 = &CStack_2cc;
              CStack_2cc._0_4_ = 0;
              iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
              CStack_2cc._4_4_ = 0;
              pCVar7 = (CPathMap *)(**(code **)(*(int *)(iVar4 + 0x154) + 0xc4))(iVar4);
              core_skeleton_cpp_FUN_00569040(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x158,0);
              puVar9 = &uStack_2f0;
              uStack_2f0 = uStack_1b8;
              afStack_2ec[(uint)bVar15 * -2] = afStack_1d8[(uint)bVar15 * -2 + 9];
              afStack_2ec[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                   afStack_1d8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
              core_actor_cpp_FUN_00408b40(*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),puVar9);
              pCVar18 = &CStack_29c;
              CStack_29c._0_4_ = CStack_218._0_4_;
              *(uint *)((int)&CStack_29c + (uint)bVar15 * -8 + 4) =
                   *(uint *)((int)&CStack_218 + (uint)bVar15 * -8 + 4);
              pCVar6 = param_1;
              *(uint *)((int)&CStack_29c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                   *(uint *)((int)&CStack_218 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
              iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                                ((CCharacter *)pCVar6,pCVar18,pCVar7,pCVar19,fVar25,fVar22);
              if (((0 < iVar4) &&
                  (iVar4 = (**(code **)(*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x154) +
                                       0x10c))(), iVar4 == 2)) &&
                 (core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                            ((CMotionController *)&param_1->field_0x158,
                             *(int *)&param_1->field_0xc278,1),
                 *(int *)&param_1->field_0xc278 == 0xd)) {
                iVar4 = *(int *)&param_1->field_0x154;
                fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x3f000000);
                (**(code **)(iVar4 + 0x34))(param_1,"ghoul-scream-!-?.wav");
              }
              break;
            }
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0,1);
        }
      }
      break;
    case 2:
      if (*(int *)&param_1->field_0xc1e8 == 0) {
LAB_004df445:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,1,1);
      }
      else {
        iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))();
        if (iVar4 == 0) {
          fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x3e4ccccd);
          *(float *)&param_1->field_0xc1e4 = fStack_14;
          if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc298 * 4) != 0) {
            fStack_5c = core_motion_cpp_FUN_00525020((CMotionController *)puVar1);
            dStack_c0 = (double)fStack_5c;
            fStack_14 = fStack_5c;
            if ((fStack_5c <= (float)_DAT_005e3cc1) && (fStack_28 = 0x4059999A, 1.0 <= dStack_c0))
            {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_43c);
              fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000);
              fStack_438 = fStack_14;
              if (*(int *)&param_1->field_0xc2d0 != 0) {
                fStack_438 = fStack_14 * (float)_DAT_005e3cc1;
              }
              pSVar24 = aSStack_43c;
              pCStack_408 = param_1;
              pCStack_404 = param_1;
              fVar25 = 0.2;
              core_xform_cpp_FUN_005b5080
                        (&DAT_01cd0d50,&param_1->field_0xfd8 + _DAT_01cd0da0 * 0x30);
              pfVar10 = afStack_274 + 5;
              afStack_260[0] = (float)uStack_188;
              afStack_274[(uint)bVar15 * -2 + 6] = afStack_184[(uint)bVar15 * -2];
              afStack_274[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
                   afStack_184[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
              core_actor_cpp_FUN_00408b40(param_1,pfVar10);
              pCVar19 = &CStack_11c;
              CStack_11c._0_4_ = CStack_170._0_4_;
              *(uint *)((int)&CStack_11c + (uint)bVar15 * -8 + 4) =
                   *(uint *)((int)&CStack_170 + (uint)bVar15 * -8 + 4);
              pCVar6 = param_1;
              *(uint *)((int)&CStack_11c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                   *(uint *)((int)&CStack_170 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
              iVar4 = core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar6,pCVar19,fVar25,pSVar24);
              if (iVar4 != 0) {
                (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)puVar1,1,1);
        }
      }
      break;
    case 10:
      if (((*(int *)&param_1->field_0xc1d4 == 0) && (*(int *)&param_1->field_0xc284 < 1)) &&
         (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_00569040(puVar1);
        uStack_1a0 = uStack_23c;
        afStack_1d8[(uint)bVar15 * -2 + 0xf] = afStack_274[(uint)bVar15 * -2 + 0xf];
        afStack_1d8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] =
             afStack_274[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
        core_actor_cpp_FUN_00408b40(param_1);
        pCVar19 = &CStack_200;
        EVar21 = BLOOD_TYPE_RED;
        CStack_200._0_4_ = CStack_158._0_4_;
        *(uint *)((int)&CStack_200 + (uint)bVar15 * -8 + 4) =
             *(uint *)(auStack_14c + (uint)bVar15 * -8 + -8);
        this_ptr_00 = g_CGorePtr;
        *(uint *)((int)&CStack_200 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
             *(uint *)(auStack_14c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + -4);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_00,pCVar19,EVar21);
        *(uint *)&param_1->field_0xc1d4 = 1;
      }
      *(uint *)&param_1->field_0xc2d0 = 0;
      if (((0 < *(int *)&param_1->field_0xc288) || (0 < *(int *)&param_1->field_0xc284)) &&
         (iVar4 = *(int *)&param_1->field_0xc270 - _DAT_01c43530,
         *(int *)&param_1->field_0xc270 = iVar4, iVar4 < 1)) {
        if (*(int *)&param_1->field_0xc284 < 1) {
          *(int *)&param_1->field_0xc288 = *(int *)&param_1->field_0xc288 + -1;
        }
        if ((0 < *(int *)&param_1->field_0xc288) || (0 < *(int *)&param_1->field_0xc284)) {
          fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x3f800000);
          fVar17 = (float10)fStack_14 * (float10)_DAT_005e3cb9;
          iVar23 = 1;
          iVar4 = 0xf;
          this_ptr = (CMotionController *)round();
          *(int *)&param_1->field_0xc270 = (int)ROUND(fVar17);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr,iVar4,iVar23);
        }
      }
      if (0 < *(int *)&param_1->field_0xc284) {
        iVar4 = *(int *)&param_1->field_0xc274;
        if (iVar4 < 1) {
          iVar4 = iVar4 + _DAT_01c43530;
          iStack_58 = 0;
          *(int *)&param_1->field_0xc274 = iVar4;
          if (iVar4 < 0) {
            (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1);
            iVar4 = *(int *)&param_1->field_0xc1e8;
            if (iVar4 != 0) {
              afStack_2ec[2] = *(float *)&param_1->field_0x20 - *(float *)(iVar4 + 0x20);
              afStack_2ec[3] = *(float *)&param_1->field_0x24 - *(float *)(iVar4 + 0x24);
              fStack_2dc = *(float *)&param_1->field_0x28 - *(float *)(iVar4 + 0x28);
              fStack_110 = afStack_2ec[2];
              afStack_10c[(uint)bVar15 * -2] = afStack_2ec[(uint)bVar15 * -2 + 3];
              afStack_10c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                   afStack_2ec[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
              if (afStack_148 + 2 != &fStack_110) {
                afStack_148[2] = fStack_110;
                afStack_148[3] = afStack_10c[0];
                fStack_138 = afStack_10c[1];
              }
              fStack_7c = fStack_138 * fStack_138 +
                          afStack_148[2] * afStack_148[2] + afStack_148[3] * afStack_148[3];
              fStack_78 = (float)(((int)fStack_7c >> 1) + _DAT_01cc804c);
              if (fStack_78 < (float)_DAT_005e3ca9) goto LAB_004df0bb;
            }
            if (iStack_58 == 0) break;
          }
          else {
            *(uint *)&param_1->field_0xc274 = 0;
          }
LAB_004df0bb:
          fStack_20 = *(float *)&param_1->field_0x3000;
          if (fStack_20 < *(float *)&param_1->field_0x2ffc) {
            fStack_20 = *(float *)&param_1->field_0x2490;
          }
          if (fStack_20 < *(float *)&param_1->field_0x2ffc) {
            fStack_20 = *(float *)&param_1->field_0x2ffc + (float)_DAT_005e3cc9;
          }
          iVar4 = 0;
          do {
            fStack_90 = (float)iVar4 * _DAT_005e3d11 * _DAT_005e3d15;
            fStack_14 = (float)iVar4;
            core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)param_1);
            fVar17 = (float10)fcos((float10)fStack_90);
            fVar16 = (float10)fsin((float10)fStack_90);
            fStack_2c = (float)core_setcolid_cpp_FUN_00558450
                                         (g_CDemonSetPtr,*(uint *)&param_1->field_0x20,
                                          *(uint *)&param_1->field_0x28,
                                          (float)(fVar16 * (float10)_DAT_005e3d19),
                                          (float)(fVar17 * (float10)_DAT_005e3d19),
                                          *(uint *)&param_1->field_0x2ff0,
                                          *(float *)&param_1->field_0x24 +
                                          *(float *)&param_1->field_0x2ffc);
            fStack_14 = fStack_2c;
            core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
            if (fStack_2c < 1.0) break;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 4);
          if (iVar4 < 4) {
            *(uint *)&param_1->field_0xc274 = 3;
            *(uint *)&param_1->field_0xc1e8 = 0;
          }
          else {
            fStack_14 = (float)(*(int *)&param_1->field_0xc284 + 1);
            fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x41200000);
            *(float *)&param_1->field_0x2538 = fStack_14;
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&param_1->field_0x158,0x10,1);
          }
        }
        else {
          iVar4 = iVar4 - _DAT_01c43530;
          *(int *)&param_1->field_0xc274 = iVar4;
          if (iVar4 < 1) {
            fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0);
            fVar17 = -(float10)fStack_14 * (float10)_DAT_005e3cd1;
            round();
            *(int *)&param_1->field_0xc274 = (int)ROUND(fVar17);
          }
        }
      }
      break;
    case 0xb:
      if (*(int *)&param_1->field_0xc1e8 == 0) {
LAB_004dfce9:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)puVar1,1,1);
      }
      else {
        iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))();
        if (iVar4 == 0) {
          fStack_28 = 0x40200000;
        }
        else {
          pCVar6 = (CGhoul *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))();
          if (pCVar6 != param_1) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)puVar1,1,1);
          }
        }
      }
      break;
    case 0xc:
      if ((*(int *)&param_1->field_0xc1e8 == 0) ||
         (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))(),
         iVar4 != 0)) goto LAB_004dfce9;
      fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x3e4ccccd);
      *(float *)&param_1->field_0xc1e4 = fStack_14;
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc290 * 4) != 0) {
        fStack_60 = core_motion_cpp_FUN_00525020((CMotionController *)puVar1);
        dStack_a8 = (double)fStack_60;
        fStack_14 = fStack_60;
        if (fStack_60 <= (float)_DAT_005e3cc1) {
          fStack_28 = 0x40200000;
          if (1.0 <= dStack_a8) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_478);
            fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000);
            fStack_474 = fStack_14;
            if (*(int *)&param_1->field_0xc2d0 != 0) {
              fStack_474 = fStack_14 * (float)_DAT_005e3cc1;
            }
            pSVar24 = aSStack_478;
            pCStack_444 = param_1;
            pCStack_440 = param_1;
            fVar25 = 0.4;
            core_xform_cpp_FUN_005b5080(&DAT_01cd0d44,&param_1->field_0xfd8 + _DAT_01cd0d9c * 0x30);
            puVar9 = &uStack_290;
            uStack_290 = uStack_248;
            afStack_28c[(uint)bVar15 * -2] = afStack_274[(uint)bVar15 * -2 + 0xc];
            afStack_28c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_274[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
            core_actor_cpp_FUN_00408b40(param_1,puVar9);
            pCVar19 = &CStack_284;
            CStack_284._0_4_ = CStack_f8._0_4_;
            *(uint *)((int)&CStack_284 + (uint)bVar15 * -8 + 4) =
                 *(uint *)((int)&CStack_f8 + (uint)bVar15 * -8 + 4);
            pCVar6 = param_1;
            *(uint *)((int)&CStack_284 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                 *(uint *)((int)&CStack_f8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            iVar4 = core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar6,pCVar19,fVar25,pSVar24);
            if (iVar4 != 0) {
              (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar4 = *(int *)&param_1->field_0xc26c - _DAT_01c43530;
      *(int *)&param_1->field_0xc26c = iVar4;
      if (iVar4 < 1) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
        fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x41700000);
        fVar17 = (float10)fStack_14 * (float10)_DAT_005e3cb9;
        round();
        *(int *)&param_1->field_0xc26c = (int)ROUND(fVar17);
      }
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1);
      if (*(int *)&param_1->field_0xc1e8 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0,1);
      }
    }
    if (((0.0 <= fStack_28) && (*(float *)&param_1->field_0xc27c <= 0.0)) &&
       (*(int *)&param_1->field_0xc1e8 != 0)) {
      fVar22 = 0.5235988;
      fVar25 = 3.0;
      auStack_35c._0_4_ = 0;
      auStack_35c._8_4_ = fStack_28;
      pCVar19 = (CVector3f *)auStack_35c;
      auStack_35c._4_4_ = 0;
      pCVar7 = (CPathMap *)
               (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                         (*(int *)&param_1->field_0xc1e8);
      core_skeleton_cpp_FUN_00569040(*(int *)&param_1->field_0xc1e8 + 0x158,0);
      afStack_274[2] = afStack_328[2];
      afStack_274[(uint)bVar15 * -2 + 3] = afStack_328[(uint)bVar15 * -2 + 3];
      afStack_274[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
           afStack_328[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      core_actor_cpp_FUN_00408b40(*(uint *)&param_1->field_0xc1e8,afStack_274 + 2);
      pCVar18 = &CStack_2c0;
      CStack_2c0._0_4_ = CStack_194._0_4_;
      *(uint *)((int)&CStack_2c0 + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_194 + (uint)bVar15 * -8 + 4);
      pCVar6 = param_1;
      *(uint *)((int)&CStack_2c0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_194 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        ((CCharacter *)pCVar6,pCVar18,pCVar7,pCVar19,fVar25,fVar22);
      if (iVar4 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,1,1);
        *(uint *)&param_1->field_0x2508 = 0;
      }
    }
    goto LAB_004de489;
  }
  uVar2 = *(uint *)&param_1->field_0x273c;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
      iVar4 = 1;
    }
    else {
LAB_004dee06:
      iVar4 = 0;
    }
LAB_004de462:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar4,1);
  }
  else {
    if (uVar2 < 3) {
      iVar4 = 0x11;
      goto LAB_004de462;
    }
    if (uVar2 != 3) goto LAB_004dee06;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
LAB_004de489:
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  iVar4 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
  if (iVar4 != 0) {
    if ((*(int *)&param_1->field_0xc1e8 != 0) &&
       (pCVar6 = (CGhoul *)(**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))(),
       pCVar6 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xc1e8);
    }
    core_charactr_cpp_FUN_0042d700(param_1);
    fStack_134 = *(float *)&param_1->field_0x2518 * param_2;
    afStack_130[0] = *(float *)&param_1->field_0x251c * param_2;
    afStack_130[1] = *(float *)&param_1->field_0x2520 * param_2;
    fStack_1dc = fStack_134;
    afStack_1d8[(uint)bVar15 * -2] = afStack_130[(uint)bVar15 * -2];
    afStack_1d8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_130[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    afStack_1d8[2] = fStack_1dc + *(float *)&param_1->field_0x250c;
    afStack_1d8[3] = afStack_1d8[0] + *(float *)&param_1->field_0x2510;
    fStack_1c8 = afStack_1d8[1] + *(float *)&param_1->field_0x2514;
    fStack_ec = afStack_1d8[2];
    afStack_e8[(uint)bVar15 * -2] = afStack_1d8[(uint)bVar15 * -2 + 3];
    afStack_e8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_1d8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    fStack_1c4 = fStack_ec + *(float *)&param_1->field_0x249c;
    fStack_1c0 = afStack_e8[0] + *(float *)&param_1->field_0x24a0;
    fStack_1bc = afStack_e8[1] + *(float *)&param_1->field_0x24a4;
    fStack_230 = fStack_1c4;
    afStack_22c[(uint)bVar15 * -2] = afStack_1d8[(uint)bVar15 * -2 + 6];
    afStack_22c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_1d8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a4;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_230);
  }
  puVar1 = &param_1->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)puVar1);
  dStack_b8 = (double)*(float *)&param_1->field_0xc27c;
  if (0.0 < dStack_b8) {
    fStack_6c = (float)core_motion_cpp_FUN_00525110(puVar1,*(uint *)&param_1->field_0xc280);
    fVar25 = 1.0 - *(float *)&param_1->field_0xc27c;
    fStack_68 = 1.0 - fVar25 * fVar25 * fVar25;
    fStack_14 = fStack_6c;
    core_skeleton_cpp_FUN_00568100
              (puVar1,*(uint *)&param_1->field_0xc280,fStack_6c,fStack_68,_DAT_01cd0dbc);
    fVar25 = *(float *)&param_1->field_0xc27c - param_2 / _DAT_006012cc;
    *(float *)&param_1->field_0xc27c = fVar25;
    if (fVar25 < 0.0) {
      *(uint *)&param_1->field_0xc27c = 0;
    }
  }
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  if (((float)_DAT_005e3d29 < ABS(*(float *)&param_1->field_0x2508)) ||
     ((float)_DAT_005e3d29 <
      SQRT(*(float *)&param_1->field_0x2514 * *(float *)&param_1->field_0x2514 +
           *(float *)&param_1->field_0x250c * *(float *)&param_1->field_0x250c +
           *(float *)&param_1->field_0x2510 * *(float *)&param_1->field_0x2510))) {
    iVar4 = core_sound_cpp_FUN_0057d9c0(0x02C82A60,*(uint *)&param_1->field_0xc268);
    if (iVar4 == 0) {
      FUN_005bfb40
                (auStack_4dc,"ghoul-walk-?.wav *%f",(double)*(float *)&param_1->field_0xc1d0);
      uVar8 = (**(code **)(*(int *)&param_1->field_0x154 + 0x30))(param_1);
      *(uint *)&param_1->field_0xc268 = uVar8;
    }
  }
  else {
    core_sound_cpp_FUN_0057d9d0(0x02C82A60,*(uint *)&param_1->field_0xc268);
  }
  if (*(int *)&param_1->field_0xc1d4 == 0) {
    iVar4 = *(int *)&param_1->field_0xc2b0;
    if (*(int *)(&param_1->field_0x2298 + iVar4 * 4) == 0) {
      fVar25 = 0.5;
      iVar23 = _DAT_01cd0dc0;
    }
    else {
      core_charactr_cpp_FUN_00430a90(param_1,*(uint *)&param_1->field_0xc28c,_DAT_01cd0dac);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc28c * 4) != 0) {
        core_charactr_cpp_FUN_00430a90(param_1,*(uint *)&param_1->field_0xc290,_DAT_01cd0da4);
      }
      core_charactr_cpp_FUN_00430a90(param_1,*(uint *)&param_1->field_0xc294,_DAT_01cd0db0);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc294 * 4) != 0) {
        core_charactr_cpp_FUN_00430a90(param_1,*(uint *)&param_1->field_0xc298,_DAT_01cd0da8);
      }
      fVar25 = 0.7;
      iVar4 = *(int *)&param_1->field_0xc2b4;
      iVar23 = _DAT_01cd0d98;
    }
    core_charactr_cpp_FUN_00430b60((CCharacter *)param_1,iVar4,iVar23,fVar25);
    core_charactr_cpp_FUN_00430960();
  }
  if ((*(int *)&param_1->field_0xc2c8 != 0) && (iStack_34 == 0x11)) {
    fStack_278 = *(float *)&param_1->field_0x20 - *(float *)&param_1->field_0xc2d8;
    afStack_274[0] = *(float *)&param_1->field_0x24 - *(float *)&param_1->field_0xc2dc;
    afStack_274[1] = *(float *)&param_1->field_0x28 - *(float *)&param_1->field_0xc2e0;
    fStack_164 = fStack_278;
    afStack_160[(uint)bVar15 * -2] = afStack_274[(uint)bVar15 * -2];
    afStack_160[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_274[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    if (param_2 * (float)_DAT_005e3cc9 <=
        SQRT(afStack_160[1] * afStack_160[1] + fStack_164 * fStack_164)) {
      *(uint *)&param_1->field_0xc2d4 = 0x3f800000;
    }
    else {
      param_2 = *(float *)&param_1->field_0xc2d4 - param_2;
      *(float *)&param_1->field_0xc2d4 = param_2;
      if (param_2 < 0.0) {
        *(uint *)&param_1->field_0xc2cc = 0x41f00000;
        *(uint *)&param_1->field_0xc2c8 = 0;
        *(uint *)&param_1->field_0xc2d0 = 0;
      }
    }
  }
  if (&param_1->field_0xc2d8 == &param_1->field_0x20) {
    return;
  }
  *(uint *)&param_1->field_0xc2d8 = *(uint *)&param_1->field_0x20;
  *(uint *)&param_1->field_0xc2dc = *(uint *)&param_1->field_0x24;
  *(uint *)&param_1->field_0xc2e0 = *(uint *)&param_1->field_0x28;
  return;
}
