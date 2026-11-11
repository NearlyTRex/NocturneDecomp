// Name: core_hostage.cpp_CHostage_process_FUN_004d1660
// Address: 004d1660
// Address Range: [[004d1660, 004d2c42]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_process_FUN_004d1660(CHostage *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hostage_cpp_CHostage_process_FUN_004d1660(CHostage *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  EWalkState EVar7;
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
  float *pfVar17;
  byte bVar18;
  float afStackY_121c [987];
  CGore *this_ptr_01;
  CVector3f *pCVar19;
  CCharacter *pCVar20;
  char *bone_name;
  CVector3f *pCVar21;
  CHostage *pCVar22;
  EBloodType blood_type;
  float fStack_274;
  SDamageInfo SStack_270;
  uint uStack_234;
  float afStack_230 [5];
  float fStack_21c;
  uint uStack_218;
  float fStack_214;
  CVector3f CStack_210;
  float fStack_204;
  float afStack_1f8 [4];
  float afStack_1e8 [5];
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float afStack_1bc [3];
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
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
  uint uStack_15c;
  float fStack_158;
  float fStack_150;
  float afStack_144 [4];
  float afStack_134 [5];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  CVector3f CStack_114;
  float fStack_108;
  float afStack_104 [2];
  CVector3f CStack_fc;
  float fStack_f0;
  float afStack_ec [5];
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [5];
  uint uStack_b4;
  float fStack_a8;
  uint uStack_9c;
  uint uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
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
  
  bVar18 = 0;
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
  while (0.0 < fStack_274) {
    uVar14 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_30,&stack0xfffffd8c);
    if (uVar14 < 0xb) {
      if (uVar14 == 6) {
        pCVar16 = (this_ptr->base).base.grabbed_by;
        if (pCVar16 != (CDemonActor *)0x0) {
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"%s escaping from %s\n",this_ptr,pCVar16);
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_270);
          SStack_270.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
          SStack_270.attacker = (CDemonActor *)this_ptr;
          SStack_270.wielder = (CDemonActor *)this_ptr;
          pCVar20 = (CCharacter *)(this_ptr->base).base.grabbed_by;
          pCStack_18 = (CCharacter_full_vtable *)SStack_270.damage_amount;
          (*(((pCVar20->base).vtable._uc)->_uc).processDamage)(pCVar20,&SStack_270);
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar14);
      }
    }
    else if (uVar14 < 0xc) {
      pCStack_2c = (CDoor *)0x0;
      afStack_1f8[0] = 0.0;
      afStack_1f8[1] = 0.0;
      fStack_28 = 1e+30;
      afStack_1f8[2] = 1.5;
      core_actor_cpp_FUN_00408d70(this_ptr,afStack_230 + 0xe);
      fStack_f0 = fStack_204;
      afStack_ec[(uint)bVar18 * -2] = afStack_230[(uint)bVar18 * -2 + 0xc];
      afStack_ec[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
           afStack_230[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
      iStack_20 = 0;
      for (iStack_1c = 0; iStack_1c < g_CDemonSetPtr->actor_count; iStack_1c = iStack_1c + 1) {
        pCVar15 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (*(uint *)((int)g_CDemonSetPtr->actors + iStack_20),
                                      g_CDoorClassInfo.name_hash);
        if (pCVar15 != (CDoor *)0x0) {
          fStack_120 = (pCVar15->base).location.position.x - fStack_f0;
          fStack_11c = (pCVar15->base).location.position.y - afStack_ec[0];
          fStack_118 = (pCVar15->base).location.position.z - afStack_ec[1];
          fStack_90 = fStack_120;
          afStack_c8[(uint)bVar18 * -2 + 0xf] = afStack_134[(uint)bVar18 * -2 + 6];
          afStack_c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10] =
               afStack_134[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7];
          if (ABS(fStack_8c) <= (float)_DAT_005da39e) {
            fStack_8c = 0.0;
            fStack_24 = SQRT(fStack_88 * fStack_88 + fStack_90 * fStack_90);
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
      pCVar16 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (pCVar16 != (CDemonActor *)0x0) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
        core_inv_cpp_FUN_004dadb0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,pCVar16,1,0);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar14);
    }
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time);
  iStack_3c = 0;
  iStack_38 = 0;
  pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0(pCStack_30,10);
  if (0.0 < (float)pCStack_18) {
    iStack_3c = 1;
    iStack_38 = 1;
  }
  if ((this_ptr->base).base.hit_points <= 0.0) {
    pCStack_18 = (CCharacter_full_vtable *)
                 core_motion_cpp_FUN_005038a0(&(this_ptr->base).base.model,5);
    if (((float)pCStack_18 <= 0.0) &&
       (pCStack_18 = (CCharacter_full_vtable *)
                     core_motion_cpp_FUN_005038a0(&(this_ptr->base).base.model,8),
       (float)pCStack_18 <= 0.0)) {
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
      pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0(pCVar2,3);
      if (((0.0 < (float)pCStack_18) ||
          (pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0(pCVar2,5),
          0.0 < (float)pCStack_18)) ||
         (pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0(pCVar2,8),
         0.0 < (float)pCStack_18)) goto LAB_004d1ac4;
      iVar13 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                         ((CCharacter *)this_ptr,delta_time);
      pCVar11 = g_CConsolePtr;
      if (iVar13 == 0) {
        switch(this_ptr->hostage_state) {
        case 0:
          iVar13 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004d2c50(this_ptr,delta_time);
          if (iVar13 == 0) {
            iVar13 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
            fStack_108 = *(float *)(iVar13 + 0x20) - (this_ptr->base).base.base.location.position.x;
            afStack_104[0] =
                 *(float *)(iVar13 + 0x24) - (this_ptr->base).base.base.location.position.y;
            afStack_104[1] =
                 *(float *)(iVar13 + 0x28) - (this_ptr->base).base.base.location.position.z;
            fStack_150 = fStack_108;
            afStack_1e8[(uint)bVar18 * -2 + 0x27] = afStack_104[(uint)bVar18 * -2];
            afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x28] =
                 afStack_104[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
            fStack_1a4 = fStack_150;
            afStack_1e8[(uint)bVar18 * -2 + 0x12] = afStack_1e8[(uint)bVar18 * -2 + 0x27];
            afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x13] =
                 afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x28];
            fStack_1c8 = fStack_1a4;
            afStack_1e8[(uint)bVar18 * -2 + 9] = afStack_1e8[(uint)bVar18 * -2 + 0x12];
            afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10] =
                 afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x13];
            if (((0.0 < this_ptr->rescue_distance) &&
                (fStack_40 = fStack_1c0 * fStack_1c0 +
                             fStack_1c8 * fStack_1c8 + fStack_1c4 * fStack_1c4,
                this_ptr->rescue_distance <= SQRT(fStack_40))) ||
               (iVar13 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                   (0x01C38BC0,this_ptr->rescue_condition),
               pCVar11 = g_CConsolePtr, iVar13 == 0)) goto LAB_004d20aa;
            this_ptr->hostage_state = 1;
            engine_console_cpp_FUN_00436710(pCVar11,"%s rescued, entering follow mode\n",this_ptr);
            core_event_cpp_CEventList_executeCommands_FUN_004894f0
                      (0x01C38BC0,this_ptr->hero_found_me_event);
          }
          break;
        case 1:
          pCVar16 = this_ptr->goal_way_point;
          if ((pCVar16 != (CDemonActor *)0x0) &&
             (fVar3 = (this_ptr->base).base.base.location.position.x -
                      (pCVar16->location).position.x,
             fVar4 = (this_ptr->base).base.base.location.position.z - (pCVar16->location).position.z
             , SQRT(fVar4 * fVar4 + fVar3 * fVar3) < (float)_DAT_005da366)) {
            pCVar16 = (CDemonActor *)
                      core_waypoint_cpp_FUN_005882d0(&(this_ptr->base).base.base.location,pCVar16,0)
            ;
            this_ptr->next_way_point = pCVar16;
          }
          pCVar11 = g_CConsolePtr;
          if (this_ptr->next_way_point == (CDemonActor *)0x0) {
            iVar13 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004d2c50(this_ptr,delta_time);
            if (iVar13 == 0) {
              iVar13 = core_charactr_cpp_FUN_0042abe0(this_ptr,delta_time);
              if (iVar13 == 0) {
                core_charactr_cpp_FUN_00428260
                          (this_ptr,*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),0x40a00000,
                           0x41200000,&this_ptr->follow_state);
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
                engine_console_cpp_FUN_00436710(pCVar11,"%s left behind!\n",this_ptr);
                core_event_cpp_CEventList_executeCommands_FUN_004894f0
                          (0x01C38BC0,this_ptr->hero_left_me_event);
                (this_ptr->base).base.hero_proximity_timer = 0.0;
              }
            }
          }
          else {
            this_ptr->hostage_state = 3;
            engine_console_cpp_FUN_00436710(pCVar11,"%s was led close enough, going home!\n",this_ptr);
            core_event_cpp_CEventList_executeCommands_FUN_004894f0
                      (0x01C38BC0,this_ptr->going_to_sit_down_event);
            (this_ptr->base).base.hero_proximity_timer = 0.0;
          }
          break;
        case 2:
          iVar13 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004d2c50(this_ptr,delta_time);
          if (iVar13 == 0) {
            core_charactr_cpp_FUN_00428260
                      (this_ptr,*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),0x40800000,0x41200000
                       ,&this_ptr->follow_state);
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
            engine_console_cpp_FUN_00436710
                      (g_CConsolePtr,"%s was left behind, but now can follow again!\n",this_ptr);
            core_event_cpp_CEventList_executeCommands_FUN_004894f0
                      (0x01C38BC0,this_ptr->hero_came_back_event);
          }
          break;
        case 3:
          if (this_ptr->next_way_point == (CDemonActor *)0x0) {
            this_ptr->hostage_state = 2;
            engine_console_cpp_FUN_00436710(pCVar11,"%s doesn't know next waypoint going home.  Help me!\n",this_ptr);
          }
          else {
            core_charactr_cpp_FUN_00428260
                      (this_ptr,this_ptr->next_way_point,0x3f800000,0xbf800000,
                       &this_ptr->follow_state);
            switch(this_ptr->follow_state) {
            case 0:
              engine_console_cpp_FUN_00436710
                        (g_CConsolePtr,"%s reached waypoint %s!\n",this_ptr,
                         this_ptr->next_way_point);
              pCVar11 = g_CConsolePtr;
              if (this_ptr->next_way_point == this_ptr->goal_way_point) {
                this_ptr->hostage_state = 4;
                engine_console_cpp_FUN_00436710
                          (pCVar11,"%s rescued and taken home!\n",this_ptr);
                this_ptr->next_way_point = (CDemonActor *)0x0;
              }
              else {
                pCVar16 = (CDemonActor *)
                          core_waypoint_cpp_FUN_005882d0
                                    (&(this_ptr->base).base.base.location,this_ptr->goal_way_point,0
                                    );
                this_ptr->next_way_point = pCVar16;
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
              engine_console_cpp_FUN_00436710(pCVar11,"%s got confused going home.  Help me!\n",this_ptr);
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar2->base,0,1);
              core_event_cpp_CEventList_executeCommands_FUN_004894f0
                        (0x01C38BC0,this_ptr->sit_down_event);
              core_event_cpp_FUN_00490f80(0x01C38BC0,this_ptr->rescue_event,1);
              this_ptr->hostage_state = 4;
              this_ptr->next_way_point = (CDemonActor *)0x0;
            }
          }
          break;
        case 4:
          iStack_3c = 1;
          if (this_ptr->sit_down_way_point != (CDemonActor *)0x0) {
            if ((this_ptr->base).base.walk_step_speed < delta_time * (float)_DAT_005da33e) {
              (this_ptr->base).base.walk_step_speed = delta_time * (float)_DAT_005da33e;
            }
            core_actor_cpp_FUN_00408de0(this_ptr,&this_ptr->sit_down_way_point->location);
            pCVar21 = &(this_ptr->base).base.position_delta;
            fStack_180 = afStack_134[2];
            afStack_1e8[(uint)bVar18 * -2 + 0x1b] = afStack_134[(uint)bVar18 * -2 + 3];
            afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1c] =
                 afStack_134[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
            if (pCVar21 != (CVector3f *)(afStack_1e8 + 0x1a)) {
              pCVar21->x = fStack_180;
              (this_ptr->base).base.position_delta.y = fStack_17c;
              (this_ptr->base).base.position_delta.z = fStack_178;
            }
            pfVar17 = (float *)((int)this_ptr + (uint)bVar18 * -8 + 0x2580);
            fStack_21c = (this_ptr->base).base.position_delta.x;
            afStack_230[(uint)bVar18 * -2 + 6] = *pfVar17;
            afStack_230[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] = pfVar17[(uint)bVar18 * -2 + 1];
            fVar3 = SQRT(fStack_214 * fStack_214 + fStack_21c * fStack_21c);
            uStack_218 = 0;
            if ((this_ptr->base).base.walk_step_speed < fVar3) {
              fStack_48 = (this_ptr->base).base.walk_step_speed / fVar3;
              pCVar21 = &(this_ptr->base).base.position_delta;
              fVar4 = (this_ptr->base).base.position_delta.y;
              fVar5 = (this_ptr->base).base.position_delta.z;
              pCVar21->x = pCVar21->x * fStack_48;
              (this_ptr->base).base.position_delta.y = fVar4 * fStack_48;
              (this_ptr->base).base.position_delta.z = fVar5 * fStack_48;
            }
            fStack_44 = fVar3;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
                      (&(this_ptr->base).base.position_delta);
            fVar4 = (float)_DAT_005da346;
            uStack_15c = afStack_ec[2];
            afStack_1e8[(uint)bVar18 * -2 + 0x24] = afStack_ec[(uint)bVar18 * -2 + 3];
            afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x25] =
                 afStack_ec[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
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
            if ((fVar3 < (float)_DAT_005da34e) &&
               (ABS((this_ptr->base).base.turn_angle_accumulator) < (float)_DAT_005da356)) {
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
                        (0x01C38BC0,this_ptr->sit_down_event);
              core_event_cpp_FUN_00490f80(0x01C38BC0,this_ptr->rescue_event,1);
              this_ptr->sit_down_way_point = (CDemonActor *)0x0;
            }
            fStack_4c = delta_time * _DAT_005da35e;
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
        EVar7 = (this_ptr->base).base.walk_state;
        if (EVar7 < 2) {
          if (EVar7 == WALK_STATE_WALKING) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,1,1);
          }
          else {
LAB_004d20aa:
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,0,1);
          }
        }
        else if (EVar7 < WALK_STATE_NO_PATH) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,2,1);
        }
        else {
          if (EVar7 != WALK_STATE_NO_PATH) goto LAB_004d20aa;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0,1);
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
        }
      }
    }
    else {
      core_actor_cpp_FUN_00408de0(this_ptr,&pCVar16->location);
      afStack_c8[2] = afStack_1f8[3];
      afStack_c8[(uint)bVar18 * -2 + 3] = afStack_1e8[(uint)bVar18 * -2];
      afStack_c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
           afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_c8 + 2);
      uStack_9c = afStack_1e8[2];
      afStack_c8[(uint)bVar18 * -2 + 0xc] = afStack_1e8[(uint)bVar18 * -2 + 3];
      afStack_c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd] =
           afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
      pCStack_18 = (CCharacter_full_vtable *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(uStack_98);
      fStack_34 = (float)pCStack_18;
      if ((float)pCStack_18 < _DAT_005da36e) {
        fStack_34 = (float)pCStack_18 + _DAT_005da35e;
      }
      if (_DAT_005da372 < fStack_34) {
        fStack_34 = fStack_34 + _DAT_005da376;
      }
      fStack_50 = delta_time * _DAT_005da35e;
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
      core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,0);
      pCVar12 = pCStack_18;
      pCVar20 = pCStack_7c;
      pCVar21 = (CVector3f *)(afStack_230 + 8);
      CStack_210.x = (float)uStack_b4;
      afStack_230[(uint)bVar18 * -2 + 9] = afStack_c8[(uint)bVar18 * -2 + 6];
      pCVar22 = this_ptr;
      afStack_230[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10] =
           afStack_c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7];
      iVar13 = (*(pCVar12->_uc).attractActorToward)(pCVar20,(CDemonActor *)pCVar22,pCVar21);
      if (iVar13 == 0) {
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004d1f68:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,0,1);
      }
      else if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004d1f68;
      iStack_3c = 1;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      iStack_38 = 1;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
    }
  }
  if (((0.0 < (this_ptr->base).base.hit_points) && (this_ptr->hostage_type == 1)) &&
     (iVar13 = core_actor_cpp_randomChance_FUN_0040d060(delta_time * _DAT_005da37a), iVar13 != 0)) {
    iVar13 = 0;
    bone_name = "Bip01 L Forearm";
    pCVar2 = &(this_ptr->base).base.model;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar2);
    iVar13 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,bone_name,iVar13);
    if (-1 < iVar13) {
      core_skeleton_cpp_FUN_005469a0(pCVar2,iVar13);
      pfVar17 = afStack_1e8 + 0xb;
      afStack_1bc[0] = (float)uStack_234;
      afStack_1e8[(uint)bVar18 * -2 + 0xc] = afStack_230[(uint)bVar18 * -2];
      afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd] =
           afStack_230[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar17);
      CStack_114.x = fStack_a8;
      *(float *)((int)&CStack_114 + (uint)bVar18 * -8 + 4) = afStack_c8[(uint)bVar18 * -2 + 9];
      *(float *)((int)&CStack_114 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
           afStack_c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10];
      afStack_144[0] = 3.0;
      afStack_144[1] = 0.0;
      afStack_144[2] = 0.0;
      core_actor_cpp_FUN_00408cf0(this_ptr,afStack_1e8 + 0x29);
      blood_type = BLOOD_TYPE_RED;
      pCVar21 = &CStack_d8;
      pCVar19 = &CStack_114;
      CStack_d8.x = afStack_230[2];
      *(float *)((int)&CStack_d8 + (uint)bVar18 * -8 + 4) = afStack_230[(uint)bVar18 * -2 + 3];
      this_ptr_01 = g_CGorePtr;
      *(float *)((int)&CStack_d8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
           afStack_230[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730(this_ptr_01,pCVar19,pCVar21,blood_type);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  if (iStack_3c == 0) {
    iVar13 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
    iVar13 = *(int *)(iVar13 + 0x24);
    if ((((iVar13 == 8) || (iVar13 == 0)) || ((iVar13 == 0xd || (iVar13 == 10)))) &&
       ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      (this_ptr->base).base.walk_stuck_timer = 0.0;
      goto LAB_004d1c55;
    }
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_168 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_164 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_160 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_174 = fStack_168;
    afStack_1e8[(uint)bVar18 * -2 + 0x1e] = afStack_1e8[(uint)bVar18 * -2 + 0x21];
    afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1f] =
         afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x22];
    pCVar21 = &(this_ptr->base).base.position_delta;
    fStack_cc = fStack_174 + pCVar21->x;
    afStack_c8[0] = fStack_170 + (this_ptr->base).base.position_delta.y;
    afStack_c8[1] = fStack_16c + (this_ptr->base).base.position_delta.z;
    fStack_18c = fStack_cc;
    afStack_1e8[(uint)bVar18 * -2 + 0x18] = afStack_c8[(uint)bVar18 * -2];
    afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x19] =
         afStack_c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
    pCVar19 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_1b0 = fStack_18c + pCVar19->x;
    fStack_1ac = fStack_188 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_1a8 = fStack_184 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_fc.x = fStack_1b0;
    *(float *)((int)&CStack_fc + (uint)bVar18 * -8 + 4) = afStack_1e8[(uint)bVar18 * -2 + 0xf];
    *(float *)((int)&CStack_fc + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
         afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar21->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar19->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    pCVar21 = &CStack_fc;
    pfVar17 = (float *)((int)this_ptr + (uint)bVar18 * -8 + 0x24);
    fStack_1d4 = (this_ptr->base).base.base.location.position.x;
    afStack_1e8[(uint)bVar18 * -2 + 6] = *pfVar17;
    pCVar22 = this_ptr;
    afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] = pfVar17[(uint)bVar18 * -2 + 1];
    core_charactr_cpp_FUN_00423a60((CCharacter *)pCVar22,pCVar21);
    (this_ptr->base).base.walk_stuck_timer = (this_ptr->base).base.walk_stuck_timer + delta_time;
    if ((delta_time * (float)_DAT_005da37e <=
         SQRT(CStack_fc.z * CStack_fc.z + CStack_fc.x * CStack_fc.x + CStack_fc.y * CStack_fc.y)) &&
       (dVar8 = (double)(this_ptr->base).base.base.location.position.x - (double)fStack_1d4,
       dVar9 = (double)(this_ptr->base).base.base.location.position.y - (double)fStack_1d0,
       dVar10 = (double)(this_ptr->base).base.base.location.position.z - (double)fStack_1cc,
       SQRT(dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8) <= (double)delta_time * _DAT_005da386))
    goto LAB_004d1c55;
  }
  else {
    core_actor_cpp_FUN_00408cf0(this_ptr,&(this_ptr->base).base.position_delta);
    pCVar1 = &(this_ptr->base).base.base.location;
    fStack_198 = afStack_144[3];
    afStack_1e8[(uint)bVar18 * -2 + 0x15] = afStack_134[(uint)bVar18 * -2];
    afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x16] =
         afStack_134[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
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
    iVar13 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                       ((this_ptr->base).base.carry_hands[1].carry_actor,
                        g_CWeaponClassInfo.name_hash);
    if ((iVar13 == 0) ||
       (pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0(pCVar2,0x10),
       0.0 < (float)pCStack_18)) {
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
                   core_motion_cpp_FUN_00503f50
                             (pCVar2,_DAT_01cedfcc,
                              this_ptr->gun_raise_progress * (float)_DAT_005da38e +
                              (float)_DAT_005da396);
      pCStack_18 = pCStack_6c;
      core_skeleton_cpp_FUN_00545a60
                (pCVar2,_DAT_01cedfcc,pCStack_6c,this_ptr->gun_blend_weight,
                 this_ptr->bone_indices[0],core_skeleton_cpp_FUN_00544cc0);
      core_skeleton_cpp_FUN_00545a60
                (pCVar2,_DAT_01cedfcc,pCStack_6c,this_ptr->gun_blend_weight,
                 this_ptr->bone_indices[1],core_skeleton_cpp_FUN_00544cc0);
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
     (iVar13 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         ((this_ptr->base).base.carry_hands[1].carry_actor,
                          g_CWeaponClassInfo.name_hash), iVar13 != 0)) {
    uVar6 = *(uint *)(iVar13 + 0x6c8);
    *(uint *)(iVar13 + 0x6c8) = 6;
    (**(code **)(*(int *)(iVar13 + 0x2b0) + 0xec))(iVar13);
    *(uint *)(iVar13 + 0x6c8) = uVar6;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,0xc,1);
    this_ptr->gun_blend_weight = 0.0;
    this_ptr->gun_raise_progress = 0.0;
  }
  if (((this_ptr->hostage_type == 1) &&
      (iVar13 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          ((this_ptr->base).base.carry_hands[1].carry_actor,
                           g_CWeaponClassInfo.name_hash), iVar13 != 0)) &&
     (iVar13 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                         (0x01C38BC0,"deputeFireShotgun"), iVar13 != 0)) {
    this_ptr->gun_raise_progress = 0.01;
    return;
  }
  return;
}
