// Name: core_ghoul.cpp_CGhoul_process_FUN_004de330
// Address: 004de330
// Address Range: [[004de330, 004e00fa]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004de330(CGhoul *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004de330(CGhoul *this_ptr,float delta_time)

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
  int iVar9;
  CPathMap *pCVar10;
  CMotionController *this_ptr_01;
  CDemonActor *pCVar11;
  CGhoul *pCVar12;
  uint uVar13;
  CLocation *pCVar14;
  uint *puVar15;
  float *pfVar16;
  char *pcVar17;
  uint *puVar18;
  char *pcVar19;
  char cVar20;
  byte bVar21;
  float10 fVar22;
  float10 fVar23;
  float afStackY_135c [15];
  CDemonActor *apCStackY_1320 [6];
  float afStackY_1308 [9];
  CDemonActor *apCStackY_12e4 [6];
  float afStackY_12cc [884];
  CDemonActor **ppCVar24;
  CVector3f *pCVar25;
  CVector3f *pCVar26;
  CGore *this_ptr_02;
  float fVar28;
  uint uVar29;
  ulonglong uVar27;
  char *in_stack_fffffb24;
  float fVar30;
  CCharacter *in_stack_fffffb2c;
  CCharacter *pCVar31;
  EBloodType EVar32;
  SDamageInfo SStack_478;
  SDamageInfo SStack_43c;
  SDamageInfo SStack_400;
  char acStack_3c4 [32];
  uint auStack_3a4 [6];
  uint uStack_38c;
  float fStack_388;
  float fStack_37c;
  float fStack_374;
  float afStack_370 [5];
  float fStack_35c;
  char acStack_358 [4];
  float fStack_354;
  float fStack_350;
  float afStack_34c [3];
  byte auStack_340 [12];
  CDemonActor *apCStack_334 [5];
  CVector3f CStack_320;
  CVector3f CStack_314;
  CVector3f CStack_308;
  uint uStack_2fc;
  CDemonActor *apCStack_2f8 [5];
  CMotionList *pCStack_2e4;
  float afStack_2e0 [2];
  CVector3f CStack_2d8;
  CVector3f CStack_2cc;
  CVector3f CStack_2c0;
  float fStack_2b4;
  float afStack_2b0 [4];
  float fStack_2a0;
  CVector3f CStack_29c;
  float fStack_290;
  float afStack_28c [2];
  CVector3f CStack_284;
  float fStack_278;
  float afStack_274 [2];
  CMotionList *pCStack_26c;
  float afStack_268 [5];
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  CVector3f CStack_23c;
  CVector3f CStack_230;
  float fStack_224;
  float afStack_220 [5];
  float fStack_20c;
  float fStack_208;
  float fStack_204;
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
  CVector3f CStack_1b8;
  CVector3f CStack_1ac;
  float fStack_1a0;
  float afStack_19c [5];
  float fStack_188;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float afStack_16c [4];
  float fStack_15c;
  float fStack_158;
  float fStack_14c;
  float fStack_148;
  CMotionList *pCStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float afStack_130 [5];
  CVector3f CStack_11c;
  CMotionList *pCStack_110;
  float afStack_10c [5];
  float fStack_f8;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_a8;
  double dStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CPlatform *pCStack_70;
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
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  CGhoul *pCStack_18;
  float fStack_14;
  
  bVar21 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  pCStack_70 = (CPlatform *)(delta_time * (this_ptr->base).speed);
  pCStack_18 = (CGhoul *)&(this_ptr->base).base.model;
switchD_004dedc4_caseD_e:
  if (0.0 < (float)pCStack_70) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)pCStack_18,(float *)&pCStack_70);
    switch(iVar5) {
    case 5:
      pCVar31 = (this_ptr->base).victim;
      fStack_1c = 1.4013e-45;
      if ((pCVar31 != (CCharacter *)0x0) &&
         (EVar8 = (*(((pCVar31->base).vtable._uc)->_uc).getDeathState)(pCVar31),
         EVar8 == DEATH_STATE_ALIVE)) {
        in_stack_fffffb24 = (char *)(this_ptr->base).victim;
        pCVar11 = (*(((((CGhoul *)in_stack_fffffb24)->base).base.base.vtable._uc)->_uc).getGrabber)
                            ((CCharacter *)in_stack_fffffb24);
        if ((pCVar11 == (CDemonActor *)0x0) &&
           (pCVar31 = (this_ptr->base).victim, in_stack_fffffb24 = (char *)this_ptr,
           iVar5 = (*(((pCVar31->base).vtable._uc)->_uc).canBeGrabbed)
                             (pCVar31,(CDemonActor *)this_ptr,0), iVar5 != 0)) {
          fStack_64 = 0x40200000;
          afStack_34c[2] = 0.0;
          auStack_340._0_4_ = 0.0;
          auStack_340._4_4_ = 0x40200000;
          in_stack_fffffb2c = (CCharacter *)0x4de88b;
          core_actor_cpp_FUN_00408b40();
          fStack_2b4 = fStack_1f4;
          afStack_2b0[(uint)bVar21 * -2] = afStack_1f0[(uint)bVar21 * -2];
          afStack_2b0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
               afStack_1f0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
          pCVar31 = (this_ptr->base).victim;
          fVar30 = fStack_2b4 - (pCVar31->base).location.position.x;
          fVar28 = afStack_2b0[1] - (pCVar31->base).location.position.z;
          if (1.0 < SQRT(fVar28 * fVar28 + fVar30 * fVar30)) {
            fStack_1c = 0.0;
          }
          pCVar31 = (this_ptr->base).victim;
          if ((ABS(afStack_2b0[0] - (pCVar31->base).location.position.y) <= (float)_DAT_005e3cb1) &&
             (((fStack_1c == 0.0 ||
               (iVar5 = (*(((pCVar31->base).vtable._uc)->_uc).getGrabbed)
                                  (pCVar31,(CDemonActor *)this_ptr,0), in_stack_fffffb2c = pCVar31,
               iVar5 != 0)) && (fStack_1c != 0.0)))) break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)pCStack_18,1,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar5);
      break;
    case 10:
      pCVar31 = (this_ptr->base).victim;
      if (pCVar31 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)pCStack_18,1,1);
      }
      else {
        pCVar7 = (CGhoul *)(*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31);
        if (pCVar7 == this_ptr) {
          pCVar31 = (this_ptr->base).victim;
          EVar8 = (*(((pCVar31->base).vtable._uc)->_uc).getDeathState)(pCVar31);
          if (EVar8 == DEATH_STATE_ALIVE) {
            pCVar31 = (this_ptr->base).victim;
            in_stack_fffffb24 = (char *)0x4de992;
            (*((pCVar31->base).vtable._ub)->getBoundingBox)
                      (&pCVar31->base,(CBoundingBox3D *)in_stack_fffffb2c);
            puVar15 = auStack_3a4;
            puVar18 = &uStack_38c;
            for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar18 = *puVar15;
              puVar15 = puVar15 + (uint)bVar21 * -2 + 1;
              puVar18 = puVar18 + (uint)bVar21 * -2 + 1;
            }
            fVar30 = fStack_37c - fStack_388;
            pCVar31 = (this_ptr->base).victim;
            pfVar16 = (float *)((int)pCVar31 + (uint)bVar21 * -8 + 0x24);
            fStack_14c = (pCVar31->base).location.position.x;
            afStack_16c[(uint)bVar21 * -2 + 9] = *pfVar16;
            afStack_16c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 10] = pfVar16[(uint)bVar21 * -2 + 1]
            ;
            fStack_148 = fVar30 * (float)_DAT_005e3d01 + fStack_148;
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_400);
            SStack_400.damage_amount =
                 core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(15.0,25.0);
            fStack_14 = SStack_400.damage_amount;
            core_actor_cpp_FUN_00408bb0();
            fStack_d4 = afStack_10c[2];
            afStack_10c[(uint)bVar21 * -2 + 0xf] = afStack_10c[(uint)bVar21 * -2 + 3];
            afStack_10c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x10] =
                 afStack_10c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
            if (&SStack_400.impact_direction != (CVector3f *)(afStack_10c + 0xe)) {
              SStack_400.impact_direction.x = fStack_d4;
              SStack_400.impact_direction.y = fStack_d0;
              SStack_400.impact_direction.z = fStack_cc;
            }
            SStack_400.attacker = (CDemonActor *)this_ptr;
            SStack_400.wielder = (CDemonActor *)this_ptr;
            in_stack_fffffb2c = (this_ptr->base).victim;
            (*(((in_stack_fffffb2c->base).vtable._uc)->_uc).processDamage)
                      (in_stack_fffffb2c,&SStack_400);
            dStack_c8 = (double)SStack_400.damage_amount;
            if (0.0 < dStack_c8) {
              fVar23 = (float10)SStack_400.damage_amount * (float10)_DAT_005e3d09 *
                       (float10)_DAT_005e3cf9;
              EVar32 = BLOOD_TYPE_RED;
              round();
              fStack_8c = (float)(int)ROUND(fVar23);
              in_stack_fffffb2c = (CCharacter *)(afStack_16c + 8);
              in_stack_fffffb24 = (char *)0x4deac5;
              core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                        (g_CGorePtr,(CVector3f *)in_stack_fffffb2c,(CVector3f *)0x0,(int)fStack_8c,
                         EVar32);
            }
            pCVar31 = (this_ptr->base).victim;
            if (pCVar31->hit_points <= 0.0) {
              (*(((pCVar31->base).vtable._uc)->_uc).releaseFromGrab)(pCVar31);
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)pCStack_18,1,1);
            }
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
          }
          else {
            pCVar31 = (this_ptr->base).victim;
            (*(((pCVar31->base).vtable._uc)->_uc).releaseFromGrab)(pCVar31);
            in_stack_fffffb2c = (CCharacter *)0x1;
            in_stack_fffffb24 = (char *)pCStack_18;
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)pCStack_18,1,1);
          }
        }
        else {
          in_stack_fffffb24 = (char *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)pCStack_18,1,1);
        }
      }
      break;
    case 0xb:
    case 0xc:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
                ((CDeformableModelInstance *)pCStack_18);
      iVar9 = _DAT_01cd0d9c;
      if (iVar5 == 0xc) {
        iVar9 = _DAT_01cd0da0;
      }
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                ((CDeformableModelInstance *)pCStack_18,iVar9,&CStack_1ac);
      afStack_130[2] = CStack_1ac.x;
      afStack_130[(uint)bVar21 * -2 + 3] = *(float *)((int)&CStack_1ac + (uint)bVar21 * -8 + 4);
      afStack_130[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
           *(float *)((int)&CStack_1ac + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
      core_actor_cpp_FUN_00408b40(this_ptr);
      fVar28 = 12.0;
      fVar30 = 8.0;
      CStack_1e8.x = fStack_e0;
      *(float *)((int)&CStack_1e8 + (uint)bVar21 * -8 + 4) = afStack_10c[(uint)bVar21 * -2 + 0xc];
      *(float *)((int)&CStack_1e8 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
           afStack_10c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0xd];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fVar30,fVar28);
      fVar23 = (float10)fStack_14 * (float10)_DAT_005e3cf9;
      EVar32 = BLOOD_TYPE_RED;
      round();
      fStack_74 = (float)(int)ROUND(fVar23);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                (g_CGorePtr,&CStack_1e8,(CVector3f *)0x0,(int)fStack_74,EVar32);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-dig-?.wav @1.3");
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
                ((CDeformableModelInstance *)pCStack_18);
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                ((CDeformableModelInstance *)pCStack_18,_DAT_01cd0d98,&CStack_2d8);
      afStack_370[2] = CStack_2d8.x;
      afStack_370[(uint)bVar21 * -2 + 3] = *(float *)((int)&CStack_2d8 + (uint)bVar21 * -8 + 4);
      afStack_370[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
           *(float *)((int)&CStack_2d8 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
      core_actor_cpp_FUN_00408b40(this_ptr);
      fVar28 = 12.0;
      fVar30 = 8.0;
      CStack_314.x = fStack_374;
      *(float *)((int)&CStack_314 + (uint)bVar21 * -8 + 4) = afStack_370[(uint)bVar21 * -2];
      *(float *)((int)&CStack_314 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
           afStack_370[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fVar30,fVar28);
      fVar23 = (float10)fStack_14 * (float10)_DAT_005e3cf9;
      EVar32 = BLOOD_TYPE_RED;
      round();
      fStack_80 = (float)(int)ROUND(fVar23);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                (g_CGorePtr,&CStack_314,(CVector3f *)0x0,(int)fStack_80,EVar32);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-eat-?.wav @1.3");
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
                ((CDeformableModelInstance *)pCStack_18);
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                ((CDeformableModelInstance *)pCStack_18,_DAT_01cd0d98,&CStack_308);
      apCStack_334[2] = (CDemonActor *)CStack_308.x;
      apCStack_334[(uint)bVar21 * -2 + 3] =
           *(CDemonActor **)((int)&CStack_308 + (uint)bVar21 * -8 + 4);
      apCStack_334[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
           *(CDemonActor **)((int)&CStack_308 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
      core_actor_cpp_FUN_00408b40(this_ptr);
      fVar28 = 12.0;
      fVar30 = 8.0;
      auStack_340._8_4_ = uStack_2fc;
      apCStack_334[(uint)bVar21 * -2] = apCStack_2f8[(uint)bVar21 * -2];
      apCStack_334[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
           apCStack_2f8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fVar30,fVar28);
      fVar23 = (float10)fStack_14 * (float10)_DAT_005e3cf9;
      EVar32 = BLOOD_TYPE_RED;
      round();
      fStack_98 = (float)(int)ROUND(fVar23);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                (g_CGorePtr,(CVector3f *)(auStack_340 + 8),(CVector3f *)0x0,(int)fStack_98,EVar32);
      iVar5 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
      if (iVar5 == 0) {
        pcVar17 = "ghoul-dig-?.wav @1.3";
      }
      else {
        pcVar17 = "ghoul-eat-?.wav @1.3";
      }
      pcVar19 = acStack_3c4;
      do {
        cVar20 = *pcVar17;
        *pcVar19 = cVar20;
        if (cVar20 == '\0') break;
        cVar20 = pcVar17[1];
        pcVar17 = pcVar17 + 2;
        pcVar19[1] = cVar20;
        pcVar19 = pcVar19 + 2;
      } while (cVar20 != '\0');
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,acStack_3c4);
    }
    goto switchD_004dedc4_caseD_e;
  }
  fStack_14 = (float)core_motion_cpp_FUN_00524a40(pCStack_18);
  dStack_a0 = (double)delta_time;
  (this_ptr->base).base.walk_step_speed =
       fStack_14 * (float)_DAT_005e3ca1 * delta_time * (this_ptr->base).speed;
  core_charactr_cpp_FUN_00435320(this_ptr);
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)pCStack_18);
  fStack_34 = (float)pSVar6->state_index;
  if (fStack_34 == 2.38221e-44) {
    fVar30 = (this_ptr->base).speed;
    fVar23 = (float10)_DAT_005e3ca9;
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)_DAT_005e3cb1;
    (this_ptr->base).base.walk_step_speed = (float)((float10)dStack_a0 * fVar23 * (float10)fVar30);
  }
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    fStack_28 = -1.0;
    pCVar7 = (CGhoul *)&(this_ptr->base).base.model;
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)pCVar7);
    switch(pSVar6->state_index) {
    case 0:
      if (this_ptr->stun_timer <= 0.0) {
        pCVar11 = this_ptr->dark_waypoint;
        if (pCVar11 == (CDemonActor *)0x0) {
          iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
          if (iVar5 != 0) goto LAB_004df445;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CCharacter *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,1,1);
            iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[0]);
            if (iVar5 != 0) {
              in_stack_fffffb24 = (char *)0x4df4b3;
              iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]);
              if (iVar5 != 0) break;
            }
            in_stack_fffffb24 = (char *)this_ptr;
            uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"ghoul-alert-?.wav");
            this_ptr->sfx_handles[0] = uVar13;
          }
        }
        else {
          afStack_2b0[2] =
               (pCVar11->location).position.x - (this_ptr->base).base.base.location.position.x;
          afStack_2b0[3] =
               (pCVar11->location).position.y - (this_ptr->base).base.base.location.position.y;
          fStack_2a0 = (pCVar11->location).position.z -
                       (this_ptr->base).base.base.location.position.z;
          fStack_224 = afStack_2b0[2];
          afStack_220[(uint)bVar21 * -2] = afStack_2b0[(uint)bVar21 * -2 + 3];
          afStack_220[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
               afStack_2b0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
          fStack_20c = fStack_224;
          afStack_220[(uint)bVar21 * -2 + 6] = afStack_220[(uint)bVar21 * -2];
          afStack_220[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7] =
               afStack_220[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
          fStack_94 = fStack_204 * fStack_204 + fStack_20c * fStack_20c + fStack_208 * fStack_208;
          if (SQRT(fStack_94) < (float)_DAT_005e3cb1) {
            fVar30 = (this_ptr->base).base.hit_points + delta_time;
            this_ptr->heal_timer = this_ptr->heal_timer - delta_time;
            (this_ptr->base).base.hit_points = fVar30;
            if ((float)_DAT_005e3cf1 < fVar30) {
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
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0x11,1);
      }
      if (0.0 < this_ptr->stun_timer) {
        this_ptr->stun_timer = this_ptr->stun_timer - delta_time;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0,1);
      }
      else {
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        fStack_24 = (float)(uint)((this_ptr->base).base.model.part_data.visibility_flags
                                  [this_ptr->part_indices[1]] != 0);
        if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0)
        {
          fStack_24 = (float)((int)fStack_24 + 1);
        }
        iVar5 = (**(code **)(*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x154) + 0x10c))();
        pCVar4 = g_CGamePtr;
        if (iVar5 == 0) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          pCVar31 = (this_ptr->base).victim;
          if (pCVar31 == (CCharacter *)0x0) {
            in_stack_fffffb24 = (char *)this_ptr;
            pCVar7 = (CGhoul *)
                     core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
            if (pCVar7 == (CGhoul *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(this_ptr->base).base.model.base,0,1);
              in_stack_fffffb24 = (char *)pCVar7;
            }
          }
          else {
            fStack_254 = (pCVar31->base).location.position.x -
                         (this_ptr->base).base.base.location.position.x;
            fStack_250 = (pCVar31->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            fStack_24c = (pCVar31->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            fStack_350 = fStack_254;
            afStack_34c[(uint)bVar21 * -2] = afStack_268[(uint)bVar21 * -2 + 6];
            afStack_34c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                 afStack_268[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7];
            afStack_34c[0] = 0.0;
            if ((((this_ptr->base).base.hit_points < (float)_DAT_005e3cd9) && (0 < (int)fStack_24))
               && (this_ptr->dark_waypoint == (CDemonActor *)0x0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004de100(this_ptr,delta_time);
            }
            pCVar11 = this_ptr->dark_waypoint;
            in_stack_fffffb24 = (char *)&(this_ptr->base).base.model;
            if (pCVar11 == (CDemonActor *)0x0) {
              fVar30 = 0.17453292;
              pCVar7 = (CGhoul *)0x3f800000;
              fStack_17c = 0.0;
              fStack_174 = 0x40200000;
              fStack_178 = 0.0;
              pCVar31 = (this_ptr->base).victim;
              pCVar10 = (*((pCVar31->base).vtable._ub)->getPathMap)(&pCVar31->base);
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                                ((CCharacter *)this_ptr,
                                 &(((this_ptr->base).victim)->base).location.position,pCVar10,
                                 (CVector3f *)pCVar7,fVar30,(float)in_stack_fffffb2c);
              if (iVar5 < 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)in_stack_fffffb24,0,1);
              }
              else {
                in_stack_fffffb24 = (char *)pCVar7;
                if (((0 < iVar5) && (0 < (int)fStack_24)) &&
                   (((this_ptr->base).attack_cooldown <= 0.0 &&
                    ((pCVar31 = (this_ptr->base).victim,
                     pCVar11 = (*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31),
                     in_stack_fffffb24 = (char *)pCVar7, pCVar11 == (CDemonActor *)0x0 &&
                     (this_ptr->flinch_blend_weight <= 0.0)))))) {
                  fStack_48 = SQRT(afStack_34c[1] * afStack_34c[1] +
                                   fStack_350 * fStack_350 + afStack_34c[0] * afStack_34c[0]);
                  fStack_30 = 0.0;
                  fStack_40 = 0.0;
                  fStack_54 = 0.0;
                  if ((this_ptr->base).base.model.part_data.visibility_flags
                      [this_ptr->part_indices[3]] != 0) {
                    fStack_30 = (1.0 - ABS(fStack_48 - 0x4059999A) / 0x4059999A) *
                                (float)_DAT_005e3ce1;
                  }
                  if ((this_ptr->base).base.model.part_data.visibility_flags
                      [this_ptr->part_indices[1]] != 0) {
                    fStack_40 = (1.0 - ABS(fStack_48 - 0x40200000) / 0x40200000) *
                                (float)_DAT_005e3ce9;
                  }
                  pCVar31 = (this_ptr->base).victim;
                  in_stack_fffffb24 = (char *)0x4df874;
                  fStack_3c = fStack_48;
                  iVar5 = (*(((pCVar31->base).vtable._uc)->_uc).canBeGrabbed)
                                    (pCVar31,(CDemonActor *)this_ptr,0);
                  if (iVar5 != 0) {
                    fStack_54 = (1.0 - ABS(fStack_3c - 0x40200000) / 0x40200000) *
                                (float)_DAT_005e3ce1;
                  }
                  fStack_50 = fStack_30 + fStack_40;
                  fStack_4c = fStack_50 + fStack_54;
                  if (0.0 < fStack_4c) {
                    fStack_44 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,fStack_4c);
                    if (fStack_30 <= fStack_44) {
                      if (fStack_50 <= fStack_44) {
                        iVar5 = 0xb;
                      }
                      else {
                        iVar5 = 0xc;
                      }
                    }
                    else {
                      iVar5 = 2;
                    }
                    fStack_14 = fStack_44;
                    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                              (&(this_ptr->base).base.model.base,iVar5,1);
                    (this_ptr->base).attack_cooldown = 0.7;
                  }
                }
              }
            }
            else {
              fVar30 = 0.0;
              pCVar7 = (CGhoul *)0x40400000;
              pCVar10 = (*((pCVar11->vtable)._ub)->getPathMap)(pCVar11);
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                                ((CCharacter *)this_ptr,
                                 &(this_ptr->dark_waypoint->location).position,pCVar10,
                                 (CVector3f *)pCVar7,fVar30,(float)in_stack_fffffb2c);
              if (0 < iVar5) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)in_stack_fffffb24,0,1);
                pCVar7 = (CGhoul *)0x4df67c;
                fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,30.0);
                this_ptr->heal_timer = fStack_14;
              }
              if (iVar5 < 0) {
                this_ptr->heal_timer = 30.0;
                this_ptr->dark_waypoint = (CDemonActor *)0x0;
              }
              in_stack_fffffb24 = (char *)pCVar7;
              if (fStack_34 == 1.4013e-45) {
                in_stack_fffffb24 = (char *)&(this_ptr->base).base.model;
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)in_stack_fffffb24,0x11,1);
              }
            }
          }
        }
        else {
          if (this_ptr->pending_eat_state < 0) {
            cVar20 = (this_ptr->base).base.model.part_data.visibility_flags
                     [this_ptr->part_indices[1]] != 0;
            if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] !=
                0) {
              cVar20 = cVar20 + '\x01';
            }
            if (cVar20 != '\0') {
              if (cVar20 == '\x01') {
                this_ptr->pending_eat_state = 0xe;
                pCVar4->player_hit_flag = 1;
              }
              else {
                iVar5 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
                this_ptr->pending_eat_state = (iVar5 == 0) + 0xd;
                g_CGamePtr->player_hit_flag = 1;
              }
              goto LAB_004df92c;
            }
            this_ptr->pending_eat_state = 0;
          }
          else {
LAB_004df92c:
            if (this_ptr->pending_eat_state != 0) {
              fStack_38 = 0x40000000;
              if (this_ptr->pending_eat_state == 0xe) {
                fStack_38 = 0x40B00000;
              }
              fVar28 = 0.08726646;
              fVar30 = 0.5;
              CStack_2cc.z = fStack_38;
              pCVar26 = &CStack_2cc;
              CStack_2cc.x = 0.0;
              iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
              CStack_2cc.y = 0.0;
              pCVar10 = (CPathMap *)(**(code **)(*(int *)(iVar5 + 0x154) + 0xc4))(iVar5);
              core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                        ((CDeformableModelInstance *)
                         (*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x158),0,&CStack_1b8);
              ppCVar24 = apCStack_2f8 + 2;
              apCStack_2f8[2] = (CDemonActor *)CStack_1b8.x;
              apCStack_2f8[(uint)bVar21 * -2 + 3] =
                   *(CDemonActor **)((int)&CStack_1b8 + (uint)bVar21 * -8 + 4);
              apCStack_2f8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                   *(CDemonActor **)((int)&CStack_1b8 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
              core_actor_cpp_FUN_00408b40(*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),ppCVar24);
              pCVar25 = &CStack_29c;
              CStack_29c.x = afStack_220[2];
              *(float *)((int)&CStack_29c + (uint)bVar21 * -8 + 4) =
                   afStack_220[(uint)bVar21 * -2 + 3];
              pCVar7 = this_ptr;
              *(float *)((int)&CStack_29c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
                   afStack_220[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                                ((CCharacter *)pCVar7,pCVar25,pCVar10,pCVar26,fVar30,fVar28);
              if (((0 < iVar5) &&
                  (iVar5 = (**(code **)(*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x154) +
                                       0x10c))(), iVar5 == 2)) &&
                 (core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                            (&(this_ptr->base).base.model.base,this_ptr->pending_eat_state,1),
                 this_ptr->pending_eat_state == 0xd)) {
                pCVar3 = (this_ptr->base).base.base.vtable._ub;
                fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.5,1.2);
                (*pCVar3->playSoundWithDelay)
                          ((CDemonActor *)this_ptr,"ghoul-scream-!-?.wav",fStack_14);
              }
              break;
            }
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0,1);
        }
      }
      break;
    case 2:
      pCVar31 = (this_ptr->base).victim;
      if (pCVar31 == (CCharacter *)0x0) {
LAB_004df445:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,1,1);
      }
      else {
        pCVar11 = (*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31);
        if (pCVar11 == (CDemonActor *)0x0) {
          in_stack_fffffb24 = (char *)0x3f000000;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.2,0.5);
          iVar5 = this_ptr->part_indices[3];
          (this_ptr->base).attack_cooldown = fStack_14;
          if ((this_ptr->base).base.model.part_data.visibility_flags[iVar5] != 0) {
            fStack_5c = core_motion_cpp_FUN_00525020((CMotionController *)pCVar7);
            dStack_c0 = (double)fStack_5c;
            in_stack_fffffb24 = (char *)pCVar7;
            fStack_14 = fStack_5c;
            if ((fStack_5c <= (float)_DAT_005e3cc1) && (fStack_28 = 0x4059999A, 1.0 <= dStack_c0))
            {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_43c);
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
              SStack_43c.damage_amount = fStack_14;
              if (this_ptr->is_berserk != 0) {
                SStack_43c.damage_amount = fStack_14 * (float)_DAT_005e3cc1;
              }
              in_stack_fffffb24 = (char *)&SStack_43c;
              SStack_43c.attacker = (CDemonActor *)this_ptr;
              SStack_43c.wielder = (CDemonActor *)this_ptr;
              uVar29 = 0x3e4ccccd;
              core_xform_cpp_FUN_005b5080
                        (&DAT_01cd0d50,
                         (this_ptr->base).base.model.bone_transform.bone_model_matrices
                         [_DAT_01cd0da0].m);
              uVar27 = CONCAT44(uVar29,afStack_268 + 2);
              afStack_268[2] = fStack_188;
              afStack_268[(uint)bVar21 * -2 + 3] = afStack_19c[(uint)bVar21 * -2 + 6];
              afStack_268[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                   afStack_19c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7];
              core_actor_cpp_FUN_00408b40(this_ptr,uVar27);
              pCVar26 = &CStack_11c;
              fVar30 = (float)((ulonglong)uVar27 >> 0x20);
              CStack_11c.x = fStack_170;
              *(float *)((int)&CStack_11c + (uint)bVar21 * -8 + 4) = afStack_16c[(uint)bVar21 * -2];
              pCVar7 = this_ptr;
              *(float *)((int)&CStack_11c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
                   afStack_16c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
              iVar5 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770
                                (&pCVar7->base,pCVar26,fVar30,(SDamageInfo *)in_stack_fffffb24);
              if (iVar5 != 0) {
                in_stack_fffffb24 = "gh-hits?.wav";
                (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"gh-hits?.wav");
              }
            }
          }
        }
        else {
          in_stack_fffffb24 = (char *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)pCVar7,1,1);
        }
      }
      break;
    case 10:
      if ((((this_ptr->base).pool_me == 0) && (this_ptr->lives_left < 1)) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  ((CDeformableModelInstance *)pCVar7,0,&CStack_23c);
        fStack_1a0 = CStack_23c.x;
        afStack_19c[(uint)bVar21 * -2] = *(float *)((int)&CStack_23c + (uint)bVar21 * -8 + 4);
        afStack_19c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
             *(float *)((int)&CStack_23c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
        core_actor_cpp_FUN_00408b40(this_ptr);
        pCVar26 = &CStack_200;
        EVar32 = BLOOD_TYPE_RED;
        CStack_200.x = fStack_158;
        *(float *)((int)&CStack_200 + (uint)bVar21 * -8 + 4) = afStack_16c[(uint)bVar21 * -2 + 6];
        this_ptr_02 = g_CGorePtr;
        *(float *)((int)&CStack_200 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
             afStack_16c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7];
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_02,pCVar26,EVar32);
        (this_ptr->base).pool_me = 1;
      }
      this_ptr->is_berserk = 0;
      if (((0 < this_ptr->spasm_count) || (0 < this_ptr->lives_left)) &&
         (iVar5 = this_ptr->spasm_timer - _DAT_01c43530, this_ptr->spasm_timer = iVar5, iVar5 < 1))
      {
        if (this_ptr->lives_left < 1) {
          this_ptr->spasm_count = this_ptr->spasm_count + -1;
        }
        if ((0 < this_ptr->spasm_count) || (0 < this_ptr->lives_left)) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(1.0,12.0);
          fVar23 = (float10)fStack_14 * (float10)_DAT_005e3cb9;
          iVar9 = 1;
          iVar5 = 0xf;
          this_ptr_01 = (CMotionController *)round();
          this_ptr->spasm_timer = (int)ROUND(fVar23);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr_01,iVar5,iVar9);
        }
      }
      if (0 < this_ptr->lives_left) {
        iVar5 = this_ptr->arise_timer;
        if (iVar5 < 1) {
          iVar5 = iVar5 + _DAT_01c43530;
          fStack_58 = 0.0;
          this_ptr->arise_timer = iVar5;
          if (iVar5 < 0) {
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time);
            pCVar31 = (this_ptr->base).victim;
            if (pCVar31 != (CCharacter *)0x0) {
              pCStack_2e4 = (CMotionList *)
                            ((this_ptr->base).base.base.location.position.x -
                            (pCVar31->base).location.position.x);
              afStack_2e0[0] =
                   (this_ptr->base).base.base.location.position.y -
                   (pCVar31->base).location.position.y;
              afStack_2e0[1] =
                   (this_ptr->base).base.base.location.position.z -
                   (pCVar31->base).location.position.z;
              pCStack_110 = pCStack_2e4;
              afStack_10c[(uint)bVar21 * -2] = afStack_2e0[(uint)bVar21 * -2];
              afStack_10c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                   afStack_2e0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
              if (&pCStack_140 != &pCStack_110) {
                pCStack_140 = pCStack_110;
                fStack_13c = afStack_10c[0];
                fStack_138 = afStack_10c[1];
              }
              fStack_7c = fStack_138 * fStack_138 +
                          (float)pCStack_140 * (float)pCStack_140 + fStack_13c * fStack_13c;
              fStack_78 = (float)(((int)fStack_7c >> 1) + _DAT_01cc804c);
              if (fStack_78 < (float)_DAT_005e3ca9) goto LAB_004df0bb;
            }
            if (fStack_58 == 0.0) break;
          }
          else {
            this_ptr->arise_timer = 0;
          }
LAB_004df0bb:
          fStack_20 = (this_ptr->base).base.collision_cylinder_top;
          if (fStack_20 < (this_ptr->base).base.collision_cylinder_bottom) {
            fStack_20 = (this_ptr->base).base.model.bounding_box.max.y;
          }
          if (fStack_20 < (this_ptr->base).base.collision_cylinder_bottom) {
            fStack_20 = (this_ptr->base).base.collision_cylinder_bottom + (float)_DAT_005e3cc9;
          }
          fVar30 = 0.0;
          do {
            fStack_90 = (float)(int)fVar30 * _DAT_005e3d11 * _DAT_005e3d15;
            fStack_14 = fVar30;
            core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
            fVar23 = (float10)fcos((float10)fStack_90);
            fVar22 = (float10)fsin((float10)fStack_90);
            fStack_2c = (float)core_setcolid_cpp_FUN_00558450
                                         (g_CDemonSetPtr,
                                          (this_ptr->base).base.base.location.position.x,
                                          (this_ptr->base).base.base.location.position.z,
                                          (float)(fVar22 * (float10)_DAT_005e3d19),
                                          (float)(fVar23 * (float10)_DAT_005e3d19),
                                          (this_ptr->base).base.collision_cylinder_radius,
                                          (this_ptr->base).base.base.location.position.y +
                                          (this_ptr->base).base.collision_cylinder_bottom);
            fStack_14 = fStack_2c;
            core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
            if (fStack_2c < 1.0) break;
            fVar30 = (float)((int)fVar30 + 1);
          } while ((int)fVar30 < 4);
          if ((int)fVar30 < 4) {
            this_ptr->arise_timer = 3;
            (this_ptr->base).victim = (CCharacter *)0x0;
          }
          else {
            fStack_14 = (float)(this_ptr->lives_left + 1);
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                                  (10.0,(float)(int)fStack_14 * (float)_DAT_005e3d21);
            (this_ptr->base).base.hit_points = fStack_14;
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,0x10,1);
          }
        }
        else {
          iVar5 = iVar5 - _DAT_01c43530;
          this_ptr->arise_timer = iVar5;
          if (iVar5 < 1) {
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,30.0);
            fVar23 = -(float10)fStack_14 * (float10)_DAT_005e3cd1;
            round();
            this_ptr->arise_timer = (int)ROUND(fVar23);
          }
        }
      }
      break;
    case 0xb:
      pCVar31 = (this_ptr->base).victim;
      if (pCVar31 == (CCharacter *)0x0) {
LAB_004dfce9:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)pCVar7,1,1);
      }
      else {
        pCVar11 = (*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31);
        if (pCVar11 == (CDemonActor *)0x0) {
          fStack_28 = 0x40200000;
        }
        else {
          in_stack_fffffb24 = (char *)(this_ptr->base).victim;
          pCVar12 = (CGhoul *)
                    (*(((((CGhoul *)in_stack_fffffb24)->base).base.base.vtable._uc)->_uc).getGrabber
                    )((CCharacter *)in_stack_fffffb24);
          if (pCVar12 != this_ptr) {
            in_stack_fffffb24 = (char *)0x1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)pCVar7,1,1);
          }
        }
      }
      break;
    case 0xc:
      pCVar31 = (this_ptr->base).victim;
      if ((pCVar31 == (CCharacter *)0x0) ||
         (pCVar11 = (*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31),
         pCVar11 != (CDemonActor *)0x0)) goto LAB_004dfce9;
      in_stack_fffffb24 = (char *)0x3f000000;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.2,0.5);
      iVar5 = this_ptr->part_indices[1];
      (this_ptr->base).attack_cooldown = fStack_14;
      if ((this_ptr->base).base.model.part_data.visibility_flags[iVar5] != 0) {
        fStack_60 = core_motion_cpp_FUN_00525020((CMotionController *)pCVar7);
        dStack_a8 = (double)fStack_60;
        in_stack_fffffb24 = (char *)pCVar7;
        fStack_14 = fStack_60;
        if (fStack_60 <= (float)_DAT_005e3cc1) {
          fStack_28 = 0x40200000;
          if (1.0 <= dStack_a8) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_478);
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
            SStack_478.damage_amount = fStack_14;
            if (this_ptr->is_berserk != 0) {
              SStack_478.damage_amount = fStack_14 * (float)_DAT_005e3cc1;
            }
            in_stack_fffffb24 = (char *)&SStack_478;
            SStack_478.attacker = (CDemonActor *)this_ptr;
            SStack_478.wielder = (CDemonActor *)this_ptr;
            uVar29 = 0x3ecccccd;
            core_xform_cpp_FUN_005b5080
                      (&DAT_01cd0d44,
                       (this_ptr->base).base.model.bone_transform.bone_model_matrices[_DAT_01cd0d9c]
                       .m);
            uVar27 = CONCAT44(uVar29,&fStack_290);
            fStack_290 = fStack_248;
            afStack_28c[(uint)bVar21 * -2] = afStack_268[(uint)bVar21 * -2 + 9];
            afStack_28c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                 afStack_268[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 10];
            core_actor_cpp_FUN_00408b40(this_ptr,uVar27);
            pCVar26 = &CStack_284;
            fVar30 = (float)((ulonglong)uVar27 >> 0x20);
            CStack_284.x = fStack_f8;
            *(float *)((int)&CStack_284 + (uint)bVar21 * -8 + 4) =
                 afStack_10c[(uint)bVar21 * -2 + 6];
            pCVar7 = this_ptr;
            *(float *)((int)&CStack_284 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
                 afStack_10c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7];
            iVar5 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770
                              (&pCVar7->base,pCVar26,fVar30,(SDamageInfo *)in_stack_fffffb24);
            if (iVar5 != 0) {
              in_stack_fffffb24 = "gh-hits?.wav";
              (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"gh-hits?.wav");
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar5 = this_ptr->burp_timer - _DAT_01c43530;
      this_ptr->burp_timer = iVar5;
      if (iVar5 < 1) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"burp[1,2].wav");
        in_stack_fffffb24 = (char *)0x41700000;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(15.0,30.0);
        fVar23 = (float10)fStack_14 * (float10)_DAT_005e3cb9;
        round();
        this_ptr->burp_timer = (int)ROUND(fVar23);
      }
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        in_stack_fffffb24 = (char *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0,1);
      }
    }
    if (((0.0 <= fStack_28) && (this_ptr->flinch_blend_weight <= 0.0)) &&
       ((this_ptr->base).victim != (CCharacter *)0x0)) {
      fVar30 = 0.5235988;
      pCVar25 = (CVector3f *)0x40400000;
      fStack_35c = 0.0;
      fStack_354 = fStack_28;
      acStack_358[0] = '\0';
      acStack_358[1] = '\0';
      acStack_358[2] = '\0';
      acStack_358[3] = '\0';
      pCVar31 = (this_ptr->base).victim;
      pCVar10 = (*((pCVar31->base).vtable._ub)->getPathMap)(&pCVar31->base);
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                (&((this_ptr->base).victim)->model,0,&CStack_320);
      pCStack_26c = (CMotionList *)CStack_320.x;
      afStack_268[(uint)bVar21 * -2] = *(float *)((int)&CStack_320 + (uint)bVar21 * -8 + 4);
      afStack_268[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
           *(float *)((int)&CStack_320 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
      core_actor_cpp_FUN_00408b40((this_ptr->base).victim,&pCStack_26c);
      pCVar26 = &CStack_2c0;
      CStack_2c0.x = afStack_19c[2];
      *(float *)((int)&CStack_2c0 + (uint)bVar21 * -8 + 4) = afStack_19c[(uint)bVar21 * -2 + 3];
      pCVar7 = this_ptr;
      *(float *)((int)&CStack_2c0 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
           afStack_19c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
      iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        ((CCharacter *)pCVar7,pCVar26,pCVar10,pCVar25,fVar30,
                         (float)in_stack_fffffb24);
      if (iVar5 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,1,1);
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
      }
    }
    goto LAB_004de489;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
      iVar5 = 1;
    }
    else {
LAB_004dee06:
      iVar5 = 0;
    }
LAB_004de462:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) {
      iVar5 = 0x11;
      goto LAB_004de462;
    }
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_004dee06;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_004de489:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    pCVar31 = (this_ptr->base).victim;
    if ((pCVar31 != (CCharacter *)0x0) &&
       (pCVar7 = (CGhoul *)(*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042d700(this_ptr);
    fStack_134 = (this_ptr->base).base.velocity.x * delta_time;
    afStack_130[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_130[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_1dc = fStack_134;
    afStack_1d8[(uint)bVar21 * -2] = afStack_130[(uint)bVar21 * -2];
    afStack_1d8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
         afStack_130[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
    pCVar26 = &(this_ptr->base).base.position_delta;
    afStack_1d8[2] = fStack_1dc + pCVar26->x;
    afStack_1d8[3] = afStack_1d8[0] + (this_ptr->base).base.position_delta.y;
    fStack_1c8 = afStack_1d8[1] + (this_ptr->base).base.position_delta.z;
    fStack_ec = afStack_1d8[2];
    afStack_10c[(uint)bVar21 * -2 + 9] = afStack_1d8[(uint)bVar21 * -2 + 3];
    afStack_10c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 10] =
         afStack_1d8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
    pCVar25 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_1c4 = fStack_ec + pCVar25->x;
    fStack_1c0 = fStack_e8 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_1bc = fStack_e4 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_230.x = fStack_1c4;
    *(float *)((int)&CStack_230 + (uint)bVar21 * -8 + 4) = afStack_1d8[(uint)bVar21 * -2 + 6];
    *(float *)((int)&CStack_230 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
         afStack_1d8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar26->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar30 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar30;
    pCVar25->x = fVar30;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_230);
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(this_ptr_00);
  dStack_b8 = (double)this_ptr->flinch_blend_weight;
  if (0.0 < dStack_b8) {
    fStack_6c = (float)core_motion_cpp_FUN_00525110(this_ptr_00,this_ptr->flinch_motion_index);
    fVar30 = 1.0 - this_ptr->flinch_blend_weight;
    fStack_68 = 1.0 - fVar30 * fVar30 * fVar30;
    fStack_14 = fStack_6c;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
              (this_ptr_00,this_ptr->flinch_motion_index,fStack_6c,fStack_68,_DAT_01cd0dbc,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    fVar30 = this_ptr->flinch_blend_weight - delta_time / _DAT_006012cc;
    this_ptr->flinch_blend_weight = fVar30;
    if (fVar30 < 0.0) {
      this_ptr->flinch_blend_weight = 0.0;
    }
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  if (((float)_DAT_005e3d29 < ABS((this_ptr->base).base.turn_angle_accumulator)) ||
     (fVar30 = (this_ptr->base).base.position_delta.y,
     fVar28 = (this_ptr->base).base.position_delta.x, fVar1 = (this_ptr->base).base.position_delta.z
     , (float)_DAT_005e3d29 < SQRT(fVar1 * fVar1 + fVar28 * fVar28 + fVar30 * fVar30))) {
    iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0(0x02C82A60,this_ptr->sfx_handle);
    if (iVar5 == 0) {
      _sprintf(&stack0xfffffb24,"ghoul-walk-?.wav *%f");
      uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,&stack0xfffffb24);
      this_ptr->sfx_handle = uVar13;
    }
  }
  else {
    core_sound_cpp_CSound_killSound_FUN_0057d9d0(0x02C82A60,this_ptr->sfx_handle);
  }
  if ((this_ptr->base).pool_me == 0) {
    iVar5 = this_ptr->part_indices[9];
    if ((this_ptr->base).base.model.part_data.visibility_flags[iVar5] == 0) {
      fVar30 = 0.5;
      iVar9 = _DAT_01cd0dc0;
    }
    else {
      core_charactr_cpp_FUN_00430a90(this_ptr,this_ptr->part_indices[0],_DAT_01cd0dac);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_charactr_cpp_FUN_00430a90(this_ptr,this_ptr->part_indices[1],_DAT_01cd0da4);
      }
      core_charactr_cpp_FUN_00430a90(this_ptr,this_ptr->part_indices[2],_DAT_01cd0db0);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_charactr_cpp_FUN_00430a90(this_ptr,this_ptr->part_indices[3],_DAT_01cd0da8);
      }
      fVar30 = 0.7;
      iVar5 = this_ptr->part_indices[10];
      iVar9 = _DAT_01cd0d98;
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00430b60
              ((CCharacter *)this_ptr,iVar5,iVar9,fVar30);
    core_charactr_cpp_FUN_00430960();
  }
  if ((this_ptr->dark_waypoint != (CDemonActor *)0x0) && (fStack_34 == 2.38221e-44)) {
    fStack_278 = (this_ptr->base).base.base.location.position.x - (this_ptr->prev_position).x;
    afStack_274[0] = (this_ptr->base).base.base.location.position.y - (this_ptr->prev_position).y;
    afStack_274[1] = (this_ptr->base).base.base.location.position.z - (this_ptr->prev_position).z;
    afStack_16c[2] = fStack_278;
    afStack_16c[(uint)bVar21 * -2 + 3] = afStack_274[(uint)bVar21 * -2];
    afStack_16c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
         afStack_274[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
    if (delta_time * (float)_DAT_005e3cc9 <=
        SQRT(fStack_15c * fStack_15c + afStack_16c[2] * afStack_16c[2])) {
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
  pCVar14 = &(this_ptr->base).base.base.location;
  if ((CLocation *)&this_ptr->prev_position == pCVar14) {
    return;
  }
  (this_ptr->prev_position).x = (pCVar14->position).x;
  (this_ptr->prev_position).y = (this_ptr->base).base.base.location.position.y;
  (this_ptr->prev_position).z = (this_ptr->base).base.base.location.position.z;
  return;
}
