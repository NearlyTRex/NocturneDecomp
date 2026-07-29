// Name: core_ghoul.cpp_FUN_004a9270
// Address: 004a9270
// Address Range: [[004a9270, 004aadfc]]
// Convention: unknown
// Signature: void core_ghoul_cpp_FUN_004a9270(CGhoul *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_ghoul_cpp_FUN_004a9270(CGhoul *param_1,float param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  CCharacter *pCVar2;
  CDemonActor_vtable *pCVar3;
  bool bVar4;
  int iVar5;
  SMotion *pSVar6;
  int iVar7;
  CGhoul *pCVar8;
  EDeathState EVar9;
  CPathMap *pCVar10;
  CVector3f *pCVar11;
  int iVar12;
  CDemonActor *pCVar13;
  CVector3f *pCVar14;
  CGhoul *pCVar15;
  uint uVar16;
  CLocation *pCVar17;
  char *pcVar18;
  char *pcVar19;
  char cVar20;
  float10 fVar21;
  float10 fVar22;
  double dVar23;
  float fVar24;
  char *in_stack_fffffc88;
  float fVar25;
  CGhoul *in_stack_fffffc90;
  SDamageInfo local_314;
  SDamageInfo local_2d8;
  SDamageInfo local_29c;
  char local_260 [32];
  CBoundingBox3D local_240;
  CVector3f local_228;
  CVector3f local_21c;
  CVector3f local_210 [2];
  char local_1f8 [4];
  float local_1f4;
  float local_1f0;
  CVector3f local_1ec;
  CVector3f local_1e0;
  CVector3f local_1d4;
  UActorVTable local_1c8;
  CMotionList *local_1c4;
  float local_1c0;
  CVector3f local_1bc;
  CVector3f local_1b0;
  CVector3f local_1a4;
  CVector3f local_198;
  UActorVTable local_18c;
  CMotionList *local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  CVector3f local_174;
  CVector3f local_168;
  CVector3f local_15c;
  CVector3f local_150;
  CVector3f local_144;
  CMotionController_vtable *local_138;
  float local_134;
  float local_130;
  CVector3f local_12c;
  float local_120;
  float local_11c;
  float local_118;
  CVector3f local_114;
  CVector3f local_108;
  float local_fc;
  float local_f8;
  float local_f4;
  CVector3f local_f0;
  CVector3f local_e4;
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
  float local_84;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CGhoul *local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  CGhoul *local_18;
  float local_14;
  
  iVar5 = core_charactr_cpp_FUN_004259f0((CCharacter *)param_1,param_2);
  if (iVar5 == 0) {
    return;
  }
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.model.accumulated_root_motion.x =
       (param_1->base).base.model.accumulated_root_motion.y;
  local_64 = param_2 * (param_1->base).speed;
  local_18 = (CGhoul *)&(param_1->base).base.model;
switchD_004a9c0a_caseD_e:
  pCVar8 = local_18;
  if (0.0 < local_64) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      ((CMotionController *)local_18,&local_64);
    switch(iVar5) {
    case 5:
      pCVar2 = (param_1->base).victim;
      if ((pCVar2 != (CCharacter *)0x0) &&
         (EVar9 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2),
         EVar9 == DEATH_STATE_ALIVE)) {
        in_stack_fffffc88 = (char *)(param_1->base).victim;
        pCVar13 = (*(((((CGhoul *)in_stack_fffffc88)->base).base.base.vtable._uc)->_uc).getGrabber)
                            ((CCharacter *)in_stack_fffffc88);
        if ((pCVar13 == (CDemonActor *)0x0) &&
           (pCVar2 = (param_1->base).victim, in_stack_fffffc88 = (char *)param_1,
           iVar5 = (*(((pCVar2->base).vtable._uc)->_uc).canBeGrabbed)
                             (pCVar2,(CDemonActor *)param_1,0), iVar5 != 0)) {
          local_174.z = 2.5f;
          local_174.x = 0.0;
          local_174.y = 0.0;
          in_stack_fffffc90 = param_1;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    ((CDemonActor *)param_1,(CVector3f *)&local_1c8,&local_174);
          pCVar2 = (param_1->base).victim;
          fVar25 = (float)local_1c8 - (pCVar2->base).location.position.x;
          fVar24 = local_1c0 - (pCVar2->base).location.position.z;
          bVar4 = SQRT(fVar24 * fVar24 + fVar25 * fVar25) <= 1.0;
          pCVar8 = (CGhoul *)(param_1->base).victim;
          if ((ABS((float)local_1c4 - (pCVar8->base).base.base.location.position.y) <=
               (float)4) &&
             (((!bVar4 ||
               (iVar5 = (*(((pCVar8->base).base.base.vtable._uc)->_uc).getGrabbed)
                                  ((CCharacter *)pCVar8,(CDemonActor *)param_1,0),
               in_stack_fffffc90 = pCVar8, iVar5 != 0)) && (bVar4)))) break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                ((CMotionController *)local_18,1,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)param_1,iVar5);
      break;
    case 10:
      pCVar2 = (param_1->base).victim;
      if (pCVar2 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)pCVar8,1,1);
      }
      else {
        pCVar15 = (CGhoul *)(*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2);
        if (pCVar15 == param_1) {
          pCVar2 = (param_1->base).victim;
          EVar9 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2);
          if (EVar9 == DEATH_STATE_ALIVE) {
            pCVar2 = (param_1->base).victim;
            (*((pCVar2->base).vtable._ub)->getBoundingBox)(&pCVar2->base,&local_240);
            pCVar2 = (param_1->base).victim;
            local_168.x = (pCVar2->base).location.position.x;
            local_168.z = (pCVar2->base).location.position.z;
            local_168.y = (local_240.max.y - local_240.min.y) * (float)0.69999999999999996 +
                          (pCVar2->base).location.position.y;
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_29c);
            local_29c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(15.0,25.0)
            ;
            in_stack_fffffc88 = (char *)0x4a98e1;
            local_14 = local_29c.damage_amount;
            pCVar11 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                                (&((param_1->base).victim)->base,&local_f0,&local_168);
            if (&local_29c.impact_direction != pCVar11) {
              local_29c.impact_direction.x = pCVar11->x;
              local_29c.impact_direction.y = pCVar11->y;
              local_29c.impact_direction.z = pCVar11->z;
            }
            local_29c.attacker = (CDemonActor *)param_1;
            local_29c.wielder = (CDemonActor *)param_1;
            pCVar2 = (param_1->base).victim;
            (*(((pCVar2->base).vtable._uc)->_uc).processDamage)(pCVar2,&local_29c);
            local_ac = (double)local_29c.damage_amount;
            if (0.0 < local_ac) {
              iVar5 = 0x4a995e;
              dVar23 = round(local_ac * 2.5 * 0.25);
              local_70 = (float)(int)ROUND(dVar23);
              in_stack_fffffc88 = (char *)INT_005b96c4;
              core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                        ((CGore *)INT_005b96c4,&local_168,(CVector3f *)0x0,(int)local_70,iVar5);
            }
            pCVar2 = (param_1->base).victim;
            if (pCVar2->hit_points <= 0.0) {
              (*(((pCVar2->base).vtable._uc)->_uc).releaseFromGrab)(pCVar2);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        ((CMotionController *)local_18,1,1);
            }
            in_stack_fffffc90 = (CGhoul *)0x4a99c1;
            (*((param_1->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"ghoul-eat-?.wav");
          }
          else {
            pCVar2 = (param_1->base).victim;
            (*(((pCVar2->base).vtable._uc)->_uc).releaseFromGrab)(pCVar2);
            in_stack_fffffc90 = (CGhoul *)0x1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      ((CMotionController *)pCVar8,1,1);
            in_stack_fffffc88 = (char *)pCVar8;
          }
        }
        else {
          in_stack_fffffc88 = (char *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)pCVar8,1,1);
        }
      }
      break;
    case 0xb:
    case 0xc:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
                ((CDeformableModelInstance *)local_18);
      iVar7 = _DAT_01c78c18;
      if (iVar5 == 0xc) {
        iVar7 = _DAT_01c78c1c;
      }
      pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          ((CDeformableModelInstance *)local_18,&local_1e0,iVar7);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)param_1,&local_1d4,pCVar11);
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(8.0,12.0);
      iVar5 = 0x4a9a56;
      dVar23 = round((double)(local_14 * (float)0.25));
      local_58 = (float)(int)ROUND(dVar23);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                ((CGore *)INT_005b96c4,&local_1d4,(CVector3f *)0x0,(int)local_58,iVar5);
      (*((param_1->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)param_1,"ghoul-dig-?.wav @1.3");
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
                ((CDeformableModelInstance *)pCVar8);
      pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          ((CDeformableModelInstance *)pCVar8,&local_1b0,_DAT_01c78c14);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)param_1,&local_228,pCVar11);
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(8.0,12.0);
      iVar5 = 0x4a9ae1;
      dVar23 = round((double)(local_14 * (float)0.25));
      local_54 = (float)(int)ROUND(dVar23);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                ((CGore *)INT_005b96c4,&local_228,(CVector3f *)0x0,(int)local_54,iVar5);
      (*((param_1->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)param_1,"ghoul-eat-?.wav @1.3");
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
                ((CDeformableModelInstance *)pCVar8);
      pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          ((CDeformableModelInstance *)pCVar8,&local_1ec,_DAT_01c78c14);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)param_1,&local_15c,pCVar11);
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(8.0,12.0);
      iVar5 = 0x4a9b6c;
      dVar23 = round((double)(local_14 * (float)0.25));
      local_84 = (float)(int)ROUND(dVar23);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                ((CGore *)INT_005b96c4,&local_15c,(CVector3f *)0x0,(int)local_84,iVar5);
      iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
      if (iVar5 == 0) {
        pcVar18 = "ghoul-dig-?.wav @1.3";
      }
      else {
        pcVar18 = "ghoul-eat-?.wav @1.3";
      }
      pcVar19 = local_260;
      do {
        cVar20 = *pcVar18;
        *pcVar19 = cVar20;
        if (cVar20 == '\0') break;
        cVar20 = pcVar18[1];
        pcVar18 = pcVar18 + 2;
        pcVar19[1] = cVar20;
        pcVar19 = pcVar19 + 2;
      } while (cVar20 != '\0');
      (*((param_1->base).base.base.vtable._ub)->playSound)((CDemonActor *)param_1,local_260);
    }
    goto switchD_004a9c0a_caseD_e;
  }
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                       ((CMotionController *)local_18,1);
  local_8c = (double)param_2;
  fVar25 = (param_1->base).speed;
  fVar24 = (float)1.57079632675;
  (param_1->base).base.walk_step_speed =
       (param_1->base).speed * local_14 * (float)3 * param_2;
  (param_1->base).base.turn_speed = param_2 * fVar24 * fVar25;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     ((CMotionController *)local_18);
  iVar5 = pSVar6->state_index;
  if (iVar5 == 0x11) {
    fVar25 = (param_1->base).speed;
    fVar21 = (float10)8;
    (param_1->base).base.turn_speed = (float)(fVar21 * (float10)(param_1->base).base.turn_speed);
    (param_1->base).base.walk_step_speed = (float)((float10)local_8c * fVar21 * (float10)fVar25);
  }
  iVar7 = core_charactr_cpp_FUN_00428c00((CCharacter *)param_1,param_2);
  if (iVar7 == 0) {
    local_20 = -1.0;
    pCVar8 = (CGhoul *)&(param_1->base).base.model;
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       ((CMotionController *)pCVar8);
    switch(pSVar6->state_index) {
    case 0:
      if (param_1->stun_timer <= 0.0) {
        pCVar13 = param_1->dark_waypoint;
        if (pCVar13 == (CDemonActor *)0x0) {
          iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&param_1->base,param_2);
          if (iVar7 != 0) goto LAB_004aa1e6;
          (*(((param_1->base).base.base.vtable._ue)->_ue).updateVictim)(&param_1->base,param_2);
          if ((param_1->base).victim != (CCharacter *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(param_1->base).base.model.motion_controller,1,1);
            iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[0]);
            if (iVar7 != 0) {
              in_stack_fffffc88 = (char *)0x4aa254;
              iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[1]);
              if (iVar7 != 0) break;
            }
            in_stack_fffffc88 = (char *)param_1;
            uVar16 = (*((param_1->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)param_1,"ghoul-alert-?.wav");
            param_1->sfx_handles[0] = uVar16;
          }
        }
        else {
          local_180 = (pCVar13->location).position.x - (param_1->base).base.base.location.position.x
          ;
          local_17c = (pCVar13->location).position.y - (param_1->base).base.base.location.position.y
          ;
          local_178 = (pCVar13->location).position.z - (param_1->base).base.base.location.position.z
          ;
          if (SQRT(local_178 * local_178 + local_180 * local_180 + local_17c * local_17c) <
              (float)4) {
            fVar25 = (param_1->base).base.hit_points + param_2;
            param_1->heal_timer = param_1->heal_timer - param_2;
            (param_1->base).base.hit_points = fVar25;
            if ((float)100 < fVar25) {
              (param_1->base).base.hit_points = 100.0;
            }
            if (param_1->heal_timer < 0.0) {
              param_1->heal_timer = 0.0;
              param_1->dark_waypoint = (CDemonActor *)0x0;
            }
          }
        }
      }
      else {
        param_1->stun_timer = param_1->stun_timer - param_2;
      }
      break;
    case 1:
    case 0x11:
      if ((param_1->is_berserk != 0) && (iVar5 == 1)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,0x11,1);
      }
      if (0.0 < param_1->stun_timer) {
        param_1->stun_timer = param_1->stun_timer - param_2;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,0,1);
      }
      else {
        (param_1->base).base.model.accumulated_root_motion.z = 0.0;
        (param_1->base).base.model.accumulated_root_motion.y =
             (param_1->base).base.model.accumulated_root_motion.z;
        (param_1->base).base.model.accumulated_root_motion.x =
             (param_1->base).base.model.accumulated_root_motion.y;
        cVar20 = (param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[1]] !=
                 0;
        if ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[3]] != 0) {
          cVar20 = cVar20 + '\x01';
        }
        iVar12 = (**(code **)(*(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x14c) + 0x104))();
        iVar7 = 0x01C775EC;
        if (iVar12 == 0) {
          (*(((param_1->base).base.base.vtable._ue)->_ue).updateVictim)(&param_1->base,param_2);
          pCVar2 = (param_1->base).victim;
          if (pCVar2 == (CCharacter *)0x0) {
            in_stack_fffffc88 = (char *)param_1;
            pCVar8 = (CGhoul *)
                     core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&param_1->base,param_2);
            if (pCVar8 == (CGhoul *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(param_1->base).base.model.motion_controller,0,1);
              in_stack_fffffc88 = (char *)pCVar8;
            }
          }
          else {
            local_1f8 = (char  [4])
                        ((pCVar2->base).location.position.x -
                        (param_1->base).base.base.location.position.x);
            local_1f0 = (pCVar2->base).location.position.z -
                        (param_1->base).base.base.location.position.z;
            local_1f4 = 0.0;
            if ((((param_1->base).base.hit_points < (float)25) && (cVar20 != '\0')) &&
               (param_1->dark_waypoint == (CDemonActor *)0x0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004a9040(param_1,param_2);
            }
            local_30 = (CGhoul *)&(param_1->base).base.model;
            pCVar13 = param_1->dark_waypoint;
            if (pCVar13 == (CDemonActor *)0x0) {
              fVar25 = 0.17453292;
              in_stack_fffffc88 = (char *)0x3f800000;
              local_fc = 0.0;
              local_f4 = 2.5f;
              local_f8 = 0.0;
              pCVar2 = (param_1->base).victim;
              pCVar10 = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
              iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                                ((CCharacter *)param_1,
                                 &(((param_1->base).victim)->base).location.position,pCVar10,
                                 (CVector3f *)in_stack_fffffc88,fVar25,(float)in_stack_fffffc90);
              if (iVar7 < 0) {
                in_stack_fffffc88 = (char *)local_30;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          ((CMotionController *)local_30,0,1);
              }
              else if (((0 < iVar7) && (cVar20 != '\0')) &&
                      (((param_1->base).attack_cooldown <= 0.0 &&
                       ((pCVar2 = (param_1->base).victim,
                        pCVar13 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
                        pCVar13 == (CDemonActor *)0x0 && (param_1->flinch_blend_weight <= 0.0))))))
              {
                local_48 = SQRT(local_1f0 * local_1f0 +
                                (float)local_1f8 * (float)local_1f8 + local_1f4 * local_1f4);
                local_24 = 0.0;
                local_40 = 0.0;
                local_38 = 0.0;
                if ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[3]]
                    != 0) {
                  local_24 = (1.0 - ABS(local_48 - 3.4f) / 3.4f) *
                             (float)0.29999999999999999;
                }
                if ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[1]]
                    != 0) {
                  local_40 = (1.0 - ABS(local_48 - 2.5f) / 2.5f) *
                             (float)0.40000000000000002;
                }
                pCVar2 = (param_1->base).victim;
                in_stack_fffffc88 = (char *)0x4aa5e8;
                local_44 = local_48;
                iVar7 = (*(((pCVar2->base).vtable._uc)->_uc).canBeGrabbed)
                                  (pCVar2,(CDemonActor *)param_1,0);
                if (iVar7 != 0) {
                  local_38 = (1.0 - ABS(local_48 - 2.5f) / 2.5f) *
                             (float)0.29999999999999999;
                }
                local_3c = local_24 + local_40;
                local_34 = local_3c + local_38;
                if (0.0 < local_34) {
                  local_28 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,local_34);
                  if (local_24 <= local_28) {
                    if (local_3c <= local_28) {
                      iVar7 = 0xb;
                    }
                    else {
                      iVar7 = 0xc;
                    }
                  }
                  else {
                    iVar7 = 2;
                  }
                  local_14 = local_28;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                            (&(param_1->base).base.model.motion_controller,iVar7,1);
                  (param_1->base).attack_cooldown = 0.7;
                }
              }
            }
            else {
              fVar25 = 0.0;
              in_stack_fffffc88 = (char *)0x40400000;
              pCVar10 = (*((pCVar13->vtable)._ub)->getPathMap)(pCVar13);
              iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                                ((CCharacter *)param_1,&(param_1->dark_waypoint->location).position,
                                 pCVar10,(CVector3f *)in_stack_fffffc88,fVar25,
                                 (float)in_stack_fffffc90);
              if (0 < iVar7) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          ((CMotionController *)local_30,0,1);
                in_stack_fffffc88 = (char *)0x4aa401;
                local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,30.0);
                param_1->heal_timer = local_14;
              }
              if (iVar7 < 0) {
                param_1->heal_timer = 30.0;
                param_1->dark_waypoint = (CDemonActor *)0x0;
              }
              if (iVar5 == 1) {
                in_stack_fffffc88 = (char *)&(param_1->base).base.model;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          ((CMotionController *)in_stack_fffffc88,0x11,1);
              }
            }
          }
        }
        else {
          if (param_1->pending_eat_state < 0) {
            cVar20 = (param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[1]]
                     != 0;
            if ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[3]] != 0
               ) {
              cVar20 = cVar20 + '\x01';
            }
            if (cVar20 != '\0') {
              if (cVar20 == '\x01') {
                param_1->pending_eat_state = 0xe;
                *(uint *)(iVar7 + 0x220) = 1;
              }
              else {
                iVar7 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
                param_1->pending_eat_state = (iVar7 == 0) + 0xd;
                *(uint *)(0x01C775EC + 0x220) = 1;
              }
              goto LAB_004aa6a3;
            }
            param_1->pending_eat_state = 0;
          }
          else {
LAB_004aa6a3:
            if (param_1->pending_eat_state != 0) {
              local_2c = 2.0f;
              if (param_1->pending_eat_state == 0xe) {
                local_2c = 5.5f;
              }
              fVar24 = 0.08726646;
              fVar25 = 0.5;
              local_e4.z = local_2c;
              pCVar11 = &local_e4;
              local_e4.x = 0.0;
              iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
              local_e4.y = 0.0;
              pCVar10 = (CPathMap *)(**(code **)(*(int *)(iVar7 + 0x14c) + 0xbc))(iVar7);
              pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                                  ((CDeformableModelInstance *)
                                   (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x150),&local_198,0);
              pCVar14 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                  (*(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8),&local_150,
                                   pCVar14);
              iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                                ((CCharacter *)param_1,pCVar14,pCVar10,pCVar11,fVar25,fVar24);
              if (((0 < iVar7) &&
                  (iVar7 = (**(code **)(*(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x14c) +
                                       0x104))(), iVar7 == 2)) &&
                 (core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                            (&(param_1->base).base.model.motion_controller,
                             param_1->pending_eat_state,1), param_1->pending_eat_state == 0xd)) {
                pCVar3 = (param_1->base).base.base.vtable._ub;
                local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.5,1.2);
                (*pCVar3->playSoundWithDelay)
                          ((CDemonActor *)param_1,"ghoul-scream-!-?.wav",local_14);
              }
              break;
            }
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,0,1);
        }
      }
      break;
    case 2:
      pCVar2 = (param_1->base).victim;
      if (pCVar2 == (CCharacter *)0x0) {
LAB_004aa1e6:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,1,1);
      }
      else {
        pCVar13 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2);
        if (pCVar13 == (CDemonActor *)0x0) {
          in_stack_fffffc88 = (char *)0x3f000000;
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.2,0.5);
          iVar7 = param_1->part_indices[3];
          (param_1->base).attack_cooldown = local_14;
          if ((param_1->base).base.model.part_data.visibility_flags[iVar7] != 0) {
            local_50 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                                 ((CMotionController *)pCVar8);
            local_9c = (double)local_50;
            in_stack_fffffc88 = (char *)pCVar8;
            local_14 = local_50;
            if ((local_50 <= (float)2) && (local_20 = 3.4f, 1.0 <= local_9c)
               ) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_2d8);
              local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
              local_2d8.damage_amount = local_14;
              if (param_1->is_berserk != 0) {
                local_2d8.damage_amount = local_14 * (float)2;
              }
              in_stack_fffffc88 = (char *)&local_2d8;
              local_2d8.attacker = (CDemonActor *)param_1;
              local_2d8.wielder = (CDemonActor *)param_1;
              fVar25 = 0.2;
              pCVar11 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                  (&local_114,&CVector3f_01c78bcc,
                                   (CMatrix3x4f *)
                                   (param_1->base).base.model.bone_transform.bone_world_matrices
                                   [_DAT_01c78c1c].m);
              pCVar11 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                  ((CDemonActor *)param_1,&local_1bc,pCVar11);
              iVar7 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0
                                (&param_1->base,pCVar11,fVar25,(SDamageInfo *)in_stack_fffffc88);
              if (iVar7 != 0) {
                in_stack_fffffc88 = "gh-hits?.wav";
                (*((param_1->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)param_1,"gh-hits?.wav");
              }
            }
          }
        }
        else {
          in_stack_fffffc88 = (char *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)pCVar8,1,1);
        }
      }
      break;
    case 10:
      if ((((param_1->base).pool_me == 0) && (param_1->lives_left < 1)) &&
         ((param_1->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                            ((CDeformableModelInstance *)pCVar8,&local_12c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_108,pCVar11);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_108,0);
        (param_1->base).pool_me = 1;
      }
      param_1->is_berserk = 0;
      if (((0 < param_1->spasm_count) || (0 < param_1->lives_left)) &&
         (iVar7 = param_1->spasm_timer - _DAT_01bd1d80, param_1->spasm_timer = iVar7, iVar7 < 1)) {
        if (param_1->lives_left < 1) {
          param_1->spasm_count = param_1->spasm_count + -1;
        }
        if ((0 < param_1->spasm_count) || (0 < param_1->lives_left)) {
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(1.0,12.0);
          iVar12 = 0xf;
          iVar7 = 0x4a9e4f;
          dVar23 = round((double)(local_14 * (float)65536));
          param_1->spasm_timer = (int)ROUND(dVar23);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,iVar7,iVar12);
        }
      }
      if (0 < param_1->lives_left) {
        if (param_1->arise_timer < 1) {
          iVar7 = param_1->arise_timer + _DAT_01bd1d80;
          param_1->arise_timer = iVar7;
          if (iVar7 < 0) {
            (*(((param_1->base).base.base.vtable._ue)->_ue).updateVictim)(&param_1->base,param_2);
            pCVar2 = (param_1->base).victim;
            if (pCVar2 != (CCharacter *)0x0) {
              local_120 = (param_1->base).base.base.location.position.x -
                          (pCVar2->base).location.position.x;
              local_11c = (param_1->base).base.base.location.position.y -
                          (pCVar2->base).location.position.y;
              local_118 = (param_1->base).base.base.location.position.z -
                          (pCVar2->base).location.position.z;
              if (&local_c0 != &local_120) {
                local_c0 = local_120;
                local_bc = local_11c;
                local_b8 = local_118;
              }
              local_7c = local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc;
              local_78 = (float)(((int)local_7c >> 1) + (int)CVector3f_01c70708.y);
              if (local_78 < (float)8) goto LAB_004a9eb3;
            }
          }
          else {
            param_1->arise_timer = 0;
LAB_004a9eb3:
            local_1c = (param_1->base).base.collision_cylinder_top;
            if (local_1c < (param_1->base).base.collision_cylinder_bottom) {
              local_1c = (param_1->base).base.model.bounding_box.max.y;
            }
            if (local_1c < (param_1->base).base.collision_cylinder_bottom) {
              local_1c = (param_1->base).base.collision_cylinder_bottom + (float)0.5;
            }
            fVar25 = 0.0;
            do {
              local_68 = (float)(int)fVar25 * (float)6.2831853070000001 * (float)0.25;
              local_14 = fVar25;
              core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(CDemonActor *)param_1);
              fVar21 = (float10)fcos((float10)local_68);
              fVar22 = (float10)fsin((float10)local_68);
              local_6c = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00510a40
                                   (0x01E57284,(param_1->base).base.base.location.position.x,
                                    (param_1->base).base.base.location.position.z,
                                    (float)(fVar22 * (float10)0.050000000000000003),
                                    (float)(fVar21 * (float10)0.050000000000000003),
                                    (param_1->base).base.collision_cylinder_radius,
                                    (param_1->base).base.base.location.position.y +
                                    (param_1->base).base.collision_cylinder_bottom,
                                    (param_1->base).base.base.location.position.y + local_1c);
              local_14 = local_6c;
              core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
              if (local_6c < 1.0) break;
              fVar25 = (float)((int)fVar25 + 1);
            } while ((int)fVar25 < 4);
            if ((int)fVar25 < 4) {
              param_1->arise_timer = 3;
              (param_1->base).victim = (CCharacter *)0x0;
            }
            else {
              local_14 = (float)(param_1->lives_left + 1);
              local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                   (10.0,(float)(int)local_14 * (float)10);
              (param_1->base).base.hit_points = local_14;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(param_1->base).base.model.motion_controller,0x10,1);
            }
          }
        }
        else {
          iVar7 = param_1->arise_timer - _DAT_01bd1d80;
          param_1->arise_timer = iVar7;
          if (iVar7 < 1) {
            local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,30.0);
            in_stack_fffffc88 = (char *)0x4a9e85;
            dVar23 = round((double)(-local_14 * 65536.0f));
            param_1->arise_timer = (int)ROUND(dVar23);
          }
        }
      }
      break;
    case 0xb:
      pCVar2 = (param_1->base).victim;
      if (pCVar2 == (CCharacter *)0x0) {
LAB_004aaa0a:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)pCVar8,1,1);
      }
      else {
        pCVar13 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2);
        if (pCVar13 == (CDemonActor *)0x0) {
          local_20 = 2.5f;
        }
        else {
          in_stack_fffffc88 = (char *)(param_1->base).victim;
          pCVar15 = (CGhoul *)
                    (*(((((CGhoul *)in_stack_fffffc88)->base).base.base.vtable._uc)->_uc).getGrabber
                    )((CCharacter *)in_stack_fffffc88);
          if (pCVar15 != param_1) {
            in_stack_fffffc88 = (char *)0x1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      ((CMotionController *)pCVar8,1,1);
          }
        }
      }
      break;
    case 0xc:
      pCVar2 = (param_1->base).victim;
      if ((pCVar2 == (CCharacter *)0x0) ||
         (pCVar13 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
         pCVar13 != (CDemonActor *)0x0)) goto LAB_004aaa0a;
      in_stack_fffffc88 = (char *)0x3f000000;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.2,0.5);
      iVar7 = param_1->part_indices[1];
      (param_1->base).attack_cooldown = local_14;
      if ((param_1->base).base.model.part_data.visibility_flags[iVar7] != 0) {
        local_4c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                             ((CMotionController *)pCVar8);
        local_a4 = (double)local_4c;
        in_stack_fffffc88 = (char *)pCVar8;
        local_14 = local_4c;
        if (local_4c <= (float)2) {
          local_20 = 2.5f;
          if (1.0 <= local_a4) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_314);
            local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
            local_314.damage_amount = local_14;
            if (param_1->is_berserk != 0) {
              local_314.damage_amount = local_14 * (float)2;
            }
            in_stack_fffffc88 = (char *)&local_314;
            local_314.attacker = (CDemonActor *)param_1;
            local_314.wielder = (CDemonActor *)param_1;
            fVar25 = 0.4;
            pCVar11 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                (local_210,&CVector3f_01c78bc0,
                                 (CMatrix3x4f *)
                                 (param_1->base).base.model.bone_transform.bone_world_matrices
                                 [_DAT_01c78c18].m);
            pCVar11 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                ((CDemonActor *)param_1,&local_21c,pCVar11);
            iVar7 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0
                              (&param_1->base,pCVar11,fVar25,(SDamageInfo *)in_stack_fffffc88);
            if (iVar7 != 0) {
              in_stack_fffffc88 = "gh-hits?.wav";
              (*((param_1->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)param_1,"gh-hits?.wav");
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar7 = param_1->burp_timer - _DAT_01bd1d80;
      param_1->burp_timer = iVar7;
      if (iVar7 < 1) {
        (*((param_1->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"burp[1,2].wav");
        in_stack_fffffc88 = (char *)0x41700000;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(15.0,30.0);
        dVar23 = round((double)(local_14 * (float)65536));
        param_1->burp_timer = (int)ROUND(dVar23);
      }
      (*(((param_1->base).base.base.vtable._ue)->_ue).updateVictim)(&param_1->base,param_2);
      if ((param_1->base).victim != (CCharacter *)0x0) {
        in_stack_fffffc88 = (char *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,0,1);
      }
    }
    if (((0.0 <= local_20) && (param_1->flinch_blend_weight <= 0.0)) &&
       ((param_1->base).victim != (CCharacter *)0x0)) {
      local_138 = (CMotionController_vtable *)0x0;
      local_134 = 0.0;
      local_130 = local_20;
      fVar25 = 0.5235988;
      pCVar14 = (CVector3f *)0x40400000;
      pCVar2 = (param_1->base).victim;
      pCVar10 = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
      pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (&((param_1->base).victim)->model,&local_1a4,0);
      pCVar11 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                          (&((param_1->base).victim)->base,&local_144,pCVar11);
      iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        ((CCharacter *)param_1,pCVar11,pCVar10,pCVar14,fVar25,
                         (float)in_stack_fffffc88);
      if (iVar7 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,1,1);
        (param_1->base).base.turn_angle_accumulator = 0.0;
      }
    }
    goto LAB_004a93c4;
  }
  uVar16 = (param_1->base).base.is_walking;
  if (uVar16 < 2) {
    if (uVar16 == 1) {
      iVar7 = 1;
    }
    else {
LAB_004a9c4c:
      iVar7 = 0;
    }
LAB_004a939d:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,iVar7,1);
  }
  else {
    if (uVar16 < 3) {
      iVar7 = 0x11;
      goto LAB_004a939d;
    }
    if (uVar16 != 3) goto LAB_004a9c4c;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n");
  }
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.model.accumulated_root_motion.x =
       (param_1->base).base.model.accumulated_root_motion.y;
LAB_004a93c4:
  if (0.0 < (param_1->base).attack_cooldown) {
    (param_1->base).attack_cooldown = (param_1->base).attack_cooldown - param_2;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  iVar7 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)param_1);
  if (iVar7 != 0) {
    pCVar2 = (param_1->base).victim;
    if ((pCVar2 != (CCharacter *)0x0) &&
       (pCVar8 = (CGhoul *)(*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
       pCVar8 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&((param_1->base).victim)->base);
    }
    (param_1->base).base.velocity.y =
         (param_1->base).base.velocity.y - param_2 * (float)32;
    local_cc = (param_1->base).base.velocity.x * param_2;
    local_c8 = (param_1->base).base.velocity.y * param_2;
    pCVar11 = &(param_1->base).base.position_delta;
    local_c4 = param_2 * (param_1->base).base.velocity.z;
    pCVar14 = &(param_1->base).base.model.accumulated_root_motion;
    local_d8 = local_cc + pCVar11->x;
    local_d4 = local_c8 + (param_1->base).base.position_delta.y;
    local_d0 = local_c4 + (param_1->base).base.position_delta.z;
    local_18c = (UActorVTable)(local_d8 + pCVar14->x);
    local_188 = (CMotionList *)(local_d4 + (param_1->base).base.model.accumulated_root_motion.y);
    local_184 = local_d0 + (param_1->base).base.model.accumulated_root_motion.z;
    (param_1->base).base.position_delta.z = 0.0;
    (param_1->base).base.position_delta.y = (param_1->base).base.position_delta.z;
    pCVar11->x = (param_1->base).base.position_delta.y;
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    pCVar14->x = (param_1->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050
              ((CCharacter *)param_1,(CVector3f *)&local_18c);
  }
  this_ptr = &(param_1->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(this_ptr);
  local_b4 = (double)param_1->flinch_blend_weight;
  if (0.0 < local_b4) {
    local_60 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                         (&this_ptr->motion_controller,param_1->flinch_motion_index,
                          1.0 - param_1->flinch_blend_weight);
    fVar25 = 1.0 - param_1->flinch_blend_weight;
    local_5c = 1.0 - fVar25 * fVar25 * fVar25;
    local_14 = local_60;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
              (this_ptr,param_1->flinch_motion_index,local_60,local_5c,_DAT_01c78c38,
               core_skeleton_cpp_FUN_0051b650);
    fVar25 = param_1->flinch_blend_weight - param_2 / 0.7f;
    param_1->flinch_blend_weight = fVar25;
    if (fVar25 < 0.0) {
      param_1->flinch_blend_weight = 0.0;
    }
  }
  core_charactr_cpp_FUN_0042a150((CCharacter *)param_1,param_2);
  if (((float)0.01 < ABS((param_1->base).base.turn_angle_accumulator)) ||
     (fVar25 = (param_1->base).base.position_delta.y, fVar24 = (param_1->base).base.position_delta.x
     , fVar1 = (param_1->base).base.position_delta.z,
     (float)0.01 < SQRT(fVar1 * fVar1 + fVar24 * fVar24 + fVar25 * fVar25))) {
    iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0(0x02DC9450,param_1->sfx_handle);
    if (iVar7 == 0) {
      _sprintf(&stack0xfffffc88,"ghoul-walk-?.wav *%f",(double)(param_1->base).speed);
      uVar16 = (*((param_1->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)param_1,&stack0xfffffc88);
      param_1->sfx_handle = uVar16;
    }
  }
  else {
    core_sound_cpp_CSound_killSound_FUN_0052ebb0(0x02DC9450,param_1->sfx_handle);
  }
  if ((param_1->base).pool_me == 0) {
    if ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[9]] == 0) {
      fVar25 = 0.5;
      iVar7 = param_1->part_indices[9];
      iVar12 = _DAT_01c78c3c;
    }
    else {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                ((CCharacter *)param_1,param_1->part_indices[0],_DAT_01c78c28,0.2);
      if ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[0]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  ((CCharacter *)param_1,param_1->part_indices[1],_DAT_01c78c20,0.2);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                ((CCharacter *)param_1,param_1->part_indices[2],_DAT_01c78c2c,0.2);
      if ((param_1->base).base.model.part_data.visibility_flags[param_1->part_indices[2]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  ((CCharacter *)param_1,param_1->part_indices[3],_DAT_01c78c24,0.2);
      }
      fVar25 = 0.7;
      iVar7 = param_1->part_indices[10];
      iVar12 = _DAT_01c78c14;
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427990
              ((CCharacter *)param_1,iVar7,iVar12,fVar25);
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_004277f0((CCharacter *)param_1);
  }
  if ((param_1->dark_waypoint != (CDemonActor *)0x0) && (iVar5 == 0x11)) {
    fVar25 = (param_1->base).base.base.location.position.x - (param_1->prev_position).x;
    fVar24 = (param_1->base).base.base.location.position.z - (param_1->prev_position).z;
    if (param_2 * (float)0.5 <= SQRT(fVar24 * fVar24 + fVar25 * fVar25)) {
      param_1->stuck_timer = 1.0;
    }
    else {
      param_2 = param_1->stuck_timer - param_2;
      param_1->stuck_timer = param_2;
      if (param_2 < 0.0) {
        param_1->heal_timer = 30.0;
        param_1->dark_waypoint = (CDemonActor *)0x0;
        param_1->is_berserk = 0;
      }
    }
  }
  pCVar17 = &(param_1->base).base.base.location;
  if ((CLocation *)&param_1->prev_position == pCVar17) {
    return;
  }
  (param_1->prev_position).x = (pCVar17->position).x;
  (param_1->prev_position).y = (param_1->base).base.base.location.position.y;
  (param_1->prev_position).z = (param_1->base).base.base.location.position.z;
  return;
}
