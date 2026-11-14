// Name: core_hostage.cpp_CHostage_process_FUN_004ed890
// Address: 004ed890
// Address Range: [[004ed890, 004eee70]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_process_FUN_004ed890(CHostage *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hostage_cpp_CHostage_process_FUN_004ed890(CHostage *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  EWalkState EVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  CConsole *pCVar10;
  CCharacter_full_vtable *pCVar11;
  int iVar12;
  uint uVar13;
  CDoor *pCVar14;
  CInventory *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDemonActor *pCVar15;
  CCharacter *pCVar16;
  SMotion *pSVar17;
  CDemonActor *pCVar18;
  float *pfVar19;
  byte bVar20;
  float afStackY_121c [987];
  CGore *this_ptr_02;
  CVector3f *pCVar21;
  char *bone_name;
  CVector3f *pCVar22;
  CHostage *pCVar23;
  EBloodType blood_type;
  ulonglong in_stack_fffffd68;
  float fStack_274;
  SDamageInfo SStack_270;
  CVector3f CStack_234;
  float fStack_228;
  float afStack_224 [5];
  CVector3f CStack_210;
  float fStack_204;
  float afStack_200 [6];
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
  CVector3f CStack_b4;
  float fStack_a8;
  float afStack_a4 [5];
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
  uint uStack_38;
  float fStack_34;
  CMotionController *pCStack_30;
  CDoor *pCStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  CCharacter_full_vtable *pCStack_18;
  
  bVar20 = 0;
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
  iVar12 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar12 == 0) {
    return;
  }
  fStack_274 = delta_time;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  pCStack_30 = &(this_ptr->base).base.model.base;
  while (pCVar18 = (CDemonActor *)in_stack_fffffd68, 0.0 < fStack_274) {
    uVar13 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_30,&stack0xfffffd8c);
    if (uVar13 < 0xb) {
      if (uVar13 == 6) {
        if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
          engine_console_cpp_CConsole_printf_FUN_00445430
                    (g_CConsolePtr,"%s escaping from %s\n");
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_270);
          SStack_270.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,15.0);
          SStack_270.attacker = (CDemonActor *)this_ptr;
          SStack_270.wielder = (CDemonActor *)this_ptr;
          pCVar16 = (CCharacter *)(this_ptr->base).base.grabbed_by;
          pCStack_18 = (CCharacter_full_vtable *)SStack_270.damage_amount;
          (*(((pCVar16->base).vtable._uc)->_uc).processDamage)(pCVar16,&SStack_270);
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar13);
      }
    }
    else if (uVar13 < 0xc) {
      pCStack_2c = (CDoor *)0x0;
      afStack_200[2] = 0.0;
      afStack_200[3] = 0.0;
      fStack_28 = 1e+30;
      afStack_200[4] = 1.5;
      core_actor_cpp_FUN_00408b40(this_ptr,afStack_200 + 2);
      fStack_f0 = fStack_204;
      afStack_ec[(uint)bVar20 * -2] = afStack_200[(uint)bVar20 * -2];
      afStack_ec[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
           afStack_200[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
      iStack_20 = 0;
      for (iStack_1c = 0; iStack_1c < g_CDemonSetPtr->actor_count; iStack_1c = iStack_1c + 1) {
        pCVar14 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c600
                                     (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_20),
                                      g_CDoorClassInfo.name_hash);
        if (pCVar14 != (CDoor *)0x0) {
          fStack_120 = (pCVar14->base).location.position.x - fStack_f0;
          fStack_11c = (pCVar14->base).location.position.y - afStack_ec[0];
          fStack_118 = (pCVar14->base).location.position.z - afStack_ec[1];
          fStack_90 = fStack_120;
          afStack_a4[(uint)bVar20 * -2 + 6] = afStack_134[(uint)bVar20 * -2 + 6];
          afStack_a4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7] =
               afStack_134[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
          if (ABS(fStack_8c) <= (float)_DAT_005e4eff) {
            fStack_8c = 0.0;
            fStack_24 = SQRT(fStack_88 * fStack_88 + fStack_90 * fStack_90);
            if (fStack_24 < fStack_28) {
              pCStack_2c = pCVar14;
              fStack_28 = fStack_24;
            }
          }
        }
        iStack_20 = iStack_20 + 4;
      }
      if (pCStack_2c != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00478820(pCStack_2c,0.1);
      }
    }
    else if (uVar13 == 0xc) {
      pCVar18 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (pCVar18 != (CDemonActor *)0x0) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
        this_ptr_00 = (CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8);
        in_stack_fffffd68 = CONCAT44(pCVar18,this_ptr_00);
        core_inv_cpp_FUN_004f7690(this_ptr_00,pCVar18,1);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar13);
    }
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
  iStack_3c = 0;
  uStack_38 = 0;
  pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(pCStack_30,10);
  if (0.0 < (float)pCStack_18) {
    iStack_3c = 1;
    uStack_38 = 1;
  }
  if ((this_ptr->base).base.hit_points <= 0.0) {
    pCStack_18 = (CCharacter_full_vtable *)
                 core_motion_cpp_FUN_00524a40(&(this_ptr->base).base.model,5);
    if (((float)pCStack_18 <= 0.0) &&
       (pCStack_18 = (CCharacter_full_vtable *)
                     core_motion_cpp_FUN_00524a40(&(this_ptr->base).base.model,8),
       (float)pCStack_18 <= 0.0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,6,1);
    }
LAB_004edcf2:
    uStack_38 = 1;
  }
  else {
    pCVar15 = (this_ptr->base).base.grabbed_by;
    if (pCVar15 == (CDemonActor *)0x0) {
      pCVar2 = &(this_ptr->base).base.model;
      pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(pCVar2,3);
      if (((0.0 < (float)pCStack_18) ||
          (pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(pCVar2,5),
          0.0 < (float)pCStack_18)) ||
         (pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(pCVar2,8),
         0.0 < (float)pCStack_18)) goto LAB_004edcf2;
      iVar12 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                         ((CCharacter *)this_ptr,delta_time);
      pCVar10 = g_CConsolePtr;
      if (iVar12 == 0) {
        switch(this_ptr->hostage_state) {
        case 0:
          iVar12 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004eee80(this_ptr,delta_time);
          if (iVar12 == 0) {
            iVar12 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
            fStack_108 = *(float *)(iVar12 + 0x20) - (this_ptr->base).base.base.location.position.x;
            afStack_104[0] =
                 *(float *)(iVar12 + 0x24) - (this_ptr->base).base.base.location.position.y;
            afStack_104[1] =
                 *(float *)(iVar12 + 0x28) - (this_ptr->base).base.base.location.position.z;
            fStack_150 = fStack_108;
            afStack_1e8[(uint)bVar20 * -2 + 0x27] = afStack_104[(uint)bVar20 * -2];
            afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x28] =
                 afStack_104[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            fStack_1a4 = fStack_150;
            afStack_1e8[(uint)bVar20 * -2 + 0x12] = afStack_1e8[(uint)bVar20 * -2 + 0x27];
            afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x13] =
                 afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x28];
            fStack_1c8 = fStack_1a4;
            afStack_1e8[(uint)bVar20 * -2 + 9] = afStack_1e8[(uint)bVar20 * -2 + 0x12];
            afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 10] =
                 afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x13];
            if (((0.0 < this_ptr->rescue_distance) &&
                (fStack_40 = fStack_1c0 * fStack_1c0 +
                             fStack_1c8 * fStack_1c8 + fStack_1c4 * fStack_1c4,
                this_ptr->rescue_distance <= SQRT(fStack_40))) ||
               (iVar12 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                   (0x01C51D80,this_ptr->rescue_condition),
               pCVar10 = g_CConsolePtr, iVar12 == 0)) goto LAB_004ee2d8;
            this_ptr->hostage_state = 1;
            engine_console_cpp_CConsole_printf_FUN_00445430
                      (pCVar10,"%s rescued, entering follow mode\n");
            core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                      (0x01C51D80,this_ptr->hero_found_me_event);
          }
          break;
        case 1:
          pCVar15 = this_ptr->goal_way_point;
          if ((pCVar15 != (CDemonActor *)0x0) &&
             (fVar3 = (this_ptr->base).base.base.location.position.x -
                      (pCVar15->location).position.x,
             fVar4 = (this_ptr->base).base.base.location.position.z - (pCVar15->location).position.z
             , SQRT(fVar4 * fVar4 + fVar3 * fVar3) < (float)_DAT_005e4ec7)) {
            pCVar15 = (CDemonActor *)
                      core_waypoint_cpp_FUN_005abb80(&(this_ptr->base).base.base.location,pCVar15,0)
            ;
            this_ptr->next_way_point = pCVar15;
          }
          pCVar10 = g_CConsolePtr;
          if (this_ptr->next_way_point == (CDemonActor *)0x0) {
            iVar12 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004eee80(this_ptr,delta_time);
            if (iVar12 == 0) {
              iVar12 = core_charactr_cpp_FUN_00434c60(this_ptr,delta_time);
              if (iVar12 == 0) {
                core_charactr_cpp_FUN_00431cc0
                          (this_ptr,*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),0x40a00000,
                           0x41200000,&this_ptr->follow_state);
              }
              else {
                this_ptr->follow_state = iVar12;
              }
              uVar13 = this_ptr->follow_state;
              pCVar2 = &(this_ptr->base).base.model;
              if (uVar13 < 2) {
                if (uVar13 != 1) goto LAB_004ee2d8;
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,1,1);
              }
              else if (uVar13 < 3) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,2,1);
              }
              else {
                if (uVar13 != 3) goto LAB_004ee2d8;
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0,1);
                pCVar10 = g_CConsolePtr;
                this_ptr->hostage_state = 2;
                engine_console_cpp_CConsole_printf_FUN_00445430(pCVar10,"%s left behind!\n");
                core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                          (0x01C51D80,this_ptr->hero_left_me_event);
                (this_ptr->base).base.hero_proximity_timer = 0.0;
              }
            }
          }
          else {
            this_ptr->hostage_state = 3;
            engine_console_cpp_CConsole_printf_FUN_00445430
                      (pCVar10,"%s was led close enough, going home!\n");
            core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                      (0x01C51D80,this_ptr->going_to_sit_down_event);
            (this_ptr->base).base.hero_proximity_timer = 0.0;
          }
          break;
        case 2:
          iVar12 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004eee80(this_ptr,delta_time);
          if (iVar12 == 0) {
            core_charactr_cpp_FUN_00431cc0
                      (this_ptr,*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),0x40800000,0x41200000
                       ,&this_ptr->follow_state);
            uVar13 = this_ptr->follow_state;
            if (uVar13 == 0) {
              iVar12 = 0;
            }
            else if (uVar13 < 2) {
              iVar12 = 1;
            }
            else {
              if (uVar13 != 2) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(this_ptr->base).base.model.base,0,1);
                break;
              }
              iVar12 = 2;
            }
            this_ptr->hostage_state = 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,iVar12,1);
            engine_console_cpp_CConsole_printf_FUN_00445430
                      (g_CConsolePtr,"%s was left behind, but now can follow again!\n");
            core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                      (0x01C51D80,this_ptr->hero_came_back_event);
          }
          break;
        case 3:
          if (this_ptr->next_way_point == (CDemonActor *)0x0) {
            this_ptr->hostage_state = 2;
            engine_console_cpp_CConsole_printf_FUN_00445430
                      (pCVar10,"%s doesn't know next waypoint going home.  Help me!\n");
          }
          else {
            core_charactr_cpp_FUN_00431cc0
                      (this_ptr,this_ptr->next_way_point,0x3f800000,0xbf800000,
                       &this_ptr->follow_state);
            switch(this_ptr->follow_state) {
            case 0:
              engine_console_cpp_CConsole_printf_FUN_00445430
                        (g_CConsolePtr,"%s reached waypoint %s!\n");
              pCVar10 = g_CConsolePtr;
              if (this_ptr->next_way_point == this_ptr->goal_way_point) {
                this_ptr->hostage_state = 4;
                engine_console_cpp_CConsole_printf_FUN_00445430
                          (pCVar10,"%s rescued and taken home!\n");
                this_ptr->next_way_point = (CDemonActor *)0x0;
              }
              else {
                pCVar15 = (CDemonActor *)
                          core_waypoint_cpp_FUN_005abb80
                                    (&(this_ptr->base).base.base.location,this_ptr->goal_way_point,0
                                    );
                this_ptr->next_way_point = pCVar15;
              }
              break;
            case 1:
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,1,1);
              break;
            case 2:
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,2,1);
              break;
            case 3:
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0,1);
              pCVar10 = g_CConsolePtr;
              this_ptr->hostage_state = 2;
              engine_console_cpp_CConsole_printf_FUN_00445430
                        (pCVar10,"%s got confused going home.  Help me!\n");
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0,1);
              core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                        (0x01C51D80,this_ptr->sit_down_event);
              core_event_cpp_FUN_004a9870(0x01C51D80,this_ptr->rescue_event,1);
              this_ptr->hostage_state = 4;
              this_ptr->next_way_point = (CDemonActor *)0x0;
            }
          }
          break;
        case 4:
          iStack_3c = 1;
          if (this_ptr->sit_down_way_point != (CDemonActor *)0x0) {
            fVar3 = delta_time * (float)_DAT_005e4e9f;
            pCVar18 = SUB84(__BITCAST_UINT64((double)fVar3),0);
            if ((this_ptr->base).base.walk_step_speed < fVar3) {
              (this_ptr->base).base.walk_step_speed = fVar3;
            }
            core_actor_cpp_FUN_00408bb0(this_ptr,&this_ptr->sit_down_way_point->location);
            pCVar22 = &(this_ptr->base).base.position_delta;
            fStack_180 = afStack_134[2];
            afStack_1e8[(uint)bVar20 * -2 + 0x1b] = afStack_134[(uint)bVar20 * -2 + 3];
            afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x1c] =
                 afStack_134[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
            if (pCVar22 != (CVector3f *)(afStack_1e8 + 0x1a)) {
              pCVar22->x = fStack_180;
              (this_ptr->base).base.position_delta.y = fStack_17c;
              (this_ptr->base).base.position_delta.z = fStack_178;
            }
            pfVar19 = (float *)((int)this_ptr + (uint)bVar20 * -8 + 0x2510);
            afStack_224[2] = (this_ptr->base).base.position_delta.x;
            afStack_224[(uint)bVar20 * -2 + 3] = *pfVar19;
            afStack_224[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] = pfVar19[(uint)bVar20 * -2 + 1];
            fVar3 = SQRT(afStack_224[4] * afStack_224[4] + afStack_224[2] * afStack_224[2]);
            afStack_224[3] = 0.0;
            if ((this_ptr->base).base.walk_step_speed < fVar3) {
              fStack_48 = (this_ptr->base).base.walk_step_speed / fVar3;
              pCVar22 = &(this_ptr->base).base.position_delta;
              fVar4 = (this_ptr->base).base.position_delta.y;
              fVar5 = (this_ptr->base).base.position_delta.z;
              pCVar22->x = pCVar22->x * fStack_48;
              (this_ptr->base).base.position_delta.y = fVar4 * fStack_48;
              (this_ptr->base).base.position_delta.z = fVar5 * fStack_48;
            }
            fStack_44 = fVar3;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
                      (&(this_ptr->base).base.position_delta);
            fVar4 = (float)_DAT_005e4ea7;
            uStack_15c = afStack_ec[2];
            afStack_1e8[(uint)bVar20 * -2 + 0x24] = afStack_ec[(uint)bVar20 * -2 + 3];
            afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x25] =
                 afStack_ec[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
            (this_ptr->base).base.turn_angle_accumulator = fStack_158;
            if (fVar3 * fVar4 < 1.0) {
              pCStack_18 = (CCharacter_full_vtable *)
                           core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                     ((this_ptr->sit_down_way_point->orient).vec.y -
                                      (this_ptr->base).base.base.orient.vec.y);
              pCStack_18 = (CCharacter_full_vtable *)
                           core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                     ((float)pCStack_18 -
                                      (this_ptr->base).base.turn_angle_accumulator);
              (this_ptr->base).base.turn_angle_accumulator =
                   (1.0 - fVar3 * fVar4) * (float)pCStack_18 +
                   (this_ptr->base).base.turn_angle_accumulator;
            }
            pCStack_18 = (CCharacter_full_vtable *)
                         core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                   ((this_ptr->base).base.turn_angle_accumulator);
            (this_ptr->base).base.turn_angle_accumulator = (float)pCStack_18;
            if ((fVar3 < (float)_DAT_005e4eaf) &&
               (ABS((this_ptr->base).base.turn_angle_accumulator) < (float)_DAT_005e4eb7)) {
              if ((this_ptr->hostage_type == 0) || (this_ptr->hostage_type == 4)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(this_ptr->base).base.model.base,0,1);
                this_ptr->hostage_state = 5;
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(this_ptr->base).base.model.base,10,1);
              }
              core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                        (0x01C51D80,this_ptr->sit_down_event);
              core_event_cpp_FUN_004a9870(0x01C51D80,this_ptr->rescue_event,1);
              this_ptr->sit_down_way_point = (CDemonActor *)0x0;
            }
            fStack_4c = delta_time * _DAT_005e4ebf;
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
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,1,1);
          }
          else {
LAB_004ee2d8:
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,0,1);
          }
        }
        else if (EVar6 < WALK_STATE_NO_PATH) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,2,1);
        }
        else {
          if (EVar6 != WALK_STATE_NO_PATH) goto LAB_004ee2d8;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0,1);
          engine_console_cpp_CConsole_printf_FUN_00445430
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
        }
      }
    }
    else {
      core_actor_cpp_FUN_00408bb0(this_ptr,&pCVar15->location);
      afStack_c8[2] = afStack_200[5];
      afStack_c8[(uint)bVar20 * -2 + 3] = afStack_1e8[(uint)bVar20 * -2];
      afStack_c8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
           afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_c8 + 2);
      afStack_a4[2] = afStack_1e8[2];
      afStack_a4[(uint)bVar20 * -2 + 3] = afStack_1e8[(uint)bVar20 * -2 + 3];
      afStack_a4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
           afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
      pCStack_18 = (CCharacter_full_vtable *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_a4[3]);
      fStack_34 = (float)pCStack_18;
      if ((float)pCStack_18 < _DAT_005e4ecf) {
        fStack_34 = (float)pCStack_18 + _DAT_005e4ebf;
      }
      if (_DAT_005e4ed3 < fStack_34) {
        fStack_34 = fStack_34 + _DAT_005e4ed7;
      }
      fStack_50 = delta_time * _DAT_005e4ebf;
      fStack_58 = -fStack_50;
      if (fStack_34 < fStack_58) {
        fStack_34 = fStack_58;
      }
      if (fStack_50 < fStack_34) {
        fStack_34 = fStack_50;
      }
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fStack_34;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
      pCStack_7c = (CCharacter *)(this_ptr->base).base.grabbed_by;
      pCStack_18 = (pCStack_7c->base).vtable._uc;
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                (&(this_ptr->base).base.model,0,&CStack_b4);
      pCVar11 = pCStack_18;
      pCVar16 = pCStack_7c;
      pCVar22 = &CStack_210;
      CStack_210.x = CStack_b4.x;
      *(uint *)((int)&CStack_210 + (uint)bVar20 * -8 + 4) =
           *(uint *)((int)&CStack_b4 + (uint)bVar20 * -8 + 4);
      pCVar23 = this_ptr;
      *(uint *)((int)&CStack_210 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           *(uint *)((int)&CStack_b4 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      iVar12 = (*(pCVar11->_uc).attractActorToward)(pCVar16,(CDemonActor *)pCVar23,pCVar22);
      if (iVar12 == 0) {
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004ee196:
        pCVar18 = (CDemonActor *)&(this_ptr->base).base.model;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)pCVar18,0,1);
      }
      else if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004ee196;
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
     (iVar12 = core_actor_cpp_randomChance_FUN_0040cd00(delta_time * _DAT_005e4edb), iVar12 != 0)) {
    iVar12 = 0;
    bone_name = "Bip01 L Forearm";
    pCVar2 = &(this_ptr->base).base.model;
    this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar2);
    iVar12 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,bone_name,iVar12);
    if (-1 < iVar12) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                (pCVar2,iVar12,&CStack_234);
      pfVar19 = afStack_1e8 + 0xb;
      afStack_1bc[0] = CStack_234.x;
      afStack_1e8[(uint)bVar20 * -2 + 0xc] = *(float *)((int)&CStack_234 + (uint)bVar20 * -8 + 4);
      afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd] =
           *(float *)((int)&CStack_234 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar19);
      CStack_114.x = fStack_a8;
      *(float *)((int)&CStack_114 + (uint)bVar20 * -8 + 4) = afStack_a4[(uint)bVar20 * -2];
      *(float *)((int)&CStack_114 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           afStack_a4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
      afStack_144[0] = 3.0;
      afStack_144[1] = 0.0;
      afStack_144[2] = 0.0;
      core_actor_cpp_FUN_00408ac0(this_ptr,afStack_1e8 + 0x29);
      blood_type = BLOOD_TYPE_RED;
      pCVar22 = &CStack_d8;
      pCVar21 = &CStack_114;
      CStack_d8.x = fStack_228;
      *(float *)((int)&CStack_d8 + (uint)bVar20 * -8 + 4) = afStack_224[(uint)bVar20 * -2];
      this_ptr_02 = g_CGorePtr;
      *(float *)((int)&CStack_d8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           afStack_224[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004e5f40(this_ptr_02,pCVar21,pCVar22,blood_type);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  if (iStack_3c == 0) {
    pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                        (&(this_ptr->base).base.model.base);
    iVar12 = pSVar17->state_index;
    if ((((iVar12 == 8) || (iVar12 == 0)) || ((iVar12 == 0xd || (iVar12 == 10)))) &&
       ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      (this_ptr->base).base.walk_stuck_timer = 0.0;
      goto LAB_004ede83;
    }
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_168 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_164 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_160 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_174 = fStack_168;
    afStack_1e8[(uint)bVar20 * -2 + 0x1e] = afStack_1e8[(uint)bVar20 * -2 + 0x21];
    afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x1f] =
         afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x22];
    pCVar22 = &(this_ptr->base).base.position_delta;
    fStack_cc = fStack_174 + pCVar22->x;
    afStack_c8[0] = fStack_170 + (this_ptr->base).base.position_delta.y;
    afStack_c8[1] = fStack_16c + (this_ptr->base).base.position_delta.z;
    fStack_18c = fStack_cc;
    afStack_1e8[(uint)bVar20 * -2 + 0x18] = afStack_c8[(uint)bVar20 * -2];
    afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x19] =
         afStack_c8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    pCVar21 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_1b0 = fStack_18c + pCVar21->x;
    fStack_1ac = fStack_188 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_1a8 = fStack_184 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_fc.x = fStack_1b0;
    *(float *)((int)&CStack_fc + (uint)bVar20 * -8 + 4) = afStack_1e8[(uint)bVar20 * -2 + 0xf];
    *(float *)((int)&CStack_fc + ((uint)bVar20 * -2 + (uint)bVar20 * -2) * 4 + 8) =
         afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x10];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar22->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar21->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    pCVar22 = &CStack_fc;
    pfVar19 = (float *)((int)this_ptr + (uint)bVar20 * -8 + 0x24);
    fStack_1d4 = (this_ptr->base).base.base.location.position.x;
    afStack_1e8[(uint)bVar20 * -2 + 6] = *pfVar19;
    pCVar23 = this_ptr;
    afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7] = pfVar19[(uint)bVar20 * -2 + 1];
    core_charactr_cpp_FUN_0042d750((CCharacter *)pCVar23,pCVar22);
    (this_ptr->base).base.walk_stuck_timer = (this_ptr->base).base.walk_stuck_timer + delta_time;
    if ((delta_time * (float)_DAT_005e4edf <=
         SQRT(CStack_fc.z * CStack_fc.z + CStack_fc.x * CStack_fc.x + CStack_fc.y * CStack_fc.y)) &&
       (dVar7 = (double)(this_ptr->base).base.base.location.position.x - (double)fStack_1d4,
       dVar8 = (double)(this_ptr->base).base.base.location.position.y - (double)fStack_1d0,
       dVar9 = (double)(this_ptr->base).base.base.location.position.z - (double)fStack_1cc,
       SQRT(dVar9 * dVar9 + dVar8 * dVar8 + dVar7 * dVar7) <= (double)delta_time * _DAT_005e4ee7))
    goto LAB_004ede83;
  }
  else {
    core_actor_cpp_FUN_00408ac0(this_ptr,&(this_ptr->base).base.position_delta);
    pCVar1 = &(this_ptr->base).base.base.location;
    fStack_198 = afStack_144[3];
    afStack_1e8[(uint)bVar20 * -2 + 0x15] = afStack_134[(uint)bVar20 * -2];
    afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x16] =
         afStack_134[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    fVar3 = (this_ptr->base).base.base.location.position.y;
    fVar4 = (this_ptr->base).base.base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_198;
    (this_ptr->base).base.base.location.position.y = fVar3 + fStack_194;
    (this_ptr->base).base.base.location.position.z = fVar4 + fStack_190;
  }
  (this_ptr->base).base.walk_stuck_timer = 0.0;
LAB_004ede83:
  pCVar2 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar2);
  if (this_ptr->hostage_type == 1) {
    fStack_5c = 0.5;
    fStack_68 = 0.75;
    pCVar15 = core_actor_cpp_castToClassHash_FUN_0040c600
                        ((this_ptr->base).base.carry_hands[1].carry_actor,
                         g_CWeaponClassInfo.name_hash);
    if ((pCVar15 == (CDemonActor *)0x0) ||
       (pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(pCVar2,0x10),
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
                   core_motion_cpp_FUN_00525110
                             (pCVar2,_DAT_01d06b8c,
                              this_ptr->gun_raise_progress * (float)_DAT_005e4eef +
                              (float)_DAT_005e4ef7);
      pCStack_18 = pCStack_6c;
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
                (pCVar2,_DAT_01d06b8c,(float)pCStack_6c,this_ptr->gun_blend_weight,
                 this_ptr->bone_indices[0],core_skeleton_cpp_blendWeightCallback_FUN_00567360);
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
                (pCVar2,_DAT_01d06b8c,(float)pCStack_6c,this_ptr->gun_blend_weight,
                 this_ptr->bone_indices[1],core_skeleton_cpp_blendWeightCallback_FUN_00567360);
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
  core_charactr_cpp_FUN_00432f10(this_ptr,delta_time,uStack_38);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  if ((1.0 <= this_ptr->gun_raise_progress) &&
     (pCVar16 = (CCharacter *)
                core_actor_cpp_castToClassHash_FUN_0040c600
                          ((this_ptr->base).base.carry_hands[1].carry_actor,
                           g_CWeaponClassInfo.name_hash), pCVar16 != (CCharacter *)0x0)) {
    fVar3 = (pCVar16->model).bone_origins[0x4f].z;
    (pCVar16->model).bone_origins[0x4f].z = 8.40779e-45;
    (*(((pCVar16->base).vtable._uc)->_uc).isGrabbable)(pCVar16,pCVar18);
    (pCVar16->model).bone_origins[0x4f].z = fVar3;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,0xc,1);
    this_ptr->gun_blend_weight = 0.0;
    this_ptr->gun_raise_progress = 0.0;
  }
  if (((this_ptr->hostage_type == 1) &&
      (pCVar18 = core_actor_cpp_castToClassHash_FUN_0040c600
                           ((this_ptr->base).base.carry_hands[1].carry_actor,
                            g_CWeaponClassInfo.name_hash), pCVar18 != (CDemonActor *)0x0)) &&
     (iVar12 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                         (0x01C51D80,"deputeFireShotgun"), iVar12 != 0)) {
    this_ptr->gun_raise_progress = 0.01;
    return;
  }
  return;
}
