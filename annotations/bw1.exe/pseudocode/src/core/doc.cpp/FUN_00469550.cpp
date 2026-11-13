// Name: core_doc.cpp_FUN_00469550
// Address: 00469550
// Address Range: [[00469550, 0046bdd0]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00469550(CDoc *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00469550(CDoc *param_1,float param_2)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  CLadder *pCVar5;
  CWeapon *pCVar6;
  CBoxActor *this_ptr;
  EWalkState EVar7;
  CCharacter_full_vtable *pCVar8;
  float fVar9;
  CGame *pCVar10;
  float fVar11;
  SMotion *pSVar12;
  CAmmoBox *this_ptr_00;
  CDemonActor *pCVar13;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  uint *puVar17;
  int desired_state_index;
  CInventory *pCVar18;
  float *pfVar19;
  uint *puVar20;
  byte bVar21;
  float afStackY_13b0 [944];
  CBoundingBox3D *in_stack_fffffb18;
  ulonglong uVar22;
  CVector3f *pCVar23;
  UOrientationVector *user_orientation;
  double in_stack_fffffb20;
  float fStack_498;
  float fStack_494;
  float fStack_48c;
  SDamageInfo SStack_484;
  SInteractionInfo SStack_448;
  float fStack_428;
  float fStack_424;
  uint auStack_420 [4];
  uint auStack_410 [2];
  float fStack_408;
  float fStack_404;
  float local_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float afStack_3e0 [6];
  float fStack_3c8;
  float afStack_3c4 [5];
  float fStack_3b0;
  CVector3f CStack_3a4;
  float fStack_398;
  float afStack_394 [5];
  uint uStack_380;
  float fStack_37c;
  float fStack_36c;
  float afStack_368 [6];
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  uint uStack_32c;
  float afStack_328 [5];
  float fStack_314;
  float fStack_2f4;
  float afStack_2f0 [4];
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  CVector3f CStack_2c0;
  float fStack_2b4;
  float fStack_2b0;
  float afStack_2ac [4];
  float afStack_29c [4];
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_264;
  float afStack_260 [4];
  float fStack_250;
  float fStack_24c;
  uint uStack_23c;
  float afStack_238 [2];
  CVector3f CStack_230;
  float fStack_224;
  float afStack_220 [4];
  float fStack_210;
  uint uStack_20c;
  float fStack_208;
  float fStack_1f8;
  float afStack_1f4 [2];
  UOrientationVector UStack_1ec;
  float afStack_1e0 [4];
  float afStack_1d0 [5];
  float fStack_1bc;
  float fStack_1b8;
  CVector3f aCStack_1ac [2];
  float fStack_194;
  float afStack_190 [4];
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  uint uStack_170;
  uint uStack_164;
  uint uStack_158;
  uint uStack_144;
  float afStack_140 [5];
  uint uStack_12c;
  float afStack_128 [4];
  float fStack_118;
  float fStack_114;
  uint uStack_110;
  float fStack_104;
  uint uStack_f0;
  float afStack_ec [6];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint uStack_c8;
  uint uStack_b4;
  float afStack_b0 [5];
  uint uStack_9c;
  float afStack_98 [4];
  float fStack_88;
  uint uStack_78;
  uint uStack_74;
  float fStack_70;
  float fStack_6c;
  CCharacter *pCStack_68;
  float fStack_64;
  CBoxActor *pCStack_60;
  float fStack_5c;
  float *pfStack_58;
  float fStack_54;
  CLadder *pCStack_50;
  float fStack_4c;
  float fStack_48;
  CDeformableModelInstance *pCStack_44;
  int iStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  int local_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  CInventory *pCStack_14;
  
  bVar21 = 0;
  local_28 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                       (0x01C51D80,"?DebugActionPending" + 1);
  pCVar13 = (param_1->base).base.carry_hands[1].carry_actor;
  if ((pCVar13 != (CDemonActor *)0x0) && ((param_1->carry_object_bbox).max.x < _DAT_005d9d70)) {
    (*((pCVar13->vtable)._ub)->getBoundingBox)(pCVar13,in_stack_fffffb18);
    pfVar16 = afStack_3e0;
    pfVar19 = &local_400;
    for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
      *pfVar19 = *pfVar16;
      pfVar16 = pfVar16 + (uint)bVar21 * -2 + 1;
      pfVar19 = pfVar19 + (uint)bVar21 * -2 + 1;
    }
    if (&param_1->carry_object_bbox != (CBoundingBox3D *)&fStack_3f8) {
      (param_1->carry_object_bbox).min.x = fStack_3f8;
      (param_1->carry_object_bbox).min.y = fStack_3f4;
      (param_1->carry_object_bbox).min.z = fStack_3f0;
    }
    pCVar23 = &(param_1->carry_object_bbox).max;
    if (pCVar23 != (CVector3f *)&fStack_3ec) {
      pCVar23->x = fStack_3ec;
      (param_1->carry_object_bbox).max.y = local_3e8;
      (param_1->carry_object_bbox).max.z = fStack_3e4;
    }
    fStack_d4 = (param_1->carry_object_bbox).min.x + (param_1->carry_object_bbox).max.x;
    fStack_d0 = (param_1->carry_object_bbox).min.y + (param_1->carry_object_bbox).max.y;
    fStack_cc = (param_1->carry_object_bbox).min.z + (param_1->carry_object_bbox).max.z;
    fStack_17c = fStack_d4;
    afStack_190[(uint)bVar21 * -2 + 6] = afStack_ec[(uint)bVar21 * -2 + 7];
    afStack_190[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7] =
         afStack_ec[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 8];
    afStack_128[3] = fStack_17c * _DAT_005d9d74;
    fStack_118 = fStack_178 * _DAT_005d9d74;
    fStack_114 = fStack_174 * _DAT_005d9d74;
    fStack_314 = fStack_17c * _DAT_005d9d74;
    afStack_328[(uint)bVar21 * -2 + 6] = afStack_128[(uint)bVar21 * -2 + 4];
    afStack_328[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7] =
         afStack_128[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 5];
    core_actor_cpp_FUN_00408b40((param_1->base).base.carry_hands[1].carry_actor);
    fStack_398 = afStack_368[0];
    afStack_394[(uint)bVar21 * -2] = afStack_368[(uint)bVar21 * -2 + 1];
    afStack_394[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
         afStack_368[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 2];
    core_actor_cpp_FUN_00408bb0(param_1);
    afStack_1d0[3] = afStack_328[2];
    afStack_1d0[(uint)bVar21 * -2 + 4] = afStack_328[(uint)bVar21 * -2 + 3];
    afStack_1d0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 5] =
         afStack_328[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
    if (&param_1->carry_object_world_center != (CVector3f *)(afStack_1d0 + 3)) {
      (param_1->carry_object_world_center).x = afStack_1d0[3];
      (param_1->carry_object_world_center).y = afStack_1d0[4];
      (param_1->carry_object_world_center).z = fStack_1bc;
    }
  }
  core_game_cpp_CGame_slamDT_FUN_004d7f50(g_CGamePtr,param_2);
  core_charactr_cpp_FUN_00434790(param_1);
  fVar11 = (param_1->base).invincibility_timer - param_2;
  (param_1->base).invincibility_timer = fVar11;
  if (fVar11 < 0.0) {
    (param_1->base).invincibility_timer = 0.0;
  }
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.model.accumulated_root_motion.x =
       (param_1->base).base.model.accumulated_root_motion.y;
  core_doc_cpp_FUN_0046c9e0();
  uStack_23c = afStack_394[2];
  afStack_238[(uint)bVar21 * -2] = afStack_394[(uint)bVar21 * -2 + 3];
  afStack_238[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
       afStack_394[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
  core_actor_cpp_FUN_00408b40(param_1);
  uVar22 = CONCAT44(param_2,param_1);
  CStack_3a4.x = afStack_260[0];
  *(float *)((int)&CStack_3a4 + (uint)bVar21 * -8 + 4) = afStack_260[(uint)bVar21 * -2 + 1];
  *(float *)((int)&CStack_3a4 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8) =
       afStack_260[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 2];
  core_doc_cpp_FUN_0046bde0(uVar22);
  local_28 = 1;
  fStack_30 = 1.4013e-45;
  fStack_2c = 1.4013e-45;
  iStack_18 = 1;
  iStack_1c = 1;
  if ((param_1->base).base.grabbed_by != (CDemonActor *)0x0) {
    local_28 = 0;
    fStack_2c = 0.0;
    iStack_18 = 0;
    iStack_1c = 0;
    fStack_30 = 0.0;
    if (iStack_20 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if ((param_1->base).pushed_object != (CBoxActor *)0x0) {
    iStack_18 = 0;
    iStack_1c = 0;
    local_28 = 0;
    fStack_2c = 0.0;
    if (iStack_20 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if (((param_1->base).ladder_to_climb != (CLadder *)0x0) ||
     (param_1->ladder_to_descend != (CLadder *)0x0)) {
    fStack_30 = 0.0;
    fStack_2c = 0.0;
    iStack_18 = 0;
    iStack_1c = 0;
    local_28 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"ladder\n");
    }
  }
  if (((param_1->base).object_to_pick_up != (CDemonActor *)0x0) ||
     ((param_1->base).action_pending == 4)) {
    iStack_18 = 0;
    iStack_1c = 0;
    local_28 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"pickup\n");
    }
  }
  pCVar2 = &(param_1->base).base.model;
  fVar11 = (float)core_motion_cpp_FUN_00524a40(pCVar2);
  if (((((0.0 < fVar11) || (fVar11 = (float)core_motion_cpp_FUN_00524a40(pCVar2), 0.0 < fVar11)) ||
       (fVar11 = (float)core_motion_cpp_FUN_00524a40(pCVar2), 0.0 < fVar11)) ||
      ((fVar11 = (float)core_motion_cpp_FUN_00524a40(pCVar2), 0.0 < fVar11 ||
       (fVar11 = (float)core_motion_cpp_FUN_00524a40(pCVar2), 0.0 < fVar11)))) ||
     ((param_1->base).base.hit_points <= 0.0)) {
    fStack_2c = 0.0;
    iStack_18 = 0;
    iStack_1c = 0;
    local_28 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"hurt\n");
    }
  }
  fVar11 = (float)core_motion_cpp_FUN_00524a40(&(param_1->base).base.model);
  if (((0.0 < fVar11) || ((param_1->base).action_pending == 5)) ||
     ((param_1->base).door_to_open != (CDoor *)0x0)) {
    iStack_1c = 0;
    local_28 = 0;
    iStack_18 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"door\n");
    }
  }
  fVar11 = (float)core_motion_cpp_FUN_00524a40(&(param_1->base).base.model);
  if (((0.0 < fVar11) || ((param_1->base).action_pending == 5)) ||
     ((param_1->base).door_to_open != (CDoor *)0x0)) {
    iStack_1c = 0;
    local_28 = 0;
    iStack_18 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"door\n");
    }
  }
  fVar11 = (float)core_motion_cpp_FUN_00524a40(&(param_1->base).base.model);
  if (0.0 < fVar11) {
    fStack_2c = 0.0;
    iStack_18 = 0;
    fStack_30 = 0.0;
    iStack_1c = 0;
    local_28 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"sitting\n");
    }
  }
  if ((param_1->base).action_pending == 1) {
    iStack_1c = 0;
    iStack_18 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"stashinventory\n");
    }
  }
  if ((param_1->base).action_pending == 2) {
    iStack_1c = 0;
    iStack_18 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"placeobject\n");
    }
  }
  if ((param_1->base).action_pending == 6) {
    iStack_1c = 0;
    iStack_18 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"putdownobject\n");
    }
  }
  if ((param_1->base).action_pending == 3) {
    iStack_1c = 0;
    iStack_18 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"toss\n");
    }
  }
  if ((param_1->base).action_pending == 7) {
    iStack_1c = 0;
    iStack_18 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"attackmelee\n");
    }
  }
  if (((param_1->base).lever_to_pull != (CLever *)0x0) ||
     (fVar11 = (float)core_motion_cpp_FUN_00524a40(&(param_1->base).base.model), 0.0 < fVar11)) {
    iStack_18 = 0;
    iStack_1c = 0;
    local_28 = 0;
    fStack_2c = 0.0;
    if (iStack_20 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"leverToPull=%s\n");
    }
  }
  if ((param_1->base).base.grabbed_by == (CDemonActor *)0x0) {
    if ((param_1->base).base.base.standing_platform != (CPlatform *)0x0) {
      fStack_30 = 1.4013e-45;
    }
    if ((param_1->base).base.base.location.position.y !=
        (param_1->base).base.closest_distance_threshold) {
      fStack_30 = 1.4013e-45;
    }
  }
  (param_1->base).base.walk_step_speed = (param_1->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(param_1);
  if ((param_1->base).nearby_interactive_actor == (CDemonActor *)0x0) {
    fVar11 = param_1->interact_blend - param_2 * (float)_DAT_005d9d7c * (float)_DAT_005d9d7c;
    param_1->interact_blend = fVar11;
    if (fVar11 < 0.0) {
      param_1->interact_blend = 0.0;
    }
  }
  else {
    fVar11 = param_2 * (float)_DAT_005d9d7c + param_1->interact_blend;
    param_1->interact_blend = fVar11;
    if (1.0 < fVar11) {
      param_1->interact_blend = 1.0;
    }
  }
  pCVar5 = (param_1->base).ladder_to_climb;
  fStack_64 = 1.4013e-45;
  if (pCVar5 == (CLadder *)0x0) {
    if (param_1->ladder_to_descend == (CLadder *)0x0) {
      pCVar13 = (param_1->base).nearby_interactive_actor;
      if (pCVar13 == (CDemonActor *)0x0) {
        if ((param_1->base).base.grabbed_by == (CDemonActor *)0x0) {
          this_ptr = (param_1->base).pushed_object;
          if (this_ptr == (CBoxActor *)0x0) {
            iVar15 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                               ((CCharacter *)param_1,param_2);
            pCVar2 = &(param_1->base).base.model;
            if (iVar15 == 0) {
              if (local_28 != 0) {
                pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                    (&pCVar2->base);
                uVar14 = pSVar12->state_index;
                if ((((uVar14 < 9) || (uVar14 < 10)) || (uVar14 < 0xe)) || (uVar14 < 0xf)) {
LAB_0046b39a:
                  if ((param_1->base).base.is_on_ground != 0) {
                    desired_state_index = 0;
                    pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                        (&(param_1->base).base.model.base);
                    iVar15 = pSVar12->state_index;
                    if ((param_1->base).player_input.action_state.walk == 0) {
                      if ((param_1->base).player_input.action_state.backup == 0) {
                        fVar11 = (param_1->base).player_input.strafe_speed;
                        in_stack_fffffb20 = (double)fVar11;
                        if ((float)_DAT_005d9d84 <= fVar11) {
                          if (_DAT_005d9d8c < in_stack_fffffb20) {
                            if ((param_1->base).player_input.action_state.run == 0) {
                              desired_state_index = 6;
                            }
                            else {
                              desired_state_index = 8;
                            }
                          }
                        }
                        else if ((param_1->base).player_input.action_state.run == 0) {
                          desired_state_index = 5;
                        }
                        else {
                          desired_state_index = 7;
                        }
                      }
                      else if ((param_1->base).player_input.action_state.run == 0) {
                        fVar11 = (param_1->base).player_input.strafe_speed;
                        if ((float)_DAT_005d9d84 <= fVar11) {
                          if ((double)fVar11 <= _DAT_005d9d8c) {
                            desired_state_index = 2;
                          }
                          else {
                            desired_state_index = 0x10;
                          }
                        }
                        else {
                          desired_state_index = 0xf;
                        }
                      }
                      else {
                        fVar11 = (param_1->base).player_input.strafe_speed;
                        if ((float)_DAT_005d9d84 <= fVar11) {
                          if ((double)fVar11 <= _DAT_005d9d8c) {
                            desired_state_index = 3;
                          }
                          else {
                            desired_state_index = 0xe;
                          }
                        }
                        else {
                          desired_state_index = 0xd;
                        }
                      }
                    }
                    else if ((param_1->base).player_input.action_state.run == 0) {
                      fVar11 = (param_1->base).player_input.strafe_speed;
                      if ((float)_DAT_005d9d84 <= fVar11) {
                        if ((double)fVar11 <= _DAT_005d9d8c) {
                          desired_state_index = 1;
                        }
                        else {
                          desired_state_index = 0xc;
                        }
                      }
                      else {
                        desired_state_index = 0xb;
                      }
                    }
                    else {
                      fVar11 = (param_1->base).player_input.strafe_speed;
                      if ((float)_DAT_005d9d84 <= fVar11) {
                        if ((double)fVar11 <= _DAT_005d9d8c) {
                          desired_state_index = 4;
                        }
                        else {
                          desired_state_index = 10;
                        }
                      }
                      else {
                        desired_state_index = 9;
                      }
                    }
                    if (((param_1->base).player_input.action_state.quick_turn != 0) &&
                       ((param_1->base).base.layer_action_index != 0xe)) {
                      param_1->quick_turn_angle = 0.0;
                      param_1->quick_turn_active = 1;
                    }
                    if (param_1->quick_turn_active == 0) {
                      fVar11 = (param_1->base).player_input.turn_speed *
                               (param_1->base).base.turn_speed;
                      (param_1->base).base.turn_angle_accumulator = fVar11;
                      param_1->turn_angle = param_1->turn_angle - fVar11;
                    }
                    if (desired_state_index != iVar15) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                                (&(param_1->base).base.model.base,desired_state_index,1);
                    }
                    if ((param_1->base).player_input.action_state.use_item != 0) {
                      core_hero_cpp_CHero_tryUseSelectedItem_FUN_004ec020(&param_1->base);
                    }
                  }
                  fStack_64 = 0.0;
                }
                else if (uVar14 < 0x75) {
                  if ((uVar14 < 0x10) || (uVar14 == 0x10)) goto LAB_0046b39a;
                }
                else if (((0x75 < uVar14) && (0x77 < uVar14)) &&
                        ((uVar14 < 0x79 || (uVar14 == 0x79)))) {
                  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                      (&(param_1->base).base.model.base);
                  iVar15 = 0x78;
                  if ((param_1->base).player_input.action_state.walk != 0) {
                    iVar15 = 0x79;
                  }
                  if (iVar15 != pSVar12->state_index) {
                    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                              (&(param_1->base).base.model.base,iVar15,1);
                  }
                  if (param_1->quick_turn_active == 0) {
                    fVar11 = (param_1->base).player_input.turn_speed *
                             (param_1->base).base.turn_speed;
                    (param_1->base).base.turn_angle_accumulator = fVar11;
                    param_1->turn_angle = param_1->turn_angle - fVar11;
                  }
                }
              }
            }
            else {
              EVar7 = (param_1->base).base.walk_state;
              if (EVar7 < 2) {
                if (EVar7 == WALK_STATE_WALKING) {
                  iVar15 = 1;
                }
                else {
                  iVar15 = 0;
                }
LAB_0046b2fb:
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(param_1->base).base.model.base,iVar15,1);
              }
              else {
                if (EVar7 < WALK_STATE_NO_PATH) {
                  iVar15 = 4;
                  goto LAB_0046b2fb;
                }
                if (EVar7 != WALK_STATE_NO_PATH) {
                  iVar15 = 0;
                  goto LAB_0046b2fb;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0,1);
                engine_console_cpp_CConsole_printf_FUN_00445430
                          (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
              }
              (param_1->base).base.model.accumulated_root_motion.z = 0.0;
              (param_1->base).base.model.accumulated_root_motion.y =
                   (param_1->base).base.model.accumulated_root_motion.z;
              (param_1->base).base.model.accumulated_root_motion.x =
                   (param_1->base).base.model.accumulated_root_motion.y;
            }
          }
          else {
            pCStack_50 = pCVar5;
            if ((param_1->base).player_input.action_state.fire != 0) {
              (*((this_ptr->base).vtable._ub)->getBoundingBox)
                        (&this_ptr->base,SUB84(in_stack_fffffb20,0));
              puVar17 = auStack_420;
              puVar20 = auStack_410;
              for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
                *puVar20 = *puVar17;
                puVar17 = puVar17 + (uint)bVar21 * -2 + 1;
                puVar20 = puVar20 + (uint)bVar21 * -2 + 1;
              }
              fStack_36c = fStack_408 + fStack_3fc;
              afStack_368[0] = fStack_404 + fStack_3f8;
              afStack_368[1] = local_400 + fStack_3f4;
              afStack_1e0[3] = fStack_408 + fStack_3fc;
              afStack_1d0[(uint)bVar21 * -2] = afStack_368[(uint)bVar21 * -2];
              afStack_1d0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                   afStack_368[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
              afStack_98[2] = afStack_1e0[3] * _DAT_005d9d74;
              afStack_98[3] = afStack_1d0[0] * _DAT_005d9d74;
              fStack_88 = afStack_1d0[1] * _DAT_005d9d74;
              afStack_128[2] = afStack_1e0[3] * _DAT_005d9d74;
              afStack_128[(uint)bVar21 * -2 + 3] = afStack_98[(uint)bVar21 * -2 + 3];
              afStack_128[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                   afStack_98[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
              core_actor_cpp_FUN_00408b40((param_1->base).pushed_object);
              uStack_12c = uStack_b4;
              afStack_128[(uint)bVar21 * -2] = afStack_b0[(uint)bVar21 * -2];
              afStack_128[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                   afStack_b0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
              core_actor_cpp_FUN_00408bb0(param_1);
              uStack_f0 = uStack_144;
              afStack_ec[(uint)bVar21 * -2] = afStack_140[(uint)bVar21 * -2];
              afStack_ec[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                   afStack_140[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
              afStack_29c[2] = (float)uStack_9c;
              afStack_29c[(uint)bVar21 * -2 + 3] = afStack_98[(uint)bVar21 * -2];
              afStack_29c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                   afStack_98[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
              in_stack_fffffb20 = __BITCAST_DOUBLE(CONCAT44(afStack_29c[3],0x46b133));
              fVar11 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_29c[3]);
              fStack_1f8 = fStack_3fc - fStack_408;
              afStack_1f4[0] = fStack_3f8 - fStack_404;
              afStack_1f4[1] = fStack_3f4 - local_400;
              fStack_2d0 = fStack_3fc - fStack_408;
              afStack_2f0[(uint)bVar21 * -2 + 9] = afStack_1f4[(uint)bVar21 * -2];
              afStack_2f0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 10] =
                   afStack_1f4[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
              afStack_2ac[3] = fStack_2d0 * _DAT_005d9d74;
              afStack_29c[0] = fStack_2cc * _DAT_005d9d74;
              afStack_29c[1] = fStack_2c8 * _DAT_005d9d74;
              afStack_1d0[2] = fStack_2d0 * _DAT_005d9d74;
              afStack_1d0[(uint)bVar21 * -2 + 3] = afStack_29c[(uint)bVar21 * -2];
              afStack_1d0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                   afStack_29c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
              SStack_484.damage_amount = fVar11;
              afStack_1d0[3] = 0.0;
              if ((((afStack_ec[1] -
                     SQRT(afStack_1d0[4] * afStack_1d0[4] + afStack_1d0[2] * afStack_1d0[2]) <
                     (float)_DAT_005d9d94) && (1.0 < (double)afStack_ec[0])) &&
                  ((double)afStack_ec[0] < _DAT_005d9d9c)) && (ABS(fVar11) < (float)_DAT_005d9da4))
              {
                fStack_38 = param_2 * _DAT_005d9dac;
                if (fVar11 < -fStack_38) {
                  SStack_484.damage_amount = -fStack_38;
                }
                if (fStack_38 < SStack_484.damage_amount) {
                  SStack_484.damage_amount = fStack_38;
                }
                in_stack_fffffb20 = __BITCAST_DOUBLE(CONCAT44(&(param_1->base).base.base.orient,param_1));
                (param_1->base).base.base.orient.vec.y =
                     (param_1->base).base.base.orient.vec.y + SStack_484.damage_amount;
                core_charactr_cpp_FUN_00433d50();
                goto LAB_00469e25;
              }
            }
            if (pCStack_50 == (CLadder *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(param_1->base).base.model.base,0,1);
              core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0(&param_1->base);
            }
          }
        }
        else {
          if ((param_1->base).base.grabbed_type == 0) {
            core_actor_cpp_FUN_00408bb0(param_1);
            afStack_3c4[2] = afStack_ec[3];
            afStack_3c4[(uint)bVar21 * -2 + 3] = afStack_ec[(uint)bVar21 * -2 + 4];
            afStack_3c4[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                 afStack_ec[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 5];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
            uStack_20c = uStack_164;
            afStack_220[(uint)bVar21 * -2 + 6] = afStack_190[(uint)bVar21 * -2 + 0xc];
            afStack_220[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7] =
                 afStack_190[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0xd];
            fStack_24 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_208);
            if (fStack_24 < _DAT_005d9db0) {
              fStack_24 = fStack_24 + _DAT_005d9dac;
            }
            if (_DAT_005d9db4 < fStack_24) {
              fStack_24 = fStack_24 + _DAT_005d9db8;
            }
            fStack_4c = param_2 * _DAT_005d9dac;
            fStack_5c = -fStack_4c;
            if (fStack_24 < fStack_5c) {
              fStack_24 = fStack_5c;
            }
            if (fStack_4c < fStack_24) {
              fStack_24 = fStack_4c;
            }
            (param_1->base).base.base.orient.vec.y =
                 (param_1->base).base.base.orient.vec.y + fStack_24;
            core_charactr_cpp_FUN_00433d50(param_1);
          }
          pCStack_68 = (CCharacter *)(param_1->base).base.grabbed_by;
          pCVar8 = (pCStack_68->base).vtable._uc;
          pCStack_44 = &(param_1->base).base.model;
          core_skeleton_cpp_FUN_00569130(pCStack_44);
          pCVar23 = &CStack_230;
          CStack_230.x = fStack_1b8;
          *(float *)((int)&CStack_230 + (uint)bVar21 * -8 + 4) = afStack_1d0[(uint)bVar21 * -2 + 7];
          *(float *)((int)&CStack_230 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
               afStack_1d0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 8];
          iVar15 = (*(pCVar8->_uc).attractActorToward)(pCStack_68,(CDemonActor *)param_1,pCVar23);
          if (iVar15 == 0) {
            (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
          }
          else if ((param_1->base).base.grabbed_by != (CDemonActor *)0x0) {
            fVar11 = param_1->grab_timer + param_2;
            param_1->grab_timer = fVar11;
            if ((_DAT_005feccc <= fVar11) && ((param_1->base).base.grabbed_type != 1)) {
              pCStack_60 = (CBoxActor *)core_motion_cpp_FUN_00524a40();
              in_stack_fffffb20 = __BITCAST_DOUBLE(CONCAT44(fStack_38,0x46a96b));
              fVar11 = (float)core_motion_cpp_FUN_00524a40();
              if (fVar11 + (float)pCStack_60 <= 0.0) {
                in_stack_fffffb20 = __BITCAST_DOUBLE(CONCAT44(0x46af7f,SUB84(in_stack_fffffb20,0)));
                (*(((param_1->base).base.base.vtable._uc)->_uc).releaseFromGrab)
                          ((CCharacter *)param_1);
              }
              else if (((param_1->base).player_input.action_state.fire != 0) || (_DAT_01c43544 != 0)
                      ) {
                pCVar2 = &(param_1->base).base.model;
                in_stack_fffffb20 = __BITCAST_DOUBLE(CONCAT44(0x28,pCVar2));
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0x28,1)
                ;
                (param_1->base).player_input.action_state.fire = 0;
              }
            }
            goto LAB_00469e25;
          }
          pCVar2 = &(param_1->base).base.model;
          in_stack_fffffb20 = (double)ZEXT48(pCVar2);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0,1);
        }
      }
      else {
        (*((pCVar13->vtable)._ub)->getInteractionInfo)(pCVar13,&SStack_448);
        if ((SStack_448.approach_offset == 0.0) || (param_1 != (CDoc *)SStack_448.distance_max)) {
          in_stack_fffffb20 = __BITCAST_DOUBLE(CONCAT44(param_1,0x46af11));
          core_hero_cpp_CHero_stopNearbyInteraction_FUN_004ebe80(&param_1->base);
        }
        else {
          pCVar13 = ((CHero *)SStack_448.distance_max)->nearby_interactive_actor;
          pfVar16 = (float *)((int)pCVar13 + (uint)bVar21 * -8 + 0x34);
          UStack_1ec.vec.x = (pCVar13->orient).vec.x;
          afStack_1e0[(uint)bVar21 * -2 + -2] = *pfVar16;
          afStack_1e0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + -1] = pfVar16[(uint)bVar21 * -2 + 1];
          fStack_2c = (((CHero *)SStack_448.distance_max)->player_input).turn_speed * _DAT_005d9dac
                      * (float)_DAT_005d9dbc * param_2;
          if (fStack_2c < SStack_448.pitch_min) {
            fStack_2c = SStack_448.pitch_min;
          }
          if (SStack_448.pitch_max < fStack_2c) {
            fStack_2c = SStack_448.pitch_max;
          }
          UStack_1ec.vec.y =
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(UStack_1ec.vec.y + fStack_2c);
          fStack_30 = (param_1->base).player_input.look_up_down_speed * _DAT_005d9dac *
                      (float)_DAT_005d9dbc * param_2;
          if (fStack_30 < fStack_424) {
            fStack_30 = fStack_424;
          }
          if (fStack_428 < fStack_30) {
            fStack_30 = fStack_428;
          }
          UStack_1ec.vec.x =
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(UStack_1ec.vec.x + fStack_30);
          user_orientation = &UStack_1ec;
          pCVar13 = (param_1->base).nearby_interactive_actor;
          pCVar2 = &(param_1->base).base.model;
          iVar15 = (*((pCVar13->vtable)._ub)->updateInteraction)
                             (pCVar13,user_orientation,&(param_1->base).player_input);
          if (iVar15 == 0) {
            in_stack_fffffb20 = __BITCAST_DOUBLE(CONCAT44(0x46af43,user_orientation));
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0,1);
            core_hero_cpp_CHero_stopNearbyInteraction_FUN_004ebe80(&param_1->base);
          }
          else {
            SStack_484.gore_multiplier =
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                           ((((param_1->base).nearby_interactive_actor)->orient).vec.y -
                            (param_1->base).base.base.orient.vec.y);
            if ((float)_DAT_005d9d84 <= SStack_484.gore_multiplier) {
              if ((double)SStack_484.gore_multiplier <= _DAT_005d9d8c) {
                iVar15 = 0;
              }
              else {
                iVar15 = 5;
              }
            }
            else {
              iVar15 = 6;
            }
            in_stack_fffffb20 = __BITCAST_DOUBLE(CONCAT44(0x46ad64,user_orientation));
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,iVar15,1);
            fVar11 = SStack_484.gore_multiplier;
            pfVar16 = (float *)((int)param_1 + (uint)bVar21 * -8 + 0x34);
            afStack_328[1] = (param_1->base).base.base.orient.vec.x;
            afStack_328[(uint)bVar21 * -2 + 2] = *pfVar16;
            afStack_328[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 3] = pfVar16[(uint)bVar21 * -2 + 1];
            afStack_328[2] = fVar11 * param_1->interact_blend + afStack_328[2];
            core_charactr_cpp_FUN_00433d50();
            fStack_70 = SStack_448.pitch_min + (float)_DAT_005d9dc4;
            uStack_78 = 0;
            uStack_74 = 0;
            core_actor_cpp_FUN_00408b40();
            fStack_6c = fStack_264;
            (&pCStack_68)[(uint)bVar21 * -2] = (CCharacter *)afStack_260[(uint)bVar21 * -2];
            (&fStack_64)[(uint)bVar21 * -2 + (uint)bVar21 * -2] =
                 afStack_260[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
            pfStack_58 = &param_1->interact_blend;
            fStack_2f4 = fStack_6c - (param_1->base).base.base.location.position.x;
            afStack_2f0[0] = (float)pCStack_68 - (param_1->base).base.base.location.position.y;
            afStack_2f0[1] = fStack_64 - (param_1->base).base.base.location.position.z;
            afStack_2f0[2] = fStack_2f4;
            afStack_2f0[(uint)bVar21 * -2 + 3] = afStack_2f0[(uint)bVar21 * -2];
            afStack_2f0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                 afStack_2f0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
            core_actor_cpp_FUN_00408b00();
            afStack_190[1] = afStack_238[1];
            afStack_190[(uint)bVar21 * -2 + 2] = *(float *)((int)&CStack_230 + (uint)bVar21 * -8);
            afStack_190[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 3] =
                 *(float *)((int)&CStack_230 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 4);
            pCVar23 = &(param_1->base).base.model.accumulated_root_motion;
            afStack_260[2] = afStack_190[1] * *pfStack_58;
            afStack_260[3] = afStack_190[2] * *pfStack_58;
            fStack_250 = afStack_190[3] * *pfStack_58;
            fStack_2dc = afStack_190[1] * *pfStack_58;
            afStack_2f0[(uint)bVar21 * -2 + 6] = afStack_260[(uint)bVar21 * -2 + 3];
            afStack_2f0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7] =
                 afStack_260[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
            if (pCVar23 != (CVector3f *)(afStack_2f0 + 5)) {
              pCVar23->x = fStack_2dc;
              (param_1->base).base.model.accumulated_root_motion.y = fStack_2d8;
              (param_1->base).base.model.accumulated_root_motion.z = fStack_2d4;
            }
            (param_1->base).base.model.accumulated_root_motion.y = 0.0;
          }
        }
      }
    }
    else {
      fVar11 = (float)core_motion_cpp_FUN_00524a40(&(param_1->base).base.model);
      if (0.0 < fVar11) {
        if ((param_1->base).base.base.location.position.y <
            (param_1->ladder_to_descend->base).location.position.y + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(param_1->base).base.model.base,0,1);
        }
      }
      else {
        param_1->ladder_to_descend = (CLadder *)0x0;
      }
      if (0.0 < param_1->ladder_blend_time) {
        if (param_1->ladder_blend_time <= param_2) {
          param_1->ladder_blend_time = 0.0;
          fStack_494 = 1.0;
        }
        else {
          fStack_494 = param_2 / param_1->ladder_blend_time;
          param_1->ladder_blend_time = param_1->ladder_blend_time - param_2;
        }
        pCVar23 = &param_1->ladder_offset;
        afStack_260[3] = pCVar23->x * fStack_494;
        pCVar1 = &(param_1->base).base.base.location;
        pfVar16 = (float *)(1.0 - fStack_494);
        fStack_250 = (param_1->ladder_offset).y * fStack_494;
        fStack_24c = (param_1->ladder_offset).z * fStack_494;
        fStack_3c8 = afStack_260[3];
        afStack_3c4[(uint)bVar21 * -2] = afStack_260[(uint)bVar21 * -2 + 4];
        afStack_3c4[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
             afStack_260[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 5];
        fVar11 = (param_1->base).base.base.location.position.y;
        fVar4 = (param_1->base).base.base.location.position.z;
        (pCVar1->position).x = (pCVar1->position).x + fStack_3c8;
        (param_1->base).base.base.location.position.y = fVar11 + afStack_3c4[0];
        (param_1->base).base.base.location.position.z = fVar4 + afStack_3c4[1];
        pCVar23->x = pCVar23->x * (float)pfVar16;
        (param_1->ladder_offset).y = (param_1->ladder_offset).y * (float)pfVar16;
        (param_1->ladder_offset).z = (param_1->ladder_offset).z * (float)pfVar16;
        pfStack_58 = pfVar16;
        fVar11 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                           (param_1->ladder_facing_angle - (param_1->base).base.base.orient.vec.y);
        (param_1->base).base.turn_angle_accumulator = fVar11 * fStack_494;
      }
      fVar11 = (*((param_1->base).base.base.vtable._ub)->cylinderGroundCheck)
                         ((CDemonActor *)param_1,(param_1->base).base.collision_cylinder_height,
                          (CVector3f *)0x0);
      (param_1->base).base.closest_distance_threshold = fVar11;
    }
  }
  else {
    fVar11 = (float)core_motion_cpp_FUN_00524a40(&(param_1->base).base.model);
    if (0.0 < fVar11) {
      core_actor_cpp_FUN_00408b40((param_1->base).ladder_to_climb);
      uStack_380 = uStack_110;
      afStack_394[(uint)bVar21 * -2 + 6] = afStack_128[(uint)bVar21 * -2 + 7];
      afStack_394[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7] =
           afStack_128[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 8];
      if (fStack_37c + (float)_DAT_005d9dcc < (param_1->base).base.base.location.position.y) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(param_1->base).base.model.base,0,1);
      }
    }
    else {
      (param_1->base).ladder_to_climb = (CLadder *)0x0;
    }
    if (0.0 < param_1->ladder_blend_time) {
      if (param_1->ladder_blend_time <= param_2) {
        param_1->ladder_blend_time = 0.0;
        fStack_48c = 1.0;
      }
      else {
        fStack_48c = param_2 / param_1->ladder_blend_time;
        param_1->ladder_blend_time = param_1->ladder_blend_time - param_2;
      }
      pCVar23 = &param_1->ladder_offset;
      afStack_190[2] = pCVar23->x * fStack_48c;
      pCVar1 = &(param_1->base).base.base.location;
      fVar9 = 1.0 - fStack_48c;
      afStack_190[3] = (param_1->ladder_offset).y * fStack_48c;
      fStack_180 = (param_1->ladder_offset).z * fStack_48c;
      fStack_284 = afStack_190[2];
      afStack_29c[(uint)bVar21 * -2 + 7] = afStack_190[(uint)bVar21 * -2 + 3];
      afStack_29c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 8] =
           afStack_190[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
      fVar11 = (param_1->base).base.base.location.position.y;
      fVar4 = (param_1->base).base.base.location.position.z;
      (pCVar1->position).x = (pCVar1->position).x + fStack_284;
      (param_1->base).base.base.location.position.y = fVar11 + fStack_280;
      (param_1->base).base.base.location.position.z = fVar4 + fStack_27c;
      pCVar23->x = pCVar23->x * fVar9;
      (param_1->ladder_offset).y = (param_1->ladder_offset).y * fVar9;
      (param_1->ladder_offset).z = (param_1->ladder_offset).z * fVar9;
      fStack_54 = fVar9;
      fVar11 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                         (param_1->ladder_facing_angle - (param_1->base).base.base.orient.vec.y);
      (param_1->base).base.turn_angle_accumulator = fVar11 * fStack_48c;
    }
  }
LAB_00469e25:
  if (0.0 < param_1->door_align_timer) {
    if (param_1->door_align_timer <= param_2) {
      param_1->door_align_timer = 0.0;
      fStack_498 = 1.0;
    }
    else {
      fStack_498 = param_2 / param_1->door_align_timer;
      param_1->door_align_timer = param_1->door_align_timer - param_2;
    }
    pCVar23 = &param_1->door_align_offset;
    afStack_2f0[3] = pCVar23->x * fStack_498;
    fStack_2e0 = (param_1->door_align_offset).y * fStack_498;
    fStack_2dc = (param_1->door_align_offset).z * fStack_498;
    fStack_104 = afStack_2f0[3];
    afStack_128[(uint)bVar21 * -2 + 10] = afStack_2f0[(uint)bVar21 * -2 + 4];
    afStack_128[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0xb] =
         afStack_2f0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 5];
    core_actor_cpp_FUN_00408b00(param_1);
    pCVar3 = &(param_1->base).base.model.accumulated_root_motion;
    UStack_1ec.vec.y = fStack_3b0;
    afStack_1e0[(uint)bVar21 * -2 + -1] = afStack_3c4[(uint)bVar21 * -2 + 6];
    afStack_1e0[(uint)bVar21 * -2 + (uint)bVar21 * -2] =
         afStack_3c4[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7];
    fVar11 = (param_1->base).base.model.accumulated_root_motion.y;
    fVar4 = (param_1->base).base.model.accumulated_root_motion.z;
    fStack_48 = 1.0 - fStack_498;
    pCVar3->x = pCVar3->x + UStack_1ec.vec.y;
    (param_1->base).base.model.accumulated_root_motion.y = fVar11 + UStack_1ec.vec.z;
    (param_1->base).base.model.accumulated_root_motion.z = fVar4 + afStack_1e0[0];
    pCVar23->x = pCVar23->x * fStack_48;
    (param_1->door_align_offset).y = (param_1->door_align_offset).y * fStack_48;
    (param_1->door_align_offset).z = (param_1->door_align_offset).z * fStack_48;
    fVar11 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                       (param_1->door_align_yaw - (param_1->base).base.base.orient.vec.y);
    (param_1->base).base.turn_angle_accumulator = fVar11 * fStack_498;
  }
  pCVar2 = &(param_1->base).base.model;
  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar2->base);
  if ((pSVar12->state_index == 0x1e) &&
     (this_ptr_00 = (CAmmoBox *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              ((param_1->base).object_to_pick_up,g_CAmmoBoxClassInfo.name_hash),
     this_ptr_00 != (CAmmoBox *)0x0)) {
    fVar11 = core_motion_cpp_FUN_00525020(&pCVar2->base);
    core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e1a0(this_ptr_00,fVar11);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)param_1);
  core_doc_cpp_FUN_0046e730(param_1);
  if (fStack_64 != 0.0) {
    (param_1->pending_velocity).z = 0.0;
    (param_1->pending_velocity).y = (param_1->pending_velocity).z;
    (param_1->pending_velocity).x = (param_1->pending_velocity).y;
  }
  if (((param_1->base).ladder_to_climb == (CLadder *)0x0) &&
     (param_1->ladder_to_descend == (CLadder *)0x0)) {
    if (fStack_30 == 0.0) goto LAB_0046a09c;
    pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                        (&(param_1->base).base.model.base);
    pCVar23 = &(param_1->base).base.model.accumulated_root_motion;
    iVar15 = pSVar12->state_index;
    pCVar3 = &(param_1->base).base.position_delta;
    afStack_140[0] = pCVar23->x + pCVar3->x;
    afStack_140[1] =
         (param_1->base).base.model.accumulated_root_motion.y +
         (param_1->base).base.position_delta.y;
    afStack_140[2] =
         (param_1->base).base.model.accumulated_root_motion.z +
         (param_1->base).base.position_delta.z;
    CStack_2c0.x = afStack_140[0];
    *(float *)((int)&CStack_2c0 + (uint)bVar21 * -8 + 4) = afStack_140[(uint)bVar21 * -2 + 1];
    *(float *)((int)&CStack_2c0 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8) =
         afStack_140[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 2];
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    pCVar23->x = (param_1->base).base.model.accumulated_root_motion.y;
    (param_1->base).base.position_delta.z = 0.0;
    (param_1->base).base.position_delta.y = (param_1->base).base.position_delta.z;
    pCVar3->x = (param_1->base).base.position_delta.y;
    if (iVar15 == 0x12) {
      CStack_2c0.z = 0.0;
      CStack_2c0.y = 0.0;
      CStack_2c0.x = 0.0;
      fVar11 = (param_1->base).base.velocity.y - param_2 * (float)_DAT_005d9dd4;
      param_1->airborne_timer = 9999.9;
    }
    else {
      if (iVar15 == 0x13) {
        CStack_2c0.z = 0.0;
        CStack_2c0.y = 0.0;
        CStack_2c0.x = 0.0;
      }
      fVar11 = (param_1->base).base.velocity.y - param_2 * (float)_DAT_005d9dd4;
    }
    (param_1->base).base.velocity.y = fVar11;
    iStack_3c = iVar15;
    core_actor_cpp_FUN_00408b00(param_1);
    afStack_ec[0] = afStack_b0[0];
    afStack_ec[(uint)bVar21 * -2 + 1] = afStack_b0[(uint)bVar21 * -2 + 1];
    afStack_ec[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 2] =
         afStack_b0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 2];
    afStack_29c[3] = (param_1->base).base.velocity.x * param_2;
    pCVar23 = &CStack_2c0;
    fStack_28c = (param_1->base).base.velocity.y * param_2;
    fStack_288 = (param_1->base).base.velocity.z * param_2;
    fStack_2b4 = afStack_29c[3];
    afStack_2ac[(uint)bVar21 * -2 + -1] = afStack_29c[(uint)bVar21 * -2 + 4];
    afStack_2ac[(uint)bVar21 * -2 + (uint)bVar21 * -2] =
         afStack_29c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 5];
    fStack_194 = fStack_2b4 + afStack_ec[0];
    afStack_190[0] = fStack_2b0 + afStack_ec[1];
    afStack_190[1] = afStack_2ac[0] + afStack_ec[2];
    fStack_2cc = fStack_2b4 + afStack_ec[0];
    afStack_2f0[(uint)bVar21 * -2 + 10] = afStack_190[(uint)bVar21 * -2];
    afStack_2f0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0xb] =
         afStack_190[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
    CStack_2c0.x = CStack_2c0.x + fStack_2cc;
    CStack_2c0.y = CStack_2c0.y + fStack_2c8;
    CStack_2c0.z = CStack_2c0.z + fStack_2c4;
    param_1->fall_velocity_snapshot = (param_1->base).base.velocity.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,pCVar23);
    if ((param_1->base).base.base.location.position.y <
        (param_1->base).base.closest_distance_threshold + (float)_DAT_005d9ddc) {
      (param_1->base).base.is_on_ground = 1;
    }
    if ((iStack_3c == 0x12) && ((param_1->base).base.is_on_ground != 0)) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"Splat at %3.2f fps\n");
      fVar11 = -param_1->fall_velocity_snapshot;
      if (fVar11 < (float)_DAT_005d9de4) {
        if (iStack_3c == 0x12) goto LAB_0046b941;
LAB_0046b950:
        (*((param_1->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)param_1,(CVector3f *)&DAT_02c8af28,fVar11 * _DAT_005d9e04 + 1.0);
        goto LAB_0046b976;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_484);
      fVar4 = (fVar11 + (float)_DAT_005d9dec) * (float)_DAT_005d9df4 * (float)_DAT_005d9dfc;
      SStack_484.damage_amount = fVar4;
      if (0x42c80000 < (int)fVar4) {
        SStack_484.damage_amount = 9999.0;
      }
      pCVar8 = (param_1->base).base.base.vtable._uc;
      (param_1->base).invincibility_timer = 0.0;
      (*(pCVar8->_uc).processDamage)((CCharacter *)param_1,&SStack_484);
      if ((0.0 < (param_1->base).base.hit_points) && ((int)fVar4 < 0x42c80001)) {
        in_stack_fffffb20 = 2.12199580084659e-314;
LAB_0046b941:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(param_1->base).base.model.base,SUB84(in_stack_fffffb20,0),
                   (int)((ulonglong)in_stack_fffffb20 >> 0x20));
        goto LAB_0046b950;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(param_1->base).base.model.base,0x15,1);
      (*((param_1->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)param_1,"fall-?.wav");
      iVar15 = (param_1->base).base.is_on_ground;
      fVar11 = 0x3F000000;
    }
    else {
LAB_0046b976:
      iVar15 = (param_1->base).base.is_on_ground;
      fVar11 = 0x3F000000;
    }
    0x3F000000 = fVar11;
    if (iVar15 == 0) {
      param_1->airborne_timer = param_1->airborne_timer + param_2;
      if (fStack_2c == 5.60519e-45) {
        fVar11 = fVar11 * (float)_DAT_005d9d7c;
      }
      if ((fVar11 < param_1->airborne_timer) ||
         (param_1->fall_velocity_snapshot < (float)_DAT_005d9dec)) {
        if (fStack_2c != 2.52234e-44) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(param_1->base).base.model.base,0x12,1);
        }
        (param_1->base).base.is_on_ground = 0;
      }
      goto LAB_0046a09c;
    }
  }
  else {
    core_actor_cpp_FUN_00408ac0(param_1);
    pCVar1 = &(param_1->base).base.base.location;
    fStack_224 = fStack_344;
    afStack_220[(uint)bVar21 * -2] = afStack_368[(uint)bVar21 * -2 + 10];
    afStack_220[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
         afStack_368[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0xb];
    fVar11 = (param_1->base).base.base.location.position.y;
    fVar4 = (param_1->base).base.base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_224;
    (param_1->base).base.base.location.position.y = fVar11 + afStack_220[0];
    (param_1->base).base.base.location.position.z = fVar4 + afStack_220[1];
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    (param_1->base).base.model.accumulated_root_motion.x =
         (param_1->base).base.model.accumulated_root_motion.y;
  }
  param_1->airborne_timer = 0.0;
LAB_0046a09c:
  (param_1->pending_velocity).z = 0.0;
  (param_1->pending_velocity).y = (param_1->pending_velocity).z;
  (param_1->pending_velocity).x = (param_1->pending_velocity).y;
  pCVar10 = g_CGamePtr;
  if (local_28 != 0) {
    if ((param_1->base).player_input.action_state.draw != 0) {
      if (param_1->guns_drawn == 0) {
        param_1->guns_drawn = 1;
      }
      else {
        param_1->guns_drawn = 0;
        if (pCVar10->flashlight_active != 0) {
          pCVar10->flashlight_active = 0;
          (*((param_1->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)param_1,"flashlit.wav");
        }
      }
    }
    if (((param_1->base).player_input.action_state.light != 0) &&
       (pCVar18 = &(param_1->base).inventory,
       (param_1->base).inventory.selected_weapon != (CWeapon *)0x0)) {
      if (param_1->guns_drawn == 1) {
        iVar15 = core_actor_cpp_isOfClass_FUN_0040c550
                           (&param_1->weapon->base,"CFlashlight");
        if ((iVar15 == 0) || (g_CGamePtr->flashlight_active != 1)) {
          if (((param_1->base).inventory.selected_weapon)->can_attach_light != 0) {
            uVar14 = (uint)(g_CGamePtr->flashlight_active == 0);
            g_CGamePtr->flashlight_active = uVar14;
            if (uVar14 != 0) {
              param_1->guns_drawn = 1;
            }
            (*((param_1->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"flashlit.wav");
          }
        }
        else {
          g_CGamePtr->flashlight_active = 0;
          param_1->guns_drawn = 0;
        }
      }
      else {
        iVar15 = core_inv_cpp_FUN_004f8ce0(pCVar18);
        if (iVar15 == 0) {
          if (((param_1->base).inventory.selected_weapon)->can_attach_light != 0) {
            uVar14 = (uint)(g_CGamePtr->flashlight_active == 0);
            g_CGamePtr->flashlight_active = uVar14;
            if (uVar14 != 0) {
              param_1->guns_drawn = 1;
            }
            (*((param_1->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"flashlit.wav");
          }
        }
        else {
          pCStack_14 = pCVar18;
          for (iVar15 = 0; iVar15 < pCStack_14->item_count; iVar15 = iVar15 + 1) {
            pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (pCVar18->items[0],g_CFlashlightClassInfo.name_hash);
            if (pCVar13 != (CDemonActor *)0x0) {
              core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0(pCStack_14,pCVar13,5,1);
              break;
            }
            pCVar18 = (CInventory *)&pCVar18->owner;
          }
          uVar14 = (uint)(g_CGamePtr->flashlight_active == 0);
          g_CGamePtr->flashlight_active = uVar14;
          if (uVar14 != 0) {
            param_1->guns_drawn = 1;
          }
          (*((param_1->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)param_1,"flashlit.wav");
        }
      }
    }
  }
  pCVar6 = (param_1->base).inventory.selected_weapon;
  if (pCVar6 == (CWeapon *)0x0) {
    g_CGamePtr->flashlight_active = 0;
  }
  else if (pCVar6->can_attach_light == 0) {
    g_CGamePtr->flashlight_active = 0;
  }
  if ((g_CGamePtr->letterbox_mode != 0) &&
     (((param_1->base).is_wearing_goggles != 0 || (g_CGamePtr->goggles_active != 0)))) {
    (*(((param_1->base).base.base.vtable._uh)->_uh).toggleGoggles)(&param_1->base);
  }
  if (fStack_2c != 0.0) {
    core_doc_cpp_FUN_00474400(param_1);
  }
  if (param_1->guns_drawn == 0) {
    fVar11 = param_1->guns_drawn_blend - param_2 / _DAT_005feca0;
    param_1->guns_drawn_blend = fVar11;
    if (fVar11 < 0.0) {
      param_1->guns_drawn_blend = 0.0;
    }
  }
  else {
    fVar11 = param_2 / _DAT_005fec9c + param_1->guns_drawn_blend;
    param_1->guns_drawn_blend = fVar11;
    if (1.0 < fVar11) {
      param_1->guns_drawn_blend = 1.0;
    }
  }
  fVar11 = (param_1->right_arm_aim).recoil_timer - param_2 / _DAT_005feca4;
  (param_1->right_arm_aim).recoil_timer = fVar11;
  if (fVar11 <= 0.0) {
    (param_1->right_arm_aim).recoil_timer = 0.0;
  }
  fVar11 = (param_1->left_arm_aim).recoil_timer - param_2 / _DAT_005feca4;
  (param_1->left_arm_aim).recoil_timer = fVar11;
  if (fVar11 <= 0.0) {
    (param_1->left_arm_aim).recoil_timer = 0.0;
  }
  if (iStack_18 != 0) {
    core_doc_cpp_FUN_00474ef0();
  }
  core_doc_cpp_FUN_0046caa0();
  if ((((param_1->base).aim_mode == AIM_MODE_MANUAL) && (param_1->weapon != (CWeapon *)0x0)) &&
     (param_1->weapon->weapon_type == WEAPON_TYPE_GUN)) {
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180
              (&(param_1->base).base.model);
    core_doc_cpp_FUN_0046f610(param_1);
    core_doc_cpp_CDoc_aimLeftPistol_FUN_00473160(param_1);
    core_doc_cpp_FUN_0046caa0();
  }
  core_doc_cpp_CDoc_updateArmRecoilBlend_FUN_00473c10(param_1,param_2,iStack_1c);
  core_doc_cpp_FUN_00476080();
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)param_1,param_2);
  pCVar2 = &(param_1->base).base.model;
  fVar11 = (float)core_motion_cpp_FUN_00524a40(pCVar2);
  if (fVar11 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0(&param_1->base);
  }
  else {
    fVar11 = core_motion_cpp_FUN_00525020(&pCVar2->base);
    if ((1.0 < fVar11) &&
       (pCStack_60 = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c600
                               (&((param_1->base).pushed_object)->base,
                                g_CBoxActorClassInfo.name_hash), pCStack_60 != (CBoxActor *)0x0)) {
      core_doc_cpp_FUN_0046c9e0();
      uStack_c8 = uStack_170;
      afStack_ec[(uint)bVar21 * -2 + 10] = afStack_190[(uint)bVar21 * -2 + 9];
      afStack_ec[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0xb] =
           afStack_190[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 10];
      core_actor_cpp_FUN_00408b40(param_1);
      fStack_350 = afStack_368[3];
      afStack_368[(uint)bVar21 * -2 + 7] = afStack_368[(uint)bVar21 * -2 + 4];
      afStack_368[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 8] =
           afStack_368[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 5];
      afStack_220[2] = fStack_350 - CStack_3a4.x;
      afStack_220[3] = fStack_34c - CStack_3a4.y;
      fStack_210 = fStack_348 - CStack_3a4.z;
      aCStack_1ac[0].x = fStack_350 - CStack_3a4.x;
      *(float *)((int)aCStack_1ac + (uint)bVar21 * -8 + 4) = afStack_220[(uint)bVar21 * -2 + 3];
      *(float *)((int)aCStack_1ac + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
           afStack_220[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
      aCStack_1ac[0].y = 0.0;
      core_actor_cpp_FUN_00408b00(param_1);
      uStack_32c = uStack_158;
      afStack_328[(uint)bVar21 * -2] = afStack_190[(uint)bVar21 * -2 + 0xf];
      afStack_328[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
           afStack_190[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x10];
      if (0.0 < afStack_328[1]) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_00422ab0(pCStack_60,&CStack_3a4,aCStack_1ac);
      }
    }
  }
  core_doc_cpp_FUN_0046f610(param_1);
  core_doc_cpp_FUN_004724a0(param_1,0);
  core_doc_cpp_FUN_004724a0(param_1,1);
  core_doc_cpp_FUN_00475920(param_1);
  core_inv_cpp_FUN_004f9f10();
  core_doc_cpp_FUN_00476150(param_1);
  if (iStack_18 == 0) {
    core_hero_cpp_FUN_004eb5b0();
  }
  else {
    param_2 = (param_1->base).hero_action_range + param_2;
    (param_1->base).hero_action_range = param_2;
    if ((float)_DAT_005d9dbc < param_2) {
      core_hero_cpp_FUN_004eca10(param_1);
    }
  }
  if ((param_1->weapon != (CWeapon *)0x0) && ((param_1->weapon->base).is_transparent != 0)) {
    (param_1->base).base.base.is_transparent = 1;
  }
  iVar15 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(param_1->goggle_sfx_handles[0]);
  if (iVar15 == 0) {
    if (g_CGamePtr->goggles_active != 0) {
      sound_sndmain_cpp_killSfx_FUN_00573a80(param_1->goggle_sfx_handles[1]);
      sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_00572a10(1);
      uVar14 = sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-on.wav");
      param_1->goggle_sfx_handles[1] = uVar14;
      sound_sndmain_cpp_setNextSfxVolume_FUN_005728e0(0.0);
      uVar14 = sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-loop.wav");
      param_1->goggle_sfx_handles[0] = uVar14;
      sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
      sound_sndmain_cpp_setSfxFade_FUN_00573ab0(param_1->goggle_sfx_handles[0],0.333,1.0,0);
      if (g_CGamePtr->flashlight_active != 0) {
        g_CGamePtr->flashlight_active = 0;
        (*((param_1->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"flashlit.wav");
        return;
      }
    }
  }
  else if (g_CGamePtr->goggles_active == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(param_1->goggle_sfx_handles[1]);
    sound_sndmain_cpp_killSfx_FUN_00573a80(param_1->goggle_sfx_handles[0]);
    sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
    sound_sndmain_cpp_setNextSfxFlagBits_FUN_00572a10(1);
    sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-off.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
    return;
  }
  return;
}
