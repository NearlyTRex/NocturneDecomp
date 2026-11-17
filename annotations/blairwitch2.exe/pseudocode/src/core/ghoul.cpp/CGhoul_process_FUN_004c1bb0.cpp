// Name: core_ghoul.cpp_CGhoul_process_FUN_004c1bb0
// Address: 004c1bb0
// Address Range: [[004c1bb0, 004c397a]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004c1bb0(CGhoul *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004c1bb0(CGhoul *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  float fVar2;
  EWalkState EVar3;
  CDemonActor_vtable *pCVar4;
  CGame *pCVar5;
  int iVar6;
  SMotion *pSVar7;
  CGhoul *pCVar8;
  int iVar9;
  CPathMap *pCVar10;
  EDeathState EVar11;
  CDemonActor *pCVar12;
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
  float afStackY_135c [920];
  CGore *this_ptr_00;
  float fVar24;
  CVector3f *pCVar25;
  char *in_stack_fffffb24;
  CVector3f *in_stack_fffffb28;
  CVector3f *pCVar26;
  CCharacter *in_stack_fffffb2c;
  CCharacter *pCVar27;
  float fVar28;
  CGhoul *in_stack_fffffb30;
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
  int iStack_35c;
  int iStack_358;
  float fStack_354;
  float fStack_350;
  float afStack_34c [2];
  CVector3f CStack_344;
  CVector3f CStack_338;
  CVector3f CStack_32c;
  CVector3f CStack_320;
  CVector3f CStack_314;
  CVector3f CStack_308;
  CVector3f CStack_2fc;
  CVector3f CStack_2f0;
  float fStack_2e4;
  float afStack_2e0 [2];
  CVector3f CStack_2d8;
  int iStack_2cc;
  int iStack_2c8;
  float fStack_2c4;
  CVector3f CStack_2c0;
  float fStack_2b4;
  float afStack_2b0 [4];
  float fStack_2a0;
  CVector3f CStack_29c;
  CVector3f CStack_290;
  CVector3f CStack_284;
  float fStack_278;
  float afStack_274 [2];
  CVector3f CStack_26c;
  CVector3f CStack_260;
  float fStack_254;
  float afStack_250 [2];
  CVector3f CStack_248;
  CVector3f CStack_23c;
  CVector3f CStack_230;
  float fStack_224;
  float afStack_220 [2];
  CVector3f CStack_218;
  float fStack_20c;
  float afStack_208 [2];
  CVector3f CStack_200;
  CVector3f CStack_1f4;
  CVector3f CStack_1e8;
  float fStack_1dc;
  float afStack_1d8 [4];
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  CVector3f CStack_1b8;
  CVector3f CStack_1ac;
  CVector3f CStack_1a0;
  CVector3f CStack_194;
  CVector3f CStack_188;
  int iStack_17c;
  int iStack_178;
  float fStack_174;
  CVector3f CStack_170;
  float fStack_164;
  float afStack_160 [2];
  CVector3f CStack_158;
  CVector3f CStack_14c;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float afStack_130 [2];
  CVector3f CStack_128;
  CVector3f CStack_11c;
  float fStack_110;
  float afStack_10c [2];
  CVector3f CStack_104;
  CVector3f CStack_f8;
  float fStack_ec;
  float afStack_e8 [2];
  CVector3f CStack_e0;
  float fStack_d4;
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
  float fStack_38;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  float fStack_20;
  int iStack_1c;
  CPathMap *pCStack_18;
  float fStack_14;
  
  bVar20 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_70 = delta_time * (this_ptr->base).speed;
  pCStack_18 = (CPathMap *)&(this_ptr->base).base.model;
switchD_004c2644_caseD_e:
  if (0.0 < fStack_70) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)pCStack_18,&fStack_70);
    switch(iVar6) {
    case 5:
      pCVar27 = (this_ptr->base).victim;
      iStack_1c = 1;
      if ((pCVar27 != (CCharacter *)0x0) &&
         (EVar11 = (*(((pCVar27->base).vtable._uc)->_uc).getDeathState)(pCVar27),
         EVar11 == DEATH_STATE_ALIVE)) {
        in_stack_fffffb24 = (char *)(this_ptr->base).victim;
        pCVar12 = (*(((UActorVTable *)((int)((CPathMap *)in_stack_fffffb24)->height_cache + 0x280))
                     ->_uc->_uc).getGrabber)((CCharacter *)in_stack_fffffb24);
        if (pCVar12 == (CDemonActor *)0x0) {
          in_stack_fffffb28 = (CVector3f *)0x0;
          pCVar27 = (this_ptr->base).victim;
          in_stack_fffffb24 = (char *)this_ptr;
          iVar6 = (*(((pCVar27->base).vtable._uc)->_uc).canBeGrabbed)
                            (pCVar27,(CDemonActor *)this_ptr,0);
          if (iVar6 != 0) {
            fStack_64 = 2.5f;
            CStack_344.x = 0.0;
            CStack_344.y = 0.0;
            CStack_344.z = 2.5f;
            in_stack_fffffb2c = (CCharacter *)0x4c210b;
            in_stack_fffffb30 = this_ptr;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                      ((CDemonActor *)this_ptr,&CStack_344,&CStack_1f4);
            fStack_2b4 = CStack_1f4.x;
            afStack_2b0[(uint)bVar20 * -2] = *(float *)((int)&CStack_1f4 + (uint)bVar20 * -8 + 4);
            afStack_2b0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                 *(float *)((int)&CStack_1f4 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            pCVar27 = (this_ptr->base).victim;
            fVar28 = fStack_2b4 - (pCVar27->base).location.position.x;
            fVar24 = afStack_2b0[1] - (pCVar27->base).location.position.z;
            if (1.0 < SQRT(fVar24 * fVar24 + fVar28 * fVar28)) {
              iStack_1c = 0;
            }
            pCVar27 = (this_ptr->base).victim;
            if (ABS(afStack_2b0[0] - (pCVar27->base).location.position.y) <=
                (float)4) {
              if (iStack_1c != 0) {
                in_stack_fffffb28 = (CVector3f *)0x4c218a;
                in_stack_fffffb30 = this_ptr;
                iVar6 = (*(((pCVar27->base).vtable._uc)->_uc).getGrabbed)
                                  (pCVar27,(CDemonActor *)this_ptr,0);
                in_stack_fffffb2c = pCVar27;
                if (iVar6 == 0) goto LAB_004c2073;
              }
              if (iStack_1c != 0) break;
            }
          }
        }
      }
LAB_004c2073:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)pCStack_18,1,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar6);
      break;
    case 10:
      pCVar27 = (this_ptr->base).victim;
      if (pCVar27 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCStack_18,1,1);
      }
      else {
        pCVar8 = (CGhoul *)(*(((pCVar27->base).vtable._uc)->_uc).getGrabber)(pCVar27);
        if (pCVar8 == this_ptr) {
          pCVar27 = (this_ptr->base).victim;
          EVar11 = (*(((pCVar27->base).vtable._uc)->_uc).getDeathState)(pCVar27);
          if (EVar11 == DEATH_STATE_ALIVE) {
            pCVar27 = (this_ptr->base).victim;
            in_stack_fffffb24 = (char *)0x4c2212;
            (*((pCVar27->base).vtable._ub)->getBoundingBox)
                      (&pCVar27->base,(CBoundingBox3D *)in_stack_fffffb2c);
            puVar15 = auStack_3a4;
            puVar17 = &uStack_38c;
            for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar17 = *puVar15;
              puVar15 = puVar15 + (uint)bVar20 * -2 + 1;
              puVar17 = puVar17 + (uint)bVar20 * -2 + 1;
            }
            fVar28 = fStack_37c - fStack_388;
            pCVar27 = (this_ptr->base).victim;
            puVar15 = (uint *)((int)pCVar27 + (uint)bVar20 * -8 + 0x24);
            CStack_14c.x = (pCVar27->base).location.position.x;
            *(uint *)((int)&CStack_14c + (uint)bVar20 * -8 + 4) = *puVar15;
            *(uint *)((int)&CStack_14c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                 puVar15[(uint)bVar20 * -2 + 1];
            CStack_14c.y = fVar28 * (float)0.69999999999999996 + CStack_14c.y;
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
            pCVar27 = (this_ptr->base).victim;
            in_stack_fffffb28 = (CVector3f *)0x4c22fb;
            (*(((pCVar27->base).vtable._uc)->_uc).processDamage)(pCVar27,&SStack_400);
            dStack_c8 = (double)SStack_400.damage_amount;
            if (0.0 < dStack_c8) {
              EVar29 = 0x4c2329;
              dVar23 = round
                                 (dStack_c8 * 2.5 * 0.25);
              iStack_8c = (int)ROUND(dVar23);
              in_stack_fffffb28 = &CStack_14c;
              in_stack_fffffb24 = &g_CGorePtr->singleton;
              core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                        (g_CGorePtr,in_stack_fffffb28,(CVector3f *)0x0,iStack_8c,EVar29);
            }
            pCVar27 = (this_ptr->base).victim;
            if (pCVar27->hit_points <= 0.0) {
              (*(((pCVar27->base).vtable._uc)->_uc).releaseFromGrab)(pCVar27);
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)pCStack_18,1,1);
            }
            in_stack_fffffb2c = (CCharacter *)0x4c238c;
            in_stack_fffffb30 = this_ptr;
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
          }
          else {
            pCVar27 = (this_ptr->base).victim;
            (*(((pCVar27->base).vtable._uc)->_uc).releaseFromGrab)(pCVar27);
            in_stack_fffffb2c = (CCharacter *)0x1;
            in_stack_fffffb28 = (CVector3f *)0x1;
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
      iVar9 = g_GhoulIndices[1];
      if (iVar6 == 0xc) {
        iVar9 = g_GhoulIndices[2];
      }
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                ((CDeformableModelInstance *)pCStack_18,iVar9,&CStack_1ac);
      pCVar26 = &CStack_128;
      CStack_128.x = CStack_1ac.x;
      *(uint *)((int)&CStack_128 + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_1ac + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_128 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_1ac + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar26,&CStack_e0);
      fVar24 = 12.0;
      fVar28 = 8.0;
      CStack_1e8.x = CStack_e0.x;
      *(uint *)((int)&CStack_1e8 + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_e0 + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_1e8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_e0 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar28,fVar24);
      EVar29 = 0x4c2440;
      dVar23 = round((double)(fStack_14 * (float)0.25));
      iStack_74 = (int)ROUND(dVar23);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (g_CGorePtr,&CStack_1e8,(CVector3f *)0x0,iStack_74,EVar29);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-dig-?.wav @1.3");
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
                ((CDeformableModelInstance *)pCStack_18);
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                ((CDeformableModelInstance *)pCStack_18,g_GhoulIndices[0],&CStack_2d8);
      pCVar26 = &CStack_368;
      CStack_368.x = CStack_2d8.x;
      *(uint *)((int)&CStack_368 + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_2d8 + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_368 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_2d8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar26,&CStack_374);
      fVar24 = 12.0;
      fVar28 = 8.0;
      CStack_314.x = CStack_374.x;
      *(uint *)((int)&CStack_314 + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_374 + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_314 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_374 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar28,fVar24);
      EVar29 = 0x4c24f4;
      dVar23 = round((double)(fStack_14 * (float)0.25));
      iStack_80 = (int)ROUND(dVar23);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (g_CGorePtr,&CStack_314,(CVector3f *)0x0,iStack_80,EVar29);
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
                ((CDeformableModelInstance *)pCStack_18,g_GhoulIndices[0],&CStack_308);
      pCVar26 = &CStack_32c;
      CStack_32c.x = CStack_308.x;
      *(uint *)((int)&CStack_32c + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_308 + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_32c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_308 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar26,&CStack_2fc);
      fVar24 = 12.0;
      fVar28 = 8.0;
      CStack_338.x = CStack_2fc.x;
      *(uint *)((int)&CStack_338 + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_2fc + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_338 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_2fc + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar28,fVar24);
      EVar29 = 0x4c25a7;
      dVar23 = round((double)(fStack_14 * (float)0.25));
      iStack_98 = (int)ROUND(dVar23);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (g_CGorePtr,&CStack_338,(CVector3f *)0x0,iStack_98,EVar29);
      iVar6 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
      if (iVar6 == 0) {
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
  fVar28 = (this_ptr->base).speed;
  dStack_a0 = (double)delta_time;
  (this_ptr->base).base.walk_step_speed =
       fStack_14 * (float)3 * delta_time * (this_ptr->base).speed;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_0042b2a0
            ((CCharacter *)this_ptr,delta_time * fVar28);
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     ((CMotionController *)pCStack_18);
  iStack_34 = pSVar7->state_index;
  if (iStack_34 == 0x11) {
    fVar28 = (this_ptr->base).speed;
    fVar21 = (float10)8;
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)4;
    (this_ptr->base).base.walk_step_speed = (float)((float10)dStack_a0 * fVar21 * (float10)fVar28);
  }
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    fStack_28 = -1.0;
    pCVar10 = (CPathMap *)&(this_ptr->base).base.model;
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                       ((CMotionController *)pCVar10);
    switch(pSVar7->state_index) {
    case 0:
      if (this_ptr->stun_timer <= 0.0) {
        pCVar12 = this_ptr->dark_waypoint;
        if (pCVar12 == (CDemonActor *)0x0) {
          iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
          if (iVar6 != 0) goto LAB_004c2cc5;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CCharacter *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,1,1);
            iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[0]);
            if (iVar6 != 0) {
              in_stack_fffffb24 = (char *)0x4c2d33;
              iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]);
              if (iVar6 != 0) break;
            }
            in_stack_fffffb24 = (char *)this_ptr;
            uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"ghoul-alert-?.wav");
            this_ptr->sfx_handles[0] = uVar13;
          }
        }
        else {
          afStack_2b0[2] =
               (pCVar12->location).position.x - (this_ptr->base).base.base.location.position.x;
          afStack_2b0[3] =
               (pCVar12->location).position.y - (this_ptr->base).base.base.location.position.y;
          fStack_2a0 = (pCVar12->location).position.z -
                       (this_ptr->base).base.base.location.position.z;
          fStack_224 = afStack_2b0[2];
          afStack_220[(uint)bVar20 * -2] = afStack_2b0[(uint)bVar20 * -2 + 3];
          afStack_220[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
               afStack_2b0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
          fStack_20c = fStack_224;
          afStack_208[(uint)bVar20 * -2] = afStack_220[(uint)bVar20 * -2];
          afStack_208[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
               afStack_220[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          fStack_94 = afStack_208[1] * afStack_208[1] +
                      fStack_20c * fStack_20c + afStack_208[0] * afStack_208[0];
          if (SQRT(fStack_94) < (float)4) {
            fVar28 = (this_ptr->base).base.hit_points + delta_time;
            this_ptr->heal_timer = this_ptr->heal_timer - delta_time;
            (this_ptr->base).base.hit_points = fVar28;
            if ((float)100 < fVar28) {
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
      if ((this_ptr->is_berserk != 0) && (iStack_34 == 1)) {
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
        uStack_24 = (uint)((this_ptr->base).base.model.part_data.visibility_flags
                           [this_ptr->part_indices[1]] != 0);
        if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0)
        {
          uStack_24 = uStack_24 + 1;
        }
        EVar11 = (*(((g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.vtable._uc)->_uc).
                   getDeathState)(&g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base);
        pCVar5 = g_CGamePtr;
        if (EVar11 == DEATH_STATE_ALIVE) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          pCVar27 = (this_ptr->base).victim;
          if (pCVar27 == (CCharacter *)0x0) {
            in_stack_fffffb24 = (char *)0x4c2f68;
            iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
            if (iVar6 == 0) {
              in_stack_fffffb24 = (char *)&(this_ptr->base).base.model;
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)in_stack_fffffb24,0,1);
            }
          }
          else {
            fStack_254 = (pCVar27->base).location.position.x -
                         (this_ptr->base).base.base.location.position.x;
            afStack_250[0] =
                 (pCVar27->base).location.position.y -
                 (this_ptr->base).base.base.location.position.y;
            afStack_250[1] =
                 (pCVar27->base).location.position.z -
                 (this_ptr->base).base.base.location.position.z;
            fStack_350 = fStack_254;
            afStack_34c[(uint)bVar20 * -2] = afStack_250[(uint)bVar20 * -2];
            afStack_34c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                 afStack_250[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            afStack_34c[0] = 0.0;
            if ((((this_ptr->base).base.hit_points < (float)25) &&
                (0 < (int)uStack_24)) && (this_ptr->dark_waypoint == (CDemonActor *)0x0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004c1980(this_ptr,delta_time);
            }
            pCVar12 = this_ptr->dark_waypoint;
            pCVar1 = &(this_ptr->base).base.model;
            if (pCVar12 == (CDemonActor *)0x0) {
              fVar28 = 0.17453292;
              pCVar26 = (CVector3f *)0x3f800000;
              iStack_17c = 0;
              fStack_174 = 2.5f;
              iStack_178 = 0;
              pCVar27 = (this_ptr->base).victim;
              in_stack_fffffb24 =
                   (char *)(*((pCVar27->base).vtable._ub)->getPathMap)(&pCVar27->base);
              iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                                ((CCharacter *)this_ptr,
                                 &(((this_ptr->base).victim)->base).location.position,
                                 (CPathMap *)in_stack_fffffb24,pCVar26,fVar28,
                                 (float)in_stack_fffffb30);
              if (iVar6 < 0) {
                in_stack_fffffb24 = (char *)0x4c3180;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0,1);
              }
              else if (((0 < iVar6) && (0 < (int)uStack_24)) &&
                      (((this_ptr->base).attack_cooldown <= 0.0 &&
                       ((pCVar27 = (this_ptr->base).victim,
                        pCVar12 = (*(((pCVar27->base).vtable._uc)->_uc).getGrabber)(pCVar27),
                        pCVar12 == (CDemonActor *)0x0 && (this_ptr->flinch_blend_weight <= 0.0))))))
              {
                fStack_48 = SQRT(afStack_34c[1] * afStack_34c[1] +
                                 fStack_350 * fStack_350 + afStack_34c[0] * afStack_34c[0]);
                fStack_30 = 0.0;
                fStack_40 = 0.0;
                fStack_54 = 0.0;
                if ((this_ptr->base).base.model.part_data.visibility_flags
                    [this_ptr->part_indices[3]] != 0) {
                  fStack_30 = (1.0 - ABS(fStack_48 - 3.4f) / 3.4f) *
                              (float)0.29999999999999999;
                }
                if ((this_ptr->base).base.model.part_data.visibility_flags
                    [this_ptr->part_indices[1]] != 0) {
                  fStack_40 = (1.0 - ABS(fStack_48 - 2.5f) / 2.5f) *
                              (float)0.40000000000000002;
                }
                pCVar27 = (this_ptr->base).victim;
                fStack_3c = fStack_48;
                iVar6 = (*(((pCVar27->base).vtable._uc)->_uc).canBeGrabbed)
                                  (pCVar27,(CDemonActor *)this_ptr,0);
                if (iVar6 != 0) {
                  fStack_54 = (1.0 - ABS(fStack_3c - 2.5f) / 2.5f) *
                              (float)0.29999999999999999;
                }
                fStack_50 = fStack_30 + fStack_40;
                fStack_4c = fStack_50 + fStack_54;
                if (0.0 < fStack_4c) {
                  fStack_44 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,fStack_4c);
                  if (fStack_30 <= fStack_44) {
                    if (fStack_50 <= fStack_44) {
                      iVar6 = 0xb;
                    }
                    else {
                      iVar6 = 0xc;
                    }
                  }
                  else {
                    iVar6 = 2;
                  }
                  fStack_14 = fStack_44;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                            (&(this_ptr->base).base.model.base,iVar6,1);
                  (this_ptr->base).attack_cooldown = 0.7;
                }
              }
            }
            else {
              fVar28 = 0.0;
              pCVar26 = (CVector3f *)0x40400000;
              in_stack_fffffb24 = (char *)(*((pCVar12->vtable)._ub)->getPathMap)(pCVar12);
              iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                                ((CCharacter *)this_ptr,
                                 &(this_ptr->dark_waypoint->location).position,
                                 (CPathMap *)in_stack_fffffb24,pCVar26,fVar28,
                                 (float)in_stack_fffffb30);
              if (0 < iVar6) {
                in_stack_fffffb24 = (char *)0x4c2eea;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0,1);
                fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,30.0);
                this_ptr->heal_timer = fStack_14;
              }
              if (iVar6 < 0) {
                this_ptr->heal_timer = 30.0;
                this_ptr->dark_waypoint = (CDemonActor *)0x0;
              }
              if (iStack_34 == 1) {
                in_stack_fffffb24 = (char *)0x4c2f2a;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(this_ptr->base).base.model.base,0x11,1);
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
                pCVar5->player_hit_flag = 1;
              }
              else {
                iVar6 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
                this_ptr->pending_eat_state = (iVar6 == 0) + 0xd;
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
                fStack_38 = 5.5f;
              }
              in_stack_fffffb24 = (char *)0x3db2b8c2;
              fStack_2c4 = fStack_38;
              pCVar25 = (CVector3f *)0x3f000000;
              iStack_2cc = 0;
              iStack_2c8 = 0;
              pCVar10 = (*((g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.vtable._ub)->
                          getPathMap)((CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]);
              core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                        (&(g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).model,0,&CStack_1b8);
              pCVar26 = &CStack_2f0;
              CStack_2f0.x = CStack_1b8.x;
              *(uint *)((int)&CStack_2f0 + (uint)bVar20 * -8 + 4) =
                   *(uint *)((int)&CStack_1b8 + (uint)bVar20 * -8 + 4);
              *(uint *)((int)&CStack_2f0 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                   *(uint *)((int)&CStack_1b8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                        ((CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4],pCVar26,
                         &CStack_218);
              pCVar26 = &CStack_29c;
              CStack_29c.x = CStack_218.x;
              *(uint *)((int)&CStack_29c + (uint)bVar20 * -8 + 4) =
                   *(uint *)((int)&CStack_218 + (uint)bVar20 * -8 + 4);
              pCVar8 = this_ptr;
              *(uint *)((int)&CStack_29c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                   *(uint *)((int)&CStack_218 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
              iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                                ((CCharacter *)pCVar8,pCVar26,pCVar10,pCVar25,
                                 (float)in_stack_fffffb24,(float)in_stack_fffffb28);
              if (0 < iVar6) {
                in_stack_fffffb24 = (char *)0x4c32a7;
                EVar11 = (*(((g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.vtable._uc)->
                           _uc).getDeathState)(&g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base);
                if (EVar11 == DEATH_STATE_DEAD) {
                  in_stack_fffffb24 = (char *)&(this_ptr->base).base.model;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                            ((CMotionController *)in_stack_fffffb24,this_ptr->pending_eat_state,1);
                  if (this_ptr->pending_eat_state == 0xd) {
                    pCVar4 = (this_ptr->base).base.base.vtable._ub;
                    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.2);
                    in_stack_fffffb24 = (char *)this_ptr;
                    (*pCVar4->playSoundWithDelay)
                              ((CDemonActor *)this_ptr,"ghoul-scream-!-?.wav",fStack_14);
                  }
                }
              }
              break;
            }
          }
          in_stack_fffffb24 = (char *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0,1);
        }
      }
      break;
    case 2:
      pCVar27 = (this_ptr->base).victim;
      if (pCVar27 == (CCharacter *)0x0) {
LAB_004c2cc5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,1,1);
      }
      else {
        pCVar12 = (*(((pCVar27->base).vtable._uc)->_uc).getGrabber)(pCVar27);
        if (pCVar12 == (CDemonActor *)0x0) {
          in_stack_fffffb24 = (char *)0x3f000000;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.5);
          iVar6 = this_ptr->part_indices[3];
          (this_ptr->base).attack_cooldown = fStack_14;
          if ((this_ptr->base).base.model.part_data.visibility_flags[iVar6] != 0) {
            fStack_5c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                  ((CMotionController *)pCVar10);
            dStack_c0 = (double)fStack_5c;
            in_stack_fffffb24 = (char *)pCVar10;
            fStack_14 = fStack_5c;
            if ((fStack_5c <= (float)2) &&
               (fStack_28 = 3.4f, 1.0 <= dStack_c0)) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_43c);
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
              SStack_43c.damage_amount = fStack_14;
              if (this_ptr->is_berserk != 0) {
                SStack_43c.damage_amount = fStack_14 * (float)2;
              }
              in_stack_fffffb24 = (char *)&SStack_43c;
              SStack_43c.attacker = (CDemonActor *)this_ptr;
              SStack_43c.wielder = (CDemonActor *)this_ptr;
              fVar28 = 0.2;
              core_xform_cpp_transformVector3x4_FUN_00591530
                        (&g_GhoulOffsetPlusX,
                         (CMatrix3x4f *)
                         (this_ptr->base).base.model.bone_transform.bone_model_matrices
                         [g_GhoulIndices[2]].m,&CStack_188);
              pCVar26 = &CStack_260;
              CStack_260.x = CStack_188.x;
              *(uint *)((int)&CStack_260 + (uint)bVar20 * -8 + 4) =
                   *(uint *)((int)&CStack_188 + (uint)bVar20 * -8 + 4);
              *(uint *)((int)&CStack_260 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                   *(uint *)((int)&CStack_188 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                        ((CDemonActor *)this_ptr,pCVar26,&CStack_170);
              pCVar26 = &CStack_11c;
              CStack_11c.x = CStack_170.x;
              *(uint *)((int)&CStack_11c + (uint)bVar20 * -8 + 4) =
                   *(uint *)((int)&CStack_170 + (uint)bVar20 * -8 + 4);
              pCVar8 = this_ptr;
              *(uint *)((int)&CStack_11c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                   *(uint *)((int)&CStack_170 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
              iVar6 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                                (&pCVar8->base,pCVar26,fVar28,(SDamageInfo *)in_stack_fffffb24);
              if (iVar6 != 0) {
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
                    ((CMotionController *)pCVar10,1,1);
        }
      }
      break;
    case 10:
      if ((((this_ptr->base).pool_me == 0) && (this_ptr->lives_left < 1)) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  ((CDeformableModelInstance *)pCVar10,0,&CStack_23c);
        pCVar26 = &CStack_1a0;
        CStack_1a0.x = CStack_23c.x;
        *(uint *)((int)&CStack_1a0 + (uint)bVar20 * -8 + 4) =
             *(uint *)((int)&CStack_23c + (uint)bVar20 * -8 + 4);
        *(uint *)((int)&CStack_1a0 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
             *(uint *)((int)&CStack_23c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                  ((CDemonActor *)this_ptr,pCVar26,&CStack_158);
        pCVar26 = &CStack_200;
        EVar29 = BLOOD_TYPE_RED;
        CStack_200.x = CStack_158.x;
        *(uint *)((int)&CStack_200 + (uint)bVar20 * -8 + 4) =
             *(uint *)((int)&CStack_158 + (uint)bVar20 * -8 + 4);
        this_ptr_00 = g_CGorePtr;
        *(uint *)((int)&CStack_200 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
             *(uint *)((int)&CStack_158 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_00,pCVar26,EVar29);
        (this_ptr->base).pool_me = 1;
      }
      this_ptr->is_berserk = 0;
      if (((0 < this_ptr->spasm_count) || (0 < this_ptr->lives_left)) &&
         (iVar6 = this_ptr->spasm_timer - g_GlobalDeltaTimeInt, this_ptr->spasm_timer = iVar6,
         iVar6 < 1)) {
        if (this_ptr->lives_left < 1) {
          this_ptr->spasm_count = this_ptr->spasm_count + -1;
        }
        if ((0 < this_ptr->spasm_count) || (0 < this_ptr->lives_left)) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,12.0);
          iVar9 = 0xf;
          iVar6 = 0x4c28d9;
          dVar23 = round((double)(fStack_14 * (float)65536));
          this_ptr->spasm_timer = (int)ROUND(dVar23);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,iVar6,iVar9);
        }
      }
      if (0 < this_ptr->lives_left) {
        iVar6 = this_ptr->arise_timer;
        if (iVar6 < 1) {
          iVar6 = iVar6 + g_GlobalDeltaTimeInt;
          iStack_58 = 0;
          this_ptr->arise_timer = iVar6;
          if (iVar6 < 0) {
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time);
            pCVar27 = (this_ptr->base).victim;
            if (pCVar27 != (CCharacter *)0x0) {
              fStack_2e4 = (this_ptr->base).base.base.location.position.x -
                           (pCVar27->base).location.position.x;
              afStack_2e0[0] =
                   (this_ptr->base).base.base.location.position.y -
                   (pCVar27->base).location.position.y;
              afStack_2e0[1] =
                   (this_ptr->base).base.base.location.position.z -
                   (pCVar27->base).location.position.z;
              fStack_110 = fStack_2e4;
              afStack_10c[(uint)bVar20 * -2] = afStack_2e0[(uint)bVar20 * -2];
              afStack_10c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                   afStack_2e0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
              if (&fStack_140 != &fStack_110) {
                fStack_140 = fStack_110;
                fStack_13c = afStack_10c[0];
                fStack_138 = afStack_10c[1];
              }
              fStack_7c = fStack_138 * fStack_138 +
                          fStack_140 * fStack_140 + fStack_13c * fStack_13c;
              fStack_78 = (float)(((int)fStack_7c >> 1) + g_FastSqrtMagic);
              if (fStack_78 < (float)8) goto LAB_004c293b;
            }
            if (iStack_58 == 0) break;
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
            fStack_20 = (this_ptr->base).base.collision_cylinder_bottom + (float)0.5;
          }
          iVar6 = 0;
          do {
            fStack_90 = (float)iVar6 * 6.283185f * 0.25f;
            fStack_14 = (float)iVar6;
            core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
            fVar21 = (float10)fcos((float10)fStack_90);
            fVar22 = (float10)fsin((float10)fStack_90);
            fStack_2c = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00537030
                                  (g_CDemonSetPtr,(this_ptr->base).base.base.location.position.x,
                                   (this_ptr->base).base.base.location.position.z,
                                   (float)(fVar22 * (float10)0.050000000000000003),
                                   (float)(fVar21 * (float10)0.050000000000000003),
                                   (this_ptr->base).base.collision_cylinder_radius,
                                   (this_ptr->base).base.base.location.position.y +
                                   (this_ptr->base).base.collision_cylinder_bottom,
                                   (this_ptr->base).base.base.location.position.y + fStack_20);
            fStack_14 = fStack_2c;
            core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
            if (fStack_2c < 1.0) break;
            iVar6 = iVar6 + 1;
          } while (iVar6 < 4);
          if (iVar6 < 4) {
            this_ptr->arise_timer = 3;
            (this_ptr->base).victim = (CCharacter *)0x0;
          }
          else {
            fStack_14 = (float)(this_ptr->lives_left + 1);
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60
                                  (10.0,(float)(int)fStack_14 * (float)10);
            (this_ptr->base).base.hit_points = fStack_14;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,0x10,1);
          }
        }
        else {
          iVar6 = iVar6 - g_GlobalDeltaTimeInt;
          this_ptr->arise_timer = iVar6;
          if (iVar6 < 1) {
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,30.0);
            in_stack_fffffb24 = (char *)0x4c290f;
            dVar23 = round((double)(-fStack_14 * 65536.0f));
            this_ptr->arise_timer = (int)ROUND(dVar23);
          }
        }
      }
      break;
    case 0xb:
      pCVar27 = (this_ptr->base).victim;
      if (pCVar27 == (CCharacter *)0x0) {
LAB_004c3569:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCVar10,1,1);
      }
      else {
        pCVar12 = (*(((pCVar27->base).vtable._uc)->_uc).getGrabber)(pCVar27);
        if (pCVar12 == (CDemonActor *)0x0) {
          fStack_28 = 2.5f;
        }
        else {
          in_stack_fffffb24 = (char *)(this_ptr->base).victim;
          pCVar8 = (CGhoul *)
                   (*(((UActorVTable *)((int)((CPathMap *)in_stack_fffffb24)->height_cache + 0x280))
                      ->_uc->_uc).getGrabber)((CCharacter *)in_stack_fffffb24);
          if (pCVar8 != this_ptr) {
            in_stack_fffffb24 = (char *)0x1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)pCVar10,1,1);
          }
        }
      }
      break;
    case 0xc:
      pCVar27 = (this_ptr->base).victim;
      if ((pCVar27 == (CCharacter *)0x0) ||
         (pCVar12 = (*(((pCVar27->base).vtable._uc)->_uc).getGrabber)(pCVar27),
         pCVar12 != (CDemonActor *)0x0)) goto LAB_004c3569;
      in_stack_fffffb24 = (char *)0x3f000000;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.5);
      iVar6 = this_ptr->part_indices[1];
      (this_ptr->base).attack_cooldown = fStack_14;
      if ((this_ptr->base).base.model.part_data.visibility_flags[iVar6] != 0) {
        fStack_60 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                              ((CMotionController *)pCVar10);
        dStack_a8 = (double)fStack_60;
        in_stack_fffffb24 = (char *)pCVar10;
        fStack_14 = fStack_60;
        if (fStack_60 <= (float)2) {
          fStack_28 = 2.5f;
          if (1.0 <= dStack_a8) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_478);
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
            SStack_478.damage_amount = fStack_14;
            if (this_ptr->is_berserk != 0) {
              SStack_478.damage_amount = fStack_14 * (float)2;
            }
            in_stack_fffffb24 = (char *)&SStack_478;
            SStack_478.attacker = (CDemonActor *)this_ptr;
            SStack_478.wielder = (CDemonActor *)this_ptr;
            fVar28 = 0.4;
            core_xform_cpp_transformVector3x4_FUN_00591530
                      (&g_GhoulOffsetMinusX,
                       (CMatrix3x4f *)
                       (this_ptr->base).base.model.bone_transform.bone_model_matrices
                       [g_GhoulIndices[1]].m,&CStack_248);
            pCVar26 = &CStack_290;
            CStack_290.x = CStack_248.x;
            *(uint *)((int)&CStack_290 + (uint)bVar20 * -8 + 4) =
                 *(uint *)((int)&CStack_248 + (uint)bVar20 * -8 + 4);
            *(uint *)((int)&CStack_290 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                 *(uint *)((int)&CStack_248 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                      ((CDemonActor *)this_ptr,pCVar26,&CStack_f8);
            pCVar26 = &CStack_284;
            CStack_284.x = CStack_f8.x;
            *(uint *)((int)&CStack_284 + (uint)bVar20 * -8 + 4) =
                 *(uint *)((int)&CStack_f8 + (uint)bVar20 * -8 + 4);
            pCVar8 = this_ptr;
            *(uint *)((int)&CStack_284 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                 *(uint *)((int)&CStack_f8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            iVar6 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                              (&pCVar8->base,pCVar26,fVar28,(SDamageInfo *)in_stack_fffffb24);
            if (iVar6 != 0) {
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
      iVar6 = this_ptr->burp_timer - g_GlobalDeltaTimeInt;
      this_ptr->burp_timer = iVar6;
      if (iVar6 < 1) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"burp[1,2].wav");
        in_stack_fffffb24 = (char *)0x41700000;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(15.0,30.0);
        dVar23 = round((double)(fStack_14 * (float)65536));
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
      fVar28 = 0.5235988;
      pCVar25 = (CVector3f *)0x40400000;
      iStack_35c = 0;
      fStack_354 = fStack_28;
      iStack_358 = 0;
      pCVar27 = (this_ptr->base).victim;
      pCVar10 = (*((pCVar27->base).vtable._ub)->getPathMap)(&pCVar27->base);
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                (&((this_ptr->base).victim)->model,0,&CStack_320);
      CStack_26c.x = CStack_320.x;
      *(uint *)((int)&CStack_26c + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_320 + (uint)bVar20 * -8 + 4);
      *(uint *)((int)&CStack_26c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_320 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                (&((this_ptr->base).victim)->base,&CStack_26c,&CStack_194);
      pCVar26 = &CStack_2c0;
      CStack_2c0.x = CStack_194.x;
      *(uint *)((int)&CStack_2c0 + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_194 + (uint)bVar20 * -8 + 4);
      pCVar8 = this_ptr;
      *(uint *)((int)&CStack_2c0 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_194 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)pCVar8,pCVar26,pCVar10,pCVar25,fVar28,
                         (float)in_stack_fffffb24);
      if (iVar6 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,1,1);
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
      }
    }
    goto LAB_004c1d09;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
      iVar6 = 1;
    }
    else {
LAB_004c2686:
      iVar6 = 0;
    }
LAB_004c1ce2:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) {
      iVar6 = 0x11;
      goto LAB_004c1ce2;
    }
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_004c2686;
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
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar6 != 0) {
    pCVar27 = (this_ptr->base).victim;
    if ((pCVar27 != (CCharacter *)0x0) &&
       (pCVar8 = (CGhoul *)(*(((pCVar27->base).vtable._uc)->_uc).getGrabber)(pCVar27),
       pCVar8 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_CCharacter_applyGravity_FUN_00423a10((CCharacter *)this_ptr,delta_time);
    fStack_134 = (this_ptr->base).base.velocity.x * delta_time;
    afStack_130[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_130[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_1dc = fStack_134;
    afStack_1d8[(uint)bVar20 * -2] = afStack_130[(uint)bVar20 * -2];
    afStack_1d8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
         afStack_130[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    pCVar26 = &(this_ptr->base).base.position_delta;
    afStack_1d8[2] = fStack_1dc + pCVar26->x;
    afStack_1d8[3] = afStack_1d8[0] + (this_ptr->base).base.position_delta.y;
    fStack_1c8 = afStack_1d8[1] + (this_ptr->base).base.position_delta.z;
    fStack_ec = afStack_1d8[2];
    afStack_e8[(uint)bVar20 * -2] = afStack_1d8[(uint)bVar20 * -2 + 3];
    afStack_e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
         afStack_1d8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
    pCVar25 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_1c4 = fStack_ec + pCVar25->x;
    fStack_1c0 = afStack_e8[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_1bc = afStack_e8[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_230.x = fStack_1c4;
    *(float *)((int)&CStack_230 + (uint)bVar20 * -8 + 4) = afStack_1d8[(uint)bVar20 * -2 + 6];
    *(float *)((int)&CStack_230 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
         afStack_1d8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar26->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar28 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar28;
    pCVar25->x = fVar28;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00423a60((CCharacter *)this_ptr,&CStack_230);
  }
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar1);
  dStack_b8 = (double)this_ptr->flinch_blend_weight;
  if (0.0 < dStack_b8) {
    fStack_6c = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00503f50
                          (&pCVar1->base,this_ptr->flinch_motion_index,
                           1.0 - this_ptr->flinch_blend_weight);
    fVar28 = 1.0 - this_ptr->flinch_blend_weight;
    fStack_68 = 1.0 - fVar28 * fVar28 * fVar28;
    fStack_14 = fStack_6c;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
              (pCVar1,this_ptr->flinch_motion_index,fStack_6c,fStack_68,g_GhoulIndices[9],
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
    fVar28 = this_ptr->flinch_blend_weight - delta_time / 0.7f;
    this_ptr->flinch_blend_weight = fVar28;
    if (fVar28 < 0.0) {
      this_ptr->flinch_blend_weight = 0.0;
    }
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  if (((float)0.01 < ABS((this_ptr->base).base.turn_angle_accumulator)) ||
     (fVar28 = (this_ptr->base).base.position_delta.y,
     fVar24 = (this_ptr->base).base.position_delta.x, fVar2 = (this_ptr->base).base.position_delta.z
     , (float)0.01 < SQRT(fVar2 * fVar2 + fVar24 * fVar24 + fVar28 * fVar28))) {
    iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70
                      (g_CSound_PTR_0061c068,this_ptr->sfx_handle);
    if (iVar6 == 0) {
      _sprintf(&stack0xfffffb24,"ghoul-walk-?.wav *%f");
      uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,&stack0xfffffb24);
      this_ptr->sfx_handle = uVar13;
    }
  }
  else {
    core_sound_cpp_CSound_killSound_FUN_0055af80(g_CSound_PTR_0061c068,this_ptr->sfx_handle);
  }
  if ((this_ptr->base).pool_me == 0) {
    iVar6 = this_ptr->part_indices[9];
    if ((this_ptr->base).base.model.part_data.visibility_flags[iVar6] == 0) {
      fVar28 = 0.5;
      iVar9 = g_GhoulIndices[10];
    }
    else {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_00427060
                ((CCharacter *)this_ptr,this_ptr->part_indices[0],g_GhoulIndices[5],0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_00427060
                  ((CCharacter *)this_ptr,this_ptr->part_indices[1],g_GhoulIndices[3],0.2);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_00427060
                ((CCharacter *)this_ptr,this_ptr->part_indices[2],g_GhoulIndices[6],0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_00427060
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],g_GhoulIndices[4],0.2);
      }
      fVar28 = 0.7;
      iVar6 = this_ptr->part_indices[10];
      iVar9 = g_GhoulIndices[0];
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427130
              ((CCharacter *)this_ptr,iVar6,iVar9,fVar28);
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_00426f30((CCharacter *)this_ptr);
  }
  if ((this_ptr->dark_waypoint != (CDemonActor *)0x0) && (iStack_34 == 0x11)) {
    fStack_278 = (this_ptr->base).base.base.location.position.x - (this_ptr->prev_position).x;
    afStack_274[0] = (this_ptr->base).base.base.location.position.y - (this_ptr->prev_position).y;
    afStack_274[1] = (this_ptr->base).base.base.location.position.z - (this_ptr->prev_position).z;
    fStack_164 = fStack_278;
    afStack_160[(uint)bVar20 * -2] = afStack_274[(uint)bVar20 * -2];
    afStack_160[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
         afStack_274[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    if (delta_time * (float)0.5 <=
        SQRT(afStack_160[1] * afStack_160[1] + fStack_164 * fStack_164)) {
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
  pCVar14 = &(this_ptr->base).base.base.location;
  if ((CLocation *)&this_ptr->prev_position == pCVar14) {
    return;
  }
  (this_ptr->prev_position).x = (pCVar14->position).x;
  (this_ptr->prev_position).y = (this_ptr->base).base.base.location.position.y;
  (this_ptr->prev_position).z = (this_ptr->base).base.base.location.position.z;
  return;
}
