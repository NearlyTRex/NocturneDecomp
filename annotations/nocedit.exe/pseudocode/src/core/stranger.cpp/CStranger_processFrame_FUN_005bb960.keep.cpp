// Name: core_stranger.cpp_CStranger_processFrame_FUN_005bb960
// Address: 005bb960
// MANUAL RECONSTRUCTION
// Address Range: [[005bb960, 005bdd15]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processFrame_FUN_005bb960(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_processFrame_FUN_005bb960(CStranger *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CDemonActor *pCVar9;
  CWeapon *pCVar10;
  CCharacter *this_ptr_00;
  CCharacter_full_vtable *pCVar11;
  float fVar12;
  bool bVar13;
  CGame *pCVar14;
  CBoundingBox3D *pCVar15;
  CVector3f *pCVar16;
  float fVar17;
  SMotion *pSVar18;
  CBoxActor *pCVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  int iVar24;
  int iDesiredState;
  int iForceImmediate;
  float local_2d8;
  float local_2d0;
  float local_2c4;
  float local_2c0;
  SDamageInfo local_2bc;
  SInteractionInfo local_280;
  CBoundingBox3D local_248;
  CVector3f local_230;
  CVector3f local_224;
  CVector3f local_218;
  CVector3f local_20c;
  CVector3f local_200;
  CVector3f local_1f4 [2];
  CVector3f local_1dc;
  UOrientationVector local_1c8;
  float local_1bc;
  float local_1b0;
  CVector3f local_1ac;
  CVector3f local_194 [2];
  CVector3f local_174;
  CVector3f local_168;
  CVector3f local_dir;
  CVector3f local_14c [2];
  CVector3f local_134;
  CVector3f local_128;
  CVector3f local_114 [2];
  CVector3f local_fc;
  CVector3f local_ec;
  CVector3f local_c0;
  CVector3f local_b0;
  CVector3f local_9c [2];
  float local_84;
  int local_80;
  float local_7c;
  CDemonActor *local_78;
  CAmmoBox *local_70;
  float local_6c;
  CMotionController *local_68;
  CMotionController *local_64;
  int local_60;
  CMotionController *local_5c;
  int local_58;
  CMotionController *local_54;
  CMotionController *local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  CDeformableModelInstance *local_30;
  float local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_74;

  local_1c = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,"DebugActionPending");
  local_14 = local_1c;
  pCVar9 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if ((pCVar9 != (CDemonActor *)0x0) && ((this_ptr->carry_object_bbox).max.x < -999999.0f)) {
    pCVar15 = (*((pCVar9->vtable)._ub)->getBoundingBox)
                        (pCVar9,(CBoundingBox3D *)&local_280.pitch_max);
    if (&this_ptr->carry_object_bbox != pCVar15) {
      (this_ptr->carry_object_bbox).min = pCVar15->min;
    }
    pCVar16 = &(this_ptr->carry_object_bbox).max;
    if (pCVar16 != &pCVar15->max) {
      (this_ptr->carry_object_bbox).max = pCVar15->max;
    }
    local_dir.x = ((this_ptr->carry_object_bbox).min.x + (this_ptr->carry_object_bbox).max.x) * 0.5f;
    local_dir.y = ((this_ptr->carry_object_bbox).min.y + (this_ptr->carry_object_bbox).max.y) * 0.5f;
    local_dir.z = ((this_ptr->carry_object_bbox).min.z + (this_ptr->carry_object_bbox).max.z) * 0.5f;
    pCVar16 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((this_ptr->base).base.carry_hands[1].carry_actor,&local_b0,&local_dir);
    pCVar16 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)this_ptr,&local_134,pCVar16);
    if (&this_ptr->carry_object_world_center != pCVar16) {
      this_ptr->carry_object_world_center = *pCVar16;
    }
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042ea40((CCharacter *)this_ptr,delta_time);
  core_game_cpp_CGame_slamDT_FUN_004e3080(g_CGamePtr,delta_time);
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
  (this_ptr->base).base.model.accumulated_root_motion.y = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.x = 0.0;
  pCVar16 = core_stranger_cpp_CStranger_getHandsMidpoint_FUN_005be490(this_ptr,local_194);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_230,pCVar16);
  core_stranger_cpp_CStranger_processMotionEvents_FUN_005bdd20(this_ptr,delta_time);
  local_1c = 1;
  local_80 = 1;
  local_24 = 1;
  bVar13 = true;
  iVar24 = 1;
  if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
    local_1c = 0;
    local_24 = 0;
    local_80 = 0;
    bVar13 = false;
    iVar24 = 0;
    if (local_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"grabbedBy=%s\n",((CCharacter *)this_ptr)->grabbed_by->actor_name);
    }
  }
  if ((this_ptr->base).pushed_object != (CBoxActor *)0x0) {
    bVar13 = false;
    iVar24 = 0;
    local_1c = 0;
    local_24 = 0;
    if (local_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"pushedObject=%s\n",((CHero *)this_ptr)->pushed_object->base.actor_name);
    }
  }
  if (((this_ptr->base).ladder_to_climb != (CLadder *)0x0) ||
     (this_ptr->ladder_to_descend != (CLadder *)0x0)) {
    iVar24 = 0;
    bVar13 = false;
    local_80 = 0;
    local_24 = 0;
    local_1c = 0;
    if (local_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"ladder\n");
    }
  }
  if (((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) || (this_ptr->action_pending == 4))
  {
    bVar13 = false;
    iVar24 = 0;
    local_1c = 0;
    if (local_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"pickup\n");
    }
  }
  local_50 = &(this_ptr->base).base.model.motion_controller;
  fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(local_50,0x24);
  if ((((0.0 < fVar17) ||
       (fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(local_50,0x28),
       0.0 < fVar17)) ||
      (fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(local_50,0x29),
      0.0 < fVar17)) || ((this_ptr->base).base.hit_points <= 0.0)) {
    bVar13 = false;
    iVar24 = 0;
    local_24 = 0;
    local_1c = 0;
    if (local_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"hurt\n");
    }
  }
  local_54 = &(this_ptr->base).base.model.motion_controller;
  fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(local_54,0x1c);
  if (((0.0 < fVar17) ||
      (fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(local_54,0x1d),
      0.0 < fVar17)) ||
     ((fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(local_54,0x1e),
      0.0 < fVar17 ||
      ((this_ptr->action_pending == 5 || ((this_ptr->base).door_to_open != (CDoor *)0x0)))))) {
    bVar13 = false;
    iVar24 = 0;
    local_1c = 0;
    if (local_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"door\n");
    }
  }
  fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                     (&(this_ptr->base).base.model.motion_controller,0x2e);
  if (0.0 < fVar17) {
    bVar13 = false;
    iVar24 = 0;
    local_24 = 0;
    local_80 = 0;
    local_1c = 0;
    if (local_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"sitting\n");
    }
  }
  if (this_ptr->action_pending == 1) {
    iVar24 = 0;
    bVar13 = false;
    if (local_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"stashinventory\n");
    }
  }
  if (this_ptr->action_pending == 2) {
    iVar24 = 0;
    bVar13 = false;
    if (local_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"placeobject\n");
    }
  }
  if (this_ptr->action_pending == 6) {
    iVar24 = 0;
    bVar13 = false;
    if (local_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"putdownobject\n");
    }
  }
  if (this_ptr->action_pending == 3) {
    iVar24 = 0;
    bVar13 = false;
    if (local_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"toss\n");
    }
  }
  if (this_ptr->action_pending == 7) {
    iVar24 = 0;
    bVar13 = false;
    if (local_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"attackmelee\n");
    }
  }
  if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) {
    if ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0) {
      local_80 = 1;
    }
    if ((this_ptr->base).base.base.location.position.y !=
        (this_ptr->base).base.closest_distance_threshold) {
      local_80 = 1;
    }
  }
  fVar17 = (float)12.566370614;
  local_64 = &(this_ptr->base).base.model.motion_controller;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar17;
  pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(local_64);
  if ((pSVar18->state_index == 4) ||
     (pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(local_64),
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
  local_60 = 1;
  if ((this_ptr->base).ladder_to_climb == (CLadder *)0x0) {
    if (this_ptr->ladder_to_descend == (CLadder *)0x0) {
      pCVar9 = (this_ptr->base).nearby_interactive_actor;
      if (pCVar9 == (CDemonActor *)0x0) {
        pCVar9 = (this_ptr->base).base.grabbed_by;
        if (pCVar9 == (CDemonActor *)0x0) {
          if ((this_ptr->base).pushed_object == (CBoxActor *)0x0) {
            iVar20 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                               ((CCharacter *)this_ptr,delta_time);
            pCVar2 = &(this_ptr->base).base.model;
            if (iVar20 == 0) {
              if (local_1c != 0) {
                pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                    (&pCVar2->motion_controller);
                switch(pSVar18->state_index) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  if ((this_ptr->base).base.is_on_ground != 0) {
                    pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                        (&(this_ptr->base).base.model.motion_controller);
                    local_58 = pSVar18->state_index;
                    local_18 = 0;
                    if ((this_ptr->base).player_input.action_state.walk == 0) {
                      if ((this_ptr->base).player_input.action_state.backup == 0) {
                        fVar17 = (this_ptr->base).player_input.strafe_speed;
                        if ((float)-0.01 <= fVar17) {
                          if (0.01 < (double)fVar17) {
                            local_18 = 5;
                          }
                        }
                        else {
                          local_18 = 4;
                        }
                      }
                      else {
                        local_18 = 2;
                      }
                    }
                    else if ((this_ptr->base).player_input.action_state.run == 0) {
                      local_18 = 1;
                    }
                    else {
                      local_18 = 3;
                    }
                    CMotionController *pMotionCtrl = &(this_ptr->base).base.model.motion_controller;
                    fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                       (pMotionCtrl,1);
                    local_84 = fVar17 * 2.5f;
                    fVar21 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                       (pMotionCtrl,3);
                    local_7c = fVar21 * 3.5f + local_84;
                    fVar22 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                       (pMotionCtrl,2);
                    fVar22 = fVar22 * 1.5f;
                    fVar17 = (this_ptr->base).player_input.strafe_speed;
                    fVar12 = (this_ptr->base).player_input.turn_speed *
                             (this_ptr->base).base.turn_speed;
                    iVar20 = (this_ptr->base).player_input.action_state.jump;
                    (this_ptr->base).base.turn_angle_accumulator = fVar12;
                    fVar21 = (this_ptr->base).base.turn_angle_accumulator;
                    fVar4 = (this_ptr->base).base.turn_angle_accumulator;
                    fVar5 = (this_ptr->right_arm_aim).aim_yaw;
                    fVar6 = (this_ptr->left_arm_aim).aim_yaw;
                    fVar7 = (this_ptr->right_arm_aim).target_yaw;
                    fVar8 = (this_ptr->left_arm_aim).target_yaw;
                    this_ptr->turn_angle = this_ptr->turn_angle - fVar12;
                    (this_ptr->right_arm_aim).aim_yaw = fVar5 - fVar12;
                    (this_ptr->left_arm_aim).aim_yaw = fVar6 - fVar21;
                    (this_ptr->right_arm_aim).target_yaw = fVar7 - fVar21;
                    fVar21 = (this_ptr->base).base.position_delta.x;
                    (this_ptr->left_arm_aim).target_yaw = fVar8 - fVar4;
                    (this_ptr->base).base.position_delta.x =
                         fVar17 * delta_time * (fVar22 + local_7c) + fVar21;
                    if ((iVar20 != 0) && ((this_ptr->base).base.layer_action_index != 0xe)) {
                      switch(local_58) {
                      case 0:
                      case 2:
                      case 4:
                      case 5:
                        (this_ptr->base).base.is_on_ground = 0;
                        local_18 = 0xb;
                        break;
                      case 1:
                        (this_ptr->base).base.is_on_ground = 0;
                        local_18 = 0xb;
                        break;
                      case 3:
                        (this_ptr->base).base.is_on_ground = 0;
                        local_18 = 7;
                      }
                    }
                    if (local_18 != local_58) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                (&(this_ptr->base).base.model.motion_controller,local_18,1);
                    }
                    if ((this_ptr->base).player_input.action_state.use_item != 0) {
                      core_hero_cpp_CHero_tryUseSelectedItem_FUN_004f3760(&this_ptr->base);
                      local_60 = 0;
                      break;
                    }
                  }
                  local_60 = 0;
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
              uVar23 = (this_ptr->base).base.is_walking;
              if (uVar23 < 2) {
                if (uVar23 == 1) {
                  iVar20 = 1;
                }
                else {
                  iVar20 = 0;
                }
LAB_005bd19f:
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,iVar20,1);
              }
              else {
                if (uVar23 < 3) {
                  iVar20 = 3;
                  goto LAB_005bd19f;
                }
                if (uVar23 != 3) {
                  iVar20 = 0;
                  goto LAB_005bd19f;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar2->motion_controller,0,1);
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (g_CConsolePtr,"%s confused while walking to scriptDest!\n",((CDemonActor *)this_ptr)->actor_name);
              }
              (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
              (this_ptr->base).base.model.accumulated_root_motion.y = 0.0;
              (this_ptr->base).base.model.accumulated_root_motion.x = 0.0;
            }
          }
          else {
            local_78 = pCVar9;
            if ((this_ptr->base).player_input.action_state.fire != 0) {
              pCVar19 = (this_ptr->base).pushed_object;
              (*((pCVar19->base).vtable._ub)->getBoundingBox)(&pCVar19->base,&local_248);
              local_1b0 = local_248.min.z + local_248.max.z;
              local_1ac.x = local_248.max.x + local_230.x;
              local_168.x = local_1b0 * 0.5f;
              local_168.y = local_1ac.x * 0.5f;
              local_1ac.y = local_248.max.y + local_230.y;
              local_168.z = local_1ac.y * 0.5f;
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        (&((this_ptr->base).pushed_object)->base,&local_174,&local_168);
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)this_ptr,local_9c,&local_174);
              pCVar16 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                  (local_114,local_9c);
              local_2c4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar16->y);
              local_fc.x = (local_248.max.z - local_248.min.z) * 0.5f;
              local_fc.z = (local_230.y - local_248.max.y) * 0.5f;
              local_fc.y = 0.0;
              if ((((local_9c[0].z - SQRT(local_fc.z * local_fc.z + local_fc.x * local_fc.x) <
                     (float)3) && (1.0 < local_9c[0].y)) &&
                  (local_9c[0].y < (float)5)) &&
                 (ABS(local_2c4) < (float)0.78539816337500001)) {
                local_2c = delta_time * (float)3.1415926535000001;
                if (local_2c4 < -local_2c) {
                  local_2c4 = -local_2c;
                }
                if (local_2c < local_2c4) {
                  local_2c4 = local_2c;
                }
                (this_ptr->base).base.base.orient.vec.y =
                     (this_ptr->base).base.base.orient.vec.y + local_2c4;
                core_charactr_cpp_CCharacter_setOrientation_FUN_0042ded0
                          ((CCharacter *)this_ptr,&(this_ptr->base).base.base.orient);
                goto switchD_005bd22e_caseD_6;
              }
            }
            if (local_78 == (CDemonActor *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,0,1);
              core_hero_cpp_CHero_stopPushingBox_FUN_004f3350(&this_ptr->base);
            }
          }
        }
        else {
          if ((this_ptr->base).base.grabbed_type == 0) {
            pCVar16 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                ((CDemonActor *)this_ptr,&local_dir,
                                 &(pCVar9->location).position);
            pCVar16 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                (&local_1dc,pCVar16);
            local_2d0 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar16->y);
            if (local_2d0 < (float)-1.57079632675) {
              local_2d0 = local_2d0 + 3.141593f;
            }
            if ((float)1.57079632675 < local_2d0) {
              local_2d0 = local_2d0 + -3.141593f;
            }
            local_48 = delta_time * (float)3.1415926535000001;
            local_6c = -local_48;
            if (local_2d0 < local_6c) {
              local_2d0 = local_6c;
            }
            if (local_48 < local_2d0) {
              local_2d0 = local_48;
            }
            (this_ptr->base).base.base.orient.vec.y =
                 (this_ptr->base).base.base.orient.vec.y + local_2d0;
            core_charactr_cpp_CCharacter_setOrientation_FUN_0042ded0
                      ((CCharacter *)this_ptr,&(this_ptr->base).base.base.orient);
          }
          this_ptr_00 = (CCharacter *)(this_ptr->base).base.grabbed_by;
          pCVar11 = (this_ptr_00->base).vtable._uc;
          local_30 = &(this_ptr->base).base.model;
          pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                              (local_30,&local_ec,0);
          iVar20 = (*(pCVar11->_uc).attractActorToward)(this_ptr_00,(CDemonActor *)this_ptr,pCVar16)
          ;
          if (iVar20 == 0) {
            (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
          }
          else if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
            fVar17 = this_ptr->grab_timer + delta_time;
            this_ptr->grab_timer = fVar17;
            if ((1.5f <= fVar17) && ((this_ptr->base).base.grabbed_type != 1)) {
              fVar22 =
                         core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                   (&(this_ptr->base).base.model.motion_controller,0x22);
              fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                 (&(this_ptr->base).base.model.motion_controller,0x23);
              if (fVar17 + fVar22 <= 0.0) {
                (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseFromGrab)
                          ((CCharacter *)this_ptr);
              }
              else if ((this_ptr->base).player_input.action_state.fire != 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,0x23,1);
                (this_ptr->base).player_input.action_state.fire = 0;
              }
            }
            goto switchD_005bd22e_caseD_6;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
      }
      else {
        (*((pCVar9->vtable)._ub)->getInteractionInfo)(pCVar9,&local_280);
        if ((local_280.can_interact == 0) || ((CDemonActor *)this_ptr != local_280.interacting_actor))
        {
          core_hero_cpp_CHero_stopNearbyInteraction_FUN_004f3580(&this_ptr->base);
        }
        else {
          CDemonActor *pInteractTarget = ((CHero *)local_280.interacting_actor)->nearby_interactive_actor;
          local_1c8.vec = pInteractTarget->orient.vec;
          float fTurnAmount =
                     ((this_ptr->base).player_input.turn_speed * (float)3.1415926535000001 *
                      (float)0.5 * delta_time);
          if (fTurnAmount < local_280.yaw_min) {
            fTurnAmount = local_280.yaw_min;
          }
          if (local_280.yaw_max < fTurnAmount) {
            fTurnAmount = local_280.yaw_max;
          }
          local_1c8.vec.y =
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_1c8.vec.y + fTurnAmount);
          float fLookAmount = (this_ptr->base).player_input.look_up_down_speed * (float)3.1415926535000001
                           * (float)0.5 * delta_time;
          if (fLookAmount < local_280.pitch_min) {
            fLookAmount = local_280.pitch_min;
          }
          if (local_280.pitch_max < fLookAmount) {
            fLookAmount = local_280.pitch_max;
          }
          local_1c8.vec.x =
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_1c8.vec.x + fLookAmount);
          pCVar9 = (this_ptr->base).nearby_interactive_actor;
          iVar20 = (*((pCVar9->vtable)._ub)->updateInteraction)
                             (pCVar9,&local_1c8,&(this_ptr->base).player_input);
          if (iVar20 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0,1);
            core_hero_cpp_CHero_stopNearbyInteraction_FUN_004f3580(&this_ptr->base);
          }
          else {
            local_2bc.gore_multiplier =
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           ((((this_ptr->base).nearby_interactive_actor)->orient).vec.y -
                            (this_ptr->base).base.base.orient.vec.y);
            if ((float)-0.01 <= local_2bc.gore_multiplier) {
              if ((double)local_2bc.gore_multiplier <= 0.01) {
                iVar20 = 0;
              }
              else {
                iVar20 = 4;
              }
            }
            else {
              iVar20 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,iVar20,1);
            local_84 = (this_ptr->base).base.base.orient.vec.x;
            local_7c = (this_ptr->base).base.base.orient.vec.z;
            local_80 = (int)(local_2bc.gore_multiplier * this_ptr->interact_blend +
                            (this_ptr->base).base.base.orient.vec.y);
            core_charactr_cpp_CCharacter_setOrientation_FUN_0042ded0
                      ((CCharacter *)this_ptr,(UOrientationVector *)&local_84);
            delta_time = local_280.pitch_min + (float)-1;
            local_dir.x = 0.0;
            local_dir.y = 0.0;
            local_dir.z = delta_time;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((this_ptr->base).nearby_interactive_actor,&local_fc,&local_dir);
            local_dir.x = local_fc.x - (this_ptr->base).base.base.location.position.x;
            local_dir.y = local_fc.y - (this_ptr->base).base.base.location.position.y;
            local_dir.z = local_fc.z - (this_ptr->base).base.base.location.position.z;
            pCVar16 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                                ((CDemonActor *)this_ptr,&local_c0,&local_dir);
            local_174.x = pCVar16->x * this_ptr->interact_blend;
            local_174.y = pCVar16->y * this_ptr->interact_blend;
            local_174.z = pCVar16->z * this_ptr->interact_blend;
            pCVar16 = &(this_ptr->base).base.model.accumulated_root_motion;
            if (pCVar16 != &local_174) {
              (this_ptr->base).base.model.accumulated_root_motion = local_174;
            }
            (this_ptr->base).base.model.accumulated_root_motion.y = 0.0;
          }
        }
      }
    }
    else {
      fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&(this_ptr->base).base.model.motion_controller,0x2b);
      if (0.0 < fVar17) {
        if ((this_ptr->base).base.base.location.position.y <
            (this_ptr->ladder_to_descend->base).location.position.y + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
      }
      else {
        this_ptr->ladder_to_descend = (CLadder *)0x0;
      }
      if (0.0 < this_ptr->ladder_blend_time) {
        if (this_ptr->ladder_blend_time <= delta_time) {
          this_ptr->ladder_blend_time = 0.0;
          local_2c0 = 1.0;
        }
        else {
          local_2c0 = delta_time / this_ptr->ladder_blend_time;
          this_ptr->ladder_blend_time = this_ptr->ladder_blend_time - delta_time;
        }
        pCVar16 = &this_ptr->ladder_offset;
        fVar17 = (this_ptr->ladder_offset).y;
        local_c0.x = (this_ptr->ladder_offset).z * local_2c0;
        pCVar1 = &(this_ptr->base).base.base.location;
        local_4c = 1.0 - local_2c0;
        fVar21 = (this_ptr->base).base.base.location.position.y;
        (pCVar1->position).x = (pCVar1->position).x + pCVar16->x * local_2c0;
        fVar4 = (this_ptr->base).base.base.location.position.z;
        (this_ptr->base).base.base.location.position.y = fVar21 + fVar17 * local_2c0;
        (this_ptr->base).base.base.location.position.z = fVar4 + local_c0.x;
        pCVar16->x = pCVar16->x * local_4c;
        (this_ptr->ladder_offset).y = (this_ptr->ladder_offset).y * local_4c;
        (this_ptr->ladder_offset).z = (this_ptr->ladder_offset).z * local_4c;
        fVar17 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           (this_ptr->ladder_facing_angle - (this_ptr->base).base.base.orient.vec.y)
        ;
        (this_ptr->base).base.turn_angle_accumulator = fVar17 * local_2c0;
      }
      fVar17 = (*((this_ptr->base).base.base.vtable._ub)->cylinderGroundCheck)
                         ((CDemonActor *)this_ptr,(this_ptr->base).base.collision_cylinder_height,
                          (CVector3f *)0x0);
      (this_ptr->base).base.closest_distance_threshold = fVar17;
    }
  }
  else {
    fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,0x2a);
    if (0.0 < fVar17) {
      pCVar16 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          (&((this_ptr->base).ladder_to_climb)->base,&local_128,
                           &((this_ptr->base).ladder_to_climb)->ladder_size);
      if (pCVar16->y + (float)-4 < (this_ptr->base).base.base.location.position.y) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
    }
    else {
      (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
    }
    if (0.0 < this_ptr->ladder_blend_time) {
      if (this_ptr->ladder_blend_time <= delta_time) {
        this_ptr->ladder_blend_time = 0.0;
        local_2d8 = 1.0;
      }
      else {
        local_2d8 = delta_time / this_ptr->ladder_blend_time;
        this_ptr->ladder_blend_time = this_ptr->ladder_blend_time - delta_time;
      }
      pCVar16 = &this_ptr->ladder_offset;
      fVar17 = (this_ptr->ladder_offset).y;
      fVar21 = (this_ptr->ladder_offset).z;
      pCVar1 = &(this_ptr->base).base.base.location;
      local_3c = 1.0 - local_2d8;
      fVar4 = (this_ptr->base).base.base.location.position.y;
      (pCVar1->position).x = (pCVar1->position).x + pCVar16->x * local_2d8;
      fVar5 = (this_ptr->base).base.base.location.position.z;
      (this_ptr->base).base.base.location.position.y = fVar4 + fVar17 * local_2d8;
      (this_ptr->base).base.base.location.position.z = fVar5 + fVar21 * local_2d8;
      pCVar16->x = pCVar16->x * local_3c;
      (this_ptr->ladder_offset).y = (this_ptr->ladder_offset).y * local_3c;
      (this_ptr->ladder_offset).z = (this_ptr->ladder_offset).z * local_3c;
      fVar17 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (this_ptr->ladder_facing_angle - (this_ptr->base).base.base.orient.vec.y);
      (this_ptr->base).base.turn_angle_accumulator = fVar17 * local_2d8;
    }
  }
switchD_005bd22e_caseD_6:
  local_68 = &(this_ptr->base).base.model.motion_controller;
  pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(local_68);
  if ((pSVar18->state_index == 0x1b) &&
     (local_70 = (CAmmoBox *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           ((this_ptr->base).object_to_pick_up,g_CAmmoBoxClassInfo.name_hash),
     local_70 != (CAmmoBox *)0x0)) {
    fVar17 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(local_68);
    core_ammobox_cpp_CAmmoBox_openBox_FUN_00411690(local_70,fVar17);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_stranger_cpp_CStranger_updateTurnBlending_FUN_005bf800(this_ptr,delta_time);
  if (local_60 != 0) {
    (this_ptr->pending_velocity).z = 0.0;
    (this_ptr->pending_velocity).y = 0.0;
    (this_ptr->pending_velocity).x = 0.0;
  }
  if (((this_ptr->base).ladder_to_climb == (CLadder *)0x0) &&
     (this_ptr->ladder_to_descend == (CLadder *)0x0)) {
    if (local_80 == 0) goto LAB_005bc1a6;
    local_5c = &(this_ptr->base).base.model.motion_controller;
    pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(local_5c);
    pCVar16 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar3 = &(this_ptr->base).base.position_delta;
    local_218.x = pCVar16->x + pCVar3->x;
    local_20 = pSVar18->state_index;
    local_218.y = (this_ptr->base).base.model.accumulated_root_motion.y +
                  (this_ptr->base).base.position_delta.y;
    local_218.z = (this_ptr->base).base.model.accumulated_root_motion.z +
                  (this_ptr->base).base.position_delta.z;
    local_44 = 18.0f * delta_time;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y = 0.0;
    pCVar16->x = 0.0;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = 0.0;
    pCVar3->x = 0.0;
    if (local_20 == 7) {
      local_218.x = 0.0;
      local_218.y = 0.0;
      this_ptr->jump_speed = 18.0f;
      this_ptr->airborne_timer = 0.0;
      local_218.z = local_44;
    }
    else {
      if (local_20 == 8) {
        fVar21 = (float)32;
        fVar17 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = 18.0f;
        fVar17 = fVar17 - delta_time * fVar21;
        this_ptr->airborne_timer = 0.0;
        local_218.z = local_44;
        goto LAB_005bd5e4;
      }
      if (local_20 == 9) {
        fVar4 = (float)32;
        local_218.x = 0.0;
        local_218.y = 0.0;
        fVar21 = 0.5f * 18.0f;
        local_218.z = this_ptr->jump_speed * delta_time;
        this_ptr->airborne_timer = 0.0;
        fVar17 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = this_ptr->jump_speed - fVar21 * delta_time;
        fVar21 = this_ptr->jump_speed;
        (this_ptr->base).base.velocity.y = fVar17 - delta_time * fVar4;
        if (fVar21 < 0.0) {
          this_ptr->jump_speed = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_5c,0xf,1);
        }
      }
      else if (local_20 == 10) {
        local_218.y = 0.0;
        local_218.x = 0.0;
        local_218.z = local_44;
      }
      else if (local_20 == 0xb) {
        this_ptr->airborne_timer = 0.0;
        this_ptr->jump_speed = 10.0f;
      }
      else if (local_20 == 0xc) {
        local_218.z = 10.0f * delta_time;
        fVar21 = (float)32;
        fVar17 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = 10.0f;
        fVar17 = fVar17 - delta_time * fVar21;
        this_ptr->airborne_timer = 0.0;
LAB_005bd5e4:
        local_218.y = 0.0;
        local_218.x = 0.0;
LAB_005bd5e6:
        (this_ptr->base).base.velocity.y = fVar17;
      }
      else if (local_20 == 0xd) {
        fVar4 = (float)32;
        local_218.x = 0.0;
        local_218.y = 0.0;
        fVar21 = 0.5f * 10.0f;
        local_218.z = this_ptr->jump_speed * delta_time;
        this_ptr->airborne_timer = 0.0;
        fVar17 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = this_ptr->jump_speed - fVar21 * delta_time;
        fVar21 = this_ptr->jump_speed;
        (this_ptr->base).base.velocity.y = fVar17 - delta_time * fVar4;
        if (fVar21 < 0.0) {
          this_ptr->jump_speed = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_5c,0xf,1);
        }
      }
      else {
        if (local_20 != 0xe) {
          if (local_20 == 0xf) {
            local_218.z = 0.0;
            fVar17 = (this_ptr->base).base.velocity.y - delta_time * (float)32;
            this_ptr->airborne_timer = 9999.9;
            goto LAB_005bd5e4;
          }
          if (local_20 == 0x10) {
            local_218.z = 0.0;
            local_218.y = 0.0;
            local_218.x = 0.0;
            fVar17 = (this_ptr->base).base.velocity.y - delta_time * (float)32;
          }
          else {
            fVar17 = (this_ptr->base).base.velocity.y - delta_time * (float)32;
          }
          goto LAB_005bd5e6;
        }
        local_218.y = 0.0;
      }
    }
    pCVar16 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                        ((CDemonActor *)this_ptr,&local_224,&this_ptr->pending_velocity);
    local_1c8.vec.y = (this_ptr->base).base.velocity.x * delta_time + pCVar16->x;
    local_1c8.vec.z = (this_ptr->base).base.velocity.y * delta_time + pCVar16->y;
    local_218.x = local_218.x + local_1c8.vec.y;
    local_1bc = delta_time * (this_ptr->base).base.velocity.z + pCVar16->z;
    local_218.y = local_218.y + local_1c8.vec.z;
    local_218.z = local_218.z + local_1bc;
    this_ptr->fall_velocity_snapshot = (this_ptr->base).base.velocity.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_218);
    if ((this_ptr->base).base.base.location.position.y <
        (this_ptr->base).base.closest_distance_threshold + (float)0.10000000000000001) {
      (this_ptr->base).base.is_on_ground = 1;
    }
    if (((local_20 == 0xf) || (local_20 == 9)) || (local_20 == 0xd)) {
      if ((this_ptr->base).base.is_on_ground != 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"Splat at %3.2f fps\n",
                   (double)(this_ptr->base).base.velocity.y);
        fVar17 = -this_ptr->fall_velocity_snapshot;
        if (fVar17 < (float)20) {
          if (local_20 == 0xd) {
            iDesiredState = 0xe;
          }
          else if (local_20 == 9) {
            iDesiredState = 0xa;
          }
          else {
            iDesiredState = 0x10;
          }
          iForceImmediate = 1;
          goto LAB_005bd763;
        }
        else {
          local_74 = 0;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2bc);
          local_2bc.damage_amount = (fVar17 - 20.0f) * 5.0f;
          if (local_2bc.damage_amount > 100.0f) {
            local_74 = 1;
            local_2bc.damage_amount = 9999.0;
          }
          pCVar11 = (this_ptr->base).base.base.vtable._uc;
          (this_ptr->base).invincibility_timer = 0.0;
          (*(pCVar11->_uc).processDamage)((CCharacter *)this_ptr,&local_2bc);
          if (((this_ptr->base).base.hit_points <= 0.0) || (local_6c != 0.0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0x12,1);
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"fall-?.wav");
            iVar20 = (this_ptr->base).base.is_on_ground;
            local_2c4 = 0.5f;
            goto joined_r0x005bdb44;
          }
          iDesiredState = 0x11;
          iForceImmediate = 1;
LAB_005bd763:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,iDesiredState,
                     iForceImmediate);
        }
        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)this_ptr,&g_ZeroVector.f,fVar17 * 0.025f + 1.0);
      }
      iVar20 = (this_ptr->base).base.is_on_ground;
      local_2c4 = 0.5f;
    }
    else {
      iVar20 = (this_ptr->base).base.is_on_ground;
      local_2c4 = 0.5f;
    }
joined_r0x005bdb44:
    local_2c4 = 0.5f;
    if (iVar20 == 0) {
      this_ptr->airborne_timer = this_ptr->airborne_timer + delta_time;
      if (local_20 == 3) {
        local_2c4 = local_2c4 * (float)2;
      }
      if ((local_2c4 < this_ptr->airborne_timer) ||
         (this_ptr->fall_velocity_snapshot < (float)-20)) {
        if (local_20 != 0xf) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0xf,1);
        }
        (this_ptr->base).base.is_on_ground = 0;
      }
      goto LAB_005bc1a6;
    }
  }
  else {
    pCVar16 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)this_ptr,&local_1ac,
                         &(this_ptr->base).base.model.accumulated_root_motion);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar16->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar16->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar16->z + (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
  }
  this_ptr->airborne_timer = 0.0;
LAB_005bc1a6:
  (this_ptr->pending_velocity).z = 0.0;
  (this_ptr->pending_velocity).y = (this_ptr->pending_velocity).z;
  (this_ptr->pending_velocity).x = (this_ptr->pending_velocity).y;
  pCVar14 = g_CGamePtr;
  if (local_1c != 0) {
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
        (pCVar10 = (this_ptr->base).inventory.selected_weapon, pCVar10 != (CWeapon *)0x0)) &&
       (pCVar10->can_attach_light != 0)) {
      uVar23 = (uint)(g_CGamePtr->flashlight_active == 0);
      g_CGamePtr->flashlight_active = uVar23;
      if (uVar23 != 0) {
        this_ptr->guns_drawn = 1;
      }
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"flashlit.wav");
    }
  }
  pCVar10 = (this_ptr->base).inventory.selected_weapon;
  if (pCVar10 == (CWeapon *)0x0) {
    g_CGamePtr->flashlight_active = 0;
  }
  else if (pCVar10->can_attach_light == 0) {
    g_CGamePtr->flashlight_active = 0;
  }
  if (local_24 != 0) {
    core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_005c5270(this_ptr,delta_time);
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
  if (bVar13) {
    core_stranger_cpp_CStranger_handleActionButton_FUN_005c5b90(this_ptr);
  }
  core_stranger_cpp_CStranger_updateProceduralAnimation_FUN_005be520(this_ptr);
  if ((((this_ptr->base).aim_mode == AIM_MODE_MANUAL) && (this_ptr->weapon != (CWeapon *)0x0)) &&
     (this_ptr->weapon->weapon_type == 0)) {
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
              (&(this_ptr->base).base.model);
    core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005c06b0(this_ptr,0);
    core_stranger_cpp_CStranger_aimLeftPistol_FUN_005c4370(this_ptr);
    core_stranger_cpp_CStranger_updateProceduralAnimation_FUN_005be520(this_ptr);
  }
  core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_005c4c20(this_ptr,delta_time,iVar24);
  core_stranger_cpp_CStranger_updateClothSimulation_FUN_005c6220(this_ptr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  pCVar2 = &(this_ptr->base).base.model;
  fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                     (&pCVar2->motion_controller,6);
  if (fVar17 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004f3350(&this_ptr->base);
  }
  else {
    fVar17 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                       (&pCVar2->motion_controller);
    if ((1.0 < fVar17) &&
       (pCVar19 = (CBoxActor *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (&((this_ptr->base).pushed_object)->base,g_CBoxActorClassInfo.name_hash)
       , pCVar19 != (CBoxActor *)0x0)) {
      core_stranger_cpp_CStranger_getHandsMidpoint_FUN_005be490(this_ptr,local_14c);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_20c,local_14c);
      local_200.y = 0.0;
      local_200.x = local_20c.x - local_230.x;
      local_200.z = local_20c.z - local_230.z;
      pCVar16 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                          ((CDemonActor *)this_ptr,local_1f4,&local_200);
      if (0.0 < pCVar16->z) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_00422390(pCVar19,&local_230,&local_200);
      }
    }
  }
  core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005c06b0(this_ptr,0);
  core_stranger_cpp_CStranger_autoAimAtThreat_FUN_005c3960(this_ptr,0,delta_time);
  core_stranger_cpp_CStranger_autoAimAtThreat_FUN_005c3960(this_ptr,1,delta_time);
  core_stranger_cpp_CStranger_handleFireButton_FUN_005c5f10(this_ptr,delta_time);
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(&(this_ptr->base).inventory);
  core_stranger_cpp_CStranger_processWeaponTick_FUN_005c6590(this_ptr,delta_time);
  if ((this_ptr->weapon != (CWeapon *)0x0) && ((this_ptr->weapon->base).is_transparent != 0)) {
    (this_ptr->base).base.base.is_transparent = 1;
  }
  iVar24 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->goggle_sfx_handles[0]);
  if (iVar24 == 0) {
    if (g_CGamePtr->goggles_active != 0) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->goggle_sfx_handles[1]);
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
      uVar23 = sound_sndmain_cpp_startSfx_FUN_005a8e90("goggle-on.wav");
      this_ptr->goggle_sfx_handles[1] = uVar23;
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(0.0);
      uVar23 = sound_sndmain_cpp_startSfx_FUN_005a8e90("goggle-loop.wav");
      this_ptr->goggle_sfx_handles[0] = uVar23;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      sound_sndmain_cpp_setSfxFade_FUN_005a9c70(this_ptr->goggle_sfx_handles[0],1.0,1.0,0);
      return;
    }
  }
  else if (g_CGamePtr->goggles_active == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->goggle_sfx_handles[1]);
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->goggle_sfx_handles[0]);
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
    sound_sndmain_cpp_startSfx_FUN_005a8e90("goggle-off.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    return;
  }
  return;
}
