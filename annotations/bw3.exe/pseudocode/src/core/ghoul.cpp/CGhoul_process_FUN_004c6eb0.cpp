// Name: core_ghoul.cpp_CGhoul_process_FUN_004c6eb0
// Address: 004c6eb0
// Address Range: [[004c6eb0, 004c8c89]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004c6eb0(CGhoul *this_ptr,float delta_time)

#include "nocturne.h"

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
  float afStackY_135c [27];
  CDemonActor *apCStackY_12f0 [9];
  float afStackY_12cc [9];
  CDemonActor *apCStackY_12a8 [6];
  float afStackY_1290 [45];
  CPlatform *apCStackY_11dc [3];
  float afStackY_11d0 [822];
  CVector3f *pCVar24;
  CVector3f *pCVar25;
  CGore *this_ptr_01;
  float fVar26;
  char *in_stack_fffffb28;
  float fVar27;
  CCharacter *in_stack_fffffb30;
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
  float fStack_374;
  float afStack_370 [4];
  CPlatform *pCStack_360;
  CVector3f CStack_35c;
  float fStack_350;
  float afStack_34c [4];
  float fStack_33c;
  CVector3f CStack_338;
  CVector3f CStack_32c;
  CVector3f CStack_320;
  CVector3f CStack_314;
  float fStack_308;
  byte auStack_304 [12];
  CDemonActor *apCStack_2f8 [2];
  CVector3f CStack_2f0;
  CMotionList *pCStack_2e4;
  char acStack_2e0 [4];
  float afStack_2dc [4];
  float fStack_2cc;
  byte auStack_2c8 [12];
  CDemonActor *apCStack_2bc [2];
  CVector3f CStack_2b4;
  CMotionList *pCStack_2a8;
  float afStack_2a4 [2];
  CVector3f CStack_29c;
  CVector3f CStack_290;
  CVector3f CStack_284;
  CVector3f CStack_278;
  CVector3f CStack_26c;
  CVector3f CStack_260;
  CVector3f CStack_254;
  float fStack_248;
  float afStack_244 [2];
  CVector3f CStack_23c;
  float fStack_230;
  float afStack_22c [2];
  CVector3f CStack_224;
  CVector3f CStack_218;
  CVector3f CStack_20c;
  float fStack_200;
  float afStack_1fc [4];
  CPlatform *pCStack_1ec;
  CVector3f CStack_1e8;
  float fStack_1dc;
  float afStack_1d8 [2];
  CVector3f CStack_1d0;
  float fStack_1c4;
  float afStack_1c0 [4];
  float fStack_1b0;
  CVector3f CStack_1ac;
  CVector3f CStack_1a0;
  CVector3f CStack_194;
  CVector3f CStack_188;
  CVector3f CStack_17c;
  CVector3f CStack_170;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  CVector3f CStack_158;
  CVector3f CStack_14c;
  CVector3f CStack_140;
  float fStack_134;
  float afStack_130 [2];
  CVector3f CStack_128;
  CVector3f CStack_11c;
  CVector3f CStack_110;
  float fStack_104;
  float afStack_100 [2];
  CVector3f CStack_f8;
  CVector3f CStack_ec;
  CVector3f CStack_e0;
  CVector3f CStack_d4;
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
  fStack_94 = delta_time * (this_ptr->base).speed;
  pCStack_18 = (CGhoul *)&(this_ptr->base).base.model;
switchD_004c795a_caseD_e:
  if (0.0 < fStack_94) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)pCStack_18,&fStack_94);
    switch(iVar5) {
    case 5:
      pCVar28 = (this_ptr->base).victim;
      fStack_1c = 1.4013e-45;
      if ((pCVar28 != (CCharacter *)0x0) &&
         (EVar8 = (*(((pCVar28->base).vtable._uc)->_uc).getDeathState)(pCVar28),
         EVar8 == DEATH_STATE_ALIVE)) {
        in_stack_fffffb28 = (char *)(this_ptr->base).victim;
        pCVar11 = (*(((((CGhoul *)in_stack_fffffb28)->base).base.base.vtable._uc)->_uc).getGrabber)
                            ((CCharacter *)in_stack_fffffb28);
        if ((pCVar11 == (CDemonActor *)0x0) &&
           (pCVar28 = (this_ptr->base).victim, in_stack_fffffb28 = (char *)this_ptr,
           iVar5 = (*(((pCVar28->base).vtable._uc)->_uc).canBeGrabbed)
                             (pCVar28,(CDemonActor *)this_ptr,0), iVar5 != 0)) {
          fStack_64 = 0x40200000;
          CStack_20c.x = 0.0;
          CStack_20c.y = 0.0;
          CStack_20c.z = 0x40200000;
          in_stack_fffffb30 = (CCharacter *)0x4c7412;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,&CStack_20c,&CStack_1e8);
          pCStack_2a8 = (CMotionList *)CStack_1e8.x;
          afStack_2a4[(uint)bVar20 * -2] = *(float *)((int)&CStack_1e8 + (uint)bVar20 * -8 + 4);
          afStack_2a4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
               *(float *)((int)&CStack_1e8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          pCVar28 = (this_ptr->base).victim;
          fVar27 = (float)pCStack_2a8 - (pCVar28->base).location.position.x;
          fVar26 = afStack_2a4[1] - (pCVar28->base).location.position.z;
          if (1.0 < SQRT(fVar26 * fVar26 + fVar27 * fVar27)) {
            fStack_1c = 0.0;
          }
          pCVar28 = (this_ptr->base).victim;
          if ((ABS(afStack_2a4[0] - (pCVar28->base).location.position.y) <= (float)_DAT_005c42bd) &&
             (((fStack_1c == 0.0 ||
               (iVar5 = (*(((pCVar28->base).vtable._uc)->_uc).getGrabbed)
                                  (pCVar28,(CDemonActor *)this_ptr,0), in_stack_fffffb30 = pCVar28,
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
      pCVar28 = (this_ptr->base).victim;
      if (pCVar28 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)pCStack_18,1,1);
      }
      else {
        pCVar7 = (CGhoul *)(*(((pCVar28->base).vtable._uc)->_uc).getGrabber)(pCVar28);
        if (pCVar7 == this_ptr) {
          pCVar28 = (this_ptr->base).victim;
          EVar8 = (*(((pCVar28->base).vtable._uc)->_uc).getDeathState)(pCVar28);
          if (EVar8 == DEATH_STATE_ALIVE) {
            pCVar28 = (this_ptr->base).victim;
            in_stack_fffffb28 = (char *)0x4c7519;
            (*((pCVar28->base).vtable._ub)->getBoundingBox)
                      (&pCVar28->base,(CBoundingBox3D *)in_stack_fffffb30);
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
            CStack_14c.y = fVar27 * (float)_DAT_005c430d + CStack_14c.y;
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_478);
            SStack_478.damage_amount =
                 core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(15.0,25.0);
            fStack_14 = SStack_478.damage_amount;
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                      (&((this_ptr->base).victim)->base,&CStack_14c,&CStack_d4);
            pCStack_2e4 = (CMotionList *)CStack_d4.x;
            *(uint *)(acStack_2e0 + (uint)bVar20 * -8) =
                 *(uint *)((int)&CStack_d4 + (uint)bVar20 * -8 + 4);
            afStack_2dc[(uint)bVar20 * -2 + (uint)bVar20 * -2] =
                 *(float *)((int)&CStack_d4 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            if (&SStack_478.impact_direction != (CVector3f *)&pCStack_2e4) {
              SStack_478.impact_direction.x = (float)pCStack_2e4;
              SStack_478.impact_direction.y = (float)acStack_2e0;
              SStack_478.impact_direction.z = afStack_2dc[0];
            }
            SStack_478.attacker = (CDemonActor *)this_ptr;
            SStack_478.wielder = (CDemonActor *)this_ptr;
            pCVar28 = (this_ptr->base).victim;
            (*(((pCVar28->base).vtable._uc)->_uc).processDamage)(pCVar28,&SStack_478);
            dStack_c8 = (double)SStack_478.damage_amount;
            if (0.0 < dStack_c8) {
              EVar29 = 0x4c763f;
              dVar23 = round(dStack_c8 * _DAT_005c4315 * _DAT_005c4305);
              fStack_84 = (float)(int)ROUND(dVar23);
              in_stack_fffffb28 = &g_CGorePtr->singleton;
              core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                        (g_CGorePtr,&CStack_14c,(CVector3f *)0x0,(int)fStack_84,EVar29);
            }
            pCVar28 = (this_ptr->base).victim;
            if (pCVar28->hit_points <= 0.0) {
              (*(((pCVar28->base).vtable._uc)->_uc).releaseFromGrab)(pCVar28);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)pCStack_18,1,1);
            }
            in_stack_fffffb30 = (CCharacter *)0x4c76a2;
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
          }
          else {
            pCVar28 = (this_ptr->base).victim;
            (*(((pCVar28->base).vtable._uc)->_uc).releaseFromGrab)(pCVar28);
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
      iVar9 = _DAT_01d22da4;
      if (iVar5 == 0xc) {
        iVar9 = _DAT_01d22da8;
      }
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                ((CDeformableModelInstance *)pCStack_18,iVar9,&CStack_188);
      pCVar25 = &CStack_110;
      CStack_110.x = CStack_188.x;
      *(uint *)((int)&CStack_110 + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_188 + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_110 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_188 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar25,&CStack_ec);
      fVar26 = 12.0;
      fVar27 = 8.0;
      CStack_1ac.x = CStack_ec.x;
      *(uint *)((int)&CStack_1ac + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_ec + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_1ac + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_ec + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar27,fVar26);
      EVar29 = 0x4c7756;
      dVar23 = round((double)(fStack_14 * (float)_DAT_005c4305));
      fStack_70 = (float)(int)ROUND(dVar23);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                (g_CGorePtr,&CStack_1ac,(CVector3f *)0x0,(int)fStack_70,EVar29);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-dig-?.wav @1.3");
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
                ((CDeformableModelInstance *)pCStack_18);
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                ((CDeformableModelInstance *)pCStack_18,_DAT_01d22da0,&CStack_26c);
      pCVar25 = &CStack_35c;
      CStack_35c.x = CStack_26c.x;
      *(uint *)((int)&CStack_35c + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_26c + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_35c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_26c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar25,&CStack_338);
      fVar26 = 12.0;
      fVar27 = 8.0;
      CStack_140.x = CStack_338.x;
      *(uint *)((int)&CStack_140 + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_338 + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_140 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_338 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar27,fVar26);
      EVar29 = 0x4c780a;
      dVar23 = round((double)(fStack_14 * (float)_DAT_005c4305));
      fStack_7c = (float)(int)ROUND(dVar23);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                (g_CGorePtr,&CStack_140,(CVector3f *)0x0,(int)fStack_7c,EVar29);
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
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                ((CDeformableModelInstance *)pCStack_18,_DAT_01d22da0,(CVector3f *)(auStack_304 + 8)
                );
      pCVar25 = &CStack_320;
      CStack_320.x = (float)auStack_304._8_4_;
      *(CDemonActor **)((int)&CStack_320 + (uint)bVar20 * -8 + 4) = apCStack_2f8[(uint)bVar20 * -2];
      *(CDemonActor **)((int)&CStack_320 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           apCStack_2f8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar25,&CStack_2f0);
      fVar26 = 12.0;
      fVar27 = 8.0;
      CStack_32c.x = CStack_2f0.x;
      *(uint *)((int)&CStack_32c + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_2f0 + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_32c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_2f0 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar27,fVar26);
      EVar29 = 0x4c78bd;
      dVar23 = round((double)(fStack_14 * (float)_DAT_005c4305));
      fStack_98 = (float)(int)ROUND(dVar23);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                (g_CGorePtr,&CStack_32c,(CVector3f *)0x0,(int)fStack_98,EVar29);
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
  fStack_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                        ((CMotionController *)pCStack_18,1);
  fVar27 = (this_ptr->base).speed;
  dStack_a8 = (double)delta_time;
  (this_ptr->base).base.walk_step_speed =
       fStack_14 * (float)_DAT_005c42ad * delta_time * (this_ptr->base).speed;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00434850
            ((CCharacter *)this_ptr,delta_time * fVar27);
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)pCStack_18);
  fStack_34 = (float)pSVar6->state_index;
  if (fStack_34 == 2.38221e-44) {
    fVar27 = (this_ptr->base).speed;
    fVar21 = (float10)_DAT_005c42b5;
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)_DAT_005c42bd;
    (this_ptr->base).base.walk_step_speed = (float)((float10)dStack_a8 * fVar21 * (float10)fVar27);
  }
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    fStack_28 = -1.0;
    pCVar7 = (CGhoul *)&(this_ptr->base).base.model;
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)pCVar7);
    switch(pSVar6->state_index) {
    case 0:
      if (this_ptr->stun_timer <= 0.0) {
        pCVar11 = this_ptr->dark_waypoint;
        if (pCVar11 == (CDemonActor *)0x0) {
          iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
          if (iVar5 != 0) goto LAB_004c7fd6;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CCharacter *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&(this_ptr->base).base.model.base,1,1);
            iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[0]);
            if (iVar5 != 0) {
              in_stack_fffffb28 = (char *)0x4c8044;
              iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[1]);
              if (iVar5 != 0) break;
            }
            in_stack_fffffb28 = (char *)this_ptr;
            uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"ghoul-alert-?.wav");
            this_ptr->sfx_handles[0] = uVar13;
          }
        }
        else {
          fStack_230 = (pCVar11->location).position.x -
                       (this_ptr->base).base.base.location.position.x;
          afStack_22c[0] =
               (pCVar11->location).position.y - (this_ptr->base).base.base.location.position.y;
          afStack_22c[1] =
               (pCVar11->location).position.z - (this_ptr->base).base.base.location.position.z;
          fStack_350 = fStack_230;
          afStack_34c[(uint)bVar20 * -2] = afStack_22c[(uint)bVar20 * -2];
          afStack_34c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
               afStack_22c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          afStack_34c[2] = fStack_350;
          afStack_34c[(uint)bVar20 * -2 + 3] = afStack_34c[(uint)bVar20 * -2];
          afStack_34c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
               afStack_34c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          fStack_90 = fStack_33c * fStack_33c +
                      afStack_34c[2] * afStack_34c[2] + afStack_34c[3] * afStack_34c[3];
          if (SQRT(fStack_90) < (float)_DAT_005c42bd) {
            fVar27 = (this_ptr->base).base.hit_points + delta_time;
            this_ptr->heal_timer = this_ptr->heal_timer - delta_time;
            (this_ptr->base).base.hit_points = fVar27;
            if ((float)_DAT_005c42fd < fVar27) {
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
        fStack_24 = (float)(uint)((this_ptr->base).base.model.part_data.visibility_flags
                                  [this_ptr->part_indices[1]] != 0);
        if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0)
        {
          fStack_24 = (float)((int)fStack_24 + 1);
        }
        iVar5 = (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) + 0x10c))();
        pCVar4 = g_CGamePtr;
        if (iVar5 == 0) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          pCVar28 = (this_ptr->base).victim;
          if (pCVar28 == (CCharacter *)0x0) {
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
            fStack_248 = (pCVar28->base).location.position.x -
                         (this_ptr->base).base.base.location.position.x;
            afStack_244[0] =
                 (pCVar28->base).location.position.y -
                 (this_ptr->base).base.base.location.position.y;
            afStack_244[1] =
                 (pCVar28->base).location.position.z -
                 (this_ptr->base).base.base.location.position.z;
            fStack_308 = fStack_248;
            *(float *)(auStack_304 + (uint)bVar20 * -8) = afStack_244[(uint)bVar20 * -2];
            apCStack_2f8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + -2] =
                 (CDemonActor *)afStack_244[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            auStack_304._0_4_ = 0.0;
            if ((((this_ptr->base).base.hit_points < (float)_DAT_005c42e5) && (0 < (int)fStack_24))
               && (this_ptr->dark_waypoint == (CDemonActor *)0x0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004c6c80(this_ptr,delta_time);
            }
            pCVar11 = this_ptr->dark_waypoint;
            in_stack_fffffb28 = (char *)&(this_ptr->base).base.model;
            if (pCVar11 == (CDemonActor *)0x0) {
              fVar27 = 0.17453292;
              pCVar7 = (CGhoul *)0x3f800000;
              fStack_164 = 0.0;
              fStack_15c = 0x40200000;
              fStack_160 = 0.0;
              pCVar28 = (this_ptr->base).victim;
              pCVar10 = (*((pCVar28->base).vtable._ub)->getPathMap)(&pCVar28->base);
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                ((CCharacter *)this_ptr,
                                 &(((this_ptr->base).victim)->base).location.position,pCVar10,
                                 (CVector3f *)pCVar7,fVar27,(float)in_stack_fffffb30);
              if (iVar5 < 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)in_stack_fffffb28,0,1);
              }
              else {
                in_stack_fffffb28 = (char *)pCVar7;
                if (((0 < iVar5) && (0 < (int)fStack_24)) &&
                   (((this_ptr->base).attack_cooldown <= 0.0 &&
                    ((pCVar28 = (this_ptr->base).victim,
                     pCVar11 = (*(((pCVar28->base).vtable._uc)->_uc).getGrabber)(pCVar28),
                     in_stack_fffffb28 = (char *)pCVar7, pCVar11 == (CDemonActor *)0x0 &&
                     (this_ptr->flinch_blend_weight <= 0.0)))))) {
                  fStack_44 = SQRT((float)auStack_304._4_4_ * (float)auStack_304._4_4_ +
                                   fStack_308 * fStack_308 +
                                   (float)auStack_304._0_4_ * (float)auStack_304._0_4_);
                  fStack_2c = 0.0;
                  fStack_40 = 0.0;
                  fStack_48 = 0.0;
                  if ((this_ptr->base).base.model.part_data.visibility_flags
                      [this_ptr->part_indices[3]] != 0) {
                    fStack_2c = (1.0 - ABS(fStack_44 - 0x4059999A) / 0x4059999A) *
                                (float)_DAT_005c42ed;
                  }
                  if ((this_ptr->base).base.model.part_data.visibility_flags
                      [this_ptr->part_indices[1]] != 0) {
                    fStack_40 = (1.0 - ABS(fStack_44 - 0x40200000) / 0x40200000) *
                                (float)_DAT_005c42f5;
                  }
                  pCVar28 = (this_ptr->base).victim;
                  in_stack_fffffb28 = (char *)0x4c8405;
                  fStack_3c = fStack_44;
                  iVar5 = (*(((pCVar28->base).vtable._uc)->_uc).canBeGrabbed)
                                    (pCVar28,(CDemonActor *)this_ptr,0);
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
              fVar27 = 0.0;
              pCVar7 = (CGhoul *)0x40400000;
              pCVar10 = (*((pCVar11->vtable)._ub)->getPathMap)(pCVar11);
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                ((CCharacter *)this_ptr,
                                 &(this_ptr->dark_waypoint->location).position,pCVar10,
                                 (CVector3f *)pCVar7,fVar27,(float)in_stack_fffffb30);
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
                iVar5 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
                this_ptr->pending_eat_state = (iVar5 == 0) + 0xd;
                g_CGamePtr->player_hit_flag = 1;
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
              fVar26 = 0.08726646;
              fVar27 = 0.5;
              CStack_29c.z = (float)pCStack_38;
              pCVar25 = &CStack_29c;
              CStack_29c.x = 0.0;
              iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              CStack_29c.y = 0.0;
              pCVar10 = (CPathMap *)(**(code **)(*(int *)(iVar5 + 0x154) + 0xc4))(iVar5);
              core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                        ((CDeformableModelInstance *)
                         (*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x158),0,&CStack_17c);
              pCVar24 = &CStack_218;
              CStack_218.x = CStack_17c.x;
              *(uint *)((int)&CStack_218 + (uint)bVar20 * -8 + 4) =
                   *(uint *)((int)&CStack_17c + (uint)bVar20 * -8 + 4);
              *(uint *)((int)&CStack_218 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                   *(uint *)((int)&CStack_17c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                        (*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04),pCVar24,&CStack_170);
              pCVar24 = &CStack_290;
              CStack_290.x = CStack_170.x;
              *(uint *)((int)&CStack_290 + (uint)bVar20 * -8 + 4) =
                   *(uint *)((int)&CStack_170 + (uint)bVar20 * -8 + 4);
              pCVar7 = this_ptr;
              *(uint *)((int)&CStack_290 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                   *(uint *)((int)&CStack_170 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                ((CCharacter *)pCVar7,pCVar24,pCVar10,pCVar25,fVar27,fVar26);
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
      pCVar28 = (this_ptr->base).victim;
      if (pCVar28 == (CCharacter *)0x0) {
LAB_004c7fd6:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,1,1);
      }
      else {
        pCVar11 = (*(((pCVar28->base).vtable._uc)->_uc).getGrabber)(pCVar28);
        if (pCVar11 == (CDemonActor *)0x0) {
          in_stack_fffffb28 = (char *)0x3f000000;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.2,0.5);
          iVar5 = this_ptr->part_indices[3];
          (this_ptr->base).attack_cooldown = fStack_14;
          if ((this_ptr->base).base.model.part_data.visibility_flags[iVar5] != 0) {
            fStack_5c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                  ((CMotionController *)pCVar7);
            dStack_b8 = (double)fStack_5c;
            in_stack_fffffb28 = (char *)pCVar7;
            fStack_14 = fStack_5c;
            if ((fStack_5c <= (float)_DAT_005c42cd) && (fStack_28 = 0x4059999A, 1.0 <= dStack_b8))
            {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_43c);
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
              SStack_43c.damage_amount = fStack_14;
              if (this_ptr->is_berserk != 0) {
                SStack_43c.damage_amount = fStack_14 * (float)_DAT_005c42cd;
              }
              in_stack_fffffb28 = (char *)&SStack_43c;
              SStack_43c.attacker = (CDemonActor *)this_ptr;
              SStack_43c.wielder = (CDemonActor *)this_ptr;
              fVar27 = 0.2;
              core_xform_cpp_transformVector3x4_FUN_00583260
                        ((CVector3f *)&DAT_01d22d58,
                         (CMatrix3x4f *)
                         (this_ptr->base).base.model.bone_transform.bone_model_matrices
                         [_DAT_01d22da8].m,&CStack_11c);
              pCVar25 = &CStack_254;
              CStack_254.x = CStack_11c.x;
              *(uint *)((int)&CStack_254 + (uint)bVar20 * -8 + 4) =
                   *(uint *)((int)&CStack_11c + (uint)bVar20 * -8 + 4);
              *(uint *)((int)&CStack_254 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                   *(uint *)((int)&CStack_11c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                        ((CDemonActor *)this_ptr,pCVar25,&CStack_128);
              pCVar25 = &CStack_1d0;
              CStack_1d0.x = CStack_128.x;
              *(uint *)((int)&CStack_1d0 + (uint)bVar20 * -8 + 4) =
                   *(uint *)((int)&CStack_128 + (uint)bVar20 * -8 + 4);
              pCVar7 = this_ptr;
              *(uint *)((int)&CStack_1d0 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                   *(uint *)((int)&CStack_128 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
              iVar5 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0
                                (&pCVar7->base,pCVar25,fVar27,(SDamageInfo *)in_stack_fffffb28);
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
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  ((CDeformableModelInstance *)pCVar7,0,(CVector3f *)(auStack_2c8 + 8));
        pCVar25 = &CStack_194;
        CStack_194.x = (float)auStack_2c8._8_4_;
        *(CDemonActor **)((int)&CStack_194 + (uint)bVar20 * -8 + 4) =
             apCStack_2bc[(uint)bVar20 * -2];
        *(CDemonActor **)((int)&CStack_194 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
             apCStack_2bc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar25,&CStack_f8);
        pCVar25 = &CStack_1a0;
        EVar29 = BLOOD_TYPE_RED;
        CStack_1a0.x = CStack_f8.x;
        *(uint *)((int)&CStack_1a0 + (uint)bVar20 * -8 + 4) =
             *(uint *)((int)&CStack_f8 + (uint)bVar20 * -8 + 4);
        this_ptr_01 = g_CGorePtr;
        *(uint *)((int)&CStack_1a0 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
             *(uint *)((int)&CStack_f8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_01,pCVar25,EVar29);
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
          iVar9 = 0xf;
          iVar5 = 0x4c7be5;
          dVar23 = round((double)(fStack_14 * (float)_DAT_005c42c5));
          this_ptr->spasm_timer = (int)ROUND(dVar23);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,iVar5,iVar9);
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
            pCVar28 = (this_ptr->base).victim;
            if (pCVar28 != (CCharacter *)0x0) {
              afStack_2dc[1] =
                   (this_ptr->base).base.base.location.position.x -
                   (pCVar28->base).location.position.x;
              afStack_2dc[2] =
                   (this_ptr->base).base.base.location.position.y -
                   (pCVar28->base).location.position.y;
              afStack_2dc[3] =
                   (this_ptr->base).base.base.location.position.z -
                   (pCVar28->base).location.position.z;
              afStack_1fc[2] = afStack_2dc[1];
              afStack_1fc[(uint)bVar20 * -2 + 3] = afStack_2dc[(uint)bVar20 * -2 + 2];
              (&pCStack_1ec)[(uint)bVar20 * -2 + (uint)bVar20 * -2] =
                   (CPlatform *)afStack_2dc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 3];
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
          fStack_20 = (this_ptr->base).base.collision_cylinder_top;
          if (fStack_20 < (this_ptr->base).base.collision_cylinder_bottom) {
            fStack_20 = (this_ptr->base).base.model.bounding_box.max.y;
          }
          if (fStack_20 < (this_ptr->base).base.collision_cylinder_bottom) {
            fStack_20 = (this_ptr->base).base.collision_cylinder_bottom + (float)_DAT_005c42d5;
          }
          fVar27 = 0.0;
          do {
            fStack_8c = (float)(int)fVar27 * _DAT_005c431d * _DAT_005c4321;
            fStack_14 = fVar27;
            core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
            fVar21 = (float10)fcos((float10)fStack_8c);
            fVar22 = (float10)fsin((float10)fStack_8c);
            fStack_30 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_0053de10
                                  (g_CDemonSetPtr,(this_ptr->base).base.base.location.position.x,
                                   (this_ptr->base).base.base.location.position.z,
                                   (float)(fVar22 * (float10)_DAT_005c4325),
                                   (float)(fVar21 * (float10)_DAT_005c4325),
                                   (this_ptr->base).base.collision_cylinder_radius,
                                   (this_ptr->base).base.base.location.position.y +
                                   (this_ptr->base).base.collision_cylinder_bottom,
                                   (this_ptr->base).base.base.location.position.y + fStack_20);
            fStack_14 = fStack_30;
            core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
            if (fStack_30 < 1.0) break;
            fVar27 = (float)((int)fVar27 + 1);
          } while ((int)fVar27 < 4);
          if ((int)fVar27 < 4) {
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
            in_stack_fffffb28 = (char *)0x4c7c1b;
            dVar23 = round((double)(-fStack_14 * _DAT_005c42dd));
            this_ptr->arise_timer = (int)ROUND(dVar23);
          }
        }
      }
      break;
    case 0xb:
      pCVar28 = (this_ptr->base).victim;
      if (pCVar28 == (CCharacter *)0x0) {
LAB_004c887a:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)pCVar7,1,1);
      }
      else {
        pCVar11 = (*(((pCVar28->base).vtable._uc)->_uc).getGrabber)(pCVar28);
        if (pCVar11 == (CDemonActor *)0x0) {
          fStack_28 = 0x40200000;
        }
        else {
          in_stack_fffffb28 = (char *)(this_ptr->base).victim;
          pCVar12 = (CGhoul *)
                    (*(((((CGhoul *)in_stack_fffffb28)->base).base.base.vtable._uc)->_uc).getGrabber
                    )((CCharacter *)in_stack_fffffb28);
          if (pCVar12 != this_ptr) {
            in_stack_fffffb28 = (char *)0x1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)pCVar7,1,1);
          }
        }
      }
      break;
    case 0xc:
      pCVar28 = (this_ptr->base).victim;
      if ((pCVar28 == (CCharacter *)0x0) ||
         (pCVar11 = (*(((pCVar28->base).vtable._uc)->_uc).getGrabber)(pCVar28),
         pCVar11 != (CDemonActor *)0x0)) goto LAB_004c887a;
      in_stack_fffffb28 = (char *)0x3f000000;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.2,0.5);
      iVar5 = this_ptr->part_indices[1];
      (this_ptr->base).attack_cooldown = fStack_14;
      if ((this_ptr->base).base.model.part_data.visibility_flags[iVar5] != 0) {
        fStack_60 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                              ((CMotionController *)pCVar7);
        dStack_b0 = (double)fStack_60;
        in_stack_fffffb28 = (char *)pCVar7;
        fStack_14 = fStack_60;
        if (fStack_60 <= (float)_DAT_005c42cd) {
          fStack_28 = 0x40200000;
          if (1.0 <= dStack_b0) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_400);
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
            SStack_400.damage_amount = fStack_14;
            if (this_ptr->is_berserk != 0) {
              SStack_400.damage_amount = fStack_14 * (float)_DAT_005c42cd;
            }
            in_stack_fffffb28 = (char *)&SStack_400;
            SStack_400.attacker = (CDemonActor *)this_ptr;
            SStack_400.wielder = (CDemonActor *)this_ptr;
            fVar27 = 0.4;
            core_xform_cpp_transformVector3x4_FUN_00583260
                      ((CVector3f *)&DAT_01d22d4c,
                       (CMatrix3x4f *)
                       (this_ptr->base).base.model.bone_transform.bone_model_matrices[_DAT_01d22da4]
                       .m,&CStack_23c);
            pCVar25 = &CStack_284;
            CStack_284.x = CStack_23c.x;
            *(uint *)((int)&CStack_284 + (uint)bVar20 * -8 + 4) =
                 *(uint *)((int)&CStack_23c + (uint)bVar20 * -8 + 4);
            *(uint *)((int)&CStack_284 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                 *(uint *)((int)&CStack_23c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                      ((CDemonActor *)this_ptr,pCVar25,&CStack_e0);
            pCVar25 = &CStack_278;
            CStack_278.x = CStack_e0.x;
            *(uint *)((int)&CStack_278 + (uint)bVar20 * -8 + 4) =
                 *(uint *)((int)&CStack_e0 + (uint)bVar20 * -8 + 4);
            pCVar7 = this_ptr;
            *(uint *)((int)&CStack_278 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                 *(uint *)((int)&CStack_e0 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            iVar5 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0
                              (&pCVar7->base,pCVar25,fVar27,(SDamageInfo *)in_stack_fffffb28);
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
      iVar5 = this_ptr->burp_timer - _DAT_01c5fad0;
      this_ptr->burp_timer = iVar5;
      if (iVar5 < 1) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"burp[1,2].wav");
        in_stack_fffffb28 = (char *)0x41700000;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(15.0,30.0);
        dVar23 = round((double)(fStack_14 * (float)_DAT_005c42c5));
        this_ptr->burp_timer = (int)ROUND(dVar23);
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
      fVar27 = 0.5235988;
      pCVar24 = (CVector3f *)0x40400000;
      fStack_2cc = 0.0;
      auStack_2c8._4_4_ = fStack_28;
      auStack_2c8._0_4_ = 0.0;
      pCVar28 = (this_ptr->base).victim;
      pCVar10 = (*((pCVar28->base).vtable._ub)->getPathMap)(&pCVar28->base);
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                (&((this_ptr->base).victim)->model,0,&CStack_314);
      CStack_260.x = CStack_314.x;
      *(uint *)((int)&CStack_260 + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_314 + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_260 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_314 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                (&((this_ptr->base).victim)->base,&CStack_260,&CStack_158);
      pCVar25 = &CStack_2b4;
      CStack_2b4.x = CStack_158.x;
      *(uint *)((int)&CStack_2b4 + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_158 + (uint)bVar20 * -8 + 4);
      pCVar7 = this_ptr;
      *(uint *)((int)&CStack_2b4 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_158 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)pCVar7,pCVar25,pCVar10,pCVar24,fVar27,
                         (float)in_stack_fffffb28);
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
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
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
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    pCVar28 = (this_ptr->base).victim;
    if ((pCVar28 != (CCharacter *)0x0) &&
       (pCVar7 = (CGhoul *)(*(((pCVar28->base).vtable._uc)->_uc).getGrabber)(pCVar28),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_CCharacter_applyGravity_FUN_0042c1e0((CCharacter *)this_ptr,delta_time);
    fStack_200 = (this_ptr->base).base.velocity.x * delta_time;
    afStack_1fc[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_1fc[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_104 = fStack_200;
    afStack_100[(uint)bVar20 * -2] = afStack_1fc[(uint)bVar20 * -2];
    afStack_100[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
         afStack_1fc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    pCVar25 = &(this_ptr->base).base.position_delta;
    fStack_134 = fStack_104 + pCVar25->x;
    afStack_130[0] = afStack_100[0] + (this_ptr->base).base.position_delta.y;
    afStack_130[1] = afStack_100[1] + (this_ptr->base).base.position_delta.z;
    fStack_1c4 = fStack_134;
    afStack_1c0[(uint)bVar20 * -2] = afStack_130[(uint)bVar20 * -2];
    afStack_1c0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
         afStack_130[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    pCVar24 = &(this_ptr->base).base.model.accumulated_root_motion;
    afStack_1c0[2] = fStack_1c4 + pCVar24->x;
    afStack_1c0[3] = afStack_1c0[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_1b0 = afStack_1c0[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_224.x = afStack_1c0[2];
    *(float *)((int)&CStack_224 + (uint)bVar20 * -8 + 4) = afStack_1c0[(uint)bVar20 * -2 + 3];
    *(float *)((int)&CStack_224 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
         afStack_1c0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar25->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar27 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar27;
    pCVar24->x = fVar27;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&CStack_224);
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(this_ptr_00);
  dStack_c0 = (double)this_ptr->flinch_blend_weight;
  if (0.0 < dStack_c0) {
    fStack_6c = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004fca20
                          (&this_ptr_00->base,this_ptr->flinch_motion_index,
                           1.0 - this_ptr->flinch_blend_weight);
    fVar27 = 1.0 - this_ptr->flinch_blend_weight;
    fStack_68 = 1.0 - fVar27 * fVar27 * fVar27;
    fStack_14 = fStack_6c;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
              (this_ptr_00,this_ptr->flinch_motion_index,fStack_6c,fStack_68,_DAT_01d22dc4,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    fVar27 = this_ptr->flinch_blend_weight - delta_time / _DAT_005e0a3c;
    this_ptr->flinch_blend_weight = fVar27;
    if (fVar27 < 0.0) {
      this_ptr->flinch_blend_weight = 0.0;
    }
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  if (((float)_DAT_005c4335 < ABS((this_ptr->base).base.turn_angle_accumulator)) ||
     (fVar27 = (this_ptr->base).base.position_delta.y,
     fVar26 = (this_ptr->base).base.position_delta.x, fVar1 = (this_ptr->base).base.position_delta.z
     , (float)_DAT_005c4335 < SQRT(fVar1 * fVar1 + fVar26 * fVar26 + fVar27 * fVar27))) {
    iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0(0x02CF5680,this_ptr->sfx_handle);
    if (iVar5 == 0) {
      _sprintf(&stack0xfffffb24,"ghoul-walk-?.wav *%f");
      uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,&stack0xfffffb24);
      this_ptr->sfx_handle = uVar13;
    }
  }
  else {
    core_sound_cpp_CSound_killSound_FUN_00560b00(0x02CF5680,this_ptr->sfx_handle);
  }
  if ((this_ptr->base).pool_me == 0) {
    iVar5 = this_ptr->part_indices[9];
    if ((this_ptr->base).base.model.part_data.visibility_flags[iVar5] == 0) {
      fVar27 = 0.5;
      iVar9 = _DAT_01d22dc8;
    }
    else {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042fdc0
                ((CCharacter *)this_ptr,this_ptr->part_indices[0],_DAT_01d22db4,0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042fdc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[1],_DAT_01d22dac,0.2);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042fdc0
                ((CCharacter *)this_ptr,this_ptr->part_indices[2],_DAT_01d22db8,0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042fdc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],_DAT_01d22db0,0.2);
      }
      fVar27 = 0.7;
      iVar5 = this_ptr->part_indices[10];
      iVar9 = _DAT_01d22da0;
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90
              ((CCharacter *)this_ptr,iVar5,iVar9,fVar27);
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_0042fc90((CCharacter *)this_ptr);
  }
  if ((this_ptr->dark_waypoint != (CDemonActor *)0x0) && (fStack_34 == 2.38221e-44)) {
    fStack_1dc = (this_ptr->base).base.base.location.position.x - (this_ptr->prev_position).x;
    afStack_1d8[0] = (this_ptr->base).base.base.location.position.y - (this_ptr->prev_position).y;
    afStack_1d8[1] = (this_ptr->base).base.base.location.position.z - (this_ptr->prev_position).z;
    fStack_374 = fStack_1dc;
    afStack_370[(uint)bVar20 * -2] = afStack_1d8[(uint)bVar20 * -2];
    afStack_370[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
         afStack_1d8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    if (delta_time * (float)_DAT_005c42d5 <=
        SQRT(afStack_370[1] * afStack_370[1] + fStack_374 * fStack_374)) {
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
