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
  SMotion *pSVar6;
  CGhoul *pCVar7;
  EDeathState EVar8;
  int iVar9;
  CPathMap *pCVar10;
  CDemonActor *pCVar11;
  CGhoul *pCVar12;
  uint uVar13;
  CLocation *pCVar14;
  uint *puVar15;
  char *pcVar16;
  uint *puVar17;
  char *pcVar18;
  char cVar19;
  byte bVar20;
  float10 fVar21;
  float10 fVar22;
  double dVar23;
  float afStackY_135c [48];
  void *apvStackY_129c [15];
  float afStackY_1260 [9];
  CDemonActor *apCStackY_123c [9];
  float afStackY_1218 [21];
  void *apvStackY_11c4 [3];
  UActorVTable aUStackY_11b8 [3];
  float afStackY_11ac [45];
  CMotionController_vtable *apCStackY_10f8 [3];
  float afStackY_10ec [6];
  UActorVTable aUStackY_10d4 [6];
  float afStackY_10bc [752];
  CVector3f *pCVar24;
  CVector3f *pCVar25;
  CGore *this_ptr_01;
  float fVar26;
  char *in_stack_fffffb24;
  float fVar27;
  CCharacter *in_stack_fffffb2c;
  CCharacter *pCVar28;
  EBloodType EVar29;
  SDamageInfo SStack_478;
  SDamageInfo SStack_43c;
  SDamageInfo SStack_400;
  char acStack_3c4 [32];
  uint auStack_3a4 [6];
  uint uStack_38c;
  float fStack_388;
  float fStack_37c;
  CVector3f CStack_374;
  CVector3f CStack_368;
  float fStack_35c;
  char acStack_358 [4];
  float fStack_354;
  float fStack_350;
  float afStack_34c [2];
  byte auStack_344 [12];
  CVector3f CStack_338;
  CVector3f CStack_32c;
  CVector3f CStack_320;
  CVector3f CStack_314;
  CVector3f CStack_308;
  CVector3f CStack_2fc;
  CVector3f CStack_2f0;
  void *pvStack_2e4;
  float afStack_2e0 [2];
  CVector3f CStack_2d8;
  CVector3f CStack_2cc;
  CVector3f CStack_2c0;
  float fStack_2b4;
  float fStack_2b0;
  void *apvStack_2ac [4];
  CVector3f CStack_29c;
  CVector3f CStack_290;
  CVector3f CStack_284;
  float fStack_278;
  float afStack_274 [2];
  CVector3f CStack_26c;
  CVector3f CStack_260;
  float fStack_254;
  float fStack_250;
  CDemonActor *pCStack_24c;
  CVector3f CStack_248;
  CVector3f CStack_23c;
  CVector3f CStack_230;
  void *pvStack_224;
  float afStack_220 [2];
  CVector3f CStack_218;
  void *pvStack_20c;
  CDemonActor *pCStack_208;
  float fStack_204;
  CVector3f CStack_200;
  CVector3f CStack_1f4;
  CVector3f CStack_1e8;
  void *pvStack_1dc;
  void *apvStack_1d8 [2];
  float fStack_1d0;
  UActorVTable aUStack_1cc [2];
  CMotionList *pCStack_1c4;
  float afStack_1c0 [2];
  CVector3f CStack_1b8;
  CVector3f CStack_1ac;
  CVector3f CStack_1a0;
  CVector3f CStack_194;
  CVector3f CStack_188;
  EMotionTransitionCmd EStack_17c;
  float fStack_178;
  CMotionController_vtable *pCStack_174;
  CVector3f CStack_170;
  float fStack_164;
  float fStack_160;
  SMotionTransition *pSStack_15c;
  CVector3f CStack_158;
  CVector3f CStack_14c;
  void *pvStack_140;
  float fStack_13c;
  CMotionController_vtable *pCStack_138;
  void *pvStack_134;
  float afStack_130 [2];
  CVector3f CStack_128;
  CVector3f CStack_11c;
  void *pvStack_110;
  float fStack_10c;
  CMotionController_vtable *pCStack_108;
  CVector3f CStack_104;
  CVector3f CStack_f8;
  float fStack_ec;
  UActorVTable UStack_e8;
  float fStack_e4;
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [2];
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
  
  bVar20 = 0;
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
  fStack_70 = delta_time * (this_ptr->base).speed;
  pCStack_18 = (CGhoul *)&(this_ptr->base).base.model;
switchD_004c2644_caseD_e:
  if (0.0 < fStack_70) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)pCStack_18,&fStack_70);
    switch(iVar5) {
    case 5:
      pCVar28 = (this_ptr->base).victim;
      fStack_1c = 1.4013e-45;
      if ((pCVar28 != (CCharacter *)0x0) &&
         (EVar8 = (*(((pCVar28->base).vtable._uc)->_uc).getDeathState)(pCVar28),
         EVar8 == DEATH_STATE_ALIVE)) {
        in_stack_fffffb24 = (char *)(this_ptr->base).victim;
        pCVar11 = (*(((((CGhoul *)in_stack_fffffb24)->base).base.base.vtable._uc)->_uc).getGrabber)
                            ((CCharacter *)in_stack_fffffb24);
        if ((pCVar11 == (CDemonActor *)0x0) &&
           (pCVar28 = (this_ptr->base).victim, in_stack_fffffb24 = (char *)this_ptr,
           iVar5 = (*(((pCVar28->base).vtable._uc)->_uc).canBeGrabbed)
                             (pCVar28,(CDemonActor *)this_ptr,0), iVar5 != 0)) {
          fStack_64 = 0x40200000;
          auStack_344._0_4_ = 0.0;
          auStack_344._4_4_ = 0.0;
          auStack_344._8_4_ = 0x40200000;
          in_stack_fffffb2c = (CCharacter *)0x4c210b;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    ((CDemonActor *)this_ptr,(CVector3f *)auStack_344,&CStack_1f4);
          fStack_2b4 = CStack_1f4.x;
          (&fStack_2b0)[(uint)bVar20 * -2] = *(float *)((int)&CStack_1f4 + (uint)bVar20 * -8 + 4);
          apvStack_2ac[(uint)bVar20 * -2 + (uint)bVar20 * -2] =
               *(void **)((int)&CStack_1f4 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          pCVar28 = (this_ptr->base).victim;
          fVar27 = fStack_2b4 - (pCVar28->base).location.position.x;
          fVar26 = (float)apvStack_2ac[0] - (pCVar28->base).location.position.z;
          if (1.0 < SQRT(fVar26 * fVar26 + fVar27 * fVar27)) {
            fStack_1c = 0.0;
          }
          pCVar28 = (this_ptr->base).victim;
          if ((ABS(fStack_2b0 - (pCVar28->base).location.position.y) <= (float)_DAT_005d90f7) &&
             (((fStack_1c == 0.0 ||
               (iVar5 = (*(((pCVar28->base).vtable._uc)->_uc).getGrabbed)
                                  (pCVar28,(CDemonActor *)this_ptr,0), in_stack_fffffb2c = pCVar28,
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
      pCVar28 = (this_ptr->base).victim;
      if (pCVar28 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCStack_18,1,1);
      }
      else {
        pCVar7 = (CGhoul *)(*(((pCVar28->base).vtable._uc)->_uc).getGrabber)(pCVar28);
        if (pCVar7 == this_ptr) {
          pCVar28 = (this_ptr->base).victim;
          EVar8 = (*(((pCVar28->base).vtable._uc)->_uc).getDeathState)(pCVar28);
          if (EVar8 == DEATH_STATE_ALIVE) {
            pCVar28 = (this_ptr->base).victim;
            in_stack_fffffb24 = (char *)0x4c2212;
            (*((pCVar28->base).vtable._ub)->getBoundingBox)
                      (&pCVar28->base,(CBoundingBox3D *)in_stack_fffffb2c);
            puVar15 = auStack_3a4;
            puVar17 = &uStack_38c;
            for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar17 = *puVar15;
              puVar15 = puVar15 + (uint)bVar20 * -2 + 1;
              puVar17 = puVar17 + (uint)bVar20 * -2 + 1;
            }
            fVar27 = fStack_37c - fStack_388;
            pCVar28 = (this_ptr->base).victim;
            puVar15 = (uint *)((int)pCVar28 + (uint)bVar20 * -8 + 0x24);
            CStack_14c.x = (pCVar28->base).location.position.x;
            *(uint *)((int)&CStack_14c + (uint)bVar20 * -8 + 4) = *puVar15;
            *(uint *)((int)&CStack_14c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                 puVar15[(uint)bVar20 * -2 + 1];
            CStack_14c.y = fVar27 * (float)_DAT_005d9147 + CStack_14c.y;
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_400);
            SStack_400.damage_amount =
                 core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(15.0,25.0);
            fStack_14 = SStack_400.damage_amount;
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                      (&((this_ptr->base).victim)->base,&CStack_14c,&CStack_104);
            fStack_d4 = CStack_104.x;
            afStack_d0[(uint)bVar20 * -2] = *(float *)((int)&CStack_104 + (uint)bVar20 * -8 + 4);
            afStack_d0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                 *(float *)((int)&CStack_104 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            if (&SStack_400.impact_direction != (CVector3f *)&fStack_d4) {
              SStack_400.impact_direction.x = fStack_d4;
              SStack_400.impact_direction.y = afStack_d0[0];
              SStack_400.impact_direction.z = afStack_d0[1];
            }
            SStack_400.attacker = (CDemonActor *)this_ptr;
            SStack_400.wielder = (CDemonActor *)this_ptr;
            pCVar28 = (this_ptr->base).victim;
            (*(((pCVar28->base).vtable._uc)->_uc).processDamage)(pCVar28,&SStack_400);
            dStack_c8 = (double)SStack_400.damage_amount;
            if (0.0 < dStack_c8) {
              EVar29 = 0x4c2329;
              dVar23 = round(dStack_c8 * _DAT_005d914f * _DAT_005d913f);
              fStack_8c = (float)(int)ROUND(dVar23);
              in_stack_fffffb24 = &g_CGorePtr->singleton;
              core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                        (g_CGorePtr,&CStack_14c,(CVector3f *)0x0,(int)fStack_8c,EVar29);
            }
            pCVar28 = (this_ptr->base).victim;
            if (pCVar28->hit_points <= 0.0) {
              (*(((pCVar28->base).vtable._uc)->_uc).releaseFromGrab)(pCVar28);
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)pCStack_18,1,1);
            }
            in_stack_fffffb2c = (CCharacter *)0x4c238c;
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
          }
          else {
            pCVar28 = (this_ptr->base).victim;
            (*(((pCVar28->base).vtable._uc)->_uc).releaseFromGrab)(pCVar28);
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
      iVar9 = _DAT_01cb8220;
      if (iVar5 == 0xc) {
        iVar9 = _DAT_01cb8224;
      }
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                ((CDeformableModelInstance *)pCStack_18,iVar9,&CStack_1ac);
      pCVar25 = &CStack_128;
      CStack_128.x = CStack_1ac.x;
      *(uint *)((int)&CStack_128 + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_1ac + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_128 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_1ac + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar25,&CStack_e0);
      fVar26 = 12.0;
      fVar27 = 8.0;
      CStack_1e8.x = CStack_e0.x;
      *(uint *)((int)&CStack_1e8 + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_e0 + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_1e8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_e0 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar27,fVar26);
      EVar29 = 0x4c2440;
      dVar23 = round((double)(fStack_14 * (float)_DAT_005d913f));
      fStack_74 = (float)(int)ROUND(dVar23);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (g_CGorePtr,&CStack_1e8,(CVector3f *)0x0,(int)fStack_74,EVar29);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-dig-?.wav @1.3");
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
                ((CDeformableModelInstance *)pCStack_18);
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                ((CDeformableModelInstance *)pCStack_18,_DAT_01cb821c,&CStack_2d8);
      pCVar25 = &CStack_368;
      CStack_368.x = CStack_2d8.x;
      *(uint *)((int)&CStack_368 + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_2d8 + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_368 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_2d8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar25,&CStack_374);
      fVar26 = 12.0;
      fVar27 = 8.0;
      CStack_314.x = CStack_374.x;
      *(uint *)((int)&CStack_314 + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_374 + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_314 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_374 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar27,fVar26);
      EVar29 = 0x4c24f4;
      dVar23 = round((double)(fStack_14 * (float)_DAT_005d913f));
      fStack_80 = (float)(int)ROUND(dVar23);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (g_CGorePtr,&CStack_314,(CVector3f *)0x0,(int)fStack_80,EVar29);
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
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                ((CDeformableModelInstance *)pCStack_18,_DAT_01cb821c,&CStack_308);
      pCVar25 = &CStack_32c;
      CStack_32c.x = CStack_308.x;
      *(uint *)((int)&CStack_32c + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_308 + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_32c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_308 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar25,&CStack_2fc);
      fVar26 = 12.0;
      fVar27 = 8.0;
      CStack_338.x = CStack_2fc.x;
      *(uint *)((int)&CStack_338 + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_2fc + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_338 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_2fc + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar27,fVar26);
      EVar29 = 0x4c25a7;
      dVar23 = round((double)(fStack_14 * (float)_DAT_005d913f));
      fStack_98 = (float)(int)ROUND(dVar23);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (g_CGorePtr,&CStack_338,(CVector3f *)0x0,(int)fStack_98,EVar29);
      iVar5 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
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
    goto switchD_004c2644_caseD_e;
  }
  fStack_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                        ((CMotionController *)pCStack_18,1);
  dStack_a0 = (double)delta_time;
  (this_ptr->base).base.walk_step_speed =
       fStack_14 * (float)_DAT_005d90e7 * delta_time * (this_ptr->base).speed;
  core_charactr_cpp_FUN_0042b2a0(this_ptr);
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     ((CMotionController *)pCStack_18);
  fStack_34 = (float)pSVar6->state_index;
  if (fStack_34 == 2.38221e-44) {
    fVar27 = (this_ptr->base).speed;
    fVar21 = (float10)_DAT_005d90ef;
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)_DAT_005d90f7;
    (this_ptr->base).base.walk_step_speed = (float)((float10)dStack_a0 * fVar21 * (float10)fVar27);
  }
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    fStack_28 = -1.0;
    pCVar7 = (CGhoul *)&(this_ptr->base).base.model;
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                       ((CMotionController *)pCVar7);
    switch(pSVar6->state_index) {
    case 0:
      if (this_ptr->stun_timer <= 0.0) {
        pCVar11 = this_ptr->dark_waypoint;
        if (pCVar11 == (CDemonActor *)0x0) {
          iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
          if (iVar5 != 0) goto LAB_004c2cc5;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CCharacter *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,1,1);
            iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[0]);
            if (iVar5 != 0) {
              in_stack_fffffb24 = (char *)0x4c2d33;
              iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]);
              if (iVar5 != 0) break;
            }
            in_stack_fffffb24 = (char *)this_ptr;
            uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"ghoul-alert-?.wav");
            this_ptr->sfx_handles[0] = uVar13;
          }
        }
        else {
          apvStack_2ac[1] =
               (void *)((pCVar11->location).position.x -
                       (this_ptr->base).base.base.location.position.x);
          apvStack_2ac[2] =
               (void *)((pCVar11->location).position.y -
                       (this_ptr->base).base.base.location.position.y);
          apvStack_2ac[3] =
               (void *)((pCVar11->location).position.z -
                       (this_ptr->base).base.base.location.position.z);
          pvStack_224 = apvStack_2ac[1];
          afStack_220[(uint)bVar20 * -2] = (float)apvStack_2ac[(uint)bVar20 * -2 + 2];
          afStack_220[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
               (float)apvStack_2ac[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 3];
          pvStack_20c = pvStack_224;
          (&pCStack_208)[(uint)bVar20 * -2] = (CDemonActor *)afStack_220[(uint)bVar20 * -2];
          (&fStack_204)[(uint)bVar20 * -2 + (uint)bVar20 * -2] =
               afStack_220[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          fStack_94 = fStack_204 * fStack_204 +
                      (float)pvStack_20c * (float)pvStack_20c +
                      (float)pCStack_208 * (float)pCStack_208;
          if (SQRT(fStack_94) < (float)_DAT_005d90f7) {
            fVar27 = (this_ptr->base).base.hit_points + delta_time;
            this_ptr->heal_timer = this_ptr->heal_timer - delta_time;
            (this_ptr->base).base.hit_points = fVar27;
            if ((float)_DAT_005d9137 < fVar27) {
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
          pCVar28 = (this_ptr->base).victim;
          if (pCVar28 == (CCharacter *)0x0) {
            in_stack_fffffb24 = (char *)this_ptr;
            pCVar7 = (CGhoul *)
                     core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
            if (pCVar7 == (CGhoul *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (&(this_ptr->base).base.model.base,0,1);
              in_stack_fffffb24 = (char *)pCVar7;
            }
          }
          else {
            fStack_254 = (pCVar28->base).location.position.x -
                         (this_ptr->base).base.base.location.position.x;
            fStack_250 = (pCVar28->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            pCStack_24c = (CDemonActor *)
                          ((pCVar28->base).location.position.z -
                          (this_ptr->base).base.base.location.position.z);
            fStack_350 = fStack_254;
            afStack_34c[(uint)bVar20 * -2] = (&fStack_250)[(uint)bVar20 * -2];
            afStack_34c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                 (float)(&pCStack_24c)[(uint)bVar20 * -2 + (uint)bVar20 * -2];
            afStack_34c[0] = 0.0;
            if ((((this_ptr->base).base.hit_points < (float)_DAT_005d911f) && (0 < (int)fStack_24))
               && (this_ptr->dark_waypoint == (CDemonActor *)0x0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004c1980(this_ptr,delta_time);
            }
            pCVar11 = this_ptr->dark_waypoint;
            in_stack_fffffb24 = (char *)&(this_ptr->base).base.model;
            if (pCVar11 == (CDemonActor *)0x0) {
              fVar27 = 0.17453292;
              pCVar7 = (CGhoul *)0x3f800000;
              EStack_17c = MOTION_CMD_NONE;
              pCStack_174 = (CMotionController_vtable *)0x40200000;
              fStack_178 = 0.0;
              pCVar28 = (this_ptr->base).victim;
              pCVar10 = (*((pCVar28->base).vtable._ub)->getPathMap)(&pCVar28->base);
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                                ((CCharacter *)this_ptr,
                                 &(((this_ptr->base).victim)->base).location.position,pCVar10,
                                 (CVector3f *)pCVar7,fVar27,(float)in_stack_fffffb2c);
              if (iVar5 < 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)in_stack_fffffb24,0,1);
              }
              else {
                in_stack_fffffb24 = (char *)pCVar7;
                if (((0 < iVar5) && (0 < (int)fStack_24)) &&
                   (((this_ptr->base).attack_cooldown <= 0.0 &&
                    ((pCVar28 = (this_ptr->base).victim,
                     pCVar11 = (*(((pCVar28->base).vtable._uc)->_uc).getGrabber)(pCVar28),
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
                                (float)_DAT_005d9127;
                  }
                  if ((this_ptr->base).base.model.part_data.visibility_flags
                      [this_ptr->part_indices[1]] != 0) {
                    fStack_40 = (1.0 - ABS(fStack_48 - 0x40200000) / 0x40200000) *
                                (float)_DAT_005d912f;
                  }
                  pCVar28 = (this_ptr->base).victim;
                  in_stack_fffffb24 = (char *)0x4c30f4;
                  fStack_3c = fStack_48;
                  iVar5 = (*(((pCVar28->base).vtable._uc)->_uc).canBeGrabbed)
                                    (pCVar28,(CDemonActor *)this_ptr,0);
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
              fVar27 = 0.0;
              pCVar7 = (CGhoul *)0x40400000;
              pCVar10 = (*((pCVar11->vtable)._ub)->getPathMap)(pCVar11);
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                                ((CCharacter *)this_ptr,
                                 &(this_ptr->dark_waypoint->location).position,pCVar10,
                                 (CVector3f *)pCVar7,fVar27,(float)in_stack_fffffb2c);
              if (0 < iVar5) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)in_stack_fffffb24,0,1);
                pCVar7 = (CGhoul *)0x4c2efc;
                fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,30.0);
                this_ptr->heal_timer = fStack_14;
              }
              if (iVar5 < 0) {
                this_ptr->heal_timer = 30.0;
                this_ptr->dark_waypoint = (CDemonActor *)0x0;
              }
              in_stack_fffffb24 = (char *)pCVar7;
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
            cVar19 = (this_ptr->base).base.model.part_data.visibility_flags
                     [this_ptr->part_indices[1]] != 0;
            if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] !=
                0) {
              cVar19 = cVar19 + '\x01';
            }
            if (cVar19 != '\0') {
              if (cVar19 == '\x01') {
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
              fVar26 = 0.08726646;
              fVar27 = 0.5;
              CStack_2cc.z = fStack_38;
              pCVar25 = &CStack_2cc;
              CStack_2cc.x = 0.0;
              iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
              CStack_2cc.y = 0.0;
              pCVar10 = (CPathMap *)(**(code **)(*(int *)(iVar5 + 0x2b0) + 0xcc))(iVar5);
              core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                        ((CDeformableModelInstance *)
                         (*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b4),0,&CStack_1b8);
              pCVar24 = &CStack_2f0;
              CStack_2f0.x = CStack_1b8.x;
              *(uint *)((int)&CStack_2f0 + (uint)bVar20 * -8 + 4) =
                   *(uint *)((int)&CStack_1b8 + (uint)bVar20 * -8 + 4);
              *(uint *)((int)&CStack_2f0 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                   *(uint *)((int)&CStack_1b8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                        (*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4),pCVar24,&CStack_218);
              pCVar24 = &CStack_29c;
              CStack_29c.x = CStack_218.x;
              *(uint *)((int)&CStack_29c + (uint)bVar20 * -8 + 4) =
                   *(uint *)((int)&CStack_218 + (uint)bVar20 * -8 + 4);
              pCVar7 = this_ptr;
              *(uint *)((int)&CStack_29c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                   *(uint *)((int)&CStack_218 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                                ((CCharacter *)pCVar7,pCVar24,pCVar10,pCVar25,fVar27,fVar26);
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
      pCVar28 = (this_ptr->base).victim;
      if (pCVar28 == (CCharacter *)0x0) {
LAB_004c2cc5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,1,1);
      }
      else {
        pCVar11 = (*(((pCVar28->base).vtable._uc)->_uc).getGrabber)(pCVar28);
        if (pCVar11 == (CDemonActor *)0x0) {
          in_stack_fffffb24 = (char *)0x3f000000;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.5);
          iVar5 = this_ptr->part_indices[3];
          (this_ptr->base).attack_cooldown = fStack_14;
          if ((this_ptr->base).base.model.part_data.visibility_flags[iVar5] != 0) {
            fStack_5c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                  ((CMotionController *)pCVar7);
            dStack_c0 = (double)fStack_5c;
            in_stack_fffffb24 = (char *)pCVar7;
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
              fVar27 = 0.2;
              core_xform_cpp_transformVector3x4_FUN_00591530
                        ((CVector3f *)&DAT_01cb81d4,
                         (CMatrix3x4f *)
                         (this_ptr->base).base.model.bone_transform.bone_model_matrices
                         [_DAT_01cb8224].m,&CStack_188);
              pCVar25 = &CStack_260;
              CStack_260.x = CStack_188.x;
              *(uint *)((int)&CStack_260 + (uint)bVar20 * -8 + 4) =
                   *(uint *)((int)&CStack_188 + (uint)bVar20 * -8 + 4);
              *(uint *)((int)&CStack_260 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                   *(uint *)((int)&CStack_188 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                        ((CDemonActor *)this_ptr,pCVar25,&CStack_170);
              pCVar25 = &CStack_11c;
              CStack_11c.x = CStack_170.x;
              *(uint *)((int)&CStack_11c + (uint)bVar20 * -8 + 4) =
                   *(uint *)((int)&CStack_170 + (uint)bVar20 * -8 + 4);
              pCVar7 = this_ptr;
              *(uint *)((int)&CStack_11c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                   *(uint *)((int)&CStack_170 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
              iVar5 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                                (&pCVar7->base,pCVar25,fVar27,(SDamageInfo *)in_stack_fffffb24);
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
                    ((CMotionController *)pCVar7,1,1);
        }
      }
      break;
    case 10:
      if ((((this_ptr->base).pool_me == 0) && (this_ptr->lives_left < 1)) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  ((CDeformableModelInstance *)pCVar7,0,&CStack_23c);
        pCVar25 = &CStack_1a0;
        CStack_1a0.x = CStack_23c.x;
        *(uint *)((int)&CStack_1a0 + (uint)bVar20 * -8 + 4) =
             *(uint *)((int)&CStack_23c + (uint)bVar20 * -8 + 4);
        *(uint *)((int)&CStack_1a0 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
             *(uint *)((int)&CStack_23c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                  ((CDemonActor *)this_ptr,pCVar25,&CStack_158);
        pCVar25 = &CStack_200;
        EVar29 = BLOOD_TYPE_RED;
        CStack_200.x = CStack_158.x;
        *(uint *)((int)&CStack_200 + (uint)bVar20 * -8 + 4) =
             *(uint *)((int)&CStack_158 + (uint)bVar20 * -8 + 4);
        this_ptr_01 = g_CGorePtr;
        *(uint *)((int)&CStack_200 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
             *(uint *)((int)&CStack_158 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_01,pCVar25,EVar29);
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
          iVar9 = 0xf;
          iVar5 = 0x4c28d9;
          dVar23 = round((double)(fStack_14 * (float)_DAT_005d90ff));
          this_ptr->spasm_timer = (int)ROUND(dVar23);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,iVar5,iVar9);
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
            pCVar28 = (this_ptr->base).victim;
            if (pCVar28 != (CCharacter *)0x0) {
              pvStack_2e4 = (void *)((this_ptr->base).base.base.location.position.x -
                                    (pCVar28->base).location.position.x);
              afStack_2e0[0] =
                   (this_ptr->base).base.base.location.position.y -
                   (pCVar28->base).location.position.y;
              afStack_2e0[1] =
                   (this_ptr->base).base.base.location.position.z -
                   (pCVar28->base).location.position.z;
              pvStack_110 = pvStack_2e4;
              (&fStack_10c)[(uint)bVar20 * -2] = afStack_2e0[(uint)bVar20 * -2];
              (&pCStack_108)[(uint)bVar20 * -2 + (uint)bVar20 * -2] =
                   (CMotionController_vtable *)
                   afStack_2e0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
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
          fVar27 = 0.0;
          do {
            fStack_90 = (float)(int)fVar27 * _DAT_005d9157 * _DAT_005d915b;
            fStack_14 = fVar27;
            core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
            fVar21 = (float10)fcos((float10)fStack_90);
            fVar22 = (float10)fsin((float10)fStack_90);
            fStack_2c = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00537030
                                  (g_CDemonSetPtr,(this_ptr->base).base.base.location.position.x,
                                   (this_ptr->base).base.base.location.position.z,
                                   (float)(fVar22 * (float10)_DAT_005d915f),
                                   (float)(fVar21 * (float10)_DAT_005d915f),
                                   (this_ptr->base).base.collision_cylinder_radius,
                                   (this_ptr->base).base.base.location.position.y +
                                   (this_ptr->base).base.collision_cylinder_bottom,
                                   (this_ptr->base).base.base.location.position.y + fStack_20);
            fStack_14 = fStack_2c;
            core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
            if (fStack_2c < 1.0) break;
            fVar27 = (float)((int)fVar27 + 1);
          } while ((int)fVar27 < 4);
          if ((int)fVar27 < 4) {
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
            in_stack_fffffb24 = (char *)0x4c290f;
            dVar23 = round((double)(-fStack_14 * _DAT_005d9117));
            this_ptr->arise_timer = (int)ROUND(dVar23);
          }
        }
      }
      break;
    case 0xb:
      pCVar28 = (this_ptr->base).victim;
      if (pCVar28 == (CCharacter *)0x0) {
LAB_004c3569:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCVar7,1,1);
      }
      else {
        pCVar11 = (*(((pCVar28->base).vtable._uc)->_uc).getGrabber)(pCVar28);
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
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)pCVar7,1,1);
          }
        }
      }
      break;
    case 0xc:
      pCVar28 = (this_ptr->base).victim;
      if ((pCVar28 == (CCharacter *)0x0) ||
         (pCVar11 = (*(((pCVar28->base).vtable._uc)->_uc).getGrabber)(pCVar28),
         pCVar11 != (CDemonActor *)0x0)) goto LAB_004c3569;
      in_stack_fffffb24 = (char *)0x3f000000;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.5);
      iVar5 = this_ptr->part_indices[1];
      (this_ptr->base).attack_cooldown = fStack_14;
      if ((this_ptr->base).base.model.part_data.visibility_flags[iVar5] != 0) {
        fStack_60 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                              ((CMotionController *)pCVar7);
        dStack_a8 = (double)fStack_60;
        in_stack_fffffb24 = (char *)pCVar7;
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
            fVar27 = 0.4;
            core_xform_cpp_transformVector3x4_FUN_00591530
                      ((CVector3f *)&DAT_01cb81c8,
                       (CMatrix3x4f *)
                       (this_ptr->base).base.model.bone_transform.bone_model_matrices[_DAT_01cb8220]
                       .m,&CStack_248);
            pCVar25 = &CStack_290;
            CStack_290.x = CStack_248.x;
            *(uint *)((int)&CStack_290 + (uint)bVar20 * -8 + 4) =
                 *(uint *)((int)&CStack_248 + (uint)bVar20 * -8 + 4);
            *(uint *)((int)&CStack_290 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                 *(uint *)((int)&CStack_248 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                      ((CDemonActor *)this_ptr,pCVar25,&CStack_f8);
            pCVar25 = &CStack_284;
            CStack_284.x = CStack_f8.x;
            *(uint *)((int)&CStack_284 + (uint)bVar20 * -8 + 4) =
                 *(uint *)((int)&CStack_f8 + (uint)bVar20 * -8 + 4);
            pCVar7 = this_ptr;
            *(uint *)((int)&CStack_284 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                 *(uint *)((int)&CStack_f8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            iVar5 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                              (&pCVar7->base,pCVar25,fVar27,(SDamageInfo *)in_stack_fffffb24);
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
        dVar23 = round((double)(fStack_14 * (float)_DAT_005d90ff));
        this_ptr->burp_timer = (int)ROUND(dVar23);
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
      fVar27 = 0.5235988;
      pCVar24 = (CVector3f *)0x40400000;
      fStack_35c = 0.0;
      fStack_354 = fStack_28;
      acStack_358[0] = '\0';
      acStack_358[1] = '\0';
      acStack_358[2] = '\0';
      acStack_358[3] = '\0';
      pCVar28 = (this_ptr->base).victim;
      pCVar10 = (*((pCVar28->base).vtable._ub)->getPathMap)(&pCVar28->base);
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                (&((this_ptr->base).victim)->model,0,&CStack_320);
      CStack_26c.x = CStack_320.x;
      *(uint *)((int)&CStack_26c + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_320 + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_26c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_320 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                (&((this_ptr->base).victim)->base,&CStack_26c,&CStack_194);
      pCVar25 = &CStack_2c0;
      CStack_2c0.x = CStack_194.x;
      *(uint *)((int)&CStack_2c0 + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_194 + (uint)bVar20 * -8 + 4);
      pCVar7 = this_ptr;
      *(uint *)((int)&CStack_2c0 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_194 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)pCVar7,pCVar25,pCVar10,pCVar24,fVar27,
                         (float)in_stack_fffffb24);
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
    pCVar28 = (this_ptr->base).victim;
    if ((pCVar28 != (CCharacter *)0x0) &&
       (pCVar7 = (CGhoul *)(*(((pCVar28->base).vtable._uc)->_uc).getGrabber)(pCVar28),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_00423a10(this_ptr);
    pvStack_134 = (void *)((this_ptr->base).base.velocity.x * delta_time);
    afStack_130[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_130[1] = (this_ptr->base).base.velocity.z * delta_time;
    pvStack_1dc = pvStack_134;
    apvStack_1d8[(uint)bVar20 * -2] = (void *)afStack_130[(uint)bVar20 * -2];
    apvStack_1d8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
         (void *)afStack_130[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    pCVar25 = &(this_ptr->base).base.position_delta;
    fStack_1d0 = (float)pvStack_1dc + pCVar25->x;
    aUStack_1cc[0] = (UActorVTable)((float)apvStack_1d8[0] + (this_ptr->base).base.position_delta.y)
    ;
    aUStack_1cc[1] = (UActorVTable)((float)apvStack_1d8[1] + (this_ptr->base).base.position_delta.z)
    ;
    fStack_ec = fStack_1d0;
    (&UStack_e8)[(uint)bVar20 * -2] = aUStack_1cc[(uint)bVar20 * -2];
    (&UStack_e8)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
         aUStack_1cc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    pCVar24 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCStack_1c4 = (CMotionList *)(fStack_ec + pCVar24->x);
    afStack_1c0[0] = (float)UStack_e8 + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_1c0[1] = fStack_e4 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_230.x = (float)pCStack_1c4;
    *(float *)((int)&CStack_230 + (uint)bVar20 * -8 + 4) = afStack_1c0[(uint)bVar20 * -2];
    *(float *)((int)&CStack_230 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
         afStack_1c0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar25->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar27 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar27;
    pCVar24->x = fVar27;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00423a60((CCharacter *)this_ptr,&CStack_230);
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(this_ptr_00);
  dStack_b8 = (double)this_ptr->flinch_blend_weight;
  if (0.0 < dStack_b8) {
    fStack_6c = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00503f50
                          (&this_ptr_00->base,this_ptr->flinch_motion_index,
                           1.0 - this_ptr->flinch_blend_weight);
    fVar27 = 1.0 - this_ptr->flinch_blend_weight;
    fStack_68 = 1.0 - fVar27 * fVar27 * fVar27;
    fStack_14 = fStack_6c;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
              (this_ptr_00,this_ptr->flinch_motion_index,fStack_6c,fStack_68,_DAT_01cb8240,
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
    fVar27 = this_ptr->flinch_blend_weight - delta_time / _DAT_005f78cc;
    this_ptr->flinch_blend_weight = fVar27;
    if (fVar27 < 0.0) {
      this_ptr->flinch_blend_weight = 0.0;
    }
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  if (((float)_DAT_005d916f < ABS((this_ptr->base).base.turn_angle_accumulator)) ||
     (fVar27 = (this_ptr->base).base.position_delta.y,
     fVar26 = (this_ptr->base).base.position_delta.x, fVar1 = (this_ptr->base).base.position_delta.z
     , (float)_DAT_005d916f < SQRT(fVar1 * fVar1 + fVar26 * fVar26 + fVar27 * fVar27))) {
    iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70(0x0264B290,this_ptr->sfx_handle);
    if (iVar5 == 0) {
      _sprintf(&stack0xfffffb24,"ghoul-walk-?.wav *%f");
      uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,&stack0xfffffb24);
      this_ptr->sfx_handle = uVar13;
    }
  }
  else {
    core_sound_cpp_CSound_killSound_FUN_0055af80(0x0264B290,this_ptr->sfx_handle);
  }
  if ((this_ptr->base).pool_me == 0) {
    iVar5 = this_ptr->part_indices[9];
    if ((this_ptr->base).base.model.part_data.visibility_flags[iVar5] == 0) {
      fVar27 = 0.5;
      iVar9 = _DAT_01cb8244;
    }
    else {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_00427060
                ((CCharacter *)this_ptr,this_ptr->part_indices[0],_DAT_01cb8230,0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_00427060
                  ((CCharacter *)this_ptr,this_ptr->part_indices[1],_DAT_01cb8228,0.2);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_00427060
                ((CCharacter *)this_ptr,this_ptr->part_indices[2],_DAT_01cb8234,0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_00427060
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],_DAT_01cb822c,0.2);
      }
      fVar27 = 0.7;
      iVar5 = this_ptr->part_indices[10];
      iVar9 = _DAT_01cb821c;
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427130
              ((CCharacter *)this_ptr,iVar5,iVar9,fVar27);
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_00426f30((CCharacter *)this_ptr);
  }
  if ((this_ptr->dark_waypoint != (CDemonActor *)0x0) && (fStack_34 == 2.38221e-44)) {
    fStack_278 = (this_ptr->base).base.base.location.position.x - (this_ptr->prev_position).x;
    afStack_274[0] = (this_ptr->base).base.base.location.position.y - (this_ptr->prev_position).y;
    afStack_274[1] = (this_ptr->base).base.base.location.position.z - (this_ptr->prev_position).z;
    fStack_164 = fStack_278;
    (&fStack_160)[(uint)bVar20 * -2] = afStack_274[(uint)bVar20 * -2];
    (&fStack_160)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
         afStack_274[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    if (delta_time * (float)_DAT_005d910f <=
        SQRT((float)pSStack_15c * (float)pSStack_15c + fStack_164 * fStack_164)) {
      this_ptr->stuck_timer = 1.0;
    }
    else {
      fVar27 = this_ptr->stuck_timer - delta_time;
      this_ptr->stuck_timer = fVar27;
      if (fVar27 < 0.0) {
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
