// Name: core_stranger.cpp_CStranger_processFrame_FUN_00585b00
// Address: 00585b00
// Address Range: [[00585b00, 005881c1]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processFrame_FUN_00585b00(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_processFrame_FUN_00585b00(CStranger *this_ptr,float delta_time)

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
  CLadder *pCVar10;
  CWeapon *pCVar11;
  CBoxActor *this_ptr_00;
  EWalkState EVar12;
  int iVar13;
  CCharacter_full_vtable *pCVar14;
  float fVar15;
  CGame *pCVar16;
  float fVar17;
  SMotion *pSVar18;
  CAmmoBox *this_ptr_01;
  float fVar19;
  float fVar20;
  uint uVar21;
  int iVar22;
  float *pfVar23;
  uint *puVar24;
  int desired_state_index;
  float *pfVar25;
  uint *puVar26;
  byte bVar27;
  float afStackY_1384 [953];
  CCharacter *this_ptr_02;
  CBoundingBox3D *in_stack_fffffb68;
  CStranger *actor;
  ulonglong uVar28;
  CVector3f *pCVar29;
  UOrientationVector *in_stack_fffffb70;
  UOrientationVector *in_stack_fffffb74;
  uint uVar30;
  uint uStack_47c;
  float fStack_470;
  float fStack_460;
  float fStack_45c;
  SDamageInfo SStack_458;
  SInteractionInfo SStack_41c;
  UOrientationVector *pUStack_3fc;
  UOrientationVector *pUStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float local_3ec;
  float fStack_3e8;
  float afStack_3e4 [6];
  uint auStack_3cc [2];
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  uint auStack_3ac [4];
  float fStack_39c;
  float afStack_398 [4];
  float fStack_388;
  float fStack_378;
  float afStack_374 [4];
  float fStack_364;
  float fStack_360;
  float fStack_34c;
  float afStack_348 [6];
  float fStack_330;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  uint uStack_318;
  float fStack_304;
  float afStack_300 [6];
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  CVector3f CStack_2dc;
  UOrientationVector UStack_2c8;
  float afStack_2bc [7];
  float fStack_2a0;
  float afStack_29c [5];
  uint uStack_288;
  float fStack_280;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_258;
  float fStack_244;
  CVector3f CStack_240;
  float fStack_22c;
  uint uStack_228;
  float afStack_224 [4];
  float fStack_214;
  UOrientationVector *pUStack_210;
  float afStack_20c [7];
  float fStack_1f0;
  float fStack_1ec;
  float afStack_1e8 [4];
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  uint uStack_1cc;
  UOrientationVector *pUStack_1c8;
  float afStack_1c4 [7];
  uint uStack_1a8;
  float afStack_1a4 [4];
  float fStack_194;
  float fStack_190;
  uint uStack_18c;
  float fStack_188;
  float fStack_180;
  float fStack_16c;
  float afStack_168 [5];
  float fStack_154;
  float afStack_150 [6];
  uint uStack_138;
  uint uStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  CVector3f CStack_114;
  float fStack_100;
  float afStack_fc [4];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  CVector3f CStack_c0;
  float afStack_b4 [6];
  float fStack_9c;
  float afStack_98 [7];
  uint uStack_7c;
  float afStack_78 [2];
  CDeformableModelInstance *pCStack_70;
  CBoxActor *pCStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  CDeformableModelInstance *pCStack_50;
  float fStack_4c;
  UOrientationVector *pUStack_44;
  float fStack_40;
  CCharacter *pCStack_3c;
  int iStack_38;
  int local_34;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  CLadder *pCStack_20;
  int iStack_1c;
  CCharacter_full_vtable *pCStack_18;
  CMotionController *pCStack_14;
  
  bVar27 = 0;
  local_34 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                       (0x01C51D80,"?DebugActionPending" + 1);
  pCVar9 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if ((pCVar9 != (CDemonActor *)0x0) && ((this_ptr->carry_object_bbox).max.x < _DAT_005f6841)) {
    (*((pCVar9->vtable)._ub)->getBoundingBox)(pCVar9,in_stack_fffffb68);
    pfVar23 = afStack_3e4;
    pfVar25 = &SStack_41c.pitch_max;
    for (iVar22 = 6; iVar22 != 0; iVar22 = iVar22 + -1) {
      *pfVar25 = *pfVar23;
      pfVar23 = pfVar23 + (uint)bVar27 * -2 + 1;
      pfVar25 = pfVar25 + (uint)bVar27 * -2 + 1;
    }
    if (&this_ptr->carry_object_bbox != (CBoundingBox3D *)&pUStack_3fc) {
      (this_ptr->carry_object_bbox).min.x = (float)pUStack_3fc;
      (this_ptr->carry_object_bbox).min.y = (float)pUStack_3f8;
      (this_ptr->carry_object_bbox).min.z = fStack_3f4;
    }
    pCVar29 = &(this_ptr->carry_object_bbox).max;
    if (pCVar29 != (CVector3f *)&fStack_3f0) {
      pCVar29->x = fStack_3f0;
      (this_ptr->carry_object_bbox).max.y = local_3ec;
      (this_ptr->carry_object_bbox).max.z = fStack_3e8;
    }
    fStack_39c = (this_ptr->carry_object_bbox).min.x + (this_ptr->carry_object_bbox).max.x;
    afStack_398[0] = (this_ptr->carry_object_bbox).min.y + (this_ptr->carry_object_bbox).max.y;
    afStack_398[1] = (this_ptr->carry_object_bbox).min.z + (this_ptr->carry_object_bbox).max.z;
    fStack_120 = fStack_39c;
    afStack_150[(uint)bVar27 * -2 + 0xd] = afStack_398[(uint)bVar27 * -2];
    afStack_150[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0xe] =
         afStack_398[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
    afStack_168[0] = fStack_120 * _DAT_005f6845;
    afStack_168[1] = fStack_11c * _DAT_005f6845;
    afStack_168[2] = fStack_118 * _DAT_005f6845;
    UStack_2c8.vec.y = fStack_120 * _DAT_005f6845;
    afStack_2bc[(uint)bVar27 * -2 + -1] = afStack_168[(uint)bVar27 * -2 + 1];
    afStack_2bc[(uint)bVar27 * -2 + (uint)bVar27 * -2] =
         afStack_168[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 2];
    core_actor_cpp_FUN_00408b40((this_ptr->base).base.carry_hands[1].carry_actor);
    afStack_1c4[2] = afStack_348[3];
    afStack_1c4[(uint)bVar27 * -2 + 3] = afStack_348[(uint)bVar27 * -2 + 4];
    afStack_1c4[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4] =
         afStack_348[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 5];
    core_actor_cpp_FUN_00408bb0(this_ptr);
    fStack_324 = fStack_360;
    afStack_348[(uint)bVar27 * -2 + 10] = afStack_374[(uint)bVar27 * -2 + 6];
    afStack_348[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0xb] =
         afStack_374[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 7];
    if (&this_ptr->carry_object_world_center != (CVector3f *)(afStack_348 + 9)) {
      (this_ptr->carry_object_world_center).x = fStack_324;
      (this_ptr->carry_object_world_center).y = fStack_320;
      (this_ptr->carry_object_world_center).z = fStack_31c;
    }
  }
  core_charactr_cpp_FUN_00434790(this_ptr);
  core_game_cpp_CGame_slamDT_FUN_004d7f50(g_CGamePtr,delta_time);
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
  core_stranger_cpp_FUN_00588a10();
  afStack_b4[0] = fStack_330;
  afStack_b4[(uint)bVar27 * -2 + 1] = afStack_348[(uint)bVar27 * -2 + 7];
  afStack_b4[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 2] =
       afStack_348[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 8];
  core_actor_cpp_FUN_00408b40(this_ptr);
  uVar28 = CONCAT44(delta_time,this_ptr);
  CStack_114.x = afStack_20c[2];
  *(float *)((int)&CStack_114 + ((uint)bVar27 * -2 + -1) * 4 + 8) =
       afStack_20c[(uint)bVar27 * -2 + 3];
  *(float *)((int)&CStack_114 + ((uint)bVar27 * -2 + (uint)bVar27 * -2) * 4 + 8) =
       afStack_20c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4];
  core_stranger_cpp_FUN_005881d0(uVar28);
  local_34 = 1;
  fStack_40 = 1.4013e-45;
  pUStack_44 = (UOrientationVector *)0x1;
  iStack_24 = 1;
  iStack_28 = 1;
  if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
    local_34 = 0;
    pUStack_44 = (UOrientationVector *)0x0;
    iStack_24 = 0;
    iStack_28 = 0;
    fStack_40 = 0.0;
    if (iStack_2c != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if ((this_ptr->base).pushed_object != (CBoxActor *)0x0) {
    iStack_24 = 0;
    iStack_28 = 0;
    local_34 = 0;
    pUStack_44 = (UOrientationVector *)0x0;
    if (iStack_2c != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if (((this_ptr->base).ladder_to_climb != (CLadder *)0x0) ||
     (this_ptr->ladder_to_descend != (CLadder *)0x0)) {
    fStack_40 = 0.0;
    pUStack_44 = (UOrientationVector *)0x0;
    iStack_24 = 0;
    iStack_28 = 0;
    local_34 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) ||
     ((this_ptr->base).action_pending == 4)) {
    iStack_24 = 0;
    iStack_28 = 0;
    local_34 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  pCVar2 = &(this_ptr->base).base.model;
  fVar17 = (float)core_motion_cpp_FUN_00524a40(pCVar2);
  if ((((0.0 < fVar17) || (fVar17 = (float)core_motion_cpp_FUN_00524a40(pCVar2), 0.0 < fVar17)) ||
      (fVar17 = (float)core_motion_cpp_FUN_00524a40(pCVar2), 0.0 < fVar17)) ||
     ((this_ptr->base).base.hit_points <= 0.0)) {
    pUStack_44 = (UOrientationVector *)0x0;
    iStack_24 = 0;
    iStack_28 = 0;
    local_34 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  pCVar2 = &(this_ptr->base).base.model;
  fVar17 = (float)core_motion_cpp_FUN_00524a40(pCVar2);
  if (((0.0 < fVar17) || (fVar17 = (float)core_motion_cpp_FUN_00524a40(pCVar2), 0.0 < fVar17)) ||
     ((fVar17 = (float)core_motion_cpp_FUN_00524a40(pCVar2), 0.0 < fVar17 ||
      (((this_ptr->base).action_pending == 5 || ((this_ptr->base).door_to_open != (CDoor *)0x0))))))
  {
    iStack_28 = 0;
    local_34 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  fVar17 = (float)core_motion_cpp_FUN_00524a40(&(this_ptr->base).base.model);
  if (0.0 < fVar17) {
    pUStack_44 = (UOrientationVector *)0x0;
    iStack_24 = 0;
    fStack_40 = 0.0;
    iStack_28 = 0;
    local_34 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if ((this_ptr->base).action_pending == 1) {
    iStack_28 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if ((this_ptr->base).action_pending == 2) {
    iStack_28 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if ((this_ptr->base).action_pending == 6) {
    iStack_28 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if ((this_ptr->base).action_pending == 3) {
    iStack_28 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if ((this_ptr->base).action_pending == 7) {
    iStack_28 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) {
    if ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0) {
      fStack_40 = 1.4013e-45;
    }
    if ((this_ptr->base).base.base.location.position.y !=
        (this_ptr->base).base.closest_distance_threshold) {
      fStack_40 = 1.4013e-45;
    }
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr);
  pCVar2 = &(this_ptr->base).base.model;
  pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar2->base);
  if ((pSVar18->state_index == 5) ||
     (pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar2->base),
     pSVar18->state_index == 6)) {
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.x * (float)_DAT_005f6849;
  }
  if ((this_ptr->base).nearby_interactive_actor == (CDemonActor *)0x0) {
    fVar17 = this_ptr->interact_blend - delta_time * (float)_DAT_005f6849;
    this_ptr->interact_blend = fVar17;
    if (fVar17 < 0.0) {
      this_ptr->interact_blend = 0.0;
    }
  }
  else {
    fVar17 = delta_time * (float)_DAT_005f6849 + this_ptr->interact_blend;
    this_ptr->interact_blend = fVar17;
    if (1.0 < fVar17) {
      this_ptr->interact_blend = 1.0;
    }
  }
  pCVar10 = (this_ptr->base).ladder_to_climb;
  iStack_1c = 1;
  if (pCVar10 == (CLadder *)0x0) {
    if (this_ptr->ladder_to_descend == (CLadder *)0x0) {
      pCVar9 = (this_ptr->base).nearby_interactive_actor;
      if (pCVar9 == (CDemonActor *)0x0) {
        if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) {
          this_ptr_00 = (this_ptr->base).pushed_object;
          if (this_ptr_00 == (CBoxActor *)0x0) {
            iVar22 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                               ((CCharacter *)this_ptr,delta_time);
            pCVar2 = &(this_ptr->base).base.model;
            if (iVar22 == 0) {
              if (local_34 != 0) {
                pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                    (&pCVar2->base);
                uVar21 = pSVar18->state_index;
                if (uVar21 < 0x12) {
                  if ((uVar21 < 2) || (uVar21 < 3)) {
LAB_005876d2:
                    if ((this_ptr->base).base.is_on_ground != 0) {
                      desired_state_index = 0;
                      pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                          (&(this_ptr->base).base.model.base);
                      iVar22 = pSVar18->state_index;
                      if ((this_ptr->base).player_input.action_state.walk == 0) {
                        if ((this_ptr->base).player_input.action_state.backup == 0) {
                          fVar17 = (this_ptr->base).player_input.strafe_speed;
                          if ((float)_DAT_005f6851 <= fVar17) {
                            if (_DAT_005f6859 < (double)fVar17) {
                              desired_state_index = 6;
                            }
                          }
                          else {
                            desired_state_index = 5;
                          }
                        }
                        else {
                          desired_state_index = 2;
                        }
                      }
                      else if ((this_ptr->base).player_input.action_state.run == 0) {
                        desired_state_index = 1;
                      }
                      else {
                        desired_state_index = 4;
                      }
                      pCStack_70 = &(this_ptr->base).base.model;
                      fVar17 = (float)core_motion_cpp_FUN_00524a40(pCStack_70);
                      pCStack_18 = (CCharacter_full_vtable *)(fVar17 * _DAT_006060a0);
                      fVar17 = (float)core_motion_cpp_FUN_00524a40(pCStack_70);
                      pCStack_18 = (CCharacter_full_vtable *)
                                   (fVar17 * _DAT_006060a4 + (float)pCStack_18);
                      fVar20 = (float)core_motion_cpp_FUN_00524a40(pCStack_70);
                      fVar20 = fVar20 * _DAT_006060a8;
                      fVar17 = (this_ptr->base).player_input.strafe_speed;
                      fVar15 = (this_ptr->base).player_input.turn_speed *
                               (this_ptr->base).base.turn_speed;
                      iVar13 = (this_ptr->base).player_input.action_state.jump;
                      (this_ptr->base).base.turn_angle_accumulator = fVar15;
                      fVar19 = (this_ptr->base).base.turn_angle_accumulator;
                      fVar4 = (this_ptr->base).base.turn_angle_accumulator;
                      fVar5 = (this_ptr->right_arm_aim).aim_yaw;
                      fVar6 = (this_ptr->left_arm_aim).aim_yaw;
                      fVar7 = (this_ptr->right_arm_aim).target_yaw;
                      fVar8 = (this_ptr->left_arm_aim).target_yaw;
                      this_ptr->turn_angle = this_ptr->turn_angle - fVar15;
                      (this_ptr->right_arm_aim).aim_yaw = fVar5 - fVar15;
                      (this_ptr->left_arm_aim).aim_yaw = fVar6 - fVar19;
                      (this_ptr->right_arm_aim).target_yaw = fVar7 - fVar19;
                      fVar19 = (this_ptr->base).base.position_delta.x;
                      (this_ptr->left_arm_aim).target_yaw = fVar8 - fVar4;
                      (this_ptr->base).base.position_delta.x =
                           fVar17 * delta_time * (fVar20 + (float)pCStack_18) + fVar19;
                      if ((iVar13 != 0) && ((this_ptr->base).base.layer_action_index != 0xe)) {
                        switch(iVar22) {
                        case 0:
                        case 1:
                        case 2:
                        case 5:
                        case 6:
                          desired_state_index = 0x16;
                          break;
                        default:
                          goto switchD_0058784a_caseD_3;
                        case 4:
                          desired_state_index = 0x12;
                        }
                        (this_ptr->base).base.is_on_ground = 0;
                      }
switchD_0058784a_caseD_3:
                      if (desired_state_index != iVar22) {
                        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                                  (&(this_ptr->base).base.model.base,desired_state_index,1);
                      }
                      if ((this_ptr->base).player_input.action_state.use_item != 0) {
                        core_hero_cpp_CHero_tryUseSelectedItem_FUN_004ec020(&this_ptr->base);
                      }
                    }
                    iStack_1c = 0;
                  }
                  else if (uVar21 < 5) {
                    if (uVar21 == 4) goto LAB_005876d2;
                  }
                  else if ((uVar21 < 6) || (uVar21 == 6)) goto LAB_005876d2;
                }
                else if ((((uVar21 < 0x13) || (uVar21 < 0x16)) || (uVar21 < 0x17)) ||
                        (((uVar21 < 0x18 || (uVar21 < 0x19)) || (uVar21 == 0x19)))) {
                  (this_ptr->base).base.is_on_ground = 0;
                }
              }
            }
            else {
              EVar12 = (this_ptr->base).base.walk_state;
              if (EVar12 < 2) {
                if (EVar12 == WALK_STATE_WALKING) {
                  iVar22 = 1;
                }
                else {
                  iVar22 = 0;
                }
LAB_0058763b:
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(this_ptr->base).base.model.base,iVar22,1);
              }
              else {
                if (EVar12 < WALK_STATE_NO_PATH) {
                  iVar22 = 4;
                  goto LAB_0058763b;
                }
                if (EVar12 != WALK_STATE_NO_PATH) {
                  iVar22 = 0;
                  goto LAB_0058763b;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0,1);
                engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
              }
              (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
              (this_ptr->base).base.model.accumulated_root_motion.y =
                   (this_ptr->base).base.model.accumulated_root_motion.z;
              (this_ptr->base).base.model.accumulated_root_motion.x =
                   (this_ptr->base).base.model.accumulated_root_motion.y;
            }
          }
          else {
            pCStack_20 = pCVar10;
            if ((this_ptr->base).player_input.action_state.fire != 0) {
              (*((this_ptr_00->base).vtable._ub)->getBoundingBox)
                        (&this_ptr_00->base,(CBoundingBox3D *)&in_stack_fffffb70->vec);
              puVar24 = auStack_3ac;
              puVar26 = auStack_3cc;
              for (iVar22 = 6; iVar22 != 0; iVar22 = iVar22 + -1) {
                *puVar26 = *puVar24;
                puVar24 = puVar24 + (uint)bVar27 * -2 + 1;
                puVar26 = puVar26 + (uint)bVar27 * -2 + 1;
              }
              afStack_fc[2] = fStack_3c4 + fStack_3b8;
              afStack_fc[3] = fStack_3c0 + fStack_3b4;
              fStack_ec = fStack_3bc + fStack_3b0;
              fStack_244 = fStack_3c4 + fStack_3b8;
              *(float *)((int)&CStack_240 + (uint)bVar27 * -8) = afStack_fc[(uint)bVar27 * -2 + 3];
              *(float *)((int)&CStack_240 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 4) =
                   afStack_fc[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4];
              fStack_100 = fStack_244 * _DAT_005f6845;
              afStack_fc[0] = CStack_240.x * _DAT_005f6845;
              afStack_fc[1] = CStack_240.y * _DAT_005f6845;
              fStack_16c = fStack_244 * _DAT_005f6845;
              afStack_168[(uint)bVar27 * -2] = afStack_fc[(uint)bVar27 * -2];
              afStack_168[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
                   afStack_fc[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
              core_actor_cpp_FUN_00408b40((this_ptr->base).pushed_object,afStack_1a4 + 0xe);
              pfVar23 = afStack_fc + 5;
              fStack_e8 = (float)uStack_1a8;
              afStack_fc[(uint)bVar27 * -2 + 6] = afStack_1a4[(uint)bVar27 * -2];
              afStack_fc[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 7] =
                   afStack_1a4[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
              core_actor_cpp_FUN_00408bb0(this_ptr,pfVar23);
              fStack_154 = afStack_150[2];
              afStack_150[(uint)bVar27 * -2] = afStack_150[(uint)bVar27 * -2 + 3];
              afStack_150[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
                   afStack_150[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_168 + 5);
              uStack_1cc = uStack_7c;
              (&pUStack_1c8)[(uint)bVar27 * -2] =
                   (UOrientationVector *)afStack_78[(uint)bVar27 * -2];
              afStack_1c4[(uint)bVar27 * -2 + (uint)bVar27 * -2] =
                   afStack_78[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
              in_stack_fffffb70 = (UOrientationVector *)0x587473;
              in_stack_fffffb74 = pUStack_1c8;
              fStack_460 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
              fStack_34c = fStack_3b8 - fStack_3c4;
              afStack_348[0] = fStack_3b4 - fStack_3c0;
              afStack_348[1] = fStack_3b0 - fStack_3bc;
              fStack_304 = fStack_3b8 - fStack_3c4;
              afStack_300[(uint)bVar27 * -2] = afStack_348[(uint)bVar27 * -2];
              afStack_300[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
                   afStack_348[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
              fStack_1f0 = fStack_304 * _DAT_005f6845;
              fStack_1ec = afStack_300[0] * _DAT_005f6845;
              afStack_1e8[0] = afStack_300[1] * _DAT_005f6845;
              fStack_22c = fStack_304 * _DAT_005f6845;
              afStack_224[(uint)bVar27 * -2 + -1] = afStack_1e8[(uint)bVar27 * -2 + -1];
              afStack_224[(uint)bVar27 * -2 + (uint)bVar27 * -2] =
                   afStack_1e8[(uint)bVar27 * -2 + (uint)bVar27 * -2];
              uStack_228 = 0;
              if ((((afStack_150[1] -
                     SQRT(afStack_224[0] * afStack_224[0] + fStack_22c * fStack_22c) <
                     (float)_DAT_005f6861) && (1.0 < (double)afStack_150[0])) &&
                  ((double)afStack_150[0] < _DAT_005f6869)) &&
                 (ABS(fStack_460) < (float)_DAT_005f6871)) {
                fStack_4c = delta_time * _DAT_005f6879;
                if (fStack_460 < -fStack_4c) {
                  fStack_460 = -fStack_4c;
                }
                if (fStack_4c < fStack_460) {
                  fStack_460 = fStack_4c;
                }
                in_stack_fffffb74 = &(this_ptr->base).base.base.orient;
                (this_ptr->base).base.base.orient.vec.y =
                     (this_ptr->base).base.base.orient.vec.y + fStack_460;
                in_stack_fffffb70 = (UOrientationVector *)this_ptr;
                core_charactr_cpp_FUN_00433d50();
                goto LAB_0058636e;
              }
            }
            if (pCStack_20 == (CLadder *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(this_ptr->base).base.model.base,0,1);
              core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0(&this_ptr->base);
            }
          }
        }
        else {
          if ((this_ptr->base).base.grabbed_type == 0) {
            core_actor_cpp_FUN_00408bb0(this_ptr);
            afStack_1e8[2] = (float)uStack_138;
            afStack_1e8[(uint)bVar27 * -2 + 3] = afStack_150[(uint)bVar27 * -2 + 7];
            afStack_1e8[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4] =
                 afStack_150[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 8];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
            fStack_264 = fStack_180;
            afStack_29c[(uint)bVar27 * -2 + 0xf] = afStack_1a4[(uint)bVar27 * -2 + 10];
            afStack_29c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0x10] =
                 afStack_1a4[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0xb];
            fStack_30 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
            if (fStack_30 < _DAT_005f687d) {
              fStack_30 = fStack_30 + _DAT_005f6879;
            }
            if (_DAT_005f6881 < fStack_30) {
              fStack_30 = fStack_30 + _DAT_005f6885;
            }
            fStack_64 = delta_time * _DAT_005f6879;
            fStack_68 = -fStack_64;
            if (fStack_30 < fStack_68) {
              fStack_30 = fStack_68;
            }
            if (fStack_64 < fStack_30) {
              fStack_30 = fStack_64;
            }
            (this_ptr->base).base.base.orient.vec.y =
                 (this_ptr->base).base.base.orient.vec.y + fStack_30;
            core_charactr_cpp_FUN_00433d50(this_ptr);
          }
          pCStack_3c = (CCharacter *)(this_ptr->base).base.grabbed_by;
          pCStack_18 = (pCStack_3c->base).vtable._uc;
          pCStack_50 = &(this_ptr->base).base.model;
          core_skeleton_cpp_FUN_00569130(pCStack_50);
          pCVar14 = pCStack_18;
          this_ptr_02 = pCStack_3c;
          pCVar29 = &CStack_c0;
          CStack_c0.x = afStack_98[2];
          afStack_b4[(uint)bVar27 * -2 + -2] = afStack_98[(uint)bVar27 * -2 + 3];
          actor = this_ptr;
          afStack_b4[(uint)bVar27 * -2 + (uint)bVar27 * -2 + -1] =
               afStack_98[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4];
          iVar22 = (*(pCVar14->_uc).attractActorToward)(this_ptr_02,(CDemonActor *)actor,pCVar29);
          if (iVar22 == 0) {
            (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
          }
          else if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
            fVar17 = this_ptr->grab_timer + delta_time;
            this_ptr->grab_timer = fVar17;
            if ((_DAT_006060ac <= fVar17) && ((this_ptr->base).base.grabbed_type != 1)) {
              fVar17 = (float)core_motion_cpp_FUN_00524a40(pUStack_44,0x2f);
              in_stack_fffffb70 = (UOrientationVector *)0x586cc1;
              in_stack_fffffb74 = pUStack_44;
              fVar19 = (float)core_motion_cpp_FUN_00524a40(pUStack_44,0x30);
              if (fVar19 + fVar17 <= 0.0) {
                in_stack_fffffb74 = (UOrientationVector *)0x5872bf;
                (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseFromGrab)
                          ((CCharacter *)this_ptr);
              }
              else if ((this_ptr->base).player_input.action_state.fire != 0) {
                in_stack_fffffb74 = (UOrientationVector *)0x30;
                in_stack_fffffb70 = pUStack_44;
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&pUStack_44->vec,0x30,1);
                (this_ptr->base).player_input.action_state.fire = 0;
              }
            }
            goto LAB_0058636e;
          }
          in_stack_fffffb74 = (UOrientationVector *)0x0;
          in_stack_fffffb70 = (UOrientationVector *)&(this_ptr->base).base.model;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)in_stack_fffffb70,0,1);
        }
      }
      else {
        (*((pCVar9->vtable)._ub)->getInteractionInfo)(pCVar9,&SStack_41c);
        if ((SStack_41c.approach_offset == 0.0) ||
           (this_ptr != (CStranger *)SStack_41c.distance_max)) {
          in_stack_fffffb70 = (UOrientationVector *)0x587252;
          in_stack_fffffb74 = (UOrientationVector *)this_ptr;
          core_hero_cpp_CHero_stopNearbyInteraction_FUN_004ebe80(&this_ptr->base);
        }
        else {
          pCVar9 = ((CHero *)SStack_41c.distance_max)->nearby_interactive_actor;
          pfVar23 = (float *)((int)pCVar9 + (uint)bVar27 * -8 + 0x34);
          UStack_2c8.vec.x = (pCVar9->orient).vec.x;
          afStack_2bc[(uint)bVar27 * -2 + -2] = *pfVar23;
          afStack_2bc[(uint)bVar27 * -2 + (uint)bVar27 * -2 + -1] = pfVar23[(uint)bVar27 * -2 + 1];
          fStack_40 = (((CHero *)SStack_41c.distance_max)->player_input).turn_speed * _DAT_005f6879
                      * (float)_DAT_005f6889 * delta_time;
          if (fStack_40 < SStack_41c.pitch_min) {
            fStack_40 = SStack_41c.pitch_min;
          }
          if (SStack_41c.pitch_max < fStack_40) {
            fStack_40 = SStack_41c.pitch_max;
          }
          UStack_2c8.vec.y =
               (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(UStack_2c8.vec.y + fStack_40);
          pUStack_44 = (UOrientationVector *)
                       ((this_ptr->base).player_input.look_up_down_speed * _DAT_005f6879 *
                        (float)_DAT_005f6889 * delta_time);
          if ((float)pUStack_44 < (float)pUStack_3f8) {
            pUStack_44 = pUStack_3f8;
          }
          if ((float)pUStack_3fc < (float)pUStack_44) {
            pUStack_44 = pUStack_3fc;
          }
          UStack_2c8.vec.x =
               (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                (UStack_2c8.vec.x + (float)pUStack_44);
          in_stack_fffffb70 = &UStack_2c8;
          pCVar9 = (this_ptr->base).nearby_interactive_actor;
          pCVar2 = &(this_ptr->base).base.model;
          iVar22 = (*((pCVar9->vtable)._ub)->updateInteraction)
                             (pCVar9,in_stack_fffffb70,&(this_ptr->base).player_input);
          if (iVar22 == 0) {
            in_stack_fffffb74 = (UOrientationVector *)0x587283;
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0,1);
            core_hero_cpp_CHero_stopNearbyInteraction_FUN_004ebe80(&this_ptr->base);
          }
          else {
            SStack_458.gore_multiplier =
                 (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                  ((((this_ptr->base).nearby_interactive_actor)->orient).vec.y -
                                   (this_ptr->base).base.base.orient.vec.y);
            if ((float)_DAT_005f6851 <= SStack_458.gore_multiplier) {
              if ((double)SStack_458.gore_multiplier <= _DAT_005f6859) {
                iVar22 = 0;
              }
              else {
                iVar22 = 5;
              }
            }
            else {
              iVar22 = 6;
            }
            in_stack_fffffb74 = (UOrientationVector *)0x5870a8;
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,iVar22,1);
            fVar17 = SStack_458.gore_multiplier;
            pfVar23 = (float *)((int)this_ptr + (uint)bVar27 * -8 + 0x34);
            CStack_c0.z = (this_ptr->base).base.base.orient.vec.x;
            afStack_b4[(uint)bVar27 * -2] = *pfVar23;
            afStack_b4[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] = pfVar23[(uint)bVar27 * -2 + 1];
            afStack_b4[0] = fVar17 * this_ptr->interact_blend + afStack_b4[0];
            core_charactr_cpp_FUN_00433d50();
            fStack_128 = SStack_41c.pitch_min + (float)_DAT_005f6891;
            uStack_130 = 0;
            fStack_12c = 0.0;
            core_actor_cpp_FUN_00408b40();
            afStack_98[1] = afStack_20c[1];
            afStack_98[(uint)bVar27 * -2 + 2] = afStack_20c[(uint)bVar27 * -2 + 2];
            afStack_98[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 3] =
                 afStack_20c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 3];
            pfVar23 = &this_ptr->interact_blend;
            fStack_1d8 = afStack_98[1] - (this_ptr->base).base.base.location.position.x;
            fStack_1d4 = afStack_98[2] - (this_ptr->base).base.base.location.position.y;
            fStack_1d0 = afStack_98[3] - (this_ptr->base).base.base.location.position.z;
            afStack_29c[1] = fStack_1d8;
            afStack_29c[(uint)bVar27 * -2 + 2] = afStack_1e8[(uint)bVar27 * -2 + 5];
            afStack_29c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 3] =
                 afStack_1e8[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 6];
            core_actor_cpp_FUN_00408b00();
            fStack_214 = fStack_280;
            (&pUStack_210)[(uint)bVar27 * -2] =
                 (UOrientationVector *)afStack_29c[(uint)bVar27 * -2 + 8];
            afStack_20c[(uint)bVar27 * -2 + (uint)bVar27 * -2] =
                 afStack_29c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 9];
            pCVar29 = &(this_ptr->base).base.model.accumulated_root_motion;
            afStack_374[1] = fStack_214 * *pfVar23;
            afStack_374[2] = (float)pUStack_210 * *pfVar23;
            afStack_374[3] = afStack_20c[0] * *pfVar23;
            fStack_268 = fStack_214 * *pfVar23;
            afStack_29c[(uint)bVar27 * -2 + 0xe] = afStack_374[(uint)bVar27 * -2 + 2];
            afStack_29c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0xf] =
                 afStack_374[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 3];
            if (pCVar29 != (CVector3f *)(afStack_29c + 0xd)) {
              pCVar29->x = fStack_268;
              (this_ptr->base).base.model.accumulated_root_motion.y = fStack_264;
              (this_ptr->base).base.model.accumulated_root_motion.z = fStack_260;
            }
            (this_ptr->base).base.model.accumulated_root_motion.y = 0.0;
          }
        }
      }
    }
    else {
      fVar17 = (float)core_motion_cpp_FUN_00524a40(&(this_ptr->base).base.model);
      if (0.0 < fVar17) {
        if ((this_ptr->base).base.base.location.position.y <
            (this_ptr->ladder_to_descend->base).location.position.y + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0,1);
        }
      }
      else {
        this_ptr->ladder_to_descend = (CLadder *)0x0;
      }
      if (0.0 < this_ptr->ladder_blend_time) {
        if (this_ptr->ladder_blend_time <= delta_time) {
          this_ptr->ladder_blend_time = 0.0;
          fStack_45c = 1.0;
        }
        else {
          fStack_45c = delta_time / this_ptr->ladder_blend_time;
          this_ptr->ladder_blend_time = this_ptr->ladder_blend_time - delta_time;
        }
        pCVar29 = &this_ptr->ladder_offset;
        fStack_2e8 = pCVar29->x * fStack_45c;
        pCVar1 = &(this_ptr->base).base.base.location;
        fVar4 = 1.0 - fStack_45c;
        fStack_2e4 = (this_ptr->ladder_offset).y * fStack_45c;
        fStack_2e0 = (this_ptr->ladder_offset).z * fStack_45c;
        afStack_348[0] = fStack_2e8;
        afStack_348[(uint)bVar27 * -2 + 1] = afStack_300[(uint)bVar27 * -2 + 7];
        afStack_348[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 2] =
             afStack_300[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 8];
        fVar17 = (this_ptr->base).base.base.location.position.y;
        fVar19 = (this_ptr->base).base.base.location.position.z;
        (pCVar1->position).x = (pCVar1->position).x + afStack_348[0];
        (this_ptr->base).base.base.location.position.y = fVar17 + afStack_348[1];
        (this_ptr->base).base.base.location.position.z = fVar19 + afStack_348[2];
        pCVar29->x = pCVar29->x * fVar4;
        (this_ptr->ladder_offset).y = (this_ptr->ladder_offset).y * fVar4;
        (this_ptr->ladder_offset).z = (this_ptr->ladder_offset).z * fVar4;
        fStack_60 = fVar4;
        fVar17 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
        (this_ptr->base).base.turn_angle_accumulator = fVar17 * fStack_45c;
      }
      fVar17 = (*((this_ptr->base).base.base.vtable._ub)->cylinderGroundCheck)
                         ((CDemonActor *)this_ptr,(this_ptr->base).base.collision_cylinder_height,
                          (CVector3f *)0x0);
      (this_ptr->base).base.closest_distance_threshold = fVar17;
    }
  }
  else {
    fVar17 = (float)core_motion_cpp_FUN_00524a40(&(this_ptr->base).base.model);
    if (0.0 < fVar17) {
      core_actor_cpp_FUN_00408b40((this_ptr->base).ladder_to_climb);
      uStack_18c = uStack_288;
      afStack_1a4[(uint)bVar27 * -2 + 7] = afStack_29c[(uint)bVar27 * -2 + 6];
      afStack_1a4[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 8] =
           afStack_29c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 7];
      if (fStack_188 + (float)_DAT_005f6899 < (this_ptr->base).base.base.location.position.y) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0,1);
      }
    }
    else {
      (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
    }
    if (0.0 < this_ptr->ladder_blend_time) {
      if (this_ptr->ladder_blend_time <= delta_time) {
        this_ptr->ladder_blend_time = 0.0;
        fStack_470 = 1.0;
      }
      else {
        fStack_470 = delta_time / this_ptr->ladder_blend_time;
        this_ptr->ladder_blend_time = this_ptr->ladder_blend_time - delta_time;
      }
      pCVar29 = &this_ptr->ladder_offset;
      fStack_e4 = pCVar29->x * fStack_470;
      pCVar1 = &(this_ptr->base).base.base.location;
      fVar4 = 1.0 - fStack_470;
      fStack_e0 = (this_ptr->ladder_offset).y * fStack_470;
      fStack_dc = (this_ptr->ladder_offset).z * fStack_470;
      afStack_374[2] = fStack_e4;
      afStack_374[(uint)bVar27 * -2 + 3] = afStack_fc[(uint)bVar27 * -2 + 7];
      afStack_374[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4] =
           afStack_fc[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 8];
      fVar17 = (this_ptr->base).base.base.location.position.y;
      fVar19 = (this_ptr->base).base.base.location.position.z;
      (pCVar1->position).x = (pCVar1->position).x + afStack_374[2];
      (this_ptr->base).base.base.location.position.y = fVar17 + afStack_374[3];
      (this_ptr->base).base.base.location.position.z = fVar19 + fStack_364;
      pCVar29->x = pCVar29->x * fVar4;
      (this_ptr->ladder_offset).y = (this_ptr->ladder_offset).y * fVar4;
      (this_ptr->ladder_offset).z = (this_ptr->ladder_offset).z * fVar4;
      fStack_5c = fVar4;
      fVar17 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
      (this_ptr->base).base.turn_angle_accumulator = fVar17 * fStack_470;
    }
  }
LAB_0058636e:
  pCVar2 = &(this_ptr->base).base.model;
  pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar2->base);
  if ((pSVar18->state_index == 0x26) &&
     (this_ptr_01 = (CAmmoBox *)
                    core_actor_cpp_castToClassHash_FUN_0040c600((this_ptr->base).object_to_pick_up),
     this_ptr_01 != (CAmmoBox *)0x0)) {
    fVar17 = core_motion_cpp_FUN_00525020(&pCVar2->base);
    core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e1a0(this_ptr_01,fVar17);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_stranger_cpp_FUN_0058a010(this_ptr,delta_time);
  if (iStack_1c != 0) {
    (this_ptr->pending_velocity).z = 0.0;
    (this_ptr->pending_velocity).y = (this_ptr->pending_velocity).z;
    (this_ptr->pending_velocity).x = (this_ptr->pending_velocity).y;
  }
  if (((this_ptr->base).ladder_to_climb == (CLadder *)0x0) &&
     (this_ptr->ladder_to_descend == (CLadder *)0x0)) {
    if (fStack_40 == 0.0) goto LAB_0058648f;
    pCStack_14 = &(this_ptr->base).base.model.base;
    pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_14);
    fVar17 = 0x41900000 * delta_time;
    pCVar29 = &(this_ptr->base).base.model.accumulated_root_motion;
    iVar22 = pSVar18->state_index;
    pCVar3 = &(this_ptr->base).base.position_delta;
    fStack_2a0 = pCVar29->x + pCVar3->x;
    afStack_29c[0] =
         (this_ptr->base).base.model.accumulated_root_motion.y +
         (this_ptr->base).base.position_delta.y;
    afStack_29c[1] =
         (this_ptr->base).base.model.accumulated_root_motion.z +
         (this_ptr->base).base.position_delta.z;
    CStack_2dc.x = fStack_2a0;
    *(float *)((int)&CStack_2dc + ((uint)bVar27 * -2 + -1) * 4 + 8) = afStack_29c[(uint)bVar27 * -2]
    ;
    *(float *)((int)&CStack_2dc + ((uint)bVar27 * -2 + (uint)bVar27 * -2) * 4 + 8) =
         afStack_29c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar29->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar3->x = (this_ptr->base).base.position_delta.y;
    fStack_58 = fVar17;
    iStack_38 = iVar22;
    if (iVar22 == 0x12) {
      CStack_2dc.x = 0.0;
      CStack_2dc.y = 0.0;
      this_ptr->jump_speed = 0x41900000;
      this_ptr->airborne_timer = 0.0;
      CStack_2dc.z = fVar17;
    }
    else {
      if (iVar22 == 0x13) {
        fVar4 = (float)_DAT_005f68a1;
        fVar19 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = 0x41900000;
        fVar19 = fVar19 - delta_time * fVar4;
        this_ptr->airborne_timer = 0.0;
        CStack_2dc.z = fVar17;
        goto LAB_00587a5e;
      }
      if (iVar22 == 0x14) {
        fVar4 = (float)_DAT_005f68a1;
        CStack_2dc.x = 0.0;
        CStack_2dc.y = 0.0;
        fVar19 = 0x3F000000 * 0x41900000;
        CStack_2dc.z = this_ptr->jump_speed * delta_time;
        this_ptr->airborne_timer = 0.0;
        fVar17 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = this_ptr->jump_speed - fVar19 * delta_time;
        fVar19 = this_ptr->jump_speed;
        (this_ptr->base).base.velocity.y = fVar17 - delta_time * fVar4;
        if (fVar19 < 0.0) {
          this_ptr->jump_speed = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_14,0x1a,1);
        }
      }
      else if (iVar22 == 0x15) {
        CStack_2dc.y = 0.0;
        CStack_2dc.x = 0.0;
        CStack_2dc.z = fVar17;
      }
      else if (iVar22 == 0x16) {
        this_ptr->airborne_timer = 0.0;
        this_ptr->jump_speed = 0x41200000;
      }
      else if (iVar22 == 0x17) {
        CStack_2dc.z = 0x41200000 * delta_time;
        fVar17 = (float)_DAT_005f68a1;
        fVar19 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = 0x41200000;
        fVar19 = fVar19 - delta_time * fVar17;
        this_ptr->airborne_timer = 0.0;
LAB_00587a5e:
        CStack_2dc.y = 0.0;
        CStack_2dc.x = 0.0;
LAB_00587a60:
        (this_ptr->base).base.velocity.y = fVar19;
      }
      else if (iVar22 == 0x18) {
        fVar4 = (float)_DAT_005f68a1;
        CStack_2dc.x = 0.0;
        CStack_2dc.y = 0.0;
        fVar19 = 0x3F000000 * 0x41200000;
        CStack_2dc.z = this_ptr->jump_speed * delta_time;
        this_ptr->airborne_timer = 0.0;
        fVar17 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = this_ptr->jump_speed - fVar19 * delta_time;
        fVar19 = this_ptr->jump_speed;
        (this_ptr->base).base.velocity.y = fVar17 - delta_time * fVar4;
        if (fVar19 < 0.0) {
          this_ptr->jump_speed = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_14,0x1a,1);
        }
      }
      else {
        if (iVar22 != 0x19) {
          if (iVar22 == 0x1a) {
            CStack_2dc.z = 0.0;
            fVar19 = (this_ptr->base).base.velocity.y - delta_time * (float)_DAT_005f68a1;
            this_ptr->airborne_timer = 9999.9;
            goto LAB_00587a5e;
          }
          if (iVar22 == 0x1b) {
            CStack_2dc.z = 0.0;
            CStack_2dc.y = 0.0;
            CStack_2dc.x = 0.0;
            fVar19 = (this_ptr->base).base.velocity.y - delta_time * (float)_DAT_005f68a1;
          }
          else {
            fVar19 = (this_ptr->base).base.velocity.y - delta_time * (float)_DAT_005f68a1;
          }
          goto LAB_00587a60;
        }
        CStack_2dc.y = 0.0;
      }
    }
    core_actor_cpp_FUN_00408b00(this_ptr);
    afStack_1a4[0] = fStack_258;
    afStack_1a4[(uint)bVar27 * -2 + 1] = afStack_29c[(uint)bVar27 * -2 + 0x12];
    afStack_1a4[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 2] =
         afStack_29c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0x13];
    fStack_378 = (this_ptr->base).base.velocity.x * delta_time;
    pCVar29 = &CStack_2dc;
    afStack_374[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_374[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_d8 = fStack_378;
    afStack_fc[(uint)bVar27 * -2 + 10] = afStack_374[(uint)bVar27 * -2];
    afStack_fc[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0xb] =
         afStack_374[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
    pUStack_1c8 = (UOrientationVector *)(fStack_d8 + afStack_1a4[0]);
    afStack_1c4[0] = fStack_d4 + afStack_1a4[1];
    afStack_1c4[1] = fStack_d0 + afStack_1a4[2];
    pUStack_210 = (UOrientationVector *)(fStack_d8 + afStack_1a4[0]);
    afStack_20c[(uint)bVar27 * -2] = afStack_1c4[(uint)bVar27 * -2];
    afStack_20c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
         afStack_1c4[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
    CStack_2dc.x = CStack_2dc.x + (float)pUStack_210;
    CStack_2dc.y = CStack_2dc.y + afStack_20c[0];
    CStack_2dc.z = CStack_2dc.z + afStack_20c[1];
    this_ptr->fall_velocity_snapshot = (this_ptr->base).base.velocity.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,pCVar29);
    if ((this_ptr->base).base.base.location.position.y <
        (this_ptr->base).base.closest_distance_threshold + (float)_DAT_005f68a9) {
      (this_ptr->base).base.is_on_ground = 1;
    }
    if (((iStack_38 == 0x1a) || (iStack_38 == 0x14)) || (iStack_38 == 0x18)) {
      if ((this_ptr->base).base.is_on_ground != 0) {
        engine_console_cpp_FUN_00445430
                  (g_CConsolePtr,"Splat at %3.2f fps\n",
                   (double)(this_ptr->base).base.velocity.y);
        fVar17 = -this_ptr->fall_velocity_snapshot;
        uVar30 = SUB84(__BITCAST_UINT64((double)fVar17),0);
        uStack_47c = (uint)((ulonglong)(double)fVar17 >> 0x20);
        if (fVar17 < (float)_DAT_005f68b1) {
          if (((iStack_38 == 0x18) || (iStack_38 == 0x14)) || (iStack_38 == 0x1a))
          goto LAB_00587c25;
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_458);
          fVar19 = (float)(((float10)__BITCAST_DOUBLE(CONCAT44(uStack_47c,uVar30)) + (float10)_DAT_005f68b9) *
                           (float10)_DAT_005f68c1 * (float10)_DAT_005f68c9);
          SStack_458.damage_amount = fVar19;
          if (0x42c80000 < (int)fVar19) {
            SStack_458.damage_amount = 9999.0;
          }
          pCVar14 = (this_ptr->base).base.base.vtable._uc;
          (this_ptr->base).invincibility_timer = 0.0;
          (*(pCVar14->_uc).processDamage)((CCharacter *)this_ptr,&SStack_458);
          if (((this_ptr->base).base.hit_points <= 0.0) || (0x42c80000 < (int)fVar19)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,0x1d,1);
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"fall-?.wav");
            iVar22 = (this_ptr->base).base.is_on_ground;
            fStack_460 = 0x3F000000;
            goto joined_r0x00587fec;
          }
          in_stack_fffffb74 = (UOrientationVector *)0x1;
          in_stack_fffffb70 = (UOrientationVector *)0x1c;
LAB_00587c25:
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,(int)in_stack_fffffb70,(int)in_stack_fffffb74
                    );
        }
        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)this_ptr,(CVector3f *)&DAT_02c8af28,fVar17 * _DAT_005f68d1 + 1.0);
      }
      iVar22 = (this_ptr->base).base.is_on_ground;
      fStack_460 = 0x3F000000;
    }
    else {
      iVar22 = (this_ptr->base).base.is_on_ground;
      fStack_460 = 0x3F000000;
    }
joined_r0x00587fec:
    0x3F000000 = fStack_460;
    if (iVar22 == 0) {
      this_ptr->airborne_timer = this_ptr->airborne_timer + delta_time;
      if (iStack_38 == 4) {
        fStack_460 = fStack_460 * (float)_DAT_005f6849;
      }
      if ((fStack_460 < this_ptr->airborne_timer) ||
         (this_ptr->fall_velocity_snapshot < (float)_DAT_005f68b9)) {
        if (iStack_38 != 0x1a) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0x1a,1);
        }
        (this_ptr->base).base.is_on_ground = 0;
      }
      goto LAB_0058648f;
    }
  }
  else {
    core_actor_cpp_FUN_00408ac0(this_ptr);
    pCVar1 = &(this_ptr->base).base.base.location;
    fStack_270 = afStack_300[3];
    afStack_29c[(uint)bVar27 * -2 + 0xc] = afStack_300[(uint)bVar27 * -2 + 4];
    afStack_29c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0xd] =
         afStack_300[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 5];
    fVar17 = (this_ptr->base).base.base.location.position.y;
    fVar19 = (this_ptr->base).base.base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_270;
    (this_ptr->base).base.base.location.position.y = fVar17 + fStack_26c;
    (this_ptr->base).base.base.location.position.z = fVar19 + fStack_268;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  this_ptr->airborne_timer = 0.0;
LAB_0058648f:
  (this_ptr->pending_velocity).z = 0.0;
  (this_ptr->pending_velocity).y = (this_ptr->pending_velocity).z;
  (this_ptr->pending_velocity).x = (this_ptr->pending_velocity).y;
  pCVar16 = g_CGamePtr;
  if (local_34 != 0) {
    if ((this_ptr->base).player_input.action_state.draw != 0) {
      if (this_ptr->guns_drawn == 0) {
        this_ptr->guns_drawn = 1;
      }
      else {
        this_ptr->guns_drawn = 0;
        if (pCVar16->flashlight_active != 0) {
          pCVar16->flashlight_active = 0;
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"flashlit.wav");
        }
      }
    }
    if ((((this_ptr->base).player_input.action_state.light != 0) &&
        (pCVar11 = (this_ptr->base).inventory.selected_weapon, pCVar11 != (CWeapon *)0x0)) &&
       (pCVar11->can_attach_light != 0)) {
      uVar21 = (uint)(g_CGamePtr->flashlight_active == 0);
      g_CGamePtr->flashlight_active = uVar21;
      if (uVar21 != 0) {
        this_ptr->guns_drawn = 1;
      }
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"flashlit.wav");
    }
  }
  pCVar11 = (this_ptr->base).inventory.selected_weapon;
  if (pCVar11 == (CWeapon *)0x0) {
    g_CGamePtr->flashlight_active = 0;
  }
  else if (pCVar11->can_attach_light == 0) {
    g_CGamePtr->flashlight_active = 0;
  }
  if (pUStack_44 != (UOrientationVector *)0x0) {
    core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_005907a0(this_ptr,delta_time);
  }
  if (this_ptr->guns_drawn == 0) {
    fVar17 = this_ptr->guns_drawn_blend - delta_time / _DAT_00606070;
    this_ptr->guns_drawn_blend = fVar17;
    if (fVar17 < 0.0) {
      this_ptr->guns_drawn_blend = 0.0;
    }
  }
  else {
    fVar17 = delta_time / _DAT_0060606c + this_ptr->guns_drawn_blend;
    this_ptr->guns_drawn_blend = fVar17;
    if (1.0 < fVar17) {
      this_ptr->guns_drawn_blend = 1.0;
    }
  }
  fVar17 = (this_ptr->right_arm_aim).recoil_timer - delta_time / _DAT_00606074;
  this_ptr->frame_cleared = 0.0;
  (this_ptr->right_arm_aim).recoil_timer = fVar17;
  if (fVar17 <= 0.0) {
    (this_ptr->right_arm_aim).recoil_timer = 0.0;
  }
  fVar17 = (this_ptr->left_arm_aim).recoil_timer - delta_time / _DAT_00606074;
  (this_ptr->left_arm_aim).recoil_timer = fVar17;
  if (fVar17 <= 0.0) {
    (this_ptr->left_arm_aim).recoil_timer = 0.0;
  }
  if (iStack_24 != 0) {
    core_stranger_cpp_CStranger_handleActionButton_FUN_00591120(this_ptr);
  }
  core_stranger_cpp_CStranger_updateProceduralAnimation_FUN_00588ad0(this_ptr);
  if ((((this_ptr->base).aim_mode == AIM_MODE_MANUAL) && (this_ptr->weapon != (CWeapon *)0x0)) &&
     (this_ptr->weapon->weapon_type == WEAPON_TYPE_GUN)) {
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180
              (&(this_ptr->base).base.model);
    core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0058aeb0(this_ptr,0);
    core_stranger_cpp_CStranger_aimLeftPistol_FUN_0058f660(this_ptr);
    core_stranger_cpp_CStranger_updateProceduralAnimation_FUN_00588ad0(this_ptr);
  }
  core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_00590020(this_ptr,delta_time,iStack_28);
  core_stranger_cpp_CStranger_updateClothSimulation_FUN_005917b0(this_ptr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  pCVar2 = &(this_ptr->base).base.model;
  fVar17 = (float)core_motion_cpp_FUN_00524a40(pCVar2);
  if (fVar17 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0(&this_ptr->base);
  }
  else {
    fVar17 = core_motion_cpp_FUN_00525020(&pCVar2->base);
    if ((1.0 < fVar17) &&
       (pCStack_6c = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c600((this_ptr->base).pushed_object),
       pCStack_6c != (CBoxActor *)0x0)) {
      core_stranger_cpp_FUN_00588a10();
      afStack_2bc[1] = (float)uStack_318;
      afStack_2bc[(uint)bVar27 * -2 + 2] = afStack_348[(uint)bVar27 * -2 + 0xd];
      afStack_2bc[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 3] =
           afStack_348[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0xe];
      core_actor_cpp_FUN_00408b40(this_ptr);
      afStack_398[2] = fStack_9c;
      afStack_398[(uint)bVar27 * -2 + 3] = afStack_98[(uint)bVar27 * -2];
      afStack_398[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4] =
           afStack_98[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
      afStack_1a4[3] = afStack_398[2] - CStack_114.x;
      fStack_194 = afStack_398[3] - CStack_114.y;
      fStack_190 = fStack_388 - CStack_114.z;
      CStack_240.x = afStack_398[2] - CStack_114.x;
      *(float *)((int)&CStack_240 + (uint)bVar27 * -8 + 4) = afStack_1a4[(uint)bVar27 * -2 + 4];
      *(float *)((int)&CStack_240 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8) =
           afStack_1a4[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 5];
      CStack_240.y = 0.0;
      core_actor_cpp_FUN_00408b00(this_ptr);
      fStack_12c = afStack_300[0];
      afStack_150[(uint)bVar27 * -2 + 10] = afStack_300[(uint)bVar27 * -2 + 1];
      afStack_150[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0xb] =
           afStack_300[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 2];
      if (0.0 < fStack_124) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_00422ab0(pCStack_6c,&CStack_114,&CStack_240);
      }
    }
  }
  core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0058aeb0(this_ptr,0);
  core_stranger_cpp_CStranger_autoAimAtThreat_FUN_0058eb50(this_ptr,0,delta_time);
  core_stranger_cpp_CStranger_autoAimAtThreat_FUN_0058eb50(this_ptr,1,delta_time);
  core_stranger_cpp_CStranger_handleFireButton_FUN_005914a0(this_ptr,delta_time);
  core_inv_cpp_FUN_004f9f10();
  core_stranger_cpp_CStranger_processWeaponTick_FUN_00591b20(this_ptr,delta_time);
  if ((this_ptr->weapon != (CWeapon *)0x0) && ((this_ptr->weapon->base).is_transparent != 0)) {
    (this_ptr->base).base.base.is_transparent = 1;
  }
  iVar22 = sound_sndmain_cpp_FUN_005735a0(this_ptr->goggle_sfx_handles[0]);
  if (iVar22 == 0) {
    if (g_CGamePtr->goggles_active != 0) {
      sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->goggle_sfx_handles[1]);
      sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
      sound_sndmain_cpp_FUN_00572a10(1);
      uVar21 = sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-on.wav");
      this_ptr->goggle_sfx_handles[1] = uVar21;
      sound_sndmain_cpp_FUN_005728e0(0.0);
      uVar21 = sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-loop.wav");
      this_ptr->goggle_sfx_handles[0] = uVar21;
      sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
      sound_sndmain_cpp_setSfxFade_FUN_00573ab0(this_ptr->goggle_sfx_handles[0],1.0,1.0,0);
      return;
    }
  }
  else if (g_CGamePtr->goggles_active == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->goggle_sfx_handles[1]);
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->goggle_sfx_handles[0]);
    sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
    sound_sndmain_cpp_FUN_00572a10(1);
    sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-off.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
    return;
  }
  return;
}
