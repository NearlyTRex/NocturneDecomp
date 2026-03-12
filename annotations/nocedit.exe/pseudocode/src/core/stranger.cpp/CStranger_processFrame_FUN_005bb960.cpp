// Name: core_stranger.cpp_CStranger_processFrame_FUN_005bb960
// Address: 005bb960
// Address Range: [[005bb960, 005bdd15]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processFrame_FUN_005bb960(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_processFrame_FUN_005bb960(CStranger *this_ptr,float delta_time)

{
  CLocation *pCVar4;
  CDeformableModelInstance *pCVar5;
  float fVar10;
  float fVar11;
  CWeapon *pCVar13;
  CDemonActor *pCVar14;
  CCharacter_full_vtable *pCVar18;
  CBoxActor *this_ptr_01;
  CBoundingBox3D *pCVar16;
  CVector3f *pCVar17;
  CVector3f *pCVar19;
  float fVar18;
  float fVar20;
  SMotion *pSVar19;
  SMotion *pSVar21;
  CBoxActor *pCVar20;
  int iVar22;
  int iVar21;
  float fVar22;
  uint uVar23;
  uint uVar24;
  int iVar24;
  UOrientationVector *in_stack_fffffd10;
  UOrientationVector *in_stack_fffffd14;
  uint uStack_2dc;
  float fStack_2d8;
  float fStack_2d0;
  float *pfStack_2c4;
  float fStack_2c0;
  SDamageInfo SStack_2bc;
  byte auStack_280 [28];
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  CBoundingBox3D CStack_248;
  CVector3f CStack_230;
  CVector3f CStack_224;
  CVector3f CStack_218;
  CVector3f CStack_20c;
  CVector3f CStack_200;
  CVector3f aCStack_1f4 [2];
  byte auStack_1dc [12];
  uint uStack_1d0;
  float fStack_1cc;
  UOrientationVector UStack_1c8;
  float fStack_1bc;
  float fStack_1b0;
  CVector3f CStack_1ac;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  CVector3f aCStack_194 [2];
  CVector3f CStack_174;
  byte auStack_168 [8];
  float fStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  CVector3f aCStack_14c [2];
  byte auStack_134 [12];
  CVector3f CStack_128;
  CVector3f aCStack_114 [2];
  CVector3f CStack_fc;
  float fStack_f0;
  CVector3f CStack_ec;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c8;
  float fStack_c4;
  byte auStack_c0 [8];
  float fStack_b8;
  float fStack_b4;
  CVector3f CStack_b0;
  CVector3f aCStack_9c [2];
  UOrientationVector UStack_84;
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
  CMotionController *pCStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_3c;
  CDeformableModelInstance *pCStack_30;
  float *pfStack_2c;
  UOrientationVector *pUStack_24;
  float fStack_20;
  int local_1c;
  int iStack_18;
  int iStack_14;
  float fVar7;
  float fVar9;
  float fVar8;
  CVector3f *pCVar3;
  CDemonActor *pCVar10;
  CDeformableModelInstance *pCVar2;
  CLocation *pCVar1;
  float fVar5;
  float fVar4;
  float fVar6;
  CCharacter *this_ptr_00;
  CWeapon *pCVar11;
  float fVar13;
  CCharacter_full_vtable *pCVar12;
  CGame *pCVar15;
  bool bVar14;
  uint uVar25;
  
  local_1c = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,"DebugActionPending");
  pCVar10 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if ((pCVar10 != (CDemonActor *)0x0) && ((this_ptr->carry_object_bbox).max.x < -999999.0f)) {
    pCVar16 = (*((pCVar10->vtable)._ub)->getBoundingBox)
                        (pCVar10,(CBoundingBox3D *)(auStack_280 + 0x18));
    if (&this_ptr->carry_object_bbox != pCVar16) {
      (this_ptr->carry_object_bbox).min.x = (pCVar16->min).x;
      (this_ptr->carry_object_bbox).min.y = (pCVar16->min).y;
      (this_ptr->carry_object_bbox).min.z = (pCVar16->min).z;
    }
    pCVar19 = &(this_ptr->carry_object_bbox).max;
    if (pCVar19 != &pCVar16->max) {
      pCVar19->x = (pCVar16->max).x;
      (this_ptr->carry_object_bbox).max.y = (pCVar16->max).y;
      (this_ptr->carry_object_bbox).max.z = (pCVar16->max).z;
    }
    CStack_fc.y = (this_ptr->carry_object_bbox).min.x + (this_ptr->carry_object_bbox).max.x;
    CStack_fc.z = (this_ptr->carry_object_bbox).min.y + (this_ptr->carry_object_bbox).max.y;
    auStack_c0._4_4_ = CStack_fc.y * 0.5f;
    fStack_b8 = CStack_fc.z * 0.5f;
    fStack_b4 = ((this_ptr->carry_object_bbox).min.z + (this_ptr->carry_object_bbox).max.z) *
                0.5f;
    pCVar17 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((this_ptr->base).base.carry_hands[1].carry_actor,&CStack_b0,
                         (CVector3f *)(auStack_c0 + 4));
    pCVar19 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)this_ptr,(CVector3f *)auStack_134,pCVar17);
    if (&this_ptr->carry_object_world_center != pCVar19) {
      (this_ptr->carry_object_world_center).x = pCVar19->x;
      (this_ptr->carry_object_world_center).y = pCVar19->y;
      (this_ptr->carry_object_world_center).z = pCVar19->z;
    }
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042ea40((CCharacter *)this_ptr,delta_time);
  core_game_cpp_CGame_slamDT_FUN_004e3080(g_CGamePtr,delta_time);
  fVar20 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar20;
  if (fVar20 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  fVar20 = this_ptr->action_timer - delta_time;
  this_ptr->action_timer = fVar20;
  if (fVar20 < 0.0) {
    this_ptr->action_timer = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  pCVar19 = core_stranger_cpp_CStranger_getHandsMidpoint_FUN_005be490(this_ptr,aCStack_194);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_230,pCVar19);
  core_stranger_cpp_CStranger_processMotionEvents_FUN_005bdd20(this_ptr,delta_time);
  local_1c = 1;
  UStack_84.vec.y = 1.4013e-45;
  pUStack_24 = (UOrientationVector *)0x1;
  bVar14 = true;
  iVar24 = 1;
  if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
    local_1c = 0;
    pUStack_24 = (UOrientationVector *)0x0;
    UStack_84.vec.y = 0.0;
    bVar14 = false;
    iVar24 = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if ((this_ptr->base).pushed_object != (CBoxActor *)0x0) {
    bVar14 = false;
    iVar24 = 0;
    local_1c = 0;
    pUStack_24 = (UOrientationVector *)0x0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if (((this_ptr->base).ladder_to_climb != (CLadder *)0x0) ||
     (this_ptr->ladder_to_descend != (CLadder *)0x0)) {
    iVar24 = 0;
    bVar14 = false;
    UStack_84.vec.y = 0.0;
    pUStack_24 = (UOrientationVector *)0x0;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"ladder\n");
    }
  }
  if (((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) || (this_ptr->action_pending == 4))
  {
    bVar14 = false;
    iVar24 = 0;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"pickup\n");
    }
  }
  pCStack_50 = &(this_ptr->base).base.model.motion_controller;
  fVar18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_50,0x24);
  if ((((0.0 < fVar18) ||
       (fVar20 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_50,0x28)
       , 0.0 < fVar20)) ||
      (fVar20 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_50,0x29),
      0.0 < fVar20)) || ((this_ptr->base).base.hit_points <= 0.0)) {
    bVar14 = false;
    iVar24 = 0;
    pUStack_24 = (UOrientationVector *)0x0;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"hurt\n");
    }
  }
  pCStack_54 = &(this_ptr->base).base.model.motion_controller;
  fVar20 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_54,0x1c);
  if (((0.0 < fVar20) ||
      (fVar20 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_54,0x1d),
      0.0 < fVar20)) ||
     ((fVar20 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_54,0x1e),
      0.0 < fVar20 ||
      ((this_ptr->action_pending == 5 || ((this_ptr->base).door_to_open != (CDoor *)0x0)))))) {
    bVar14 = false;
    iVar24 = 0;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"door\n");
    }
  }
  fVar20 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                     (&(this_ptr->base).base.model.motion_controller,0x2e);
  if (0.0 < fVar20) {
    bVar14 = false;
    iVar24 = 0;
    pUStack_24 = (UOrientationVector *)0x0;
    UStack_84.vec.y = 0.0;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"sitting\n");
    }
  }
  if (this_ptr->action_pending == 1) {
    iVar24 = 0;
    bVar14 = false;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"stashinventory\n");
    }
  }
  if (this_ptr->action_pending == 2) {
    iVar24 = 0;
    bVar14 = false;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"placeobject\n");
    }
  }
  if (this_ptr->action_pending == 6) {
    iVar24 = 0;
    bVar14 = false;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"putdownobject\n");
    }
  }
  if (this_ptr->action_pending == 3) {
    iVar24 = 0;
    bVar14 = false;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"toss\n");
    }
  }
  if (this_ptr->action_pending == 7) {
    iVar24 = 0;
    bVar14 = false;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"attackmelee\n");
    }
  }
  if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) {
    if ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0) {
      UStack_84.vec.y = 1.4013e-45;
    }
    if ((this_ptr->base).base.base.location.position.y !=
        (this_ptr->base).base.closest_distance_threshold) {
      UStack_84.vec.y = 1.4013e-45;
    }
  }
  fVar20 = (float)12.566370614;
  pCStack_64 = &(this_ptr->base).base.model.motion_controller;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar20;
  pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_64);
  if ((pSVar19->state_index == 4) ||
     (pSVar21 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_64),
     pSVar21->state_index == 5)) {
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.x * (float)2;
  }
  if ((this_ptr->base).nearby_interactive_actor == (CDemonActor *)0x0) {
    fVar20 = this_ptr->interact_blend - delta_time * (float)2;
    this_ptr->interact_blend = fVar20;
    if (fVar20 < 0.0) {
      this_ptr->interact_blend = 0.0;
    }
  }
  else {
    fVar20 = delta_time * (float)2 + this_ptr->interact_blend;
    this_ptr->interact_blend = fVar20;
    if (1.0 < fVar20) {
      this_ptr->interact_blend = 1.0;
    }
  }
  iStack_60 = 1;
  if ((this_ptr->base).ladder_to_climb == (CLadder *)0x0) {
    if (this_ptr->ladder_to_descend == (CLadder *)0x0) {
      pCVar14 = (this_ptr->base).nearby_interactive_actor;
      if (pCVar14 == (CDemonActor *)0x0) {
        pCVar14 = (this_ptr->base).base.grabbed_by;
        if (pCVar14 == (CDemonActor *)0x0) {
          if ((this_ptr->base).pushed_object == (CBoxActor *)0x0) {
            iVar22 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                               ((CCharacter *)this_ptr,delta_time);
            pCVar5 = &(this_ptr->base).base.model;
            if (iVar22 == 0) {
              if (local_1c != 0) {
                pSVar21 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                    (&pCVar5->motion_controller);
                switch(pSVar21->state_index) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  if ((this_ptr->base).base.is_on_ground != 0) {
                    pSVar21 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                        (&(this_ptr->base).base.model.motion_controller);
                    iStack_58 = pSVar21->state_index;
                    iStack_18 = 0;
                    if ((this_ptr->base).player_control.action_states[0] == 0) {
                      if ((this_ptr->base).player_control.action_states[1] == 0) {
                        fVar20 = (this_ptr->base).player_control.strafe_speed;
                        if ((float)-0.01 <= fVar20) {
                          if (0.01 < (double)fVar20) {
                            iStack_18 = 5;
                          }
                        }
                        else {
                          iStack_18 = 4;
                        }
                      }
                      else {
                        iStack_18 = 2;
                      }
                    }
                    else if ((this_ptr->base).player_control.action_states[2] == 0) {
                      iStack_18 = 1;
                    }
                    else {
                      iStack_18 = 3;
                    }
                    UStack_84.vec.z = (float)&(this_ptr->base).base.model;
                    fVar20 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                       ((CMotionController *)UStack_84.vec.z,1);
                    UStack_84.vec.x = fVar20 * 2.5f;
                    fVar20 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                       ((CMotionController *)UStack_84.vec.z,3);
                    uVar25 = UStack_84.vec.z;
                    UStack_84.vec.z = fVar20 * 3.5f + UStack_84.vec.x;
                    fVar22 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                       ((CMotionController *)uVar25,2);
                    fVar11 = fVar22 * 1.5f;
                    fVar20 = (this_ptr->base).player_control.strafe_speed;
                    fVar13 = (this_ptr->base).player_control.turn_speed *
                             (this_ptr->base).base.turn_speed;
                    iVar22 = (this_ptr->base).player_control.action_states[7];
                    (this_ptr->base).base.turn_angle_accumulator = fVar13;
                    fVar10 = (this_ptr->base).base.turn_angle_accumulator;
                    fVar5 = (this_ptr->base).base.turn_angle_accumulator;
                    fVar6 = (this_ptr->right_arm_aim).aim_yaw;
                    fVar7 = (this_ptr->left_arm_aim).aim_yaw;
                    fVar8 = (this_ptr->right_arm_aim).target_yaw;
                    fVar9 = (this_ptr->left_arm_aim).target_yaw;
                    this_ptr->turn_angle = this_ptr->turn_angle - fVar13;
                    (this_ptr->right_arm_aim).aim_yaw = fVar6 - fVar13;
                    (this_ptr->left_arm_aim).aim_yaw = fVar7 - fVar10;
                    (this_ptr->right_arm_aim).target_yaw = fVar8 - fVar10;
                    fVar10 = (this_ptr->base).base.position_delta.x;
                    (this_ptr->left_arm_aim).target_yaw = fVar9 - fVar5;
                    (this_ptr->base).base.position_delta.x =
                         fVar20 * delta_time * (fVar11 + UStack_84.vec.z) + fVar10;
                    if ((iVar22 != 0) && ((this_ptr->base).base.layer_action_index != 0xe)) {
                      switch(iStack_58) {
                      case 0:
                      case 2:
                      case 4:
                      case 5:
                        (this_ptr->base).base.is_on_ground = 0;
                        iStack_18 = 0xb;
                        break;
                      case 1:
                        (this_ptr->base).base.is_on_ground = 0;
                        iStack_18 = 0xb;
                        break;
                      case 3:
                        (this_ptr->base).base.is_on_ground = 0;
                        iStack_18 = 7;
                      }
                    }
                    if (iStack_18 != iStack_58) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                (&(this_ptr->base).base.model.motion_controller,iStack_18,1);
                    }
                    if ((this_ptr->base).player_control.action_states[4] != 0) {
                      core_hero_cpp_CHero_tryUseSelectedItem_FUN_004f3760(&this_ptr->base);
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
                  iVar22 = 1;
                }
                else {
                  iVar22 = 0;
                }
LAB_005bd19f:
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,iVar22,1);
              }
              else {
                if (uVar24 < 3) {
                  iVar22 = 3;
                  goto LAB_005bd19f;
                }
                if (uVar24 != 3) {
                  iVar22 = 0;
                  goto LAB_005bd19f;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar5->motion_controller,0,1);
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
              }
              (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
              (this_ptr->base).base.model.accumulated_root_motion.y =
                   (this_ptr->base).base.model.accumulated_root_motion.z;
              (this_ptr->base).base.model.accumulated_root_motion.x =
                   (this_ptr->base).base.model.accumulated_root_motion.y;
            }
          }
          else {
            pCStack_78 = pCVar14;
            if ((this_ptr->base).player_control.action_states[3] != 0) {
              this_ptr_01 = (this_ptr->base).pushed_object;
              (*((this_ptr_01->base).vtable._ub)->getBoundingBox)(&this_ptr_01->base,&CStack_248);
              fStack_1b0 = CStack_248.min.z + CStack_248.max.z;
              CStack_1ac.x = CStack_248.max.x + CStack_230.x;
              auStack_168._0_4_ = fStack_1b0 * 0.5f;
              auStack_168._4_4_ = CStack_1ac.x * 0.5f;
              CStack_1ac.y = CStack_248.max.y + CStack_230.y;
              fStack_160 = CStack_1ac.y * 0.5f;
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        (&((this_ptr->base).pushed_object)->base,&CStack_174,
                         (CVector3f *)auStack_168);
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)this_ptr,aCStack_9c,&CStack_174);
              pCVar19 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                  (aCStack_114,aCStack_9c);
              in_stack_fffffd14 = (UOrientationVector *)pCVar19->y;
              in_stack_fffffd10 = (UOrientationVector *)0x5bd021;
              pfStack_2c4 = (float *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                               ((float)in_stack_fffffd14);
              CStack_fc.x = (CStack_248.max.z - CStack_248.min.z) * 0.5f;
              CStack_fc.z = (CStack_230.y - CStack_248.max.y) * 0.5f;
              CStack_fc.y = 0.0;
              if ((((aCStack_9c[0].z - SQRT(CStack_fc.z * CStack_fc.z + CStack_fc.x * CStack_fc.x) <
                     (float)3) && (1.0 < aCStack_9c[0].y)) &&
                  (aCStack_9c[0].y < (float)5)) &&
                 (ABS((float)pfStack_2c4) < (float)0.78539816337500001)) {
                pfStack_2c = (float *)(delta_time * (float)3.1415926535000001);
                if ((float)pfStack_2c4 < -(float)pfStack_2c) {
                  pfStack_2c4 = (float *)-(float)pfStack_2c;
                }
                if ((float)pfStack_2c < (float)pfStack_2c4) {
                  pfStack_2c4 = pfStack_2c;
                }
                in_stack_fffffd14 = &(this_ptr->base).base.base.orient;
                (this_ptr->base).base.base.orient.vec.y =
                     (this_ptr->base).base.base.orient.vec.y + (float)pfStack_2c4;
                in_stack_fffffd10 = (UOrientationVector *)this_ptr;
                core_charactr_cpp_CCharacter_setOrientation_FUN_0042ded0
                          ((CCharacter *)this_ptr,in_stack_fffffd14);
                goto switchD_005bd22e_caseD_6;
              }
            }
            if (pCStack_78 == (CDemonActor *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,0,1);
              core_hero_cpp_CHero_stopPushingBox_FUN_004f3350(&this_ptr->base);
            }
          }
        }
        else {
          if ((this_ptr->base).base.grabbed_type == 0) {
            pCVar19 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                ((CDemonActor *)this_ptr,(CVector3f *)(auStack_168 + 4),
                                 &(pCVar14->location).position);
            pCVar19 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                ((CVector3f *)auStack_1dc,pCVar19);
            fStack_2d0 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar19->y);
            if (fStack_2d0 < (float)-1.57079632675) {
              fStack_2d0 = fStack_2d0 + 3.141593f;
            }
            if ((float)1.57079632675 < fStack_2d0) {
              fStack_2d0 = fStack_2d0 + -3.141593f;
            }
            fStack_48 = delta_time * (float)3.1415926535000001;
            fStack_6c = -fStack_48;
            if (fStack_2d0 < fStack_6c) {
              fStack_2d0 = fStack_6c;
            }
            if (fStack_48 < fStack_2d0) {
              fStack_2d0 = fStack_48;
            }
            (this_ptr->base).base.base.orient.vec.y =
                 (this_ptr->base).base.base.orient.vec.y + fStack_2d0;
            core_charactr_cpp_CCharacter_setOrientation_FUN_0042ded0
                      ((CCharacter *)this_ptr,&(this_ptr->base).base.base.orient);
          }
          this_ptr_00 = (CCharacter *)(this_ptr->base).base.grabbed_by;
          pCVar18 = (this_ptr_00->base).vtable._uc;
          pCStack_30 = &(this_ptr->base).base.model;
          pCVar19 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                              (pCStack_30,&CStack_ec,0);
          iVar21 = (*(pCVar18->_uc).attractActorToward)(this_ptr_00,(CDemonActor *)this_ptr,pCVar19)
          ;
          if (iVar21 == 0) {
            (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
          }
          else if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
            fVar20 = this_ptr->grab_timer + delta_time;
            this_ptr->grab_timer = fVar20;
            if ((1.5f <= fVar20) && ((this_ptr->base).base.grabbed_type != 1)) {
              pCStack_78 = (CDemonActor *)
                           core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                     ((CMotionController *)&pUStack_24->vec,0x22);
              in_stack_fffffd10 = (UOrientationVector *)0x5bc90d;
              in_stack_fffffd14 = pUStack_24;
              fVar20 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                 ((CMotionController *)&pUStack_24->vec,0x23);
              if (fVar20 + (float)pCStack_78 <= 0.0) {
                in_stack_fffffd14 = (UOrientationVector *)0x5bceeb;
                (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseFromGrab)
                          ((CCharacter *)this_ptr);
              }
              else if ((this_ptr->base).player_control.action_states[3] != 0) {
                in_stack_fffffd14 = (UOrientationVector *)0x23;
                in_stack_fffffd10 = pUStack_24;
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          ((CMotionController *)&pUStack_24->vec,0x23,1);
                (this_ptr->base).player_control.action_states[3] = 0;
              }
            }
            goto switchD_005bd22e_caseD_6;
          }
          in_stack_fffffd14 = (UOrientationVector *)0x0;
          in_stack_fffffd10 = (UOrientationVector *)&(this_ptr->base).base.model;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    ((CMotionController *)in_stack_fffffd10,0,1);
        }
      }
      else {
        (*((pCVar14->vtable)._ub)->getInteractionInfo)(pCVar14,(SInteractionInfo *)auStack_280);
        if (((float)auStack_280._8_4_ == 0.0) || (this_ptr != (CStranger *)auStack_280._12_4_)) {
          in_stack_fffffd10 = (UOrientationVector *)0x5bce6e;
          in_stack_fffffd14 = (UOrientationVector *)this_ptr;
          core_hero_cpp_CHero_stopNearbyInteraction_FUN_004f3580(&this_ptr->base);
        }
        else {
          pCVar14 = ((CHero *)auStack_280._12_4_)->nearby_interactive_actor;
          UStack_1c8.vec.x = (pCVar14->orient).vec.x;
          UStack_1c8.vec.y = (pCVar14->orient).vec.y;
          UStack_1c8.vec.z = (pCVar14->orient).vec.z;
          pUStack_24 = (UOrientationVector *)
                       ((this_ptr->base).player_control.turn_speed * (float)3.1415926535000001 *
                        (float)0.5 * delta_time);
          if ((float)pUStack_24 < fStack_264) {
            pUStack_24 = (UOrientationVector *)fStack_264;
          }
          if ((float)auStack_280._24_4_ < (float)pUStack_24) {
            pUStack_24 = (UOrientationVector *)auStack_280._24_4_;
          }
          UStack_1c8.vec.y =
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(UStack_1c8.vec.y + (float)pUStack_24);
          fStack_20 = (this_ptr->base).player_control.look_up_down_speed * (float)3.1415926535000001 *
                      (float)0.5 * delta_time;
          if (fStack_20 < fStack_25c) {
            fStack_20 = fStack_25c;
          }
          if (fStack_260 < fStack_20) {
            fStack_20 = fStack_260;
          }
          UStack_1c8.vec.x =
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(UStack_1c8.vec.x + fStack_20);
          in_stack_fffffd10 = &UStack_1c8;
          pCVar14 = (this_ptr->base).nearby_interactive_actor;
          iVar22 = (*((pCVar14->vtable)._ub)->updateInteraction)
                             (pCVar14,in_stack_fffffd10,&(this_ptr->base).player_control);
          pUStack_24 = (UOrientationVector *)&(this_ptr->base).base.model;
          if (iVar22 == 0) {
            in_stack_fffffd14 = (UOrientationVector *)0x5bceaf;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      ((CMotionController *)pUStack_24,0,1);
            core_hero_cpp_CHero_stopNearbyInteraction_FUN_004f3580(&this_ptr->base);
          }
          else {
            SStack_2bc.gore_multiplier =
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           ((((this_ptr->base).nearby_interactive_actor)->orient).vec.y -
                            (this_ptr->base).base.base.orient.vec.y);
            if ((float)-0.01 <= SStack_2bc.gore_multiplier) {
              if ((double)SStack_2bc.gore_multiplier <= 0.01) {
                iVar22 = 0;
              }
              else {
                iVar22 = 4;
              }
            }
            else {
              iVar22 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      ((CMotionController *)&pUStack_24->vec,iVar22,1);
            UStack_84.vec.x = (this_ptr->base).base.base.orient.vec.x;
            UStack_84.vec.z = (this_ptr->base).base.base.orient.vec.z;
            UStack_84.vec.y =
                 SStack_2bc.gore_multiplier * this_ptr->interact_blend +
                 (this_ptr->base).base.base.orient.vec.y;
            core_charactr_cpp_CCharacter_setOrientation_FUN_0042ded0
                      ((CCharacter *)this_ptr,&UStack_84);
            auStack_1dc._8_4_ = 0.0;
            delta_time = fStack_264 + (float)-1;
            uStack_1d0 = 0;
            fStack_1cc = delta_time;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((this_ptr->base).nearby_interactive_actor,&CStack_fc,
                       (CVector3f *)(auStack_1dc + 8));
            auStack_134._8_4_ = CStack_fc.x - (this_ptr->base).base.base.location.position.x;
            CStack_128.x = CStack_fc.y - (this_ptr->base).base.base.location.position.y;
            CStack_128.y = CStack_fc.z - (this_ptr->base).base.base.location.position.z;
            pfStack_2c = &this_ptr->interact_blend;
            in_stack_fffffd14 = (UOrientationVector *)0x5bcdfe;
            pCVar19 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                                ((CDemonActor *)this_ptr,(CVector3f *)auStack_c0,
                                 (CVector3f *)(auStack_134 + 8));
            CStack_174.x = pCVar19->x * *pfStack_2c;
            CStack_174.y = pCVar19->y * *pfStack_2c;
            CStack_174.z = pCVar19->z * *pfStack_2c;
            pCVar19 = &(this_ptr->base).base.model.accumulated_root_motion;
            if (pCVar19 != &CStack_174) {
              pCVar19->x = CStack_174.x;
              (this_ptr->base).base.model.accumulated_root_motion.y = CStack_174.y;
              (this_ptr->base).base.model.accumulated_root_motion.z = CStack_174.z;
            }
            (this_ptr->base).base.model.accumulated_root_motion.y = 0.0;
          }
        }
      }
    }
    else {
      fVar20 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&(this_ptr->base).base.model.motion_controller,0x2b);
      if (0.0 < fVar20) {
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
          fStack_2c0 = 1.0;
        }
        else {
          fStack_2c0 = delta_time / this_ptr->ladder_blend_time;
          this_ptr->ladder_blend_time = this_ptr->ladder_blend_time - delta_time;
        }
        pCVar19 = &this_ptr->ladder_offset;
        fVar20 = (this_ptr->ladder_offset).y;
        auStack_c0._0_4_ = (this_ptr->ladder_offset).z * fStack_2c0;
        pCVar4 = &(this_ptr->base).base.base.location;
        fStack_4c = 1.0 - fStack_2c0;
        fVar10 = (this_ptr->base).base.base.location.position.y;
        (pCVar4->position).x = (pCVar4->position).x + pCVar19->x * fStack_2c0;
        fVar11 = (this_ptr->base).base.base.location.position.z;
        (this_ptr->base).base.base.location.position.y = fVar10 + fVar20 * fStack_2c0;
        (this_ptr->base).base.base.location.position.z = fVar11 + (float)auStack_c0._0_4_;
        pCVar19->x = pCVar19->x * fStack_4c;
        (this_ptr->ladder_offset).y = (this_ptr->ladder_offset).y * fStack_4c;
        (this_ptr->ladder_offset).z = (this_ptr->ladder_offset).z * fStack_4c;
        fVar20 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           (this_ptr->ladder_facing_angle - (this_ptr->base).base.base.orient.vec.y)
        ;
        (this_ptr->base).base.turn_angle_accumulator = fVar20 * fStack_2c0;
      }
      fVar20 = (*((this_ptr->base).base.base.vtable._ub)->cylinderGroundCheck)
                         ((CDemonActor *)this_ptr,(this_ptr->base).base.collision_cylinder_height,
                          (CVector3f *)0x0);
      (this_ptr->base).base.closest_distance_threshold = fVar20;
    }
  }
  else {
    fVar20 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,0x2a);
    if (0.0 < fVar20) {
      pCVar19 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          (&((this_ptr->base).ladder_to_climb)->base,&CStack_128,
                           &((this_ptr->base).ladder_to_climb)->ladder_size);
      if (pCVar19->y + (float)-4 < (this_ptr->base).base.base.location.position.y) {
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
        fStack_2d8 = 1.0;
      }
      else {
        fStack_2d8 = delta_time / this_ptr->ladder_blend_time;
        this_ptr->ladder_blend_time = this_ptr->ladder_blend_time - delta_time;
      }
      pCVar19 = &this_ptr->ladder_offset;
      fVar20 = (this_ptr->ladder_offset).y;
      fVar10 = (this_ptr->ladder_offset).z;
      pCVar1 = &(this_ptr->base).base.base.location;
      fStack_3c = 1.0 - fStack_2d8;
      fVar11 = (this_ptr->base).base.base.location.position.y;
      (pCVar1->position).x = (pCVar1->position).x + pCVar19->x * fStack_2d8;
      fVar4 = (this_ptr->base).base.base.location.position.z;
      (this_ptr->base).base.base.location.position.y = fVar11 + fVar20 * fStack_2d8;
      (this_ptr->base).base.base.location.position.z = fVar4 + fVar10 * fStack_2d8;
      pCVar19->x = pCVar19->x * fStack_3c;
      (this_ptr->ladder_offset).y = (this_ptr->ladder_offset).y * fStack_3c;
      (this_ptr->ladder_offset).z = (this_ptr->ladder_offset).z * fStack_3c;
      fVar20 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (this_ptr->ladder_facing_angle - (this_ptr->base).base.base.orient.vec.y);
      (this_ptr->base).base.turn_angle_accumulator = fVar20 * fStack_2d8;
    }
  }
switchD_005bd22e_caseD_6:
  pCStack_68 = &(this_ptr->base).base.model.motion_controller;
  pSVar21 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_68);
  if ((pSVar21->state_index == 0x1b) &&
     (pCStack_70 = (CAmmoBox *)
                   core_actor_cpp_castToClassHash_FUN_0040c790
                             ((this_ptr->base).object_to_pick_up,g_CAmmoBoxClassInfo.name_hash),
     pCStack_70 != (CAmmoBox *)0x0)) {
    fVar20 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(pCStack_68);
    core_ammobox_cpp_CAmmoBox_openBox_FUN_00411690(pCStack_70,fVar20);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_stranger_cpp_CStranger_updateTurnBlending_FUN_005bf800(this_ptr,delta_time);
  if (iStack_60 != 0) {
    (this_ptr->pending_velocity).z = 0.0;
    (this_ptr->pending_velocity).y = (this_ptr->pending_velocity).z;
    (this_ptr->pending_velocity).x = (this_ptr->pending_velocity).y;
  }
  if (((this_ptr->base).ladder_to_climb == (CLadder *)0x0) &&
     (this_ptr->ladder_to_descend == (CLadder *)0x0)) {
    if (UStack_84.vec.y == 0.0) goto LAB_005bc1a6;
    pCStack_5c = &(this_ptr->base).base.model.motion_controller;
    pSVar21 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_5c);
    pCVar19 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar3 = &(this_ptr->base).base.position_delta;
    CStack_218.x = pCVar19->x + pCVar3->x;
    fStack_20 = (float)pSVar21->state_index;
    CStack_218.y = (this_ptr->base).base.model.accumulated_root_motion.y +
                   (this_ptr->base).base.position_delta.y;
    CStack_218.z = (this_ptr->base).base.model.accumulated_root_motion.z +
                   (this_ptr->base).base.position_delta.z;
    fStack_44 = 18.0f * delta_time;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar20 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar20;
    pCVar19->x = fVar20;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar3->x = (this_ptr->base).base.position_delta.y;
    if (fStack_20 == 9.80909e-45) {
      CStack_218.x = 0.0;
      CStack_218.y = 0.0;
      this_ptr->jump_speed = 18.0f;
      this_ptr->airborne_timer = 0.0;
      CStack_218.z = fStack_44;
    }
    else {
      if (fStack_20 == 1.12104e-44) {
        fVar10 = (float)32;
        fVar20 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = 18.0f;
        fVar20 = fVar20 - delta_time * fVar10;
        this_ptr->airborne_timer = 0.0;
        CStack_218.z = fStack_44;
        goto LAB_005bd5e4;
      }
      if (fStack_20 == 1.26117e-44) {
        fVar11 = (float)32;
        CStack_218.x = 0.0;
        CStack_218.y = 0.0;
        fVar10 = 0.5f * 18.0f;
        CStack_218.z = this_ptr->jump_speed * delta_time;
        this_ptr->airborne_timer = 0.0;
        fVar20 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = this_ptr->jump_speed - fVar10 * delta_time;
        fVar10 = this_ptr->jump_speed;
        (this_ptr->base).base.velocity.y = fVar20 - delta_time * fVar11;
        if (fVar10 < 0.0) {
          this_ptr->jump_speed = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_5c,0xf,1);
        }
      }
      else if (fStack_20 == 1.4013e-44) {
        CStack_218.y = 0.0;
        CStack_218.x = 0.0;
        CStack_218.z = fStack_44;
      }
      else if (fStack_20 == 1.54143e-44) {
        this_ptr->airborne_timer = 0.0;
        this_ptr->jump_speed = 10.0f;
      }
      else if (fStack_20 == 1.68156e-44) {
        CStack_218.z = 10.0f * delta_time;
        fVar10 = (float)32;
        fVar20 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = 10.0f;
        fVar20 = fVar20 - delta_time * fVar10;
        this_ptr->airborne_timer = 0.0;
LAB_005bd5e4:
        CStack_218.y = 0.0;
        CStack_218.x = 0.0;
LAB_005bd5e6:
        (this_ptr->base).base.velocity.y = fVar20;
      }
      else if (fStack_20 == 1.82169e-44) {
        fVar11 = (float)32;
        CStack_218.x = 0.0;
        CStack_218.y = 0.0;
        fVar10 = 0.5f * 10.0f;
        CStack_218.z = this_ptr->jump_speed * delta_time;
        this_ptr->airborne_timer = 0.0;
        fVar20 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = this_ptr->jump_speed - fVar10 * delta_time;
        fVar10 = this_ptr->jump_speed;
        (this_ptr->base).base.velocity.y = fVar20 - delta_time * fVar11;
        if (fVar10 < 0.0) {
          this_ptr->jump_speed = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_5c,0xf,1);
        }
      }
      else {
        if (fStack_20 != 1.96182e-44) {
          if (fStack_20 == 2.10195e-44) {
            CStack_218.z = 0.0;
            fVar20 = (this_ptr->base).base.velocity.y - delta_time * (float)32;
            this_ptr->airborne_timer = 9999.9;
            goto LAB_005bd5e4;
          }
          if (fStack_20 == 2.24208e-44) {
            CStack_218.z = 0.0;
            CStack_218.y = 0.0;
            CStack_218.x = 0.0;
            fVar20 = (this_ptr->base).base.velocity.y - delta_time * (float)32;
          }
          else {
            fVar20 = (this_ptr->base).base.velocity.y - delta_time * (float)32;
          }
          goto LAB_005bd5e6;
        }
        CStack_218.y = 0.0;
      }
    }
    pCVar19 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                        ((CDemonActor *)this_ptr,&CStack_224,&this_ptr->pending_velocity);
    fStack_158 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_154 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_150 = delta_time * (this_ptr->base).base.velocity.z;
    UStack_1c8.vec.y = fStack_158 + pCVar19->x;
    UStack_1c8.vec.z = fStack_154 + pCVar19->y;
    CStack_218.x = CStack_218.x + UStack_1c8.vec.y;
    fStack_1bc = fStack_150 + pCVar19->z;
    CStack_218.y = CStack_218.y + UStack_1c8.vec.z;
    CStack_218.z = CStack_218.z + fStack_1bc;
    this_ptr->fall_velocity_snapshot = (this_ptr->base).base.velocity.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&CStack_218);
    if ((this_ptr->base).base.base.location.position.y <
        (this_ptr->base).base.closest_distance_threshold + (float)0.10000000000000001) {
      (this_ptr->base).base.is_on_ground = 1;
    }
    if (((fStack_20 == 2.10195e-44) || (fStack_20 == 1.26117e-44)) || (fStack_20 == 1.82169e-44)) {
      if ((this_ptr->base).base.is_on_ground != 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"Splat at %3.2f fps\n",
                   (double)(this_ptr->base).base.velocity.y);
        fVar20 = -this_ptr->fall_velocity_snapshot;
        uVar25 = SUB84(__BITCAST_UINT64((double)fVar20),0);
        uStack_2dc = (uint)((ulonglong)(double)fVar20 >> 0x20);
        if (fVar20 < (float)20) {
          if (((fStack_20 == 1.82169e-44) || (fStack_20 == 1.26117e-44)) ||
             (fStack_20 == 2.10195e-44)) goto LAB_005bd763;
        }
        else {
          uStack_74 = 0;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_2bc);
          SStack_2bc.damage_amount =
               (float)(((float10)__BITCAST_DOUBLE(CONCAT44(uStack_2dc,uVar25)) + (float10)-20) *
                       (float10)0.050000000000000003 * (float10)100);
          if (0x42c80000 < (int)SStack_2bc.damage_amount) {
            uStack_74 = 1;
            SStack_2bc.damage_amount = 9999.0;
          }
          pCVar12 = (this_ptr->base).base.base.vtable._uc;
          (this_ptr->base).invincibility_timer = 0.0;
          (*(pCVar12->_uc).processDamage)((CCharacter *)this_ptr,&SStack_2bc);
          if (((this_ptr->base).base.hit_points <= 0.0) || (fStack_6c != 0.0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0x12,1);
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"fall-?.wav");
            iVar22 = (this_ptr->base).base.is_on_ground;
            pfStack_2c4 = (float *)0.5f;
            goto joined_r0x005bdb44;
          }
          in_stack_fffffd14 = (UOrientationVector *)0x1;
          in_stack_fffffd10 = (UOrientationVector *)0x11;
LAB_005bd763:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,(int)in_stack_fffffd10,
                     (int)in_stack_fffffd14);
        }
        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)this_ptr,&g_ZeroVector.f,fVar20 * 0.025f + 1.0);
      }
      iVar22 = (this_ptr->base).base.is_on_ground;
      pfStack_2c4 = (float *)0.5f;
    }
    else {
      iVar22 = (this_ptr->base).base.is_on_ground;
      pfStack_2c4 = (float *)0.5f;
    }
joined_r0x005bdb44:
    0.5f = (float)pfStack_2c4;
    if (iVar22 == 0) {
      this_ptr->airborne_timer = this_ptr->airborne_timer + delta_time;
      if (fStack_20 == 4.2039e-45) {
        pfStack_2c4 = (float *)((float)pfStack_2c4 * (float)2);
      }
      if (((float)pfStack_2c4 < this_ptr->airborne_timer) ||
         (this_ptr->fall_velocity_snapshot < (float)-20)) {
        if (fStack_20 != 2.10195e-44) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0xf,1);
        }
        (this_ptr->base).base.is_on_ground = 0;
      }
      goto LAB_005bc1a6;
    }
  }
  else {
    UStack_84.vec.z = (float)&(this_ptr->base).base.model.accumulated_root_motion;
    pCVar19 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)this_ptr,&CStack_1ac,(CVector3f *)UStack_84.vec.z);
    pCVar4 = &(this_ptr->base).base.base.location;
    (pCVar4->position).x = pCVar19->x + (pCVar4->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar19->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar19->z + (this_ptr->base).base.base.location.position.z;
    *(uint *)((int)UStack_84.vec.z + 8) = 0;
    *(uint *)((int)UStack_84.vec.z + 4) = *(uint *)((int)UStack_84.vec.z + 8);
    *(uint *)UStack_84.vec.z = *(uint *)((int)UStack_84.vec.z + 4);
  }
  this_ptr->airborne_timer = 0.0;
LAB_005bc1a6:
  (this_ptr->pending_velocity).z = 0.0;
  (this_ptr->pending_velocity).y = (this_ptr->pending_velocity).z;
  (this_ptr->pending_velocity).x = (this_ptr->pending_velocity).y;
  pCVar15 = g_CGamePtr;
  if (local_1c != 0) {
    if ((this_ptr->base).player_control.action_states[6] != 0) {
      if (this_ptr->guns_drawn == 0) {
        this_ptr->guns_drawn = 1;
      }
      else {
        this_ptr->guns_drawn = 0;
        if (pCVar15->auto_save_blocked != 0) {
          pCVar15->auto_save_blocked = 0;
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"flashlit.wav");
        }
      }
    }
    if ((((this_ptr->base).player_control.action_states[5] != 0) &&
        (pCVar11 = (this_ptr->base).inventory.selected_weapon, pCVar11 != (CWeapon *)0x0)) &&
       (pCVar11->can_attach_light != 0)) {
      uVar24 = (uint)(g_CGamePtr->auto_save_blocked == 0);
      g_CGamePtr->auto_save_blocked = uVar24;
      if (uVar24 != 0) {
        this_ptr->guns_drawn = 1;
      }
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"flashlit.wav");
    }
  }
  pCVar13 = (this_ptr->base).inventory.selected_weapon;
  if (pCVar13 == (CWeapon *)0x0) {
    g_CGamePtr->auto_save_blocked = 0;
  }
  else if (pCVar13->can_attach_light == 0) {
    g_CGamePtr->auto_save_blocked = 0;
  }
  if (pUStack_24 != (UOrientationVector *)0x0) {
    core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_005c5270(this_ptr,delta_time);
  }
  if (this_ptr->guns_drawn == 0) {
    fVar20 = this_ptr->guns_drawn_blend - delta_time / 1.2f;
    this_ptr->guns_drawn_blend = fVar20;
    if (fVar20 < 0.0) {
      this_ptr->guns_drawn_blend = 0.0;
    }
  }
  else {
    fVar20 = delta_time / 1.1f + this_ptr->guns_drawn_blend;
    this_ptr->guns_drawn_blend = fVar20;
    if (1.0 < fVar20) {
      this_ptr->guns_drawn_blend = 1.0;
    }
  }
  fVar20 = (this_ptr->right_arm_aim).recoil_timer - delta_time / 0.2f;
  this_ptr->frame_cleared = 0.0;
  (this_ptr->right_arm_aim).recoil_timer = fVar20;
  if (fVar20 <= 0.0) {
    (this_ptr->right_arm_aim).recoil_timer = 0.0;
  }
  fVar20 = (this_ptr->left_arm_aim).recoil_timer - delta_time / 0.2f;
  (this_ptr->left_arm_aim).recoil_timer = fVar20;
  if (fVar20 <= 0.0) {
    (this_ptr->left_arm_aim).recoil_timer = 0.0;
  }
  if (bVar14) {
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
  pCVar5 = &(this_ptr->base).base.model;
  fVar20 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                     (&pCVar5->motion_controller,6);
  if (fVar20 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004f3350(&this_ptr->base);
  }
  else {
    fVar20 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                       (&pCVar5->motion_controller);
    if ((1.0 < fVar20) &&
       (pCVar20 = (CBoxActor *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (&((this_ptr->base).pushed_object)->base,g_CBoxActorClassInfo.name_hash)
       , pCVar20 != (CBoxActor *)0x0)) {
      core_stranger_cpp_CStranger_getHandsMidpoint_FUN_005be490(this_ptr,aCStack_14c);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&CStack_20c,aCStack_14c);
      CStack_200.y = 0.0;
      CStack_200.x = CStack_20c.x - CStack_230.x;
      CStack_200.z = CStack_20c.z - CStack_230.z;
      pCVar19 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                          ((CDemonActor *)this_ptr,aCStack_1f4,&CStack_200);
      if (0.0 < pCVar19->z) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_00422390(pCVar20,&CStack_230,&CStack_200);
      }
    }
  }
  core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005c06b0(this_ptr,0);
  core_stranger_cpp_CStranger_autoAimAtThreat_FUN_005c3960(this_ptr,0,delta_time);
  core_stranger_cpp_CStranger_autoAimAtThreat_FUN_005c3960(this_ptr,1,delta_time);
  core_stranger_cpp_CStranger_handleFireButton_FUN_005c5f10(this_ptr);
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(&(this_ptr->base).inventory);
  core_stranger_cpp_CStranger_processWeaponTick_FUN_005c6590(this_ptr,delta_time);
  if ((this_ptr->weapon != (CWeapon *)0x0) && ((this_ptr->weapon->base).is_transparent != 0)) {
    (this_ptr->base).base.base.is_transparent = 1;
  }
  iVar22 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->goggle_sfx_handles[0]);
  if (iVar22 == 0) {
    if (g_CGamePtr->block_auto_save != 0) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->goggle_sfx_handles[1]);
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
      uVar23 = sound_sndmain_cpp_startSfx_FUN_005a8e90("goggle-on.wav");
      this_ptr->goggle_sfx_handles[1] = uVar23;
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(0.0);
      uVar24 = sound_sndmain_cpp_startSfx_FUN_005a8e90("goggle-loop.wav");
      this_ptr->goggle_sfx_handles[0] = uVar24;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      sound_sndmain_cpp_setSfxFade_FUN_005a9c70(this_ptr->goggle_sfx_handles[0],1.0,1.0,0);
      return;
    }
  }
  else if (g_CGamePtr->block_auto_save == 0) {
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
