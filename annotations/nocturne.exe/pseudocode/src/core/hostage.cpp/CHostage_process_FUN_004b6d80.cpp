// Name: core_hostage.cpp_CHostage_process_FUN_004b6d80
// Address: 004b6d80
// Address Range: [[004b6d80, 004b819a]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_process_FUN_004b6d80(CHostage *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hostage_cpp_CHostage_process_FUN_004b6d80(CHostage *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  float fVar4;
  CCharacter_full_vtable *pCVar5;
  EWalkState EVar6;
  CHero *pCVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  CConsole *pCVar12;
  int iVar13;
  uint uVar14;
  CDoor *pCVar15;
  CSkeleton *this_ptr_00;
  CVector3f *pCVar16;
  CDemonActor *pCVar17;
  CCharacter *pCVar18;
  CWayPoint *pCVar19;
  CVector3f *pCVar20;
  SMotion *pSVar21;
  CDemonActor *pCVar22;
  int iVar23;
  char *bone_name;
  ulonglong in_stack_fffffe40;
  double dVar24;
  float local_1a0;
  float local_19c;
  float local_198;
  SDamageInfo local_194;
  CVector3f local_158;
  CVector3f local_14c;
  CVector3f local_140;
  CVector3f local_134;
  float local_128;
  float local_124;
  float local_120;
  CVector3f local_11c;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  CVector3f local_ec;
  float local_e0;
  float local_dc;
  float local_d8;
  CVector3f local_d4;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0;
  float local_a4;
  uint local_a0;
  float local_9c;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80 [2];
  float local_68;
  float local_58;
  float local_54;
  int local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  CMotionController *local_28;
  CDoor *local_24;
  float local_20;
  float local_18;
  
  switch(this_ptr->hostage_state) {
  case 0:
  case 4:
    (this_ptr->base).base.ai_detection_range_max = 50.0;
    (this_ptr->base).base.ai_detection_range_min = 20.0;
    break;
  case 1:
  case 2:
    (this_ptr->base).base.ai_detection_range_max = 75.0;
    (this_ptr->base).base.ai_detection_range_min = 40.0;
    break;
  case 3:
  case 5:
    (this_ptr->base).base.ai_detection_range_max = 99999.0;
    (this_ptr->base).base.ai_detection_range_min = 99999.0;
  }
  if ((this_ptr->base).base.hit_points <= 0.0) {
    (this_ptr->base).base.ai_detection_range_max = 99999.0;
    (this_ptr->base).base.ai_detection_range_min = 99999.0;
  }
  iVar13 = core_charactr_cpp_CCharacter_processCharacter_FUN_004259f0
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar13 == 0) {
    return;
  }
  local_1a0 = delta_time;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_28 = &(this_ptr->base).base.model.base;
  while (pCVar22 = (CDemonActor *)in_stack_fffffe40, 0.0 < local_1a0) {
    uVar14 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(local_28,&local_1a0);
    if (uVar14 < 0xb) {
      if (uVar14 == 6) {
        pCVar22 = (this_ptr->base).base.grabbed_by;
        if (pCVar22 != (CDemonActor *)0x0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (g_CConsole_PTR_005ad350,"%s escaping from %s\n",this_ptr,pCVar22);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_194);
          local_194.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,15.0);
          local_194.attacker = (CDemonActor *)this_ptr;
          local_194.wielder = (CDemonActor *)this_ptr;
          pCVar18 = (CCharacter *)(this_ptr->base).base.grabbed_by;
          local_18 = local_194.damage_amount;
          (*(((pCVar18->base).vtable._uc)->_uc).processDamage)(pCVar18,&local_194);
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,uVar14);
      }
    }
    else if (uVar14 < 0xc) {
      local_24 = (CDoor *)0x0;
      local_140.x = 0.0;
      local_140.y = 0.0;
      local_68 = 1e+30;
      local_140.z = 1.5;
      iVar13 = 0;
      iVar23 = 0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)this_ptr,&local_ec,&local_140);
      while (iVar13 < g_CDemonSet_PTR_005be368->actor_count) {
        pCVar15 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040d890
                                     (*(CDemonActor **)
                                       ((int)g_CDemonSet_PTR_005be368->actors + iVar23),
                                      g_CDoorActorType_01af4e9c.name_hash);
        if (pCVar15 == (CDoor *)0x0) {
LAB_004b6f82:
          iVar13 = iVar13 + 1;
          iVar23 = iVar23 + 4;
        }
        else {
          local_110 = (pCVar15->base).location.position.x - local_ec.x;
          local_10c = (pCVar15->base).location.position.y - local_ec.y;
          local_108 = (pCVar15->base).location.position.z - local_ec.z;
          if ((float)5 < ABS(local_10c)) goto LAB_004b6f82;
          local_10c = 0.0;
          local_20 = SQRT(local_108 * local_108 + local_110 * local_110);
          if (local_68 <= local_20) goto LAB_004b6f82;
          iVar13 = iVar13 + 1;
          iVar23 = iVar23 + 4;
          local_68 = local_20;
          local_24 = pCVar15;
        }
      }
      if (local_24 != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00456220(local_24,0.1);
      }
    }
    else if (uVar14 == 0xc) {
      pCVar22 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (pCVar22 != (CDemonActor *)0x0) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
        in_stack_fffffe40 = CONCAT44(pCVar22,&g_HeroActors[g_LocalHeroIndex]->inventory);
        core_inv_cpp_CInventory_addItem_FUN_004bf360
                  (&g_HeroActors[g_LocalHeroIndex]->inventory,pCVar22,1);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,uVar14);
    }
  }
  fVar4 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  local_2c = 0;
  (this_ptr->base).base.turn_speed = delta_time * fVar4;
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(local_28,10);
  if (0.0 < local_18) {
    local_2c = 1;
  }
  uVar14 = (uint)(0.0 < local_18);
  if ((this_ptr->base).base.hit_points <= 0.0) {
    local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                         (&(this_ptr->base).base.model.base,5);
    if ((local_18 <= 0.0) &&
       (local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                             (&(this_ptr->base).base.model.base,8), local_18 <= 0.0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(this_ptr->base).base.model.base,6,1);
    }
LAB_004b7170:
    uVar14 = 1;
    goto switchD_004b7b39_default;
  }
  pCVar17 = (this_ptr->base).base.grabbed_by;
  if (pCVar17 == (CDemonActor *)0x0) {
    pCVar2 = &(this_ptr->base).base.model;
    local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(&pCVar2->base,3);
    if (((0.0 < local_18) ||
        (local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                              (&pCVar2->base,5), 0.0 < local_18)) ||
       (local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                             (&pCVar2->base,8), 0.0 < local_18)) goto LAB_004b7170;
    iVar13 = core_charactr_cpp_CCharacter_processWalking_FUN_00428c00
                       ((CCharacter *)this_ptr,delta_time);
    pCVar12 = g_CConsole_PTR_005ad350;
    if (iVar13 == 0) {
      switch(this_ptr->hostage_state) {
      case 0:
        iVar13 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004b81a0(this_ptr,delta_time);
        if (iVar13 == 0) {
          pCVar7 = g_HeroActors[g_LocalHeroIndex];
          local_e0 = (pCVar7->base).base.location.position.x -
                     (this_ptr->base).base.base.location.position.x;
          local_dc = (pCVar7->base).base.location.position.y -
                     (this_ptr->base).base.base.location.position.y;
          local_d8 = (pCVar7->base).base.location.position.z -
                     (this_ptr->base).base.base.location.position.z;
          if (((0.0 < this_ptr->rescue_distance) &&
              (this_ptr->rescue_distance <=
               SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc))) ||
             (iVar13 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                 (0x01C03A10,this_ptr->rescue_condition),
             pCVar12 = g_CConsole_PTR_005ad350, iVar13 == 0)) goto LAB_004b7672;
          this_ptr->hostage_state = 1;
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (pCVar12,"%s rescued, entering follow mode\n",this_ptr);
          core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                    (0x01C03A10,this_ptr->hero_found_me_event);
        }
        break;
      case 1:
        pCVar19 = (CWayPoint *)this_ptr->goal_way_point;
        if ((pCVar19 != (CWayPoint *)0x0) &&
           (fVar4 = (this_ptr->base).base.base.location.position.x -
                    (pCVar19->base).base.location.position.x,
           fVar3 = (this_ptr->base).base.base.location.position.z -
                   (pCVar19->base).base.location.position.z,
           SQRT(fVar3 * fVar3 + fVar4 * fVar4) < (float)40)) {
          pCVar19 = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_00552680
                              ((CWayPoint *)&(this_ptr->base).base.base.location,pCVar19);
          this_ptr->next_way_point = (CDemonActor *)pCVar19;
        }
        pCVar12 = g_CConsole_PTR_005ad350;
        if (this_ptr->next_way_point == (CDemonActor *)0x0) {
          iVar13 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004b81a0(this_ptr,delta_time);
          if (iVar13 == 0) {
            iVar13 = core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042af70
                               ((CCharacter *)this_ptr,delta_time);
            if (iVar13 == 0) {
              core_charactr_cpp_CCharacter_followActor_FUN_00428780
                        ((CCharacter *)this_ptr,(CDemonActor *)g_HeroActors[g_LocalHeroIndex],5.0,
                         10.0,&this_ptr->follow_state);
            }
            else {
              this_ptr->follow_state = iVar13;
            }
            uVar8 = this_ptr->follow_state;
            pCVar2 = &(this_ptr->base).base.model;
            if (uVar8 < 2) {
              if (uVar8 != 1) goto LAB_004b7672;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar2->base,1,1);
            }
            else if (uVar8 < 3) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar2->base,2,1);
            }
            else {
              if (uVar8 != 3) goto LAB_004b7672;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar2->base,0,1);
              pCVar12 = g_CConsole_PTR_005ad350;
              this_ptr->hostage_state = 2;
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (pCVar12,"%s left behind!\n",this_ptr);
              core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                        (0x01C03A10,this_ptr->hero_left_me_event);
              (this_ptr->base).base.hero_proximity_timer = 0.0;
            }
          }
        }
        else {
          this_ptr->hostage_state = 3;
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (pCVar12,"%s was led close enough, going home!\n",this_ptr);
          core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                    (0x01C03A10,this_ptr->going_to_sit_down_event);
          (this_ptr->base).base.hero_proximity_timer = 0.0;
        }
        break;
      case 2:
        iVar13 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004b81a0(this_ptr,delta_time);
        if (iVar13 == 0) {
          core_charactr_cpp_CCharacter_followActor_FUN_00428780
                    ((CCharacter *)this_ptr,(CDemonActor *)g_HeroActors[g_LocalHeroIndex],4.0,10.0,
                     &this_ptr->follow_state);
          uVar8 = this_ptr->follow_state;
          local_50 = 0;
          if (uVar8 == 0) {
            iVar13 = 0;
LAB_004b794d:
            this_ptr->hostage_state = 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar2->base,iVar13,1);
          }
          else {
            if (uVar8 < 2) {
              iVar13 = 1;
              goto LAB_004b794d;
            }
            if (uVar8 == 2) {
              iVar13 = 2;
              goto LAB_004b794d;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(this_ptr->base).base.model.base,0,1);
            if (local_50 == 0) break;
          }
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (g_CConsole_PTR_005ad350,"%s was left behind, but now can follow again!\n",this_ptr);
          core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                    (0x01C03A10,this_ptr->hero_came_back_event);
        }
        break;
      case 3:
        if (this_ptr->next_way_point == (CDemonActor *)0x0) {
          this_ptr->hostage_state = 2;
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (pCVar12,"%s doesn't know next waypoint going home.  Help me!\n",this_ptr);
        }
        else {
          core_charactr_cpp_CCharacter_followActor_FUN_00428780
                    ((CCharacter *)this_ptr,this_ptr->next_way_point,1.0,-1.0,
                     &this_ptr->follow_state);
          switch(this_ptr->follow_state) {
          case 0:
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (g_CConsole_PTR_005ad350,"%s reached waypoint %s!\n",this_ptr,
                       this_ptr->next_way_point);
            pCVar12 = g_CConsole_PTR_005ad350;
            if ((CWayPoint *)this_ptr->next_way_point == (CWayPoint *)this_ptr->goal_way_point) {
              this_ptr->hostage_state = 4;
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (pCVar12,"%s rescued and taken home!\n",this_ptr);
              this_ptr->next_way_point = (CDemonActor *)0x0;
            }
            else {
              pCVar19 = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_00552680
                                  ((CWayPoint *)&(this_ptr->base).base.base.location,
                                   (CWayPoint *)this_ptr->goal_way_point);
              this_ptr->next_way_point = (CDemonActor *)pCVar19;
            }
            break;
          case 1:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar2->base,1,1);
            break;
          case 2:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar2->base,2,1);
            break;
          case 3:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar2->base,0,1);
            pCVar12 = g_CConsole_PTR_005ad350;
            this_ptr->hostage_state = 2;
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (pCVar12,"%s got confused going home.  Help me!\n",this_ptr);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar2->base,0,1);
            core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                      (0x01C03A10,this_ptr->sit_down_event);
            core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0
                      (0x01C03A10,this_ptr->rescue_event,1);
            this_ptr->hostage_state = 4;
            this_ptr->next_way_point = (CDemonActor *)0x0;
          }
        }
        break;
      case 4:
        local_2c = 1;
        if (this_ptr->sit_down_way_point != (CDemonActor *)0x0) {
          fVar4 = delta_time * (float)0.5;
          pCVar22 = SUB84(__BITCAST_UINT64((double)fVar4),0);
          if ((this_ptr->base).base.walk_step_speed < fVar4) {
            (this_ptr->base).base.walk_step_speed = fVar4;
          }
          pCVar20 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                              ((CDemonActor *)this_ptr,&local_8c,
                               &(this_ptr->sit_down_way_point->location).position);
          pCVar16 = &(this_ptr->base).base.position_delta;
          if (pCVar16 != pCVar20) {
            pCVar16->x = pCVar20->x;
            (this_ptr->base).base.position_delta.y = pCVar20->y;
            (this_ptr->base).base.position_delta.z = pCVar20->z;
          }
          pCVar16 = &(this_ptr->base).base.position_delta;
          local_a4 = pCVar16->x;
          local_9c = (this_ptr->base).base.position_delta.z;
          local_198 = SQRT(local_9c * local_9c + local_a4 * local_a4);
          local_a0 = 0;
          if ((this_ptr->base).base.walk_step_speed < local_198) {
            local_30 = (this_ptr->base).base.walk_step_speed / local_198;
            fVar4 = (this_ptr->base).base.position_delta.y;
            fVar3 = (this_ptr->base).base.position_delta.z;
            pCVar16->x = pCVar16->x * local_30;
            (this_ptr->base).base.position_delta.y = fVar4 * local_30;
            (this_ptr->base).base.position_delta.z = fVar3 * local_30;
          }
          local_34 = local_198;
          pCVar16 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                              (&local_14c,&(this_ptr->base).base.position_delta);
          fVar4 = local_198 * (float)2;
          (this_ptr->base).base.turn_angle_accumulator = pCVar16->y;
          if (fVar4 < 1.0) {
            local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 ((this_ptr->sit_down_way_point->orient).vec.y -
                                  (this_ptr->base).base.base.orient.vec.y);
            local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (local_18 - (this_ptr->base).base.turn_angle_accumulator);
            (this_ptr->base).base.turn_angle_accumulator =
                 (1.0 - fVar4) * local_18 + (this_ptr->base).base.turn_angle_accumulator;
          }
          local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                               ((this_ptr->base).base.turn_angle_accumulator);
          (this_ptr->base).base.turn_angle_accumulator = local_18;
          if ((local_198 < (float)0.01) &&
             (ABS((this_ptr->base).base.turn_angle_accumulator) < (float)0.017453292519444399)) {
            if ((this_ptr->hostage_type == 0) || (this_ptr->hostage_type == 4)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(this_ptr->base).base.model.base,0,1);
              this_ptr->hostage_state = 5;
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(this_ptr->base).base.model.base,10,1);
            }
            core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                      (0x01C03A10,this_ptr->sit_down_event);
            core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0
                      (0x01C03A10,this_ptr->rescue_event,1);
            this_ptr->sit_down_way_point = (CDemonActor *)0x0;
          }
          local_3c = delta_time * (float)3.1415926535000001;
          local_40 = -local_3c;
          if ((this_ptr->base).base.turn_angle_accumulator < local_40) {
            (this_ptr->base).base.turn_angle_accumulator = local_40;
          }
          if (local_3c < (this_ptr->base).base.turn_angle_accumulator) {
            (this_ptr->base).base.turn_angle_accumulator = local_3c;
          }
        }
      }
    }
    else {
      EVar6 = (this_ptr->base).base.walk_state;
      if (EVar6 < 2) {
        if (EVar6 == WALK_STATE_WALKING) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.base,1,1);
        }
        else {
LAB_004b7672:
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.base,0,1);
        }
      }
      else if (EVar6 < WALK_STATE_NO_PATH) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.base,2,1);
      }
      else {
        if (EVar6 != WALK_STATE_NO_PATH) goto LAB_004b7672;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.base,0,1);
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n",this_ptr);
      }
    }
  }
  else {
    pCVar16 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        ((CDemonActor *)this_ptr,&local_d4,&(pCVar17->location).position);
    pCVar16 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_c8,pCVar16);
    local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(pCVar16->y);
    local_19c = local_18;
    if (local_18 < (float)-1.57079632675) {
      local_19c = local_18 + 3.141593f;
    }
    if ((float)1.57079632675 < local_19c) {
      local_19c = local_19c + -3.141593f;
    }
    local_38 = delta_time * (float)3.1415926535000001;
    local_44 = -local_38;
    if (local_19c < local_44) {
      local_19c = local_44;
    }
    if (local_38 < local_19c) {
      local_19c = local_38;
    }
    (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_19c;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)this_ptr);
    pCVar18 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    pCVar5 = (pCVar18->base).vtable._uc;
    pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0051d380
                        (&(this_ptr->base).base.model,&local_98,0);
    iVar13 = (*(pCVar5->_uc).attractActorToward)(pCVar18,(CDemonActor *)this_ptr,pCVar16);
    if (iVar13 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004b7534:
      pCVar22 = (CDemonActor *)&(this_ptr->base).base.model;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                ((CMotionController *)pCVar22,0,1);
    }
    else if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004b7534;
    uVar14 = 1;
    local_20 = 1.4013e-45;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
  }
switchD_004b7b39_default:
  if (((0.0 < (this_ptr->base).base.hit_points) && (this_ptr->hostage_type == 1)) &&
     (iVar13 = core_actor_cpp_randomChance_FUN_0040dea0(delta_time * 0.2f), iVar13 != 0))
  {
    iVar13 = 0;
    bone_name = "Bip01 L Forearm";
    pCVar2 = &(this_ptr->base).base.model;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(pCVar2);
    iVar13 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,bone_name,iVar13);
    if (-1 < iVar13) {
      pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0051d2a0
                          (pCVar2,&local_bc,iVar13);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)this_ptr,&local_158,pCVar16);
      local_11c.x = 3.0;
      local_11c.y = 0.0;
      local_11c.z = 0.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                ((CDemonActor *)this_ptr,&local_134,&local_11c);
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0
                (g_CGore_PTR_005b96c4,&local_158,&local_134,0);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  if (local_2c == 0) {
    pSVar21 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                        (&(this_ptr->base).base.model.base);
    iVar13 = pSVar21->state_index;
    if ((((iVar13 == 8) || (iVar13 == 0)) || ((iVar13 == 0xd || (iVar13 == 10)))) &&
       ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      (this_ptr->base).base.walk_stuck_timer = 0.0;
      goto LAB_004b72a1;
    }
    dVar24 = (double)delta_time;
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_104 = (this_ptr->base).base.velocity.x * delta_time;
    local_100 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar16 = &(this_ptr->base).base.position_delta;
    local_fc = (this_ptr->base).base.velocity.z * delta_time;
    pCVar20 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_128 = local_104 + pCVar16->x;
    local_124 = local_100 + (this_ptr->base).base.position_delta.y;
    local_120 = local_fc + (this_ptr->base).base.position_delta.z;
    local_b0.x = local_128 + pCVar20->x;
    local_b0.y = local_124 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_b0.z = local_120 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar16->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    pCVar1 = &(this_ptr->base).base.base.location;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar20->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    local_f8 = (pCVar1->position).x;
    local_f4 = (this_ptr->base).base.base.location.position.y;
    local_f0 = (this_ptr->base).base.base.location.position.z;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_b0);
    (this_ptr->base).base.walk_stuck_timer = (this_ptr->base).base.walk_stuck_timer + delta_time;
    if ((dVar24 * 0.59999999999999998 <=
         SQRT((double)local_b0.z * (double)local_b0.z +
              (double)local_b0.x * (double)local_b0.x + (double)local_b0.y * (double)local_b0.y)) &&
       (dVar9 = (double)(pCVar1->position).x - (double)local_f8,
       dVar10 = (double)(this_ptr->base).base.base.location.position.y - (double)local_f4,
       dVar11 = (double)(this_ptr->base).base.base.location.position.z - (double)local_f0,
       SQRT(dVar11 * dVar11 + dVar10 * dVar10 + dVar9 * dVar9) <= dVar24 * 0.40000000000000002))
    goto LAB_004b72a1;
  }
  else {
    pCVar16 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                        ((CDemonActor *)this_ptr,local_80,&(this_ptr->base).base.position_delta);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar16->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar16->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar16->z + (this_ptr->base).base.base.location.position.z;
  }
  (this_ptr->base).base.walk_stuck_timer = 0.0;
LAB_004b72a1:
  pCVar2 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCVar2);
  if (this_ptr->hostage_type == 1) {
    local_48 = 0.5;
    local_54 = 0.75;
    pCVar17 = core_actor_cpp_castToClassHash_FUN_0040d890
                        ((this_ptr->base).base.carry_hands[1].carry_actor,
                         g_CWeaponActorType_02ddf970.name_hash);
    local_4c = 0;
    if (((pCVar17 != (CDemonActor *)0x0) &&
        (local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                              (&pCVar2->base,0x10), local_18 <= 0.0)) || (local_4c != 0)) {
      fVar4 = delta_time / local_48 + this_ptr->gun_blend_weight;
    }
    else {
      fVar4 = this_ptr->gun_blend_weight - delta_time / local_48;
    }
    this_ptr->gun_blend_weight = fVar4;
    if (0.0 < this_ptr->gun_blend_weight) {
      if (1.0 < this_ptr->gun_blend_weight) {
        this_ptr->gun_blend_weight = 1.0;
      }
      pCVar2 = &(this_ptr->base).base.model;
      local_58 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                           (&pCVar2->base,_DAT_01cae1a0,
                            this_ptr->gun_raise_progress * (float)0.65000000000000002 +
                            (float)0.34999999999999998);
      local_18 = local_58;
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
                (pCVar2,_DAT_01cae1a0,local_58,this_ptr->gun_blend_weight,this_ptr->bone_indices[0],
                 core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
                (pCVar2,_DAT_01cae1a0,local_58,this_ptr->gun_blend_weight,this_ptr->bone_indices[1],
                 core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
      if (((1.0 <= this_ptr->gun_blend_weight) && (0.0 < this_ptr->gun_raise_progress)) &&
         (fVar4 = delta_time / local_54 + this_ptr->gun_raise_progress,
         this_ptr->gun_raise_progress = fVar4, 1.0 < fVar4)) {
        this_ptr->gun_raise_progress = 1.0;
      }
    }
    else {
      this_ptr->gun_raise_progress = 0.0;
      this_ptr->gun_blend_weight = 0.0;
    }
  }
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429730
            ((CCharacter *)this_ptr,delta_time,uVar14);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  if ((1.0 <= this_ptr->gun_raise_progress) &&
     (pCVar18 = (CCharacter *)
                core_actor_cpp_castToClassHash_FUN_0040d890
                          ((this_ptr->base).base.carry_hands[1].carry_actor,
                           g_CWeaponActorType_02ddf970.name_hash), pCVar18 != (CCharacter *)0x0)) {
    fVar4 = (pCVar18->model).transformed_vertices[0x4f].z;
    (pCVar18->model).transformed_vertices[0x4f].z = 8.40779e-45;
    (*(((pCVar18->base).vtable._uc)->_uc).isGrabbable)(pCVar18,pCVar22);
    (pCVar18->model).transformed_vertices[0x4f].z = fVar4;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.base,0xc,1);
    this_ptr->gun_blend_weight = 0.0;
    this_ptr->gun_raise_progress = 0.0;
  }
  if (((this_ptr->hostage_type == 1) &&
      (pCVar22 = core_actor_cpp_castToClassHash_FUN_0040d890
                           ((this_ptr->base).base.carry_hands[1].carry_actor,
                            g_CWeaponActorType_02ddf970.name_hash), pCVar22 != (CDemonActor *)0x0))
     && (iVar13 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                            (0x01C03A10,"deputeFireShotgun"), iVar13 != 0)) {
    this_ptr->gun_raise_progress = 0.01;
    return;
  }
  return;
}
