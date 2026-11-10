// Name: core_ghoul.cpp_CGhoul_process_FUN_004c6eb0
// Address: 004c6eb0
// Address Range: [[004c6eb0, 004c8c89]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004c6eb0(CGhoul *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004c6eb0(CGhoul *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  EWalkState EVar2;
  CDemonActor_vtable *pCVar3;
  CGame *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  CGhoul *pCVar7;
  EDeathState EVar8;
  CPathMap *pCVar9;
  CMotionController *this_ptr_01;
  CDemonActor *pCVar10;
  CGhoul *pCVar11;
  uint uVar12;
  CLocation *pCVar13;
  uint *puVar14;
  float *pfVar15;
  char *pcVar16;
  uint *puVar17;
  char *pcVar18;
  char cVar19;
  byte bVar20;
  float10 fVar21;
  float10 fVar22;
  float afStackY_135c [30];
  CDemonActor *apCStackY_12e4 [6];
  float afStackY_12cc [9];
  CDemonActor *apCStackY_12a8 [3];
  float afStackY_129c [48];
  CPlatform *apCStackY_11dc [3];
  float afStackY_11d0 [822];
  CVector3f *pCVar23;
  CVector3f *pCVar24;
  CGore *this_ptr_02;
  float fVar27;
  int iVar28;
  uint uVar29;
  ulonglong uVar25;
  ulonglong uVar26;
  char *in_stack_fffffb28;
  float fVar30;
  CCharacter *in_stack_fffffb30;
  CCharacter *pCVar31;
  EBloodType EVar32;
  SDamageInfo aSStack_478 [4];
  float fStack_474;
  char acStack_45c [4];
  float fStack_458;
  float fStack_454;
  CGhoul *pCStack_444;
  CGhoul *pCStack_440;
  SDamageInfo aSStack_43c [4];
  float fStack_438;
  uint uStack_408;
  uint uStack_404;
  SDamageInfo aSStack_400 [4];
  float fStack_3fc;
  uint uStack_3cc;
  uint uStack_3c8;
  char acStack_3c4 [32];
  uint auStack_3a4 [6];
  uint uStack_38c;
  float fStack_388;
  float fStack_37c;
  float fStack_374;
  float afStack_370 [4];
  CPlatform *pCStack_360;
  float fStack_35c;
  float afStack_358 [5];
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float fStack_338;
  CVector3f CStack_32c;
  char acStack_320 [4];
  float afStack_31c [5];
  byte auStack_308 [8];
  float fStack_300;
  char acStack_2fc [4];
  CDemonActor *apCStack_2f8 [5];
  char acStack_2e4 [4];
  float afStack_2e0 [4];
  float fStack_2d0;
  UOrientationVector UStack_2cc;
  float fStack_2c0;
  CDemonActor *apCStack_2bc [2];
  CVector3f CStack_2b4;
  CMotionList *pCStack_2a8;
  float afStack_2a4 [2];
  CVector3f CStack_29c;
  CVector3f CStack_290;
  float fStack_284;
  float afStack_280 [5];
  float fStack_26c;
  float afStack_260 [3];
  float afStack_254 [3];
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  CVector3f CStack_224;
  float fStack_218;
  float afStack_214 [5];
  float fStack_200;
  float afStack_1fc [4];
  CPlatform *pCStack_1ec;
  CMotionList *pCStack_1e8;
  float afStack_1e4 [4];
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
  float fStack_194;
  float afStack_190 [5];
  float fStack_17c;
  float fStack_170;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  CDemonActor *pCStack_158;
  float afStack_154 [5];
  CVector3f CStack_140;
  float fStack_134;
  float afStack_130 [5];
  float fStack_11c;
  float afStack_118 [5];
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_ec;
  float fStack_e0;
  char acStack_d4 [4];
  float afStack_d0 [2];
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_84;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CMotionController_vtable *pCStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  CGhoul *pCStack_18;
  float fStack_14;
  
  bVar20 = 0;
  iVar5 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar5 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_94 = delta_time * *(float *)&(this_ptr->base).field_0xcdcc;
  pCStack_18 = (CGhoul *)&(this_ptr->base).base.model;
switchD_004c795a_caseD_e:
  if (0.0 < fStack_94) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)pCStack_18,&fStack_94);
    switch(iVar5) {
    case 5:
      pCVar31 = (this_ptr->base).victim;
      fStack_1c = 1.4013e-45;
      if ((pCVar31 != (CCharacter *)0x0) &&
         (EVar8 = (*(((pCVar31->base).vtable._uc)->_uc).getDeathState)(pCVar31),
         EVar8 == DEATH_STATE_ALIVE)) {
        in_stack_fffffb28 = (char *)(this_ptr->base).victim;
        pCVar10 = (*(((((CGhoul *)in_stack_fffffb28)->base).base.base.vtable._uc)->_uc).getGrabber)
                            ((CCharacter *)in_stack_fffffb28);
        if ((pCVar10 == (CDemonActor *)0x0) &&
           (pCVar31 = (this_ptr->base).victim, in_stack_fffffb28 = (char *)this_ptr,
           iVar5 = (*(((pCVar31->base).vtable._uc)->_uc).canBeGrabbed)
                             (pCVar31,(CDemonActor *)this_ptr,0), iVar5 != 0)) {
          fStack_64 = 0x40200000;
          afStack_214[2] = 0.0;
          afStack_214[3] = 0.0;
          afStack_214[4] = 0x40200000;
          in_stack_fffffb30 = (CCharacter *)0x4c7412;
          core_actor_cpp_FUN_00408b80();
          pCStack_2a8 = pCStack_1e8;
          afStack_2a4[(uint)bVar20 * -2] = afStack_1e4[(uint)bVar20 * -2];
          afStack_2a4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
               afStack_1e4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          pCVar31 = (this_ptr->base).victim;
          fVar30 = (float)pCStack_2a8 - (pCVar31->base).location.position.x;
          fVar27 = afStack_2a4[1] - (pCVar31->base).location.position.z;
          if (1.0 < SQRT(fVar27 * fVar27 + fVar30 * fVar30)) {
            fStack_1c = 0.0;
          }
          pCVar31 = (this_ptr->base).victim;
          if ((ABS(afStack_2a4[0] - (pCVar31->base).location.position.y) <= (float)_DAT_005c42bd) &&
             (((fStack_1c == 0.0 ||
               (iVar5 = (*(((pCVar31->base).vtable._uc)->_uc).getGrabbed)
                                  (pCVar31,(CDemonActor *)this_ptr,0), in_stack_fffffb30 = pCVar31,
               iVar5 != 0)) && (fStack_1c != 0.0)))) break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)pCStack_18,1,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar5);
      break;
    case 10:
      pCVar31 = (this_ptr->base).victim;
      if (pCVar31 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)pCStack_18,1,1);
      }
      else {
        pCVar7 = (CGhoul *)(*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31);
        if (pCVar7 == this_ptr) {
          pCVar31 = (this_ptr->base).victim;
          EVar8 = (*(((pCVar31->base).vtable._uc)->_uc).getDeathState)(pCVar31);
          if (EVar8 == DEATH_STATE_ALIVE) {
            pCVar31 = (this_ptr->base).victim;
            in_stack_fffffb28 = (char *)0x4c7519;
            (*((pCVar31->base).vtable._ub)->getBoundingBox)
                      (&pCVar31->base,(CBoundingBox3D *)in_stack_fffffb30);
            puVar14 = auStack_3a4;
            puVar17 = &uStack_38c;
            for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar17 = *puVar14;
              puVar14 = puVar14 + (uint)bVar20 * -2 + 1;
              puVar17 = puVar17 + (uint)bVar20 * -2 + 1;
            }
            fVar30 = fStack_37c - fStack_388;
            pCVar31 = (this_ptr->base).victim;
            pfVar15 = (float *)((int)pCVar31 + (uint)bVar20 * -8 + 0x24);
            afStack_154[2] = (pCVar31->base).location.position.x;
            afStack_154[(uint)bVar20 * -2 + 3] = *pfVar15;
            afStack_154[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] = pfVar15[(uint)bVar20 * -2 + 1];
            afStack_154[3] = fVar30 * (float)_DAT_005c430d + afStack_154[3];
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_478);
            fStack_474 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(15.0,25.0);
            fStack_14 = fStack_474;
            core_actor_cpp_FUN_00408bf0();
            acStack_2e4[0] = acStack_d4[0];
            acStack_2e4[1] = acStack_d4[1];
            acStack_2e4[2] = acStack_d4[2];
            acStack_2e4[3] = acStack_d4[3];
            afStack_2e0[(uint)bVar20 * -2] = afStack_d0[(uint)bVar20 * -2];
            afStack_2e0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                 afStack_d0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            if (acStack_45c != acStack_2e4) {
              acStack_45c[0] = acStack_2e4[0];
              acStack_45c[1] = acStack_2e4[1];
              acStack_45c[2] = acStack_2e4[2];
              acStack_45c[3] = acStack_2e4[3];
              fStack_458 = afStack_2e0[0];
              fStack_454 = afStack_2e0[1];
            }
            pCStack_444 = this_ptr;
            pCStack_440 = this_ptr;
            in_stack_fffffb30 = (this_ptr->base).victim;
            (*(((in_stack_fffffb30->base).vtable._uc)->_uc).processDamage)
                      (in_stack_fffffb30,aSStack_478);
            dStack_c8 = (double)fStack_474;
            if (0.0 < dStack_c8) {
              fVar22 = (float10)fStack_474 * (float10)_DAT_005c4315 * (float10)_DAT_005c4305;
              EVar32 = BLOOD_TYPE_RED;
              round();
              fStack_84 = (float)(int)ROUND(fVar22);
              in_stack_fffffb30 = (CCharacter *)(afStack_154 + 2);
              in_stack_fffffb28 = (char *)0x4c765b;
              core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                        (g_CGorePtr,(CVector3f *)in_stack_fffffb30,(CVector3f *)0x0,(int)fStack_84,
                         EVar32);
            }
            pCVar31 = (this_ptr->base).victim;
            if (pCVar31->hit_points <= 0.0) {
              (*(((pCVar31->base).vtable._uc)->_uc).releaseFromGrab)(pCVar31);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)pCStack_18,1,1);
            }
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
          }
          else {
            pCVar31 = (this_ptr->base).victim;
            (*(((pCVar31->base).vtable._uc)->_uc).releaseFromGrab)(pCVar31);
            in_stack_fffffb30 = (CCharacter *)0x1;
            in_stack_fffffb28 = (char *)pCStack_18;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)pCStack_18,1,1);
          }
        }
        else {
          in_stack_fffffb28 = (char *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)pCStack_18,1,1);
        }
      }
      break;
    case 0xb:
    case 0xc:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
                ((CDeformableModelInstance *)pCStack_18);
      core_skeleton_cpp_FUN_0054dbd0(pCStack_18);
      afStack_118[2] = afStack_190[2];
      afStack_118[(uint)bVar20 * -2 + 3] = afStack_190[(uint)bVar20 * -2 + 3];
      afStack_118[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
           afStack_190[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
      core_actor_cpp_FUN_00408b80(this_ptr);
      fVar27 = 12.0;
      fVar30 = 8.0;
      CStack_1ac.x = fStack_ec;
      *(float *)((int)&CStack_1ac + (uint)bVar20 * -8 + 4) = afStack_118[(uint)bVar20 * -2 + 0xc];
      *(float *)((int)&CStack_1ac + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           afStack_118[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar30,fVar27);
      fVar22 = (float10)fStack_14 * (float10)_DAT_005c4305;
      EVar32 = BLOOD_TYPE_RED;
      round();
      fStack_70 = (float)(int)ROUND(fVar22);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                (g_CGorePtr,&CStack_1ac,(CVector3f *)0x0,(int)fStack_70,EVar32);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-dig-?.wav @1.3");
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
                ((CDeformableModelInstance *)pCStack_18);
      core_skeleton_cpp_FUN_0054dbd0(pCStack_18);
      fStack_35c = fStack_26c;
      afStack_358[(uint)bVar20 * -2] = afStack_280[(uint)bVar20 * -2 + 6];
      afStack_358[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
           afStack_280[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
      core_actor_cpp_FUN_00408b80(this_ptr);
      fVar27 = 12.0;
      fVar30 = 8.0;
      CStack_140.x = fStack_338;
      *(float *)((int)&CStack_140 + (uint)bVar20 * -8 + 4) = afStack_358[(uint)bVar20 * -2 + 9];
      *(float *)((int)&CStack_140 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           afStack_358[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 10];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar30,fVar27);
      fVar22 = (float10)fStack_14 * (float10)_DAT_005c4305;
      EVar32 = BLOOD_TYPE_RED;
      round();
      fStack_7c = (float)(int)ROUND(fVar22);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                (g_CGorePtr,&CStack_140,(CVector3f *)0x0,(int)fStack_7c,EVar32);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-eat-?.wav @1.3");
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
                ((CDeformableModelInstance *)pCStack_18);
      core_skeleton_cpp_FUN_0054dbd0(pCStack_18);
      acStack_320[0] = acStack_2fc[0];
      acStack_320[1] = acStack_2fc[1];
      acStack_320[2] = acStack_2fc[2];
      acStack_320[3] = acStack_2fc[3];
      afStack_31c[(uint)bVar20 * -2] = (float)apCStack_2f8[(uint)bVar20 * -2];
      afStack_31c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
           (float)apCStack_2f8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
      core_actor_cpp_FUN_00408b80(this_ptr);
      fVar27 = 12.0;
      fVar30 = 8.0;
      CStack_32c.x = (float)apCStack_2f8[2];
      *(CDemonActor **)(acStack_320 + (uint)bVar20 * -8 + -8) = apCStack_2f8[(uint)bVar20 * -2 + 3];
      *(CDemonActor **)(acStack_320 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + -4) =
           apCStack_2f8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar30,fVar27);
      fVar22 = (float10)fStack_14 * (float10)_DAT_005c4305;
      EVar32 = BLOOD_TYPE_RED;
      round();
      fStack_98 = (float)(int)ROUND(fVar22);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                (g_CGorePtr,&CStack_32c,(CVector3f *)0x0,(int)fStack_98,EVar32);
      iVar5 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
      if (iVar5 == 0) {
        pcVar16 = "ghoul-dig-?.wav @1.3";
      }
      else {
        pcVar16 = "ghoul-eat-?.wav @1.3";
      }
      pcVar18 = acStack_3c4;
      do {
        cVar19 = *pcVar16;
        *pcVar18 = cVar19;
        if (cVar19 == '\0') break;
        cVar19 = pcVar16[1];
        pcVar16 = pcVar16 + 2;
        pcVar18[1] = cVar19;
        pcVar18 = pcVar18 + 2;
      } while (cVar19 != '\0');
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,acStack_3c4);
    }
    goto switchD_004c795a_caseD_e;
  }
  fStack_14 = (float)core_motion_cpp_FUN_004fc350(pCStack_18);
  dStack_a8 = (double)delta_time;
  *(float *)&(this_ptr->base).base.field_0x2524 =
       fStack_14 * (float)_DAT_005c42ad * delta_time * *(float *)&(this_ptr->base).field_0xcdcc;
  core_charactr_cpp_FUN_00434850(this_ptr);
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)pCStack_18);
  fStack_34 = *(float *)(pSVar6 + 0x24);
  if (fStack_34 == 2.38221e-44) {
    fVar30 = *(float *)&(this_ptr->base).field_0xcdcc;
    fVar22 = (float10)_DAT_005c42b5;
    *(float *)&(this_ptr->base).base.field_0x2528 =
         *(float *)&(this_ptr->base).base.field_0x2528 * (float)_DAT_005c42bd;
    *(float *)&(this_ptr->base).base.field_0x2524 =
         (float)((float10)dStack_a8 * fVar22 * (float10)fVar30);
  }
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    fStack_28 = -1.0;
    pCVar7 = (CGhoul *)&(this_ptr->base).base.model;
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)pCVar7);
    switch(*(uint *)(pSVar6 + 0x24)) {
    case 0:
      if (this_ptr->stun_timer <= 0.0) {
        pCVar10 = this_ptr->dark_waypoint;
        if (pCVar10 == (CDemonActor *)0x0) {
          iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
          if (iVar5 != 0) goto LAB_004c7fd6;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CCharacter *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&(this_ptr->base).base.model.base,1,1);
            iVar5 = sound_sndmain_cpp_FUN_00556700(this_ptr->sfx_handles[0]);
            if (iVar5 != 0) {
              in_stack_fffffb28 = (char *)0x4c8044;
              iVar5 = sound_sndmain_cpp_FUN_00556700(this_ptr->sfx_handles[1]);
              if (iVar5 != 0) break;
            }
            in_stack_fffffb28 = (char *)this_ptr;
            uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"ghoul-alert-?.wav");
            this_ptr->sfx_handles[0] = uVar12;
          }
        }
        else {
          fStack_230 = (pCVar10->location).position.x -
                       (this_ptr->base).base.base.location.position.x;
          fStack_22c = (pCVar10->location).position.y -
                       (this_ptr->base).base.base.location.position.y;
          fStack_228 = (pCVar10->location).position.z -
                       (this_ptr->base).base.base.location.position.z;
          afStack_358[2] = fStack_230;
          afStack_358[(uint)bVar20 * -2 + 3] = afStack_280[(uint)bVar20 * -2 + 0x15];
          afStack_358[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
               afStack_280[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x16];
          fStack_344 = afStack_358[2];
          afStack_358[(uint)bVar20 * -2 + 6] = afStack_358[(uint)bVar20 * -2 + 3];
          afStack_358[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7] =
               afStack_358[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
          fStack_90 = fStack_33c * fStack_33c + fStack_344 * fStack_344 + fStack_340 * fStack_340;
          if (SQRT(fStack_90) < (float)_DAT_005c42bd) {
            fVar30 = (this_ptr->base).base.hit_points + delta_time;
            this_ptr->heal_timer = this_ptr->heal_timer - delta_time;
            (this_ptr->base).base.hit_points = fVar30;
            if ((float)_DAT_005c42fd < fVar30) {
              (this_ptr->base).base.hit_points = 100.0;
            }
            if (this_ptr->heal_timer < 0.0) {
              this_ptr->heal_timer = 0.0;
              this_ptr->dark_waypoint = (CDemonActor *)0x0;
            }
          }
        }
      }
      else {
        this_ptr->stun_timer = this_ptr->stun_timer - delta_time;
      }
      break;
    case 1:
    case 0x11:
      if ((this_ptr->is_berserk != 0) && (fStack_34 == 1.4013e-45)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,0x11,1);
      }
      if (0.0 < this_ptr->stun_timer) {
        this_ptr->stun_timer = this_ptr->stun_timer - delta_time;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,0,1);
      }
      else {
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        fStack_24 = (float)(uint)(*(int *)(&(this_ptr->base).base.model.field_0x2140 +
                                          this_ptr->part_indices[1] * 4) != 0);
        if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[3] * 4) != 0
           ) {
          fStack_24 = (float)((int)fStack_24 + 1);
        }
        iVar5 = (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) + 0x10c))();
        pCVar4 = g_CGamePtr;
        if (iVar5 == 0) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          pCVar31 = (this_ptr->base).victim;
          if (pCVar31 == (CCharacter *)0x0) {
            in_stack_fffffb28 = (char *)this_ptr;
            pCVar7 = (CGhoul *)
                     core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
            if (pCVar7 == (CGhoul *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(this_ptr->base).base.model.base,0,1);
              in_stack_fffffb28 = (char *)pCVar7;
            }
          }
          else {
            fStack_248 = (pCVar31->base).location.position.x -
                         (this_ptr->base).base.base.location.position.x;
            fStack_244 = (pCVar31->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            fStack_240 = (pCVar31->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            auStack_308._0_4_ = fStack_248;
            *(float *)(acStack_2fc + (uint)bVar20 * -8 + -8) = afStack_280[(uint)bVar20 * -2 + 0xf];
            *(float *)(acStack_2fc + ((uint)bVar20 * -2 + (uint)bVar20 * -2) * 4 + -4) =
                 afStack_280[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x10];
            auStack_308._4_4_ = 0.0;
            if ((((this_ptr->base).base.hit_points < (float)_DAT_005c42e5) && (0 < (int)fStack_24))
               && (this_ptr->dark_waypoint == (CDemonActor *)0x0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004c6c80(this_ptr,delta_time);
            }
            pCVar10 = this_ptr->dark_waypoint;
            in_stack_fffffb28 = (char *)&(this_ptr->base).base.model;
            if (pCVar10 == (CDemonActor *)0x0) {
              fVar30 = 0.17453292;
              pCVar7 = (CGhoul *)0x3f800000;
              fStack_164 = 0.0;
              fStack_15c = 0x40200000;
              fStack_160 = 0.0;
              pCVar31 = (this_ptr->base).victim;
              pCVar9 = (*((pCVar31->base).vtable._ub)->getPathMap)(&pCVar31->base);
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                ((CCharacter *)this_ptr,
                                 &(((this_ptr->base).victim)->base).location.position,pCVar9,
                                 (CVector3f *)pCVar7,fVar30,(float)in_stack_fffffb30);
              if (iVar5 < 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)in_stack_fffffb28,0,1);
              }
              else {
                in_stack_fffffb28 = (char *)pCVar7;
                if (((0 < iVar5) && (0 < (int)fStack_24)) &&
                   (((this_ptr->base).attack_cooldown <= 0.0 &&
                    ((pCVar31 = (this_ptr->base).victim,
                     pCVar10 = (*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31),
                     in_stack_fffffb28 = (char *)pCVar7, pCVar10 == (CDemonActor *)0x0 &&
                     (this_ptr->flinch_blend_weight <= 0.0)))))) {
                  fStack_44 = SQRT(fStack_300 * fStack_300 +
                                   (float)auStack_308._0_4_ * (float)auStack_308._0_4_ +
                                   (float)auStack_308._4_4_ * (float)auStack_308._4_4_);
                  fStack_2c = 0.0;
                  fStack_40 = 0.0;
                  fStack_48 = 0.0;
                  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 +
                              this_ptr->part_indices[3] * 4) != 0) {
                    fStack_2c = (1.0 - ABS(fStack_44 - 0x4059999A) / 0x4059999A) *
                                (float)_DAT_005c42ed;
                  }
                  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 +
                              this_ptr->part_indices[1] * 4) != 0) {
                    fStack_40 = (1.0 - ABS(fStack_44 - 0x40200000) / 0x40200000) *
                                (float)_DAT_005c42f5;
                  }
                  pCVar31 = (this_ptr->base).victim;
                  in_stack_fffffb28 = (char *)0x4c8405;
                  fStack_3c = fStack_44;
                  iVar5 = (*(((pCVar31->base).vtable._uc)->_uc).canBeGrabbed)
                                    (pCVar31,(CDemonActor *)this_ptr,0);
                  if (iVar5 != 0) {
                    fStack_48 = (1.0 - ABS(fStack_3c - 0x40200000) / 0x40200000) *
                                (float)_DAT_005c42ed;
                  }
                  fStack_4c = fStack_2c + fStack_40;
                  fStack_54 = fStack_4c + fStack_48;
                  if (0.0 < fStack_54) {
                    fStack_50 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,fStack_54);
                    if (fStack_2c <= fStack_50) {
                      if (fStack_4c <= fStack_50) {
                        iVar5 = 0xb;
                      }
                      else {
                        iVar5 = 0xc;
                      }
                    }
                    else {
                      iVar5 = 2;
                    }
                    fStack_14 = fStack_50;
                    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                              (&(this_ptr->base).base.model.base,iVar5,1);
                    (this_ptr->base).attack_cooldown = 0.7;
                  }
                }
              }
            }
            else {
              fVar30 = 0.0;
              pCVar7 = (CGhoul *)0x40400000;
              pCVar9 = (*((pCVar10->vtable)._ub)->getPathMap)(pCVar10);
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                ((CCharacter *)this_ptr,
                                 &(this_ptr->dark_waypoint->location).position,pCVar9,
                                 (CVector3f *)pCVar7,fVar30,(float)in_stack_fffffb30);
              if (0 < iVar5) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)in_stack_fffffb28,0,1);
                pCVar7 = (CGhoul *)0x4c820d;
                fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,30.0);
                this_ptr->heal_timer = fStack_14;
              }
              if (iVar5 < 0) {
                this_ptr->heal_timer = 30.0;
                this_ptr->dark_waypoint = (CDemonActor *)0x0;
              }
              in_stack_fffffb28 = (char *)pCVar7;
              if (fStack_34 == 1.4013e-45) {
                in_stack_fffffb28 = (char *)&(this_ptr->base).base.model;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)in_stack_fffffb28,0x11,1);
              }
            }
          }
        }
        else {
          if (this_ptr->pending_eat_state < 0) {
            cVar19 = *(int *)(&(this_ptr->base).base.model.field_0x2140 +
                             this_ptr->part_indices[1] * 4) != 0;
            if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[3] * 4)
                != 0) {
              cVar19 = cVar19 + '\x01';
            }
            if (cVar19 != '\0') {
              if (cVar19 == '\x01') {
                this_ptr->pending_eat_state = 0xe;
                *(uint *)&pCVar4->field_0x244 = 1;
              }
              else {
                iVar5 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
                this_ptr->pending_eat_state = (iVar5 == 0) + 0xd;
                *(uint *)&g_CGamePtr->field_0x244 = 1;
              }
              goto LAB_004c84bd;
            }
            this_ptr->pending_eat_state = 0;
          }
          else {
LAB_004c84bd:
            if (this_ptr->pending_eat_state != 0) {
              pCStack_38 = (CMotionController_vtable *)0x40000000;
              if (this_ptr->pending_eat_state == 0xe) {
                pCStack_38 = (CMotionController_vtable *)0x40B00000;
              }
              fVar27 = 0.08726646;
              fVar30 = 0.5;
              CStack_29c.z = (float)pCStack_38;
              pCVar24 = &CStack_29c;
              CStack_29c.x = 0.0;
              iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              CStack_29c.y = 0.0;
              pCVar9 = (CPathMap *)(**(code **)(*(int *)(iVar5 + 0x154) + 0xc4))(iVar5);
              core_skeleton_cpp_FUN_0054dbd0(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x158,0);
              pfVar15 = &fStack_218;
              fStack_218 = fStack_17c;
              afStack_214[(uint)bVar20 * -2] = afStack_190[(uint)bVar20 * -2 + 6];
              afStack_214[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                   afStack_190[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
              core_actor_cpp_FUN_00408b80(*(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),pfVar15);
              pCVar23 = &CStack_290;
              CStack_290.x = fStack_170;
              *(float *)((int)&CStack_290 + (uint)bVar20 * -8 + 4) =
                   afStack_190[(uint)bVar20 * -2 + 9];
              pCVar7 = this_ptr;
              *(float *)((int)&CStack_290 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                   afStack_190[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 10];
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                ((CCharacter *)pCVar7,pCVar23,pCVar9,pCVar24,fVar30,fVar27);
              if (((0 < iVar5) &&
                  (iVar5 = (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) +
                                       0x10c))(), iVar5 == 2)) &&
                 (core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            (&(this_ptr->base).base.model.base,this_ptr->pending_eat_state,1),
                 this_ptr->pending_eat_state == 0xd)) {
                pCVar3 = (this_ptr->base).base.base.vtable._ub;
                fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.5,1.2);
                (*pCVar3->playSoundWithDelay)
                          ((CDemonActor *)this_ptr,"ghoul-scream-!-?.wav",fStack_14);
              }
              break;
            }
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,0,1);
        }
      }
      break;
    case 2:
      pCVar31 = (this_ptr->base).victim;
      if (pCVar31 == (CCharacter *)0x0) {
LAB_004c7fd6:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,1,1);
      }
      else {
        pCVar10 = (*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31);
        if (pCVar10 == (CDemonActor *)0x0) {
          in_stack_fffffb28 = (char *)0x3f000000;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.2,0.5);
          iVar5 = this_ptr->part_indices[3];
          (this_ptr->base).attack_cooldown = fStack_14;
          if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + iVar5 * 4) != 0) {
            fStack_5c = core_motion_cpp_FUN_004fc930((CMotionController *)pCVar7);
            dStack_b8 = (double)fStack_5c;
            in_stack_fffffb28 = (char *)pCVar7;
            fStack_14 = fStack_5c;
            if ((fStack_5c <= (float)_DAT_005c42cd) && (fStack_28 = 0x4059999A, 1.0 <= dStack_b8))
            {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_43c);
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
              fStack_438 = fStack_14;
              if (this_ptr->is_berserk != 0) {
                fStack_438 = fStack_14 * (float)_DAT_005c42cd;
              }
              in_stack_fffffb28 = (char *)aSStack_43c;
              uStack_408 = this_ptr;
              uStack_404 = this_ptr;
              uVar29 = 0x3e4ccccd;
              core_xform_cpp_FUN_00583260
                        (&DAT_01d22d58,
                         &(this_ptr->base).base.model.field_0xe80 + _DAT_01d22da8 * 0x30);
              uVar25 = CONCAT44(uVar29,afStack_280 + 0xb);
              afStack_254[0] = fStack_11c;
              afStack_280[(uint)bVar20 * -2 + 0xc] = afStack_118[(uint)bVar20 * -2];
              afStack_280[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd] =
                   afStack_118[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
              core_actor_cpp_FUN_00408b80(this_ptr,uVar25);
              uVar26 = ZEXT48(afStack_1e4 + 5);
              afStack_1d0[0] = afStack_130[2];
              afStack_1e4[(uint)bVar20 * -2 + 6] = afStack_130[(uint)bVar20 * -2 + 3];
              pCVar7 = this_ptr;
              afStack_1e4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7] =
                   afStack_130[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
              iVar5 = core_enemy_cpp_FUN_004893f0(pCVar7,uVar26);
              if (iVar5 != 0) {
                in_stack_fffffb28 = "gh-hits?.wav";
                (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"gh-hits?.wav");
              }
            }
          }
        }
        else {
          in_stack_fffffb28 = (char *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)pCVar7,1,1);
        }
      }
      break;
    case 10:
      if ((((this_ptr->base).pool_me == 0) && (this_ptr->lives_left < 1)) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_0054dbd0(pCVar7);
        fStack_194 = fStack_2c0;
        afStack_190[(uint)bVar20 * -2] = (float)apCStack_2bc[(uint)bVar20 * -2];
        afStack_190[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
             (float)apCStack_2bc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
        core_actor_cpp_FUN_00408b80(this_ptr);
        pCVar24 = &CStack_1a0;
        EVar32 = BLOOD_TYPE_RED;
        CStack_1a0.x = fStack_f8;
        *(float *)((int)&CStack_1a0 + (uint)bVar20 * -8 + 4) = afStack_118[(uint)bVar20 * -2 + 9];
        this_ptr_02 = g_CGorePtr;
        *(float *)((int)&CStack_1a0 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
             afStack_118[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 10];
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_02,pCVar24,EVar32);
        (this_ptr->base).pool_me = 1;
      }
      this_ptr->is_berserk = 0;
      if (((0 < this_ptr->spasm_count) || (0 < this_ptr->lives_left)) &&
         (iVar5 = this_ptr->spasm_timer - _DAT_01c5fad0, this_ptr->spasm_timer = iVar5, iVar5 < 1))
      {
        if (this_ptr->lives_left < 1) {
          this_ptr->spasm_count = this_ptr->spasm_count + -1;
        }
        if ((0 < this_ptr->spasm_count) || (0 < this_ptr->lives_left)) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(1.0,12.0);
          fVar22 = (float10)fStack_14 * (float10)_DAT_005c42c5;
          iVar28 = 1;
          iVar5 = 0xf;
          this_ptr_01 = (CMotionController *)round();
          this_ptr->spasm_timer = (int)ROUND(fVar22);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr_01,iVar5,iVar28);
        }
      }
      if (0 < this_ptr->lives_left) {
        iVar5 = this_ptr->arise_timer;
        if (iVar5 < 1) {
          iVar5 = iVar5 + _DAT_01c5fad0;
          fStack_58 = 0.0;
          this_ptr->arise_timer = iVar5;
          if (iVar5 < 0) {
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time);
            pCVar31 = (this_ptr->base).victim;
            if (pCVar31 != (CCharacter *)0x0) {
              afStack_2e0[2] =
                   (this_ptr->base).base.base.location.position.x -
                   (pCVar31->base).location.position.x;
              afStack_2e0[3] =
                   (this_ptr->base).base.base.location.position.y -
                   (pCVar31->base).location.position.y;
              fStack_2d0 = (this_ptr->base).base.base.location.position.z -
                           (pCVar31->base).location.position.z;
              afStack_1fc[2] = afStack_2e0[2];
              afStack_1fc[(uint)bVar20 * -2 + 3] = afStack_2e0[(uint)bVar20 * -2 + 3];
              (&pCStack_1ec)[(uint)bVar20 * -2 + (uint)bVar20 * -2] =
                   (CPlatform *)afStack_2e0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
              if (afStack_370 + 2 != afStack_1fc + 2) {
                afStack_370[2] = afStack_1fc[2];
                afStack_370[3] = afStack_1fc[3];
                pCStack_360 = pCStack_1ec;
              }
              fStack_78 = (float)pCStack_360 * (float)pCStack_360 +
                          afStack_370[2] * afStack_370[2] + afStack_370[3] * afStack_370[3];
              fStack_74 = (float)(((int)fStack_78 >> 1) + _DAT_01d1a0a4);
              if (fStack_74 < (float)_DAT_005c42b5) goto LAB_004c7c47;
            }
            if (fStack_58 == 0.0) break;
          }
          else {
            this_ptr->arise_timer = 0;
          }
LAB_004c7c47:
          fStack_20 = *(float *)&(this_ptr->base).base.field_0x3280;
          if (fStack_20 < *(float *)&(this_ptr->base).base.field_0x327c) {
            fStack_20 = (this_ptr->base).base.model.bounding_box.max.y;
          }
          if (fStack_20 < *(float *)&(this_ptr->base).base.field_0x327c) {
            fStack_20 = *(float *)&(this_ptr->base).base.field_0x327c + (float)_DAT_005c42d5;
          }
          fVar30 = 0.0;
          do {
            fStack_8c = (float)(int)fVar30 * _DAT_005c431d * _DAT_005c4321;
            fStack_14 = fVar30;
            core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
            fVar22 = (float10)fcos((float10)fStack_8c);
            fVar21 = (float10)fsin((float10)fStack_8c);
            fStack_30 = (float)core_setcolid_cpp_FUN_0053de10
                                         (g_CDemonSetPtr,
                                          (this_ptr->base).base.base.location.position.x,
                                          (this_ptr->base).base.base.location.position.z,
                                          (float)(fVar21 * (float10)_DAT_005c4325),
                                          (float)(fVar22 * (float10)_DAT_005c4325),
                                          *(uint *)&(this_ptr->base).base.field_0x3270,
                                          (this_ptr->base).base.base.location.position.y +
                                          *(float *)&(this_ptr->base).base.field_0x327c);
            fStack_14 = fStack_30;
            core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
            if (fStack_30 < 1.0) break;
            fVar30 = (float)((int)fVar30 + 1);
          } while ((int)fVar30 < 4);
          if ((int)fVar30 < 4) {
            this_ptr->arise_timer = 3;
            (this_ptr->base).victim = (CCharacter *)0x0;
          }
          else {
            fStack_14 = (float)(this_ptr->lives_left + 1);
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                                  (10.0,(float)(int)fStack_14 * (float)_DAT_005c432d);
            (this_ptr->base).base.hit_points = fStack_14;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&(this_ptr->base).base.model.base,0x10,1);
          }
        }
        else {
          iVar5 = iVar5 - _DAT_01c5fad0;
          this_ptr->arise_timer = iVar5;
          if (iVar5 < 1) {
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,30.0);
            fVar22 = -(float10)fStack_14 * (float10)_DAT_005c42dd;
            round();
            this_ptr->arise_timer = (int)ROUND(fVar22);
          }
        }
      }
      break;
    case 0xb:
      pCVar31 = (this_ptr->base).victim;
      if (pCVar31 == (CCharacter *)0x0) {
LAB_004c887a:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)pCVar7,1,1);
      }
      else {
        pCVar10 = (*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31);
        if (pCVar10 == (CDemonActor *)0x0) {
          fStack_28 = 0x40200000;
        }
        else {
          in_stack_fffffb28 = (char *)(this_ptr->base).victim;
          pCVar11 = (CGhoul *)
                    (*(((((CGhoul *)in_stack_fffffb28)->base).base.base.vtable._uc)->_uc).getGrabber
                    )((CCharacter *)in_stack_fffffb28);
          if (pCVar11 != this_ptr) {
            in_stack_fffffb28 = (char *)0x1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)pCVar7,1,1);
          }
        }
      }
      break;
    case 0xc:
      pCVar31 = (this_ptr->base).victim;
      if ((pCVar31 == (CCharacter *)0x0) ||
         (pCVar10 = (*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31),
         pCVar10 != (CDemonActor *)0x0)) goto LAB_004c887a;
      in_stack_fffffb28 = (char *)0x3f000000;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.2,0.5);
      iVar5 = this_ptr->part_indices[1];
      (this_ptr->base).attack_cooldown = fStack_14;
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + iVar5 * 4) != 0) {
        fStack_60 = core_motion_cpp_FUN_004fc930((CMotionController *)pCVar7);
        dStack_b0 = (double)fStack_60;
        in_stack_fffffb28 = (char *)pCVar7;
        fStack_14 = fStack_60;
        if (fStack_60 <= (float)_DAT_005c42cd) {
          fStack_28 = 0x40200000;
          if (1.0 <= dStack_b0) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_400);
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
            fStack_3fc = fStack_14;
            if (this_ptr->is_berserk != 0) {
              fStack_3fc = fStack_14 * (float)_DAT_005c42cd;
            }
            in_stack_fffffb28 = (char *)aSStack_400;
            uStack_3cc = this_ptr;
            uStack_3c8 = this_ptr;
            uVar29 = 0x3ecccccd;
            core_xform_cpp_FUN_00583260
                      (&DAT_01d22d4c,&(this_ptr->base).base.model.field_0xe80 + _DAT_01d22da4 * 0x30
                      );
            uVar25 = CONCAT44(uVar29,&fStack_284);
            fStack_284 = fStack_23c;
            afStack_280[(uint)bVar20 * -2] = afStack_280[(uint)bVar20 * -2 + 0x12];
            afStack_280[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                 afStack_280[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x13];
            core_actor_cpp_FUN_00408b80(this_ptr,uVar25);
            uVar26 = ZEXT48(afStack_280 + 2);
            afStack_280[2] = fStack_e0;
            afStack_280[(uint)bVar20 * -2 + 3] = afStack_118[(uint)bVar20 * -2 + 0xf];
            pCVar7 = this_ptr;
            afStack_280[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
                 afStack_118[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x10];
            iVar5 = core_enemy_cpp_FUN_004893f0(pCVar7,uVar26);
            if (iVar5 != 0) {
              in_stack_fffffb28 = "gh-hits?.wav";
              (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"gh-hits?.wav");
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar5 = *(int *)&this_ptr->field_0xd058 - _DAT_01c5fad0;
      *(int *)&this_ptr->field_0xd058 = iVar5;
      if (iVar5 < 1) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"burp[1,2].wav");
        in_stack_fffffb28 = (char *)0x41700000;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(15.0,30.0);
        fVar22 = (float10)fStack_14 * (float10)_DAT_005c42c5;
        round();
        *(int *)&this_ptr->field_0xd058 = (int)ROUND(fVar22);
      }
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        in_stack_fffffb28 = (char *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,0,1);
      }
    }
    if (((0.0 <= fStack_28) && (this_ptr->flinch_blend_weight <= 0.0)) &&
       ((this_ptr->base).victim != (CCharacter *)0x0)) {
      fVar30 = 0.5235988;
      pCVar23 = (CVector3f *)0x40400000;
      UStack_2cc.vec.x = 0.0;
      UStack_2cc.vec.z = fStack_28;
      UStack_2cc.vec.y = 0.0;
      pCVar31 = (this_ptr->base).victim;
      pCVar9 = (*((pCVar31->base).vtable._ub)->getPathMap)(&pCVar31->base);
      core_skeleton_cpp_FUN_0054dbd0(&((this_ptr->base).victim)->model,0);
      afStack_260[0] = afStack_31c[2];
      afStack_280[(uint)bVar20 * -2 + 9] = afStack_31c[(uint)bVar20 * -2 + 3];
      afStack_280[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 10] =
           afStack_31c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
      core_actor_cpp_FUN_00408b80((this_ptr->base).victim,afStack_280 + 8);
      pCVar24 = &CStack_2b4;
      CStack_2b4.x = (float)pCStack_158;
      *(float *)((int)&CStack_2b4 + (uint)bVar20 * -8 + 4) = afStack_154[(uint)bVar20 * -2];
      pCVar7 = this_ptr;
      *(float *)((int)&CStack_2b4 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           afStack_154[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
      iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)pCVar7,pCVar24,pCVar9,pCVar23,fVar30,(float)in_stack_fffffb28
                        );
      if (iVar5 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,1,1);
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
      }
    }
    goto LAB_004c7010;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
      iVar5 = 1;
    }
    else {
LAB_004c799c:
      iVar5 = 0;
    }
LAB_004c6fe9:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) {
      iVar5 = 0x11;
      goto LAB_004c6fe9;
    }
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_004c799c;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_004c7010:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    pCVar31 = (this_ptr->base).victim;
    if ((pCVar31 != (CCharacter *)0x0) &&
       (pCVar7 = (CGhoul *)(*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042c1e0(this_ptr);
    fStack_200 = (this_ptr->base).base.velocity.x * delta_time;
    afStack_1fc[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_1fc[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_104 = fStack_200;
    afStack_118[(uint)bVar20 * -2 + 6] = afStack_1fc[(uint)bVar20 * -2];
    afStack_118[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7] =
         afStack_1fc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    pCVar24 = &(this_ptr->base).base.position_delta;
    fStack_134 = fStack_104 + pCVar24->x;
    afStack_130[0] = fStack_100 + (this_ptr->base).base.position_delta.y;
    afStack_130[1] = fStack_fc + (this_ptr->base).base.position_delta.z;
    fStack_1c4 = fStack_134;
    afStack_1e4[(uint)bVar20 * -2 + 9] = afStack_130[(uint)bVar20 * -2];
    afStack_1e4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 10] =
         afStack_130[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    pCVar23 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_1b8 = fStack_1c4 + pCVar23->x;
    fStack_1b4 = fStack_1c0 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_1b0 = fStack_1bc + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_224.x = fStack_1b8;
    *(float *)((int)&CStack_224 + (uint)bVar20 * -8 + 4) = afStack_1e4[(uint)bVar20 * -2 + 0xc];
    *(float *)((int)&CStack_224 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
         afStack_1e4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar24->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar30 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar30;
    pCVar23->x = fVar30;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_224);
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(this_ptr_00);
  dStack_c0 = (double)this_ptr->flinch_blend_weight;
  if (0.0 < dStack_c0) {
    fStack_6c = (float)core_motion_cpp_FUN_004fca20(this_ptr_00,this_ptr->flinch_motion_index);
    fVar30 = 1.0 - this_ptr->flinch_blend_weight;
    fStack_68 = 1.0 - fVar30 * fVar30 * fVar30;
    fStack_14 = fStack_6c;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
              (this_ptr_00,this_ptr->flinch_motion_index,fStack_6c,fStack_68,_DAT_01d22dc4,
               core_skeleton_cpp_FUN_0054bef0);
    fVar30 = this_ptr->flinch_blend_weight - delta_time / _DAT_005e0a3c;
    this_ptr->flinch_blend_weight = fVar30;
    if (fVar30 < 0.0) {
      this_ptr->flinch_blend_weight = 0.0;
    }
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  if (((float)_DAT_005c4335 < ABS((this_ptr->base).base.turn_angle_accumulator)) ||
     (fVar30 = (this_ptr->base).base.position_delta.y,
     fVar27 = (this_ptr->base).base.position_delta.x, fVar1 = (this_ptr->base).base.position_delta.z
     , (float)_DAT_005c4335 < SQRT(fVar1 * fVar1 + fVar27 * fVar27 + fVar30 * fVar30))) {
    iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                      (0x02CF5680,*(uint *)&this_ptr->field_0xd054);
    if (iVar5 == 0) {
      _sprintf(&stack0xfffffb24,"ghoul-walk-?.wav *%f");
      uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,&stack0xfffffb24);
      *(uint *)&this_ptr->field_0xd054 = uVar12;
    }
  }
  else {
    core_sound_cpp_CSound_killSound_FUN_00560b00(0x02CF5680,*(uint *)&this_ptr->field_0xd054);
  }
  if ((this_ptr->base).pool_me == 0) {
    iVar5 = this_ptr->part_indices[9];
    if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + iVar5 * 4) == 0) {
      fVar30 = 0.5;
      iVar28 = _DAT_01d22dc8;
    }
    else {
      core_charactr_cpp_FUN_0042fdc0(this_ptr,this_ptr->part_indices[0],_DAT_01d22db4);
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[0] * 4) != 0)
      {
        core_charactr_cpp_FUN_0042fdc0(this_ptr,this_ptr->part_indices[1],_DAT_01d22dac);
      }
      core_charactr_cpp_FUN_0042fdc0(this_ptr,this_ptr->part_indices[2],_DAT_01d22db8);
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[2] * 4) != 0)
      {
        core_charactr_cpp_FUN_0042fdc0(this_ptr,this_ptr->part_indices[3],_DAT_01d22db0);
      }
      fVar30 = 0.7;
      iVar5 = this_ptr->part_indices[10];
      iVar28 = _DAT_01d22da0;
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90
              ((CCharacter *)this_ptr,iVar5,iVar28,fVar30);
    core_charactr_cpp_FUN_0042fc90();
  }
  if ((this_ptr->dark_waypoint != (CDemonActor *)0x0) && (fStack_34 == 2.38221e-44)) {
    afStack_1e4[2] = (this_ptr->base).base.base.location.position.x - (this_ptr->prev_position).x;
    afStack_1e4[3] = (this_ptr->base).base.base.location.position.y - (this_ptr->prev_position).y;
    fStack_1d4 = (this_ptr->base).base.base.location.position.z - (this_ptr->prev_position).z;
    fStack_374 = afStack_1e4[2];
    afStack_370[(uint)bVar20 * -2] = afStack_1e4[(uint)bVar20 * -2 + 3];
    afStack_370[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
         afStack_1e4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
    if (delta_time * (float)_DAT_005c42d5 <=
        SQRT(afStack_370[1] * afStack_370[1] + fStack_374 * fStack_374)) {
      this_ptr->stuck_timer = 1.0;
    }
    else {
      fVar30 = this_ptr->stuck_timer - delta_time;
      this_ptr->stuck_timer = fVar30;
      if (fVar30 < 0.0) {
        this_ptr->heal_timer = 30.0;
        this_ptr->dark_waypoint = (CDemonActor *)0x0;
        this_ptr->is_berserk = 0;
      }
    }
  }
  pCVar13 = &(this_ptr->base).base.base.location;
  if ((CLocation *)&this_ptr->prev_position == pCVar13) {
    return;
  }
  (this_ptr->prev_position).x = (pCVar13->position).x;
  (this_ptr->prev_position).y = (this_ptr->base).base.base.location.position.y;
  (this_ptr->prev_position).z = (this_ptr->base).base.base.location.position.z;
  return;
}
