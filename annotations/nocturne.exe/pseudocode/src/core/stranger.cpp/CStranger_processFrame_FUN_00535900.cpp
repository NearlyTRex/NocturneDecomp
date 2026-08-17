// Name: core_stranger.cpp_CStranger_processFrame_FUN_00535900
// Address: 00535900
// Address Range: [[00535900, 00537ccd]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processFrame_FUN_00535900(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_processFrame_FUN_00535900(CStranger *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CDemonActor *pCVar8;
  CWeapon *pCVar9;
  CCharacter_full_vtable *pCVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  CGame *pCVar14;
  CBoundingBox3D *pCVar15;
  CVector3f *pCVar16;
  float fVar17;
  SMotion *pSVar18;
  CVector3f *pCVar19;
  CBoxActor *pCVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  int iVar25;
  UOrientationVector *pUVar26;
  double in_stack_fffffd10;
  double dVar27;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  SDamageInfo SStack_2bc;
  SInteractionInfo SStack_280;
  byte auStack_260 [20];
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  CVector3f CStack_200;
  CVector3f CStack_1f4;
  CVector3f CStack_1e8;
  CVector3f CStack_1dc;
  byte auStack_1c8 [28];
  float fStack_1ac;
  float fStack_1a8;
  byte auStack_1a4 [8];
  float fStack_19c;
  float fStack_198;
  CVector3f CStack_194;
  float afStack_188 [3];
  CVector3f CStack_17c;
  float fStack_168;
  uint uStack_164;
  float fStack_160;
  byte auStack_15c [8];
  float fStack_154;
  CVector3f aCStack_14c [2];
  UOrientationVector UStack_12c;
  CVector3f CStack_120;
  byte auStack_110 [12];
  CVector3f CStack_104;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  CVector3f CStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  CVector3f CStack_c8;
  CVector3f CStack_b4;
  UOrientationVector UStack_a8;
  byte auStack_98 [12];
  uint uStack_8c;
  float fStack_88;
  CCharacter_full_vtable *pCStack_84;
  int iStack_80;
  int iStack_7c;
  CDemonActor *pCStack_78;
  uint uStack_74;
  CAmmoBox *pCStack_70;
  float fStack_6c;
  CMotionController *pCStack_68;
  CMotionController *pCStack_64;
  int iStack_60;
  CMotionController *pCStack_5c;
  int iStack_58;
  CMotionController *pCStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  CDeformableModelInstance *pCStack_34;
  float *pfStack_30;
  CMotionController *pCStack_28;
  float local_24;
  int iStack_20;
  int iStack_1c;
  CCharacter *pCStack_18;
  CMotionController *pCStack_14;
  
  local_24 = (float)core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                              (0x01C03A10,"DebugActionPending");
  pCVar8 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if ((pCVar8 != (CDemonActor *)0x0) && ((this_ptr->carry_object_bbox).max.x < -999999.0f)) {
    pCVar15 = (*((pCVar8->vtable)._ub)->getBoundingBox)
                        (pCVar8,(CBoundingBox3D *)(auStack_260 + 0x10));
    if (&this_ptr->carry_object_bbox != pCVar15) {
      (this_ptr->carry_object_bbox).min.x = (pCVar15->min).x;
      (this_ptr->carry_object_bbox).min.y = (pCVar15->min).y;
      (this_ptr->carry_object_bbox).min.z = (pCVar15->min).z;
    }
    pCVar16 = &(this_ptr->carry_object_bbox).max;
    if (pCVar16 != &pCVar15->max) {
      pCVar16->x = (pCVar15->max).x;
      (this_ptr->carry_object_bbox).max.y = (pCVar15->max).y;
      (this_ptr->carry_object_bbox).max.z = (pCVar15->max).z;
    }
    fStack_218 = (this_ptr->carry_object_bbox).min.x + (this_ptr->carry_object_bbox).max.x;
    fStack_214 = (this_ptr->carry_object_bbox).min.y + (this_ptr->carry_object_bbox).max.y;
    auStack_1a4._4_4_ = fStack_218 * 0.5f;
    fStack_210 = (this_ptr->carry_object_bbox).min.z + (this_ptr->carry_object_bbox).max.z;
    fStack_19c = fStack_214 * 0.5f;
    fStack_198 = fStack_210 * 0.5f;
    pCVar16 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                        ((this_ptr->base).base.carry_hands[1].carry_actor,
                         (CVector3f *)(auStack_1c8 + 4),(CVector3f *)(auStack_1a4 + 4));
    pCVar16 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        ((CDemonActor *)this_ptr,&CStack_1f4,pCVar16);
    if (&this_ptr->carry_object_world_center != pCVar16) {
      (this_ptr->carry_object_world_center).x = pCVar16->x;
      (this_ptr->carry_object_world_center).y = pCVar16->y;
      (this_ptr->carry_object_world_center).z = pCVar16->z;
    }
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042abd0((CCharacter *)this_ptr,delta_time);
  core_game_cpp_CGame_slamDT_FUN_004a5f00(g_CGame_PTR_005b9354,delta_time);
  fVar17 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar17;
  if (fVar17 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  fVar17 = this_ptr->action_timer - delta_time;
  this_ptr->action_timer = fVar17;
  if (fVar17 < 0.0) {
    this_ptr->action_timer = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  pCVar16 = (CVector3f *)core_stranger_cpp_CStranger_FUN_00538440(this_ptr,afStack_188);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)this_ptr,&CStack_194,pCVar16);
  core_stranger_cpp_CStranger_processMotionEvents_FUN_00537cd0(this_ptr,delta_time);
  iStack_20 = 1;
  pCStack_28 = (CMotionController *)0x1;
  local_24 = 1.4013e-45;
  bVar11 = true;
  iVar25 = 1;
  if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
    bVar11 = false;
    iVar25 = 0;
    iStack_20 = 0;
    local_24 = 0.0;
    pCStack_28 = (CMotionController *)0x0;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"grabbedBy=%s\n");
    }
  }
  if ((this_ptr->base).pushed_object != (CBoxActor *)0x0) {
    bVar11 = false;
    iVar25 = 0;
    iStack_20 = 0;
    local_24 = 0.0;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"pushedObject=%s\n");
    }
  }
  if (((this_ptr->base).ladder_to_climb != (CLadder *)0x0) ||
     (this_ptr->ladder_to_descend != (CLadder *)0x0)) {
    bVar11 = false;
    iVar25 = 0;
    pCStack_28 = (CMotionController *)0x0;
    local_24 = 0.0;
    iStack_20 = 0;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(g_CConsole_PTR_005ad350,"ladder\n");
    }
  }
  if (((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) || (this_ptr->action_pending == 4))
  {
    bVar11 = false;
    iVar25 = 0;
    iStack_20 = 0;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(g_CConsole_PTR_005ad350,"pickup\n");
    }
  }
  pCStack_54 = &(this_ptr->base).base.model.motion_controller;
  fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(pCStack_54,0x24);
  if ((((0.0 < fVar17) ||
       (fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(pCStack_54,0x28)
       , 0.0 < fVar17)) ||
      (fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(pCStack_54,0x29),
      0.0 < fVar17)) || ((this_ptr->base).base.hit_points <= 0.0)) {
    bVar11 = false;
    iVar25 = 0;
    local_24 = 0.0;
    iStack_20 = 0;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(g_CConsole_PTR_005ad350,"hurt\n");
    }
  }
  pCStack_14 = &(this_ptr->base).base.model.motion_controller;
  fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(pCStack_14,0x1c);
  if (((0.0 < fVar17) ||
      (fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(pCStack_14,0x1d),
      0.0 < fVar17)) ||
     ((fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(pCStack_14,0x1e),
      0.0 < fVar17 ||
      ((this_ptr->action_pending == 5 || ((this_ptr->base).door_to_open != (CDoor *)0x0)))))) {
    bVar11 = false;
    iVar25 = 0;
    iStack_20 = 0;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(g_CConsole_PTR_005ad350,"door\n");
    }
  }
  fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                     (&(this_ptr->base).base.model.motion_controller,0x2e);
  if (0.0 < fVar17) {
    bVar11 = false;
    iVar25 = 0;
    local_24 = 0.0;
    pCStack_28 = (CMotionController *)0x0;
    iStack_20 = 0;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(g_CConsole_PTR_005ad350,"sitting\n");
    }
  }
  if (this_ptr->action_pending == 1) {
    iVar25 = 0;
    bVar11 = false;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"stashinventory\n");
    }
  }
  if (this_ptr->action_pending == 2) {
    iVar25 = 0;
    bVar11 = false;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"placeobject\n");
    }
  }
  if (this_ptr->action_pending == 6) {
    iVar25 = 0;
    bVar11 = false;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"putdownobject\n");
    }
  }
  if (this_ptr->action_pending == 3) {
    iVar25 = 0;
    bVar11 = false;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(g_CConsole_PTR_005ad350,"toss\n");
    }
  }
  if (this_ptr->action_pending == 7) {
    iVar25 = 0;
    bVar11 = false;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"attackmelee\n");
    }
  }
  if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) {
    if ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0) {
      pCStack_28 = (CMotionController *)0x1;
    }
    if ((this_ptr->base).base.base.location.position.y !=
        (this_ptr->base).base.closest_distance_threshold) {
      pCStack_28 = (CMotionController *)0x1;
    }
  }
  fVar17 = (float)12.566370614;
  pCStack_64 = &(this_ptr->base).base.model.motion_controller;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar17;
  pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(pCStack_64);
  if ((pSVar18->state_index == 4) ||
     (pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(pCStack_64),
     pSVar18->state_index == 5)) {
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.x * (float)2;
  }
  if ((this_ptr->base).nearby_interactive_actor == (CDemonActor *)0x0) {
    fVar17 = this_ptr->interact_blend - delta_time * (float)2;
    this_ptr->interact_blend = fVar17;
    if (fVar17 < 0.0) {
      this_ptr->interact_blend = 0.0;
    }
  }
  else {
    fVar17 = delta_time * (float)2 + this_ptr->interact_blend;
    this_ptr->interact_blend = fVar17;
    if (1.0 < fVar17) {
      this_ptr->interact_blend = 1.0;
    }
  }
  iStack_60 = 1;
  if ((this_ptr->base).ladder_to_climb == (CLadder *)0x0) {
    if (this_ptr->ladder_to_descend == (CLadder *)0x0) {
      pCVar8 = (this_ptr->base).nearby_interactive_actor;
      if (pCVar8 == (CDemonActor *)0x0) {
        pCVar8 = (this_ptr->base).base.grabbed_by;
        if (pCVar8 == (CDemonActor *)0x0) {
          if ((this_ptr->base).pushed_object == (CBoxActor *)0x0) {
            iVar21 = core_charactr_cpp_CCharacter_FUN_00428c00((CCharacter *)this_ptr,delta_time);
            pCVar2 = &(this_ptr->base).base.model;
            if (iVar21 == 0) {
              if (iStack_20 != 0) {
                pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                                    (&pCVar2->motion_controller);
                switch(pSVar18->state_index) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  if ((this_ptr->base).base.is_on_ground != 0) {
                    pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                                        (&(this_ptr->base).base.model.motion_controller);
                    iStack_58 = pSVar18->state_index;
                    iStack_7c = 0;
                    if ((this_ptr->base).player_input.action_state.walk == 0) {
                      if ((this_ptr->base).player_input.action_state.backup == 0) {
                        fVar17 = (this_ptr->base).player_input.strafe_speed;
                        in_stack_fffffd10 = (double)fVar17;
                        if ((float)-0.01 <= fVar17) {
                          if (0.01 < in_stack_fffffd10) {
                            iStack_7c = 5;
                          }
                        }
                        else {
                          iStack_7c = 4;
                        }
                      }
                      else {
                        iStack_7c = 2;
                      }
                    }
                    else if ((this_ptr->base).player_input.action_state.run == 0) {
                      iStack_7c = 1;
                    }
                    else {
                      iStack_7c = 3;
                    }
                    pCVar2 = &(this_ptr->base).base.model;
                    fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                       (&pCVar2->motion_controller,1);
                    pCStack_84 = (CCharacter_full_vtable *)(fVar17 * 2.5f);
                    fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                       (&pCVar2->motion_controller,3);
                    fVar13 = fVar17 * 3.5f + (float)pCStack_84;
                    fVar23 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                       (&pCVar2->motion_controller,2);
                    fVar23 = fVar23 * 1.5f;
                    fVar17 = (this_ptr->base).player_input.strafe_speed;
                    fVar12 = (this_ptr->base).player_input.turn_speed *
                             (this_ptr->base).base.turn_speed;
                    iVar21 = (this_ptr->base).player_input.action_state.jump;
                    (this_ptr->base).base.turn_angle_accumulator = fVar12;
                    fVar22 = (this_ptr->base).base.turn_angle_accumulator;
                    fVar3 = (this_ptr->base).base.turn_angle_accumulator;
                    fVar4 = (this_ptr->right_arm_aim).aim_yaw;
                    fVar5 = (this_ptr->left_arm_aim).aim_yaw;
                    fVar6 = (this_ptr->right_arm_aim).target_yaw;
                    fVar7 = (this_ptr->left_arm_aim).target_yaw;
                    this_ptr->turn_angle = this_ptr->turn_angle - fVar12;
                    (this_ptr->right_arm_aim).aim_yaw = fVar4 - fVar12;
                    (this_ptr->left_arm_aim).aim_yaw = fVar5 - fVar22;
                    (this_ptr->right_arm_aim).target_yaw = fVar6 - fVar22;
                    fVar22 = (this_ptr->base).base.position_delta.x;
                    (this_ptr->left_arm_aim).target_yaw = fVar7 - fVar3;
                    (this_ptr->base).base.position_delta.x =
                         fVar17 * delta_time * (fVar23 + fVar13) + fVar22;
                    if ((iVar21 != 0) && ((this_ptr->base).base.layer_action_index != 0xe)) {
                      switch(iStack_58) {
                      case 0:
                      case 2:
                      case 4:
                      case 5:
                        (this_ptr->base).base.is_on_ground = 0;
                        iStack_7c = 0xb;
                        break;
                      case 1:
                        (this_ptr->base).base.is_on_ground = 0;
                        iStack_7c = 0xb;
                        break;
                      case 3:
                        (this_ptr->base).base.is_on_ground = 0;
                        iStack_7c = 7;
                      }
                    }
                    if (iStack_7c != iStack_58) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                                (&(this_ptr->base).base.model.motion_controller,iStack_7c,1);
                    }
                    if ((this_ptr->base).player_input.action_state.use_item != 0) {
                      core_hero_cpp_CHero_FUN_004b5b00(&this_ptr->base);
                      iStack_60 = 0;
                      break;
                    }
                  }
                  iStack_60 = 0;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                  (this_ptr->base).base.is_on_ground = 0;
                }
              }
            }
            else {
              uVar24 = (this_ptr->base).base.is_walking;
              if (uVar24 < 2) {
                if (uVar24 == 1) {
                  iVar21 = 1;
                }
                else {
                  iVar21 = 0;
                }
LAB_0053713f:
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&(this_ptr->base).base.model.motion_controller,iVar21,1);
              }
              else {
                if (uVar24 < 3) {
                  iVar21 = 3;
                  goto LAB_0053713f;
                }
                if (uVar24 != 3) {
                  iVar21 = 0;
                  goto LAB_0053713f;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&pCVar2->motion_controller,0,1);
                engine_console_cpp_CConsole_printf_FUN_0043ac60
                          (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n");
              }
              (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
              (this_ptr->base).base.model.accumulated_root_motion.y =
                   (this_ptr->base).base.model.accumulated_root_motion.z;
              (this_ptr->base).base.model.accumulated_root_motion.x =
                   (this_ptr->base).base.model.accumulated_root_motion.y;
            }
          }
          else {
            pCStack_78 = pCVar8;
            if ((this_ptr->base).player_input.action_state.fire != 0) {
              pCVar20 = (this_ptr->base).pushed_object;
              (*((pCVar20->base).vtable._ub)->getBoundingBox)
                        (&pCVar20->base,(CBoundingBox3D *)auStack_260);
              fStack_204 = (float)auStack_260._8_4_ + fStack_24c;
              CStack_200.x = (float)auStack_260._12_4_ + fStack_248;
              auStack_15c._0_4_ = fStack_204 * 0.5f;
              auStack_15c._4_4_ = CStack_200.x * 0.5f;
              CStack_200.y = (float)auStack_260._16_4_ + fStack_244;
              fStack_154 = CStack_200.y * 0.5f;
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                        (&((this_ptr->base).pushed_object)->base,&CStack_120,
                         (CVector3f *)auStack_15c);
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        ((CDemonActor *)this_ptr,&CStack_b4,&CStack_120);
              pCVar16 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                  ((CVector3f *)auStack_1c8,&CStack_b4);
              in_stack_fffffd10 = __BITCAST_DOUBLE(CONCAT44(pCVar16->y,0x536fc1));
              SStack_2bc.damage_amount = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(pCVar16->y);
              fStack_f0 = fStack_24c - (float)auStack_260._8_4_;
              fStack_e8 = fStack_244 - (float)auStack_260._16_4_;
              fStack_168 = fStack_f0 * 0.5f;
              fStack_160 = fStack_e8 * 0.5f;
              uStack_164 = 0;
              fStack_ec = fStack_248 - (float)auStack_260._12_4_;
              if ((((CStack_b4.z - SQRT(fStack_160 * fStack_160 + fStack_168 * fStack_168) <
                     (float)3) && (1.0 < CStack_b4.y)) &&
                  (CStack_b4.y < (float)5)) &&
                 (ABS(SStack_2bc.damage_amount) < (float)0.78539816337500001)) {
                pfStack_30 = (float *)(delta_time * (float)3.1415926535000001);
                if (SStack_2bc.damage_amount < -(float)pfStack_30) {
                  SStack_2bc.damage_amount = -(float)pfStack_30;
                }
                if ((float)pfStack_30 < SStack_2bc.damage_amount) {
                  SStack_2bc.damage_amount = (float)pfStack_30;
                }
                pUVar26 = &(this_ptr->base).base.base.orient;
                in_stack_fffffd10 = __BITCAST_DOUBLE(CONCAT44(pUVar26,this_ptr));
                (this_ptr->base).base.base.orient.vec.y =
                     (this_ptr->base).base.base.orient.vec.y + SStack_2bc.damage_amount;
                core_charactr_cpp_CCharacter_setOrientation_FUN_0042a060
                          ((CCharacter *)this_ptr,pUVar26);
                goto switchD_005371ce_caseD_6;
              }
            }
            if (pCStack_78 == (CDemonActor *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(this_ptr->base).base.model.motion_controller,0,1);
              core_hero_cpp_CHero_stopPushingBox_FUN_004b56f0(&this_ptr->base);
            }
          }
        }
        else {
          if ((this_ptr->base).base.grabbed_type == 0) {
            pCVar16 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                                ((CDemonActor *)this_ptr,(CVector3f *)(auStack_15c + 4),
                                 &(pCVar8->location).position);
            pCVar16 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                (&CStack_e0,pCVar16);
            fStack_2d0 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(pCVar16->y);
            if (fStack_2d0 < (float)-1.57079632675) {
              fStack_2d0 = fStack_2d0 + 3.141593f;
            }
            if ((float)1.57079632675 < fStack_2d0) {
              fStack_2d0 = fStack_2d0 + -3.141593f;
            }
            fStack_4c = delta_time * (float)3.1415926535000001;
            fStack_6c = -fStack_4c;
            if (fStack_2d0 < fStack_6c) {
              fStack_2d0 = fStack_6c;
            }
            if (fStack_4c < fStack_2d0) {
              fStack_2d0 = fStack_4c;
            }
            (this_ptr->base).base.base.orient.vec.y =
                 (this_ptr->base).base.base.orient.vec.y + fStack_2d0;
            core_charactr_cpp_CCharacter_setOrientation_FUN_0042a060
                      ((CCharacter *)this_ptr,&(this_ptr->base).base.base.orient);
          }
          pCStack_18 = (CCharacter *)(this_ptr->base).base.grabbed_by;
          pCStack_84 = (pCStack_18->base).vtable._uc;
          pCStack_34 = &(this_ptr->base).base.model;
          pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                              (pCStack_34,aCStack_14c,0);
          iVar21 = (*(pCStack_84->_uc).attractActorToward)
                             (pCStack_18,(CDemonActor *)this_ptr,pCVar16);
          if (iVar21 == 0) {
            (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
          }
          else if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
            fVar17 = this_ptr->grab_timer + delta_time;
            this_ptr->grab_timer = fVar17;
            if ((1.5f <= fVar17) && ((this_ptr->base).base.grabbed_type != 1)) {
              fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                 (pCStack_28,0x22);
              in_stack_fffffd10 = __BITCAST_DOUBLE(CONCAT44(pCStack_28,0x5368ab));
              fVar22 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                 (pCStack_28,0x23);
              if (fVar22 + fVar17 <= 0.0) {
                in_stack_fffffd10 = __BITCAST_DOUBLE(CONCAT44(0x536e8b,SUB84(in_stack_fffffd10,0)));
                (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseFromGrab)
                          ((CCharacter *)this_ptr);
              }
              else if ((this_ptr->base).player_input.action_state.fire != 0) {
                in_stack_fffffd10 = __BITCAST_DOUBLE(CONCAT44(0x23,pCStack_28));
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(pCStack_28,0x23,1);
                (this_ptr->base).player_input.action_state.fire = 0;
              }
            }
            goto switchD_005371ce_caseD_6;
          }
          pCVar2 = &(this_ptr->base).base.model;
          in_stack_fffffd10 = (double)ZEXT48(pCVar2);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,0,1);
        }
      }
      else {
        (*((pCVar8->vtable)._ub)->getInteractionInfo)(pCVar8,&SStack_280);
        if ((SStack_280.approach_offset == 0.0) ||
           (this_ptr != (CStranger *)SStack_280.distance_max)) {
          in_stack_fffffd10 = __BITCAST_DOUBLE(CONCAT44(this_ptr,0x536e0d));
          core_hero_cpp_CHero_stopNearbyInteraction_FUN_004b5920(&this_ptr->base);
        }
        else {
          pCVar8 = ((CHero *)SStack_280.distance_max)->nearby_interactive_actor;
          UStack_a8.vec.x = (pCVar8->orient).vec.x;
          UStack_a8.vec.y = (pCVar8->orient).vec.y;
          UStack_a8.vec.z = (pCVar8->orient).vec.z;
          pCStack_28 = (CMotionController *)
                       ((this_ptr->base).player_input.turn_speed * (float)3.1415926535000001 *
                        (float)0.5 * delta_time);
          if ((float)pCStack_28 < SStack_280.pitch_min) {
            pCStack_28 = (CMotionController *)SStack_280.pitch_min;
          }
          if (SStack_280.pitch_max < (float)pCStack_28) {
            pCStack_28 = (CMotionController *)SStack_280.pitch_max;
          }
          UStack_a8.vec.y =
               core_actor_cpp_normalizeAngleToPi_FUN_0040df00(UStack_a8.vec.y + (float)pCStack_28);
          local_24 = (this_ptr->base).player_input.look_up_down_speed * (float)3.1415926535000001 *
                     (float)0.5 * delta_time;
          if (local_24 < (float)auStack_260._4_4_) {
            local_24 = (float)auStack_260._4_4_;
          }
          if ((float)auStack_260._0_4_ < local_24) {
            local_24 = (float)auStack_260._0_4_;
          }
          UStack_a8.vec.x =
               core_actor_cpp_normalizeAngleToPi_FUN_0040df00(UStack_a8.vec.x + local_24);
          pUVar26 = &UStack_a8;
          pCVar8 = (this_ptr->base).nearby_interactive_actor;
          iVar21 = (*((pCVar8->vtable)._ub)->updateInteraction)
                             (pCVar8,pUVar26,&(this_ptr->base).player_input);
          pCStack_28 = &(this_ptr->base).base.model.motion_controller;
          if (iVar21 == 0) {
            in_stack_fffffd10 = __BITCAST_DOUBLE(CONCAT44(0x536e4f,pUVar26));
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(pCStack_28,0,1);
            core_hero_cpp_CHero_stopNearbyInteraction_FUN_004b5920(&this_ptr->base);
          }
          else {
            delta_time = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                   ((((this_ptr->base).nearby_interactive_actor)->orient).vec.y -
                                    (this_ptr->base).base.base.orient.vec.y);
            if ((float)-0.01 <= delta_time) {
              if ((double)delta_time <= 0.01) {
                iVar21 = 0;
              }
              else {
                iVar21 = 4;
              }
            }
            else {
              iVar21 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(pCStack_28,iVar21,1);
            UStack_12c.vec.x = (this_ptr->base).base.base.orient.vec.x;
            UStack_12c.vec.z = (this_ptr->base).base.base.orient.vec.z;
            UStack_12c.vec.y =
                 delta_time * this_ptr->interact_blend + (this_ptr->base).base.base.orient.vec.y;
            core_charactr_cpp_CCharacter_setOrientation_FUN_0042a060
                      ((CCharacter *)this_ptr,&UStack_12c);
            auStack_98._8_4_ = 0.0;
            fStack_88 = SStack_280.pitch_min + (float)-1;
            uStack_8c = 0;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                      ((this_ptr->base).nearby_interactive_actor,&CStack_120,
                       (CVector3f *)(auStack_98 + 8));
            auStack_110._8_4_ = CStack_120.x - (this_ptr->base).base.base.location.position.x;
            CStack_104.x = CStack_120.y - (this_ptr->base).base.base.location.position.y;
            CStack_104.y = CStack_120.z - (this_ptr->base).base.base.location.position.z;
            pfStack_30 = &this_ptr->interact_blend;
            in_stack_fffffd10 = __BITCAST_DOUBLE(CONCAT44(0x536d9d,pUVar26));
            pCVar16 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                                ((CDemonActor *)this_ptr,(CVector3f *)auStack_1a4,
                                 (CVector3f *)(auStack_110 + 8));
            fStack_210 = pCVar16->x * *pfStack_30;
            fStack_20c = pCVar16->y * *pfStack_30;
            fStack_208 = pCVar16->z * *pfStack_30;
            pCVar16 = &(this_ptr->base).base.model.accumulated_root_motion;
            if (pCVar16 != (CVector3f *)&fStack_210) {
              pCVar16->x = fStack_210;
              (this_ptr->base).base.model.accumulated_root_motion.y = fStack_20c;
              (this_ptr->base).base.model.accumulated_root_motion.z = fStack_208;
            }
            (this_ptr->base).base.model.accumulated_root_motion.y = 0.0;
          }
        }
      }
    }
    else {
      fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                         (&(this_ptr->base).base.model.motion_controller,0x2b);
      if (0.0 < fVar17) {
        if ((this_ptr->base).base.base.location.position.y <
            (this_ptr->ladder_to_descend->base).location.position.y + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
      }
      else {
        this_ptr->ladder_to_descend = (CLadder *)0x0;
      }
      if (0.0 < this_ptr->ladder_blend_time) {
        if (this_ptr->ladder_blend_time <= delta_time) {
          this_ptr->ladder_blend_time = 0.0;
          fStack_2cc = 1.0;
        }
        else {
          fStack_2cc = delta_time / this_ptr->ladder_blend_time;
          this_ptr->ladder_blend_time = this_ptr->ladder_blend_time - delta_time;
        }
        pCVar16 = &this_ptr->ladder_offset;
        fStack_ec = pCVar16->x * fStack_2cc;
        fStack_e8 = (this_ptr->ladder_offset).y * fStack_2cc;
        fStack_e4 = (this_ptr->ladder_offset).z * fStack_2cc;
        pCVar1 = &(this_ptr->base).base.base.location;
        fStack_50 = 1.0 - fStack_2cc;
        fVar17 = (this_ptr->base).base.base.location.position.y;
        (pCVar1->position).x = (pCVar1->position).x + fStack_ec;
        fVar22 = (this_ptr->base).base.base.location.position.z;
        (this_ptr->base).base.base.location.position.y = fVar17 + fStack_e8;
        (this_ptr->base).base.base.location.position.z = fVar22 + fStack_e4;
        pCVar16->x = pCVar16->x * fStack_50;
        (this_ptr->ladder_offset).y = (this_ptr->ladder_offset).y * fStack_50;
        (this_ptr->ladder_offset).z = (this_ptr->ladder_offset).z * fStack_50;
        fVar17 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                           (this_ptr->ladder_facing_angle - (this_ptr->base).base.base.orient.vec.y)
        ;
        (this_ptr->base).base.turn_angle_accumulator = fVar17 * fStack_2cc;
      }
      fVar17 = (*((this_ptr->base).base.base.vtable._ub)->cylinderGroundCheck)
                         ((CDemonActor *)this_ptr,(this_ptr->base).base.collision_cylinder_height,
                          (CVector3f *)0x0);
      (this_ptr->base).base.closest_distance_threshold = fVar17;
    }
  }
  else {
    fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                       (&(this_ptr->base).base.model.motion_controller,0x2a);
    if (0.0 < fVar17) {
      pCVar16 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                          (&((this_ptr->base).ladder_to_climb)->base,&CStack_c8,
                           &((this_ptr->base).ladder_to_climb)->ladder_size);
      if (pCVar16->y + (float)-4 < (this_ptr->base).base.base.location.position.y) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
    }
    else {
      (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
    }
    if (0.0 < this_ptr->ladder_blend_time) {
      if (this_ptr->ladder_blend_time <= delta_time) {
        this_ptr->ladder_blend_time = 0.0;
        fStack_2c8 = 1.0;
      }
      else {
        fStack_2c8 = delta_time / this_ptr->ladder_blend_time;
        this_ptr->ladder_blend_time = this_ptr->ladder_blend_time - delta_time;
      }
      pCVar16 = &this_ptr->ladder_offset;
      fStack_1ac = pCVar16->x * fStack_2c8;
      fStack_1a8 = (this_ptr->ladder_offset).y * fStack_2c8;
      auStack_1a4._0_4_ = (this_ptr->ladder_offset).z * fStack_2c8;
      pCVar1 = &(this_ptr->base).base.base.location;
      fStack_40 = 1.0 - fStack_2c8;
      fVar17 = (this_ptr->base).base.base.location.position.y;
      (pCVar1->position).x = (pCVar1->position).x + fStack_1ac;
      fVar22 = (this_ptr->base).base.base.location.position.z;
      (this_ptr->base).base.base.location.position.y = fVar17 + fStack_1a8;
      (this_ptr->base).base.base.location.position.z = fVar22 + (float)auStack_1a4._0_4_;
      pCVar16->x = pCVar16->x * fStack_40;
      (this_ptr->ladder_offset).y = (this_ptr->ladder_offset).y * fStack_40;
      (this_ptr->ladder_offset).z = (this_ptr->ladder_offset).z * fStack_40;
      fVar17 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                         (this_ptr->ladder_facing_angle - (this_ptr->base).base.base.orient.vec.y);
      (this_ptr->base).base.turn_angle_accumulator = fVar17 * fStack_2c8;
    }
  }
switchD_005371ce_caseD_6:
  pCStack_68 = &(this_ptr->base).base.model.motion_controller;
  pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(pCStack_68);
  if ((pSVar18->state_index == 0x1b) &&
     (pCStack_70 = (CAmmoBox *)
                   core_actor_cpp_castToClassHash_FUN_0040d890
                             ((this_ptr->base).object_to_pick_up,
                              g_CAmmoBoxActorType_007641f8.name_hash), pCStack_70 != (CAmmoBox *)0x0
     )) {
    fVar17 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60(pCStack_68);
    core_ammobox_cpp_CAmmoBox_openBox_FUN_0040f130(pCStack_70,fVar17);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  core_stranger_cpp_CStranger_updateTurnBlending_FUN_005397b0(this_ptr,delta_time);
  if (iStack_60 != 0) {
    (this_ptr->pending_velocity).z = 0.0;
    (this_ptr->pending_velocity).y = (this_ptr->pending_velocity).z;
    (this_ptr->pending_velocity).x = (this_ptr->pending_velocity).y;
  }
  if (((this_ptr->base).ladder_to_climb == (CLadder *)0x0) &&
     (this_ptr->ladder_to_descend == (CLadder *)0x0)) {
    if (pCStack_28 == (CMotionController *)0x0) goto LAB_00536144;
    pCStack_5c = &(this_ptr->base).base.model.motion_controller;
    pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(pCStack_5c);
    pCVar16 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar19 = &(this_ptr->base).base.position_delta;
    CStack_104.x = pCVar16->x + pCVar19->x;
    iStack_80 = pSVar18->state_index;
    CStack_104.y = (this_ptr->base).base.model.accumulated_root_motion.y +
                   (this_ptr->base).base.position_delta.y;
    fStack_48 = 18.0f * delta_time;
    CStack_104.z = (this_ptr->base).base.model.accumulated_root_motion.z +
                   (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar17 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar17;
    pCVar16->x = fVar17;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar19->x = (this_ptr->base).base.position_delta.y;
    if (iStack_80 == 7) {
      CStack_104.x = 0.0;
      CStack_104.y = 0.0;
      this_ptr->jump_speed = 18.0f;
      this_ptr->airborne_timer = 0.0;
      CStack_104.z = fStack_48;
    }
    else {
      if (iStack_80 == 8) {
        fVar22 = (float)32;
        fVar17 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = 18.0f;
        fVar17 = fVar17 - delta_time * fVar22;
        this_ptr->airborne_timer = 0.0;
        CStack_104.z = fStack_48;
        goto LAB_00537584;
      }
      if (iStack_80 == 9) {
        fVar3 = (float)32;
        fVar22 = 0.5f * 18.0f;
        CStack_104.x = 0.0;
        CStack_104.y = 0.0;
        CStack_104.z = this_ptr->jump_speed * delta_time;
        this_ptr->airborne_timer = 0.0;
        fVar17 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = this_ptr->jump_speed - fVar22 * delta_time;
        fVar22 = this_ptr->jump_speed;
        (this_ptr->base).base.velocity.y = fVar17 - delta_time * fVar3;
        if (fVar22 < 0.0) {
          this_ptr->jump_speed = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(pCStack_5c,0xf,1);
        }
      }
      else if (iStack_80 == 10) {
        CStack_104.y = 0.0;
        CStack_104.x = 0.0;
        CStack_104.z = fStack_48;
      }
      else if (iStack_80 == 0xb) {
        this_ptr->airborne_timer = 0.0;
        this_ptr->jump_speed = 10.0f;
      }
      else if (iStack_80 == 0xc) {
        CStack_104.z = 10.0f * delta_time;
        fVar22 = (float)32;
        fVar17 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = 10.0f;
        fVar17 = fVar17 - delta_time * fVar22;
        this_ptr->airborne_timer = 0.0;
LAB_00537584:
        CStack_104.y = 0.0;
        CStack_104.x = 0.0;
LAB_00537586:
        (this_ptr->base).base.velocity.y = fVar17;
      }
      else if (iStack_80 == 0xd) {
        fVar3 = (float)32;
        CStack_104.x = 0.0;
        CStack_104.y = 0.0;
        fVar22 = 0.5f * 10.0f;
        CStack_104.z = this_ptr->jump_speed * delta_time;
        this_ptr->airborne_timer = 0.0;
        fVar17 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = this_ptr->jump_speed - fVar22 * delta_time;
        fVar22 = this_ptr->jump_speed;
        (this_ptr->base).base.velocity.y = fVar17 - delta_time * fVar3;
        if (fVar22 < 0.0) {
          this_ptr->jump_speed = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(pCStack_5c,0xf,1);
        }
      }
      else {
        if (iStack_80 != 0xe) {
          if (iStack_80 == 0xf) {
            CStack_104.z = 0.0;
            fVar17 = (this_ptr->base).base.velocity.y - delta_time * (float)32;
            this_ptr->airborne_timer = 9999.9;
            goto LAB_00537584;
          }
          if (iStack_80 == 0x10) {
            CStack_104.z = 0.0;
            CStack_104.y = 0.0;
            CStack_104.x = 0.0;
            fVar17 = (this_ptr->base).base.velocity.y - delta_time * (float)32;
          }
          else {
            fVar17 = (this_ptr->base).base.velocity.y - delta_time * (float)32;
          }
          goto LAB_00537586;
        }
        CStack_104.y = 0.0;
      }
    }
    pCVar16 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                        ((CDemonActor *)this_ptr,(CVector3f *)auStack_98,&this_ptr->pending_velocity
                        );
    fStack_230 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_22c = (this_ptr->base).base.velocity.y * delta_time;
    fStack_228 = delta_time * (this_ptr->base).base.velocity.z;
    fStack_d4 = fStack_230 + pCVar16->x;
    fStack_d0 = fStack_22c + pCVar16->y;
    CStack_104.x = CStack_104.x + fStack_d4;
    fStack_cc = fStack_228 + pCVar16->z;
    CStack_104.y = CStack_104.y + fStack_d0;
    CStack_104.z = CStack_104.z + fStack_cc;
    this_ptr->fall_velocity_snapshot = (this_ptr->base).base.velocity.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&CStack_104);
    if ((this_ptr->base).base.base.location.position.y <
        (this_ptr->base).base.closest_distance_threshold + (float)0.10000000000000001) {
      (this_ptr->base).base.is_on_ground = 1;
    }
    if (((iStack_80 == 0xf) || (iStack_80 == 9)) || (iStack_80 == 0xd)) {
      if ((this_ptr->base).base.is_on_ground != 0) {
        engine_force_cpp_CForceFeedback_processEvent_FUN_004940d0(g_CForceFeedback_PTR_005b9284);
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (g_CConsole_PTR_005ad350,"Splat at %3.2f fps\n",
                   (double)(this_ptr->base).base.velocity.y);
        fVar17 = -this_ptr->fall_velocity_snapshot;
        dVar27 = (double)fVar17;
        if (fVar17 < (float)20) {
          if (((iStack_80 == 0xd) || (iStack_80 == 9)) || (iStack_80 == 0xf)) goto LAB_00537712;
        }
        else {
          uStack_74 = 0;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&SStack_2bc);
          SStack_2bc.damage_amount =
               (float)(((float10)dVar27 + (float10)-20) * (float10)0.050000000000000003 *
                      (float10)100);
          if (0x42c80000 < (int)SStack_2bc.damage_amount) {
            uStack_74 = 1;
            SStack_2bc.damage_amount = 9999.0;
          }
          pCVar10 = (this_ptr->base).base.base.vtable._uc;
          (this_ptr->base).invincibility_timer = 0.0;
          (*(pCVar10->_uc).processDamage)((CCharacter *)this_ptr,&SStack_2bc);
          if (((this_ptr->base).base.hit_points <= 0.0) || (fStack_6c != 0.0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(this_ptr->base).base.model.motion_controller,0x12,1);
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"fall-?.wav");
            iVar21 = (this_ptr->base).base.is_on_ground;
            fStack_2c4 = 0.5f;
            goto joined_r0x00537afc;
          }
          in_stack_fffffd10 = 2.12199579936439e-314;
LAB_00537712:
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.motion_controller,SUB84(in_stack_fffffd10,0),
                     (int)((ulonglong)in_stack_fffffd10 >> 0x20));
        }
        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)this_ptr,(CVector3f *)&DAT_02dd1184,fVar17 * 0.025f + 1.0)
        ;
      }
      iVar21 = (this_ptr->base).base.is_on_ground;
      fStack_2c4 = 0.5f;
    }
    else {
      iVar21 = (this_ptr->base).base.is_on_ground;
      fStack_2c4 = 0.5f;
    }
joined_r0x00537afc:
    0.5f = fStack_2c4;
    if (iVar21 == 0) {
      this_ptr->airborne_timer = this_ptr->airborne_timer + delta_time;
      if (iStack_80 == 3) {
        fStack_2c4 = fStack_2c4 * (float)2;
      }
      if ((fStack_2c4 < this_ptr->airborne_timer) ||
         (this_ptr->fall_velocity_snapshot < (float)-20)) {
        if (iStack_80 != 0xf) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.motion_controller,0xf,1);
        }
        (this_ptr->base).base.is_on_ground = 0;
      }
      goto LAB_00536144;
    }
  }
  else {
    pCVar16 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar19 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                        ((CDemonActor *)this_ptr,&CStack_200,pCVar16);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar19->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar19->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar19->z + (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar16->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  this_ptr->airborne_timer = 0.0;
LAB_00536144:
  (this_ptr->pending_velocity).z = 0.0;
  (this_ptr->pending_velocity).y = (this_ptr->pending_velocity).z;
  (this_ptr->pending_velocity).x = (this_ptr->pending_velocity).y;
  pCVar14 = g_CGame_PTR_005b9354;
  if (iStack_20 != 0) {
    if ((this_ptr->base).player_input.action_state.draw != 0) {
      if (this_ptr->guns_drawn == 0) {
        this_ptr->guns_drawn = 1;
      }
      else {
        this_ptr->guns_drawn = 0;
        if (pCVar14->flashlight_active != 0) {
          pCVar14->flashlight_active = 0;
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"flashlit.wav");
        }
      }
    }
    if ((((this_ptr->base).player_input.action_state.light != 0) &&
        (pCVar9 = (this_ptr->base).inventory.selected_weapon, pCVar9 != (CWeapon *)0x0)) &&
       (pCVar9->can_attach_light != 0)) {
      uVar24 = (uint)(g_CGame_PTR_005b9354->flashlight_active == 0);
      g_CGame_PTR_005b9354->flashlight_active = uVar24;
      if (uVar24 != 0) {
        this_ptr->guns_drawn = 1;
      }
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"flashlit.wav");
    }
  }
  pCVar9 = (this_ptr->base).inventory.selected_weapon;
  if (pCVar9 == (CWeapon *)0x0) {
    g_CGame_PTR_005b9354->flashlight_active = 0;
  }
  else if (pCVar9->can_attach_light == 0) {
    g_CGame_PTR_005b9354->flashlight_active = 0;
  }
  if (local_24 != 0.0) {
    core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_0053f310(this_ptr,delta_time);
  }
  if (this_ptr->guns_drawn == 0) {
    fVar17 = this_ptr->guns_drawn_blend - delta_time / 1.2f;
    this_ptr->guns_drawn_blend = fVar17;
    if (fVar17 < 0.0) {
      this_ptr->guns_drawn_blend = 0.0;
    }
  }
  else {
    fVar17 = delta_time / 1.1f + this_ptr->guns_drawn_blend;
    this_ptr->guns_drawn_blend = fVar17;
    if (1.0 < fVar17) {
      this_ptr->guns_drawn_blend = 1.0;
    }
  }
  fVar17 = (this_ptr->right_arm_aim).recoil_timer - delta_time / 0.2f;
  this_ptr->frame_cleared = 0.0;
  (this_ptr->right_arm_aim).recoil_timer = fVar17;
  if (fVar17 <= 0.0) {
    (this_ptr->right_arm_aim).recoil_timer = 0.0;
  }
  fVar17 = (this_ptr->left_arm_aim).recoil_timer - delta_time / 0.2f;
  (this_ptr->left_arm_aim).recoil_timer = fVar17;
  if (fVar17 <= 0.0) {
    (this_ptr->left_arm_aim).recoil_timer = 0.0;
  }
  if (bVar11) {
    core_stranger_cpp_CStranger_FUN_0053fc60(this_ptr);
  }
  core_stranger_cpp_CStranger_FUN_005384d0(this_ptr);
  if ((((this_ptr->base).aim_mode == AIM_MODE_MANUAL) && (this_ptr->weapon != (CWeapon *)0x0)) &&
     (this_ptr->weapon->weapon_type == 0)) {
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
              (&(this_ptr->base).base.model);
    core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(this_ptr,0);
    core_stranger_cpp_CStranger_aimLeftPistol_FUN_0053e320(this_ptr);
    core_stranger_cpp_CStranger_FUN_005384d0(this_ptr);
  }
  core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_0053ecc0(this_ptr,delta_time,iVar25);
  core_stranger_cpp_CStranger_FUN_005402f0(this_ptr);
  core_charactr_cpp_CCharacter_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  pCVar2 = &(this_ptr->base).base.model;
  fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                     (&pCVar2->motion_controller,6);
  if (fVar17 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004b56f0(&this_ptr->base);
  }
  else {
    fVar17 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                       (&pCVar2->motion_controller);
    if ((1.0 < fVar17) &&
       (pCVar20 = (CBoxActor *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (&((this_ptr->base).pushed_object)->base,
                             g_CBoxActorActorType_00764800.name_hash), pCVar20 != (CBoxActor *)0x0))
    {
      core_stranger_cpp_CStranger_FUN_00538440(this_ptr,&CStack_17c.x);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)this_ptr,(CVector3f *)auStack_110,&CStack_17c);
      CStack_1dc.y = 0.0;
      CStack_1dc.x = (float)auStack_110._0_4_ - CStack_194.x;
      CStack_1dc.z = (float)auStack_110._8_4_ - CStack_194.z;
      pCVar16 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                          ((CDemonActor *)this_ptr,&CStack_1e8,&CStack_1dc);
      if (0.0 < pCVar16->z) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_0041ef90(pCVar20,&CStack_194,&CStack_1dc);
      }
    }
  }
  core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(this_ptr,0);
  core_stranger_cpp_CStranger_autoAimAtThreat_FUN_0053d910(this_ptr,0,delta_time);
  core_stranger_cpp_CStranger_autoAimAtThreat_FUN_0053d910(this_ptr,1,delta_time);
  core_stranger_cpp_CStranger_FUN_0053ffe0(this_ptr,delta_time);
  core_inv_cpp_CInventory_updateInventory_FUN_004c1850(&(this_ptr->base).inventory);
  core_stranger_cpp_CStranger_processWeaponTick_FUN_00540660(this_ptr,delta_time);
  if ((this_ptr->weapon != (CWeapon *)0x0) && ((this_ptr->weapon->base).is_transparent != 0)) {
    (this_ptr->base).base.base.is_transparent = 1;
  }
  iVar25 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->goggle_sfx_handles[0]);
  if (iVar25 == 0) {
    if (g_CGame_PTR_005b9354->goggles_active != 0) {
      sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->goggle_sfx_handles[1]);
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_00526270(1);
      uVar24 = sound_sndmain_cpp_startSfx_FUN_005265a0("goggle-on.wav");
      this_ptr->goggle_sfx_handles[1] = uVar24;
      sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(0.0);
      uVar24 = sound_sndmain_cpp_startSfx_FUN_005265a0("goggle-loop.wav");
      this_ptr->goggle_sfx_handles[0] = uVar24;
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
      sound_sndmain_cpp_setSfxFade_FUN_00527260(this_ptr->goggle_sfx_handles[0],1.0,1.0,0);
      return;
    }
  }
  else if (g_CGame_PTR_005b9354->goggles_active == 0) {
    sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->goggle_sfx_handles[1]);
    sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->goggle_sfx_handles[0]);
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxFlagBits_FUN_00526270(1);
    sound_sndmain_cpp_startSfx_FUN_005265a0("goggle-off.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    return;
  }
  return;
}
