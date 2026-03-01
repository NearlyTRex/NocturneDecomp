// Name: core_hostage.cpp_CHostage_process_FUN_004f4bd0
// Address: 004f4bd0
// Address Range: [[004f4bd0, 004f5fea]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_process_FUN_004f4bd0(CHostage *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_hostage_cpp_CHostage_process_FUN_004f4bd0(CHostage *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  float fVar4;
  CCharacter *pCVar5;
  CCharacter_full_vtable *pCVar6;
  uint uVar7;
  CHero *pCVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  CConsole *pCVar13;
  int iVar14;
  uint uVar15;
  CDoor *pCVar16;
  CSkeleton *this_ptr_00;
  CVector3f *pCVar17;
  CWeapon *pCVar19;
  CWeapon *pCVar18;
  CVector3f *pCVar20;
  SMotion *pSVar21;
  CDemonActor *pCVar22;
  int iVar23;
  char *bone_name;
  float local_19c;
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
  iVar14 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar14 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_28 = &(this_ptr->base).base.model.motion_controller;
  while (0.0 < delta_time) {
    uVar15 = core_motion_cpp_CMotionController_advance_FUN_0052d610(local_28);
    if (uVar15 < 0xb) {
      if (uVar15 == 6) {
        pCVar22 = (this_ptr->base).base.grabbed_by;
        if (pCVar22 != (CDemonActor *)0x0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s escaping from %s\n",this_ptr,pCVar22);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_194);
          local_194.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
          local_194.attacker = (CDemonActor *)this_ptr;
          local_194.wielder = (CDemonActor *)this_ptr;
          pCVar5 = (CCharacter *)(this_ptr->base).base.grabbed_by;
          local_18 = local_194.damage_amount;
          (*(((pCVar5->base).vtable._uc)->_uc).processDamage)(pCVar5,&local_194);
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar15);
      }
    }
    else if (uVar15 < 0xc) {
      local_24 = (CDoor *)0x0;
      local_140.x = 0.0;
      local_140.y = 0.0;
      local_68 = 1e+30;
      local_140.z = 1.5;
      iVar14 = 0;
      iVar23 = 0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_ec,&local_140);
      while (iVar14 < g_CDemonSetPtr->actor_count) {
        pCVar16 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790
                                     (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar23),
                                      g_CDoorClassInfo.name_hash);
        if (pCVar16 == (CDoor *)0x0) {
LAB_004f4dd2:
          iVar14 = iVar14 + 1;
          iVar23 = iVar23 + 4;
        }
        else {
          local_110 = (pCVar16->base).location.position.x - local_ec.x;
          local_10c = (pCVar16->base).location.position.y - local_ec.y;
          local_108 = (pCVar16->base).location.position.z - local_ec.z;
          if ((float)5 < ABS(local_10c)) goto LAB_004f4dd2;
          local_10c = 0.0;
          local_20 = SQRT(local_108 * local_108 + local_110 * local_110);
          if (local_68 <= local_20) goto LAB_004f4dd2;
          iVar14 = iVar14 + 1;
          iVar23 = iVar23 + 4;
          local_68 = local_20;
          local_24 = pCVar16;
        }
      }
      if (local_24 != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00480de0(local_24,0.1);
      }
    }
    else if (uVar15 == 0xc) {
      pCVar22 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (pCVar22 != (CDemonActor *)0x0) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
        core_inv_cpp_CInventory_addItem_FUN_004fd600
                  (&g_HeroActors[g_LocalHeroIndex]->inventory,pCVar22,1);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar15);
    }
  }
  fVar9 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  local_2c = 0;
  (this_ptr->base).base.turn_speed = delta_time * fVar9;
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(local_28,10);
  if (0.0 < local_18) {
    local_2c = 1;
  }
  uVar15 = (uint)(0.0 < local_18);
  if ((this_ptr->base).base.hit_points <= 0.0) {
    local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&(this_ptr->base).base.model.motion_controller,5);
    if ((local_18 <= 0.0) &&
       (local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                             (&(this_ptr->base).base.model.motion_controller,8), local_18 <= 0.0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,6,1);
    }
LAB_004f4fc0:
    uVar15 = 1;
    goto switchD_004f5c7d_caseD_5;
  }
  pCVar22 = (this_ptr->base).base.grabbed_by;
  if (pCVar22 == (CDemonActor *)0x0) {
    pCVar2 = &(this_ptr->base).base.model;
    local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,3);
    if (((0.0 < local_18) ||
        (local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                              (&pCVar2->motion_controller,5), 0.0 < local_18)) ||
       (local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                             (&pCVar2->motion_controller,8), 0.0 < local_18)) goto LAB_004f4fc0;
    iVar14 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                       ((CCharacter *)this_ptr,delta_time);
    pCVar13 = g_CConsolePtr;
    if (iVar14 == 0) {
      switch(this_ptr->hostage_state) {
      case 0:
        iVar14 = core_hostage_cpp_CHostage_FUN_004f5ff0(this_ptr,delta_time);
        if (iVar14 == 0) {
          pCVar8 = g_HeroActors[g_LocalHeroIndex];
          local_e0 = (pCVar8->base).base.location.position.x -
                     (this_ptr->base).base.base.location.position.x;
          local_dc = (pCVar8->base).base.location.position.y -
                     (this_ptr->base).base.base.location.position.y;
          local_d8 = (pCVar8->base).base.location.position.z -
                     (this_ptr->base).base.base.location.position.z;
          if (((0.0 < this_ptr->rescue_distance) &&
              (this_ptr->rescue_distance <=
               SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc))) ||
             (iVar14 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                 (g_CEventListPtr,this_ptr->rescue_condition),
             pCVar13 = g_CConsolePtr, iVar14 == 0)) goto LAB_004f54c2;
          this_ptr->hostage_state = 1;
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (pCVar13,"%s rescued, entering follow mode\n",this_ptr);
          core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                    (g_CEventListPtr,this_ptr->hero_found_me_event);
        }
        break;
      case 1:
        pCVar22 = this_ptr->goal_way_point;
        if ((pCVar22 != (CDemonActor *)0x0) &&
           (fVar9 = (this_ptr->base).base.base.location.position.x - (pCVar22->location).position.x,
           fVar3 = (this_ptr->base).base.base.location.position.z - (pCVar22->location).position.z,
           SQRT(fVar3 * fVar3 + fVar9 * fVar9) < (float)40)) {
          pCVar22 = (CDemonActor *)
                    core_waypoint_cpp_CWayPoint_FUN_005ec320
                              ((CWayPoint *)&(this_ptr->base).base.base.location);
          this_ptr->next_way_point = pCVar22;
        }
        pCVar13 = g_CConsolePtr;
        if (this_ptr->next_way_point == (CDemonActor *)0x0) {
          iVar14 = core_hostage_cpp_CHostage_FUN_004f5ff0(this_ptr,delta_time);
          if (iVar14 == 0) {
            iVar14 = core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0
                               ((CCharacter *)this_ptr,delta_time);
            if (iVar14 == 0) {
              core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0
                        ((CCharacter *)this_ptr,(CDemonActor *)g_HeroActors[g_LocalHeroIndex],5.0,
                         10.0,&this_ptr->follow_state);
            }
            else {
              this_ptr->follow_state = iVar14;
            }
            uVar7 = this_ptr->follow_state;
            pCVar2 = &(this_ptr->base).base.model;
            if (uVar7 < 2) {
              if (uVar7 != 1) goto LAB_004f54c2;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,1,1);
            }
            else if (uVar7 < 3) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,2,1);
            }
            else {
              if (uVar7 != 3) goto LAB_004f54c2;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,0,1);
              pCVar13 = g_CConsolePtr;
              this_ptr->hostage_state = 2;
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (pCVar13,"%s left behind!\n",this_ptr);
              core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                        (g_CEventListPtr,this_ptr->hero_left_me_event);
              (this_ptr->base).base.hero_proximity_timer = 0.0;
            }
          }
        }
        else {
          this_ptr->hostage_state = 3;
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (pCVar13,"%s was led close enough, going home!\n",this_ptr);
          core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                    (g_CEventListPtr,this_ptr->going_to_sit_down_event);
          (this_ptr->base).base.hero_proximity_timer = 0.0;
        }
        break;
      case 2:
        iVar14 = core_hostage_cpp_CHostage_FUN_004f5ff0(this_ptr,delta_time);
        if (iVar14 == 0) {
          core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0
                    ((CCharacter *)this_ptr,(CDemonActor *)g_HeroActors[g_LocalHeroIndex],4.0,10.0,
                     &this_ptr->follow_state);
          uVar7 = this_ptr->follow_state;
          local_50 = 0;
          if (uVar7 == 0) {
            iVar14 = 0;
LAB_004f579d:
            this_ptr->hostage_state = 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,iVar14,1);
          }
          else {
            if (uVar7 < 2) {
              iVar14 = 1;
              goto LAB_004f579d;
            }
            if (uVar7 == 2) {
              iVar14 = 2;
              goto LAB_004f579d;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0,1);
            if (local_50 == 0) break;
          }
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s was left behind, but now can follow again!\n",this_ptr);
          core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                    (g_CEventListPtr,this_ptr->hero_came_back_event);
        }
        break;
      case 3:
        if (this_ptr->next_way_point == (CDemonActor *)0x0) {
          this_ptr->hostage_state = 2;
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (pCVar13,"%s doesn't know next waypoint going home.  Help me!\n",this_ptr);
        }
        else {
          core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0
                    ((CCharacter *)this_ptr,this_ptr->next_way_point,1.0,-1.0,
                     &this_ptr->follow_state);
          switch(this_ptr->follow_state) {
          case 0:
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s reached waypoint %s!\n",this_ptr,
                       this_ptr->next_way_point);
            pCVar13 = g_CConsolePtr;
            if (this_ptr->next_way_point == this_ptr->goal_way_point) {
              this_ptr->hostage_state = 4;
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (pCVar13,"%s rescued and taken home!\n",this_ptr);
              this_ptr->next_way_point = (CDemonActor *)0x0;
            }
            else {
              pCVar22 = (CDemonActor *)
                        core_waypoint_cpp_CWayPoint_FUN_005ec320
                                  ((CWayPoint *)&(this_ptr->base).base.base.location);
              this_ptr->next_way_point = pCVar22;
            }
            break;
          case 1:
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,1,1);
            break;
          case 2:
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,2,1);
            break;
          case 3:
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,0,1);
            pCVar13 = g_CConsolePtr;
            this_ptr->hostage_state = 2;
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (pCVar13,"%s got confused going home.  Help me!\n",this_ptr);
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,0,1);
            core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                      (g_CEventListPtr,this_ptr->sit_down_event);
            core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330
                      (g_CEventListPtr,this_ptr->rescue_event,1);
            this_ptr->hostage_state = 4;
            this_ptr->next_way_point = (CDemonActor *)0x0;
          }
        }
        break;
      case 4:
        local_2c = 1;
        if (this_ptr->sit_down_way_point != (CDemonActor *)0x0) {
          if ((this_ptr->base).base.walk_step_speed < delta_time * (float)0.5) {
            (this_ptr->base).base.walk_step_speed = delta_time * (float)0.5;
          }
          pCVar20 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                              ((CDemonActor *)this_ptr,&local_8c,
                               &(this_ptr->sit_down_way_point->location).position);
          pCVar17 = &(this_ptr->base).base.position_delta;
          if (pCVar17 != pCVar20) {
            pCVar17->x = pCVar20->x;
            (this_ptr->base).base.position_delta.y = pCVar20->y;
            (this_ptr->base).base.position_delta.z = pCVar20->z;
          }
          pCVar17 = &(this_ptr->base).base.position_delta;
          local_a4 = pCVar17->x;
          local_9c = (this_ptr->base).base.position_delta.z;
          fVar9 = SQRT(local_9c * local_9c + local_a4 * local_a4);
          local_a0 = 0;
          if ((this_ptr->base).base.walk_step_speed < fVar9) {
            local_30 = (this_ptr->base).base.walk_step_speed / fVar9;
            fVar3 = (this_ptr->base).base.position_delta.y;
            fVar4 = (this_ptr->base).base.position_delta.z;
            pCVar17->x = pCVar17->x * local_30;
            (this_ptr->base).base.position_delta.y = fVar3 * local_30;
            (this_ptr->base).base.position_delta.z = fVar4 * local_30;
          }
          local_34 = fVar9;
          pCVar17 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_14c,&(this_ptr->base).base.position_delta);
          fVar3 = (float)2;
          (this_ptr->base).base.turn_angle_accumulator = pCVar17->y;
          if (fVar9 * fVar3 < 1.0) {
            local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 ((this_ptr->sit_down_way_point->orient).vec.y -
                                  (this_ptr->base).base.base.orient.vec.y);
            local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_18 - (this_ptr->base).base.turn_angle_accumulator);
            (this_ptr->base).base.turn_angle_accumulator =
                 (1.0 - fVar9 * fVar3) * local_18 + (this_ptr->base).base.turn_angle_accumulator;
          }
          local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               ((this_ptr->base).base.turn_angle_accumulator);
          (this_ptr->base).base.turn_angle_accumulator = local_18;
          if ((fVar9 < (float)0.01) &&
             (ABS((this_ptr->base).base.turn_angle_accumulator) < (float)0.017453292519444399)) {
            if ((this_ptr->hostage_type == 0) || (this_ptr->hostage_type == 4)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,0,1);
              this_ptr->hostage_state = 5;
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,10,1);
            }
            core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                      (g_CEventListPtr,this_ptr->sit_down_event);
            core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330
                      (g_CEventListPtr,this_ptr->rescue_event,1);
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
      uVar7 = (this_ptr->base).base.is_walking;
      if (uVar7 < 2) {
        if (uVar7 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,1,1);
        }
        else {
LAB_004f54c2:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
      }
      else if (uVar7 < 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,2,1);
      }
      else {
        if (uVar7 != 3) goto LAB_004f54c2;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
      }
    }
  }
  else {
    pCVar17 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)this_ptr,&local_d4,&(pCVar22->location).position);
    pCVar17 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_c8,pCVar17);
    local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar17->y);
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
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    pCVar5 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    pCVar6 = (pCVar5->base).vtable._uc;
    pCVar17 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                        (&(this_ptr->base).base.model,&local_98,0);
    iVar14 = (*(pCVar6->_uc).attractActorToward)(pCVar5,(CDemonActor *)this_ptr,pCVar17);
    if (iVar14 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004f5384:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0,1);
    }
    else if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004f5384;
    uVar15 = 1;
    local_2c = 1;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
  }
switchD_004f5c7d_caseD_5:
  if (((0.0 < (this_ptr->base).base.hit_points) && (this_ptr->hostage_type == 1)) &&
     (iVar14 = core_actor_cpp_randomChance_FUN_0040cd10(delta_time * 0.2f), iVar14 != 0))
  {
    iVar14 = 0;
    bone_name = "Bip01 L Forearm";
    pCVar2 = &(this_ptr->base).base.model;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar2);
    iVar14 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,bone_name,iVar14);
    if (-1 < iVar14) {
      pCVar17 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (pCVar2,&local_bc,iVar14);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_158,pCVar17);
      local_11c.x = 3.0;
      local_11c.y = 0.0;
      local_11c.z = 0.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                ((CDemonActor *)this_ptr,&local_134,&local_11c);
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004edaa0(g_CGorePtr,&local_158,&local_134,0);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  if (local_2c == 0) {
    pSVar21 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&(this_ptr->base).base.model.motion_controller);
    iVar14 = pSVar21->state_index;
    if ((((iVar14 == 8) || (iVar14 == 0)) || ((iVar14 == 0xd || (iVar14 == 10)))) &&
       ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      (this_ptr->base).base.walk_stuck_timer = 0.0;
      goto LAB_004f50f1;
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_104 = (this_ptr->base).base.velocity.x * delta_time;
    local_100 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar17 = &(this_ptr->base).base.position_delta;
    local_fc = (this_ptr->base).base.velocity.z * delta_time;
    pCVar20 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_128 = local_104 + pCVar17->x;
    local_124 = local_100 + (this_ptr->base).base.position_delta.y;
    local_120 = local_fc + (this_ptr->base).base.position_delta.z;
    local_b0.x = local_128 + pCVar20->x;
    local_b0.y = local_124 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_b0.z = local_120 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar17->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    pCVar1 = &(this_ptr->base).base.base.location;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar20->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    local_f8 = (pCVar1->position).x;
    local_f4 = (this_ptr->base).base.base.location.position.y;
    local_f0 = (this_ptr->base).base.base.location.position.z;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_b0);
    (this_ptr->base).base.walk_stuck_timer = (this_ptr->base).base.walk_stuck_timer + delta_time;
    if (((double)delta_time * 0.59999999999999998 <=
         SQRT((double)local_b0.z * (double)local_b0.z +
              (double)local_b0.x * (double)local_b0.x + (double)local_b0.y * (double)local_b0.y)) &&
       (dVar10 = (double)(pCVar1->position).x - (double)local_f8,
       dVar11 = (double)(this_ptr->base).base.base.location.position.y - (double)local_f4,
       dVar12 = (double)(this_ptr->base).base.base.location.position.z - (double)local_f0,
       SQRT(dVar12 * dVar12 + dVar11 * dVar11 + dVar10 * dVar10) <=
       (double)delta_time * 0.40000000000000002)) goto LAB_004f50f1;
  }
  else {
    pCVar17 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)this_ptr,local_80,&(this_ptr->base).base.position_delta);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar17->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar17->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar17->z + (this_ptr->base).base.base.location.position.z;
  }
  (this_ptr->base).base.walk_stuck_timer = 0.0;
LAB_004f50f1:
  pCVar2 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar2);
  if (this_ptr->hostage_type == 1) {
    local_48 = 0.5;
    local_54 = 0.75;
    pCVar19 = (CWeapon *)
              core_actor_cpp_castToClassHash_FUN_0040c790
                        ((this_ptr->base).base.carry_hands[1].carry_actor,
                         g_CWeaponClassInfo.name_hash);
    local_4c = 0;
    if (((pCVar19 != (CWeapon *)0x0) &&
        (local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                              (&pCVar2->motion_controller,0x10), local_18 <= 0.0)) ||
       (local_4c != 0)) {
      fVar9 = delta_time / local_48 + this_ptr->gun_blend_weight;
    }
    else {
      fVar9 = this_ptr->gun_blend_weight - delta_time / local_48;
    }
    this_ptr->gun_blend_weight = fVar9;
    if (0.0 < this_ptr->gun_blend_weight) {
      if (1.0 < this_ptr->gun_blend_weight) {
        this_ptr->gun_blend_weight = 1.0;
      }
      pCVar2 = &(this_ptr->base).base.model;
      local_58 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                           (&pCVar2->motion_controller,INT_02db8888,
                            this_ptr->gun_raise_progress * (float)0.65000000000000002 +
                            (float)0.34999999999999998);
      local_18 = local_58;
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                (pCVar2,INT_02db8888,local_58,this_ptr->gun_blend_weight,this_ptr->bone_indices[0],
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                (pCVar2,INT_02db8888,local_58,this_ptr->gun_blend_weight,this_ptr->bone_indices[1],
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      if (((1.0 <= this_ptr->gun_blend_weight) && (0.0 < this_ptr->gun_raise_progress)) &&
         (fVar9 = delta_time / local_54 + this_ptr->gun_raise_progress,
         this_ptr->gun_raise_progress = fVar9, 1.0 < fVar9)) {
        this_ptr->gun_raise_progress = 1.0;
      }
    }
    else {
      this_ptr->gun_raise_progress = 0.0;
      this_ptr->gun_blend_weight = 0.0;
    }
  }
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0
            ((CCharacter *)this_ptr,delta_time,uVar15);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  if ((1.0 <= this_ptr->gun_raise_progress) &&
     (pCVar18 = (CWeapon *)
                core_actor_cpp_castToClassHash_FUN_0040c790
                          ((this_ptr->base).base.carry_hands[1].carry_actor,
                           g_CWeaponClassInfo.name_hash), pCVar18 != (CWeapon *)0x0)) {
    iVar14 = pCVar18->ammo_type;
    pCVar18->ammo_type = 6;
    (*(((pCVar18->base).vtable._uc)->_uc).isGrabbable)((CCharacter *)pCVar18);
    pCVar18->ammo_type = iVar14;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0xc,1);
    this_ptr->gun_blend_weight = 0.0;
    this_ptr->gun_raise_progress = 0.0;
  }
  if (((this_ptr->hostage_type == 1) &&
      (pCVar22 = core_actor_cpp_castToClassHash_FUN_0040c790
                           ((this_ptr->base).base.carry_hands[1].carry_actor,
                            g_CWeaponClassInfo.name_hash), pCVar22 != (CDemonActor *)0x0)) &&
     (iVar14 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                         (g_CEventListPtr,"deputeFireShotgun"), iVar14 != 0)) {
    this_ptr->gun_raise_progress = 0.01;
    return;
  }
  return;
}
