// Name: core_hostage.cpp_CHostage_process_FUN_004f4bd0
// Address: 004f4bd0
// MANUAL RECONSTRUCTION
// Address Range: [[004f4bd0, 004f5fea]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_process_FUN_004f4bd0(CHostage *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_hostage_cpp_CHostage_process_FUN_004f4bd0(CHostage *this_ptr,float delta_time)

{
  CLocation *pCVar3;
  CDeformableModelInstance *pCVar4;
  CVector3f *pCVar7;
  CDemonActor *pCVar9;
  CCharacter *this_ptr_01;
  uint uVar10;
  float fVar11;
  bool bVar12;
  CConsole *pCVar13;
  int iVar13;
  uint uVar14;
  CDoor *pCVar15;
  float fVar14;
  CSkeleton *this_ptr_00;
  CVector3f *pCVar16;
  CVector3f *pCVar21;
  CWeapon *pCVar19;
  CWeapon *pCVar18;
  CWayPoint *pCVar17;
  CWayPoint *pCVar23;
  CVector3f *pCVar20;
  float fVar24;
  SMotion *pSVar21;
  CWeapon *pCVar22;
  int iVar25;
  uint disable_search;
  float local_1a0;
  float local_19c;
  float local_198;
  SDamageInfo local_194;
  CVector3f local_158;
  CVector3f local_14c;
  CVector3f local_140;
  CVector3f local_134;
  CVector3f local_11c;
  CVector3f local_ec;
  CVector3f local_d4;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80 [2];
  float local_68;
  CDoor *local_24;
  char *bone_name;
  CConsole *pCVar12;
  double dVar11;
  double dVar10;
  double dVar9;
  CHero *pCVar8;
  uint uVar7;
  CCharacter_full_vtable *pCVar6;
  CCharacter *pCVar5;
  float fVar4;
  float fVar3;
  CDeformableModelInstance *pCVar2;
  CLocation *pCVar1;
  
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
  local_1a0 = delta_time;
  (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
  pCVar4 = &(this_ptr->base).base.model;
  while (0.0 < local_1a0) {
    uVar14 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                       (&pCVar4->motion_controller,&local_1a0);
    if (uVar14 < 0xb) {
      if (uVar14 == 6) {
        pCVar9 = (this_ptr->base).base.grabbed_by;
        if (pCVar9 != (CDemonActor *)0x0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s escaping from %s\n",this_ptr->base.base.base.actor_name,pCVar9->actor_name);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_194);
          local_194.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(10.0,15.0);
          local_194.attacker = (CDemonActor *)this_ptr;
          local_194.wielder = (CDemonActor *)this_ptr;
          pCVar5 = (CCharacter *)(this_ptr->base).base.grabbed_by;
          (*(((pCVar5->base).vtable._uc)->_uc).processDamage)(pCVar5,&local_194);
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
      iVar25 = 0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_ec,&local_140);
      while (iVar25 < g_CDemonSetPtr->actor_count) {
        pCVar15 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790
                                     (g_CDemonSetPtr->actors[iVar25],
                                      g_CDoorClassInfo.name_hash);
        if (pCVar15 == (CDoor *)0x0) {
LAB_004f4dd2:
          iVar25 = iVar25 + 1;
        }
        else {
          fVar14 = (pCVar15->base).location.position.x - local_ec.x;
          fVar24 = (pCVar15->base).location.position.z - local_ec.z;
          if (((float)5 < ABS((pCVar15->base).location.position.y - local_ec.y)) ||
             (fVar14 = SQRT(fVar24 * fVar24 + fVar14 * fVar14), local_68 <= fVar14))
          goto LAB_004f4dd2;
          iVar25 = iVar25 + 1;
          local_68 = fVar14;
          local_24 = pCVar15;
        }
      }
      if (local_24 != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00480de0(local_24,0.1);
      }
    }
    else if (uVar14 == 0xc) {
      pCVar9 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (pCVar9 != (CDemonActor *)0x0) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
        core_inv_cpp_CInventory_addItem_FUN_004fd600
                  (&g_HeroActors[g_LocalHeroIndex]->inventory,pCVar9,1);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar14);
    }
  }
  fVar14 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar14;
  fVar14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                     (&pCVar4->motion_controller,10);
  bVar12 = 0.0 < fVar14;
  disable_search = (uint)bVar12;
  if ((this_ptr->base).base.hit_points <= 0.0) {
    fVar14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,5);
    if ((fVar14 <= 0.0) &&
       (fVar14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                           (&(this_ptr->base).base.model.motion_controller,8), fVar14 <= 0.0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,6,1);
    }
LAB_004f4fc0:
    disable_search = 1;
  }
  else {
    pCVar9 = (this_ptr->base).base.grabbed_by;
    if (pCVar9 == (CDemonActor *)0x0) {
      pCVar4 = &(this_ptr->base).base.model;
      fVar14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar4->motion_controller,3);
      if (((0.0 < fVar14) ||
          (fVar14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                              (&pCVar4->motion_controller,5), 0.0 < fVar14)) ||
         (fVar14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                             (&pCVar4->motion_controller,8), 0.0 < fVar14)) goto LAB_004f4fc0;
      iVar25 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                         ((CCharacter *)this_ptr,delta_time);
      pCVar12 = g_CConsolePtr;
      if (iVar25 == 0) {
        switch(this_ptr->hostage_state) {
        case 0:
          iVar25 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004f5ff0(this_ptr,delta_time);
          if (iVar25 == 0) {
            pCVar8 = g_HeroActors[g_LocalHeroIndex];
            fVar14 = (pCVar8->base).base.location.position.x -
                     (this_ptr->base).base.base.location.position.x;
            fVar24 = (pCVar8->base).base.location.position.y -
                     (this_ptr->base).base.base.location.position.y;
            fVar11 = (pCVar8->base).base.location.position.z -
                     (this_ptr->base).base.base.location.position.z;
            if (((0.0 < this_ptr->rescue_distance) &&
                (this_ptr->rescue_distance <=
                 SQRT(fVar11 * fVar11 + fVar14 * fVar14 + fVar24 * fVar24))) ||
               (iVar25 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                   (g_CEventListPtr,this_ptr->rescue_condition),
               pCVar13 = g_CConsolePtr, iVar25 == 0)) goto LAB_004f54c2;
            this_ptr->hostage_state = 1;
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (pCVar13,"%s rescued, entering follow mode\n",this_ptr->base.base.base.actor_name);
            core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                      (g_CEventListPtr,this_ptr->hero_found_me_event);
          }
          break;
        case 1:
          pCVar23 = (CWayPoint *)this_ptr->goal_way_point;
          if ((pCVar23 != (CWayPoint *)0x0) &&
             (fVar14 = (this_ptr->base).base.base.location.position.x -
                       (pCVar23->base).base.location.position.x,
             fVar24 = (this_ptr->base).base.base.location.position.z -
                      (pCVar23->base).base.location.position.z,
             SQRT(fVar24 * fVar24 + fVar14 * fVar14) < (float)40)) {
            pCVar17 = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_005ec320
                                ((CWayPoint *)&(this_ptr->base).base.base.location,pCVar23);
            this_ptr->next_way_point = (CDemonActor *)pCVar17;
          }
          pCVar13 = g_CConsolePtr;
          if (this_ptr->next_way_point == (CDemonActor *)0x0) {
            iVar25 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004f5ff0(this_ptr,delta_time);
            if (iVar25 == 0) {
              iVar25 = core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0
                                 ((CCharacter *)this_ptr,delta_time);
              if (iVar25 == 0) {
                core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0
                          ((CCharacter *)this_ptr,(CDemonActor *)g_HeroActors[g_LocalHeroIndex],5.0,
                           10.0,&this_ptr->follow_state);
              }
              else {
                this_ptr->follow_state = iVar25;
              }
              uVar10 = this_ptr->follow_state;
              pCVar4 = &(this_ptr->base).base.model;
              if (uVar10 < 2) {
                if (uVar10 != 1) goto LAB_004f54c2;
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar4->motion_controller,1,1);
              }
              else if (uVar10 < 3) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar4->motion_controller,2,1);
              }
              else {
                if (uVar10 != 3) goto LAB_004f54c2;
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar4->motion_controller,0,1);
                pCVar13 = g_CConsolePtr;
                this_ptr->hostage_state = 2;
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (pCVar13,"%s left behind!\n",this_ptr->base.base.base.actor_name);
                core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                          (g_CEventListPtr,this_ptr->hero_left_me_event);
                (this_ptr->base).base.hero_proximity_timer = 0.0;
              }
            }
          }
          else {
            this_ptr->hostage_state = 3;
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (pCVar13,"%s was led close enough, going home!\n",this_ptr->base.base.base.actor_name);
            core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                      (g_CEventListPtr,this_ptr->going_to_sit_down_event);
            (this_ptr->base).base.hero_proximity_timer = 0.0;
          }
          break;
        case 2:
          iVar25 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004f5ff0(this_ptr,delta_time);
          if (iVar25 == 0) {
            core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0
                      ((CCharacter *)this_ptr,(CDemonActor *)g_HeroActors[g_LocalHeroIndex],4.0,10.0
                       ,&this_ptr->follow_state);
            uVar10 = this_ptr->follow_state;
            if (uVar10 == 0) {
              iVar25 = 0;
            }
            else if (uVar10 < 2) {
              iVar25 = 1;
            }
            else {
              if (uVar10 != 2) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,0,1);
                break;
              }
              iVar25 = 2;
            }
            this_ptr->hostage_state = 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar4->motion_controller,iVar25,1);
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s was left behind, but now can follow again!\n",this_ptr->base.base.base.actor_name);
            core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                      (g_CEventListPtr,this_ptr->hero_came_back_event);
          }
          break;
        case 3:
          if (this_ptr->next_way_point == (CDemonActor *)0x0) {
            this_ptr->hostage_state = 2;
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (pCVar12,"%s doesn't know next waypoint going home.  Help me!\n",this_ptr->base.base.base.actor_name);
          }
          else {
            core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0
                      ((CCharacter *)this_ptr,this_ptr->next_way_point,1.0,-1.0,
                       &this_ptr->follow_state);
            switch(this_ptr->follow_state) {
            case 0:
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s reached waypoint %s!\n",this_ptr->base.base.base.actor_name,
                         this_ptr->next_way_point->actor_name);
              pCVar13 = g_CConsolePtr;
              if ((CWayPoint *)this_ptr->next_way_point == (CWayPoint *)this_ptr->goal_way_point) {
                this_ptr->hostage_state = 4;
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (pCVar13,"%s rescued and taken home!\n",this_ptr->base.base.base.actor_name);
                this_ptr->next_way_point = (CDemonActor *)0x0;
              }
              else {
                pCVar23 = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_005ec320
                                    ((CWayPoint *)&(this_ptr->base).base.base.location,
                                     (CWayPoint *)this_ptr->goal_way_point);
                this_ptr->next_way_point = (CDemonActor *)pCVar23;
              }
              break;
            case 1:
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar4->motion_controller,1,1);
              break;
            case 2:
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar4->motion_controller,2,1);
              break;
            case 3:
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar4->motion_controller,0,1);
              pCVar13 = g_CConsolePtr;
              this_ptr->hostage_state = 2;
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (pCVar13,"%s got confused going home.  Help me!\n",this_ptr->base.base.base.actor_name);
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar4->motion_controller,0,1);
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
          bVar12 = true;
          if (this_ptr->sit_down_way_point != (CDemonActor *)0x0) {
            if ((this_ptr->base).base.walk_step_speed < delta_time * (float)0.5) {
              (this_ptr->base).base.walk_step_speed = delta_time * (float)0.5;
            }
            pCVar20 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                ((CDemonActor *)this_ptr,&local_8c,
                                 &(this_ptr->sit_down_way_point->location).position);
            pCVar21 = &(this_ptr->base).base.position_delta;
            if (pCVar21 != pCVar20) {
              *pCVar21 = *pCVar20;
            }
            pCVar21 = &(this_ptr->base).base.position_delta;
            fVar14 = (this_ptr->base).base.position_delta.z;
            local_198 = SQRT(fVar14 * fVar14 + pCVar21->x * pCVar21->x);
            if ((this_ptr->base).base.walk_step_speed < local_198) {
              fVar14 = (this_ptr->base).base.walk_step_speed / local_198;
              fVar3 = (this_ptr->base).base.position_delta.y;
              fVar4 = (this_ptr->base).base.position_delta.z;
              pCVar21->x = pCVar21->x * fVar14;
              (this_ptr->base).base.position_delta.y = fVar3 * fVar14;
              (this_ptr->base).base.position_delta.z = fVar4 * fVar14;
            }
            pCVar21 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                (&local_14c,&(this_ptr->base).base.position_delta);
            fVar14 = local_198 * (float)2;
            (this_ptr->base).base.turn_angle_accumulator = pCVar21->y;
            if (fVar14 < 1.0) {
              fVar24 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 ((this_ptr->sit_down_way_point->orient).vec.y -
                                  (this_ptr->base).base.base.orient.vec.y);
              fVar24 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (fVar24 - (this_ptr->base).base.turn_angle_accumulator);
              (this_ptr->base).base.turn_angle_accumulator =
                   (1.0 - fVar14) * fVar24 + (this_ptr->base).base.turn_angle_accumulator;
            }
            fVar14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               ((this_ptr->base).base.turn_angle_accumulator);
            (this_ptr->base).base.turn_angle_accumulator = fVar14;
            if ((local_198 < (float)0.01) &&
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
            fVar14 = delta_time * (float)3.1415926535000001;
            if ((this_ptr->base).base.turn_angle_accumulator < -fVar14) {
              (this_ptr->base).base.turn_angle_accumulator = -fVar14;
            }
            if (fVar14 < (this_ptr->base).base.turn_angle_accumulator) {
              (this_ptr->base).base.turn_angle_accumulator = fVar14;
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
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr->base.base.base.actor_name);
        }
      }
    }
    else {
      pCVar21 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                          ((CDemonActor *)this_ptr,&local_d4,&(pCVar9->location).position);
      pCVar21 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_c8,pCVar21);
      local_19c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar21->y);
      if (local_19c < (float)-1.57079632675) {
        local_19c = local_19c + 3.141593f;
      }
      if ((float)1.57079632675 < local_19c) {
        local_19c = local_19c + -3.141593f;
      }
      fVar14 = delta_time * (float)3.1415926535000001;
      if (local_19c < -fVar14) {
        local_19c = -fVar14;
      }
      if (fVar14 < local_19c) {
        local_19c = fVar14;
      }
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_19c;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
      this_ptr_01 = (CCharacter *)(this_ptr->base).base.grabbed_by;
      pCVar6 = (this_ptr_01->base).vtable._uc;
      pCVar21 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                          (&(this_ptr->base).base.model,&local_98,0);
      iVar25 = (*(pCVar6->_uc).attractActorToward)(this_ptr_01,(CDemonActor *)this_ptr,pCVar21);
      if (iVar25 == 0) {
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004f5384:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
      else if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004f5384;
      disable_search = 1;
      bVar12 = true;
      (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
      (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
    }
  }
  if (((0.0 < (this_ptr->base).base.hit_points) && (this_ptr->hostage_type == 1)) &&
     (iVar25 = core_actor_cpp_randomChance_FUN_0040cd10(delta_time * 0.2f), iVar25 != 0))
  {
    iVar25 = 0;
    bone_name = "Bip01 L Forearm";
    pCVar2 = &(this_ptr->base).base.model;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar2);
    iVar25 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,bone_name,iVar25);
    if (-1 < iVar25) {
      pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (pCVar2,&local_bc,iVar25);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_158,pCVar16);
      local_11c.x = 3.0;
      local_11c.y = 0.0;
      local_11c.z = 0.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                ((CDemonActor *)this_ptr,&local_134,&local_11c);
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004edaa0(g_CGorePtr,&local_158,&local_134,0);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  if (bVar12) {
    pCVar21 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)this_ptr,local_80,&(this_ptr->base).base.position_delta);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar21->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar21->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar21->z + (this_ptr->base).base.base.location.position.z;
  }
  else {
    pSVar21 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&(this_ptr->base).base.model.motion_controller);
    iVar25 = pSVar21->state_index;
    if ((((iVar25 == 8) || (iVar25 == 0)) || ((iVar25 == 0xd || (iVar25 == 10)))) &&
       ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      (this_ptr->base).base.walk_stuck_timer = 0.0;
      goto LAB_004f50f1;
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar21 = &(this_ptr->base).base.position_delta;
    pCVar7 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_b0.x = (this_ptr->base).base.velocity.x * delta_time + pCVar21->x + pCVar7->x;
    local_b0.y = (this_ptr->base).base.velocity.y * delta_time +
                 (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.model.accumulated_root_motion.y;
    local_b0.z = (this_ptr->base).base.velocity.z * delta_time +
                 (this_ptr->base).base.position_delta.z +
                 (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.x = 0.0f;
    (this_ptr->base).base.position_delta.y = 0.0f;
    (this_ptr->base).base.position_delta.z = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
    pCVar3 = &(this_ptr->base).base.base.location;
    fVar14 = (pCVar3->position).x;
    fVar24 = (this_ptr->base).base.base.location.position.y;
    fVar11 = (this_ptr->base).base.base.location.position.z;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_b0);
    (this_ptr->base).base.walk_stuck_timer = (this_ptr->base).base.walk_stuck_timer + delta_time;
    if (((double)delta_time * 0.59999999999999998 <=
         SQRT((double)local_b0.z * (double)local_b0.z +
              (double)local_b0.x * (double)local_b0.x + (double)local_b0.y * (double)local_b0.y)) &&
       (dVar9 = (double)(pCVar3->position).x - (double)fVar14,
       dVar10 = (double)(this_ptr->base).base.base.location.position.y - (double)fVar24,
       dVar11 = (double)(this_ptr->base).base.base.location.position.z - (double)fVar11,
       SQRT(dVar11 * dVar11 + dVar10 * dVar10 + dVar9 * dVar9) <=
       (double)delta_time * 0.40000000000000002)) goto LAB_004f50f1;
  }
  (this_ptr->base).base.walk_stuck_timer = 0.0;
LAB_004f50f1:
  pCVar4 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar4);
  if (this_ptr->hostage_type == 1) {
    pCVar19 = (CWeapon *)
              core_actor_cpp_castToClassHash_FUN_0040c790
                        ((this_ptr->base).base.carry_hands[1].carry_actor,
                         g_CWeaponClassInfo.name_hash);
    if ((pCVar19 == (CWeapon *)0x0) ||
       (fVar14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                           (&pCVar4->motion_controller,0x10), 0.0 < fVar14)) {
      fVar14 = this_ptr->gun_blend_weight - delta_time / 0.5;
    }
    else {
      fVar14 = delta_time / 0.5 + this_ptr->gun_blend_weight;
    }
    this_ptr->gun_blend_weight = fVar14;
    if (0.0 < this_ptr->gun_blend_weight) {
      if (1.0 < this_ptr->gun_blend_weight) {
        this_ptr->gun_blend_weight = 1.0;
      }
      pCVar4 = &(this_ptr->base).base.model;
      fVar14 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         (&pCVar4->motion_controller,INT_02db8888,
                          this_ptr->gun_raise_progress * (float)0.65000000000000002 +
                          (float)0.34999999999999998);
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                (pCVar4,INT_02db8888,fVar14,this_ptr->gun_blend_weight,this_ptr->bone_indices[0],
                 core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                (pCVar4,INT_02db8888,fVar14,this_ptr->gun_blend_weight,this_ptr->bone_indices[1],
                 core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
      if (((1.0 <= this_ptr->gun_blend_weight) && (0.0 < this_ptr->gun_raise_progress)) &&
         (fVar14 = delta_time / 0.75 + this_ptr->gun_raise_progress,
         this_ptr->gun_raise_progress = fVar14, 1.0 < fVar14)) {
        this_ptr->gun_raise_progress = 1.0;
      }
    }
    else {
      this_ptr->gun_raise_progress = 0.0;
      this_ptr->gun_blend_weight = 0.0;
    }
  }
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0
            ((CCharacter *)this_ptr,delta_time,disable_search);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  if ((1.0 <= this_ptr->gun_raise_progress) &&
     (pCVar18 = (CWeapon *)
                core_actor_cpp_castToClassHash_FUN_0040c790
                          ((this_ptr->base).base.carry_hands[1].carry_actor,
                           g_CWeaponClassInfo.name_hash), pCVar18 != (CWeapon *)0x0)) {
    iVar25 = pCVar18->ammo_type;
    pCVar18->ammo_type = 6;
    (*(((pCVar18->base).vtable._uw)->_uw).fire)(pCVar18);
    pCVar18->ammo_type = iVar25;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0xc,1);
    this_ptr->gun_blend_weight = 0.0;
    this_ptr->gun_raise_progress = 0.0;
  }
  if (((this_ptr->hostage_type == 1) &&
      (pCVar22 = (CWeapon *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           ((this_ptr->base).base.carry_hands[1].carry_actor,
                            g_CWeaponClassInfo.name_hash), pCVar22 != (CWeapon *)0x0)) &&
     (iVar25 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                         (g_CEventListPtr,"deputeFireShotgun"), iVar25 != 0)) {
    this_ptr->gun_raise_progress = 0.01;
    return;
  }
  return;
}
