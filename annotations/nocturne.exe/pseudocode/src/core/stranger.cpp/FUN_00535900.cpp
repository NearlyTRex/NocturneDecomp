// Name: core_stranger.cpp_FUN_00535900
// Address: 00535900
// Address Range: [[00535900, 00537ccd]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_00535900(CStranger *param_1,float param_2)

#include "nocturne.h"

void core_stranger_cpp_FUN_00535900(CStranger *param_1,float param_2)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  float *pfVar19;
  CBoxActor *pCVar20;
  CDemonActor *pCVar21;
  float fVar22;
  int iVar23;
  float fVar24;
  uint uVar25;
  int iVar26;
  UOrientationVector *pUVar27;
  double in_stack_fffffd10;
  uint uVar28;
  double dVar29;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  byte auStack_2bc [4];
  CMotionController *pCStack_2b8;
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
  float fStack_200;
  float fStack_1fc;
  CVector3f CStack_1f4;
  byte auStack_1e8 [12];
  CVector3f CStack_1dc;
  byte auStack_1c8 [4];
  CVector3f aCStack_1c4 [2];
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  CVector3f CStack_1a0;
  CVector3f aCStack_194 [2];
  CVector3f CStack_17c;
  float fStack_168;
  uint uStack_164;
  float fStack_160;
  byte auStack_15c [8];
  float fStack_154;
  CVector3f aCStack_14c [2];
  UOrientationVector UStack_12c;
  CVector3f CStack_120;
  CVector3f CStack_110;
  CVector3f CStack_104;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  byte auStack_e0 [12];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  CVector3f CStack_c8;
  CVector3f CStack_b4;
  UOrientationVector UStack_a8;
  byte auStack_98 [8];
  CVector3f CStack_90;
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
  CDeformableModelInstance *pCStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  CDeformableModelInstance *pCStack_34;
  CMotionController *pCStack_30;
  CMotionController *pCStack_28;
  float local_24;
  int iStack_20;
  int iStack_1c;
  CCharacter *pCStack_18;
  CDeformableModelInstance *pCStack_14;
  
  local_24 = (float)core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                              (0x01C03A10,"DebugActionPending");
  pCVar21 = (param_1->base).base.carry_hands[1].carry_actor;
  if ((pCVar21 != (CDemonActor *)0x0) && ((param_1->carry_object_bbox).max.x < -999999.0f)) {
    pCVar15 = (*((pCVar21->vtable)._ub)->getBoundingBox)
                        (pCVar21,(CBoundingBox3D *)(auStack_260 + 0x10));
    if (&param_1->carry_object_bbox != pCVar15) {
      (param_1->carry_object_bbox).min.x = (pCVar15->min).x;
      (param_1->carry_object_bbox).min.y = (pCVar15->min).y;
      (param_1->carry_object_bbox).min.z = (pCVar15->min).z;
    }
    pCVar16 = &(param_1->carry_object_bbox).max;
    if (pCVar16 != &pCVar15->max) {
      pCVar16->x = (pCVar15->max).x;
      (param_1->carry_object_bbox).max.y = (pCVar15->max).y;
      (param_1->carry_object_bbox).max.z = (pCVar15->max).z;
    }
    fStack_218 = (param_1->carry_object_bbox).min.x + (param_1->carry_object_bbox).max.x;
    fStack_214 = (param_1->carry_object_bbox).min.y + (param_1->carry_object_bbox).max.y;
    CStack_1a0.x = fStack_218 * 0.5f;
    fStack_210 = (param_1->carry_object_bbox).min.z + (param_1->carry_object_bbox).max.z;
    CStack_1a0.y = fStack_214 * 0.5f;
    CStack_1a0.z = fStack_210 * 0.5f;
    pCVar16 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                        ((param_1->base).base.carry_hands[1].carry_actor,aCStack_1c4,&CStack_1a0);
    pCVar16 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        ((CDemonActor *)param_1,&CStack_1f4,pCVar16);
    if (&param_1->carry_object_world_center != pCVar16) {
      (param_1->carry_object_world_center).x = pCVar16->x;
      (param_1->carry_object_world_center).y = pCVar16->y;
      (param_1->carry_object_world_center).z = pCVar16->z;
    }
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042abd0((CCharacter *)param_1,param_2);
  core_game_cpp_CGame_slamDT_FUN_004a5f00(0x01C775EC,param_2);
  fVar17 = (param_1->base).invincibility_timer - param_2;
  (param_1->base).invincibility_timer = fVar17;
  if (fVar17 < 0.0) {
    (param_1->base).invincibility_timer = 0.0;
  }
  fVar17 = param_1->action_timer - param_2;
  param_1->action_timer = fVar17;
  if (fVar17 < 0.0) {
    param_1->action_timer = 0.0;
  }
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.model.accumulated_root_motion.x =
       (param_1->base).base.model.accumulated_root_motion.y;
  pCVar16 = (CVector3f *)core_stranger_cpp_FUN_00538440(param_1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)param_1,aCStack_194,pCVar16);
  core_stranger_cpp_CStranger_processMotionEvents_FUN_00537cd0(param_1,param_2);
  iStack_20 = 1;
  pCStack_28 = (CMotionController *)0x1;
  local_24 = 1.4013e-45;
  bVar11 = true;
  iVar26 = 1;
  if ((param_1->base).base.grabbed_by != (CDemonActor *)0x0) {
    bVar11 = false;
    iVar26 = 0;
    iStack_20 = 0;
    local_24 = 0.0;
    pCStack_28 = (CMotionController *)0x0;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"grabbedBy=%s\n");
    }
  }
  if ((param_1->base).pushed_object != (CBoxActor *)0x0) {
    bVar11 = false;
    iVar26 = 0;
    iStack_20 = 0;
    local_24 = 0.0;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"pushedObject=%s\n");
    }
  }
  if (((param_1->base).ladder_to_climb != (CLadder *)0x0) ||
     (param_1->ladder_to_descend != (CLadder *)0x0)) {
    bVar11 = false;
    iVar26 = 0;
    pCStack_28 = (CMotionController *)0x0;
    local_24 = 0.0;
    iStack_20 = 0;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350);
    }
  }
  if (((param_1->base).object_to_pick_up != (CDemonActor *)0x0) || (param_1->action_pending == 4)) {
    bVar11 = false;
    iVar26 = 0;
    iStack_20 = 0;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350);
    }
  }
  pCStack_54 = &(param_1->base).base.model;
  fVar17 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(pCStack_54);
  if ((((0.0 < fVar17) ||
       (fVar17 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                  (pCStack_54), 0.0 < fVar17)) ||
      (fVar17 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                 (pCStack_54), 0.0 < fVar17)) ||
     ((param_1->base).base.hit_points <= 0.0)) {
    bVar11 = false;
    iVar26 = 0;
    local_24 = 0.0;
    iStack_20 = 0;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350);
    }
  }
  pCStack_14 = &(param_1->base).base.model;
  fVar17 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(pCStack_14);
  if (((0.0 < fVar17) ||
      (fVar17 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                 (pCStack_14), 0.0 < fVar17)) ||
     ((fVar17 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                 (pCStack_14), 0.0 < fVar17 ||
      ((param_1->action_pending == 5 || ((param_1->base).door_to_open != (CDoor *)0x0)))))) {
    bVar11 = false;
    iVar26 = 0;
    iStack_20 = 0;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350);
    }
  }
  fVar17 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                            (&(param_1->base).base.model);
  if (0.0 < fVar17) {
    bVar11 = false;
    iVar26 = 0;
    local_24 = 0.0;
    pCStack_28 = (CMotionController *)0x0;
    iStack_20 = 0;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350);
    }
  }
  if (param_1->action_pending == 1) {
    iVar26 = 0;
    bVar11 = false;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350);
    }
  }
  if (param_1->action_pending == 2) {
    iVar26 = 0;
    bVar11 = false;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350);
    }
  }
  if (param_1->action_pending == 6) {
    iVar26 = 0;
    bVar11 = false;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350);
    }
  }
  if (param_1->action_pending == 3) {
    iVar26 = 0;
    bVar11 = false;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350);
    }
  }
  if (param_1->action_pending == 7) {
    iVar26 = 0;
    bVar11 = false;
    if (iStack_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350);
    }
  }
  if ((param_1->base).base.grabbed_by == (CDemonActor *)0x0) {
    if ((param_1->base).base.base.standing_platform != (CPlatform *)0x0) {
      pCStack_28 = (CMotionController *)0x1;
    }
    if ((param_1->base).base.base.location.position.y !=
        (param_1->base).base.closest_distance_threshold) {
      pCStack_28 = (CMotionController *)0x1;
    }
  }
  fVar17 = (float)12.566370614;
  pCStack_64 = &(param_1->base).base.model.motion_controller;
  (param_1->base).base.walk_step_speed = (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.turn_speed = param_2 * fVar17;
  pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(pCStack_64);
  if ((pSVar18->state_index == 4) ||
     (pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(pCStack_64),
     pSVar18->state_index == 5)) {
    (param_1->base).base.model.accumulated_root_motion.x =
         (param_1->base).base.model.accumulated_root_motion.x * (float)2;
  }
  if ((param_1->base).nearby_interactive_actor == (CDemonActor *)0x0) {
    fVar17 = param_1->interact_blend - param_2 * (float)2;
    param_1->interact_blend = fVar17;
    if (fVar17 < 0.0) {
      param_1->interact_blend = 0.0;
    }
  }
  else {
    fVar17 = param_2 * (float)2 + param_1->interact_blend;
    param_1->interact_blend = fVar17;
    if (1.0 < fVar17) {
      param_1->interact_blend = 1.0;
    }
  }
  iStack_60 = 1;
  if ((param_1->base).ladder_to_climb == (CLadder *)0x0) {
    if (param_1->ladder_to_descend == (CLadder *)0x0) {
      pCVar21 = (param_1->base).nearby_interactive_actor;
      if (pCVar21 == (CDemonActor *)0x0) {
        pCVar21 = (param_1->base).base.grabbed_by;
        if (pCVar21 == (CDemonActor *)0x0) {
          if ((param_1->base).pushed_object == (CBoxActor *)0x0) {
            iVar23 = core_charactr_cpp_FUN_00428c00(param_1);
            pCVar2 = &(param_1->base).base.model;
            if (iVar23 == 0) {
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
                  if ((param_1->base).base.is_on_ground != 0) {
                    pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                                        (&(param_1->base).base.model.motion_controller);
                    iStack_58 = pSVar18->state_index;
                    iStack_7c = 0;
                    if ((param_1->base).player_input.action_state.walk == 0) {
                      if ((param_1->base).player_input.action_state.backup == 0) {
                        fVar17 = (param_1->base).player_input.strafe_speed;
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
                    else if ((param_1->base).player_input.action_state.run == 0) {
                      iStack_7c = 1;
                    }
                    else {
                      iStack_7c = 3;
                    }
                    pCVar2 = &(param_1->base).base.model;
                    fVar17 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                              (pCVar2);
                    pCStack_84 = (CCharacter_full_vtable *)(fVar17 * 2.5f);
                    fVar17 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                              (pCVar2);
                    fVar13 = fVar17 * 3.5f + (float)pCStack_84;
                    fVar24 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                              (pCVar2);
                    fVar24 = fVar24 * 1.5f;
                    fVar17 = (param_1->base).player_input.strafe_speed;
                    fVar12 = (param_1->base).player_input.turn_speed *
                             (param_1->base).base.turn_speed;
                    iVar23 = (param_1->base).player_input.action_state.jump;
                    (param_1->base).base.turn_angle_accumulator = fVar12;
                    fVar22 = (param_1->base).base.turn_angle_accumulator;
                    fVar4 = (param_1->base).base.turn_angle_accumulator;
                    fVar5 = (param_1->right_arm_aim).aim_yaw;
                    fVar6 = (param_1->left_arm_aim).aim_yaw;
                    fVar7 = (param_1->right_arm_aim).target_yaw;
                    fVar8 = (param_1->left_arm_aim).target_yaw;
                    param_1->turn_angle = param_1->turn_angle - fVar12;
                    (param_1->right_arm_aim).aim_yaw = fVar5 - fVar12;
                    (param_1->left_arm_aim).aim_yaw = fVar6 - fVar22;
                    (param_1->right_arm_aim).target_yaw = fVar7 - fVar22;
                    fVar22 = (param_1->base).base.position_delta.x;
                    (param_1->left_arm_aim).target_yaw = fVar8 - fVar4;
                    (param_1->base).base.position_delta.x =
                         fVar17 * param_2 * (fVar24 + fVar13) + fVar22;
                    if ((iVar23 != 0) && ((param_1->base).base.layer_action_index != 0xe)) {
                      switch(iStack_58) {
                      case 0:
                      case 2:
                      case 4:
                      case 5:
                        (param_1->base).base.is_on_ground = 0;
                        iStack_7c = 0xb;
                        break;
                      case 1:
                        (param_1->base).base.is_on_ground = 0;
                        iStack_7c = 0xb;
                        break;
                      case 3:
                        (param_1->base).base.is_on_ground = 0;
                        iStack_7c = 7;
                      }
                    }
                    if (iStack_7c != iStack_58) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                                (&(param_1->base).base.model.motion_controller,iStack_7c,1);
                    }
                    if ((param_1->base).player_input.action_state.use_item != 0) {
                      core_hero_cpp_FUN_004b5b00();
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
                  (param_1->base).base.is_on_ground = 0;
                }
              }
            }
            else {
              uVar25 = (param_1->base).base.is_walking;
              if (uVar25 < 2) {
                if (uVar25 == 1) {
                  iVar23 = 1;
                }
                else {
                  iVar23 = 0;
                }
LAB_0053713f:
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&(param_1->base).base.model.motion_controller,iVar23,1);
              }
              else {
                if (uVar25 < 3) {
                  iVar23 = 3;
                  goto LAB_0053713f;
                }
                if (uVar25 != 3) {
                  iVar23 = 0;
                  goto LAB_0053713f;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&pCVar2->motion_controller,0,1);
                engine_console_cpp_CConsole_printf_FUN_0043ac60
                          (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n");
              }
              (param_1->base).base.model.accumulated_root_motion.z = 0.0;
              (param_1->base).base.model.accumulated_root_motion.y =
                   (param_1->base).base.model.accumulated_root_motion.z;
              (param_1->base).base.model.accumulated_root_motion.x =
                   (param_1->base).base.model.accumulated_root_motion.y;
            }
          }
          else {
            pCStack_78 = pCVar21;
            if ((param_1->base).player_input.action_state.fire != 0) {
              pCVar20 = (param_1->base).pushed_object;
              (*((pCVar20->base).vtable._ub)->getBoundingBox)
                        (&pCVar20->base,(CBoundingBox3D *)auStack_260);
              fStack_204 = (float)auStack_260._8_4_ + fStack_24c;
              fStack_200 = (float)auStack_260._12_4_ + fStack_248;
              auStack_15c._0_4_ = fStack_204 * 0.5f;
              auStack_15c._4_4_ = fStack_200 * 0.5f;
              fStack_1fc = (float)auStack_260._16_4_ + fStack_244;
              fStack_154 = fStack_1fc * 0.5f;
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                        (&((param_1->base).pushed_object)->base,&CStack_120,(CVector3f *)auStack_15c
                        );
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        ((CDemonActor *)param_1,&CStack_b4,&CStack_120);
              iVar23 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(auStack_1c8)
              ;
              in_stack_fffffd10 = __BITCAST_DOUBLE(CONCAT44(*(uint *)(iVar23 + 4),0x536fc1));
              pCStack_2b8 = (CMotionController *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
              fStack_f0 = fStack_24c - (float)auStack_260._8_4_;
              fStack_e8 = fStack_244 - (float)auStack_260._16_4_;
              fStack_168 = fStack_f0 * 0.5f;
              fStack_160 = fStack_e8 * 0.5f;
              uStack_164 = 0;
              fStack_ec = fStack_248 - (float)auStack_260._12_4_;
              if ((((CStack_b4.z - SQRT(fStack_160 * fStack_160 + fStack_168 * fStack_168) <
                     (float)3) && (1.0 < CStack_b4.y)) &&
                  (CStack_b4.y < (float)5)) &&
                 (ABS((float)pCStack_2b8) < (float)0.78539816337500001)) {
                pCStack_30 = (CMotionController *)(param_2 * (float)3.1415926535000001);
                if ((float)pCStack_2b8 < -(float)pCStack_30) {
                  pCStack_2b8 = (CMotionController *)-(float)pCStack_30;
                }
                if ((float)pCStack_30 < (float)pCStack_2b8) {
                  pCStack_2b8 = pCStack_30;
                }
                pUVar27 = &(param_1->base).base.base.orient;
                in_stack_fffffd10 = __BITCAST_DOUBLE(CONCAT44(pUVar27,param_1));
                (param_1->base).base.base.orient.vec.y =
                     (param_1->base).base.base.orient.vec.y + (float)pCStack_2b8;
                core_charactr_cpp_CCharacter_setOrientation_FUN_0042a060
                          ((CCharacter *)param_1,pUVar27);
                goto switchD_005371ce_caseD_6;
              }
            }
            if (pCStack_78 == (CDemonActor *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(param_1->base).base.model.motion_controller,0,1);
              core_hero_cpp_CHero_stopPushingBox_FUN_004b56f0(&param_1->base);
            }
          }
        }
        else {
          if ((param_1->base).base.grabbed_type == 0) {
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                      ((CDemonActor *)param_1,(CVector3f *)(auStack_15c + 4),
                       &(pCVar21->location).position);
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(auStack_e0);
            fStack_2d0 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
            if (fStack_2d0 < (float)-1.57079632675) {
              fStack_2d0 = fStack_2d0 + 3.141593f;
            }
            if ((float)1.57079632675 < fStack_2d0) {
              fStack_2d0 = fStack_2d0 + -3.141593f;
            }
            fStack_4c = param_2 * (float)3.1415926535000001;
            fStack_6c = -fStack_4c;
            if (fStack_2d0 < fStack_6c) {
              fStack_2d0 = fStack_6c;
            }
            if (fStack_4c < fStack_2d0) {
              fStack_2d0 = fStack_4c;
            }
            (param_1->base).base.base.orient.vec.y =
                 (param_1->base).base.base.orient.vec.y + fStack_2d0;
            core_charactr_cpp_CCharacter_setOrientation_FUN_0042a060
                      ((CCharacter *)param_1,&(param_1->base).base.base.orient);
          }
          pCStack_18 = (CCharacter *)(param_1->base).base.grabbed_by;
          pCStack_84 = (pCStack_18->base).vtable._uc;
          pCStack_34 = &(param_1->base).base.model;
          core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                    (pCStack_34,aCStack_14c,0);
          pCVar21 = (*(pCStack_84->_uc).getGrabber)(pCStack_18);
          uVar28 = (uint)((ulonglong)in_stack_fffffd10 >> 0x20);
          if (pCVar21 == (CDemonActor *)0x0) {
            (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
          }
          else if ((param_1->base).base.grabbed_by != (CDemonActor *)0x0) {
            fVar17 = param_1->grab_timer + param_2;
            param_1->grab_timer = fVar17;
            if ((1.5f <= fVar17) && ((param_1->base).base.grabbed_type != 1)) {
              fVar17 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0();
              in_stack_fffffd10 = __BITCAST_DOUBLE(CONCAT44(uVar28,0x23));
              fVar22 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0();
              uVar28 = (uint)((ulonglong)in_stack_fffffd10 >> 0x20);
              if (fVar22 + fVar17 <= 0.0) {
                in_stack_fffffd10 = __BITCAST_DOUBLE(CONCAT44(uVar28,param_1));
                (*((param_1->base).base.base.vtable._ub)->archive)((CDemonActor *)param_1);
              }
              else if ((param_1->base).player_input.action_state.fire != 0) {
                in_stack_fffffd10 = __BITCAST_DOUBLE(CONCAT44(uVar28,1));
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(pCStack_30,0x23,1);
                (param_1->base).player_input.action_state.fire = 0;
              }
            }
            goto switchD_005371ce_caseD_6;
          }
          in_stack_fffffd10 = __BITCAST_DOUBLE(CONCAT44(uVar28,1));
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,0,1);
        }
      }
      else {
        (*((pCVar21->vtable)._ub)->getInteractionInfo)(pCVar21,&SStack_280);
        if ((SStack_280.approach_offset == 0.0) || (param_1 != (CStranger *)SStack_280.distance_max)
           ) {
          in_stack_fffffd10 = __BITCAST_DOUBLE(CONCAT44(param_1,0x536e0d));
          core_hero_cpp_CHero_stopNearbyInteraction_FUN_004b5920(&param_1->base);
        }
        else {
          pCVar21 = ((CHero *)SStack_280.distance_max)->nearby_interactive_actor;
          UStack_a8.vec.x = (pCVar21->orient).vec.x;
          UStack_a8.vec.y = (pCVar21->orient).vec.y;
          UStack_a8.vec.z = (pCVar21->orient).vec.z;
          pCStack_28 = (CMotionController *)
                       ((param_1->base).player_input.turn_speed * (float)3.1415926535000001 *
                        (float)0.5 * param_2);
          if ((float)pCStack_28 < SStack_280.pitch_min) {
            pCStack_28 = (CMotionController *)SStack_280.pitch_min;
          }
          if (SStack_280.pitch_max < (float)pCStack_28) {
            pCStack_28 = (CMotionController *)SStack_280.pitch_max;
          }
          UStack_a8.vec.y = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
          local_24 = (param_1->base).player_input.look_up_down_speed * (float)3.1415926535000001 *
                     (float)0.5 * param_2;
          if (local_24 < (float)auStack_260._4_4_) {
            local_24 = (float)auStack_260._4_4_;
          }
          if ((float)auStack_260._0_4_ < local_24) {
            local_24 = (float)auStack_260._0_4_;
          }
          UStack_a8.vec.x = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
          pUVar27 = &UStack_a8;
          pCVar21 = (param_1->base).nearby_interactive_actor;
          iVar23 = (*((pCVar21->vtable)._ub)->updateInteraction)
                             (pCVar21,pUVar27,&(param_1->base).player_input);
          pCStack_28 = &(param_1->base).base.model.motion_controller;
          if (iVar23 == 0) {
            in_stack_fffffd10 = __BITCAST_DOUBLE(CONCAT44(0x536e4f,pUVar27));
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(pCStack_28,0,1);
            core_hero_cpp_CHero_stopNearbyInteraction_FUN_004b5920(&param_1->base);
          }
          else {
            param_2 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                       ((((param_1->base).nearby_interactive_actor)->orient).vec.y -
                                        (param_1->base).base.base.orient.vec.y);
            if ((float)-0.01 <= param_2) {
              if ((double)param_2 <= 0.01) {
                iVar23 = 0;
              }
              else {
                iVar23 = 4;
              }
            }
            else {
              iVar23 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(pCStack_28,iVar23,1);
            UStack_12c.vec.x = (param_1->base).base.base.orient.vec.x;
            UStack_12c.vec.z = (param_1->base).base.base.orient.vec.z;
            UStack_12c.vec.y =
                 param_2 * param_1->interact_blend + (param_1->base).base.base.orient.vec.y;
            core_charactr_cpp_CCharacter_setOrientation_FUN_0042a060
                      ((CCharacter *)param_1,&UStack_12c);
            CStack_90.x = 0.0;
            CStack_90.z = SStack_280.pitch_min + (float)-1;
            CStack_90.y = 0.0;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                      ((param_1->base).nearby_interactive_actor,&CStack_120,&CStack_90);
            CStack_110.z = CStack_120.x - (param_1->base).base.base.location.position.x;
            CStack_104.x = CStack_120.y - (param_1->base).base.base.location.position.y;
            CStack_104.y = CStack_120.z - (param_1->base).base.base.location.position.z;
            pCStack_30 = (CMotionController *)&param_1->interact_blend;
            in_stack_fffffd10 = __BITCAST_DOUBLE(CONCAT44(0x536d9d,pUVar27));
            pfVar19 = (float *)core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                                         (param_1,&fStack_1a4,&CStack_110.z);
            fStack_210 = *pfVar19 * (float)pCStack_30->motion_list_ptr;
            fStack_20c = pfVar19[1] * (float)pCStack_30->motion_list_ptr;
            fStack_208 = pfVar19[2] * (float)pCStack_30->motion_list_ptr;
            pCVar16 = &(param_1->base).base.model.accumulated_root_motion;
            if (pCVar16 != (CVector3f *)&fStack_210) {
              pCVar16->x = fStack_210;
              (param_1->base).base.model.accumulated_root_motion.y = fStack_20c;
              (param_1->base).base.model.accumulated_root_motion.z = fStack_208;
            }
            (param_1->base).base.model.accumulated_root_motion.y = 0.0;
          }
        }
      }
    }
    else {
      fVar17 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                (&(param_1->base).base.model);
      if (0.0 < fVar17) {
        if ((param_1->base).base.base.location.position.y <
            (param_1->ladder_to_descend->base).location.position.y + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,0,1);
        }
      }
      else {
        param_1->ladder_to_descend = (CLadder *)0x0;
      }
      if (0.0 < param_1->ladder_blend_time) {
        if (param_1->ladder_blend_time <= param_2) {
          param_1->ladder_blend_time = 0.0;
          fStack_2cc = 1.0;
        }
        else {
          fStack_2cc = param_2 / param_1->ladder_blend_time;
          param_1->ladder_blend_time = param_1->ladder_blend_time - param_2;
        }
        pCVar16 = &param_1->ladder_offset;
        fStack_ec = pCVar16->x * fStack_2cc;
        fStack_e8 = (param_1->ladder_offset).y * fStack_2cc;
        fStack_e4 = (param_1->ladder_offset).z * fStack_2cc;
        pCVar1 = &(param_1->base).base.base.location;
        fStack_50 = 1.0 - fStack_2cc;
        fVar17 = (param_1->base).base.base.location.position.y;
        (pCVar1->position).x = (pCVar1->position).x + fStack_ec;
        fVar22 = (param_1->base).base.base.location.position.z;
        (param_1->base).base.base.location.position.y = fVar17 + fStack_e8;
        (param_1->base).base.base.location.position.z = fVar22 + fStack_e4;
        pCVar16->x = pCVar16->x * fStack_50;
        (param_1->ladder_offset).y = (param_1->ladder_offset).y * fStack_50;
        (param_1->ladder_offset).z = (param_1->ladder_offset).z * fStack_50;
        fVar17 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
        (param_1->base).base.turn_angle_accumulator = fVar17 * fStack_2cc;
      }
      fVar17 = (*((param_1->base).base.base.vtable._ub)->cylinderGroundCheck)
                         ((CDemonActor *)param_1,(param_1->base).base.collision_cylinder_height,
                          (CVector3f *)0x0);
      (param_1->base).base.closest_distance_threshold = fVar17;
    }
  }
  else {
    fVar17 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                              (&(param_1->base).base.model);
    if (0.0 < fVar17) {
      pCVar16 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                          (&((param_1->base).ladder_to_climb)->base,&CStack_c8,
                           &((param_1->base).ladder_to_climb)->ladder_size);
      if (pCVar16->y + (float)-4 < (param_1->base).base.base.location.position.y) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,0,1);
      }
    }
    else {
      (param_1->base).ladder_to_climb = (CLadder *)0x0;
    }
    if (0.0 < param_1->ladder_blend_time) {
      if (param_1->ladder_blend_time <= param_2) {
        param_1->ladder_blend_time = 0.0;
        fStack_2c8 = 1.0;
      }
      else {
        fStack_2c8 = param_2 / param_1->ladder_blend_time;
        param_1->ladder_blend_time = param_1->ladder_blend_time - param_2;
      }
      pCVar16 = &param_1->ladder_offset;
      fStack_1ac = pCVar16->x * fStack_2c8;
      fStack_1a8 = (param_1->ladder_offset).y * fStack_2c8;
      fStack_1a4 = (param_1->ladder_offset).z * fStack_2c8;
      pCVar1 = &(param_1->base).base.base.location;
      fStack_40 = 1.0 - fStack_2c8;
      fVar17 = (param_1->base).base.base.location.position.y;
      (pCVar1->position).x = (pCVar1->position).x + fStack_1ac;
      fVar22 = (param_1->base).base.base.location.position.z;
      (param_1->base).base.base.location.position.y = fVar17 + fStack_1a8;
      (param_1->base).base.base.location.position.z = fVar22 + fStack_1a4;
      pCVar16->x = pCVar16->x * fStack_40;
      (param_1->ladder_offset).y = (param_1->ladder_offset).y * fStack_40;
      (param_1->ladder_offset).z = (param_1->ladder_offset).z * fStack_40;
      fVar17 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
      (param_1->base).base.turn_angle_accumulator = fVar17 * fStack_2c8;
    }
  }
switchD_005371ce_caseD_6:
  pCStack_68 = &(param_1->base).base.model.motion_controller;
  pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(pCStack_68);
  if ((pSVar18->state_index == 0x1b) &&
     (pCStack_70 = (CAmmoBox *)
                   core_actor_cpp_castToClassHash_FUN_0040d890
                             ((param_1->base).object_to_pick_up,
                              g_CAmmoBoxActorType_007641f8.name_hash), pCStack_70 != (CAmmoBox *)0x0
     )) {
    fVar17 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60(pCStack_68);
    core_ammobox_cpp_CAmmoBox_openBox_FUN_0040f130(pCStack_70,fVar17);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  core_stranger_cpp_CStranger_updateTurnBlending_FUN_005397b0(param_1,param_2);
  if (iStack_60 != 0) {
    (param_1->pending_velocity).z = 0.0;
    (param_1->pending_velocity).y = (param_1->pending_velocity).z;
    (param_1->pending_velocity).x = (param_1->pending_velocity).y;
  }
  if (((param_1->base).ladder_to_climb == (CLadder *)0x0) &&
     (param_1->ladder_to_descend == (CLadder *)0x0)) {
    if (pCStack_28 == (CMotionController *)0x0) goto LAB_00536144;
    pCStack_5c = &(param_1->base).base.model.motion_controller;
    pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(pCStack_5c);
    pCVar16 = &(param_1->base).base.model.accumulated_root_motion;
    pCVar3 = &(param_1->base).base.position_delta;
    CStack_104.x = pCVar16->x + pCVar3->x;
    iStack_80 = pSVar18->state_index;
    CStack_104.y = (param_1->base).base.model.accumulated_root_motion.y +
                   (param_1->base).base.position_delta.y;
    fStack_48 = 18.0f * param_2;
    CStack_104.z = (param_1->base).base.model.accumulated_root_motion.z +
                   (param_1->base).base.position_delta.z;
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    fVar17 = (param_1->base).base.model.accumulated_root_motion.z;
    (param_1->base).base.model.accumulated_root_motion.y = fVar17;
    pCVar16->x = fVar17;
    (param_1->base).base.position_delta.z = 0.0;
    (param_1->base).base.position_delta.y = (param_1->base).base.position_delta.z;
    pCVar3->x = (param_1->base).base.position_delta.y;
    if (iStack_80 == 7) {
      CStack_104.x = 0.0;
      CStack_104.y = 0.0;
      param_1->jump_speed = 18.0f;
      param_1->airborne_timer = 0.0;
      CStack_104.z = fStack_48;
    }
    else {
      if (iStack_80 == 8) {
        fVar22 = (float)32;
        fVar17 = (param_1->base).base.velocity.y;
        param_1->jump_speed = 18.0f;
        fVar17 = fVar17 - param_2 * fVar22;
        param_1->airborne_timer = 0.0;
        CStack_104.z = fStack_48;
        goto LAB_00537584;
      }
      if (iStack_80 == 9) {
        fVar4 = (float)32;
        fVar22 = 0.5f * 18.0f;
        CStack_104.x = 0.0;
        CStack_104.y = 0.0;
        CStack_104.z = param_1->jump_speed * param_2;
        param_1->airborne_timer = 0.0;
        fVar17 = (param_1->base).base.velocity.y;
        param_1->jump_speed = param_1->jump_speed - fVar22 * param_2;
        fVar22 = param_1->jump_speed;
        (param_1->base).base.velocity.y = fVar17 - param_2 * fVar4;
        if (fVar22 < 0.0) {
          param_1->jump_speed = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(pCStack_5c,0xf,1);
        }
      }
      else if (iStack_80 == 10) {
        CStack_104.y = 0.0;
        CStack_104.x = 0.0;
        CStack_104.z = fStack_48;
      }
      else if (iStack_80 == 0xb) {
        param_1->airborne_timer = 0.0;
        param_1->jump_speed = 10.0f;
      }
      else if (iStack_80 == 0xc) {
        CStack_104.z = 10.0f * param_2;
        fVar22 = (float)32;
        fVar17 = (param_1->base).base.velocity.y;
        param_1->jump_speed = 10.0f;
        fVar17 = fVar17 - param_2 * fVar22;
        param_1->airborne_timer = 0.0;
LAB_00537584:
        CStack_104.y = 0.0;
        CStack_104.x = 0.0;
LAB_00537586:
        (param_1->base).base.velocity.y = fVar17;
      }
      else if (iStack_80 == 0xd) {
        fVar4 = (float)32;
        CStack_104.x = 0.0;
        CStack_104.y = 0.0;
        fVar22 = 0.5f * 10.0f;
        CStack_104.z = param_1->jump_speed * param_2;
        param_1->airborne_timer = 0.0;
        fVar17 = (param_1->base).base.velocity.y;
        param_1->jump_speed = param_1->jump_speed - fVar22 * param_2;
        fVar22 = param_1->jump_speed;
        (param_1->base).base.velocity.y = fVar17 - param_2 * fVar4;
        if (fVar22 < 0.0) {
          param_1->jump_speed = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(pCStack_5c,0xf,1);
        }
      }
      else {
        if (iStack_80 != 0xe) {
          if (iStack_80 == 0xf) {
            CStack_104.z = 0.0;
            fVar17 = (param_1->base).base.velocity.y - param_2 * (float)32;
            param_1->airborne_timer = 9999.9;
            goto LAB_00537584;
          }
          if (iStack_80 == 0x10) {
            CStack_104.z = 0.0;
            CStack_104.y = 0.0;
            CStack_104.x = 0.0;
            fVar17 = (param_1->base).base.velocity.y - param_2 * (float)32;
          }
          else {
            fVar17 = (param_1->base).base.velocity.y - param_2 * (float)32;
          }
          goto LAB_00537586;
        }
        CStack_104.y = 0.0;
      }
    }
    pfVar19 = (float *)core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                                 (param_1,auStack_98);
    fStack_230 = (param_1->base).base.velocity.x * param_2;
    fStack_22c = (param_1->base).base.velocity.y * param_2;
    fStack_228 = param_2 * (param_1->base).base.velocity.z;
    fStack_d4 = fStack_230 + *pfVar19;
    fStack_d0 = fStack_22c + pfVar19[1];
    CStack_104.x = CStack_104.x + fStack_d4;
    fStack_cc = fStack_228 + pfVar19[2];
    CStack_104.y = CStack_104.y + fStack_d0;
    CStack_104.z = CStack_104.z + fStack_cc;
    param_1->fall_velocity_snapshot = (param_1->base).base.velocity.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&CStack_104);
    if ((param_1->base).base.base.location.position.y <
        (param_1->base).base.closest_distance_threshold + (float)0.10000000000000001) {
      (param_1->base).base.is_on_ground = 1;
    }
    if (((iStack_80 == 0xf) || (iStack_80 == 9)) || (iStack_80 == 0xd)) {
      if ((param_1->base).base.is_on_ground != 0) {
        xxx_unk_c_FUN_004940d0();
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"Splat at %3.2f fps\n",
                   (double)(param_1->base).base.velocity.y);
        fVar17 = -param_1->fall_velocity_snapshot;
        dVar29 = (double)fVar17;
        if (fVar17 < (float)20) {
          if (((iStack_80 == 0xd) || (iStack_80 == 9)) || (iStack_80 == 0xf)) goto LAB_00537712;
        }
        else {
          uStack_74 = 0;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)auStack_2bc);
          pCStack_2b8 = (CMotionController *)
                        (float)(((float10)dVar29 + (float10)-20) *
                                (float10)0.050000000000000003 * (float10)100);
          if (0x42c80000 < (int)pCStack_2b8) {
            uStack_74 = 1;
            pCStack_2b8 = (CMotionController *)0x461c3c00;
          }
          pCVar10 = (param_1->base).base.base.vtable._uc;
          (param_1->base).invincibility_timer = 0.0;
          (*(pCVar10->_uc).getGrabbed)
                    ((CCharacter *)param_1,(CDemonActor *)auStack_2bc,SUB84(in_stack_fffffd10,0));
          if (((param_1->base).base.hit_points <= 0.0) || (pCStack_68 != (CMotionController *)0x0))
          {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(param_1->base).base.model.motion_controller,0x12,1);
            (*((param_1->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"fall-?.wav");
            iVar23 = (param_1->base).base.is_on_ground;
            fStack_2c4 = 0.5f;
            goto joined_r0x00537afc;
          }
          dVar29 = 4.94065645841247e-324;
          in_stack_fffffd10 = 3.60739284464096e-313;
LAB_00537712:
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,
                     (int)((ulonglong)in_stack_fffffd10 >> 0x20),SUB84(__BITCAST_UINT64(dVar29),0));
        }
        (*((param_1->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)param_1,(CVector3f *)&DAT_02dd1184,fVar17 * 0.025f + 1.0);
      }
      iVar23 = (param_1->base).base.is_on_ground;
      fStack_2c4 = 0.5f;
    }
    else {
      iVar23 = (param_1->base).base.is_on_ground;
      fStack_2c4 = 0.5f;
    }
joined_r0x00537afc:
    0.5f = fStack_2c4;
    if (iVar23 == 0) {
      param_1->airborne_timer = param_1->airborne_timer + param_2;
      if (iStack_80 == 3) {
        fStack_2c4 = fStack_2c4 * (float)2;
      }
      if ((fStack_2c4 < param_1->airborne_timer) ||
         (param_1->fall_velocity_snapshot < (float)-20)) {
        if (iStack_80 != 0xf) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,0xf,1);
        }
        (param_1->base).base.is_on_ground = 0;
      }
      goto LAB_00536144;
    }
  }
  else {
    pfVar19 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&fStack_200);
    pCVar1 = &(param_1->base).base.base.location;
    (pCVar1->position).x = *pfVar19 + (pCVar1->position).x;
    (param_1->base).base.base.location.position.y =
         pfVar19[1] + (param_1->base).base.base.location.position.y;
    (param_1->base).base.base.location.position.z =
         pfVar19[2] + (param_1->base).base.base.location.position.z;
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    (param_1->base).base.model.accumulated_root_motion.x =
         (param_1->base).base.model.accumulated_root_motion.y;
  }
  param_1->airborne_timer = 0.0;
LAB_00536144:
  (param_1->pending_velocity).z = 0.0;
  (param_1->pending_velocity).y = (param_1->pending_velocity).z;
  (param_1->pending_velocity).x = (param_1->pending_velocity).y;
  pCVar14 = 0x01C775EC;
  if (iStack_20 != 0) {
    if ((param_1->base).player_input.action_state.draw != 0) {
      if (param_1->guns_drawn == 0) {
        param_1->guns_drawn = 1;
      }
      else {
        param_1->guns_drawn = 0;
        if (pCVar14->flashlight_active != 0) {
          pCVar14->flashlight_active = 0;
          (*((param_1->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)param_1,"flashlit.wav");
        }
      }
    }
    if ((((param_1->base).player_input.action_state.light != 0) &&
        (pCVar9 = (param_1->base).inventory.selected_weapon, pCVar9 != (CWeapon *)0x0)) &&
       (pCVar9->can_attach_light != 0)) {
      uVar25 = (uint)(0x01C775EC->flashlight_active == 0);
      0x01C775EC->flashlight_active = uVar25;
      if (uVar25 != 0) {
        param_1->guns_drawn = 1;
      }
      (*((param_1->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)param_1,"flashlit.wav");
    }
  }
  pCVar9 = (param_1->base).inventory.selected_weapon;
  if (pCVar9 == (CWeapon *)0x0) {
    0x01C775EC->flashlight_active = 0;
  }
  else if (pCVar9->can_attach_light == 0) {
    0x01C775EC->flashlight_active = 0;
  }
  if (local_24 != 0.0) {
    core_stranger_cpp_FUN_0053f310(param_1);
  }
  if (param_1->guns_drawn == 0) {
    fVar17 = param_1->guns_drawn_blend - param_2 / 1.2f;
    param_1->guns_drawn_blend = fVar17;
    if (fVar17 < 0.0) {
      param_1->guns_drawn_blend = 0.0;
    }
  }
  else {
    fVar17 = param_2 / 1.1f + param_1->guns_drawn_blend;
    param_1->guns_drawn_blend = fVar17;
    if (1.0 < fVar17) {
      param_1->guns_drawn_blend = 1.0;
    }
  }
  fVar17 = (param_1->right_arm_aim).recoil_timer - param_2 / 0.2f;
  param_1->frame_cleared = 0.0;
  (param_1->right_arm_aim).recoil_timer = fVar17;
  if (fVar17 <= 0.0) {
    (param_1->right_arm_aim).recoil_timer = 0.0;
  }
  fVar17 = (param_1->left_arm_aim).recoil_timer - param_2 / 0.2f;
  (param_1->left_arm_aim).recoil_timer = fVar17;
  if (fVar17 <= 0.0) {
    (param_1->left_arm_aim).recoil_timer = 0.0;
  }
  if (bVar11) {
    core_stranger_cpp_FUN_0053fc60();
  }
  core_stranger_cpp_FUN_005384d0();
  if ((((param_1->base).aim_mode == AIM_MODE_MANUAL) && (param_1->weapon != (CWeapon *)0x0)) &&
     (param_1->weapon->weapon_type == 0)) {
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
              (&(param_1->base).base.model);
    core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(param_1,0);
    core_stranger_cpp_CStranger_aimLeftPistol_FUN_0053e320(param_1);
    core_stranger_cpp_FUN_005384d0();
  }
  core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_0053ecc0(param_1,param_2,iVar26);
  core_stranger_cpp_FUN_005402f0();
  core_charactr_cpp_FUN_0042a150(param_1);
  pCVar2 = &(param_1->base).base.model;
  fVar17 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(pCVar2);
  if (fVar17 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004b56f0(&param_1->base);
  }
  else {
    fVar17 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                       (&pCVar2->motion_controller);
    if ((1.0 < fVar17) &&
       (pCVar20 = (CBoxActor *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (&((param_1->base).pushed_object)->base,
                             g_CBoxActorActorType_00764800.name_hash), pCVar20 != (CBoxActor *)0x0))
    {
      core_stranger_cpp_FUN_00538440(param_1);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)param_1,&CStack_110,&CStack_17c);
      CStack_1dc.y = 0.0;
      CStack_1dc.x = CStack_110.x - aCStack_194[0].x;
      CStack_1dc.z = CStack_110.z - aCStack_194[0].z;
      iVar26 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220(param_1,auStack_1e8);
      if (0.0 < *(float *)(iVar26 + 8)) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_0041ef90(pCVar20,aCStack_194,&CStack_1dc);
      }
    }
  }
  core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(param_1,0);
  core_stranger_cpp_CStranger_autoAimAtThreat_FUN_0053d910(param_1,0,param_2);
  core_stranger_cpp_CStranger_autoAimAtThreat_FUN_0053d910(param_1,1,param_2);
  core_stranger_cpp_FUN_0053ffe0(param_1);
  core_inv_cpp_CInventory_updateInventory_FUN_004c1850(&(param_1->base).inventory);
  core_stranger_cpp_CStranger_processWeaponTick_FUN_00540660(param_1,param_2);
  if ((param_1->weapon != (CWeapon *)0x0) && ((param_1->weapon->base).is_transparent != 0)) {
    (param_1->base).base.base.is_transparent = 1;
  }
  iVar26 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->goggle_sfx_handles[0]);
  if (iVar26 == 0) {
    if (0x01C775EC->goggles_active != 0) {
      sound_sndmain_cpp_killSfx_FUN_00527230(param_1->goggle_sfx_handles[1]);
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_00526270(1);
      uVar25 = sound_sndmain_cpp_startSfx_FUN_005265a0("goggle-on.wav");
      param_1->goggle_sfx_handles[1] = uVar25;
      sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(0.0);
      uVar25 = sound_sndmain_cpp_startSfx_FUN_005265a0("goggle-loop.wav");
      param_1->goggle_sfx_handles[0] = uVar25;
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
      sound_sndmain_cpp_setSfxFade_FUN_00527260(param_1->goggle_sfx_handles[0],1.0,1.0,0);
      return;
    }
  }
  else if (0x01C775EC->goggles_active == 0) {
    sound_sndmain_cpp_killSfx_FUN_00527230(param_1->goggle_sfx_handles[1]);
    sound_sndmain_cpp_killSfx_FUN_00527230(param_1->goggle_sfx_handles[0]);
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxFlagBits_FUN_00526270(1);
    sound_sndmain_cpp_startSfx_FUN_005265a0("goggle-off.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    return;
  }
  return;
}
