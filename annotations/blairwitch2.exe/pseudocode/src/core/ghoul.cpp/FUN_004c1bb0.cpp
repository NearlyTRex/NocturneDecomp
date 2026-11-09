// Name: core_ghoul.cpp_FUN_004c1bb0
// Address: 004c1bb0
// Address Range: [[004c1bb0, 004c397a]]
// Convention: unknown
// Signature: void core_ghoul_cpp_FUN_004c1bb0(CGhoul *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_ghoul_cpp_FUN_004c1bb0(CGhoul *param_1,float param_2)

{
  byte *puVar1;
  uint uVar2;
  CGame *pCVar3;
  int iVar4;
  CGhoul *pCVar5;
  CPathMap *pCVar6;
  CMotionController *this_ptr;
  uint uVar7;
  uint *puVar8;
  float *pfVar9;
  char *pcVar10;
  uint *puVar11;
  char *pcVar12;
  char cVar13;
  byte bVar14;
  float10 fVar15;
  float10 fVar16;
  float afStackY_135c [920];
  CVector3f *pCVar17;
  CGore *this_ptr_00;
  CVector3f *pCVar18;
  EBloodType EVar20;
  ulonglong uVar19;
  float fVar21;
  int iVar22;
  SDamageInfo *pSVar23;
  float fVar24;
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
  
  bVar14 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  fStack_70 = param_2 * *(float *)&param_1->field_0x10a60;
  pCStack_18 = (CDeformableModelInstance *)&param_1->field_0x2b4;
switchD_004c2644_caseD_e:
  if (0.0 < fStack_70) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)pCStack_18,&fStack_70);
    switch(iVar4) {
    case 5:
      iStack_1c = 1;
      if ((((*(int *)&param_1->field_0x10a78 != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x114))(),
           iVar4 == 0)) &&
          (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))(),
          iVar4 == 0)) &&
         (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xf0))
                            (*(int *)&param_1->field_0x10a78,param_1), iVar4 != 0)) {
        fStack_64 = 0x40200000;
        afStack_34c[2] = 0.0;
        afStack_34c[3] = 0.0;
        afStack_34c[4] = 0x40200000;
        core_actor_cpp_FUN_00408d70(param_1);
        fStack_2b4 = fStack_1f4;
        afStack_2b0[(uint)bVar14 * -2] = afStack_1f0[(uint)bVar14 * -2];
        afStack_2b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             afStack_1f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
        fVar24 = fStack_2b4 - *(float *)(*(int *)&param_1->field_0x10a78 + 0x20);
        fVar21 = afStack_2b0[1] - *(float *)(*(int *)&param_1->field_0x10a78 + 0x28);
        if (1.0 < SQRT(fVar21 * fVar21 + fVar24 * fVar24)) {
          iStack_1c = 0;
        }
        iVar4 = *(int *)&param_1->field_0x10a78;
        if (((ABS(afStack_2b0[0] - *(float *)(iVar4 + 0x24)) <= (float)_DAT_005d90f7) &&
            ((iStack_1c == 0 ||
             (iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xf4))(iVar4,param_1), iVar4 != 0))))
           && (iStack_1c != 0)) break;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)pCStack_18,1,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,iVar4);
      break;
    case 10:
      if (*(int *)&param_1->field_0x10a78 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCStack_18,1,1);
      }
      else {
        pCVar5 = (CGhoul *)(**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))()
        ;
        if (pCVar5 == param_1) {
          iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x114))();
          if (iVar4 == 0) {
            (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x24))();
            puVar8 = auStack_3a4;
            puVar11 = &uStack_38c;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + (uint)bVar14 * -2 + 1;
              puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
            }
            fVar24 = fStack_37c - fStack_388;
            pfVar9 = (float *)(*(int *)&param_1->field_0x10a78 + 0x24 + (uint)bVar14 * -8);
            auStack_14c = *(byte (*) [4])(*(int *)&param_1->field_0x10a78 + 0x20);
            afStack_148[(uint)bVar14 * -2] = *pfVar9;
            afStack_148[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] = pfVar9[(uint)bVar14 * -2 + 1];
            afStack_148[0] = fVar24 * (float)_DAT_005d9147 + afStack_148[0];
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_400);
            fStack_3fc = (float)core_actor_cpp_FUN_0040cf60(0x41700000);
            fStack_14 = fStack_3fc;
            core_actor_cpp_FUN_00408de0(*(uint *)&param_1->field_0x10a78);
            uStack_d4 = afStack_10c[2];
            afStack_d0[(uint)bVar14 * -2] = afStack_10c[(uint)bVar14 * -2 + 3];
            afStack_d0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                 afStack_10c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
            if (&uStack_3e4 != &uStack_d4) {
              uStack_3e4 = uStack_d4;
              fStack_3e0 = afStack_d0[0];
              uStack_3dc = afStack_d0[1];
            }
            pCStack_3cc = param_1;
            pCStack_3c8 = param_1;
            (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x110))
                      (*(int *)&param_1->field_0x10a78);
            dStack_c8 = (double)fStack_3fc;
            if (0.0 < dStack_c8) {
              fVar16 = (float10)fStack_3fc * (float10)_DAT_005d914f * (float10)_DAT_005d913f;
              EVar20 = BLOOD_TYPE_RED;
              round();
              iStack_8c = (int)ROUND(fVar16);
              core_gore_cpp_FUN_004c9850
                        (g_CGorePtr,(CVector3f *)auStack_14c,(CVector3f *)0x0,iStack_8c,EVar20);
            }
            if (*(float *)(*(int *)&param_1->field_0x10a78 + 0x25a8) <= 0.0) {
              (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xf8))();
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)pCStack_18,1,1);
            }
            (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1);
          }
          else {
            (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xf8))();
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)pCStack_18,1,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCStack_18,1,1);
        }
      }
      break;
    case 0xb:
    case 0xc:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCStack_18);
      core_skeleton_cpp_FUN_005469a0(pCStack_18);
      afStack_130[2] = (float)uStack_1ac;
      afStack_130[(uint)bVar14 * -2 + 3] = afStack_1d8[(uint)bVar14 * -2 + 0xc];
      afStack_130[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
           afStack_1d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
      core_actor_cpp_FUN_00408d70(param_1);
      uVar19 = 0x4140000041000000;
      CStack_1e8._0_4_ = CStack_e0._0_4_;
      *(uint *)((int)&CStack_1e8 + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)&CStack_e0 + (uint)bVar14 * -8 + 4);
      *(uint *)((int)&CStack_1e8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)((int)&CStack_e0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
      fStack_14 = (float)core_actor_cpp_FUN_0040cf60(uVar19);
      fVar16 = (float10)fStack_14 * (float10)_DAT_005d913f;
      EVar20 = BLOOD_TYPE_RED;
      round();
      iStack_74 = (int)ROUND(fVar16);
      core_gore_cpp_FUN_004c9850(g_CGorePtr,&CStack_1e8,(CVector3f *)0x0,iStack_74,EVar20);
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1);
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCStack_18);
      core_skeleton_cpp_FUN_005469a0(pCStack_18);
      uStack_368 = uStack_2d8;
      afStack_364[(uint)bVar14 * -2] = afStack_2ec[(uint)bVar14 * -2 + 6];
      afStack_364[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           afStack_2ec[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
      core_actor_cpp_FUN_00408d70(param_1);
      uVar19 = 0x4140000041000000;
      CStack_314._0_4_ = CStack_374._0_4_;
      *(uint *)((int)&CStack_314 + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)&CStack_374 + (uint)bVar14 * -8 + 4);
      *(uint *)((int)&CStack_314 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)((int)&CStack_374 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
      fStack_14 = (float)core_actor_cpp_FUN_0040cf60(uVar19);
      fVar16 = (float10)fStack_14 * (float10)_DAT_005d913f;
      EVar20 = BLOOD_TYPE_RED;
      round();
      iStack_80 = (int)ROUND(fVar16);
      core_gore_cpp_FUN_004c9850(g_CGorePtr,&CStack_314,(CVector3f *)0x0,iStack_80,EVar20);
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1);
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCStack_18);
      core_skeleton_cpp_FUN_005469a0(pCStack_18);
      uStack_32c = uStack_308;
      afStack_328[(uint)bVar14 * -2] = afStack_304[(uint)bVar14 * -2];
      afStack_328[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           afStack_304[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      core_actor_cpp_FUN_00408d70(param_1);
      uVar19 = 0x4140000041000000;
      CStack_338._0_4_ = CStack_2fc._0_4_;
      *(uint *)((int)&CStack_338 + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)&CStack_2fc + (uint)bVar14 * -8 + 4);
      *(uint *)((int)&CStack_338 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)((int)&CStack_2fc + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
      fStack_14 = (float)core_actor_cpp_FUN_0040cf60(uVar19);
      fVar16 = (float10)fStack_14 * (float10)_DAT_005d913f;
      EVar20 = BLOOD_TYPE_RED;
      round();
      iStack_98 = (int)ROUND(fVar16);
      core_gore_cpp_FUN_004c9850(g_CGorePtr,&CStack_338,(CVector3f *)0x0,iStack_98,EVar20);
      iVar4 = core_actor_cpp_FUN_0040d060(0.5);
      if (iVar4 == 0) {
        pcVar10 = "ghoul-dig-?.wav @1.3";
      }
      else {
        pcVar10 = "ghoul-eat-?.wav @1.3";
      }
      pcVar12 = acStack_3c4;
      do {
        cVar13 = *pcVar10;
        *pcVar12 = cVar13;
        if (cVar13 == '\0') break;
        cVar13 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar12[1] = cVar13;
        pcVar12 = pcVar12 + 2;
      } while (cVar13 != '\0');
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1);
    }
    goto switchD_004c2644_caseD_e;
  }
  fStack_14 = (float)core_motion_cpp_FUN_005038a0(pCStack_18);
  dStack_a0 = (double)param_2;
  *(float *)&param_1->field_0x2594 =
       fStack_14 * (float)_DAT_005d90e7 * param_2 * *(float *)&param_1->field_0x10a60;
  core_charactr_cpp_FUN_0042b2a0(param_1);
  iVar4 = core_motion_cpp_FUN_005035c0();
  iStack_34 = *(int *)(iVar4 + 0x24);
  if (iStack_34 == 0x11) {
    fVar16 = (float10)_DAT_005d90ef;
    *(float *)&param_1->field_0x2598 = *(float *)&param_1->field_0x2598 * (float)_DAT_005d90f7;
    *(float *)&param_1->field_0x2594 =
         (float)((float10)dStack_a0 * fVar16 * (float10)*(float *)&param_1->field_0x10a60);
  }
  iVar4 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    fStack_28 = -1.0;
    puVar1 = &param_1->field_0x2b4;
    iVar4 = core_motion_cpp_FUN_005035c0();
    switch(*(uint *)(iVar4 + 0x24)) {
    case 0:
      if (*(float *)&param_1->field_0x10b54 <= 0.0) {
        iVar4 = *(int *)&param_1->field_0x10b58;
        if (iVar4 == 0) {
          iVar4 = core_enemy_cpp_FUN_00488970((CEnemy *)param_1,param_2);
          if (iVar4 != 0) goto LAB_004c2cc5;
          (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1);
          if (*(int *)&param_1->field_0x10a78 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,1,1);
            iVar4 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10b48);
            if ((iVar4 == 0) ||
               (iVar4 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10b4c), iVar4 == 0
               )) {
              uVar7 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1);
              *(uint *)&param_1->field_0x10b48 = uVar7;
            }
          }
        }
        else {
          afStack_2b0[2] = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
          afStack_2b0[3] = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_2a0 = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
          afStack_22c[2] = afStack_2b0[2];
          afStack_22c[(uint)bVar14 * -2 + 3] = afStack_2b0[(uint)bVar14 * -2 + 3];
          afStack_22c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
               afStack_2b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
          fStack_20c = afStack_22c[2];
          afStack_208[(uint)bVar14 * -2] = afStack_22c[(uint)bVar14 * -2 + 3];
          afStack_208[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
               afStack_22c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
          fStack_94 = afStack_208[1] * afStack_208[1] +
                      fStack_20c * fStack_20c + afStack_208[0] * afStack_208[0];
          if (SQRT(fStack_94) < (float)_DAT_005d90f7) {
            fVar24 = *(float *)&param_1->field_0x25a8 + param_2;
            *(float *)&param_1->field_0x10b5c = *(float *)&param_1->field_0x10b5c - param_2;
            *(float *)&param_1->field_0x25a8 = fVar24;
            if ((float)_DAT_005d9137 < fVar24) {
              *(uint *)&param_1->field_0x25a8 = 0x42c80000;
            }
            if (*(float *)&param_1->field_0x10b5c < 0.0) {
              *(uint *)&param_1->field_0x10b5c = 0;
              *(uint *)&param_1->field_0x10b58 = 0;
            }
          }
        }
      }
      else {
        *(float *)&param_1->field_0x10b54 = *(float *)&param_1->field_0x10b54 - param_2;
      }
      break;
    case 1:
    case 0x11:
      if ((*(int *)&param_1->field_0x10b60 != 0) && (iStack_34 == 1)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,0x11,1);
      }
      if (0.0 < *(float *)&param_1->field_0x10b54) {
        *(float *)&param_1->field_0x10b54 = *(float *)&param_1->field_0x10b54 - param_2;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,0,1);
      }
      else {
        *(uint *)&param_1->field_0x2510 = 0;
        *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
        *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
        uStack_24 = (uint)(*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10b20 * 4) !=
                          0);
        if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10b28 * 4) != 0) {
          uStack_24 = uStack_24 + 1;
        }
        iVar4 = (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) + 0x114))();
        pCVar3 = g_CGamePtr;
        if (iVar4 == 0) {
          (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1);
          iVar4 = *(int *)&param_1->field_0x10a78;
          if (iVar4 == 0) {
            iVar4 = core_enemy_cpp_FUN_00488970((CEnemy *)param_1,param_2);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,0,1);
            }
          }
          else {
            fStack_254 = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_250 = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_24c = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
            fStack_350 = fStack_254;
            afStack_34c[(uint)bVar14 * -2] = afStack_274[(uint)bVar14 * -2 + 9];
            afStack_34c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                 afStack_274[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
            afStack_34c[0] = 0.0;
            if (((*(float *)&param_1->field_0x25a8 < (float)_DAT_005d911f) && (0 < (int)uStack_24))
               && (*(int *)&param_1->field_0x10b58 == 0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004c1980(param_1,param_2);
            }
            iVar4 = *(int *)&param_1->field_0x10b58;
            if (iVar4 == 0) {
              fVar21 = 0.17453292;
              fVar24 = 1.0;
              auStack_17c._0_4_ = 0;
              auStack_17c._8_4_ = 0x40200000;
              pCVar18 = (CVector3f *)auStack_17c;
              auStack_17c._4_4_ = 0;
              pCVar6 = (CPathMap *)
                       (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                                 (*(int *)&param_1->field_0x10a78);
              iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                                ((CCharacter *)param_1,
                                 (CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20),pCVar6,
                                 pCVar18,fVar24,fVar21);
              if (iVar4 < 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&param_1->field_0x2b4,0,1);
              }
              else if (((0 < iVar4) && (0 < (int)uStack_24)) &&
                      ((*(float *)&param_1->field_0x10a74 <= 0.0 &&
                       ((iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) +
                                             0xfc))(), iVar4 == 0 &&
                        (*(float *)&param_1->field_0x10b0c <= 0.0)))))) {
                fStack_48 = SQRT(afStack_34c[1] * afStack_34c[1] +
                                 fStack_350 * fStack_350 + afStack_34c[0] * afStack_34c[0]);
                fStack_30 = 0.0;
                fStack_40 = 0.0;
                fStack_54 = 0.0;
                if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10b28 * 4) != 0) {
                  fStack_30 = (1.0 - ABS(fStack_48 - 0x4059999A) / 0x4059999A) *
                              (float)_DAT_005d9127;
                }
                if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10b20 * 4) != 0) {
                  fStack_40 = (1.0 - ABS(fStack_48 - 0x40200000) / 0x40200000) *
                              (float)_DAT_005d912f;
                }
                fStack_3c = fStack_48;
                iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xf0))
                                  (*(int *)&param_1->field_0x10a78,param_1);
                if (iVar4 != 0) {
                  fStack_54 = (1.0 - ABS(fStack_3c - 0x40200000) / 0x40200000) *
                              (float)_DAT_005d9127;
                }
                fStack_50 = fStack_30 + fStack_40;
                fStack_4c = fStack_50 + fStack_54;
                if (0.0 < fStack_4c) {
                  fStack_44 = (float)core_actor_cpp_FUN_0040cf60(0);
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
                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                            ((CMotionController *)&param_1->field_0x2b4,iVar4,1);
                  *(uint *)&param_1->field_0x10a74 = 0x3f333333;
                }
              }
            }
            else {
              fVar21 = 0.0;
              fVar24 = 3.0;
              pCVar18 = (CVector3f *)&DAT_0265370c;
              pCVar6 = (CPathMap *)(**(code **)(*(int *)(iVar4 + 0x2b0) + 0xcc))(iVar4);
              iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                                ((CCharacter *)param_1,
                                 (CVector3f *)(*(int *)&param_1->field_0x10b58 + 0x20),pCVar6,
                                 pCVar18,fVar24,fVar21);
              if (0 < iVar4) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&param_1->field_0x2b4,0,1);
                fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x41200000);
                *(float *)&param_1->field_0x10b5c = fStack_14;
              }
              if (iVar4 < 0) {
                *(uint *)&param_1->field_0x10b5c = 0x41f00000;
                *(uint *)&param_1->field_0x10b58 = 0;
              }
              if (iStack_34 == 1) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&param_1->field_0x2b4,0x11,1);
              }
            }
          }
        }
        else {
          if (*(int *)&param_1->field_0x10b08 < 0) {
            cVar13 = *(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10b20 * 4) != 0;
            if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10b28 * 4) != 0) {
              cVar13 = cVar13 + '\x01';
            }
            if (cVar13 != '\0') {
              if (cVar13 == '\x01') {
                *(uint *)&param_1->field_0x10b08 = 0xe;
                *(uint *)&pCVar3->field_0x23c = 1;
              }
              else {
                iVar4 = core_actor_cpp_FUN_0040d060(0.5);
                *(uint *)&param_1->field_0x10b08 = (iVar4 == 0) + 0xd;
                *(uint *)&g_CGamePtr->field_0x23c = 1;
              }
              goto LAB_004c31ac;
            }
            *(uint *)&param_1->field_0x10b08 = 0;
          }
          else {
LAB_004c31ac:
            if (*(int *)&param_1->field_0x10b08 != 0) {
              uStack_38 = 0x40000000;
              if (*(int *)&param_1->field_0x10b08 == 0xe) {
                uStack_38 = 0x40B00000;
              }
              fVar21 = 0.08726646;
              fVar24 = 0.5;
              CStack_2cc._8_4_ = uStack_38;
              pCVar18 = &CStack_2cc;
              CStack_2cc._0_4_ = 0;
              iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
              CStack_2cc._4_4_ = 0;
              pCVar6 = (CPathMap *)(**(code **)(*(int *)(iVar4 + 0x2b0) + 0xcc))(iVar4);
              core_skeleton_cpp_FUN_005469a0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b4,0);
              puVar8 = &uStack_2f0;
              uStack_2f0 = uStack_1b8;
              afStack_2ec[(uint)bVar14 * -2] = afStack_1d8[(uint)bVar14 * -2 + 9];
              afStack_2ec[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                   afStack_1d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
              core_actor_cpp_FUN_00408d70(*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),puVar8);
              pCVar17 = &CStack_29c;
              CStack_29c._0_4_ = CStack_218._0_4_;
              *(uint *)((int)&CStack_29c + (uint)bVar14 * -8 + 4) =
                   *(uint *)((int)&CStack_218 + (uint)bVar14 * -8 + 4);
              pCVar5 = param_1;
              *(uint *)((int)&CStack_29c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
                   *(uint *)((int)&CStack_218 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
              iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                                ((CCharacter *)pCVar5,pCVar17,pCVar6,pCVar18,fVar24,fVar21);
              if (((0 < iVar4) &&
                  (iVar4 = (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) +
                                       0x114))(), iVar4 == 2)) &&
                 (core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                            ((CMotionController *)&param_1->field_0x2b4,
                             *(int *)&param_1->field_0x10b08,1),
                 *(int *)&param_1->field_0x10b08 == 0xd)) {
                iVar4 = *(int *)&param_1->field_0x2b0;
                fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x3f000000);
                (**(code **)(iVar4 + 0x3c))(param_1,"ghoul-scream-!-?.wav");
              }
              break;
            }
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0,1);
        }
      }
      break;
    case 2:
      if (*(int *)&param_1->field_0x10a78 == 0) {
LAB_004c2cc5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,1,1);
      }
      else {
        iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))();
        if (iVar4 == 0) {
          fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x3e4ccccd);
          *(float *)&param_1->field_0x10a74 = fStack_14;
          if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10b28 * 4) != 0) {
            fStack_5c = core_motion_cpp_FUN_00503e60((CMotionController *)puVar1);
            dStack_c0 = (double)fStack_5c;
            fStack_14 = fStack_5c;
            if ((fStack_5c <= (float)_DAT_005d9107) && (fStack_28 = 0x4059999A, 1.0 <= dStack_c0))
            {
              core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_43c);
              fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000);
              fStack_438 = fStack_14;
              if (*(int *)&param_1->field_0x10b60 != 0) {
                fStack_438 = fStack_14 * (float)_DAT_005d9107;
              }
              pSVar23 = aSStack_43c;
              pCStack_408 = param_1;
              pCStack_404 = param_1;
              fVar24 = 0.2;
              core_xform_cpp_FUN_00591530
                        (&DAT_01cb81d4,&param_1->field_0x1134 + _DAT_01cb8224 * 0x30);
              pfVar9 = afStack_274 + 5;
              afStack_260[0] = (float)uStack_188;
              afStack_274[(uint)bVar14 * -2 + 6] = afStack_184[(uint)bVar14 * -2];
              afStack_274[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
                   afStack_184[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
              core_actor_cpp_FUN_00408d70(param_1,pfVar9);
              pCVar18 = &CStack_11c;
              CStack_11c._0_4_ = CStack_170._0_4_;
              *(uint *)((int)&CStack_11c + (uint)bVar14 * -8 + 4) =
                   *(uint *)((int)&CStack_170 + (uint)bVar14 * -8 + 4);
              pCVar5 = param_1;
              *(uint *)((int)&CStack_11c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
                   *(uint *)((int)&CStack_170 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
              iVar4 = core_enemy_cpp_FUN_00488110((CEnemy *)pCVar5,pCVar18,fVar24,pSVar23);
              if (iVar4 != 0) {
                (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1);
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)puVar1,1,1);
        }
      }
      break;
    case 10:
      if (((*(int *)&param_1->field_0x10a64 == 0) && (*(int *)&param_1->field_0x10b14 < 1)) &&
         (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_005469a0(puVar1);
        uStack_1a0 = uStack_23c;
        afStack_1d8[(uint)bVar14 * -2 + 0xf] = afStack_274[(uint)bVar14 * -2 + 0xf];
        afStack_1d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10] =
             afStack_274[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
        core_actor_cpp_FUN_00408d70(param_1);
        pCVar18 = &CStack_200;
        EVar20 = BLOOD_TYPE_RED;
        CStack_200._0_4_ = CStack_158._0_4_;
        *(uint *)((int)&CStack_200 + (uint)bVar14 * -8 + 4) =
             *(uint *)(auStack_14c + (uint)bVar14 * -8 + -8);
        this_ptr_00 = g_CGorePtr;
        *(uint *)((int)&CStack_200 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             *(uint *)(auStack_14c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + -4);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_00,pCVar18,EVar20);
        *(uint *)&param_1->field_0x10a64 = 1;
      }
      *(uint *)&param_1->field_0x10b60 = 0;
      if (((0 < *(int *)&param_1->field_0x10b18) || (0 < *(int *)&param_1->field_0x10b14)) &&
         (iVar4 = *(int *)&param_1->field_0x10b00 - _DAT_01c2a370,
         *(int *)&param_1->field_0x10b00 = iVar4, iVar4 < 1)) {
        if (*(int *)&param_1->field_0x10b14 < 1) {
          *(int *)&param_1->field_0x10b18 = *(int *)&param_1->field_0x10b18 + -1;
        }
        if ((0 < *(int *)&param_1->field_0x10b18) || (0 < *(int *)&param_1->field_0x10b14)) {
          fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x3f800000);
          fVar16 = (float10)fStack_14 * (float10)_DAT_005d90ff;
          iVar22 = 1;
          iVar4 = 0xf;
          this_ptr = (CMotionController *)round();
          *(int *)&param_1->field_0x10b00 = (int)ROUND(fVar16);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr,iVar4,iVar22);
        }
      }
      if (0 < *(int *)&param_1->field_0x10b14) {
        iVar4 = *(int *)&param_1->field_0x10b04;
        if (iVar4 < 1) {
          iVar4 = iVar4 + _DAT_01c2a370;
          iStack_58 = 0;
          *(int *)&param_1->field_0x10b04 = iVar4;
          if (iVar4 < 0) {
            (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1);
            iVar4 = *(int *)&param_1->field_0x10a78;
            if (iVar4 != 0) {
              afStack_2ec[2] = *(float *)&param_1->field_0x20 - *(float *)(iVar4 + 0x20);
              afStack_2ec[3] = *(float *)&param_1->field_0x24 - *(float *)(iVar4 + 0x24);
              fStack_2dc = *(float *)&param_1->field_0x28 - *(float *)(iVar4 + 0x28);
              fStack_110 = afStack_2ec[2];
              afStack_10c[(uint)bVar14 * -2] = afStack_2ec[(uint)bVar14 * -2 + 3];
              afStack_10c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                   afStack_2ec[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
              if (afStack_148 + 2 != &fStack_110) {
                afStack_148[2] = fStack_110;
                afStack_148[3] = afStack_10c[0];
                fStack_138 = afStack_10c[1];
              }
              fStack_7c = fStack_138 * fStack_138 +
                          afStack_148[2] * afStack_148[2] + afStack_148[3] * afStack_148[3];
              fStack_78 = (float)(((int)fStack_7c >> 1) + _DAT_01caf5b4);
              if (fStack_78 < (float)_DAT_005d90ef) goto LAB_004c293b;
            }
            if (iStack_58 == 0) break;
          }
          else {
            *(uint *)&param_1->field_0x10b04 = 0;
          }
LAB_004c293b:
          fStack_20 = *(float *)&param_1->field_0x3444;
          if (fStack_20 < *(float *)&param_1->field_0x3440) {
            fStack_20 = *(float *)&param_1->field_0x24fc;
          }
          if (fStack_20 < *(float *)&param_1->field_0x3440) {
            fStack_20 = *(float *)&param_1->field_0x3440 + (float)_DAT_005d910f;
          }
          iVar4 = 0;
          do {
            fStack_90 = (float)iVar4 * _DAT_005d9157 * _DAT_005d915b;
            fStack_14 = (float)iVar4;
            core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)param_1);
            fVar16 = (float10)fcos((float10)fStack_90);
            fVar15 = (float10)fsin((float10)fStack_90);
            fStack_2c = (float)core_setcolid_cpp_FUN_00537030
                                         (g_CDemonSetPtr,*(uint *)&param_1->field_0x20,
                                          *(uint *)&param_1->field_0x28,
                                          (float)(fVar15 * (float10)_DAT_005d915f),
                                          (float)(fVar16 * (float10)_DAT_005d915f),
                                          *(uint *)&param_1->field_0x3434,
                                          *(float *)&param_1->field_0x24 +
                                          *(float *)&param_1->field_0x3440);
            fStack_14 = fStack_2c;
            core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
            if (fStack_2c < 1.0) break;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 4);
          if (iVar4 < 4) {
            *(uint *)&param_1->field_0x10b04 = 3;
            *(uint *)&param_1->field_0x10a78 = 0;
          }
          else {
            fStack_14 = (float)(*(int *)&param_1->field_0x10b14 + 1);
            fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x41200000);
            *(float *)&param_1->field_0x25a8 = fStack_14;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,0x10,1);
          }
        }
        else {
          iVar4 = iVar4 - _DAT_01c2a370;
          *(int *)&param_1->field_0x10b04 = iVar4;
          if (iVar4 < 1) {
            fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0);
            fVar16 = -(float10)fStack_14 * (float10)_DAT_005d9117;
            round();
            *(int *)&param_1->field_0x10b04 = (int)ROUND(fVar16);
          }
        }
      }
      break;
    case 0xb:
      if (*(int *)&param_1->field_0x10a78 == 0) {
LAB_004c3569:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)puVar1,1,1);
      }
      else {
        iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))();
        if (iVar4 == 0) {
          fStack_28 = 0x40200000;
        }
        else {
          pCVar5 = (CGhoul *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))();
          if (pCVar5 != param_1) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)puVar1,1,1);
          }
        }
      }
      break;
    case 0xc:
      if ((*(int *)&param_1->field_0x10a78 == 0) ||
         (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))(),
         iVar4 != 0)) goto LAB_004c3569;
      fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x3e4ccccd);
      *(float *)&param_1->field_0x10a74 = fStack_14;
      if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10b20 * 4) != 0) {
        fStack_60 = core_motion_cpp_FUN_00503e60((CMotionController *)puVar1);
        dStack_a8 = (double)fStack_60;
        fStack_14 = fStack_60;
        if (fStack_60 <= (float)_DAT_005d9107) {
          fStack_28 = 0x40200000;
          if (1.0 <= dStack_a8) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_478);
            fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000);
            fStack_474 = fStack_14;
            if (*(int *)&param_1->field_0x10b60 != 0) {
              fStack_474 = fStack_14 * (float)_DAT_005d9107;
            }
            pSVar23 = aSStack_478;
            pCStack_444 = param_1;
            pCStack_440 = param_1;
            fVar24 = 0.4;
            core_xform_cpp_FUN_00591530(&DAT_01cb81c8,&param_1->field_0x1134 + _DAT_01cb8220 * 0x30)
            ;
            puVar8 = &uStack_290;
            uStack_290 = uStack_248;
            afStack_28c[(uint)bVar14 * -2] = afStack_274[(uint)bVar14 * -2 + 0xc];
            afStack_28c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                 afStack_274[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
            core_actor_cpp_FUN_00408d70(param_1,puVar8);
            pCVar18 = &CStack_284;
            CStack_284._0_4_ = CStack_f8._0_4_;
            *(uint *)((int)&CStack_284 + (uint)bVar14 * -8 + 4) =
                 *(uint *)((int)&CStack_f8 + (uint)bVar14 * -8 + 4);
            pCVar5 = param_1;
            *(uint *)((int)&CStack_284 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
                 *(uint *)((int)&CStack_f8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
            iVar4 = core_enemy_cpp_FUN_00488110((CEnemy *)pCVar5,pCVar18,fVar24,pSVar23);
            if (iVar4 != 0) {
              (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1);
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar4 = *(int *)&param_1->field_0x10afc - _DAT_01c2a370;
      *(int *)&param_1->field_0x10afc = iVar4;
      if (iVar4 < 1) {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1);
        fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x41700000);
        fVar16 = (float10)fStack_14 * (float10)_DAT_005d90ff;
        round();
        *(int *)&param_1->field_0x10afc = (int)ROUND(fVar16);
      }
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1);
      if (*(int *)&param_1->field_0x10a78 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,0,1);
      }
    }
    if (((0.0 <= fStack_28) && (*(float *)&param_1->field_0x10b0c <= 0.0)) &&
       (*(int *)&param_1->field_0x10a78 != 0)) {
      fVar21 = 0.5235988;
      fVar24 = 3.0;
      auStack_35c._0_4_ = 0;
      auStack_35c._8_4_ = fStack_28;
      pCVar18 = (CVector3f *)auStack_35c;
      auStack_35c._4_4_ = 0;
      pCVar6 = (CPathMap *)
               (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                         (*(int *)&param_1->field_0x10a78);
      core_skeleton_cpp_FUN_005469a0(*(int *)&param_1->field_0x10a78 + 0x2b4,0);
      afStack_274[2] = afStack_328[2];
      afStack_274[(uint)bVar14 * -2 + 3] = afStack_328[(uint)bVar14 * -2 + 3];
      afStack_274[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
           afStack_328[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      core_actor_cpp_FUN_00408d70(*(uint *)&param_1->field_0x10a78,afStack_274 + 2);
      pCVar17 = &CStack_2c0;
      CStack_2c0._0_4_ = CStack_194._0_4_;
      *(uint *)((int)&CStack_2c0 + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)&CStack_194 + (uint)bVar14 * -8 + 4);
      pCVar5 = param_1;
      *(uint *)((int)&CStack_2c0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)((int)&CStack_194 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)pCVar5,pCVar17,pCVar6,pCVar18,fVar24,fVar21);
      if (iVar4 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,1,1);
        *(uint *)&param_1->field_0x2578 = 0;
      }
    }
    goto LAB_004c1d09;
  }
  uVar2 = *(uint *)&param_1->field_0x27ac;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
      iVar4 = 1;
    }
    else {
LAB_004c2686:
      iVar4 = 0;
    }
LAB_004c1ce2:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar4,1);
  }
  else {
    if (uVar2 < 3) {
      iVar4 = 0x11;
      goto LAB_004c1ce2;
    }
    if (uVar2 != 3) goto LAB_004c2686;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
LAB_004c1d09:
  if (0.0 < *(float *)&param_1->field_0x10a74) {
    *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  iVar4 = core_charactr_cpp_FUN_00424430((CCharacter *)param_1);
  if (iVar4 != 0) {
    if ((*(int *)&param_1->field_0x10a78 != 0) &&
       (pCVar5 = (CGhoul *)(**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))()
       , pCVar5 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x10a78);
    }
    core_charactr_cpp_FUN_00423a10(param_1);
    fStack_134 = *(float *)&param_1->field_0x2588 * param_2;
    afStack_130[0] = *(float *)&param_1->field_0x258c * param_2;
    afStack_130[1] = *(float *)&param_1->field_0x2590 * param_2;
    fStack_1dc = fStack_134;
    afStack_1d8[(uint)bVar14 * -2] = afStack_130[(uint)bVar14 * -2];
    afStack_1d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         afStack_130[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    afStack_1d8[2] = fStack_1dc + *(float *)&param_1->field_0x257c;
    afStack_1d8[3] = afStack_1d8[0] + *(float *)&param_1->field_0x2580;
    fStack_1c8 = afStack_1d8[1] + *(float *)&param_1->field_0x2584;
    fStack_ec = afStack_1d8[2];
    afStack_e8[(uint)bVar14 * -2] = afStack_1d8[(uint)bVar14 * -2 + 3];
    afStack_e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         afStack_1d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
    fStack_1c4 = fStack_ec + *(float *)&param_1->field_0x2508;
    fStack_1c0 = afStack_e8[0] + *(float *)&param_1->field_0x250c;
    fStack_1bc = afStack_e8[1] + *(float *)&param_1->field_0x2510;
    fStack_230 = fStack_1c4;
    afStack_22c[(uint)bVar14 * -2] = afStack_1d8[(uint)bVar14 * -2 + 6];
    afStack_22c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         afStack_1d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x2510;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)&fStack_230);
  }
  puVar1 = &param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)puVar1);
  dStack_b8 = (double)*(float *)&param_1->field_0x10b0c;
  if (0.0 < dStack_b8) {
    fStack_6c = (float)core_motion_cpp_FUN_00503f50(puVar1,*(uint *)&param_1->field_0x10b10);
    fVar24 = 1.0 - *(float *)&param_1->field_0x10b0c;
    fStack_68 = 1.0 - fVar24 * fVar24 * fVar24;
    fStack_14 = fStack_6c;
    core_skeleton_cpp_FUN_00545a60
              (puVar1,*(uint *)&param_1->field_0x10b10,fStack_6c,fStack_68,_DAT_01cb8240);
    fVar24 = *(float *)&param_1->field_0x10b0c - param_2 / _DAT_005f78cc;
    *(float *)&param_1->field_0x10b0c = fVar24;
    if (fVar24 < 0.0) {
      *(uint *)&param_1->field_0x10b0c = 0;
    }
  }
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  if (((float)_DAT_005d916f < ABS(*(float *)&param_1->field_0x2578)) ||
     ((float)_DAT_005d916f <
      SQRT(*(float *)&param_1->field_0x2584 * *(float *)&param_1->field_0x2584 +
           *(float *)&param_1->field_0x257c * *(float *)&param_1->field_0x257c +
           *(float *)&param_1->field_0x2580 * *(float *)&param_1->field_0x2580))) {
    iVar4 = core_sound_cpp_FUN_0055af70(0x0264B290,*(uint *)&param_1->field_0x10af8);
    if (iVar4 == 0) {
      FUN_005b7790
                (auStack_4dc,"ghoul-walk-?.wav *%f",(double)*(float *)&param_1->field_0x10a60);
      uVar7 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x38))(param_1);
      *(uint *)&param_1->field_0x10af8 = uVar7;
    }
  }
  else {
    core_sound_cpp_FUN_0055af80(0x0264B290,*(uint *)&param_1->field_0x10af8);
  }
  if (*(int *)&param_1->field_0x10a64 == 0) {
    iVar4 = *(int *)&param_1->field_0x10b40;
    if (*(int *)(&param_1->field_0x23f4 + iVar4 * 4) == 0) {
      fVar24 = 0.5;
      iVar22 = _DAT_01cb8244;
    }
    else {
      core_charactr_cpp_FUN_00427060(param_1,*(uint *)&param_1->field_0x10b1c,_DAT_01cb8230);
      if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10b1c * 4) != 0) {
        core_charactr_cpp_FUN_00427060(param_1,*(uint *)&param_1->field_0x10b20,_DAT_01cb8228)
        ;
      }
      core_charactr_cpp_FUN_00427060(param_1,*(uint *)&param_1->field_0x10b24,_DAT_01cb8234);
      if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10b24 * 4) != 0) {
        core_charactr_cpp_FUN_00427060(param_1,*(uint *)&param_1->field_0x10b28,_DAT_01cb822c)
        ;
      }
      fVar24 = 0.7;
      iVar4 = *(int *)&param_1->field_0x10b44;
      iVar22 = _DAT_01cb821c;
    }
    core_charactr_cpp_FUN_00427130((CCharacter *)param_1,iVar4,iVar22,fVar24);
    core_charactr_cpp_FUN_00426f30();
  }
  if ((*(int *)&param_1->field_0x10b58 != 0) && (iStack_34 == 0x11)) {
    fStack_278 = *(float *)&param_1->field_0x20 - *(float *)&param_1->field_0x10b68;
    afStack_274[0] = *(float *)&param_1->field_0x24 - *(float *)&param_1->field_0x10b6c;
    afStack_274[1] = *(float *)&param_1->field_0x28 - *(float *)&param_1->field_0x10b70;
    fStack_164 = fStack_278;
    afStack_160[(uint)bVar14 * -2] = afStack_274[(uint)bVar14 * -2];
    afStack_160[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         afStack_274[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    if (param_2 * (float)_DAT_005d910f <=
        SQRT(afStack_160[1] * afStack_160[1] + fStack_164 * fStack_164)) {
      *(uint *)&param_1->field_0x10b64 = 0x3f800000;
    }
    else {
      param_2 = *(float *)&param_1->field_0x10b64 - param_2;
      *(float *)&param_1->field_0x10b64 = param_2;
      if (param_2 < 0.0) {
        *(uint *)&param_1->field_0x10b5c = 0x41f00000;
        *(uint *)&param_1->field_0x10b58 = 0;
        *(uint *)&param_1->field_0x10b60 = 0;
      }
    }
  }
  if (&param_1->field_0x10b68 == &param_1->field_0x20) {
    return;
  }
  *(uint *)&param_1->field_0x10b68 = *(uint *)&param_1->field_0x20;
  *(uint *)&param_1->field_0x10b6c = *(uint *)&param_1->field_0x24;
  *(uint *)&param_1->field_0x10b70 = *(uint *)&param_1->field_0x28;
  return;
}
