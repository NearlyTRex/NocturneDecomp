// Name: core_hostage.cpp_FUN_004b6d80
// Address: 004b6d80
// Address Range: [[004b6d80, 004b819a]]
// Convention: unknown
// Signature: void core_hostage_cpp_FUN_004b6d80(CHostage *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hostage_cpp_FUN_004b6d80(CHostage *param_1,float param_2)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  CCharacter *pCVar4;
  float fVar5;
  CCharacter_full_vtable *pCVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  byte *puVar11;
  int iVar12;
  uint uVar13;
  CDoor *pCVar14;
  CSkeleton *this_ptr;
  CVector3f *pCVar15;
  float *pfVar16;
  CDemonActor *pCVar17;
  CWayPoint *pCVar18;
  CVector3f *pCVar19;
  SMotion *pSVar20;
  int iVar21;
  char *bone_name;
  int *y_pos;
  ulonglong in_stack_fffffe40;
  float local_1a0;
  float local_19c;
  float local_198;
  byte local_194 [60];
  CVector3f local_158;
  byte local_14c [12];
  CVector3f local_140;
  CVector3f local_134;
  float local_128;
  float local_124;
  float local_120;
  char local_11c [12];
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
  byte local_c8 [12];
  CVector3f local_bc;
  CVector3f local_b0;
  float local_a4;
  float local_a0;
  float local_9c;
  CVector3f local_98;
  CVector3f local_8c;
  byte local_80 [24];
  float local_68;
  uint local_58;
  float local_54;
  CDemonActor *local_50;
  CDemonActor *local_4c;
  UActorVTable local_48;
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
  
  switch(param_1->hostage_state) {
  case 0:
  case 4:
    (param_1->base).base.ai_detection_range_max = 50.0;
    (param_1->base).base.ai_detection_range_min = 20.0;
    break;
  case 1:
  case 2:
    (param_1->base).base.ai_detection_range_max = 75.0;
    (param_1->base).base.ai_detection_range_min = 40.0;
    break;
  case 3:
  case 5:
    (param_1->base).base.ai_detection_range_max = 99999.0;
    (param_1->base).base.ai_detection_range_min = 99999.0;
  }
  if ((param_1->base).base.hit_points <= 0.0) {
    (param_1->base).base.ai_detection_range_max = 99999.0;
    (param_1->base).base.ai_detection_range_min = 99999.0;
  }
  iVar12 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar12 == 0) {
    return;
  }
  local_1a0 = param_2;
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.model.accumulated_root_motion.x =
       (param_1->base).base.model.accumulated_root_motion.y;
  local_28 = &(param_1->base).base.model.motion_controller;
  while (y_pos = (int *)in_stack_fffffe40, 0.0 < local_1a0) {
    uVar13 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(local_28,&local_1a0);
    if (uVar13 < 0xb) {
      if (uVar13 == 6) {
        pCVar17 = (param_1->base).base.grabbed_by;
        if (pCVar17 != (CDemonActor *)0x0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s escaping from %s\n",param_1,pCVar17);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)local_194);
          local_194._4_4_ =
               core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41200000,0x41700000);
          local_194._52_4_ = param_1;
          local_194._56_4_ = param_1;
          pCVar4 = (CCharacter *)(param_1->base).base.grabbed_by;
          local_18 = (float)local_194._4_4_;
          (*(((pCVar4->base).vtable._uc)->_uc).getGrabbed)
                    (pCVar4,(CDemonActor *)local_194,(int)in_stack_fffffe40);
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)param_1,uVar13);
      }
    }
    else if (uVar13 < 0xc) {
      local_24 = (CDoor *)0x0;
      local_140.x = 0.0;
      local_140.y = 0.0;
      local_68 = 1e+30;
      local_140.z = 1.5;
      iVar12 = 0;
      iVar21 = 0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)param_1,&local_ec,&local_140);
      while (iVar12 < *(int *)(0x01E57284 + 0x14cd6c)) {
        pCVar14 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040d890
                                     (*(CDemonActor **)(iVar21 + 0x14cd70 + 0x01E57284),
                                      g_CDoorActorType_01af4e9c.name_hash);
        if (pCVar14 == (CDoor *)0x0) {
LAB_004b6f82:
          iVar12 = iVar12 + 1;
          iVar21 = iVar21 + 4;
        }
        else {
          local_110 = (pCVar14->base).location.position.x - local_ec.x;
          local_10c = (pCVar14->base).location.position.y - local_ec.y;
          local_108 = (pCVar14->base).location.position.z - local_ec.z;
          if ((float)5 < ABS(local_10c)) goto LAB_004b6f82;
          local_10c = 0.0;
          local_20 = SQRT(local_108 * local_108 + local_110 * local_110);
          if (local_68 <= local_20) goto LAB_004b6f82;
          iVar12 = iVar12 + 1;
          iVar21 = iVar21 + 4;
          local_68 = local_20;
          local_24 = pCVar14;
        }
      }
      if (local_24 != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00456220(local_24,0.1);
      }
    }
    else if (uVar13 == 0xc) {
      pCVar17 = (param_1->base).base.carry_hands[1].carry_actor;
      if (pCVar17 != (CDemonActor *)0x0) {
        (*(((param_1->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)param_1);
        in_stack_fffffe40 = 1;
        core_inv_cpp_CInventory_addItem_FUN_004bf360
                  ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),pCVar17,1);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)param_1,uVar13);
    }
  }
  fVar5 = (float)3.1415926535000001;
  (param_1->base).base.walk_step_speed = (param_1->base).base.model.accumulated_root_motion.z;
  local_2c = 0;
  (param_1->base).base.turn_speed = param_2 * fVar5;
  local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(local_28,10);
  if (0.0 < local_18) {
    local_2c = 1;
  }
  uVar13 = (uint)(0.0 < local_18);
  if ((param_1->base).base.hit_points <= 0.0) {
    local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                (&(param_1->base).base.model,5);
    if ((local_18 <= 0.0) &&
       (local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                    (&(param_1->base).base.model,8), local_18 <= 0.0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,6,1);
    }
LAB_004b7170:
    uVar13 = 1;
    goto switchD_004b7b39_default;
  }
  pCVar17 = (param_1->base).base.grabbed_by;
  if (pCVar17 == (CDemonActor *)0x0) {
    pCVar2 = &(param_1->base).base.model;
    local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(pCVar2,3);
    if (((0.0 < local_18) ||
        (local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                     (pCVar2,5), 0.0 < local_18)) ||
       (local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                    (pCVar2,8), 0.0 < local_18)) goto LAB_004b7170;
    iVar12 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
    puVar11 = PTR_DAT_005ad350;
    if (iVar12 == 0) {
      switch(param_1->hostage_state) {
      case 0:
        iVar12 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004b81a0(param_1,param_2);
        if (iVar12 == 0) {
          iVar12 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          local_e0 = *(float *)(iVar12 + 0x20) - (param_1->base).base.base.location.position.x;
          local_dc = *(float *)(iVar12 + 0x24) - (param_1->base).base.base.location.position.y;
          local_d8 = *(float *)(iVar12 + 0x28) - (param_1->base).base.base.location.position.z;
          if (((0.0 < param_1->rescue_distance) &&
              (param_1->rescue_distance <=
               SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc))) ||
             (iVar12 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                 (0x01C03A10,param_1->rescue_condition),
             puVar11 = PTR_DAT_005ad350, iVar12 == 0)) goto LAB_004b7672;
          param_1->hostage_state = 1;
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (puVar11,"%s rescued, entering follow mode\n",param_1);
          core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                    (0x01C03A10,param_1->hero_found_me_event);
        }
        break;
      case 1:
        pCVar18 = (CWayPoint *)param_1->goal_way_point;
        if ((pCVar18 != (CWayPoint *)0x0) &&
           (fVar5 = (param_1->base).base.base.location.position.x -
                    (pCVar18->base).base.location.position.x,
           fVar3 = (param_1->base).base.base.location.position.z -
                   (pCVar18->base).base.location.position.z,
           SQRT(fVar3 * fVar3 + fVar5 * fVar5) < (float)40)) {
          pCVar18 = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_00552680
                              ((CWayPoint *)&(param_1->base).base.base.location,pCVar18);
          param_1->next_way_point = (CDemonActor *)pCVar18;
        }
        puVar11 = PTR_DAT_005ad350;
        if (param_1->next_way_point == (CDemonActor *)0x0) {
          iVar12 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004b81a0(param_1,param_2);
          if (iVar12 == 0) {
            iVar12 = core_charactr_cpp_FUN_0042af70(param_1,param_2);
            if (iVar12 == 0) {
              core_charactr_cpp_CCharacter_followActor_FUN_00428780
                        ((CCharacter *)param_1,*(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8),5.0,
                         10.0,&param_1->follow_state);
            }
            else {
              param_1->follow_state = iVar12;
            }
            uVar7 = param_1->follow_state;
            pCVar2 = &(param_1->base).base.model;
            if (uVar7 < 2) {
              if (uVar7 != 1) goto LAB_004b7672;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar2->motion_controller,1,1);
            }
            else if (uVar7 < 3) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar2->motion_controller,2,1);
            }
            else {
              if (uVar7 != 3) goto LAB_004b7672;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar2->motion_controller,0,1);
              puVar11 = PTR_DAT_005ad350;
              param_1->hostage_state = 2;
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (puVar11,"%s left behind!\n",param_1);
              core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                        (0x01C03A10,param_1->hero_left_me_event);
              (param_1->base).base.hero_proximity_timer = 0.0;
            }
          }
        }
        else {
          param_1->hostage_state = 3;
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (puVar11,"%s was led close enough, going home!\n",param_1);
          core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                    (0x01C03A10,param_1->going_to_sit_down_event);
          (param_1->base).base.hero_proximity_timer = 0.0;
        }
        break;
      case 2:
        iVar12 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004b81a0(param_1,param_2);
        if (iVar12 == 0) {
          core_charactr_cpp_CCharacter_followActor_FUN_00428780
                    ((CCharacter *)param_1,*(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8),4.0,10.0
                     ,&param_1->follow_state);
          uVar7 = param_1->follow_state;
          local_50 = (CDemonActor *)0x0;
          if (uVar7 == 0) {
            iVar12 = 0;
LAB_004b794d:
            param_1->hostage_state = 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar2->motion_controller,iVar12,1);
          }
          else {
            if (uVar7 < 2) {
              iVar12 = 1;
              goto LAB_004b794d;
            }
            if (uVar7 == 2) {
              iVar12 = 2;
              goto LAB_004b794d;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(param_1->base).base.model.motion_controller,0,1);
            if (local_50 == (CDemonActor *)0x0) break;
          }
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s was left behind, but now can follow again!\n",param_1);
          core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                    (0x01C03A10,param_1->hero_came_back_event);
        }
        break;
      case 3:
        if (param_1->next_way_point == (CDemonActor *)0x0) {
          param_1->hostage_state = 2;
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (puVar11,"%s doesn't know next waypoint going home.  Help me!\n",param_1);
        }
        else {
          core_charactr_cpp_CCharacter_followActor_FUN_00428780
                    ((CCharacter *)param_1,param_1->next_way_point,1.0,-1.0,&param_1->follow_state);
          switch(param_1->follow_state) {
          case 0:
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (PTR_DAT_005ad350,"%s reached waypoint %s!\n",param_1,
                       param_1->next_way_point);
            puVar11 = PTR_DAT_005ad350;
            if ((CWayPoint *)param_1->next_way_point == (CWayPoint *)param_1->goal_way_point) {
              param_1->hostage_state = 4;
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (puVar11,"%s rescued and taken home!\n",param_1);
              param_1->next_way_point = (CDemonActor *)0x0;
            }
            else {
              pCVar18 = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_00552680
                                  ((CWayPoint *)&(param_1->base).base.base.location,
                                   (CWayPoint *)param_1->goal_way_point);
              param_1->next_way_point = (CDemonActor *)pCVar18;
            }
            break;
          case 1:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar2->motion_controller,1,1);
            break;
          case 2:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar2->motion_controller,2,1);
            break;
          case 3:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar2->motion_controller,0,1);
            puVar11 = PTR_DAT_005ad350;
            param_1->hostage_state = 2;
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (puVar11,"%s got confused going home.  Help me!\n",param_1);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar2->motion_controller,0,1);
            core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                      (0x01C03A10,param_1->sit_down_event);
            core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0
                      (0x01C03A10,param_1->rescue_event,1);
            param_1->hostage_state = 4;
            param_1->next_way_point = (CDemonActor *)0x0;
          }
        }
        break;
      case 4:
        local_2c = 1;
        if (param_1->sit_down_way_point != (CDemonActor *)0x0) {
          fVar5 = param_2 * (float)0.5;
          y_pos = SUB84(__BITCAST_UINT64((double)fVar5),0);
          if ((param_1->base).base.walk_step_speed < fVar5) {
            (param_1->base).base.walk_step_speed = fVar5;
          }
          pCVar19 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                              ((CDemonActor *)param_1,&local_8c,
                               &(param_1->sit_down_way_point->location).position);
          pCVar15 = &(param_1->base).base.position_delta;
          if (pCVar15 != pCVar19) {
            pCVar15->x = pCVar19->x;
            (param_1->base).base.position_delta.y = pCVar19->y;
            (param_1->base).base.position_delta.z = pCVar19->z;
          }
          pCVar15 = &(param_1->base).base.position_delta;
          local_a4 = pCVar15->x;
          local_9c = (param_1->base).base.position_delta.z;
          local_198 = SQRT(local_9c * local_9c + local_a4 * local_a4);
          local_a0 = 0.0;
          if ((param_1->base).base.walk_step_speed < local_198) {
            local_30 = (param_1->base).base.walk_step_speed / local_198;
            fVar5 = (param_1->base).base.position_delta.y;
            fVar3 = (param_1->base).base.position_delta.z;
            pCVar15->x = pCVar15->x * local_30;
            (param_1->base).base.position_delta.y = fVar5 * local_30;
            (param_1->base).base.position_delta.z = fVar3 * local_30;
          }
          local_34 = local_198;
          iVar12 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                             (local_14c,&(param_1->base).base.position_delta);
          fVar5 = local_198 * (float)2;
          (param_1->base).base.turn_angle_accumulator = *(float *)(iVar12 + 4);
          if (fVar5 < 1.0) {
            local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                        ((param_1->sit_down_way_point->orient).vec.y -
                                         (param_1->base).base.base.orient.vec.y);
            local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                        (local_18 - (param_1->base).base.turn_angle_accumulator);
            (param_1->base).base.turn_angle_accumulator =
                 (1.0 - fVar5) * local_18 + (param_1->base).base.turn_angle_accumulator;
          }
          local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                      ((param_1->base).base.turn_angle_accumulator);
          (param_1->base).base.turn_angle_accumulator = local_18;
          if ((local_198 < (float)0.01) &&
             (ABS((param_1->base).base.turn_angle_accumulator) < (float)0.017453292519444399)) {
            if ((param_1->hostage_type == 0) || (param_1->hostage_type == 4)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(param_1->base).base.model.motion_controller,0,1);
              param_1->hostage_state = 5;
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(param_1->base).base.model.motion_controller,10,1);
            }
            core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                      (0x01C03A10,param_1->sit_down_event);
            core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0
                      (0x01C03A10,param_1->rescue_event,1);
            param_1->sit_down_way_point = (CDemonActor *)0x0;
          }
          local_3c = param_2 * (float)3.1415926535000001;
          local_40 = -local_3c;
          if ((param_1->base).base.turn_angle_accumulator < local_40) {
            (param_1->base).base.turn_angle_accumulator = local_40;
          }
          if (local_3c < (param_1->base).base.turn_angle_accumulator) {
            (param_1->base).base.turn_angle_accumulator = local_3c;
          }
        }
      }
    }
    else {
      uVar7 = (param_1->base).base.is_walking;
      if (uVar7 < 2) {
        if (uVar7 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,1,1);
        }
        else {
LAB_004b7672:
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,0,1);
        }
      }
      else if (uVar7 < 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,2,1);
      }
      else {
        if (uVar7 != 3) goto LAB_004b7672;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,0,1);
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
      }
    }
  }
  else {
    pCVar15 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        ((CDemonActor *)param_1,&local_d4,&(pCVar17->location).position);
    iVar12 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_c8,pCVar15);
    local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(iVar12 + 4));
    local_19c = local_18;
    if (local_18 < (float)-1.57079632675) {
      local_19c = local_18 + 3.141593f;
    }
    if ((float)1.57079632675 < local_19c) {
      local_19c = local_19c + -3.141593f;
    }
    local_38 = param_2 * (float)3.1415926535000001;
    local_44 = -local_38;
    if (local_19c < local_44) {
      local_19c = local_44;
    }
    if (local_38 < local_19c) {
      local_19c = local_38;
    }
    (param_1->base).base.base.orient.vec.y = (param_1->base).base.base.orient.vec.y + local_19c;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)param_1);
    pCVar4 = (CCharacter *)(param_1->base).base.grabbed_by;
    pCVar6 = (pCVar4->base).vtable._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
              (&(param_1->base).base.model,&local_98,0);
    pCVar17 = (*(pCVar6->_uc).getGrabber)(pCVar4);
    if (pCVar17 == (CDemonActor *)0x0) {
      (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004b7534:
      y_pos = (int *)0x1;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,0,1);
    }
    else if ((param_1->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004b7534;
    uVar13 = 1;
    local_28 = (CMotionController *)0x1;
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    (param_1->base).base.model.accumulated_root_motion.x =
         (param_1->base).base.model.accumulated_root_motion.y;
  }
switchD_004b7b39_default:
  if (((0.0 < (param_1->base).base.hit_points) && (param_1->hostage_type == 1)) &&
     (iVar12 = core_actor_cpp_randomChance_FUN_0040dea0(param_2 * 0.2f), iVar12 != 0)) {
    iVar12 = 0;
    bone_name = "Bip01 L Forearm";
    pCVar2 = &(param_1->base).base.model;
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(pCVar2);
    iVar12 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,bone_name,iVar12);
    if (-1 < iVar12) {
      pCVar15 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (pCVar2,&local_bc,iVar12);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)param_1,&local_158,pCVar15);
      local_11c[0] = '\0';
      local_11c[1] = '\0';
      local_11c[2] = '@';
      local_11c[3] = '@';
      local_11c[4] = '\0';
      local_11c[5] = '\0';
      local_11c[6] = '\0';
      local_11c[7] = '\0';
      local_11c[8] = '\0';
      local_11c[9] = '\0';
      local_11c[10] = '\0';
      local_11c[0xb] = '\0';
      core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&local_134,local_11c);
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0
                ((CGore *)INT_005b96c4,&local_158,&local_134,0);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  if (local_2c == 0) {
    pSVar20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                        (&(param_1->base).base.model.motion_controller);
    iVar12 = pSVar20->state_index;
    if ((((iVar12 == 8) || (iVar12 == 0)) || ((iVar12 == 0xd || (iVar12 == 10)))) &&
       ((param_1->base).base.base.standing_platform == (CPlatform *)0x0)) {
      (param_1->base).base.walk_stuck_timer = 0.0;
      goto LAB_004b72a1;
    }
    (param_1->base).base.velocity.y =
         (param_1->base).base.velocity.y - param_2 * (float)32;
    local_104 = (param_1->base).base.velocity.x * param_2;
    local_100 = (param_1->base).base.velocity.y * param_2;
    pCVar15 = &(param_1->base).base.position_delta;
    local_fc = (param_1->base).base.velocity.z * param_2;
    pCVar19 = &(param_1->base).base.model.accumulated_root_motion;
    local_128 = local_104 + pCVar15->x;
    local_124 = local_100 + (param_1->base).base.position_delta.y;
    local_120 = local_fc + (param_1->base).base.position_delta.z;
    local_b0.x = local_128 + pCVar19->x;
    local_b0.y = local_124 + (param_1->base).base.model.accumulated_root_motion.y;
    local_b0.z = local_120 + (param_1->base).base.model.accumulated_root_motion.z;
    (param_1->base).base.position_delta.z = 0.0;
    (param_1->base).base.position_delta.y = (param_1->base).base.position_delta.z;
    pCVar15->x = (param_1->base).base.position_delta.y;
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    pCVar1 = &(param_1->base).base.base.location;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    pCVar19->x = (param_1->base).base.model.accumulated_root_motion.y;
    local_f8 = (pCVar1->position).x;
    local_f4 = (param_1->base).base.base.location.position.y;
    local_f0 = (param_1->base).base.base.location.position.z;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&local_b0);
    (param_1->base).base.walk_stuck_timer = (param_1->base).base.walk_stuck_timer + param_2;
    if (((double)param_2 * 0.59999999999999998 <=
         SQRT((double)local_b0.z * (double)local_b0.z +
              (double)local_b0.x * (double)local_b0.x + (double)local_b0.y * (double)local_b0.y)) &&
       (dVar8 = (double)(pCVar1->position).x - (double)local_f8,
       dVar9 = (double)(param_1->base).base.base.location.position.y - (double)local_f4,
       dVar10 = (double)(param_1->base).base.base.location.position.z - (double)local_f0,
       SQRT(dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8) <= (double)param_2 * 0.40000000000000002))
    goto LAB_004b72a1;
  }
  else {
    pfVar16 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                 (param_1,local_80,&(param_1->base).base.position_delta);
    pCVar1 = &(param_1->base).base.base.location;
    (pCVar1->position).x = *pfVar16 + (pCVar1->position).x;
    (param_1->base).base.base.location.position.y =
         pfVar16[1] + (param_1->base).base.base.location.position.y;
    (param_1->base).base.base.location.position.z =
         pfVar16[2] + (param_1->base).base.base.location.position.z;
  }
  (param_1->base).base.walk_stuck_timer = 0.0;
LAB_004b72a1:
  pCVar2 = &(param_1->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCVar2);
  if (param_1->hostage_type == 1) {
    local_48 = (UActorVTable)0x3f000000;
    local_54 = 0.75;
    pCVar17 = core_actor_cpp_castToClassHash_FUN_0040d890
                        ((param_1->base).base.carry_hands[1].carry_actor,
                         g_CWeaponActorType_02ddf970.name_hash);
    local_4c = (CDemonActor *)0x0;
    if (((pCVar17 != (CDemonActor *)0x0) &&
        (local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                     (pCVar2,0x10), local_18 <= 0.0)) ||
       (local_4c != (CDemonActor *)0x0)) {
      fVar5 = param_2 / (float)local_48 + param_1->gun_blend_weight;
    }
    else {
      fVar5 = param_1->gun_blend_weight - param_2 / (float)local_48;
    }
    param_1->gun_blend_weight = fVar5;
    if (0.0 < param_1->gun_blend_weight) {
      if (1.0 < param_1->gun_blend_weight) {
        param_1->gun_blend_weight = 1.0;
      }
      pCVar2 = &(param_1->base).base.model;
      local_58 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                           (pCVar2,_DAT_01cae1a0,
                            param_1->gun_raise_progress * (float)0.65000000000000002 +
                            (float)0.34999999999999998);
      local_18 = (float)local_58;
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
                (pCVar2,_DAT_01cae1a0,local_58,param_1->gun_blend_weight,param_1->bone_indices[0],
                 core_skeleton_cpp_FUN_0051b650);
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
                (pCVar2,_DAT_01cae1a0,local_58,param_1->gun_blend_weight,param_1->bone_indices[1],
                 core_skeleton_cpp_FUN_0051b650);
      if (((1.0 <= param_1->gun_blend_weight) && (0.0 < param_1->gun_raise_progress)) &&
         (fVar5 = param_2 / local_54 + param_1->gun_raise_progress,
         param_1->gun_raise_progress = fVar5, 1.0 < fVar5)) {
        param_1->gun_raise_progress = 1.0;
      }
    }
    else {
      param_1->gun_raise_progress = 0.0;
      param_1->gun_blend_weight = 0.0;
    }
  }
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429730
            ((CCharacter *)param_1,param_2,uVar13);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  if ((1.0 <= param_1->gun_raise_progress) &&
     (pCVar17 = core_actor_cpp_castToClassHash_FUN_0040d890
                          ((param_1->base).base.carry_hands[1].carry_actor,
                           g_CWeaponActorType_02ddf970.name_hash), pCVar17 != (CDemonActor *)0x0)) {
    fVar5 = pCVar17[4].location.position.y;
    pCVar17[4].location.position.y = 8.40779e-45;
    (*((pCVar17->vtable)._ub)->showEditorHelp)(pCVar17,y_pos);
    pCVar17[4].location.position.y = fVar5;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,0xc,1);
    param_1->gun_blend_weight = 0.0;
    param_1->gun_raise_progress = 0.0;
  }
  if (((param_1->hostage_type == 1) &&
      (pCVar17 = core_actor_cpp_castToClassHash_FUN_0040d890
                           ((param_1->base).base.carry_hands[1].carry_actor,
                            g_CWeaponActorType_02ddf970.name_hash), pCVar17 != (CDemonActor *)0x0))
     && (iVar12 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                            (0x01C03A10,"deputeFireShotgun"), iVar12 != 0)) {
    param_1->gun_raise_progress = 0.01;
    return;
  }
  return;
}
