// Name: core_hostage.cpp_CHostage_process_FUN_004d1660
// Address: 004d1660
// Address Range: [[004d1660, 004d2c42]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_process_FUN_004d1660(CHostage *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_hostage_cpp_CHostage_process_FUN_004d1660(CHostage *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  EWalkState EVar6;
  CHero *pCVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  CConsole *pCVar11;
  CCharacter_full_vtable *pCVar12;
  int iVar13;
  uint uVar14;
  CDoor *pCVar15;
  CSkeleton *this_ptr_00;
  CDemonActor *pCVar16;
  CCharacter *pCVar17;
  CWayPoint *pCVar18;
  SMotion *pSVar19;
  CDemonActor *pCVar20;
  float *pfVar21;
  byte bVar22;
  float afStackY_121c [987];
  CGore *this_ptr_01;
  CVector3f *pCVar23;
  char *bone_name;
  CVector3f *pCVar24;
  CHostage *pCVar25;
  EBloodType blood_type;
  ulonglong in_stack_fffffd68;
  float fStack_274;
  SDamageInfo SStack_270;
  CVector3f CStack_234;
  CVector3f CStack_228;
  float fStack_21c;
  float afStack_218 [2];
  CVector3f CStack_210;
  CVector3f CStack_204;
  CVector3f CStack_1f8;
  CVector3f CStack_1ec;
  CVector3f CStack_1e0;
  float fStack_1d4;
  float afStack_1d0 [4];
  float fStack_1c0;
  CVector3f CStack_1bc;
  float fStack_1b0;
  float afStack_1ac [5];
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_150;
  CVector3f CStack_144;
  CVector3f CStack_138;
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [2];
  CVector3f CStack_114;
  float fStack_108;
  float afStack_104 [2];
  CVector3f CStack_fc;
  float fStack_f0;
  float afStack_ec [2];
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [2];
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [7];
  CCharacter *pCStack_7c;
  CCharacter_full_vtable *pCStack_6c;
  float fStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int iStack_3c;
  int iStack_38;
  float fStack_34;
  CMotionController *pCStack_30;
  CDoor *pCStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  CCharacter_full_vtable *pCStack_18;
  
  bVar22 = 0;
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
  iVar13 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar13 == 0) {
    return;
  }
  fStack_274 = delta_time;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  pCStack_30 = &(this_ptr->base).base.model.base;
  while (pCVar20 = (CDemonActor *)in_stack_fffffd68, 0.0 < fStack_274) {
    uVar14 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_30,&stack0xfffffd8c);
    if (uVar14 < 0xb) {
      if (uVar14 == 6) {
        if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s escaping from %s\n");
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_270);
          SStack_270.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
          SStack_270.attacker = (CDemonActor *)this_ptr;
          SStack_270.wielder = (CDemonActor *)this_ptr;
          pCVar17 = (CCharacter *)(this_ptr->base).base.grabbed_by;
          pCStack_18 = (CCharacter_full_vtable *)SStack_270.damage_amount;
          (*(((pCVar17->base).vtable._uc)->_uc).processDamage)(pCVar17,&SStack_270);
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar14);
      }
    }
    else if (uVar14 < 0xc) {
      pCStack_2c = (CDoor *)0x0;
      CStack_1f8.x = 0.0;
      CStack_1f8.y = 0.0;
      fStack_28 = 1e+30;
      CStack_1f8.z = 1.5;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,&CStack_1f8,&CStack_204);
      fStack_f0 = CStack_204.x;
      afStack_ec[(uint)bVar22 * -2] = *(float *)((int)&CStack_204 + (uint)bVar22 * -8 + 4);
      afStack_ec[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
           *(float *)((int)&CStack_204 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
      iStack_20 = 0;
      for (iStack_1c = 0; iStack_1c < g_CDemonSetPtr->actor_count; iStack_1c = iStack_1c + 1) {
        pCVar15 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_20),
                                      g_CDoorClassInfo.name_hash);
        if (pCVar15 != (CDoor *)0x0) {
          fStack_120 = (pCVar15->base).location.position.x - fStack_f0;
          afStack_11c[0] = (pCVar15->base).location.position.y - afStack_ec[0];
          afStack_11c[1] = (pCVar15->base).location.position.z - afStack_ec[1];
          afStack_98[2] = fStack_120;
          afStack_98[(uint)bVar22 * -2 + 3] = afStack_11c[(uint)bVar22 * -2];
          afStack_98[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
               afStack_11c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
          if (ABS(afStack_98[3]) <= (float)5) {
            afStack_98[3] = 0.0;
            fStack_24 = SQRT(afStack_98[4] * afStack_98[4] + afStack_98[2] * afStack_98[2]);
            if (fStack_24 < fStack_28) {
              pCStack_2c = pCVar15;
              fStack_28 = fStack_24;
            }
          }
        }
        iStack_20 = iStack_20 + 4;
      }
      if (pCStack_2c != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00460310(pCStack_2c,0.1);
      }
    }
    else if (uVar14 == 0xc) {
      pCVar20 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (pCVar20 != (CDemonActor *)0x0) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
        in_stack_fffffd68 = CONCAT44(1,pCVar20);
        core_inv_cpp_CInventory_addItem_FUN_004dadb0
                  (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories,pCVar20,1,0);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar14);
    }
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_0042b2a0((CCharacter *)this_ptr,delta_time);
  iStack_3c = 0;
  iStack_38 = 0;
  pCStack_18 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(pCStack_30,10);
  if (0.0 < (float)pCStack_18) {
    iStack_3c = 1;
    iStack_38 = 1;
  }
  if ((this_ptr->base).base.hit_points <= 0.0) {
    pCStack_18 = (CCharacter_full_vtable *)
                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                           (&(this_ptr->base).base.model.base,5);
    if (((float)pCStack_18 <= 0.0) &&
       (pCStack_18 = (CCharacter_full_vtable *)
                     core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                               (&(this_ptr->base).base.model.base,8), (float)pCStack_18 <= 0.0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,6,1);
    }
LAB_004d1ac4:
    iStack_38 = 1;
  }
  else {
    pCVar16 = (this_ptr->base).base.grabbed_by;
    if (pCVar16 == (CDemonActor *)0x0) {
      pCVar2 = &(this_ptr->base).base.model;
      pCStack_18 = (CCharacter_full_vtable *)
                   core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                             (&pCVar2->base,3);
      if (((0.0 < (float)pCStack_18) ||
          (pCStack_18 = (CCharacter_full_vtable *)
                        core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                                  (&pCVar2->base,5), 0.0 < (float)pCStack_18)) ||
         (pCStack_18 = (CCharacter_full_vtable *)
                       core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                                 (&pCVar2->base,8), 0.0 < (float)pCStack_18)) goto LAB_004d1ac4;
      iVar13 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                         ((CCharacter *)this_ptr,delta_time);
      pCVar11 = g_CConsolePtr;
      if (iVar13 == 0) {
        switch(this_ptr->hostage_state) {
        case 0:
          iVar13 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004d2c50(this_ptr,delta_time);
          if (iVar13 == 0) {
            pCVar7 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
            fStack_108 = (pCVar7->base).base.location.position.x -
                         (this_ptr->base).base.base.location.position.x;
            afStack_104[0] =
                 (pCVar7->base).base.location.position.y -
                 (this_ptr->base).base.base.location.position.y;
            afStack_104[1] =
                 (pCVar7->base).base.location.position.z -
                 (this_ptr->base).base.base.location.position.z;
            fStack_150 = fStack_108;
            afStack_1ac[(uint)bVar22 * -2 + 0x18] = afStack_104[(uint)bVar22 * -2];
            afStack_1ac[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x19] =
                 afStack_104[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
            afStack_1ac[2] = fStack_150;
            afStack_1ac[(uint)bVar22 * -2 + 3] = afStack_1ac[(uint)bVar22 * -2 + 0x18];
            afStack_1ac[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
                 afStack_1ac[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x19];
            afStack_1d0[2] = afStack_1ac[2];
            afStack_1d0[(uint)bVar22 * -2 + 3] = afStack_1ac[(uint)bVar22 * -2 + 3];
            afStack_1d0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
                 afStack_1ac[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
            if (((0.0 < this_ptr->rescue_distance) &&
                (fStack_40 = fStack_1c0 * fStack_1c0 +
                             afStack_1d0[2] * afStack_1d0[2] + afStack_1d0[3] * afStack_1d0[3],
                this_ptr->rescue_distance <= SQRT(fStack_40))) ||
               (iVar13 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                   (g_CEventListPtr,this_ptr->rescue_condition),
               pCVar11 = g_CConsolePtr, iVar13 == 0)) goto LAB_004d20aa;
            this_ptr->hostage_state = 1;
            engine_console_cpp_CConsole_printf_FUN_00436710
                      (pCVar11,"%s rescued, entering follow mode\n");
            core_event_cpp_CEventList_executeCommands_FUN_004894f0
                      (g_CEventListPtr,this_ptr->hero_found_me_event);
          }
          break;
        case 1:
          pCVar18 = (CWayPoint *)this_ptr->goal_way_point;
          if ((pCVar18 != (CWayPoint *)0x0) &&
             (fVar3 = (this_ptr->base).base.base.location.position.x -
                      (pCVar18->base).base.location.position.x,
             fVar4 = (this_ptr->base).base.base.location.position.z -
                     (pCVar18->base).base.location.position.z,
             SQRT(fVar4 * fVar4 + fVar3 * fVar3) < (float)40)) {
            pCVar18 = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_005882d0
                                ((CWayPoint *)&(this_ptr->base).base.base.location,pCVar18,0);
            this_ptr->next_way_point = (CDemonActor *)pCVar18;
          }
          pCVar11 = g_CConsolePtr;
          if (this_ptr->next_way_point == (CDemonActor *)0x0) {
            iVar13 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004d2c50(this_ptr,delta_time);
            if (iVar13 == 0) {
              iVar13 = core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042abe0
                                 ((CCharacter *)this_ptr,delta_time);
              if (iVar13 == 0) {
                core_charactr_cpp_CCharacter_followActor_FUN_00428260
                          ((CCharacter *)this_ptr,
                           (CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4],5.0,10.0,
                           &this_ptr->follow_state);
              }
              else {
                this_ptr->follow_state = iVar13;
              }
              uVar14 = this_ptr->follow_state;
              pCVar2 = &(this_ptr->base).base.model;
              if (uVar14 < 2) {
                if (uVar14 != 1) goto LAB_004d20aa;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar2->base,1,1);
              }
              else if (uVar14 < 3) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar2->base,2,1);
              }
              else {
                if (uVar14 != 3) goto LAB_004d20aa;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar2->base,0,1);
                pCVar11 = g_CConsolePtr;
                this_ptr->hostage_state = 2;
                engine_console_cpp_CConsole_printf_FUN_00436710(pCVar11,"%s left behind!\n");
                core_event_cpp_CEventList_executeCommands_FUN_004894f0
                          (g_CEventListPtr,this_ptr->hero_left_me_event);
                (this_ptr->base).base.hero_proximity_timer = 0.0;
              }
            }
          }
          else {
            this_ptr->hostage_state = 3;
            engine_console_cpp_CConsole_printf_FUN_00436710
                      (pCVar11,"%s was led close enough, going home!\n");
            core_event_cpp_CEventList_executeCommands_FUN_004894f0
                      (g_CEventListPtr,this_ptr->going_to_sit_down_event);
            (this_ptr->base).base.hero_proximity_timer = 0.0;
          }
          break;
        case 2:
          iVar13 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004d2c50(this_ptr,delta_time);
          if (iVar13 == 0) {
            core_charactr_cpp_CCharacter_followActor_FUN_00428260
                      ((CCharacter *)this_ptr,
                       (CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4],4.0,10.0,
                       &this_ptr->follow_state);
            uVar14 = this_ptr->follow_state;
            if (uVar14 == 0) {
              iVar13 = 0;
            }
            else if (uVar14 < 2) {
              iVar13 = 1;
            }
            else {
              if (uVar14 != 2) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(this_ptr->base).base.model.base,0,1);
                break;
              }
              iVar13 = 2;
            }
            this_ptr->hostage_state = 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar2->base,iVar13,1);
            engine_console_cpp_CConsole_printf_FUN_00436710
                      (g_CConsolePtr,"%s was left behind, but now can follow again!\n");
            core_event_cpp_CEventList_executeCommands_FUN_004894f0
                      (g_CEventListPtr,this_ptr->hero_came_back_event);
          }
          break;
        case 3:
          if (this_ptr->next_way_point == (CDemonActor *)0x0) {
            this_ptr->hostage_state = 2;
            engine_console_cpp_CConsole_printf_FUN_00436710
                      (pCVar11,"%s doesn't know next waypoint going home.  Help me!\n");
          }
          else {
            core_charactr_cpp_CCharacter_followActor_FUN_00428260
                      ((CCharacter *)this_ptr,this_ptr->next_way_point,1.0,-1.0,
                       &this_ptr->follow_state);
            switch(this_ptr->follow_state) {
            case 0:
              engine_console_cpp_CConsole_printf_FUN_00436710
                        (g_CConsolePtr,"%s reached waypoint %s!\n");
              pCVar11 = g_CConsolePtr;
              if ((CWayPoint *)this_ptr->next_way_point == (CWayPoint *)this_ptr->goal_way_point) {
                this_ptr->hostage_state = 4;
                engine_console_cpp_CConsole_printf_FUN_00436710
                          (pCVar11,"%s rescued and taken home!\n");
                this_ptr->next_way_point = (CDemonActor *)0x0;
              }
              else {
                pCVar18 = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_005882d0
                                    ((CWayPoint *)&(this_ptr->base).base.base.location,
                                     (CWayPoint *)this_ptr->goal_way_point,0);
                this_ptr->next_way_point = (CDemonActor *)pCVar18;
              }
              break;
            case 1:
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar2->base,1,1);
              break;
            case 2:
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar2->base,2,1);
              break;
            case 3:
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar2->base,0,1);
              pCVar11 = g_CConsolePtr;
              this_ptr->hostage_state = 2;
              engine_console_cpp_CConsole_printf_FUN_00436710
                        (pCVar11,"%s got confused going home.  Help me!\n");
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar2->base,0,1);
              core_event_cpp_CEventList_executeCommands_FUN_004894f0
                        (g_CEventListPtr,this_ptr->sit_down_event);
              core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_00490f80
                        (g_CEventListPtr,this_ptr->rescue_event,1);
              this_ptr->hostage_state = 4;
              this_ptr->next_way_point = (CDemonActor *)0x0;
            }
          }
          break;
        case 4:
          iStack_3c = 1;
          if (this_ptr->sit_down_way_point != (CDemonActor *)0x0) {
            fVar3 = delta_time * (float)0.5;
            pCVar20 = SUB84(__BITCAST_UINT64((double)fVar3),0);
            if ((this_ptr->base).base.walk_step_speed < fVar3) {
              (this_ptr->base).base.walk_step_speed = fVar3;
            }
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                      ((CDemonActor *)this_ptr,&(this_ptr->sit_down_way_point->location).position,
                       &CStack_12c);
            pCVar24 = &(this_ptr->base).base.position_delta;
            fStack_180 = CStack_12c.x;
            afStack_1ac[(uint)bVar22 * -2 + 0xc] =
                 *(float *)((int)&CStack_12c + (uint)bVar22 * -8 + 4);
            afStack_1ac[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xd] =
                 *(float *)((int)&CStack_12c + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
            if (pCVar24 != (CVector3f *)(afStack_1ac + 0xb)) {
              pCVar24->x = fStack_180;
              (this_ptr->base).base.position_delta.y = fStack_17c;
              (this_ptr->base).base.position_delta.z = fStack_178;
            }
            pfVar21 = (float *)((int)this_ptr + (uint)bVar22 * -8 + 0x2580);
            fStack_21c = (this_ptr->base).base.position_delta.x;
            afStack_218[(uint)bVar22 * -2] = *pfVar21;
            afStack_218[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] = pfVar21[(uint)bVar22 * -2 + 1];
            fVar3 = SQRT(afStack_218[1] * afStack_218[1] + fStack_21c * fStack_21c);
            afStack_218[0] = 0.0;
            if ((this_ptr->base).base.walk_step_speed < fVar3) {
              fStack_48 = (this_ptr->base).base.walk_step_speed / fVar3;
              pCVar24 = &(this_ptr->base).base.position_delta;
              fVar4 = (this_ptr->base).base.position_delta.y;
              fVar5 = (this_ptr->base).base.position_delta.z;
              pCVar24->x = pCVar24->x * fStack_48;
              (this_ptr->base).base.position_delta.y = fVar4 * fStack_48;
              (this_ptr->base).base.position_delta.z = fVar5 * fStack_48;
            }
            fStack_44 = fVar3;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
                      (&(this_ptr->base).base.position_delta,&CStack_e4);
            fVar4 = (float)2;
            fStack_15c = CStack_e4.x;
            afStack_1ac[(uint)bVar22 * -2 + 0x15] =
                 *(float *)((int)&CStack_e4 + (uint)bVar22 * -8 + 4);
            afStack_1ac[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x16] =
                 *(float *)((int)&CStack_e4 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
            (this_ptr->base).base.turn_angle_accumulator = fStack_158;
            if (fVar3 * fVar4 < 1.0) {
              pCStack_18 = (CCharacter_full_vtable *)
                           core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                     ((this_ptr->sit_down_way_point->orient).vec.y -
                                      (this_ptr->base).base.base.orient.vec.y);
              pCStack_18 = (CCharacter_full_vtable *)
                           core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                     ((float)pCStack_18 -
                                      (this_ptr->base).base.turn_angle_accumulator);
              (this_ptr->base).base.turn_angle_accumulator =
                   (1.0 - fVar3 * fVar4) * (float)pCStack_18 +
                   (this_ptr->base).base.turn_angle_accumulator;
            }
            pCStack_18 = (CCharacter_full_vtable *)
                         core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                   ((this_ptr->base).base.turn_angle_accumulator);
            (this_ptr->base).base.turn_angle_accumulator = (float)pCStack_18;
            if ((fVar3 < (float)0.01) &&
               (ABS((this_ptr->base).base.turn_angle_accumulator) < (float)0.017453292519444399)) {
              if ((this_ptr->hostage_type == 0) || (this_ptr->hostage_type == 4)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(this_ptr->base).base.model.base,0,1);
                this_ptr->hostage_state = 5;
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(this_ptr->base).base.model.base,10,1);
              }
              core_event_cpp_CEventList_executeCommands_FUN_004894f0
                        (g_CEventListPtr,this_ptr->sit_down_event);
              core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_00490f80
                        (g_CEventListPtr,this_ptr->rescue_event,1);
              this_ptr->sit_down_way_point = (CDemonActor *)0x0;
            }
            fStack_4c = delta_time * 3.141593f;
            fStack_54 = -fStack_4c;
            if ((this_ptr->base).base.turn_angle_accumulator < fStack_54) {
              (this_ptr->base).base.turn_angle_accumulator = fStack_54;
            }
            if (fStack_4c < (this_ptr->base).base.turn_angle_accumulator) {
              (this_ptr->base).base.turn_angle_accumulator = fStack_4c;
            }
          }
        }
      }
      else {
        EVar6 = (this_ptr->base).base.walk_state;
        if (EVar6 < 2) {
          if (EVar6 == WALK_STATE_WALKING) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,1,1);
          }
          else {
LAB_004d20aa:
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,0,1);
          }
        }
        else if (EVar6 < WALK_STATE_NO_PATH) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,2,1);
        }
        else {
          if (EVar6 != WALK_STATE_NO_PATH) goto LAB_004d20aa;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0,1);
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
        }
      }
    }
    else {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                ((CDemonActor *)this_ptr,&(pCVar16->location).position,&CStack_1ec);
      CStack_c0.x = CStack_1ec.x;
      *(uint *)((int)&CStack_c0 + (uint)bVar22 * -8 + 4) =
           *(uint *)((int)&CStack_1ec + (uint)bVar22 * -8 + 4);
      *(uint *)((int)&CStack_c0 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
           *(uint *)((int)&CStack_1ec + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_c0,&CStack_1e0);
      fStack_9c = CStack_1e0.x;
      afStack_98[(uint)bVar22 * -2] = *(float *)((int)&CStack_1e0 + (uint)bVar22 * -8 + 4);
      afStack_98[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
           *(float *)((int)&CStack_1e0 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
      pCStack_18 = (CCharacter_full_vtable *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_98[0]);
      fStack_34 = (float)pCStack_18;
      if ((float)pCStack_18 < -1.570796f) {
        fStack_34 = (float)pCStack_18 + 3.141593f;
      }
      if (1.570796f < fStack_34) {
        fStack_34 = fStack_34 + -3.141593f;
      }
      fStack_50 = delta_time * 3.141593f;
      fStack_58 = -fStack_50;
      if (fStack_34 < fStack_58) {
        fStack_34 = fStack_58;
      }
      if (fStack_50 < fStack_34) {
        fStack_34 = fStack_50;
      }
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fStack_34;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
      pCStack_7c = (CCharacter *)(this_ptr->base).base.grabbed_by;
      pCStack_18 = (pCStack_7c->base).vtable._uc;
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                (&(this_ptr->base).base.model,0,&CStack_b4);
      pCVar12 = pCStack_18;
      pCVar17 = pCStack_7c;
      pCVar24 = &CStack_210;
      CStack_210.x = CStack_b4.x;
      *(uint *)((int)&CStack_210 + (uint)bVar22 * -8 + 4) =
           *(uint *)((int)&CStack_b4 + (uint)bVar22 * -8 + 4);
      pCVar25 = this_ptr;
      *(uint *)((int)&CStack_210 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
           *(uint *)((int)&CStack_b4 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
      iVar13 = (*(pCVar12->_uc).attractActorToward)(pCVar17,(CDemonActor *)pCVar25,pCVar24);
      if (iVar13 == 0) {
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004d1f68:
        pCVar20 = (CDemonActor *)&(this_ptr->base).base.model;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCVar20,0,1);
      }
      else if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004d1f68;
      pCStack_30 = (CMotionController *)0x1;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      pCStack_2c = (CDoor *)0x1;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
    }
  }
  if (((0.0 < (this_ptr->base).base.hit_points) && (this_ptr->hostage_type == 1)) &&
     (iVar13 = core_actor_cpp_randomChance_FUN_0040d060(delta_time * 0.2f), iVar13 != 0)
     ) {
    iVar13 = 0;
    bone_name = "Bip01 L Forearm";
    pCVar2 = &(this_ptr->base).base.model;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar2);
    iVar13 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,bone_name,iVar13);
    if (-1 < iVar13) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                (pCVar2,iVar13,&CStack_234);
      pCVar24 = &CStack_1bc;
      CStack_1bc.x = CStack_234.x;
      *(uint *)((int)&CStack_1bc + (uint)bVar22 * -8 + 4) =
           *(uint *)((int)&CStack_234 + (uint)bVar22 * -8 + 4);
      *(uint *)((int)&CStack_1bc + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
           *(uint *)((int)&CStack_234 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar24,&CStack_a8);
      CStack_114.x = CStack_a8.x;
      *(uint *)((int)&CStack_114 + (uint)bVar22 * -8 + 4) =
           *(uint *)((int)&CStack_a8 + (uint)bVar22 * -8 + 4);
      *(uint *)((int)&CStack_114 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
           *(uint *)((int)&CStack_a8 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
      CStack_144.x = 3.0;
      CStack_144.y = 0.0;
      CStack_144.z = 0.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
                ((CDemonActor *)this_ptr,&CStack_144,&CStack_228);
      blood_type = BLOOD_TYPE_RED;
      pCVar24 = &CStack_d8;
      pCVar23 = &CStack_114;
      CStack_d8.x = CStack_228.x;
      *(uint *)((int)&CStack_d8 + (uint)bVar22 * -8 + 4) =
           *(uint *)((int)&CStack_228 + (uint)bVar22 * -8 + 4);
      this_ptr_01 = g_CGorePtr;
      *(uint *)((int)&CStack_d8 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
           *(uint *)((int)&CStack_228 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730(this_ptr_01,pCVar23,pCVar24,blood_type);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  if (iStack_3c == 0) {
    pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                        (&(this_ptr->base).base.model.base);
    iVar13 = pSVar19->state_index;
    if ((((iVar13 == 8) || (iVar13 == 0)) || ((iVar13 == 0xd || (iVar13 == 10)))) &&
       ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      (this_ptr->base).base.walk_stuck_timer = 0.0;
      goto LAB_004d1c55;
    }
    core_charactr_cpp_CCharacter_applyGravity_FUN_00423a10((CCharacter *)this_ptr,delta_time);
    fStack_168 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_164 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_160 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_174 = fStack_168;
    afStack_1ac[(uint)bVar22 * -2 + 0xf] = afStack_1ac[(uint)bVar22 * -2 + 0x12];
    afStack_1ac[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x10] =
         afStack_1ac[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x13];
    pCVar24 = &(this_ptr->base).base.position_delta;
    fStack_cc = fStack_174 + pCVar24->x;
    afStack_c8[0] = fStack_170 + (this_ptr->base).base.position_delta.y;
    afStack_c8[1] = fStack_16c + (this_ptr->base).base.position_delta.z;
    fStack_18c = fStack_cc;
    afStack_1ac[(uint)bVar22 * -2 + 9] = afStack_c8[(uint)bVar22 * -2];
    afStack_1ac[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10] =
         afStack_c8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
    pCVar23 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_1b0 = fStack_18c + pCVar23->x;
    afStack_1ac[0] = fStack_188 + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_1ac[1] = fStack_184 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_fc.x = fStack_1b0;
    *(float *)((int)&CStack_fc + (uint)bVar22 * -8 + 4) = afStack_1ac[(uint)bVar22 * -2];
    *(float *)((int)&CStack_fc + ((uint)bVar22 * -2 + (uint)bVar22 * -2) * 4 + 8) =
         afStack_1ac[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar24->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar23->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    pCVar24 = &CStack_fc;
    pfVar21 = (float *)((int)this_ptr + (uint)bVar22 * -8 + 0x24);
    fStack_1d4 = (this_ptr->base).base.base.location.position.x;
    afStack_1d0[(uint)bVar22 * -2] = *pfVar21;
    pCVar25 = this_ptr;
    afStack_1d0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] = pfVar21[(uint)bVar22 * -2 + 1];
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00423a60((CCharacter *)pCVar25,pCVar24);
    (this_ptr->base).base.walk_stuck_timer = (this_ptr->base).base.walk_stuck_timer + delta_time;
    if ((delta_time * (float)0.59999999999999998 <=
         SQRT(CStack_fc.z * CStack_fc.z + CStack_fc.x * CStack_fc.x + CStack_fc.y * CStack_fc.y)) &&
       (dVar8 = (double)(this_ptr->base).base.base.location.position.x - (double)fStack_1d4,
       dVar9 = (double)(this_ptr->base).base.base.location.position.y - (double)afStack_1d0[0],
       dVar10 = (double)(this_ptr->base).base.base.location.position.z - (double)afStack_1d0[1],
       SQRT(dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8) <=
       (double)delta_time * 0.40000000000000002)) goto LAB_004d1c55;
  }
  else {
    core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
              ((CDemonActor *)this_ptr,&(this_ptr->base).base.position_delta,&CStack_138);
    pCVar1 = &(this_ptr->base).base.base.location;
    fStack_198 = CStack_138.x;
    afStack_1ac[(uint)bVar22 * -2 + 6] = *(float *)((int)&CStack_138 + (uint)bVar22 * -8 + 4);
    afStack_1ac[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
         *(float *)((int)&CStack_138 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
    fVar3 = (this_ptr->base).base.base.location.position.y;
    fVar4 = (this_ptr->base).base.base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_198;
    (this_ptr->base).base.base.location.position.y = fVar3 + fStack_194;
    (this_ptr->base).base.base.location.position.z = fVar4 + fStack_190;
  }
  (this_ptr->base).base.walk_stuck_timer = 0.0;
LAB_004d1c55:
  pCVar2 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar2);
  if (this_ptr->hostage_type == 1) {
    fStack_5c = 0.5;
    fStack_68 = 0.75;
    pCVar16 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        ((this_ptr->base).base.carry_hands[1].carry_actor,
                         g_CWeaponClassInfo.name_hash);
    if ((pCVar16 == (CDemonActor *)0x0) ||
       (pCStack_18 = (CCharacter_full_vtable *)
                     core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                               (&pCVar2->base,0x10), 0.0 < (float)pCStack_18)) {
      fVar3 = this_ptr->gun_blend_weight - delta_time / fStack_5c;
    }
    else {
      fVar3 = delta_time / fStack_5c + this_ptr->gun_blend_weight;
    }
    this_ptr->gun_blend_weight = fVar3;
    if (0.0 < this_ptr->gun_blend_weight) {
      if (1.0 < this_ptr->gun_blend_weight) {
        this_ptr->gun_blend_weight = 1.0;
      }
      pCVar2 = &(this_ptr->base).base.model;
      pCStack_6c = (CCharacter_full_vtable *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00503f50
                             (&pCVar2->base,g_HostageGunUpMotionIndex,
                              this_ptr->gun_raise_progress * (float)0.65000000000000002 +
                              (float)0.34999999999999998);
      pCStack_18 = pCStack_6c;
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
                (pCVar2,g_HostageGunUpMotionIndex,(float)pCStack_6c,this_ptr->gun_blend_weight,
                 this_ptr->bone_indices[0],core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
                (pCVar2,g_HostageGunUpMotionIndex,(float)pCStack_6c,this_ptr->gun_blend_weight,
                 this_ptr->bone_indices[1],core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
      if (((1.0 <= this_ptr->gun_blend_weight) && (0.0 < this_ptr->gun_raise_progress)) &&
         (fVar3 = delta_time / fStack_68 + this_ptr->gun_raise_progress,
         this_ptr->gun_raise_progress = fVar3, 1.0 < fVar3)) {
        this_ptr->gun_raise_progress = 1.0;
      }
    }
    else {
      this_ptr->gun_raise_progress = 0.0;
      this_ptr->gun_blend_weight = 0.0;
    }
  }
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429420
            ((CCharacter *)this_ptr,delta_time,iStack_38);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  if ((1.0 <= this_ptr->gun_raise_progress) &&
     (pCVar17 = (CCharacter *)
                core_actor_cpp_castToClassHash_FUN_0040c8f0
                          ((this_ptr->base).base.carry_hands[1].carry_actor,
                           g_CWeaponClassInfo.name_hash), pCVar17 != (CCharacter *)0x0)) {
    fVar3 = (pCVar17->model).bone_origins[0x4f].z;
    (pCVar17->model).bone_origins[0x4f].z = 8.40779e-45;
    (*(((pCVar17->base).vtable._uc)->_uc).isGrabbable)(pCVar17,pCVar20);
    (pCVar17->model).bone_origins[0x4f].z = fVar3;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,0xc,1);
    this_ptr->gun_blend_weight = 0.0;
    this_ptr->gun_raise_progress = 0.0;
  }
  if (((this_ptr->hostage_type == 1) &&
      (pCVar20 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           ((this_ptr->base).base.carry_hands[1].carry_actor,
                            g_CWeaponClassInfo.name_hash), pCVar20 != (CDemonActor *)0x0)) &&
     (iVar13 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                         (g_CEventListPtr,"deputeFireShotgun"), iVar13 != 0)) {
    this_ptr->gun_raise_progress = 0.01;
    return;
  }
  return;
}
