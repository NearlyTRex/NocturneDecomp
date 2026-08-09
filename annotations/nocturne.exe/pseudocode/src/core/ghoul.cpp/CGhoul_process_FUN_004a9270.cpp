// Name: core_ghoul.cpp_CGhoul_process_FUN_004a9270
// Address: 004a9270
// Address Range: [[004a9270, 004aadfc]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004a9270(CGhoul *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004a9270(CGhoul *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  float fVar2;
  CCharacter *pCVar3;
  CDemonActor_vtable *pCVar4;
  bool bVar5;
  CGame *pCVar6;
  int iVar7;
  SMotion *pSVar8;
  int iVar9;
  CGhoul *pCVar10;
  CPathMap *pCVar11;
  CVector3f *pCVar12;
  EDeathState EVar13;
  CDemonActor *pCVar14;
  uint uVar15;
  CLocation *pCVar16;
  char *pcVar17;
  char *pcVar18;
  char cVar19;
  float10 fVar20;
  float10 fVar21;
  double dVar22;
  int iVar23;
  CVector3f *pCVar24;
  char *in_stack_fffffc88;
  CVector3f *in_stack_fffffc8c;
  float fVar25;
  CGhoul *in_stack_fffffc94;
  SDamageInfo local_314;
  SDamageInfo local_2d8;
  SDamageInfo local_29c;
  char local_260 [32];
  CBoundingBox3D local_240;
  CVector3f local_228;
  CVector3f local_21c;
  CVector3f local_210 [2];
  float local_1f8;
  float local_1f4;
  float local_1f0;
  CVector3f local_1ec;
  CVector3f local_1e0;
  CVector3f local_1d4;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  CVector3f local_1bc;
  CVector3f local_1b0;
  CVector3f local_1a4;
  CVector3f local_198;
  CVector3f local_18c;
  float local_180;
  float local_17c;
  float local_178;
  CVector3f local_174;
  CVector3f local_168;
  CVector3f local_15c;
  CVector3f local_150;
  CVector3f local_144;
  int local_138;
  int local_134;
  float local_130;
  CVector3f local_12c;
  float local_120;
  float local_11c;
  float local_118;
  CVector3f local_114;
  CVector3f local_108;
  int local_fc;
  int local_f8;
  float local_f4;
  CVector3f local_f0;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  double local_b4;
  double local_ac;
  double local_a4;
  double local_9c;
  double local_8c;
  CDemonActor *local_84;
  UActorVTable local_7c;
  CMotionList *local_78;
  float local_70;
  SMotionTransition *local_6c;
  float local_68;
  float local_64;
  SMotionTransition *local_60;
  float local_5c;
  int local_58;
  int local_54;
  SMotionTransition *local_50;
  SMotionTransition *local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CMotionController *local_30;
  float local_2c;
  SMotionTransition *local_28;
  float local_24;
  float local_20;
  float local_1c;
  CPathMap *local_18;
  SMotionTransition *local_14;
  
  iVar7 = core_charactr_cpp_CCharacter_FUN_004259f0((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_64 = delta_time * (this_ptr->base).speed;
  local_18 = (CPathMap *)&(this_ptr->base).base.model;
switchD_004a9c0a_caseD_e:
  pCVar11 = local_18;
  if (0.0 < local_64) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      ((CMotionController *)local_18,&local_64);
    switch(iVar7) {
    case 5:
      pCVar3 = (this_ptr->base).victim;
      if ((pCVar3 != (CCharacter *)0x0) &&
         (EVar13 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
         EVar13 == DEATH_STATE_ALIVE)) {
        in_stack_fffffc88 = (char *)(this_ptr->base).victim;
        pCVar14 = (**(code **)((int)(&((UOrientationVector *)
                                      ((CPathMap *)in_stack_fffffc88)->height_cache)->vec)[0x17].z +
                              0xec))((CCharacter *)in_stack_fffffc88);
        if (pCVar14 == (CDemonActor *)0x0) {
          in_stack_fffffc8c = (CVector3f *)0x0;
          pCVar3 = (this_ptr->base).victim;
          in_stack_fffffc88 = (char *)this_ptr;
          iVar7 = (*(((pCVar3->base).vtable._uc)->_uc).canBeGrabbed)
                            (pCVar3,(CDemonActor *)this_ptr,0);
          if (iVar7 != 0) {
            local_174.z = 2.5f;
            in_stack_fffffc94 = (CGhoul *)&local_1c8;
            local_174.x = 0.0;
            local_174.y = 0.0;
            in_stack_fffffc8c = (CVector3f *)0x4a975c;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                      ((CDemonActor *)this_ptr,(CVector3f *)in_stack_fffffc94,&local_174);
            pCVar3 = (this_ptr->base).victim;
            fVar25 = local_1c8 - (pCVar3->base).location.position.x;
            fVar1 = local_1c0 - (pCVar3->base).location.position.z;
            bVar5 = SQRT(fVar1 * fVar1 + fVar25 * fVar25) <= 1.0;
            pCVar3 = (this_ptr->base).victim;
            if (ABS(local_1c4 - (pCVar3->base).location.position.y) <= (float)4) {
              if (bVar5) {
                in_stack_fffffc8c = (CVector3f *)0x4a97cb;
                in_stack_fffffc94 = this_ptr;
                iVar7 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)
                                  (pCVar3,(CDemonActor *)this_ptr,0);
                if (iVar7 == 0) goto LAB_004a96cf;
              }
              if (bVar5) break;
            }
          }
        }
      }
LAB_004a96cf:
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                ((CMotionController *)local_18,1,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,iVar7);
      break;
    case 10:
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)pCVar11,1,1);
      }
      else {
        pCVar10 = (CGhoul *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
        if (pCVar10 == this_ptr) {
          pCVar3 = (this_ptr->base).victim;
          EVar13 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
          if (EVar13 == DEATH_STATE_ALIVE) {
            pCVar3 = (this_ptr->base).victim;
            (*((pCVar3->base).vtable._ub)->getBoundingBox)(&pCVar3->base,&local_240);
            pCVar3 = (this_ptr->base).victim;
            local_168.x = (pCVar3->base).location.position.x;
            local_168.z = (pCVar3->base).location.position.z;
            local_168.y = (local_240.max.y - local_240.min.y) * (float)0.69999999999999996 +
                          (pCVar3->base).location.position.y;
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_29c);
            local_29c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(15.0,25.0)
            ;
            in_stack_fffffc88 = (char *)0x4a98e1;
            local_14 = (SMotionTransition *)local_29c.damage_amount;
            pCVar12 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                                (&((this_ptr->base).victim)->base,&local_f0,&local_168);
            if (&local_29c.impact_direction != pCVar12) {
              local_29c.impact_direction.x = pCVar12->x;
              local_29c.impact_direction.y = pCVar12->y;
              local_29c.impact_direction.z = pCVar12->z;
            }
            local_29c.attacker = (CDemonActor *)this_ptr;
            local_29c.wielder = (CDemonActor *)this_ptr;
            pCVar3 = (this_ptr->base).victim;
            in_stack_fffffc8c = (CVector3f *)0x4a9930;
            (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,&local_29c);
            local_ac = (double)local_29c.damage_amount;
            if (0.0 < local_ac) {
              iVar7 = 0x4a995e;
              dVar22 = round(local_ac * 2.5 * 0.25);
              local_70 = (float)(int)ROUND(dVar22);
              in_stack_fffffc8c = &local_168;
              in_stack_fffffc88 = &g_CGore_PTR_005b96c4->singleton;
              core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                        (g_CGore_PTR_005b96c4,in_stack_fffffc8c,(CVector3f *)0x0,(int)local_70,iVar7
                        );
            }
            pCVar3 = (this_ptr->base).victim;
            if (pCVar3->hit_points <= 0.0) {
              (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        ((CMotionController *)local_18,1,1);
            }
            in_stack_fffffc94 = this_ptr;
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
          }
          else {
            pCVar3 = (this_ptr->base).victim;
            (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
            in_stack_fffffc8c = (CVector3f *)0x1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      ((CMotionController *)pCVar11,1,1);
            in_stack_fffffc88 = (char *)pCVar11;
          }
        }
        else {
          in_stack_fffffc88 = (char *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)pCVar11,1,1);
        }
      }
      break;
    case 0xb:
    case 0xc:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
                ((CDeformableModelInstance *)local_18);
      iVar9 = _DAT_01c78c18;
      if (iVar7 == 0xc) {
        iVar9 = _DAT_01c78c1c;
      }
      pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          ((CDeformableModelInstance *)local_18,&local_1e0,iVar9);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)this_ptr,&local_1d4,pCVar12);
      local_14 = (SMotionTransition *)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(8.0,12.0);
      iVar7 = 0x4a9a56;
      dVar22 = round((double)((float)local_14 * (float)0.25));
      local_58 = (int)ROUND(dVar22);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                (g_CGore_PTR_005b96c4,&local_1d4,(CVector3f *)0x0,local_58,iVar7);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-dig-?.wav @1.3");
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
                ((CDeformableModelInstance *)pCVar11);
      pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          ((CDeformableModelInstance *)pCVar11,&local_1b0,_DAT_01c78c14);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)this_ptr,&local_228,pCVar12);
      local_14 = (SMotionTransition *)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(8.0,12.0);
      iVar7 = 0x4a9ae1;
      dVar22 = round((double)((float)local_14 * (float)0.25));
      local_54 = (int)ROUND(dVar22);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                (g_CGore_PTR_005b96c4,&local_228,(CVector3f *)0x0,local_54,iVar7);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-eat-?.wav @1.3");
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
                ((CDeformableModelInstance *)pCVar11);
      pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          ((CDeformableModelInstance *)pCVar11,&local_1ec,_DAT_01c78c14);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)this_ptr,&local_15c,pCVar12);
      local_14 = (SMotionTransition *)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(8.0,12.0);
      iVar7 = 0x4a9b6c;
      dVar22 = round((double)((float)local_14 * (float)0.25));
      local_84 = (CDemonActor *)(int)ROUND(dVar22);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                (g_CGore_PTR_005b96c4,&local_15c,(CVector3f *)0x0,(int)local_84,iVar7);
      iVar7 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
      if (iVar7 == 0) {
        pcVar17 = "ghoul-dig-?.wav @1.3";
      }
      else {
        pcVar17 = "ghoul-eat-?.wav @1.3";
      }
      pcVar18 = local_260;
      do {
        cVar19 = *pcVar17;
        *pcVar18 = cVar19;
        if (cVar19 == '\0') break;
        cVar19 = pcVar17[1];
        pcVar17 = pcVar17 + 2;
        pcVar18[1] = cVar19;
        pcVar18 = pcVar18 + 2;
      } while (cVar19 != '\0');
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,local_260);
    }
    goto switchD_004a9c0a_caseD_e;
  }
  local_14 = (SMotionTransition *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                       ((CMotionController *)local_18,1);
  local_8c = (double)delta_time;
  fVar25 = (this_ptr->base).speed;
  fVar1 = (float)1.57079632675;
  (this_ptr->base).base.walk_step_speed =
       (this_ptr->base).speed * (float)local_14 * (float)3 * delta_time;
  (this_ptr->base).base.turn_speed = delta_time * fVar1 * fVar25;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     ((CMotionController *)local_18);
  iVar7 = pSVar8->state_index;
  if (iVar7 == 0x11) {
    fVar25 = (this_ptr->base).speed;
    fVar20 = (float10)8;
    (this_ptr->base).base.turn_speed = (float)(fVar20 * (float10)(this_ptr->base).base.turn_speed);
    (this_ptr->base).base.walk_step_speed = (float)((float10)local_8c * fVar20 * (float10)fVar25);
  }
  iVar9 = core_charactr_cpp_CCharacter_FUN_00428c00((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    local_20 = -1.0;
    pCVar11 = (CPathMap *)&(this_ptr->base).base.model;
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       ((CMotionController *)pCVar11);
    switch(pSVar8->state_index) {
    case 0:
      if (this_ptr->stun_timer <= 0.0) {
        pCVar14 = this_ptr->dark_waypoint;
        if (pCVar14 == (CDemonActor *)0x0) {
          iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
          if (iVar9 != 0) goto LAB_004aa1e6;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CCharacter *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(this_ptr->base).base.model.motion_controller,1,1);
            iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[0]);
            if (iVar9 != 0) {
              in_stack_fffffc88 = (char *)0x4aa254;
              iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[1]);
              if (iVar9 != 0) break;
            }
            in_stack_fffffc88 = (char *)this_ptr;
            uVar15 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"ghoul-alert-?.wav");
            this_ptr->sfx_handles[0] = uVar15;
          }
        }
        else {
          local_180 = (pCVar14->location).position.x -
                      (this_ptr->base).base.base.location.position.x;
          local_17c = (pCVar14->location).position.y -
                      (this_ptr->base).base.base.location.position.y;
          local_178 = (pCVar14->location).position.z -
                      (this_ptr->base).base.base.location.position.z;
          if (SQRT(local_178 * local_178 + local_180 * local_180 + local_17c * local_17c) <
              (float)4) {
            fVar25 = (this_ptr->base).base.hit_points + delta_time;
            this_ptr->heal_timer = this_ptr->heal_timer - delta_time;
            (this_ptr->base).base.hit_points = fVar25;
            if ((float)100 < fVar25) {
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
      if ((this_ptr->is_berserk != 0) && (iVar7 == 1)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.motion_controller,0x11,1);
      }
      if (0.0 < this_ptr->stun_timer) {
        this_ptr->stun_timer = this_ptr->stun_timer - delta_time;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
      else {
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        cVar19 = (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]]
                 != 0;
        if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0)
        {
          cVar19 = cVar19 + '\x01';
        }
        EVar13 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                           (&g_HeroActors[g_LocalHeroIndex]->base);
        pCVar6 = g_CGame_PTR_005b9354;
        if (EVar13 == DEATH_STATE_ALIVE) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          pCVar3 = (this_ptr->base).victim;
          if (pCVar3 == (CCharacter *)0x0) {
            in_stack_fffffc88 = (char *)0x4aa46a;
            iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
            if (iVar9 == 0) {
              in_stack_fffffc88 = (char *)&(this_ptr->base).base.model;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        ((CMotionController *)in_stack_fffffc88,0,1);
            }
          }
          else {
            local_1f8 = (pCVar3->base).location.position.x -
                        (this_ptr->base).base.base.location.position.x;
            local_1f0 = (pCVar3->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            local_1f4 = 0.0;
            if ((((this_ptr->base).base.hit_points < (float)25) && (cVar19 != '\0')) &&
               (this_ptr->dark_waypoint == (CDemonActor *)0x0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004a9040(this_ptr,delta_time);
            }
            local_30 = &(this_ptr->base).base.model.motion_controller;
            pCVar14 = this_ptr->dark_waypoint;
            if (pCVar14 == (CDemonActor *)0x0) {
              fVar25 = 0.17453292;
              pCVar12 = (CVector3f *)0x3f800000;
              local_fc = 0;
              local_f4 = 2.5f;
              local_f8 = 0;
              pCVar3 = (this_ptr->base).victim;
              in_stack_fffffc88 = (char *)(*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
              iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                                ((CCharacter *)this_ptr,
                                 &(((this_ptr->base).victim)->base).location.position,
                                 (CPathMap *)in_stack_fffffc88,pCVar12,fVar25,
                                 (float)in_stack_fffffc94);
              if (iVar9 < 0) {
                in_stack_fffffc88 = (char *)0x4aa677;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(local_30,0,1);
              }
              else if (((0 < iVar9) && (cVar19 != '\0')) &&
                      (((this_ptr->base).attack_cooldown <= 0.0 &&
                       ((pCVar3 = (this_ptr->base).victim,
                        pCVar14 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
                        pCVar14 == (CDemonActor *)0x0 && (this_ptr->flinch_blend_weight <= 0.0))))))
              {
                local_48 = SQRT(local_1f0 * local_1f0 +
                                local_1f8 * local_1f8 + local_1f4 * local_1f4);
                local_24 = 0.0;
                local_40 = 0.0;
                local_38 = 0.0;
                if ((this_ptr->base).base.model.part_data.visibility_flags
                    [this_ptr->part_indices[3]] != 0) {
                  local_24 = (1.0 - ABS(local_48 - 3.4f) / 3.4f) *
                             (float)0.29999999999999999;
                }
                if ((this_ptr->base).base.model.part_data.visibility_flags
                    [this_ptr->part_indices[1]] != 0) {
                  local_40 = (1.0 - ABS(local_48 - 2.5f) / 2.5f) *
                             (float)0.40000000000000002;
                }
                pCVar3 = (this_ptr->base).victim;
                local_44 = local_48;
                iVar9 = (*(((pCVar3->base).vtable._uc)->_uc).canBeGrabbed)
                                  (pCVar3,(CDemonActor *)this_ptr,0);
                if (iVar9 != 0) {
                  local_38 = (1.0 - ABS(local_48 - 2.5f) / 2.5f) *
                             (float)0.29999999999999999;
                }
                local_3c = local_24 + local_40;
                local_34 = local_3c + local_38;
                if (0.0 < local_34) {
                  local_28 = (SMotionTransition *)
                             core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,local_34);
                  if (local_24 <= (float)local_28) {
                    if (local_3c <= (float)local_28) {
                      iVar9 = 0xb;
                    }
                    else {
                      iVar9 = 0xc;
                    }
                  }
                  else {
                    iVar9 = 2;
                  }
                  local_14 = local_28;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                            (&(this_ptr->base).base.model.motion_controller,iVar9,1);
                  (this_ptr->base).attack_cooldown = 0.7;
                }
              }
            }
            else {
              fVar25 = 0.0;
              pCVar12 = (CVector3f *)0x40400000;
              in_stack_fffffc88 = (char *)(*((pCVar14->vtable)._ub)->getPathMap)(pCVar14);
              iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                                ((CCharacter *)this_ptr,
                                 &(this_ptr->dark_waypoint->location).position,
                                 (CPathMap *)in_stack_fffffc88,pCVar12,fVar25,
                                 (float)in_stack_fffffc94);
              if (0 < iVar9) {
                in_stack_fffffc88 = (char *)0x4aa3ef;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(local_30,0,1);
                local_14 = (SMotionTransition *)
                           core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,30.0);
                this_ptr->heal_timer = (float)local_14;
              }
              if (iVar9 < 0) {
                this_ptr->heal_timer = 30.0;
                this_ptr->dark_waypoint = (CDemonActor *)0x0;
              }
              if (iVar7 == 1) {
                in_stack_fffffc88 = (char *)0x4aa42c;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&(this_ptr->base).base.model.motion_controller,0x11,1);
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
                pCVar6->player_hit_flag = 1;
              }
              else {
                iVar9 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
                this_ptr->pending_eat_state = (iVar9 == 0) + 0xd;
                g_CGame_PTR_005b9354->player_hit_flag = 1;
              }
              goto LAB_004aa6a3;
            }
            this_ptr->pending_eat_state = 0;
          }
          else {
LAB_004aa6a3:
            if (this_ptr->pending_eat_state != 0) {
              local_2c = 2.0f;
              if (this_ptr->pending_eat_state == 0xe) {
                local_2c = 5.5f;
              }
              in_stack_fffffc88 = (char *)0x3db2b8c2;
              local_dc = local_2c;
              pCVar24 = (CVector3f *)0x3f000000;
              local_e4 = 0.0;
              local_e0 = 0.0;
              pCVar11 = (*((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ub)->getPathMap)
                                  ((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
              pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                                  (&(g_HeroActors[g_LocalHeroIndex]->base).model,&local_198,0);
              pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                  ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&local_150,pCVar12)
              ;
              iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                                ((CCharacter *)this_ptr,pCVar12,pCVar11,pCVar24,
                                 (float)in_stack_fffffc88,(float)in_stack_fffffc8c);
              if (0 < iVar9) {
                in_stack_fffffc88 = (char *)0x4aa770;
                EVar13 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).
                           getDeathState)(&g_HeroActors[g_LocalHeroIndex]->base);
                if (EVar13 == DEATH_STATE_DEAD) {
                  in_stack_fffffc88 = (char *)&(this_ptr->base).base.model;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                            ((CMotionController *)in_stack_fffffc88,this_ptr->pending_eat_state,1);
                  if (this_ptr->pending_eat_state == 0xd) {
                    pCVar4 = (this_ptr->base).base.base.vtable._ub;
                    local_14 = (SMotionTransition *)
                               core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.5,1.2);
                    in_stack_fffffc88 = (char *)this_ptr;
                    (*pCVar4->playSoundWithDelay)
                              ((CDemonActor *)this_ptr,"ghoul-scream-!-?.wav",(float)local_14);
                  }
                }
              }
              break;
            }
          }
          in_stack_fffffc88 = (char *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
      }
      break;
    case 2:
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
LAB_004aa1e6:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.motion_controller,1,1);
      }
      else {
        pCVar14 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
        if (pCVar14 == (CDemonActor *)0x0) {
          in_stack_fffffc88 = (char *)0x3f000000;
          local_14 = (SMotionTransition *)
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.2,0.5);
          iVar9 = this_ptr->part_indices[3];
          (this_ptr->base).attack_cooldown = (float)local_14;
          if ((this_ptr->base).base.model.part_data.visibility_flags[iVar9] != 0) {
            local_50 = (SMotionTransition *)
                       core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                                 ((CMotionController *)pCVar11);
            local_9c = (double)(float)local_50;
            in_stack_fffffc88 = (char *)pCVar11;
            local_14 = local_50;
            if (((float)local_50 <= (float)2) &&
               (local_20 = 3.4f, 1.0 <= local_9c)) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_2d8);
              local_14 = (SMotionTransition *)
                         core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
              local_2d8.damage_amount = (float)local_14;
              if (this_ptr->is_berserk != 0) {
                local_2d8.damage_amount = (float)local_14 * (float)2;
              }
              in_stack_fffffc88 = (char *)&local_2d8;
              local_2d8.attacker = (CDemonActor *)this_ptr;
              local_2d8.wielder = (CDemonActor *)this_ptr;
              fVar25 = 0.2;
              pCVar12 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                  (&local_114,&CVector3f_01c78bcc,
                                   (CMatrix3x4f *)
                                   (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                   [_DAT_01c78c1c].m);
              pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                  ((CDemonActor *)this_ptr,&local_1bc,pCVar12);
              iVar9 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0
                                (&this_ptr->base,pCVar12,fVar25,(SDamageInfo *)in_stack_fffffc88);
              if (iVar9 != 0) {
                in_stack_fffffc88 = "gh-hits?.wav";
                (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"gh-hits?.wav");
              }
            }
          }
        }
        else {
          in_stack_fffffc88 = (char *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)pCVar11,1,1);
        }
      }
      break;
    case 10:
      if ((((this_ptr->base).pool_me == 0) && (this_ptr->lives_left < 1)) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                            ((CDeformableModelInstance *)pCVar11,&local_12c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)this_ptr,&local_108,pCVar12);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480(g_CGore_PTR_005b96c4,&local_108,0);
        (this_ptr->base).pool_me = 1;
      }
      this_ptr->is_berserk = 0;
      if (((0 < this_ptr->spasm_count) || (0 < this_ptr->lives_left)) &&
         (iVar9 = this_ptr->spasm_timer - _DAT_01bd1d80, this_ptr->spasm_timer = iVar9, iVar9 < 1))
      {
        if (this_ptr->lives_left < 1) {
          this_ptr->spasm_count = this_ptr->spasm_count + -1;
        }
        if ((0 < this_ptr->spasm_count) || (0 < this_ptr->lives_left)) {
          local_14 = (SMotionTransition *)
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(1.0,12.0);
          iVar23 = 0xf;
          iVar9 = 0x4a9e4f;
          dVar22 = round((double)((float)local_14 * (float)65536))
          ;
          this_ptr->spasm_timer = (int)ROUND(dVar22);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.motion_controller,iVar9,iVar23);
        }
      }
      if (0 < this_ptr->lives_left) {
        if (this_ptr->arise_timer < 1) {
          iVar9 = this_ptr->arise_timer + _DAT_01bd1d80;
          this_ptr->arise_timer = iVar9;
          if (iVar9 < 0) {
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time);
            pCVar3 = (this_ptr->base).victim;
            if (pCVar3 != (CCharacter *)0x0) {
              local_120 = (this_ptr->base).base.base.location.position.x -
                          (pCVar3->base).location.position.x;
              local_11c = (this_ptr->base).base.base.location.position.y -
                          (pCVar3->base).location.position.y;
              local_118 = (this_ptr->base).base.base.location.position.z -
                          (pCVar3->base).location.position.z;
              if (&local_c0 != &local_120) {
                local_c0 = local_120;
                local_bc = local_11c;
                local_b8 = local_118;
              }
              local_7c = (UActorVTable)
                         (local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc);
              local_78 = (CMotionList *)(((int)local_7c._ub >> 1) + g_FastSqrtMagic);
              if ((float)local_78 < (float)8) goto LAB_004a9eb3;
            }
          }
          else {
            this_ptr->arise_timer = 0;
LAB_004a9eb3:
            local_1c = (this_ptr->base).base.collision_cylinder_top;
            if (local_1c < (this_ptr->base).base.collision_cylinder_bottom) {
              local_1c = (this_ptr->base).base.model.bounding_box.max.y;
            }
            if (local_1c < (this_ptr->base).base.collision_cylinder_bottom) {
              local_1c = (this_ptr->base).base.collision_cylinder_bottom + (float)0.5;
            }
            fVar25 = 0.0;
            do {
              local_68 = (float)(int)fVar25 * (float)6.2831853070000001 * (float)0.25;
              local_14 = (SMotionTransition *)fVar25;
              core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                        (g_CDemonSet_PTR_005be368,(CDemonActor *)this_ptr);
              fVar20 = (float10)fcos((float10)local_68);
              fVar21 = (float10)fsin((float10)local_68);
              local_6c = (SMotionTransition *)
                         core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00510a40
                                   (g_CDemonSet_PTR_005be368,
                                    (this_ptr->base).base.base.location.position.x,
                                    (this_ptr->base).base.base.location.position.z,
                                    (float)(fVar21 * (float10)0.050000000000000003),
                                    (float)(fVar20 * (float10)0.050000000000000003),
                                    (this_ptr->base).base.collision_cylinder_radius,
                                    (this_ptr->base).base.base.location.position.y +
                                    (this_ptr->base).base.collision_cylinder_bottom,
                                    (this_ptr->base).base.base.location.position.y + local_1c);
              local_14 = local_6c;
              core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
              if ((float)local_6c < 1.0) break;
              fVar25 = (float)((int)fVar25 + 1);
            } while ((int)fVar25 < 4);
            if ((int)fVar25 < 4) {
              this_ptr->arise_timer = 3;
              (this_ptr->base).victim = (CCharacter *)0x0;
            }
            else {
              local_14 = (SMotionTransition *)(this_ptr->lives_left + 1);
              local_14 = (SMotionTransition *)
                         core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                   (10.0,(float)(int)local_14 * (float)10);
              (this_ptr->base).base.hit_points = (float)local_14;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(this_ptr->base).base.model.motion_controller,0x10,1);
            }
          }
        }
        else {
          iVar9 = this_ptr->arise_timer - _DAT_01bd1d80;
          this_ptr->arise_timer = iVar9;
          if (iVar9 < 1) {
            local_14 = (SMotionTransition *)
                       core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,30.0);
            in_stack_fffffc88 = (char *)0x4a9e85;
            dVar22 = round((double)(-(float)local_14 * 65536.0f));
            this_ptr->arise_timer = (int)ROUND(dVar22);
          }
        }
      }
      break;
    case 0xb:
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
LAB_004aaa0a:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)pCVar11,1,1);
      }
      else {
        pCVar14 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
        if (pCVar14 == (CDemonActor *)0x0) {
          local_20 = 2.5f;
        }
        else {
          in_stack_fffffc88 = (char *)(this_ptr->base).victim;
          pCVar10 = (CGhoul *)
                    (**(code **)((int)(&((UOrientationVector *)
                                        ((CPathMap *)in_stack_fffffc88)->height_cache)->vec)[0x17].z
                                + 0xec))((CCharacter *)in_stack_fffffc88);
          if (pCVar10 != this_ptr) {
            in_stack_fffffc88 = (char *)0x1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      ((CMotionController *)pCVar11,1,1);
          }
        }
      }
      break;
    case 0xc:
      pCVar3 = (this_ptr->base).victim;
      if ((pCVar3 == (CCharacter *)0x0) ||
         (pCVar14 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
         pCVar14 != (CDemonActor *)0x0)) goto LAB_004aaa0a;
      in_stack_fffffc88 = (char *)0x3f000000;
      local_14 = (SMotionTransition *)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.2,0.5);
      iVar9 = this_ptr->part_indices[1];
      (this_ptr->base).attack_cooldown = (float)local_14;
      if ((this_ptr->base).base.model.part_data.visibility_flags[iVar9] != 0) {
        local_4c = (SMotionTransition *)
                   core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                             ((CMotionController *)pCVar11);
        local_a4 = (double)(float)local_4c;
        in_stack_fffffc88 = (char *)pCVar11;
        local_14 = local_4c;
        if ((float)local_4c <= (float)2) {
          local_20 = 2.5f;
          if (1.0 <= local_a4) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_314);
            local_14 = (SMotionTransition *)
                       core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
            local_314.damage_amount = (float)local_14;
            if (this_ptr->is_berserk != 0) {
              local_314.damage_amount = (float)local_14 * (float)2;
            }
            in_stack_fffffc88 = (char *)&local_314;
            local_314.attacker = (CDemonActor *)this_ptr;
            local_314.wielder = (CDemonActor *)this_ptr;
            fVar25 = 0.4;
            pCVar12 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                (local_210,&CVector3f_01c78bc0,
                                 (CMatrix3x4f *)
                                 (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                 [_DAT_01c78c18].m);
            pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                ((CDemonActor *)this_ptr,&local_21c,pCVar12);
            iVar9 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0
                              (&this_ptr->base,pCVar12,fVar25,(SDamageInfo *)in_stack_fffffc88);
            if (iVar9 != 0) {
              in_stack_fffffc88 = "gh-hits?.wav";
              (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"gh-hits?.wav");
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar9 = this_ptr->burp_timer - _DAT_01bd1d80;
      this_ptr->burp_timer = iVar9;
      if (iVar9 < 1) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"burp[1,2].wav");
        in_stack_fffffc88 = (char *)0x41700000;
        local_14 = (SMotionTransition *)
                   core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(15.0,30.0);
        dVar22 = round((double)((float)local_14 * (float)65536));
        this_ptr->burp_timer = (int)ROUND(dVar22);
      }
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        in_stack_fffffc88 = (char *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
    }
    if (((0.0 <= local_20) && (this_ptr->flinch_blend_weight <= 0.0)) &&
       ((this_ptr->base).victim != (CCharacter *)0x0)) {
      local_138 = 0;
      local_134 = 0;
      local_130 = local_20;
      fVar25 = 0.5235988;
      pCVar24 = (CVector3f *)0x40400000;
      pCVar3 = (this_ptr->base).victim;
      pCVar11 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
      pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (&((this_ptr->base).victim)->model,&local_1a4,0);
      pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                          (&((this_ptr->base).victim)->base,&local_144,pCVar12);
      iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        ((CCharacter *)this_ptr,pCVar12,pCVar11,pCVar24,fVar25,
                         (float)in_stack_fffffc88);
      if (iVar9 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.motion_controller,1,1);
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
      }
    }
    goto LAB_004a93c4;
  }
  uVar15 = (this_ptr->base).base.is_walking;
  if (uVar15 < 2) {
    if (uVar15 == 1) {
      iVar9 = 1;
    }
    else {
LAB_004a9c4c:
      iVar9 = 0;
    }
LAB_004a939d:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,iVar9,1);
  }
  else {
    if (uVar15 < 3) {
      iVar9 = 0x11;
      goto LAB_004a939d;
    }
    if (uVar15 != 3) goto LAB_004a9c4c;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_004a93c4:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  iVar9 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)this_ptr);
  if (iVar9 != 0) {
    pCVar3 = (this_ptr->base).victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (pCVar10 = (CGhoul *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
       pCVar10 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (g_CDemonSet_PTR_005be368,&((this_ptr->base).victim)->base);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_cc = (this_ptr->base).base.velocity.x * delta_time;
    local_c8 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar12 = &(this_ptr->base).base.position_delta;
    local_c4 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar24 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_d8 = local_cc + pCVar12->x;
    local_d4 = local_c8 + (this_ptr->base).base.position_delta.y;
    local_d0 = local_c4 + (this_ptr->base).base.position_delta.z;
    local_18c.x = local_d8 + pCVar24->x;
    local_18c.y = local_d4 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_18c.z = local_d0 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar12->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar24->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_18c);
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(this_ptr_00);
  local_b4 = (double)this_ptr->flinch_blend_weight;
  if (0.0 < local_b4) {
    local_60 = (SMotionTransition *)
               core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                         (&this_ptr_00->motion_controller,this_ptr->flinch_motion_index,
                          1.0 - this_ptr->flinch_blend_weight);
    fVar25 = 1.0 - this_ptr->flinch_blend_weight;
    local_5c = 1.0 - fVar25 * fVar25 * fVar25;
    local_14 = local_60;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
              (this_ptr_00,this_ptr->flinch_motion_index,(float)local_60,local_5c,_DAT_01c78c38,
               core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
    fVar25 = this_ptr->flinch_blend_weight - delta_time / 0.7f;
    this_ptr->flinch_blend_weight = fVar25;
    if (fVar25 < 0.0) {
      this_ptr->flinch_blend_weight = 0.0;
    }
  }
  core_charactr_cpp_CCharacter_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  if (((float)0.01 < ABS((this_ptr->base).base.turn_angle_accumulator)) ||
     (fVar25 = (this_ptr->base).base.position_delta.y,
     fVar1 = (this_ptr->base).base.position_delta.x, fVar2 = (this_ptr->base).base.position_delta.z,
     (float)0.01 < SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar25 * fVar25))) {
    iVar9 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                      (g_CSound_PTR_005bed68,this_ptr->sfx_handle);
    if (iVar9 == 0) {
      _sprintf(&stack0xfffffc88,"ghoul-walk-?.wav *%f",(double)(this_ptr->base).speed);
      uVar15 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,&stack0xfffffc88);
      this_ptr->sfx_handle = uVar15;
    }
  }
  else {
    core_sound_cpp_CSound_killSound_FUN_0052ebb0(g_CSound_PTR_005bed68,this_ptr->sfx_handle);
  }
  if ((this_ptr->base).pool_me == 0) {
    if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[9]] == 0) {
      fVar25 = 0.5;
      iVar9 = this_ptr->part_indices[9];
      iVar23 = _DAT_01c78c3c;
    }
    else {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                ((CCharacter *)this_ptr,this_ptr->part_indices[0],_DAT_01c78c28,0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[1],_DAT_01c78c20,0.2);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                ((CCharacter *)this_ptr,this_ptr->part_indices[2],_DAT_01c78c2c,0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],_DAT_01c78c24,0.2);
      }
      fVar25 = 0.7;
      iVar9 = this_ptr->part_indices[10];
      iVar23 = _DAT_01c78c14;
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427990
              ((CCharacter *)this_ptr,iVar9,iVar23,fVar25);
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_004277f0((CCharacter *)this_ptr);
  }
  if ((this_ptr->dark_waypoint != (CDemonActor *)0x0) && (iVar7 == 0x11)) {
    fVar25 = (this_ptr->base).base.base.location.position.x - (this_ptr->prev_position).x;
    fVar1 = (this_ptr->base).base.base.location.position.z - (this_ptr->prev_position).z;
    if (delta_time * (float)0.5 <= SQRT(fVar1 * fVar1 + fVar25 * fVar25)) {
      this_ptr->stuck_timer = 1.0;
    }
    else {
      fVar25 = this_ptr->stuck_timer - delta_time;
      this_ptr->stuck_timer = fVar25;
      if (fVar25 < 0.0) {
        this_ptr->heal_timer = 30.0;
        this_ptr->dark_waypoint = (CDemonActor *)0x0;
        this_ptr->is_berserk = 0;
      }
    }
  }
  pCVar16 = &(this_ptr->base).base.base.location;
  if ((CLocation *)&this_ptr->prev_position == pCVar16) {
    return;
  }
  (this_ptr->prev_position).x = (pCVar16->position).x;
  (this_ptr->prev_position).y = (this_ptr->base).base.base.location.position.y;
  (this_ptr->prev_position).z = (this_ptr->base).base.base.location.position.z;
  return;
}
