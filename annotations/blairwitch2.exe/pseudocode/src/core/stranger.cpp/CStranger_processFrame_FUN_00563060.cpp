// Name: core_stranger.cpp_CStranger_processFrame_FUN_00563060
// Address: 00563060
// Address Range: [[00563060, 005656e9]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processFrame_FUN_00563060(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_processFrame_FUN_00563060(CStranger *this_ptr,float delta_time)

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
  CAmmoBox *this_ptr_01;
  float fVar18;
  CMotionController *pCVar19;
  float fVar20;
  uint uVar21;
  int iVar22;
  uint *puVar23;
  float *pfVar24;
  int desired_state_index;
  float *pfVar25;
  uint *puVar26;
  byte bVar27;
  float afStackY_1384 [955];
  CCharacter *this_ptr_02;
  CBoundingBox3D *in_stack_fffffb70;
  CStranger *actor;
  ulonglong uVar28;
  CVector3f *pCVar29;
  CBoundingBox3D *in_stack_fffffb78;
  double dVar30;
  ulonglong in_stack_fffffb88;
  uint uVar31;
  float fStack_470;
  float fStack_468;
  float fStack_464;
  float fStack_45c;
  SDamageInfo SStack_458;
  SInteractionInfo SStack_41c;
  float fStack_3fc;
  float fStack_3f8;
  uint auStack_3f4 [4];
  uint auStack_3e4 [2];
  float fStack_3dc;
  float fStack_3d8;
  float local_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float local_3bc [2];
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float afStack_398 [4];
  float fStack_388;
  uint uStack_384;
  float fStack_36c;
  float afStack_368 [5];
  float fStack_354;
  float fStack_340;
  CVector3f aCStack_33c [2];
  float fStack_324;
  float afStack_320 [5];
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  uint uStack_2f4;
  float fStack_2f0;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  byte auStack_2c8 [12];
  float fStack_2bc;
  CVector3f aCStack_2b8 [2];
  float fStack_2a0;
  float afStack_29c [4];
  float fStack_28c;
  uint uStack_288;
  uint uStack_270;
  float afStack_26c [4];
  float fStack_25c;
  float fStack_250;
  float afStack_24c [4];
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  uint uStack_214;
  CVector3f CStack_210;
  CVector3f aCStack_204 [2];
  uint uStack_1ec;
  float afStack_1e8 [10];
  float fStack_1c0;
  float afStack_1bc [5];
  float fStack_1a8;
  float afStack_1a4 [5];
  float fStack_190;
  float afStack_18c [8];
  float fStack_16c;
  float afStack_168 [5];
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_144;
  float fStack_12c;
  float afStack_128 [4];
  float fStack_118;
  uint uStack_10c;
  float afStack_108 [5];
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_c4;
  float afStack_c0 [4];
  float fStack_b0;
  uint uStack_a0;
  float fStack_9c;
  float afStack_98 [7];
  float fStack_7c;
  float afStack_78 [2];
  CDeformableModelInstance *pCStack_70;
  float fStack_6c;
  int iStack_68;
  CBoxActor *pCStack_64;
  float fStack_60;
  float fStack_5c;
  CMotionController *pCStack_58;
  float fStack_54;
  float fStack_50;
  CDeformableModelInstance *pCStack_4c;
  CMotionController *pCStack_40;
  CCharacter *pCStack_3c;
  float fStack_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  CLadder *pCStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  uVar31 = (uint)((ulonglong)in_stack_fffffb88 >> 0x20);
  bVar27 = 0;
  local_2c = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                       (0x01C38BC0,"?DebugActionPending" + 1);
  pCVar9 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if ((pCVar9 != (CDemonActor *)0x0) && ((this_ptr->carry_object_bbox).max.x < _DAT_005eb5cd)) {
    (*((pCVar9->vtable)._ub)->getBoundingBox)(pCVar9,in_stack_fffffb70);
    pfVar24 = &fStack_3cc;
    pfVar25 = local_3bc;
    for (iVar22 = 6; iVar22 != 0; iVar22 = iVar22 + -1) {
      *pfVar25 = *pfVar24;
      pfVar24 = pfVar24 + (uint)bVar27 * -2 + 1;
      pfVar25 = pfVar25 + (uint)bVar27 * -2 + 1;
    }
    if (&this_ptr->carry_object_bbox != (CBoundingBox3D *)&fStack_3b4) {
      (this_ptr->carry_object_bbox).min.x = fStack_3b4;
      (this_ptr->carry_object_bbox).min.y = fStack_3b0;
      (this_ptr->carry_object_bbox).min.z = fStack_3ac;
    }
    pCVar29 = &(this_ptr->carry_object_bbox).max;
    if (pCVar29 != (CVector3f *)&fStack_3a8) {
      pCVar29->x = fStack_3a8;
      (this_ptr->carry_object_bbox).max.y = fStack_3a4;
      (this_ptr->carry_object_bbox).max.z = fStack_3a0;
    }
    afStack_29c[2] = (this_ptr->carry_object_bbox).min.x + (this_ptr->carry_object_bbox).max.x;
    afStack_29c[3] = (this_ptr->carry_object_bbox).min.y + (this_ptr->carry_object_bbox).max.y;
    fStack_28c = (this_ptr->carry_object_bbox).min.z + (this_ptr->carry_object_bbox).max.z;
    fStack_228 = afStack_29c[2];
    afStack_24c[(uint)bVar27 * -2 + 10] = afStack_29c[(uint)bVar27 * -2 + 3];
    afStack_24c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0xb] =
         afStack_29c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4];
    fStack_12c = fStack_228 * _DAT_005eb5d1;
    afStack_128[0] = fStack_224 * _DAT_005eb5d1;
    afStack_128[1] = fStack_220 * _DAT_005eb5d1;
    afStack_18c[0] = fStack_228 * _DAT_005eb5d1;
    afStack_18c[(uint)bVar27 * -2 + 1] = afStack_128[(uint)bVar27 * -2];
    afStack_18c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 2] =
         afStack_128[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
    core_actor_cpp_FUN_00408d70((this_ptr->base).base.carry_hands[1].carry_actor);
    uStack_384 = uStack_270;
    afStack_398[(uint)bVar27 * -2 + 6] = afStack_26c[(uint)bVar27 * -2];
    afStack_398[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 7] =
         afStack_26c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
    core_actor_cpp_FUN_00408de0(this_ptr);
    fStack_324 = fStack_234;
    afStack_320[(uint)bVar27 * -2] = afStack_24c[(uint)bVar27 * -2 + 7];
    afStack_320[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
         afStack_24c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 8];
    if (&this_ptr->carry_object_world_center != (CVector3f *)&fStack_324) {
      (this_ptr->carry_object_world_center).x = fStack_324;
      (this_ptr->carry_object_world_center).y = afStack_320[0];
      (this_ptr->carry_object_world_center).z = afStack_320[1];
    }
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042a7a0((CCharacter *)this_ptr,delta_time);
  core_game_cpp_CGame_slamDT_FUN_004bd460(g_CGamePtr,delta_time);
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
  core_stranger_cpp_FUN_00565f30();
  afStack_1e8[2] = (float)uStack_288;
  afStack_1e8[(uint)bVar27 * -2 + 3] = afStack_29c[(uint)bVar27 * -2 + 6];
  afStack_1e8[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4] =
       afStack_29c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 7];
  core_actor_cpp_FUN_00408d70(this_ptr);
  uVar28 = CONCAT44(delta_time,this_ptr);
  aCStack_204[0].x = afStack_320[2];
  *(float *)((int)aCStack_204 + ((uint)bVar27 * -2 + -1) * 4 + 8) =
       afStack_320[(uint)bVar27 * -2 + 3];
  *(float *)((int)aCStack_204 + ((uint)bVar27 * -2 + (uint)bVar27 * -2) * 4 + 8) =
       afStack_320[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4];
  core_stranger_cpp_FUN_005656f0(uVar28);
  local_2c = 1;
  fStack_38 = 1.4013e-45;
  iStack_34 = 1;
  iStack_20 = 1;
  iStack_1c = 1;
  if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
    local_2c = 0;
    iStack_34 = 0;
    iStack_20 = 0;
    iStack_1c = 0;
    fStack_38 = 0.0;
    if (iStack_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if ((this_ptr->base).pushed_object != (CBoxActor *)0x0) {
    iStack_20 = 0;
    iStack_1c = 0;
    local_2c = 0;
    iStack_34 = 0;
    if (iStack_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if (((this_ptr->base).ladder_to_climb != (CLadder *)0x0) ||
     (this_ptr->ladder_to_descend != (CLadder *)0x0)) {
    fStack_38 = 0.0;
    iStack_34 = 0;
    iStack_20 = 0;
    iStack_1c = 0;
    local_2c = 0;
    if (iStack_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"ladder\n");
    }
  }
  if (((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) || (this_ptr->action_pending == 4))
  {
    iStack_20 = 0;
    iStack_1c = 0;
    local_2c = 0;
    if (iStack_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"pickup\n");
    }
  }
  pCVar2 = &(this_ptr->base).base.model;
  fVar17 = (float)core_motion_cpp_FUN_005038a0(pCVar2);
  if ((((0.0 < fVar17) || (fVar17 = (float)core_motion_cpp_FUN_005038a0(pCVar2), 0.0 < fVar17)) ||
      (fVar17 = (float)core_motion_cpp_FUN_005038a0(pCVar2), 0.0 < fVar17)) ||
     ((this_ptr->base).base.hit_points <= 0.0)) {
    iStack_34 = 0;
    iStack_20 = 0;
    iStack_1c = 0;
    local_2c = 0;
    if (iStack_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"hurt\n");
    }
  }
  pCVar2 = &(this_ptr->base).base.model;
  fVar17 = (float)core_motion_cpp_FUN_005038a0(pCVar2);
  if (((0.0 < fVar17) || (fVar17 = (float)core_motion_cpp_FUN_005038a0(pCVar2), 0.0 < fVar17)) ||
     ((fVar17 = (float)core_motion_cpp_FUN_005038a0(pCVar2), 0.0 < fVar17 ||
      ((this_ptr->action_pending == 5 || ((this_ptr->base).door_to_open != (CDoor *)0x0)))))) {
    iStack_1c = 0;
    local_2c = 0;
    iStack_20 = 0;
    if (iStack_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"door\n");
    }
  }
  fVar17 = (float)core_motion_cpp_FUN_005038a0(&(this_ptr->base).base.model);
  if (0.0 < fVar17) {
    iStack_34 = 0;
    iStack_20 = 0;
    fStack_38 = 0.0;
    iStack_1c = 0;
    local_2c = 0;
    if (iStack_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"sitting\n");
    }
  }
  if (this_ptr->action_pending == 1) {
    iStack_1c = 0;
    iStack_20 = 0;
    if (iStack_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"stashinventory\n");
    }
  }
  if (this_ptr->action_pending == 2) {
    iStack_1c = 0;
    iStack_20 = 0;
    if (iStack_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"placeobject\n");
    }
  }
  if (this_ptr->action_pending == 6) {
    iStack_1c = 0;
    iStack_20 = 0;
    if (iStack_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"putdownobject\n");
    }
  }
  if (this_ptr->action_pending == 3) {
    iStack_1c = 0;
    iStack_20 = 0;
    if (iStack_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"toss\n");
    }
  }
  if (this_ptr->action_pending == 7) {
    iStack_1c = 0;
    iStack_20 = 0;
    if (iStack_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"attackmelee\n");
    }
  }
  if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) {
    if ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0) {
      fStack_38 = 1.4013e-45;
    }
    if ((this_ptr->base).base.base.location.position.y !=
        (this_ptr->base).base.closest_distance_threshold) {
      fStack_38 = 1.4013e-45;
    }
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0(this_ptr);
  iVar22 = core_motion_cpp_FUN_005035c0();
  if ((*(int *)(iVar22 + 0x24) == 4) ||
     (iVar22 = core_motion_cpp_FUN_005035c0(), *(int *)(iVar22 + 0x24) == 5)) {
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.x * (float)_DAT_005eb5d5;
  }
  if ((this_ptr->base).nearby_interactive_actor == (CDemonActor *)0x0) {
    fVar17 = this_ptr->interact_blend - delta_time * (float)_DAT_005eb5d5;
    this_ptr->interact_blend = fVar17;
    if (fVar17 < 0.0) {
      this_ptr->interact_blend = 0.0;
    }
  }
  else {
    fVar17 = delta_time * (float)_DAT_005eb5d5 + this_ptr->interact_blend;
    this_ptr->interact_blend = fVar17;
    if (1.0 < fVar17) {
      this_ptr->interact_blend = 1.0;
    }
  }
  pCVar10 = (this_ptr->base).ladder_to_climb;
  iStack_68 = 1;
  if (pCVar10 == (CLadder *)0x0) {
    if (this_ptr->ladder_to_descend == (CLadder *)0x0) {
      pCVar9 = (this_ptr->base).nearby_interactive_actor;
      if (pCVar9 == (CDemonActor *)0x0) {
        if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) {
          this_ptr_00 = (this_ptr->base).pushed_object;
          if (this_ptr_00 == (CBoxActor *)0x0) {
            iVar22 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                               ((CCharacter *)this_ptr,delta_time);
            if (iVar22 == 0) {
              if (local_2c != 0) {
                iVar22 = core_motion_cpp_FUN_005035c0();
                switch(*(uint *)(iVar22 + 0x24)) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  if ((this_ptr->base).base.is_on_ground != 0) {
                    desired_state_index = 0;
                    iVar22 = core_motion_cpp_FUN_005035c0();
                    iVar22 = *(int *)(iVar22 + 0x24);
                    if ((this_ptr->base).player_input.action_state.walk == 0) {
                      if ((this_ptr->base).player_input.action_state.backup == 0) {
                        fVar17 = (this_ptr->base).player_input.strafe_speed;
                        if ((float)_DAT_005eb5dd <= fVar17) {
                          if (_DAT_005eb5e5 < (double)fVar17) {
                            desired_state_index = 5;
                          }
                        }
                        else {
                          desired_state_index = 4;
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
                      desired_state_index = 3;
                    }
                    pCStack_70 = &(this_ptr->base).base.model;
                    fVar17 = (float)core_motion_cpp_FUN_005038a0(pCStack_70);
                    pCStack_14 = (CCharacter_full_vtable *)(fVar17 * _DAT_005fc1f0);
                    fVar17 = (float)core_motion_cpp_FUN_005038a0(pCStack_70);
                    pCStack_14 = (CCharacter_full_vtable *)
                                 (fVar17 * _DAT_005fc1f4 + (float)pCStack_14);
                    fVar20 = (float)core_motion_cpp_FUN_005038a0(pCStack_70);
                    fVar20 = fVar20 * _DAT_005fc1f8;
                    fVar17 = (this_ptr->base).player_input.strafe_speed;
                    fVar15 = (this_ptr->base).player_input.turn_speed *
                             (this_ptr->base).base.turn_speed;
                    iVar13 = (this_ptr->base).player_input.action_state.jump;
                    (this_ptr->base).base.turn_angle_accumulator = fVar15;
                    fVar18 = (this_ptr->base).base.turn_angle_accumulator;
                    fVar4 = (this_ptr->base).base.turn_angle_accumulator;
                    fVar5 = (this_ptr->right_arm_aim).aim_yaw;
                    fVar6 = (this_ptr->left_arm_aim).aim_yaw;
                    fVar7 = (this_ptr->right_arm_aim).target_yaw;
                    fVar8 = (this_ptr->left_arm_aim).target_yaw;
                    this_ptr->turn_angle = this_ptr->turn_angle - fVar15;
                    (this_ptr->right_arm_aim).aim_yaw = fVar5 - fVar15;
                    (this_ptr->left_arm_aim).aim_yaw = fVar6 - fVar18;
                    (this_ptr->right_arm_aim).target_yaw = fVar7 - fVar18;
                    fVar18 = (this_ptr->base).base.position_delta.x;
                    (this_ptr->left_arm_aim).target_yaw = fVar8 - fVar4;
                    (this_ptr->base).base.position_delta.x =
                         fVar17 * delta_time * (fVar20 + (float)pCStack_14) + fVar18;
                    if ((iVar13 != 0) && ((this_ptr->base).base.layer_action_index != 0xe)) {
                      switch(iVar22) {
                      case 0:
                      case 1:
                      case 2:
                      case 4:
                      case 5:
                        desired_state_index = 0xb;
                        break;
                      case 3:
                        desired_state_index = 7;
                        break;
                      default:
                        goto switchD_00564db7_default;
                      }
                      (this_ptr->base).base.is_on_ground = 0;
                    }
switchD_00564db7_default:
                    if (desired_state_index != iVar22) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                                (&(this_ptr->base).base.model.base,desired_state_index,1);
                    }
                    if ((this_ptr->base).player_input.action_state.use_item != 0) {
                      core_hero_cpp_FUN_004cfc80();
                      iStack_68 = 0;
                      break;
                    }
                  }
                  iStack_68 = 0;
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
              EVar12 = (this_ptr->base).base.walk_state;
              if (EVar12 < 2) {
                if (EVar12 == WALK_STATE_WALKING) {
                  iVar22 = 1;
                }
                else {
                  iVar22 = 0;
                }
LAB_00564b9f:
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(this_ptr->base).base.model.base,iVar22,1);
              }
              else {
                if (EVar12 < WALK_STATE_NO_PATH) {
                  iVar22 = 3;
                  goto LAB_00564b9f;
                }
                if (EVar12 != WALK_STATE_NO_PATH) {
                  iVar22 = 0;
                  goto LAB_00564b9f;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(this_ptr->base).base.model.base,0,1);
                engine_console_cpp_CConsole_printf_FUN_00436710
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
            pCStack_18 = pCVar10;
            if ((this_ptr->base).player_input.action_state.fire != 0) {
              (*((this_ptr_00->base).vtable._ub)->getBoundingBox)
                        (&this_ptr_00->base,in_stack_fffffb78);
              puVar23 = auStack_3f4;
              puVar26 = auStack_3e4;
              for (iVar22 = 6; iVar22 != 0; iVar22 = iVar22 + -1) {
                *puVar26 = *puVar23;
                puVar23 = puVar23 + (uint)bVar27 * -2 + 1;
                puVar26 = puVar26 + (uint)bVar27 * -2 + 1;
              }
              fStack_340 = fStack_3dc + fStack_3d0;
              aCStack_33c[0].x = fStack_3d8 + fStack_3cc;
              aCStack_33c[0].y = local_3d4 + fStack_3c8;
              afStack_24c[2] = fStack_3dc + fStack_3d0;
              afStack_24c[(uint)bVar27 * -2 + 3] = *(float *)((int)aCStack_33c + (uint)bVar27 * -8);
              afStack_24c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4] =
                   *(float *)((int)aCStack_33c + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 4);
              fStack_7c = afStack_24c[2] * _DAT_005eb5d1;
              afStack_78[0] = afStack_24c[3] * _DAT_005eb5d1;
              afStack_78[1] = fStack_23c * _DAT_005eb5d1;
              fStack_16c = afStack_24c[2] * _DAT_005eb5d1;
              afStack_168[(uint)bVar27 * -2] = afStack_78[(uint)bVar27 * -2];
              afStack_168[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
                   afStack_78[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
              core_actor_cpp_FUN_00408d70((this_ptr->base).pushed_object);
              uStack_214 = uStack_10c;
              *(float *)((int)aCStack_204 + (uint)bVar27 * -8 + -0xc) =
                   afStack_108[(uint)bVar27 * -2];
              *(float *)((int)aCStack_204 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + -8) =
                   afStack_108[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
              core_actor_cpp_FUN_00408de0(this_ptr);
              afStack_c0[2] = afStack_108[2];
              afStack_c0[(uint)bVar27 * -2 + 3] = afStack_108[(uint)bVar27 * -2 + 3];
              afStack_c0[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4] =
                   afStack_108[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
              fStack_1c0 = fStack_f4;
              afStack_1bc[(uint)bVar27 * -2] = afStack_108[(uint)bVar27 * -2 + 6];
              afStack_1bc[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
                   afStack_108[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 7];
              pCVar19 = (CMotionController *)
                        core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_1bc[0]);
              fStack_190 = fStack_3d0 - fStack_3dc;
              afStack_18c[0] = fStack_3cc - fStack_3d8;
              afStack_18c[1] = fStack_3c8 - local_3d4;
              fStack_250 = fStack_3d0 - fStack_3dc;
              afStack_24c[(uint)bVar27 * -2] = afStack_18c[(uint)bVar27 * -2];
              afStack_24c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
                   afStack_18c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
              fStack_c4 = fStack_250 * _DAT_005eb5d1;
              afStack_c0[0] = afStack_24c[0] * _DAT_005eb5d1;
              afStack_c0[1] = afStack_24c[1] * _DAT_005eb5d1;
              fStack_1a8 = fStack_250 * _DAT_005eb5d1;
              afStack_1a4[(uint)bVar27 * -2] = afStack_c0[(uint)bVar27 * -2];
              afStack_1a4[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
                   afStack_c0[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
              afStack_1a4[0] = 0.0;
              SStack_458.hit_part_index = (int)pCVar19;
              if ((((fStack_b0 - SQRT(afStack_1a4[1] * afStack_1a4[1] + fStack_1a8 * fStack_1a8) <
                     (float)_DAT_005eb5ed) && (1.0 < afStack_c0[3])) &&
                  (afStack_c0[3] < (float)_DAT_005eb5f5)) &&
                 (ABS((float)pCVar19) < (float)_DAT_005eb5fd)) {
                pCStack_40 = (CMotionController *)(delta_time * _DAT_005eb605);
                if ((float)pCVar19 < -(float)pCStack_40) {
                  SStack_458.hit_part_index = (int)-(float)pCStack_40;
                }
                if ((float)pCStack_40 < (float)SStack_458.hit_part_index) {
                  SStack_458.hit_part_index = (int)pCStack_40;
                }
                (this_ptr->base).base.base.orient.vec.y =
                     (this_ptr->base).base.base.orient.vec.y + (float)SStack_458.hit_part_index;
                core_charactr_cpp_FUN_00429d60(this_ptr,&(this_ptr->base).base.base.orient);
                goto switchD_00564c2e_caseD_6;
              }
            }
            if (pCStack_18 == (CLadder *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (&(this_ptr->base).base.model.base,0,1);
              core_hero_cpp_CHero_stopPushingBox_FUN_004cf830(&this_ptr->base);
            }
          }
        }
        else {
          if ((this_ptr->base).base.grabbed_type == 0) {
            core_actor_cpp_FUN_00408de0(this_ptr);
            afStack_98[2] = afStack_368[2];
            afStack_98[(uint)bVar27 * -2 + 3] = afStack_368[(uint)bVar27 * -2 + 3];
            afStack_98[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4] =
                 afStack_368[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
            afStack_1bc[0] = afStack_18c[3];
            afStack_1bc[(uint)bVar27 * -2 + 1] = afStack_18c[(uint)bVar27 * -2 + 4];
            afStack_1bc[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 2] =
                 afStack_18c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 5];
            fStack_28 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_1bc[1]);
            if (fStack_28 < _DAT_005eb609) {
              fStack_28 = fStack_28 + _DAT_005eb605;
            }
            if (_DAT_005eb60d < fStack_28) {
              fStack_28 = fStack_28 + _DAT_005eb611;
            }
            fStack_5c = delta_time * _DAT_005eb605;
            fStack_6c = -fStack_5c;
            if (fStack_28 < fStack_6c) {
              fStack_28 = fStack_6c;
            }
            if (fStack_5c < fStack_28) {
              fStack_28 = fStack_5c;
            }
            (this_ptr->base).base.base.orient.vec.y =
                 (this_ptr->base).base.base.orient.vec.y + fStack_28;
            core_charactr_cpp_FUN_00429d60(this_ptr);
          }
          pCStack_3c = (CCharacter *)(this_ptr->base).base.grabbed_by;
          pCStack_14 = (pCStack_3c->base).vtable._uc;
          pCStack_4c = &(this_ptr->base).base.model;
          core_skeleton_cpp_FUN_00546a90(pCStack_4c);
          pCVar14 = pCStack_14;
          this_ptr_02 = pCStack_3c;
          pCVar29 = &CStack_210;
          CStack_210.x = fStack_354;
          *(float *)((int)aCStack_204 + (uint)bVar27 * -8 + -8) = afStack_368[(uint)bVar27 * -2 + 6]
          ;
          actor = this_ptr;
          *(float *)((int)aCStack_204 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + -4) =
               afStack_368[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 7];
          iVar22 = (*(pCVar14->_uc).attractActorToward)(this_ptr_02,(CDemonActor *)actor,pCVar29);
          if (iVar22 == 0) {
            (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
          }
          else if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
            fVar17 = this_ptr->grab_timer + delta_time;
            this_ptr->grab_timer = fVar17;
            if ((_DAT_005fc1fc <= fVar17) && ((this_ptr->base).base.grabbed_type != 1)) {
              fVar17 = (float)core_motion_cpp_FUN_005038a0();
              fVar18 = (float)core_motion_cpp_FUN_005038a0();
              if (fVar18 + fVar17 <= 0.0) {
                (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseFromGrab)
                          ((CCharacter *)this_ptr);
              }
              else if ((this_ptr->base).player_input.action_state.fire != 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_40,0x23,1);
                (this_ptr->base).player_input.action_state.fire = 0;
              }
            }
            goto switchD_00564c2e_caseD_6;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0,1);
        }
      }
      else {
        (*((pCVar9->vtable)._ub)->getInteractionInfo)(pCVar9,&SStack_41c);
        if ((SStack_41c.approach_offset == 0.0) ||
           (this_ptr != (CStranger *)SStack_41c.distance_max)) {
          core_hero_cpp_CHero_stopNearbyInteraction_FUN_004cfad0(&this_ptr->base);
        }
        else {
          pCVar9 = ((CHero *)SStack_41c.distance_max)->nearby_interactive_actor;
          puVar23 = (uint *)((int)pCVar9 + (uint)bVar27 * -8 + 0x34);
          auStack_2c8._0_4_ = (pCVar9->orient).vec.x;
          *(uint *)(auStack_2c8 + (uint)bVar27 * -8 + 4) = *puVar23;
          *(uint *)(auStack_2c8 + ((uint)bVar27 * -2 + (uint)bVar27 * -2) * 4 + 8) =
               puVar23[(uint)bVar27 * -2 + 1];
          pCStack_3c = (CCharacter *)
                       ((((CHero *)SStack_41c.distance_max)->player_input).turn_speed *
                        _DAT_005eb605 * (float)_DAT_005eb615 * delta_time);
          if ((float)pCStack_3c < SStack_41c.pitch_min) {
            pCStack_3c = (CCharacter *)SStack_41c.pitch_min;
          }
          if (SStack_41c.pitch_max < (float)pCStack_3c) {
            pCStack_3c = (CCharacter *)SStack_41c.pitch_max;
          }
          auStack_2c8._4_4_ =
               core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                         ((float)auStack_2c8._4_4_ + (float)pCStack_3c);
          fStack_38 = (this_ptr->base).player_input.look_up_down_speed * _DAT_005eb605 *
                      (float)_DAT_005eb615 * delta_time;
          if (fStack_38 < fStack_3f8) {
            fStack_38 = fStack_3f8;
          }
          if (fStack_3fc < fStack_38) {
            fStack_38 = fStack_3fc;
          }
          auStack_2c8._0_4_ =
               core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0((float)auStack_2c8._0_4_ + fStack_38);
          pCVar9 = (this_ptr->base).nearby_interactive_actor;
          pCVar2 = &(this_ptr->base).base.model;
          iVar22 = (*((pCVar9->vtable)._ub)->updateInteraction)
                             (pCVar9,(UOrientationVector *)auStack_2c8,
                              &(this_ptr->base).player_input);
          if (iVar22 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar2->base,0,1);
            core_hero_cpp_CHero_stopNearbyInteraction_FUN_004cfad0(&this_ptr->base);
          }
          else {
            SStack_458.hit_part_index =
                 (int)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                ((((this_ptr->base).nearby_interactive_actor)->orient).vec.y -
                                 (this_ptr->base).base.base.orient.vec.y);
            if ((float)_DAT_005eb5dd <= (float)SStack_458.hit_part_index) {
              if ((double)(float)SStack_458.hit_part_index <= _DAT_005eb5e5) {
                iVar22 = 0;
              }
              else {
                iVar22 = 4;
              }
            }
            else {
              iVar22 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar2->base,iVar22,1);
            iVar22 = SStack_458.hit_part_index;
            pfVar24 = (float *)((int)this_ptr + (uint)bVar27 * -8 + 0x34);
            afStack_128[1] = (this_ptr->base).base.base.orient.vec.x;
            afStack_128[(uint)bVar27 * -2 + 2] = *pfVar24;
            afStack_128[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 3] = pfVar24[(uint)bVar27 * -2 + 1];
            afStack_128[2] = (float)iVar22 * this_ptr->interact_blend + afStack_128[2];
            core_charactr_cpp_FUN_00429d60(this_ptr,afStack_128 + 1);
            afStack_98[0] = SStack_41c.pitch_min + (float)_DAT_005eb61d;
            uStack_a0 = 0;
            fStack_9c = 0.0;
            core_actor_cpp_FUN_00408d70((this_ptr->base).nearby_interactive_actor,&uStack_a0);
            afStack_320[1] = afStack_368[1];
            afStack_320[(uint)bVar27 * -2 + 2] = afStack_368[(uint)bVar27 * -2 + 2];
            afStack_320[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 3] =
                 afStack_368[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 3];
            pfVar24 = &this_ptr->interact_blend;
            afStack_98[1] = afStack_320[1] - (this_ptr->base).base.base.location.position.x;
            afStack_98[2] = afStack_320[2] - (this_ptr->base).base.base.location.position.y;
            afStack_98[3] = afStack_320[3] - (this_ptr->base).base.base.location.position.z;
            uVar28 = CONCAT44(uVar31,afStack_29c + 1);
            afStack_29c[1] = afStack_98[1];
            afStack_29c[(uint)bVar27 * -2 + 2] = afStack_98[(uint)bVar27 * -2 + 2];
            afStack_29c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 3] =
                 afStack_98[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 3];
            core_actor_cpp_FUN_00408d30(this_ptr,uVar28);
            fStack_1c0 = afStack_1e8[1];
            afStack_1bc[(uint)bVar27 * -2] = afStack_1e8[(uint)bVar27 * -2 + 2];
            afStack_1bc[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
                 afStack_1e8[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 3];
            pCVar29 = &(this_ptr->base).base.model.accumulated_root_motion;
            fStack_154 = fStack_1c0 * *pfVar24;
            fStack_150 = afStack_1bc[0] * *pfVar24;
            fStack_14c = afStack_1bc[1] * *pfVar24;
            afStack_26c[1] = fStack_1c0 * *pfVar24;
            afStack_26c[(uint)bVar27 * -2 + 2] = afStack_168[(uint)bVar27 * -2 + 6];
            afStack_26c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 3] =
                 afStack_168[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 7];
            if (pCVar29 != (CVector3f *)(afStack_26c + 1)) {
              pCVar29->x = afStack_26c[1];
              (this_ptr->base).base.model.accumulated_root_motion.y = afStack_26c[2];
              (this_ptr->base).base.model.accumulated_root_motion.z = afStack_26c[3];
            }
            (this_ptr->base).base.model.accumulated_root_motion.y = 0.0;
          }
        }
      }
    }
    else {
      fVar17 = (float)core_motion_cpp_FUN_005038a0(&(this_ptr->base).base.model);
      if (0.0 < fVar17) {
        if ((this_ptr->base).base.base.location.position.y <
            (this_ptr->ladder_to_descend->base).location.position.y + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0,1);
        }
      }
      else {
        this_ptr->ladder_to_descend = (CLadder *)0x0;
      }
      if (0.0 < this_ptr->ladder_blend_time) {
        if (this_ptr->ladder_blend_time <= delta_time) {
          this_ptr->ladder_blend_time = 0.0;
          fStack_464 = 1.0;
        }
        else {
          fStack_464 = delta_time / this_ptr->ladder_blend_time;
          this_ptr->ladder_blend_time = this_ptr->ladder_blend_time - delta_time;
        }
        pCVar29 = &this_ptr->ladder_offset;
        afStack_24c[3] = pCVar29->x * fStack_464;
        pCVar1 = &(this_ptr->base).base.base.location;
        fVar4 = 1.0 - fStack_464;
        fStack_23c = (this_ptr->ladder_offset).y * fStack_464;
        fStack_238 = (this_ptr->ladder_offset).z * fStack_464;
        auStack_2c8._4_4_ = afStack_24c[3];
        *(float *)(auStack_2c8 + (uint)bVar27 * -8 + 8) = afStack_24c[(uint)bVar27 * -2 + 4];
        (&fStack_2bc)[(uint)bVar27 * -2 + (uint)bVar27 * -2] =
             afStack_24c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 5];
        fVar17 = (this_ptr->base).base.base.location.position.y;
        fVar18 = (this_ptr->base).base.base.location.position.z;
        (pCVar1->position).x = (pCVar1->position).x + (float)auStack_2c8._4_4_;
        (this_ptr->base).base.base.location.position.y = fVar17 + (float)auStack_2c8._8_4_;
        (this_ptr->base).base.base.location.position.z = fVar18 + fStack_2bc;
        pCVar29->x = pCVar29->x * fVar4;
        (this_ptr->ladder_offset).y = (this_ptr->ladder_offset).y * fVar4;
        (this_ptr->ladder_offset).z = (this_ptr->ladder_offset).z * fVar4;
        fStack_50 = fVar4;
        fVar17 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                           (this_ptr->ladder_facing_angle - (this_ptr->base).base.base.orient.vec.y)
        ;
        (this_ptr->base).base.turn_angle_accumulator = fVar17 * fStack_464;
      }
      fVar17 = (*((this_ptr->base).base.base.vtable._ub)->cylinderGroundCheck)
                         ((CDemonActor *)this_ptr,(this_ptr->base).base.collision_cylinder_height,
                          (CVector3f *)0x0);
      (this_ptr->base).base.closest_distance_threshold = fVar17;
    }
  }
  else {
    fVar17 = (float)core_motion_cpp_FUN_005038a0(&(this_ptr->base).base.model);
    if (0.0 < fVar17) {
      core_actor_cpp_FUN_00408d70((this_ptr->base).ladder_to_climb);
      uStack_2f4 = uStack_1ec;
      afStack_320[(uint)bVar27 * -2 + 0xc] = afStack_1e8[(uint)bVar27 * -2];
      afStack_320[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0xd] =
           afStack_1e8[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
      if (fStack_2f0 + (float)_DAT_005eb625 < (this_ptr->base).base.base.location.position.y) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,0,1);
      }
    }
    else {
      (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
    }
    if (0.0 < this_ptr->ladder_blend_time) {
      if (this_ptr->ladder_blend_time <= delta_time) {
        this_ptr->ladder_blend_time = 0.0;
        fStack_468 = 1.0;
      }
      else {
        fStack_468 = delta_time / this_ptr->ladder_blend_time;
        this_ptr->ladder_blend_time = this_ptr->ladder_blend_time - delta_time;
      }
      pCVar29 = &this_ptr->ladder_offset;
      fStack_39c = pCVar29->x * fStack_468;
      pCVar1 = &(this_ptr->base).base.base.location;
      fVar4 = 1.0 - fStack_468;
      afStack_398[0] = (this_ptr->ladder_offset).y * fStack_468;
      afStack_398[1] = (this_ptr->ladder_offset).z * fStack_468;
      fStack_2e8 = fStack_39c;
      afStack_320[(uint)bVar27 * -2 + 0xf] = afStack_398[(uint)bVar27 * -2];
      afStack_320[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0x10] =
           afStack_398[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
      fVar17 = (this_ptr->base).base.base.location.position.y;
      fVar18 = (this_ptr->base).base.base.location.position.z;
      (pCVar1->position).x = (pCVar1->position).x + fStack_2e8;
      (this_ptr->base).base.base.location.position.y = fVar17 + fStack_2e4;
      (this_ptr->base).base.base.location.position.z = fVar18 + fStack_2e0;
      pCVar29->x = pCVar29->x * fVar4;
      (this_ptr->ladder_offset).y = (this_ptr->ladder_offset).y * fVar4;
      (this_ptr->ladder_offset).z = (this_ptr->ladder_offset).z * fVar4;
      fStack_54 = fVar4;
      fVar17 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                         (this_ptr->ladder_facing_angle - (this_ptr->base).base.base.orient.vec.y);
      (this_ptr->base).base.turn_angle_accumulator = fVar17 * fStack_468;
    }
  }
switchD_00564c2e_caseD_6:
  iVar22 = core_motion_cpp_FUN_005035c0();
  if ((*(int *)(iVar22 + 0x24) == 0x1b) &&
     (this_ptr_01 = (CAmmoBox *)
                    core_actor_cpp_castToClassHash_FUN_0040c8f0
                              ((this_ptr->base).object_to_pick_up,g_CAmmoBoxClassInfo.name_hash),
     this_ptr_01 != (CAmmoBox *)0x0)) {
    fVar17 = core_motion_cpp_FUN_00503e60(&(this_ptr->base).base.model.base);
    core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e600(this_ptr_01,fVar17);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_stranger_cpp_FUN_00567530(this_ptr,delta_time);
  if (iStack_68 != 0) {
    (this_ptr->pending_velocity).z = 0.0;
    (this_ptr->pending_velocity).y = (this_ptr->pending_velocity).z;
    (this_ptr->pending_velocity).x = (this_ptr->pending_velocity).y;
  }
  if (((this_ptr->base).ladder_to_climb == (CLadder *)0x0) &&
     (this_ptr->ladder_to_descend == (CLadder *)0x0)) {
    if (fStack_38 == 0.0) goto LAB_005639ef;
    pCStack_58 = &(this_ptr->base).base.model.base;
    iVar22 = core_motion_cpp_FUN_005035c0();
    fVar17 = 0x41900000 * delta_time;
    pCVar29 = &(this_ptr->base).base.model.accumulated_root_motion;
    iVar22 = *(int *)(iVar22 + 0x24);
    pCVar3 = &(this_ptr->base).base.position_delta;
    afStack_398[2] = pCVar29->x + pCVar3->x;
    afStack_398[3] =
         (this_ptr->base).base.model.accumulated_root_motion.y +
         (this_ptr->base).base.position_delta.y;
    fStack_388 = (this_ptr->base).base.model.accumulated_root_motion.z +
                 (this_ptr->base).base.position_delta.z;
    aCStack_2b8[0].x = afStack_398[2];
    *(float *)((int)aCStack_2b8 + ((uint)bVar27 * -2 + -1) * 4 + 8) =
         afStack_398[(uint)bVar27 * -2 + 3];
    *(float *)((int)aCStack_2b8 + ((uint)bVar27 * -2 + (uint)bVar27 * -2) * 4 + 8) =
         afStack_398[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar29->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar3->x = (this_ptr->base).base.position_delta.y;
    fStack_60 = fVar17;
    iStack_30 = iVar22;
    if (iVar22 == 7) {
      aCStack_2b8[0].x = 0.0;
      aCStack_2b8[0].y = 0.0;
      this_ptr->jump_speed = 0x41900000;
      this_ptr->airborne_timer = 0.0;
      aCStack_2b8[0].z = fVar17;
    }
    else {
      if (iVar22 == 8) {
        fVar4 = (float)_DAT_005eb62d;
        fVar18 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = 0x41900000;
        fVar18 = fVar18 - delta_time * fVar4;
        this_ptr->airborne_timer = 0.0;
        aCStack_2b8[0].z = fVar17;
        goto LAB_00564f88;
      }
      if (iVar22 == 9) {
        fVar4 = (float)_DAT_005eb62d;
        aCStack_2b8[0].x = 0.0;
        aCStack_2b8[0].y = 0.0;
        fVar18 = 0x3F000000 * 0x41900000;
        aCStack_2b8[0].z = this_ptr->jump_speed * delta_time;
        this_ptr->airborne_timer = 0.0;
        fVar17 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = this_ptr->jump_speed - fVar18 * delta_time;
        fVar18 = this_ptr->jump_speed;
        (this_ptr->base).base.velocity.y = fVar17 - delta_time * fVar4;
        if (fVar18 < 0.0) {
          this_ptr->jump_speed = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_58,0xf,1);
        }
      }
      else if (iVar22 == 10) {
        aCStack_2b8[0].y = 0.0;
        aCStack_2b8[0].x = 0.0;
        aCStack_2b8[0].z = fVar17;
      }
      else if (iVar22 == 0xb) {
        this_ptr->airborne_timer = 0.0;
        this_ptr->jump_speed = 0x41200000;
      }
      else if (iVar22 == 0xc) {
        aCStack_2b8[0].z = 0x41200000 * delta_time;
        fVar17 = (float)_DAT_005eb62d;
        fVar18 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = 0x41200000;
        fVar18 = fVar18 - delta_time * fVar17;
        this_ptr->airborne_timer = 0.0;
LAB_00564f88:
        aCStack_2b8[0].y = 0.0;
        aCStack_2b8[0].x = 0.0;
LAB_00564f8a:
        (this_ptr->base).base.velocity.y = fVar18;
      }
      else if (iVar22 == 0xd) {
        fVar4 = (float)_DAT_005eb62d;
        aCStack_2b8[0].x = 0.0;
        aCStack_2b8[0].y = 0.0;
        fVar18 = 0x3F000000 * 0x41200000;
        aCStack_2b8[0].z = this_ptr->jump_speed * delta_time;
        this_ptr->airborne_timer = 0.0;
        fVar17 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = this_ptr->jump_speed - fVar18 * delta_time;
        fVar18 = this_ptr->jump_speed;
        (this_ptr->base).base.velocity.y = fVar17 - delta_time * fVar4;
        if (fVar18 < 0.0) {
          this_ptr->jump_speed = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_58,0xf,1);
        }
      }
      else {
        if (iVar22 != 0xe) {
          if (iVar22 == 0xf) {
            aCStack_2b8[0].z = 0.0;
            fVar18 = (this_ptr->base).base.velocity.y - delta_time * (float)_DAT_005eb62d;
            this_ptr->airborne_timer = 9999.9;
            goto LAB_00564f88;
          }
          if (iVar22 == 0x10) {
            aCStack_2b8[0].z = 0.0;
            aCStack_2b8[0].y = 0.0;
            aCStack_2b8[0].x = 0.0;
            fVar18 = (this_ptr->base).base.velocity.y - delta_time * (float)_DAT_005eb62d;
          }
          else {
            fVar18 = (this_ptr->base).base.velocity.y - delta_time * (float)_DAT_005eb62d;
          }
          goto LAB_00564f8a;
        }
        aCStack_2b8[0].y = 0.0;
      }
    }
    core_actor_cpp_FUN_00408d30(this_ptr);
    fStack_2a0 = fStack_144;
    afStack_29c[(uint)bVar27 * -2] = afStack_168[(uint)bVar27 * -2 + 10];
    afStack_29c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
         afStack_168[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0xb];
    fStack_30c = (this_ptr->base).base.velocity.x * delta_time;
    pCVar29 = aCStack_2b8;
    fStack_308 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_304 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_36c = fStack_30c;
    afStack_368[(uint)bVar27 * -2] = afStack_320[(uint)bVar27 * -2 + 6];
    afStack_368[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
         afStack_320[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 7];
    afStack_128[2] = fStack_36c + fStack_2a0;
    afStack_128[3] = afStack_368[0] + afStack_29c[0];
    fStack_118 = afStack_368[1] + afStack_29c[1];
    fStack_e4 = fStack_36c + fStack_2a0;
    afStack_108[(uint)bVar27 * -2 + 10] = afStack_128[(uint)bVar27 * -2 + 3];
    afStack_108[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0xb] =
         afStack_128[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4];
    aCStack_2b8[0].x = aCStack_2b8[0].x + fStack_e4;
    aCStack_2b8[0].y = aCStack_2b8[0].y + fStack_e0;
    aCStack_2b8[0].z = aCStack_2b8[0].z + fStack_dc;
    this_ptr->fall_velocity_snapshot = (this_ptr->base).base.velocity.y;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,pCVar29);
    if ((this_ptr->base).base.base.location.position.y <
        (this_ptr->base).base.closest_distance_threshold + (float)_DAT_005eb635) {
      (this_ptr->base).base.is_on_ground = 1;
    }
    if (((iStack_30 == 0xf) || (iStack_30 == 9)) || (iStack_30 == 0xd)) {
      if ((this_ptr->base).base.is_on_ground != 0) {
        engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"Splat at %3.2f fps\n");
        fStack_470 = -this_ptr->fall_velocity_snapshot;
        dVar30 = (double)fStack_470;
        if (fStack_470 < (float)_DAT_005eb63d) {
          if (((iStack_30 == 0xd) || (iStack_30 == 9)) || (iStack_30 == 0xf)) goto LAB_0056514e;
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_458);
          fVar17 = (float)(((float10)dVar30 + (float10)_DAT_005eb645) * (float10)_DAT_005eb64d *
                          (float10)_DAT_005eb655);
          SStack_458.damage_amount = fVar17;
          if (0x42c80000 < (int)fVar17) {
            SStack_458.damage_amount = 9999.0;
          }
          pCVar14 = (this_ptr->base).base.base.vtable._uc;
          (this_ptr->base).invincibility_timer = 0.0;
          (*(pCVar14->_uc).processDamage)((CCharacter *)this_ptr,&SStack_458);
          if (((this_ptr->base).base.hit_points <= 0.0) || (0x42c80000 < (int)fVar17)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,0x12,1);
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"fall-?.wav");
            iVar22 = (this_ptr->base).base.is_on_ground;
            fStack_45c = 0x3F000000;
            goto joined_r0x00565514;
          }
          dVar30 = 2.12199579936439e-314;
LAB_0056514e:
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,SUB84(__BITCAST_UINT64(dVar30),0),
                     (int)((ulonglong)dVar30 >> 0x20));
        }
        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)this_ptr,(CVector3f *)&DAT_0265370c,
                   fStack_470 * _DAT_005eb65d + 1.0);
      }
      iVar22 = (this_ptr->base).base.is_on_ground;
      fStack_45c = 0x3F000000;
    }
    else {
      iVar22 = (this_ptr->base).base.is_on_ground;
      fStack_45c = 0x3F000000;
    }
joined_r0x00565514:
    0x3F000000 = fStack_45c;
    if (iVar22 == 0) {
      this_ptr->airborne_timer = this_ptr->airborne_timer + delta_time;
      if (iStack_30 == 3) {
        fStack_45c = fStack_45c * (float)_DAT_005eb5d5;
      }
      if ((fStack_45c < this_ptr->airborne_timer) ||
         (this_ptr->fall_velocity_snapshot < (float)_DAT_005eb645)) {
        if (iStack_30 != 0xf) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0xf,1);
        }
        (this_ptr->base).base.is_on_ground = 0;
      }
      goto LAB_005639ef;
    }
  }
  else {
    core_actor_cpp_FUN_00408cf0(this_ptr);
    pCVar1 = &(this_ptr->base).base.base.location;
    afStack_26c[2] = fStack_2dc;
    afStack_26c[(uint)bVar27 * -2 + 3] = afStack_320[(uint)bVar27 * -2 + 0x12];
    afStack_26c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4] =
         afStack_320[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0x13];
    fVar17 = (this_ptr->base).base.base.location.position.y;
    fVar18 = (this_ptr->base).base.base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + afStack_26c[2];
    (this_ptr->base).base.base.location.position.y = fVar17 + afStack_26c[3];
    (this_ptr->base).base.base.location.position.z = fVar18 + fStack_25c;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  this_ptr->airborne_timer = 0.0;
LAB_005639ef:
  (this_ptr->pending_velocity).z = 0.0;
  (this_ptr->pending_velocity).y = (this_ptr->pending_velocity).z;
  (this_ptr->pending_velocity).x = (this_ptr->pending_velocity).y;
  pCVar16 = g_CGamePtr;
  if (local_2c != 0) {
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
        (pCVar11 = (this_ptr->base).inventories[0].selected_weapons
                   [(this_ptr->base).inventories[0].current_group], pCVar11 != (CWeapon *)0x0)) &&
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
  pCVar11 = (this_ptr->base).inventories[0].selected_weapons
            [(this_ptr->base).inventories[0].current_group];
  if (pCVar11 == (CWeapon *)0x0) {
    g_CGamePtr->flashlight_active = 0;
  }
  else if (pCVar11->can_attach_light == 0) {
    g_CGamePtr->flashlight_active = 0;
  }
  if (iStack_34 != 0) {
    core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_0056db50(this_ptr,delta_time);
  }
  if (this_ptr->guns_drawn == 0) {
    fVar17 = this_ptr->guns_drawn_blend - delta_time / _DAT_005fc1c0;
    this_ptr->guns_drawn_blend = fVar17;
    if (fVar17 < 0.0) {
      this_ptr->guns_drawn_blend = 0.0;
    }
  }
  else {
    fVar17 = delta_time / _DAT_005fc1bc + this_ptr->guns_drawn_blend;
    this_ptr->guns_drawn_blend = fVar17;
    if (1.0 < fVar17) {
      this_ptr->guns_drawn_blend = 1.0;
    }
  }
  fVar17 = (this_ptr->right_arm_aim).recoil_timer - delta_time / _DAT_005fc1c4;
  this_ptr->frame_cleared = 0.0;
  (this_ptr->right_arm_aim).recoil_timer = fVar17;
  if (fVar17 <= 0.0) {
    (this_ptr->right_arm_aim).recoil_timer = 0.0;
  }
  fVar17 = (this_ptr->left_arm_aim).recoil_timer - delta_time / _DAT_005fc1c4;
  (this_ptr->left_arm_aim).recoil_timer = fVar17;
  if (fVar17 <= 0.0) {
    (this_ptr->left_arm_aim).recoil_timer = 0.0;
  }
  if (iStack_20 != 0) {
    core_stranger_cpp_CStranger_handleActionButton_FUN_0056e4d0(this_ptr);
  }
  core_stranger_cpp_FUN_00565ff0(this_ptr);
  if ((((this_ptr->base).aim_mode == AIM_MODE_MANUAL) && (this_ptr->weapon != (CWeapon *)0x0)) &&
     (this_ptr->weapon->weapon_type == WEAPON_TYPE_GUN)) {
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
              (&(this_ptr->base).base.model);
    core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005683d0(this_ptr,0);
    core_stranger_cpp_CStranger_aimLeftPistol_FUN_0056ca10(this_ptr);
    core_stranger_cpp_FUN_00565ff0(this_ptr);
  }
  core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_0056d3d0(this_ptr,delta_time,iStack_1c);
  core_stranger_cpp_CStranger_updateClothSimulation_FUN_0056eb60(this_ptr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  pCVar2 = &(this_ptr->base).base.model;
  fVar17 = (float)core_motion_cpp_FUN_005038a0(pCVar2);
  if (fVar17 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004cf830(&this_ptr->base);
  }
  else {
    fVar17 = core_motion_cpp_FUN_00503e60(&pCVar2->base);
    if ((1.0 < fVar17) &&
       (pCStack_64 = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c8f0
                               (&((this_ptr->base).pushed_object)->base,
                                g_CBoxActorClassInfo.name_hash), pCStack_64 != (CBoxActor *)0x0)) {
      core_stranger_cpp_FUN_00565f30();
      afStack_1a4[0] = afStack_168[3];
      afStack_1a4[(uint)bVar27 * -2 + 1] = afStack_168[(uint)bVar27 * -2 + 4];
      afStack_1a4[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 2] =
           afStack_168[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 5];
      core_actor_cpp_FUN_00408d70(this_ptr);
      fStack_9c = fStack_d8;
      afStack_98[(uint)bVar27 * -2] = afStack_108[(uint)bVar27 * -2 + 0xd];
      afStack_98[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
           afStack_108[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0xe];
      fStack_300 = fStack_9c - aCStack_204[0].x;
      fStack_2fc = afStack_98[0] - aCStack_204[0].y;
      fStack_2f8 = afStack_98[1] - aCStack_204[0].z;
      aCStack_33c[0].x = fStack_9c - aCStack_204[0].x;
      *(float *)((int)aCStack_33c + (uint)bVar27 * -8 + 4) = afStack_320[(uint)bVar27 * -2 + 9];
      *(float *)((int)aCStack_33c + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8) =
           afStack_320[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 10];
      aCStack_33c[0].y = 0.0;
      core_actor_cpp_FUN_00408d30(this_ptr);
      fStack_f0 = fStack_150;
      afStack_108[(uint)bVar27 * -2 + 7] = afStack_168[(uint)bVar27 * -2 + 7];
      afStack_108[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 8] =
           afStack_168[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 8];
      if (0.0 < fStack_e8) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_0041cb40(pCStack_64,aCStack_204,aCStack_33c);
      }
    }
  }
  core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005683d0(this_ptr,0);
  core_stranger_cpp_FUN_0056bf00(this_ptr,0);
  core_stranger_cpp_FUN_0056bf00(this_ptr,1);
  core_stranger_cpp_CStranger_handleFireButton_FUN_0056e850(this_ptr,delta_time);
  core_inv_cpp_CInventory_updateInventory_FUN_004dccd0((this_ptr->base).inventories);
  core_stranger_cpp_CStranger_processWeaponTick_FUN_0056eed0(this_ptr,delta_time);
  if ((this_ptr->weapon != (CWeapon *)0x0) && ((this_ptr->weapon->base).is_transparent != 0)) {
    (this_ptr->base).base.base.is_transparent = 1;
  }
  iVar22 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->goggle_sfx_handles[0]);
  if (iVar22 == 0) {
    if (g_CGamePtr->goggles_active != 0) {
      sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->goggle_sfx_handles[1]);
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_005503a0(1);
      uVar21 = sound_sndmain_cpp_startSfx_FUN_005506b0("goggle-on.wav");
      this_ptr->goggle_sfx_handles[1] = uVar21;
      sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(0.0);
      uVar21 = sound_sndmain_cpp_startSfx_FUN_005506b0("goggle-loop.wav");
      this_ptr->goggle_sfx_handles[0] = uVar21;
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
      sound_sndmain_cpp_setSfxFade_FUN_00551080(this_ptr->goggle_sfx_handles[0],1.0,1.0,0);
      return;
    }
  }
  else if (g_CGamePtr->goggles_active == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->goggle_sfx_handles[1]);
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->goggle_sfx_handles[0]);
    sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
    sound_sndmain_cpp_setNextSfxFlagBits_FUN_005503a0(1);
    sound_sndmain_cpp_startSfx_FUN_005506b0("goggle-off.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    return;
  }
  return;
}
