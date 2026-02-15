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
  CCharacter_full_vtable *pCVar5;
  uint uVar6;
  CHero *pCVar7;
  float fVar8;
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
  CVector3f *pCVar19;
  SMotion *pSVar20;
  int iVar21;
  char *bone_name;
  float fVar22;
  ulonglong in_stack_fffffe40;
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
  iVar13 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar13 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_28 = &(this_ptr->base).base.model.motion_controller;
  while (fVar22 = (float)in_stack_fffffe40, 0.0 < delta_time) {
    uVar14 = core_motion_cpp_CMotionController_advance_FUN_0052d610(local_28);
    if (uVar14 < 0xb) {
      if (uVar14 == 6) {
        pCVar17 = (this_ptr->base).base.grabbed_by;
        if (pCVar17 != (CDemonActor *)0x0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s escaping from %s\n",this_ptr,pCVar17);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_194);
          local_194.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
          local_194.attacker = (CDemonActor *)this_ptr;
          local_194.wielder = (CDemonActor *)this_ptr;
          pCVar18 = (CCharacter *)(this_ptr->base).base.grabbed_by;
          local_18 = local_194.damage_amount;
          (*(((pCVar18->base).vtable._uc)->_uc).processDamage)(pCVar18,&local_194);
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar14);
      }
    }
    else if (uVar14 < 0xc) {
      local_24 = (CDoor *)0x0;
      local_140.x = 0.0;
      local_140.y = 0.0;
      local_68 = 1e+30;
      local_140.z = 1.5;
      iVar13 = 0;
      iVar21 = 0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_ec,&local_140);
      while (iVar13 < g_CDemonSetPtr->actor_count) {
        pCVar15 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790
                                     (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar21),
                                      g_CDoorClassInfo.name_hash);
        if (pCVar15 == (CDoor *)0x0) {
LAB_004f4dd2:
          iVar13 = iVar13 + 1;
          iVar21 = iVar21 + 4;
        }
        else {
          local_110 = (pCVar15->base).location.position.x - local_ec.x;
          local_10c = (pCVar15->base).location.position.y - local_ec.y;
          local_108 = (pCVar15->base).location.position.z - local_ec.z;
          if ((float)5 < ABS(local_10c)) goto LAB_004f4dd2;
          local_10c = 0.0;
          local_20 = SQRT(local_108 * local_108 + local_110 * local_110);
          if (local_68 <= local_20) goto LAB_004f4dd2;
          iVar13 = iVar13 + 1;
          iVar21 = iVar21 + 4;
          local_68 = local_20;
          local_24 = pCVar15;
        }
      }
      if (local_24 != (CDoor *)0x0) {
        core_door_cpp_CDoor_FUN_00480de0(local_24);
      }
    }
    else if (uVar14 == 0xc) {
      pCVar17 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (pCVar17 != (CDemonActor *)0x0) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
        core_inv_cpp_CInventory_addItem_FUN_004fd600
                  (&g_HeroActors[g_LocalHeroIndex]->inventory,pCVar17,1);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar14);
    }
  }
  fVar8 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  local_2c = 0;
  (this_ptr->base).base.turn_speed = delta_time * fVar8;
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(local_28,10);
  if (0.0 < local_18) {
    local_2c = 1;
  }
  uVar14 = (uint)(0.0 < local_18);
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
    uVar14 = 1;
    goto switchD_004f5c7d_caseD_5;
  }
  pCVar17 = (this_ptr->base).base.grabbed_by;
  if (pCVar17 == (CDemonActor *)0x0) {
    pCVar2 = &(this_ptr->base).base.model;
    local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,3);
    if (((0.0 < local_18) ||
        (local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                              (&pCVar2->motion_controller,5), 0.0 < local_18)) ||
       (local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                             (&pCVar2->motion_controller,8), 0.0 < local_18)) goto LAB_004f4fc0;
    iVar13 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                       ((CCharacter *)this_ptr,delta_time);
    pCVar12 = g_CConsolePtr;
    if (iVar13 == 0) {
      switch(this_ptr->hostage_state) {
      case 0:
        iVar13 = core_hostage_cpp_CHostage_FUN_004f5ff0(this_ptr,delta_time);
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
             (iVar13 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                 (g_CEventListPtr,this_ptr->rescue_condition),
             pCVar12 = g_CConsolePtr, iVar13 == 0)) goto LAB_004f54c2;
          this_ptr->hostage_state = 1;
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (pCVar12,"%s rescued, entering follow mode\n",this_ptr);
          core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                    (g_CEventListPtr,this_ptr->hero_found_me_event);
        }
        break;
      case 1:
        pCVar17 = this_ptr->goal_way_point;
        if ((pCVar17 != (CDemonActor *)0x0) &&
           (fVar8 = (this_ptr->base).base.base.location.position.x - (pCVar17->location).position.x,
           fVar3 = (this_ptr->base).base.base.location.position.z - (pCVar17->location).position.z,
           SQRT(fVar3 * fVar3 + fVar8 * fVar8) < (float)40)) {
          iVar13 = core_waypoint_cpp_CWayPoint_FUN_005ec320
                             ((CWayPoint *)&(this_ptr->base).base.base.location);
          *(int *)this_ptr->unk3 = iVar13;
        }
        pCVar12 = g_CConsolePtr;
        if (*(int *)this_ptr->unk3 == 0) {
          iVar13 = core_hostage_cpp_CHostage_FUN_004f5ff0(this_ptr,delta_time);
          if (iVar13 == 0) {
            iVar13 = core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0
                               ((CCharacter *)this_ptr,delta_time);
            if (iVar13 == 0) {
              core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0
                        ((CCharacter *)this_ptr,(CDemonActor *)g_HeroActors[g_LocalHeroIndex],5.0,
                         10.0,&this_ptr->follow_state);
            }
            else {
              this_ptr->follow_state = iVar13;
            }
            uVar6 = this_ptr->follow_state;
            pCVar2 = &(this_ptr->base).base.model;
            if (uVar6 < 2) {
              if (uVar6 != 1) goto LAB_004f54c2;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,1,1);
            }
            else if (uVar6 < 3) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,2,1);
            }
            else {
              if (uVar6 != 3) goto LAB_004f54c2;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,0,1);
              pCVar12 = g_CConsolePtr;
              this_ptr->hostage_state = 2;
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (pCVar12,"%s left behind!\n",this_ptr);
              core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                        (g_CEventListPtr,this_ptr->hero_left_me_event);
              (this_ptr->base).base.hero_proximity_timer = 0.0;
            }
          }
        }
        else {
          this_ptr->hostage_state = 3;
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (pCVar12,"%s was led close enough, going home!\n",this_ptr);
          core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                    (g_CEventListPtr,this_ptr->going_to_sit_down_event);
          (this_ptr->base).base.hero_proximity_timer = 0.0;
        }
        break;
      case 2:
        iVar13 = core_hostage_cpp_CHostage_FUN_004f5ff0(this_ptr,delta_time);
        if (iVar13 == 0) {
          core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0
                    ((CCharacter *)this_ptr,(CDemonActor *)g_HeroActors[g_LocalHeroIndex],4.0,10.0,
                     &this_ptr->follow_state);
          uVar6 = this_ptr->follow_state;
          local_50 = 0;
          if (uVar6 == 0) {
            iVar13 = 0;
LAB_004f579d:
            this_ptr->hostage_state = 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,iVar13,1);
          }
          else {
            if (uVar6 < 2) {
              iVar13 = 1;
              goto LAB_004f579d;
            }
            if (uVar6 == 2) {
              iVar13 = 2;
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
        if (*(int *)this_ptr->unk3 == 0) {
          this_ptr->hostage_state = 2;
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (pCVar12,"%s doesn't know next waypoint going home.  Help me!\n",this_ptr);
        }
        else {
          core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0
                    ((CCharacter *)this_ptr,*(CDemonActor **)this_ptr->unk3,1.0,-1.0,
                     &this_ptr->follow_state);
          switch(this_ptr->follow_state) {
          case 0:
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s reached waypoint %s!\n",this_ptr,
                       *(uint *)this_ptr->unk3);
            pCVar12 = g_CConsolePtr;
            if (*(CDemonActor **)this_ptr->unk3 == this_ptr->goal_way_point) {
              this_ptr->hostage_state = 4;
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (pCVar12,"%s rescued and taken home!\n",this_ptr);
              this_ptr->unk3[0] = '\0';
              this_ptr->unk3[1] = '\0';
              this_ptr->unk3[2] = '\0';
              this_ptr->unk3[3] = '\0';
            }
            else {
              iVar13 = core_waypoint_cpp_CWayPoint_FUN_005ec320
                                 ((CWayPoint *)&(this_ptr->base).base.base.location);
              *(int *)this_ptr->unk3 = iVar13;
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
            pCVar12 = g_CConsolePtr;
            this_ptr->hostage_state = 2;
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (pCVar12,"%s got confused going home.  Help me!\n",this_ptr);
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,0,1);
            core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                      (g_CEventListPtr,this_ptr->sit_down_event);
            core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330
                      (g_CEventListPtr,this_ptr->rescue_event,1);
            this_ptr->hostage_state = 4;
            this_ptr->unk3[0] = '\0';
            this_ptr->unk3[1] = '\0';
            this_ptr->unk3[2] = '\0';
            this_ptr->unk3[3] = '\0';
          }
        }
        break;
      case 4:
        local_2c = 1;
        if (this_ptr->sit_down_way_point != (CDemonActor *)0x0) {
          fVar8 = delta_time * (float)0.5;
          fVar22 = SUB84((double)fVar8,0);
          if ((this_ptr->base).base.walk_step_speed < fVar8) {
            (this_ptr->base).base.walk_step_speed = fVar8;
          }
          pCVar19 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                              ((CDemonActor *)this_ptr,&local_8c,
                               &(this_ptr->sit_down_way_point->location).position);
          pCVar16 = &(this_ptr->base).base.position_delta;
          if (pCVar16 != pCVar19) {
            pCVar16->x = pCVar19->x;
            (this_ptr->base).base.position_delta.y = pCVar19->y;
            (this_ptr->base).base.position_delta.z = pCVar19->z;
          }
          pCVar16 = &(this_ptr->base).base.position_delta;
          local_a4 = pCVar16->x;
          local_9c = (this_ptr->base).base.position_delta.z;
          fVar8 = SQRT(local_9c * local_9c + local_a4 * local_a4);
          local_a0 = 0;
          if ((this_ptr->base).base.walk_step_speed < fVar8) {
            local_30 = (this_ptr->base).base.walk_step_speed / fVar8;
            fVar3 = (this_ptr->base).base.position_delta.y;
            fVar4 = (this_ptr->base).base.position_delta.z;
            pCVar16->x = pCVar16->x * local_30;
            (this_ptr->base).base.position_delta.y = fVar3 * local_30;
            (this_ptr->base).base.position_delta.z = fVar4 * local_30;
          }
          local_34 = fVar8;
          pCVar16 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_14c,&(this_ptr->base).base.position_delta);
          fVar3 = (float)2;
          (this_ptr->base).base.turn_angle_accumulator = pCVar16->y;
          if (fVar8 * fVar3 < 1.0) {
            local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 ((this_ptr->sit_down_way_point->orient).vec.y -
                                  (this_ptr->base).base.base.orient.vec.y);
            local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_18 - (this_ptr->base).base.turn_angle_accumulator);
            (this_ptr->base).base.turn_angle_accumulator =
                 (1.0 - fVar8 * fVar3) * local_18 + (this_ptr->base).base.turn_angle_accumulator;
          }
          local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               ((this_ptr->base).base.turn_angle_accumulator);
          (this_ptr->base).base.turn_angle_accumulator = local_18;
          if ((fVar8 < (float)0.01) &&
             (ABS((this_ptr->base).base.turn_angle_accumulator) < (float)0.017453292519444399)) {
            if ((*(int *)this_ptr->unk2 == 0) || (*(int *)this_ptr->unk2 == 4)) {
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
      uVar6 = (this_ptr->base).base.is_walking;
      if (uVar6 < 2) {
        if (uVar6 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,1,1);
        }
        else {
LAB_004f54c2:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
      }
      else if (uVar6 < 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,2,1);
      }
      else {
        if (uVar6 != 3) goto LAB_004f54c2;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
      }
    }
  }
  else {
    pCVar16 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)this_ptr,&local_d4,&(pCVar17->location).position);
    pCVar16 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_c8,pCVar16);
    local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar16->y);
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
    pCVar18 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    pCVar5 = (pCVar18->base).vtable._uc;
    pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                        (&(this_ptr->base).base.model,&local_98,0);
    iVar13 = (*(pCVar5->_uc).attractActorToward)(pCVar18,(CDemonActor *)this_ptr,pCVar16);
    if (iVar13 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004f5384:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0,1);
    }
    else if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004f5384;
    uVar14 = 1;
    local_2c = 1;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
  }
switchD_004f5c7d_caseD_5:
  if (((0.0 < (this_ptr->base).base.hit_points) && (*(int *)this_ptr->unk2 == 1)) &&
     (iVar13 = core_actor_cpp_randomChance_FUN_0040cd10(delta_time * 0.2f), iVar13 != 0))
  {
    bone_name = "Bip01 L Forearm";
    pCVar2 = &(this_ptr->base).base.model;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar2);
    iVar13 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,bone_name);
    if (-1 < iVar13) {
      pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (pCVar2,&local_bc,iVar13);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_158,pCVar16);
      local_11c.x = 3.0;
      local_11c.y = 0.0;
      local_11c.z = 0.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                ((CDemonActor *)this_ptr,&local_134,&local_11c);
      core_gore_cpp_CGore_FUN_004edaa0(g_CGorePtr);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  if (local_2c == 0) {
    pSVar20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&(this_ptr->base).base.model.motion_controller);
    iVar13 = pSVar20->state_index;
    if ((((iVar13 == 8) || (iVar13 == 0)) || ((iVar13 == 0xd || (iVar13 == 10)))) &&
       ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      (this_ptr->base).base.walk_stuck_timer = 0.0;
      goto LAB_004f50f1;
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_104 = (this_ptr->base).base.velocity.x * delta_time;
    local_100 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar16 = &(this_ptr->base).base.position_delta;
    local_fc = (this_ptr->base).base.velocity.z * delta_time;
    pCVar19 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_128 = local_104 + pCVar16->x;
    local_124 = local_100 + (this_ptr->base).base.position_delta.y;
    local_120 = local_fc + (this_ptr->base).base.position_delta.z;
    local_b0.x = local_128 + pCVar19->x;
    local_b0.y = local_124 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_b0.z = local_120 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar16->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    pCVar1 = &(this_ptr->base).base.base.location;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar19->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    local_f8 = (pCVar1->position).x;
    local_f4 = (this_ptr->base).base.base.location.position.y;
    local_f0 = (this_ptr->base).base.base.location.position.z;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_b0);
    (this_ptr->base).base.walk_stuck_timer = (this_ptr->base).base.walk_stuck_timer + delta_time;
    if (((double)delta_time * 0.59999999999999998 <=
         SQRT((double)local_b0.z * (double)local_b0.z +
              (double)local_b0.x * (double)local_b0.x + (double)local_b0.y * (double)local_b0.y)) &&
       (dVar9 = (double)(pCVar1->position).x - (double)local_f8,
       dVar10 = (double)(this_ptr->base).base.base.location.position.y - (double)local_f4,
       dVar11 = (double)(this_ptr->base).base.base.location.position.z - (double)local_f0,
       SQRT(dVar11 * dVar11 + dVar10 * dVar10 + dVar9 * dVar9) <=
       (double)delta_time * 0.40000000000000002)) goto LAB_004f50f1;
  }
  else {
    pCVar16 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)this_ptr,local_80,&(this_ptr->base).base.position_delta);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar16->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar16->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar16->z + (this_ptr->base).base.base.location.position.z;
  }
  (this_ptr->base).base.walk_stuck_timer = 0.0;
LAB_004f50f1:
  pCVar2 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar2);
  if (*(int *)this_ptr->unk2 == 1) {
    local_48 = 0.5;
    local_54 = 0.75;
    pCVar17 = core_actor_cpp_castToClassHash_FUN_0040c790
                        ((this_ptr->base).base.carry_hands[1].carry_actor,
                         g_CWeaponClassInfo.name_hash);
    local_4c = 0;
    if (((pCVar17 != (CDemonActor *)0x0) &&
        (local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                              (&pCVar2->motion_controller,0x10), local_18 <= 0.0)) ||
       (local_4c != 0)) {
      fVar8 = delta_time / local_48 + (float)this_ptr->unk5;
    }
    else {
      fVar8 = (float)this_ptr->unk5 - delta_time / local_48;
    }
    this_ptr->unk5 = (int)fVar8;
    if (0.0 < (float)this_ptr->unk5) {
      if (1.0 < (float)this_ptr->unk5) {
        this_ptr->unk5 = 0x3f800000;
      }
      pCVar2 = &(this_ptr->base).base.model;
      local_58 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                           (&pCVar2->motion_controller,DAT_02db8888,
                            (float)this_ptr->unk4 * (float)0.65000000000000002 + (float)0.34999999999999998)
      ;
      local_18 = local_58;
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                (pCVar2,DAT_02db8888,local_58,(float)this_ptr->unk5,*(int *)(this_ptr->unk3 + 4),
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                (pCVar2,DAT_02db8888,local_58,(float)this_ptr->unk5,*(int *)(this_ptr->unk3 + 8),
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      if (((1.0 <= (float)this_ptr->unk5) && (0.0 < (float)this_ptr->unk4)) &&
         (fVar8 = delta_time / local_54 + (float)this_ptr->unk4, this_ptr->unk4 = (int)fVar8,
         1.0 < fVar8)) {
        this_ptr->unk4 = 0x3f800000;
      }
    }
    else {
      this_ptr->unk4 = 0;
      this_ptr->unk5 = 0;
    }
  }
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0
            ((CCharacter *)this_ptr,delta_time,uVar14);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,fVar22);
  if ((1.0 <= (float)this_ptr->unk4) &&
     (pCVar18 = (CCharacter *)
                core_actor_cpp_castToClassHash_FUN_0040c790
                          ((this_ptr->base).base.carry_hands[1].carry_actor,
                           g_CWeaponClassInfo.name_hash), pCVar18 != (CCharacter *)0x0)) {
    fVar22 = (pCVar18->model).transformed_vertices[0x4f].z;
    (pCVar18->model).transformed_vertices[0x4f].z = 8.40779e-45;
    (*(((pCVar18->base).vtable._uc)->_uc).isGrabbable)(pCVar18);
    (pCVar18->model).transformed_vertices[0x4f].z = fVar22;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0xc,1);
    this_ptr->unk5 = 0;
    this_ptr->unk4 = 0;
  }
  if (((*(int *)this_ptr->unk2 == 1) &&
      (pCVar17 = core_actor_cpp_castToClassHash_FUN_0040c790
                           ((this_ptr->base).base.carry_hands[1].carry_actor,
                            g_CWeaponClassInfo.name_hash), pCVar17 != (CDemonActor *)0x0)) &&
     (iVar13 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                         (g_CEventListPtr,"deputeFireShotgun"), iVar13 != 0)) {
    this_ptr->unk4 = 0x3c23d70a;
    return;
  }
  return;
}
