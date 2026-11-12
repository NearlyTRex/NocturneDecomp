// Name: core_ghoul.cpp_CGhoul_process_FUN_004c1bb0
// Address: 004c1bb0
// Address Range: [[004c1bb0, 004c397a]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004c1bb0(CGhoul *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004c1bb0(CGhoul *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  EWalkState EVar2;
  CDemonActor_vtable *pCVar3;
  CGame *pCVar4;
  int iVar5;
  CGhoul *pCVar6;
  EDeathState EVar7;
  CPathMap *pCVar8;
  CMotionController *this_ptr_01;
  CDemonActor *pCVar9;
  CGhoul *pCVar10;
  uint uVar11;
  CLocation *pCVar12;
  uint *puVar13;
  float *pfVar14;
  char *pcVar15;
  uint *puVar16;
  char *pcVar17;
  char cVar18;
  byte bVar19;
  float10 fVar20;
  float10 fVar21;
  float afStackY_135c [15];
  CDemonActor *apCStackY_1320 [6];
  float afStackY_1308 [27];
  void *apvStackY_129c [6];
  float afStackY_1284 [6];
  UActorVTable aUStackY_126c [3];
  float afStackY_1260 [9];
  CDemonActor *apCStackY_123c [6];
  CMotionList *apCStackY_1224 [3];
  float afStackY_1218 [18];
  UActorVTable aUStackY_11d0 [3];
  void *apvStackY_11c4 [3];
  UActorVTable aUStackY_11b8 [3];
  float afStackY_11ac [24];
  SMotionTransition *apSStackY_114c [3];
  float afStackY_1140 [18];
  CMotionController_vtable *apCStackY_10f8 [3];
  UActorVTable aUStackY_10ec [764];
  CVector3f *pCVar22;
  CVector3f *pCVar23;
  CGore *this_ptr_02;
  float fVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar24;
  char *in_stack_fffffb24;
  float fVar28;
  CCharacter *in_stack_fffffb2c;
  CCharacter *pCVar29;
  EBloodType EVar30;
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
  float fStack_320;
  float afStack_31c [2];
  CVector3f CStack_314;
  CDemonActor *pCStack_308;
  float afStack_304 [5];
  CDemonActor *apCStack_2f0 [3];
  void *pvStack_2e4;
  float afStack_2e0 [5];
  CVector3f CStack_2cc;
  CVector3f CStack_2c0;
  float fStack_2b4;
  float fStack_2b0;
  void *apvStack_2ac [4];
  CVector3f CStack_29c;
  CDemonActor *pCStack_290;
  float afStack_28c [2];
  CVector3f CStack_284;
  float fStack_278;
  float afStack_274 [5];
  CMotionList *pCStack_260;
  float afStack_25c [4];
  CDemonActor *apCStack_24c [4];
  float fStack_23c;
  CMotionList *apCStack_238 [2];
  CVector3f CStack_230;
  void *pvStack_224;
  float afStack_220 [2];
  void *pvStack_218;
  void *pvStack_20c;
  CDemonActor *pCStack_208;
  float fStack_204;
  CVector3f CStack_200;
  float fStack_1f4;
  float afStack_1f0 [2];
  CVector3f CStack_1e8;
  void *pvStack_1dc;
  void *apvStack_1d8 [2];
  float fStack_1d0;
  UActorVTable aUStack_1cc [2];
  CMotionList *pCStack_1c4;
  float afStack_1c0 [2];
  CDemonActor *pCStack_1b8;
  float afStack_1b4 [5];
  float fStack_1a0;
  float fStack_194;
  CMotionList *pCStack_188;
  float afStack_184 [4];
  CMotionController_vtable *pCStack_174;
  float fStack_170;
  float afStack_16c [4];
  SMotionTransition *pSStack_15c;
  CDemonActor *pCStack_158;
  float afStack_154 [5];
  void *pvStack_140;
  float fStack_13c;
  CMotionController_vtable *pCStack_138;
  void *pvStack_134;
  float afStack_130 [5];
  CVector3f CStack_11c;
  void *pvStack_110;
  float fStack_10c;
  CMotionController_vtable *pCStack_108;
  float fStack_104;
  UActorVTable aUStack_100 [2];
  float fStack_f8;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  UActorVTable UStack_d4;
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
  
  bVar19 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
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
switchD_004c2644_caseD_e:
  if (0.0 < (float)pCStack_70) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)pCStack_18,(float *)&pCStack_70);
    switch(iVar5) {
    case 5:
      pCVar29 = (this_ptr->base).victim;
      fStack_1c = 1.4013e-45;
      if ((pCVar29 != (CCharacter *)0x0) &&
         (EVar7 = (*(((pCVar29->base).vtable._uc)->_uc).getDeathState)(pCVar29),
         EVar7 == DEATH_STATE_ALIVE)) {
        in_stack_fffffb24 = (char *)(this_ptr->base).victim;
        pCVar9 = (*(((((CGhoul *)in_stack_fffffb24)->base).base.base.vtable._uc)->_uc).getGrabber)
                           ((CCharacter *)in_stack_fffffb24);
        if ((pCVar9 == (CDemonActor *)0x0) &&
           (pCVar29 = (this_ptr->base).victim, in_stack_fffffb24 = (char *)this_ptr,
           iVar5 = (*(((pCVar29->base).vtable._uc)->_uc).canBeGrabbed)
                             (pCVar29,(CDemonActor *)this_ptr,0), iVar5 != 0)) {
          fStack_64 = 0x40200000;
          afStack_34c[2] = 0.0;
          auStack_340._0_4_ = 0.0;
          auStack_340._4_4_ = 0x40200000;
          in_stack_fffffb2c = (CCharacter *)0x4c210b;
          core_actor_cpp_FUN_00408d70();
          fStack_2b4 = fStack_1f4;
          (&fStack_2b0)[(uint)bVar19 * -2] = afStack_1f0[(uint)bVar19 * -2];
          apvStack_2ac[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
               (void *)afStack_1f0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
          pCVar29 = (this_ptr->base).victim;
          fVar28 = fStack_2b4 - (pCVar29->base).location.position.x;
          fVar25 = (float)apvStack_2ac[0] - (pCVar29->base).location.position.z;
          if (1.0 < SQRT(fVar25 * fVar25 + fVar28 * fVar28)) {
            fStack_1c = 0.0;
          }
          pCVar29 = (this_ptr->base).victim;
          if ((ABS(fStack_2b0 - (pCVar29->base).location.position.y) <= (float)_DAT_005d90f7) &&
             (((fStack_1c == 0.0 ||
               (iVar5 = (*(((pCVar29->base).vtable._uc)->_uc).getGrabbed)
                                  (pCVar29,(CDemonActor *)this_ptr,0), in_stack_fffffb2c = pCVar29,
               iVar5 != 0)) && (fStack_1c != 0.0)))) break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)pCStack_18,1,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar5);
      break;
    case 10:
      pCVar29 = (this_ptr->base).victim;
      if (pCVar29 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCStack_18,1,1);
      }
      else {
        pCVar6 = (CGhoul *)(*(((pCVar29->base).vtable._uc)->_uc).getGrabber)(pCVar29);
        if (pCVar6 == this_ptr) {
          pCVar29 = (this_ptr->base).victim;
          EVar7 = (*(((pCVar29->base).vtable._uc)->_uc).getDeathState)(pCVar29);
          if (EVar7 == DEATH_STATE_ALIVE) {
            pCVar29 = (this_ptr->base).victim;
            in_stack_fffffb24 = (char *)0x4c2212;
            (*((pCVar29->base).vtable._ub)->getBoundingBox)
                      (&pCVar29->base,(CBoundingBox3D *)in_stack_fffffb2c);
            puVar13 = auStack_3a4;
            puVar16 = &uStack_38c;
            for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar16 = *puVar13;
              puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
              puVar16 = puVar16 + (uint)bVar19 * -2 + 1;
            }
            fVar28 = fStack_37c - fStack_388;
            pCVar29 = (this_ptr->base).victim;
            pfVar14 = (float *)((int)pCVar29 + (uint)bVar19 * -8 + 0x24);
            afStack_154[2] = (pCVar29->base).location.position.x;
            afStack_154[(uint)bVar19 * -2 + 3] = *pfVar14;
            afStack_154[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] = pfVar14[(uint)bVar19 * -2 + 1];
            afStack_154[3] = fVar28 * (float)_DAT_005d9147 + afStack_154[3];
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_400);
            SStack_400.damage_amount =
                 core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(15.0,25.0);
            fStack_14 = SStack_400.damage_amount;
            core_actor_cpp_FUN_00408de0();
            UStack_d4 = (UActorVTable)fStack_104;
            aUStack_100[(uint)bVar19 * -2 + 0xc] = aUStack_100[(uint)bVar19 * -2];
            aUStack_100[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0xd] =
                 aUStack_100[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
            if ((UActorVTable *)&SStack_400.impact_direction != aUStack_100 + 0xb) {
              SStack_400.impact_direction.x = (float)UStack_d4;
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
              fVar21 = (float10)SStack_400.damage_amount * (float10)_DAT_005d914f *
                       (float10)_DAT_005d913f;
              EVar30 = BLOOD_TYPE_RED;
              round();
              fStack_8c = (float)(int)ROUND(fVar21);
              in_stack_fffffb2c = (CCharacter *)(afStack_154 + 2);
              in_stack_fffffb24 = (char *)0x4c2345;
              core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                        (g_CGorePtr,(CVector3f *)in_stack_fffffb2c,(CVector3f *)0x0,(int)fStack_8c,
                         EVar30);
            }
            pCVar29 = (this_ptr->base).victim;
            if (pCVar29->hit_points <= 0.0) {
              (*(((pCVar29->base).vtable._uc)->_uc).releaseFromGrab)(pCVar29);
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)pCStack_18,1,1);
            }
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
          }
          else {
            pCVar29 = (this_ptr->base).victim;
            (*(((pCVar29->base).vtable._uc)->_uc).releaseFromGrab)(pCVar29);
            in_stack_fffffb2c = (CCharacter *)0x1;
            in_stack_fffffb24 = (char *)pCStack_18;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)pCStack_18,1,1);
          }
        }
        else {
          in_stack_fffffb24 = (char *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCStack_18,1,1);
        }
      }
      break;
    case 0xb:
    case 0xc:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
                ((CDeformableModelInstance *)pCStack_18);
      core_skeleton_cpp_FUN_005469a0(pCStack_18);
      afStack_130[2] = afStack_1b4[2];
      afStack_130[(uint)bVar19 * -2 + 3] = afStack_1b4[(uint)bVar19 * -2 + 3];
      afStack_130[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
           afStack_1b4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
      core_actor_cpp_FUN_00408d70(this_ptr);
      fVar25 = 12.0;
      fVar28 = 8.0;
      CStack_1e8.x = fStack_e0;
      *(UActorVTable *)((int)&CStack_1e8 + (uint)bVar19 * -8 + 4) =
           aUStack_100[(uint)bVar19 * -2 + 9];
      *(UActorVTable *)((int)&CStack_1e8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           aUStack_100[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 10];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar28,fVar25);
      fVar21 = (float10)fStack_14 * (float10)_DAT_005d913f;
      EVar30 = BLOOD_TYPE_RED;
      round();
      fStack_74 = (float)(int)ROUND(fVar21);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (g_CGorePtr,&CStack_1e8,(CVector3f *)0x0,(int)fStack_74,EVar30);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-dig-?.wav @1.3");
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
                ((CDeformableModelInstance *)pCStack_18);
      core_skeleton_cpp_FUN_005469a0(pCStack_18);
      afStack_370[2] = afStack_2e0[2];
      afStack_370[(uint)bVar19 * -2 + 3] = afStack_2e0[(uint)bVar19 * -2 + 3];
      afStack_370[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
           afStack_2e0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
      core_actor_cpp_FUN_00408d70(this_ptr);
      fVar25 = 12.0;
      fVar28 = 8.0;
      CStack_314.x = fStack_374;
      *(float *)((int)&CStack_314 + (uint)bVar19 * -8 + 4) = afStack_370[(uint)bVar19 * -2];
      *(float *)((int)&CStack_314 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           afStack_370[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar28,fVar25);
      fVar21 = (float10)fStack_14 * (float10)_DAT_005d913f;
      EVar30 = BLOOD_TYPE_RED;
      round();
      fStack_80 = (float)(int)ROUND(fVar21);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (g_CGorePtr,&CStack_314,(CVector3f *)0x0,(int)fStack_80,EVar30);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-eat-?.wav @1.3");
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
                ((CDeformableModelInstance *)pCStack_18);
      core_skeleton_cpp_FUN_005469a0(pCStack_18);
      apCStack_334[2] = pCStack_308;
      apCStack_334[(uint)bVar19 * -2 + 3] = (CDemonActor *)afStack_304[(uint)bVar19 * -2];
      apCStack_334[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
           (CDemonActor *)afStack_304[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
      core_actor_cpp_FUN_00408d70(this_ptr);
      fVar25 = 12.0;
      fVar28 = 8.0;
      auStack_340._8_4_ = afStack_304[2];
      apCStack_334[(uint)bVar19 * -2] = (CDemonActor *)afStack_304[(uint)bVar19 * -2 + 3];
      apCStack_334[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
           (CDemonActor *)afStack_304[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar28,fVar25);
      fVar21 = (float10)fStack_14 * (float10)_DAT_005d913f;
      EVar30 = BLOOD_TYPE_RED;
      round();
      fStack_98 = (float)(int)ROUND(fVar21);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (g_CGorePtr,(CVector3f *)(auStack_340 + 8),(CVector3f *)0x0,(int)fStack_98,EVar30);
      iVar5 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
      if (iVar5 == 0) {
        pcVar15 = "ghoul-dig-?.wav @1.3";
      }
      else {
        pcVar15 = "ghoul-eat-?.wav @1.3";
      }
      pcVar17 = acStack_3c4;
      do {
        cVar18 = *pcVar15;
        *pcVar17 = cVar18;
        if (cVar18 == '\0') break;
        cVar18 = pcVar15[1];
        pcVar15 = pcVar15 + 2;
        pcVar17[1] = cVar18;
        pcVar17 = pcVar17 + 2;
      } while (cVar18 != '\0');
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,acStack_3c4);
    }
    goto switchD_004c2644_caseD_e;
  }
  fStack_14 = (float)core_motion_cpp_FUN_005038a0(pCStack_18);
  dStack_a0 = (double)delta_time;
  (this_ptr->base).base.walk_step_speed =
       fStack_14 * (float)_DAT_005d90e7 * delta_time * (this_ptr->base).speed;
  core_charactr_cpp_FUN_0042b2a0(this_ptr);
  iVar5 = core_motion_cpp_FUN_005035c0();
  fStack_34 = *(float *)(iVar5 + 0x24);
  if (fStack_34 == 2.38221e-44) {
    fVar28 = (this_ptr->base).speed;
    fVar21 = (float10)_DAT_005d90ef;
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)_DAT_005d90f7;
    (this_ptr->base).base.walk_step_speed = (float)((float10)dStack_a0 * fVar21 * (float10)fVar28);
  }
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    fStack_28 = -1.0;
    pCVar6 = (CGhoul *)&(this_ptr->base).base.model;
    iVar5 = core_motion_cpp_FUN_005035c0();
    switch(*(uint *)(iVar5 + 0x24)) {
    case 0:
      if (this_ptr->stun_timer <= 0.0) {
        pCVar9 = this_ptr->dark_waypoint;
        if (pCVar9 == (CDemonActor *)0x0) {
          iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
          if (iVar5 != 0) goto LAB_004c2cc5;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CCharacter *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,1,1);
            iVar5 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]);
            if (iVar5 != 0) {
              in_stack_fffffb24 = (char *)0x4c2d33;
              iVar5 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
              if (iVar5 != 0) break;
            }
            in_stack_fffffb24 = (char *)this_ptr;
            uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"ghoul-alert-?.wav");
            this_ptr->sfx_handles[0] = uVar11;
          }
        }
        else {
          apvStack_2ac[1] =
               (void *)((pCVar9->location).position.x -
                       (this_ptr->base).base.base.location.position.x);
          apvStack_2ac[2] =
               (void *)((pCVar9->location).position.y -
                       (this_ptr->base).base.base.location.position.y);
          apvStack_2ac[3] =
               (void *)((pCVar9->location).position.z -
                       (this_ptr->base).base.base.location.position.z);
          pvStack_224 = apvStack_2ac[1];
          afStack_220[(uint)bVar19 * -2] = (float)apvStack_2ac[(uint)bVar19 * -2 + 2];
          afStack_220[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
               (float)apvStack_2ac[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 3];
          pvStack_20c = pvStack_224;
          (&pCStack_208)[(uint)bVar19 * -2] = (CDemonActor *)afStack_220[(uint)bVar19 * -2];
          (&fStack_204)[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
               afStack_220[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
          fStack_94 = fStack_204 * fStack_204 +
                      (float)pvStack_20c * (float)pvStack_20c +
                      (float)pCStack_208 * (float)pCStack_208;
          if (SQRT(fStack_94) < (float)_DAT_005d90f7) {
            fVar28 = (this_ptr->base).base.hit_points + delta_time;
            this_ptr->heal_timer = this_ptr->heal_timer - delta_time;
            (this_ptr->base).base.hit_points = fVar28;
            if ((float)_DAT_005d9137 < fVar28) {
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
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,0x11,1);
      }
      if (0.0 < this_ptr->stun_timer) {
        this_ptr->stun_timer = this_ptr->stun_timer - delta_time;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
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
        iVar5 = (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) + 0x114))();
        pCVar4 = g_CGamePtr;
        if (iVar5 == 0) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          pCVar29 = (this_ptr->base).victim;
          if (pCVar29 == (CCharacter *)0x0) {
            in_stack_fffffb24 = (char *)this_ptr;
            pCVar6 = (CGhoul *)
                     core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
            if (pCVar6 == (CGhoul *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (&(this_ptr->base).base.model.base,0,1);
              in_stack_fffffb24 = (char *)pCVar6;
            }
          }
          else {
            afStack_25c[2] =
                 (pCVar29->base).location.position.x -
                 (this_ptr->base).base.base.location.position.x;
            afStack_25c[3] =
                 (pCVar29->base).location.position.y -
                 (this_ptr->base).base.base.location.position.y;
            apCStack_24c[0] =
                 (CDemonActor *)
                 ((pCVar29->base).location.position.z -
                 (this_ptr->base).base.base.location.position.z);
            fStack_350 = afStack_25c[2];
            afStack_34c[(uint)bVar19 * -2] = afStack_25c[(uint)bVar19 * -2 + 3];
            afStack_34c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                 (float)apCStack_24c[(uint)bVar19 * -2 + (uint)bVar19 * -2];
            afStack_34c[0] = 0.0;
            if ((((this_ptr->base).base.hit_points < (float)_DAT_005d911f) && (0 < (int)fStack_24))
               && (this_ptr->dark_waypoint == (CDemonActor *)0x0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004c1980(this_ptr,delta_time);
            }
            pCVar9 = this_ptr->dark_waypoint;
            in_stack_fffffb24 = (char *)&(this_ptr->base).base.model;
            if (pCVar9 == (CDemonActor *)0x0) {
              fVar28 = 0.17453292;
              pCVar6 = (CGhoul *)0x3f800000;
              afStack_184[2] = 0.0;
              pCStack_174 = (CMotionController_vtable *)0x40200000;
              afStack_184[3] = 0.0;
              pCVar29 = (this_ptr->base).victim;
              pCVar8 = (*((pCVar29->base).vtable._ub)->getPathMap)(&pCVar29->base);
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                                ((CCharacter *)this_ptr,
                                 &(((this_ptr->base).victim)->base).location.position,pCVar8,
                                 (CVector3f *)pCVar6,fVar28,(float)in_stack_fffffb2c);
              if (iVar5 < 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)in_stack_fffffb24,0,1);
              }
              else {
                in_stack_fffffb24 = (char *)pCVar6;
                if (((0 < iVar5) && (0 < (int)fStack_24)) &&
                   (((this_ptr->base).attack_cooldown <= 0.0 &&
                    ((pCVar29 = (this_ptr->base).victim,
                     pCVar9 = (*(((pCVar29->base).vtable._uc)->_uc).getGrabber)(pCVar29),
                     in_stack_fffffb24 = (char *)pCVar6, pCVar9 == (CDemonActor *)0x0 &&
                     (this_ptr->flinch_blend_weight <= 0.0)))))) {
                  fStack_48 = SQRT(afStack_34c[1] * afStack_34c[1] +
                                   fStack_350 * fStack_350 + afStack_34c[0] * afStack_34c[0]);
                  fStack_30 = 0.0;
                  fStack_40 = 0.0;
                  fStack_54 = 0.0;
                  if ((this_ptr->base).base.model.part_data.visibility_flags
                      [this_ptr->part_indices[3]] != 0) {
                    fStack_30 = (1.0 - ABS(fStack_48 - 0x4059999A) / 0x4059999A) *
                                (float)_DAT_005d9127;
                  }
                  if ((this_ptr->base).base.model.part_data.visibility_flags
                      [this_ptr->part_indices[1]] != 0) {
                    fStack_40 = (1.0 - ABS(fStack_48 - 0x40200000) / 0x40200000) *
                                (float)_DAT_005d912f;
                  }
                  pCVar29 = (this_ptr->base).victim;
                  in_stack_fffffb24 = (char *)0x4c30f4;
                  fStack_3c = fStack_48;
                  iVar5 = (*(((pCVar29->base).vtable._uc)->_uc).canBeGrabbed)
                                    (pCVar29,(CDemonActor *)this_ptr,0);
                  if (iVar5 != 0) {
                    fStack_54 = (1.0 - ABS(fStack_3c - 0x40200000) / 0x40200000) *
                                (float)_DAT_005d9127;
                  }
                  fStack_50 = fStack_30 + fStack_40;
                  fStack_4c = fStack_50 + fStack_54;
                  if (0.0 < fStack_4c) {
                    fStack_44 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,fStack_4c);
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
                    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                              (&(this_ptr->base).base.model.base,iVar5,1);
                    (this_ptr->base).attack_cooldown = 0.7;
                  }
                }
              }
            }
            else {
              fVar28 = 0.0;
              pCVar6 = (CGhoul *)0x40400000;
              pCVar8 = (*((pCVar9->vtable)._ub)->getPathMap)(pCVar9);
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                                ((CCharacter *)this_ptr,
                                 &(this_ptr->dark_waypoint->location).position,pCVar8,
                                 (CVector3f *)pCVar6,fVar28,(float)in_stack_fffffb2c);
              if (0 < iVar5) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)in_stack_fffffb24,0,1);
                pCVar6 = (CGhoul *)0x4c2efc;
                fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,30.0);
                this_ptr->heal_timer = fStack_14;
              }
              if (iVar5 < 0) {
                this_ptr->heal_timer = 30.0;
                this_ptr->dark_waypoint = (CDemonActor *)0x0;
              }
              in_stack_fffffb24 = (char *)pCVar6;
              if (fStack_34 == 1.4013e-45) {
                in_stack_fffffb24 = (char *)&(this_ptr->base).base.model;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)in_stack_fffffb24,0x11,1);
              }
            }
          }
        }
        else {
          if (this_ptr->pending_eat_state < 0) {
            cVar18 = (this_ptr->base).base.model.part_data.visibility_flags
                     [this_ptr->part_indices[1]] != 0;
            if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] !=
                0) {
              cVar18 = cVar18 + '\x01';
            }
            if (cVar18 != '\0') {
              if (cVar18 == '\x01') {
                this_ptr->pending_eat_state = 0xe;
                pCVar4->player_hit_flag = 1;
              }
              else {
                iVar5 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
                this_ptr->pending_eat_state = (iVar5 == 0) + 0xd;
                g_CGamePtr->player_hit_flag = 1;
              }
              goto LAB_004c31ac;
            }
            this_ptr->pending_eat_state = 0;
          }
          else {
LAB_004c31ac:
            if (this_ptr->pending_eat_state != 0) {
              fStack_38 = 0x40000000;
              if (this_ptr->pending_eat_state == 0xe) {
                fStack_38 = 0x40B00000;
              }
              fVar25 = 0.08726646;
              fVar28 = 0.5;
              CStack_2cc.z = fStack_38;
              pCVar23 = &CStack_2cc;
              CStack_2cc.x = 0.0;
              iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
              CStack_2cc.y = 0.0;
              pCVar8 = (CPathMap *)(**(code **)(*(int *)(iVar5 + 0x2b0) + 0xcc))(iVar5);
              core_skeleton_cpp_FUN_005469a0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b4,0);
              pfVar14 = afStack_304 + 5;
              apCStack_2f0[0] = pCStack_1b8;
              afStack_304[(uint)bVar19 * -2 + 6] = afStack_1b4[(uint)bVar19 * -2];
              afStack_304[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7] =
                   afStack_1b4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
              core_actor_cpp_FUN_00408d70(*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),pfVar14);
              pCVar22 = &CStack_29c;
              CStack_29c.x = (float)pvStack_218;
              *(float *)((int)&CStack_29c + (uint)bVar19 * -8 + 4) =
                   afStack_220[(uint)bVar19 * -2 + 3];
              pCVar6 = this_ptr;
              *(float *)((int)&CStack_29c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
                   afStack_220[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                                ((CCharacter *)pCVar6,pCVar22,pCVar8,pCVar23,fVar28,fVar25);
              if (((0 < iVar5) &&
                  (iVar5 = (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) +
                                       0x114))(), iVar5 == 2)) &&
                 (core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                            (&(this_ptr->base).base.model.base,this_ptr->pending_eat_state,1),
                 this_ptr->pending_eat_state == 0xd)) {
                pCVar3 = (this_ptr->base).base.base.vtable._ub;
                fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.2);
                (*pCVar3->playSoundWithDelay)
                          ((CDemonActor *)this_ptr,"ghoul-scream-!-?.wav",fStack_14);
              }
              break;
            }
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0,1);
        }
      }
      break;
    case 2:
      pCVar29 = (this_ptr->base).victim;
      if (pCVar29 == (CCharacter *)0x0) {
LAB_004c2cc5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,1,1);
      }
      else {
        pCVar9 = (*(((pCVar29->base).vtable._uc)->_uc).getGrabber)(pCVar29);
        if (pCVar9 == (CDemonActor *)0x0) {
          in_stack_fffffb24 = (char *)0x3f000000;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.5);
          iVar5 = this_ptr->part_indices[3];
          (this_ptr->base).attack_cooldown = fStack_14;
          if ((this_ptr->base).base.model.part_data.visibility_flags[iVar5] != 0) {
            fStack_5c = core_motion_cpp_FUN_00503e60((CMotionController *)pCVar6);
            dStack_c0 = (double)fStack_5c;
            in_stack_fffffb24 = (char *)pCVar6;
            fStack_14 = fStack_5c;
            if ((fStack_5c <= (float)_DAT_005d9107) && (fStack_28 = 0x4059999A, 1.0 <= dStack_c0))
            {
              core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_43c);
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
              SStack_43c.damage_amount = fStack_14;
              if (this_ptr->is_berserk != 0) {
                SStack_43c.damage_amount = fStack_14 * (float)_DAT_005d9107;
              }
              in_stack_fffffb24 = (char *)&SStack_43c;
              SStack_43c.attacker = (CDemonActor *)this_ptr;
              SStack_43c.wielder = (CDemonActor *)this_ptr;
              uVar27 = 0x3e4ccccd;
              core_xform_cpp_FUN_00591530
                        (&DAT_01cb81d4,
                         (this_ptr->base).base.model.bone_transform.bone_model_matrices
                         [_DAT_01cb8224].m);
              uVar24 = CONCAT44(uVar27,&pCStack_260);
              pCStack_260 = pCStack_188;
              afStack_25c[(uint)bVar19 * -2] = afStack_184[(uint)bVar19 * -2];
              afStack_25c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                   afStack_184[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
              core_actor_cpp_FUN_00408d70(this_ptr,uVar24);
              pCVar23 = &CStack_11c;
              fVar28 = (float)((ulonglong)uVar24 >> 0x20);
              CStack_11c.x = fStack_170;
              *(float *)((int)&CStack_11c + (uint)bVar19 * -8 + 4) = afStack_16c[(uint)bVar19 * -2];
              pCVar6 = this_ptr;
              *(float *)((int)&CStack_11c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
                   afStack_16c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
              iVar5 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                                (&pCVar6->base,pCVar23,fVar28,(SDamageInfo *)in_stack_fffffb24);
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
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCVar6,1,1);
        }
      }
      break;
    case 10:
      if ((((this_ptr->base).pool_me == 0) && (this_ptr->lives_left < 1)) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_005469a0(pCVar6);
        fStack_1a0 = fStack_23c;
        afStack_1b4[(uint)bVar19 * -2 + 6] = (float)apCStack_238[(uint)bVar19 * -2];
        afStack_1b4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7] =
             (float)apCStack_238[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
        core_actor_cpp_FUN_00408d70(this_ptr);
        pCVar23 = &CStack_200;
        EVar30 = BLOOD_TYPE_RED;
        CStack_200.x = (float)pCStack_158;
        *(float *)((int)&CStack_200 + (uint)bVar19 * -8 + 4) = afStack_154[(uint)bVar19 * -2];
        this_ptr_02 = g_CGorePtr;
        *(float *)((int)&CStack_200 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
             afStack_154[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_02,pCVar23,EVar30);
        (this_ptr->base).pool_me = 1;
      }
      this_ptr->is_berserk = 0;
      if (((0 < this_ptr->spasm_count) || (0 < this_ptr->lives_left)) &&
         (iVar5 = this_ptr->spasm_timer - _DAT_01c2a370, this_ptr->spasm_timer = iVar5, iVar5 < 1))
      {
        if (this_ptr->lives_left < 1) {
          this_ptr->spasm_count = this_ptr->spasm_count + -1;
        }
        if ((0 < this_ptr->spasm_count) || (0 < this_ptr->lives_left)) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,12.0);
          fVar21 = (float10)fStack_14 * (float10)_DAT_005d90ff;
          iVar26 = 1;
          iVar5 = 0xf;
          this_ptr_01 = (CMotionController *)round();
          this_ptr->spasm_timer = (int)ROUND(fVar21);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr_01,iVar5,iVar26);
        }
      }
      if (0 < this_ptr->lives_left) {
        iVar5 = this_ptr->arise_timer;
        if (iVar5 < 1) {
          iVar5 = iVar5 + _DAT_01c2a370;
          fStack_58 = 0.0;
          this_ptr->arise_timer = iVar5;
          if (iVar5 < 0) {
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time);
            pCVar29 = (this_ptr->base).victim;
            if (pCVar29 != (CCharacter *)0x0) {
              pvStack_2e4 = (void *)((this_ptr->base).base.base.location.position.x -
                                    (pCVar29->base).location.position.x);
              afStack_2e0[0] =
                   (this_ptr->base).base.base.location.position.y -
                   (pCVar29->base).location.position.y;
              afStack_2e0[1] =
                   (this_ptr->base).base.base.location.position.z -
                   (pCVar29->base).location.position.z;
              pvStack_110 = pvStack_2e4;
              (&fStack_10c)[(uint)bVar19 * -2] = afStack_2e0[(uint)bVar19 * -2];
              (&pCStack_108)[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
                   (CMotionController_vtable *)
                   afStack_2e0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
              if (&pvStack_140 != &pvStack_110) {
                pvStack_140 = pvStack_110;
                fStack_13c = fStack_10c;
                pCStack_138 = pCStack_108;
              }
              fStack_7c = (float)pCStack_138 * (float)pCStack_138 +
                          (float)pvStack_140 * (float)pvStack_140 + fStack_13c * fStack_13c;
              fStack_78 = (float)(((int)fStack_7c >> 1) + _DAT_01caf5b4);
              if (fStack_78 < (float)_DAT_005d90ef) goto LAB_004c293b;
            }
            if (fStack_58 == 0.0) break;
          }
          else {
            this_ptr->arise_timer = 0;
          }
LAB_004c293b:
          fStack_20 = (this_ptr->base).base.collision_cylinder_top;
          if (fStack_20 < (this_ptr->base).base.collision_cylinder_bottom) {
            fStack_20 = (this_ptr->base).base.model.bounding_box.max.y;
          }
          if (fStack_20 < (this_ptr->base).base.collision_cylinder_bottom) {
            fStack_20 = (this_ptr->base).base.collision_cylinder_bottom + (float)_DAT_005d910f;
          }
          fVar28 = 0.0;
          do {
            fStack_90 = (float)(int)fVar28 * _DAT_005d9157 * _DAT_005d915b;
            fStack_14 = fVar28;
            core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
            fVar21 = (float10)fcos((float10)fStack_90);
            fVar20 = (float10)fsin((float10)fStack_90);
            fStack_2c = (float)core_setcolid_cpp_FUN_00537030
                                         (g_CDemonSetPtr,
                                          (this_ptr->base).base.base.location.position.x,
                                          (this_ptr->base).base.base.location.position.z,
                                          (float)(fVar20 * (float10)_DAT_005d915f),
                                          (float)(fVar21 * (float10)_DAT_005d915f),
                                          (this_ptr->base).base.collision_cylinder_radius,
                                          (this_ptr->base).base.base.location.position.y +
                                          (this_ptr->base).base.collision_cylinder_bottom);
            fStack_14 = fStack_2c;
            core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
            if (fStack_2c < 1.0) break;
            fVar28 = (float)((int)fVar28 + 1);
          } while ((int)fVar28 < 4);
          if ((int)fVar28 < 4) {
            this_ptr->arise_timer = 3;
            (this_ptr->base).victim = (CCharacter *)0x0;
          }
          else {
            fStack_14 = (float)(this_ptr->lives_left + 1);
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60
                                  (10.0,(float)(int)fStack_14 * (float)_DAT_005d9167);
            (this_ptr->base).base.hit_points = fStack_14;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,0x10,1);
          }
        }
        else {
          iVar5 = iVar5 - _DAT_01c2a370;
          this_ptr->arise_timer = iVar5;
          if (iVar5 < 1) {
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,30.0);
            fVar21 = -(float10)fStack_14 * (float10)_DAT_005d9117;
            round();
            this_ptr->arise_timer = (int)ROUND(fVar21);
          }
        }
      }
      break;
    case 0xb:
      pCVar29 = (this_ptr->base).victim;
      if (pCVar29 == (CCharacter *)0x0) {
LAB_004c3569:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCVar6,1,1);
      }
      else {
        pCVar9 = (*(((pCVar29->base).vtable._uc)->_uc).getGrabber)(pCVar29);
        if (pCVar9 == (CDemonActor *)0x0) {
          fStack_28 = 0x40200000;
        }
        else {
          in_stack_fffffb24 = (char *)(this_ptr->base).victim;
          pCVar10 = (CGhoul *)
                    (*(((((CGhoul *)in_stack_fffffb24)->base).base.base.vtable._uc)->_uc).getGrabber
                    )((CCharacter *)in_stack_fffffb24);
          if (pCVar10 != this_ptr) {
            in_stack_fffffb24 = (char *)0x1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)pCVar6,1,1);
          }
        }
      }
      break;
    case 0xc:
      pCVar29 = (this_ptr->base).victim;
      if ((pCVar29 == (CCharacter *)0x0) ||
         (pCVar9 = (*(((pCVar29->base).vtable._uc)->_uc).getGrabber)(pCVar29),
         pCVar9 != (CDemonActor *)0x0)) goto LAB_004c3569;
      in_stack_fffffb24 = (char *)0x3f000000;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.5);
      iVar5 = this_ptr->part_indices[1];
      (this_ptr->base).attack_cooldown = fStack_14;
      if ((this_ptr->base).base.model.part_data.visibility_flags[iVar5] != 0) {
        fStack_60 = core_motion_cpp_FUN_00503e60((CMotionController *)pCVar6);
        dStack_a8 = (double)fStack_60;
        in_stack_fffffb24 = (char *)pCVar6;
        fStack_14 = fStack_60;
        if (fStack_60 <= (float)_DAT_005d9107) {
          fStack_28 = 0x40200000;
          if (1.0 <= dStack_a8) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_478);
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
            SStack_478.damage_amount = fStack_14;
            if (this_ptr->is_berserk != 0) {
              SStack_478.damage_amount = fStack_14 * (float)_DAT_005d9107;
            }
            in_stack_fffffb24 = (char *)&SStack_478;
            SStack_478.attacker = (CDemonActor *)this_ptr;
            SStack_478.wielder = (CDemonActor *)this_ptr;
            uVar27 = 0x3ecccccd;
            core_xform_cpp_FUN_00591530
                      (&DAT_01cb81c8,
                       (this_ptr->base).base.model.bone_transform.bone_model_matrices[_DAT_01cb8220]
                       .m);
            uVar24 = CONCAT44(uVar27,&pCStack_290);
            pCStack_290 = apCStack_24c[1];
            afStack_28c[(uint)bVar19 * -2] = (float)apCStack_24c[(uint)bVar19 * -2 + 2];
            afStack_28c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                 (float)apCStack_24c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 3];
            core_actor_cpp_FUN_00408d70(this_ptr,uVar24);
            pCVar23 = &CStack_284;
            fVar28 = (float)((ulonglong)uVar24 >> 0x20);
            CStack_284.x = fStack_f8;
            *(UActorVTable *)((int)&CStack_284 + (uint)bVar19 * -8 + 4) =
                 aUStack_100[(uint)bVar19 * -2 + 3];
            pCVar6 = this_ptr;
            *(UActorVTable *)((int)&CStack_284 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
                 aUStack_100[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
            iVar5 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                              (&pCVar6->base,pCVar23,fVar28,(SDamageInfo *)in_stack_fffffb24);
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
      iVar5 = this_ptr->burp_timer - _DAT_01c2a370;
      this_ptr->burp_timer = iVar5;
      if (iVar5 < 1) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"burp[1,2].wav");
        in_stack_fffffb24 = (char *)0x41700000;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(15.0,30.0);
        fVar21 = (float10)fStack_14 * (float10)_DAT_005d90ff;
        round();
        this_ptr->burp_timer = (int)ROUND(fVar21);
      }
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        in_stack_fffffb24 = (char *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,0,1);
      }
    }
    if (((0.0 <= fStack_28) && (this_ptr->flinch_blend_weight <= 0.0)) &&
       ((this_ptr->base).victim != (CCharacter *)0x0)) {
      fVar28 = 0.5235988;
      pCVar22 = (CVector3f *)0x40400000;
      fStack_35c = 0.0;
      fStack_354 = fStack_28;
      acStack_358[0] = '\0';
      acStack_358[1] = '\0';
      acStack_358[2] = '\0';
      acStack_358[3] = '\0';
      pCVar29 = (this_ptr->base).victim;
      pCVar8 = (*((pCVar29->base).vtable._ub)->getPathMap)(&pCVar29->base);
      core_skeleton_cpp_FUN_005469a0(&((this_ptr->base).victim)->model,0);
      afStack_274[2] = fStack_320;
      afStack_274[(uint)bVar19 * -2 + 3] = afStack_31c[(uint)bVar19 * -2];
      afStack_274[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
           afStack_31c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
      core_actor_cpp_FUN_00408d70((this_ptr->base).victim,afStack_274 + 2);
      pCVar23 = &CStack_2c0;
      CStack_2c0.x = fStack_194;
      *(float *)((int)&CStack_2c0 + (uint)bVar19 * -8 + 4) = afStack_1b4[(uint)bVar19 * -2 + 9];
      pCVar6 = this_ptr;
      *(float *)((int)&CStack_2c0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           afStack_1b4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 10];
      iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)pCVar6,pCVar23,pCVar8,pCVar22,fVar28,(float)in_stack_fffffb24
                        );
      if (iVar5 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,1,1);
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
      }
    }
    goto LAB_004c1d09;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
      iVar5 = 1;
    }
    else {
LAB_004c2686:
      iVar5 = 0;
    }
LAB_004c1ce2:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) {
      iVar5 = 0x11;
      goto LAB_004c1ce2;
    }
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_004c2686;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_004c1d09:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    pCVar29 = (this_ptr->base).victim;
    if ((pCVar29 != (CCharacter *)0x0) &&
       (pCVar6 = (CGhoul *)(*(((pCVar29->base).vtable._uc)->_uc).getGrabber)(pCVar29),
       pCVar6 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_00423a10(this_ptr);
    pvStack_134 = (void *)((this_ptr->base).base.velocity.x * delta_time);
    afStack_130[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_130[1] = (this_ptr->base).base.velocity.z * delta_time;
    pvStack_1dc = pvStack_134;
    apvStack_1d8[(uint)bVar19 * -2] = (void *)afStack_130[(uint)bVar19 * -2];
    apvStack_1d8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         (void *)afStack_130[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    pCVar23 = &(this_ptr->base).base.position_delta;
    fStack_1d0 = (float)pvStack_1dc + pCVar23->x;
    aUStack_1cc[0] = (UActorVTable)((float)apvStack_1d8[0] + (this_ptr->base).base.position_delta.y)
    ;
    aUStack_1cc[1] = (UActorVTable)((float)apvStack_1d8[1] + (this_ptr->base).base.position_delta.z)
    ;
    fStack_ec = fStack_1d0;
    aUStack_100[(uint)bVar19 * -2 + 6] = aUStack_1cc[(uint)bVar19 * -2];
    aUStack_100[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7] =
         aUStack_1cc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    pCVar22 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCStack_1c4 = (CMotionList *)(fStack_ec + pCVar22->x);
    afStack_1c0[0] = fStack_e8 + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_1c0[1] = fStack_e4 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_230.x = (float)pCStack_1c4;
    *(float *)((int)&CStack_230 + (uint)bVar19 * -8 + 4) = afStack_1c0[(uint)bVar19 * -2];
    *(float *)((int)&CStack_230 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
         afStack_1c0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar23->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar28 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar28;
    pCVar22->x = fVar28;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_230);
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(this_ptr_00);
  dStack_b8 = (double)this_ptr->flinch_blend_weight;
  if (0.0 < dStack_b8) {
    fStack_6c = (float)core_motion_cpp_FUN_00503f50(this_ptr_00,this_ptr->flinch_motion_index);
    fVar28 = 1.0 - this_ptr->flinch_blend_weight;
    fStack_68 = 1.0 - fVar28 * fVar28 * fVar28;
    fStack_14 = fStack_6c;
    core_skeleton_cpp_FUN_00545a60
              (this_ptr_00,this_ptr->flinch_motion_index,fStack_6c,fStack_68,_DAT_01cb8240);
    fVar28 = this_ptr->flinch_blend_weight - delta_time / _DAT_005f78cc;
    this_ptr->flinch_blend_weight = fVar28;
    if (fVar28 < 0.0) {
      this_ptr->flinch_blend_weight = 0.0;
    }
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  if (((float)_DAT_005d916f < ABS((this_ptr->base).base.turn_angle_accumulator)) ||
     (fVar28 = (this_ptr->base).base.position_delta.y,
     fVar25 = (this_ptr->base).base.position_delta.x, fVar1 = (this_ptr->base).base.position_delta.z
     , (float)_DAT_005d916f < SQRT(fVar1 * fVar1 + fVar25 * fVar25 + fVar28 * fVar28))) {
    iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70(0x0264B290,this_ptr->sfx_handle);
    if (iVar5 == 0) {
      _sprintf(&stack0xfffffb24,"ghoul-walk-?.wav *%f");
      uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,&stack0xfffffb24);
      this_ptr->sfx_handle = uVar11;
    }
  }
  else {
    core_sound_cpp_CSound_killSound_FUN_0055af80(0x0264B290,this_ptr->sfx_handle);
  }
  if ((this_ptr->base).pool_me == 0) {
    iVar5 = this_ptr->part_indices[9];
    if ((this_ptr->base).base.model.part_data.visibility_flags[iVar5] == 0) {
      fVar28 = 0.5;
      iVar26 = _DAT_01cb8244;
    }
    else {
      core_charactr_cpp_FUN_00427060(this_ptr,this_ptr->part_indices[0],_DAT_01cb8230);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_charactr_cpp_FUN_00427060(this_ptr,this_ptr->part_indices[1],_DAT_01cb8228);
      }
      core_charactr_cpp_FUN_00427060(this_ptr,this_ptr->part_indices[2],_DAT_01cb8234);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_charactr_cpp_FUN_00427060(this_ptr,this_ptr->part_indices[3],_DAT_01cb822c);
      }
      fVar28 = 0.7;
      iVar5 = this_ptr->part_indices[10];
      iVar26 = _DAT_01cb821c;
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427130
              ((CCharacter *)this_ptr,iVar5,iVar26,fVar28);
    core_charactr_cpp_FUN_00426f30();
  }
  if ((this_ptr->dark_waypoint != (CDemonActor *)0x0) && (fStack_34 == 2.38221e-44)) {
    fStack_278 = (this_ptr->base).base.base.location.position.x - (this_ptr->prev_position).x;
    afStack_274[0] = (this_ptr->base).base.base.location.position.y - (this_ptr->prev_position).y;
    afStack_274[1] = (this_ptr->base).base.base.location.position.z - (this_ptr->prev_position).z;
    afStack_16c[2] = fStack_278;
    afStack_16c[(uint)bVar19 * -2 + 3] = afStack_274[(uint)bVar19 * -2];
    (&pSStack_15c)[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
         (SMotionTransition *)afStack_274[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    if (delta_time * (float)_DAT_005d910f <=
        SQRT((float)pSStack_15c * (float)pSStack_15c + afStack_16c[2] * afStack_16c[2])) {
      this_ptr->stuck_timer = 1.0;
    }
    else {
      fVar28 = this_ptr->stuck_timer - delta_time;
      this_ptr->stuck_timer = fVar28;
      if (fVar28 < 0.0) {
        this_ptr->heal_timer = 30.0;
        this_ptr->dark_waypoint = (CDemonActor *)0x0;
        this_ptr->is_berserk = 0;
      }
    }
  }
  pCVar12 = &(this_ptr->base).base.base.location;
  if ((CLocation *)&this_ptr->prev_position == pCVar12) {
    return;
  }
  (this_ptr->prev_position).x = (pCVar12->position).x;
  (this_ptr->prev_position).y = (this_ptr->base).base.base.location.position.y;
  (this_ptr->prev_position).z = (this_ptr->base).base.base.location.position.z;
  return;
}
