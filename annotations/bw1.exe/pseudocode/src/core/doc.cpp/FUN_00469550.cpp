// Name: core_doc.cpp_FUN_00469550
// Address: 00469550
// Address Range: [[00469550, 0046bdd0]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00469550(CHero *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00469550(CHero *param_1,float param_2)

{
  CLocation *pCVar1;
  char *pcVar2;
  CDeformableModelInstance *pCVar3;
  int *piVar4;
  CHero *pCVar5;
  CVector3f *pCVar6;
  float fVar7;
  CWeapon *pCVar8;
  CBoxActor *this_ptr;
  EWalkState EVar9;
  CCharacter_full_vtable *pCVar10;
  float fVar11;
  uintptr_t *puVar12;
  CCharacter *pCVar13;
  CGame *pCVar14;
  float fVar15;
  SMotion *pSVar16;
  CAmmoBox *this_ptr_00;
  CDemonActor *pCVar17;
  EActorLifecycleState EVar18;
  uint uVar19;
  int iVar20;
  float *pfVar21;
  uint *puVar22;
  int desired_state_index;
  CInventory *pCVar23;
  float *pfVar24;
  uint *puVar25;
  byte bVar26;
  float afStackY_13b0 [944];
  CBoundingBox3D *in_stack_fffffb18;
  ulonglong uVar27;
  CVector3f *pCVar28;
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
  uint uStack_3f0;
  uint uStack_3ec;
  CPlatform *local_3e8;
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
  float afStack_2b0 [4];
  float fStack_2a0;
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
  float fStack_1f8;
  float afStack_1f4 [2];
  UOrientationVector UStack_1ec;
  float afStack_1e0 [4];
  float afStack_1d0 [5];
  uint uStack_1bc;
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
  uintptr_t *puStack_58;
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
  uint uStack_1c;
  int iStack_18;
  CInventory *pCStack_14;
  
  bVar26 = 0;
  local_28 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                       (0x01C51D80,"?DebugActionPending" + 1);
  pCVar17 = (param_1->base).carry_hands[1].carry_actor;
  if ((pCVar17 != (CDemonActor *)0x0) &&
     (*(float *)(param_1[1].base.base.create_event + 0x60) < _DAT_005d9d70)) {
    (*((pCVar17->vtable)._ub)->getBoundingBox)(pCVar17,in_stack_fffffb18);
    pfVar21 = afStack_3e0;
    pfVar24 = &local_400;
    for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
      *pfVar24 = *pfVar21;
      pfVar21 = pfVar21 + (uint)bVar26 * -2 + 1;
      pfVar24 = pfVar24 + (uint)bVar26 * -2 + 1;
    }
    pcVar2 = param_1[1].base.base.create_event + 0x54;
    if ((float *)pcVar2 != &fStack_3f8) {
      *(float *)pcVar2 = fStack_3f8;
      *(float *)(param_1[1].base.base.create_event + 0x58) = fStack_3f4;
      *(uint *)(param_1[1].base.base.create_event + 0x5c) = uStack_3f0;
    }
    pcVar2 = param_1[1].base.base.create_event + 0x60;
    if (pcVar2 != (char *)&uStack_3ec) {
      *(uint *)pcVar2 = uStack_3ec;
      param_1[1].base.base.standing_platform = local_3e8;
      param_1[1].base.base.platform_position_delta.x = fStack_3e4;
    }
    fStack_d4 = *(float *)(param_1[1].base.base.create_event + 0x54) +
                *(float *)(param_1[1].base.base.create_event + 0x60);
    fStack_d0 = *(float *)(param_1[1].base.base.create_event + 0x58) +
                (float)param_1[1].base.base.standing_platform;
    fStack_cc = *(float *)(param_1[1].base.base.create_event + 0x5c) +
                param_1[1].base.base.platform_position_delta.x;
    fStack_17c = fStack_d4;
    afStack_190[(uint)bVar26 * -2 + 6] = afStack_ec[(uint)bVar26 * -2 + 7];
    afStack_190[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 7] =
         afStack_ec[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 8];
    afStack_128[3] = fStack_17c * _DAT_005d9d74;
    fStack_118 = fStack_178 * _DAT_005d9d74;
    fStack_114 = fStack_174 * _DAT_005d9d74;
    fStack_314 = fStack_17c * _DAT_005d9d74;
    afStack_328[(uint)bVar26 * -2 + 6] = afStack_128[(uint)bVar26 * -2 + 4];
    afStack_328[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 7] =
         afStack_128[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 5];
    core_actor_cpp_FUN_00408b40((param_1->base).carry_hands[1].carry_actor);
    fStack_398 = afStack_368[0];
    afStack_394[(uint)bVar26 * -2] = afStack_368[(uint)bVar26 * -2 + 1];
    afStack_394[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1] =
         afStack_368[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 2];
    core_actor_cpp_FUN_00408bb0(param_1);
    pcVar2 = param_1[1].base.base.create_event + 0x48;
    afStack_1d0[3] = afStack_328[2];
    afStack_1d0[(uint)bVar26 * -2 + 4] = afStack_328[(uint)bVar26 * -2 + 3];
    afStack_1d0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 5] =
         afStack_328[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4];
    if ((float *)pcVar2 != afStack_1d0 + 3) {
      *(float *)pcVar2 = afStack_1d0[3];
      *(float *)(param_1[1].base.base.create_event + 0x4c) = afStack_1d0[4];
      *(uint *)(param_1[1].base.base.create_event + 0x50) = uStack_1bc;
    }
  }
  core_game_cpp_CGame_slamDT_FUN_004d7f50(g_CGamePtr,param_2);
  core_charactr_cpp_FUN_00434790(param_1);
  fVar15 = param_1->invincibility_timer - param_2;
  param_1->invincibility_timer = fVar15;
  if (fVar15 < 0.0) {
    param_1->invincibility_timer = 0.0;
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  core_doc_cpp_FUN_0046c9e0();
  uStack_23c = afStack_394[2];
  afStack_238[(uint)bVar26 * -2] = afStack_394[(uint)bVar26 * -2 + 3];
  afStack_238[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1] =
       afStack_394[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4];
  core_actor_cpp_FUN_00408b40(param_1);
  uVar27 = CONCAT44(param_2,param_1);
  CStack_3a4.x = afStack_260[0];
  *(float *)((int)&CStack_3a4 + (uint)bVar26 * -8 + 4) = afStack_260[(uint)bVar26 * -2 + 1];
  *(float *)((int)&CStack_3a4 + (uint)bVar26 * -8 + (uint)bVar26 * -8 + 8) =
       afStack_260[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 2];
  core_doc_cpp_FUN_0046bde0(uVar27);
  local_28 = 1;
  fStack_30 = 1.4013e-45;
  fStack_2c = 1.4013e-45;
  iStack_18 = 1;
  uStack_1c = 1;
  if ((param_1->base).grabbed_by != (CDemonActor *)0x0) {
    local_28 = 0;
    fStack_2c = 0.0;
    iStack_18 = 0;
    uStack_1c = 0;
    fStack_30 = 0.0;
    if (iStack_20 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if (param_1->pushed_object != (CBoxActor *)0x0) {
    iStack_18 = 0;
    uStack_1c = 0;
    local_28 = 0;
    fStack_2c = 0.0;
    if (iStack_20 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if ((param_1->ladder_to_climb != (CLadder *)0x0) ||
     (param_1[1].base.base.orient_matrix.m[2].x != 0.0)) {
    fStack_30 = 0.0;
    fStack_2c = 0.0;
    iStack_18 = 0;
    uStack_1c = 0;
    local_28 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if ((param_1->object_to_pick_up != (CDemonActor *)0x0) || (param_1->action_pending == 4)) {
    iStack_18 = 0;
    uStack_1c = 0;
    local_28 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  pCVar3 = &(param_1->base).model;
  fVar15 = (float)core_motion_cpp_FUN_00524a40(pCVar3);
  if (((((0.0 < fVar15) || (fVar15 = (float)core_motion_cpp_FUN_00524a40(pCVar3), 0.0 < fVar15)) ||
       (fVar15 = (float)core_motion_cpp_FUN_00524a40(pCVar3), 0.0 < fVar15)) ||
      ((fVar15 = (float)core_motion_cpp_FUN_00524a40(pCVar3), 0.0 < fVar15 ||
       (fVar15 = (float)core_motion_cpp_FUN_00524a40(pCVar3), 0.0 < fVar15)))) ||
     ((param_1->base).hit_points <= 0.0)) {
    fStack_2c = 0.0;
    iStack_18 = 0;
    uStack_1c = 0;
    local_28 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  fVar15 = (float)core_motion_cpp_FUN_00524a40(&(param_1->base).model);
  if (((0.0 < fVar15) || (param_1->action_pending == 5)) || (param_1->door_to_open != (CDoor *)0x0))
  {
    uStack_1c = 0;
    local_28 = 0;
    iStack_18 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  fVar15 = (float)core_motion_cpp_FUN_00524a40(&(param_1->base).model);
  if (((0.0 < fVar15) || (param_1->action_pending == 5)) || (param_1->door_to_open != (CDoor *)0x0))
  {
    uStack_1c = 0;
    local_28 = 0;
    iStack_18 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  fVar15 = (float)core_motion_cpp_FUN_00524a40(&(param_1->base).model);
  if (0.0 < fVar15) {
    fStack_2c = 0.0;
    iStack_18 = 0;
    fStack_30 = 0.0;
    uStack_1c = 0;
    local_28 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (param_1->action_pending == 1) {
    uStack_1c = 0;
    iStack_18 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (param_1->action_pending == 2) {
    uStack_1c = 0;
    iStack_18 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (param_1->action_pending == 6) {
    uStack_1c = 0;
    iStack_18 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (param_1->action_pending == 3) {
    uStack_1c = 0;
    iStack_18 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (param_1->action_pending == 7) {
    uStack_1c = 0;
    iStack_18 = 0;
    if (iStack_20 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if ((param_1->lever_to_pull != (CLever *)0x0) ||
     (fVar15 = (float)core_motion_cpp_FUN_00524a40(&(param_1->base).model), 0.0 < fVar15)) {
    iStack_18 = 0;
    uStack_1c = 0;
    local_28 = 0;
    fStack_2c = 0.0;
    if (iStack_20 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"leverToPull=%s\n");
    }
  }
  if ((param_1->base).grabbed_by == (CDemonActor *)0x0) {
    if ((param_1->base).base.standing_platform != (CPlatform *)0x0) {
      fStack_30 = 1.4013e-45;
    }
    if ((param_1->base).base.location.position.y != (param_1->base).closest_distance_threshold) {
      fStack_30 = 1.4013e-45;
    }
  }
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(param_1);
  if (param_1->nearby_interactive_actor == (CDemonActor *)0x0) {
    fVar15 = (float)param_1[1].base.base.validation_magic -
             param_2 * (float)_DAT_005d9d7c * (float)_DAT_005d9d7c;
    param_1[1].base.base.validation_magic = (uintptr_t)fVar15;
    if (fVar15 < 0.0) {
      param_1[1].base.base.validation_magic = 0;
    }
  }
  else {
    fVar15 = param_2 * (float)_DAT_005d9d7c + (float)param_1[1].base.base.validation_magic;
    param_1[1].base.base.validation_magic = (uintptr_t)fVar15;
    if (1.0 < fVar15) {
      param_1[1].base.base.validation_magic = 0x3f800000;
    }
  }
  fStack_64 = 1.4013e-45;
  if (param_1->ladder_to_climb == (CLadder *)0x0) {
    if (param_1[1].base.base.orient_matrix.m[2].x == 0.0) {
      pCVar17 = param_1->nearby_interactive_actor;
      if (pCVar17 == (CDemonActor *)0x0) {
        if ((param_1->base).grabbed_by == (CDemonActor *)0x0) {
          this_ptr = param_1->pushed_object;
          if (this_ptr == (CBoxActor *)0x0) {
            iVar20 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                               (&param_1->base,param_2);
            pCVar3 = &(param_1->base).model;
            if (iVar20 == 0) {
              if (local_28 != 0) {
                pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                    (&pCVar3->base);
                uVar19 = pSVar16->state_index;
                if ((((uVar19 < 9) || (uVar19 < 10)) || (uVar19 < 0xe)) || (uVar19 < 0xf)) {
LAB_0046b39a:
                  if ((param_1->base).is_on_ground != 0) {
                    desired_state_index = 0;
                    pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                        (&(param_1->base).model.base);
                    iVar20 = pSVar16->state_index;
                    if ((param_1->player_input).action_state.walk == 0) {
                      if ((param_1->player_input).action_state.backup == 0) {
                        fVar15 = (param_1->player_input).strafe_speed;
                        in_stack_fffffb20 = (double)fVar15;
                        if ((float)_DAT_005d9d84 <= fVar15) {
                          if (_DAT_005d9d8c < in_stack_fffffb20) {
                            if ((param_1->player_input).action_state.run == 0) {
                              desired_state_index = 6;
                            }
                            else {
                              desired_state_index = 8;
                            }
                          }
                        }
                        else if ((param_1->player_input).action_state.run == 0) {
                          desired_state_index = 5;
                        }
                        else {
                          desired_state_index = 7;
                        }
                      }
                      else if ((param_1->player_input).action_state.run == 0) {
                        fVar15 = (param_1->player_input).strafe_speed;
                        if ((float)_DAT_005d9d84 <= fVar15) {
                          if ((double)fVar15 <= _DAT_005d9d8c) {
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
                        fVar15 = (param_1->player_input).strafe_speed;
                        if ((float)_DAT_005d9d84 <= fVar15) {
                          if ((double)fVar15 <= _DAT_005d9d8c) {
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
                    else if ((param_1->player_input).action_state.run == 0) {
                      fVar15 = (param_1->player_input).strafe_speed;
                      if ((float)_DAT_005d9d84 <= fVar15) {
                        if ((double)fVar15 <= _DAT_005d9d8c) {
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
                      fVar15 = (param_1->player_input).strafe_speed;
                      if ((float)_DAT_005d9d84 <= fVar15) {
                        if ((double)fVar15 <= _DAT_005d9d8c) {
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
                    if (((param_1->player_input).action_state.quick_turn != 0) &&
                       ((param_1->base).layer_action_index != 0xe)) {
                      param_1[1].base.base.previous_transform_state.position.y = 0.0;
                      param_1[1].base.base.previous_transform_state.position.x = 1.4013e-45;
                    }
                    if (param_1[1].base.base.previous_transform_state.position.x == 0.0) {
                      fVar15 = (param_1->player_input).turn_speed * (param_1->base).turn_speed;
                      (param_1->base).turn_angle_accumulator = fVar15;
                      *(float *)param_1[1].base.base.create_event =
                           *(float *)param_1[1].base.base.create_event - fVar15;
                    }
                    if (desired_state_index != iVar20) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                                (&(param_1->base).model.base,desired_state_index,1);
                    }
                    if ((param_1->player_input).action_state.use_item != 0) {
                      core_hero_cpp_CHero_tryUseSelectedItem_FUN_004ec020(param_1);
                    }
                  }
                  fStack_64 = 0.0;
                }
                else if (uVar19 < 0x75) {
                  if ((uVar19 < 0x10) || (uVar19 == 0x10)) goto LAB_0046b39a;
                }
                else if (((0x75 < uVar19) && (0x77 < uVar19)) &&
                        ((uVar19 < 0x79 || (uVar19 == 0x79)))) {
                  pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                      (&(param_1->base).model.base);
                  iVar20 = 0x78;
                  if ((param_1->player_input).action_state.walk != 0) {
                    iVar20 = 0x79;
                  }
                  if (iVar20 != pSVar16->state_index) {
                    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                              (&(param_1->base).model.base,iVar20,1);
                  }
                  if (param_1[1].base.base.previous_transform_state.position.x == 0.0) {
                    fVar15 = (param_1->player_input).turn_speed * (param_1->base).turn_speed;
                    (param_1->base).turn_angle_accumulator = fVar15;
                    *(float *)param_1[1].base.base.create_event =
                         *(float *)param_1[1].base.base.create_event - fVar15;
                  }
                }
              }
            }
            else {
              EVar9 = (param_1->base).walk_state;
              if (EVar9 < 2) {
                if (EVar9 == WALK_STATE_WALKING) {
                  iVar20 = 1;
                }
                else {
                  iVar20 = 0;
                }
LAB_0046b2fb:
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(param_1->base).model.base,iVar20,1);
              }
              else {
                if (EVar9 < WALK_STATE_NO_PATH) {
                  iVar20 = 4;
                  goto LAB_0046b2fb;
                }
                if (EVar9 != WALK_STATE_NO_PATH) {
                  iVar20 = 0;
                  goto LAB_0046b2fb;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar3->base,0,1);
                engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
              }
              (param_1->base).model.accumulated_root_motion.z = 0.0;
              (param_1->base).model.accumulated_root_motion.y =
                   (param_1->base).model.accumulated_root_motion.z;
              (param_1->base).model.accumulated_root_motion.x =
                   (param_1->base).model.accumulated_root_motion.y;
            }
          }
          else {
            pCStack_50 = param_1->ladder_to_climb;
            if ((param_1->player_input).action_state.fire != 0) {
              (*((this_ptr->base).vtable._ub)->getBoundingBox)
                        (&this_ptr->base,SUB84(in_stack_fffffb20,0));
              puVar22 = auStack_420;
              puVar25 = auStack_410;
              for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
                *puVar25 = *puVar22;
                puVar22 = puVar22 + (uint)bVar26 * -2 + 1;
                puVar25 = puVar25 + (uint)bVar26 * -2 + 1;
              }
              fStack_36c = fStack_408 + fStack_3fc;
              afStack_368[0] = fStack_404 + fStack_3f8;
              afStack_368[1] = local_400 + fStack_3f4;
              afStack_1e0[3] = fStack_408 + fStack_3fc;
              afStack_1d0[(uint)bVar26 * -2] = afStack_368[(uint)bVar26 * -2];
              afStack_1d0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1] =
                   afStack_368[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1];
              afStack_98[2] = afStack_1e0[3] * _DAT_005d9d74;
              afStack_98[3] = afStack_1d0[0] * _DAT_005d9d74;
              fStack_88 = afStack_1d0[1] * _DAT_005d9d74;
              afStack_128[2] = afStack_1e0[3] * _DAT_005d9d74;
              afStack_128[(uint)bVar26 * -2 + 3] = afStack_98[(uint)bVar26 * -2 + 3];
              afStack_128[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4] =
                   afStack_98[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4];
              core_actor_cpp_FUN_00408b40(param_1->pushed_object);
              uStack_12c = uStack_b4;
              afStack_128[(uint)bVar26 * -2] = afStack_b0[(uint)bVar26 * -2];
              afStack_128[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1] =
                   afStack_b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1];
              core_actor_cpp_FUN_00408bb0(param_1);
              uStack_f0 = uStack_144;
              afStack_ec[(uint)bVar26 * -2] = afStack_140[(uint)bVar26 * -2];
              afStack_ec[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1] =
                   afStack_140[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
              afStack_29c[2] = (float)uStack_9c;
              afStack_29c[(uint)bVar26 * -2 + 3] = afStack_98[(uint)bVar26 * -2];
              afStack_29c[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4] =
                   afStack_98[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1];
              in_stack_fffffb20 = __BITCAST_DOUBLE(CONCAT44(afStack_29c[3],0x46b133));
              fVar15 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
              fStack_1f8 = fStack_3fc - fStack_408;
              afStack_1f4[0] = fStack_3f8 - fStack_404;
              afStack_1f4[1] = fStack_3f4 - local_400;
              fStack_2d0 = fStack_3fc - fStack_408;
              afStack_2f0[(uint)bVar26 * -2 + 9] = afStack_1f4[(uint)bVar26 * -2];
              afStack_2f0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 10] =
                   afStack_1f4[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1];
              fStack_2a0 = fStack_2d0 * _DAT_005d9d74;
              afStack_29c[0] = fStack_2cc * _DAT_005d9d74;
              afStack_29c[1] = fStack_2c8 * _DAT_005d9d74;
              afStack_1d0[2] = fStack_2d0 * _DAT_005d9d74;
              afStack_1d0[(uint)bVar26 * -2 + 3] = afStack_29c[(uint)bVar26 * -2];
              afStack_1d0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4] =
                   afStack_29c[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1];
              SStack_484.damage_amount = fVar15;
              afStack_1d0[3] = 0.0;
              if ((((afStack_ec[1] -
                     SQRT(afStack_1d0[4] * afStack_1d0[4] + afStack_1d0[2] * afStack_1d0[2]) <
                     (float)_DAT_005d9d94) && (1.0 < (double)afStack_ec[0])) &&
                  ((double)afStack_ec[0] < _DAT_005d9d9c)) && (ABS(fVar15) < (float)_DAT_005d9da4))
              {
                fStack_38 = param_2 * _DAT_005d9dac;
                if (fVar15 < -fStack_38) {
                  SStack_484.damage_amount = -fStack_38;
                }
                if (fStack_38 < SStack_484.damage_amount) {
                  SStack_484.damage_amount = fStack_38;
                }
                in_stack_fffffb20 = __BITCAST_DOUBLE(CONCAT44(&(param_1->base).base.orient,param_1));
                (param_1->base).base.orient.vec.y =
                     (param_1->base).base.orient.vec.y + SStack_484.damage_amount;
                core_charactr_cpp_FUN_00433d50();
                goto LAB_00469e25;
              }
            }
            if (pCStack_50 == (CLadder *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(param_1->base).model.base,0,1);
              core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0(param_1);
            }
          }
        }
        else {
          if ((param_1->base).grabbed_type == 0) {
            core_actor_cpp_FUN_00408bb0(param_1);
            afStack_3c4[2] = afStack_ec[3];
            afStack_3c4[(uint)bVar26 * -2 + 3] = afStack_ec[(uint)bVar26 * -2 + 4];
            afStack_3c4[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4] =
                 afStack_ec[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 5];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
            uStack_20c = uStack_164;
            afStack_220[(uint)bVar26 * -2 + 6] = afStack_190[(uint)bVar26 * -2 + 0xc];
            afStack_220[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 7] =
                 afStack_190[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0xd];
            fStack_24 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
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
            (param_1->base).base.orient.vec.y = (param_1->base).base.orient.vec.y + fStack_24;
            core_charactr_cpp_FUN_00433d50(param_1);
          }
          pCStack_68 = (CCharacter *)(param_1->base).grabbed_by;
          pCVar10 = (pCStack_68->base).vtable._uc;
          pCStack_44 = &(param_1->base).model;
          core_skeleton_cpp_FUN_00569130(pCStack_44);
          pCVar28 = &CStack_230;
          CStack_230.x = fStack_1b8;
          *(float *)((int)&CStack_230 + (uint)bVar26 * -8 + 4) = afStack_1d0[(uint)bVar26 * -2 + 7];
          *(float *)((int)&CStack_230 + (uint)bVar26 * -8 + (uint)bVar26 * -8 + 8) =
               afStack_1d0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 8];
          iVar20 = (*(pCVar10->_uc).attractActorToward)(pCStack_68,(CDemonActor *)param_1,pCVar28);
          if (iVar20 == 0) {
            (param_1->base).grabbed_by = (CDemonActor *)0x0;
          }
          else if ((param_1->base).grabbed_by != (CDemonActor *)0x0) {
            fVar15 = (float)param_1[1].base.base.is_transparent + param_2;
            param_1[1].base.base.is_transparent = (int)fVar15;
            if ((_DAT_005feccc <= fVar15) && ((param_1->base).grabbed_type != 1)) {
              pCStack_60 = (CBoxActor *)core_motion_cpp_FUN_00524a40();
              in_stack_fffffb20 = __BITCAST_DOUBLE(CONCAT44(fStack_38,0x46a96b));
              fVar15 = (float)core_motion_cpp_FUN_00524a40();
              if (fVar15 + (float)pCStack_60 <= 0.0) {
                in_stack_fffffb20 = __BITCAST_DOUBLE(CONCAT44(0x46af7f,SUB84(in_stack_fffffb20,0)));
                (*(((param_1->base).base.vtable._uc)->_uc).releaseFromGrab)(&param_1->base);
              }
              else if (((param_1->player_input).action_state.fire != 0) || (_DAT_01c43544 != 0)) {
                pCVar3 = &(param_1->base).model;
                in_stack_fffffb20 = __BITCAST_DOUBLE(CONCAT44(0x28,pCVar3));
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar3->base,0x28,1)
                ;
                (param_1->player_input).action_state.fire = 0;
              }
            }
            goto LAB_00469e25;
          }
          pCVar3 = &(param_1->base).model;
          in_stack_fffffb20 = (double)ZEXT48(pCVar3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar3->base,0,1);
        }
      }
      else {
        (*((pCVar17->vtable)._ub)->getInteractionInfo)(pCVar17,&SStack_448);
        if ((SStack_448.approach_offset == 0.0) || (param_1 != (CHero *)SStack_448.distance_max)) {
          in_stack_fffffb20 = __BITCAST_DOUBLE(CONCAT44(param_1,0x46af11));
          core_hero_cpp_CHero_stopNearbyInteraction_FUN_004ebe80(param_1);
        }
        else {
          pfVar21 = (float *)((int)*(CDemonActor **)((int)SStack_448.distance_max + 0x1ff88) +
                             (uint)bVar26 * -8 + 0x34);
          UStack_1ec.vec.x =
               ((*(CDemonActor **)((int)SStack_448.distance_max + 0x1ff88))->orient).vec.x;
          afStack_1e0[(uint)bVar26 * -2 + -2] = *pfVar21;
          afStack_1e0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + -1] = pfVar21[(uint)bVar26 * -2 + 1];
          fStack_2c = ((SPlayerInput *)((int)SStack_448.distance_max + 0xc1d8))->turn_speed *
                      _DAT_005d9dac * (float)_DAT_005d9dbc * param_2;
          if (fStack_2c < SStack_448.pitch_min) {
            fStack_2c = SStack_448.pitch_min;
          }
          if (SStack_448.pitch_max < fStack_2c) {
            fStack_2c = SStack_448.pitch_max;
          }
          UStack_1ec.vec.y = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
          fStack_30 = (param_1->player_input).look_up_down_speed * _DAT_005d9dac *
                      (float)_DAT_005d9dbc * param_2;
          if (fStack_30 < fStack_424) {
            fStack_30 = fStack_424;
          }
          if (fStack_428 < fStack_30) {
            fStack_30 = fStack_428;
          }
          UStack_1ec.vec.x = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
          user_orientation = &UStack_1ec;
          pCVar3 = &(param_1->base).model;
          iVar20 = (*((param_1->nearby_interactive_actor->vtable)._ub)->updateInteraction)
                             (param_1->nearby_interactive_actor,user_orientation,
                              &param_1->player_input);
          if (iVar20 == 0) {
            in_stack_fffffb20 = __BITCAST_DOUBLE(CONCAT44(0x46af43,user_orientation));
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar3->base,0,1);
            core_hero_cpp_CHero_stopNearbyInteraction_FUN_004ebe80(param_1);
          }
          else {
            SStack_484.gore_multiplier =
                 (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                  ((param_1->nearby_interactive_actor->orient).vec.y -
                                   (param_1->base).base.orient.vec.y);
            if ((float)_DAT_005d9d84 <= SStack_484.gore_multiplier) {
              if ((double)SStack_484.gore_multiplier <= _DAT_005d9d8c) {
                iVar20 = 0;
              }
              else {
                iVar20 = 5;
              }
            }
            else {
              iVar20 = 6;
            }
            in_stack_fffffb20 = __BITCAST_DOUBLE(CONCAT44(0x46ad64,user_orientation));
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar3->base,iVar20,1);
            fVar15 = SStack_484.gore_multiplier;
            pfVar21 = (float *)((int)param_1 + (uint)bVar26 * -8 + 0x34);
            afStack_328[1] = (param_1->base).base.orient.vec.x;
            afStack_328[(uint)bVar26 * -2 + 2] = *pfVar21;
            afStack_328[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 3] = pfVar21[(uint)bVar26 * -2 + 1];
            afStack_328[2] = fVar15 * (float)param_1[1].base.base.validation_magic + afStack_328[2];
            core_charactr_cpp_FUN_00433d50();
            fStack_70 = SStack_448.pitch_min + (float)_DAT_005d9dc4;
            uStack_78 = 0;
            uStack_74 = 0;
            core_actor_cpp_FUN_00408b40();
            fStack_6c = fStack_264;
            (&pCStack_68)[(uint)bVar26 * -2] = (CCharacter *)afStack_260[(uint)bVar26 * -2];
            (&fStack_64)[(uint)bVar26 * -2 + (uint)bVar26 * -2] =
                 afStack_260[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1];
            puStack_58 = &param_1[1].base.base.validation_magic;
            fStack_2f4 = fStack_6c - (param_1->base).base.location.position.x;
            afStack_2f0[0] = (float)pCStack_68 - (param_1->base).base.location.position.y;
            afStack_2f0[1] = fStack_64 - (param_1->base).base.location.position.z;
            afStack_2f0[2] = fStack_2f4;
            afStack_2f0[(uint)bVar26 * -2 + 3] = afStack_2f0[(uint)bVar26 * -2];
            afStack_2f0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4] =
                 afStack_2f0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1];
            core_actor_cpp_FUN_00408b00();
            afStack_190[1] = afStack_238[1];
            afStack_190[(uint)bVar26 * -2 + 2] = *(float *)((int)&CStack_230 + (uint)bVar26 * -8);
            afStack_190[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 3] =
                 *(float *)((int)&CStack_230 + (uint)bVar26 * -8 + (uint)bVar26 * -8 + 4);
            pCVar28 = &(param_1->base).model.accumulated_root_motion;
            afStack_260[2] = afStack_190[1] * (float)*puStack_58;
            afStack_260[3] = afStack_190[2] * (float)*puStack_58;
            fStack_250 = afStack_190[3] * (float)*puStack_58;
            fStack_2dc = afStack_190[1] * (float)*puStack_58;
            afStack_2f0[(uint)bVar26 * -2 + 6] = afStack_260[(uint)bVar26 * -2 + 3];
            afStack_2f0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 7] =
                 afStack_260[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4];
            if (pCVar28 != (CVector3f *)(afStack_2f0 + 5)) {
              pCVar28->x = fStack_2dc;
              (param_1->base).model.accumulated_root_motion.y = fStack_2d8;
              (param_1->base).model.accumulated_root_motion.z = fStack_2d4;
            }
            (param_1->base).model.accumulated_root_motion.y = 0.0;
          }
        }
      }
    }
    else {
      fVar15 = (float)core_motion_cpp_FUN_00524a40(&(param_1->base).model);
      if (0.0 < fVar15) {
        if ((param_1->base).base.location.position.y <
            *(float *)((int)param_1[1].base.base.orient_matrix.m[2].x + 0x24) + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(param_1->base).model.base,0,1);
        }
      }
      else {
        param_1[1].base.base.orient_matrix.m[2].x = 0.0;
      }
      if (0.0 < (float)param_1[1].base.base.scale.z) {
        if ((float)param_1[1].base.base.scale.z <= param_2) {
          param_1[1].base.base.scale.z = 0;
          fStack_494 = 1.0;
        }
        else {
          fStack_494 = param_2 / (float)param_1[1].base.base.scale.z;
          param_1[1].base.base.scale.z = (int)((float)param_1[1].base.base.scale.z - param_2);
        }
        piVar4 = &param_1[1].base.base.collision_disabled;
        pCVar1 = &(param_1->base).base.location;
        puVar12 = (uintptr_t *)(1.0 - fStack_494);
        afStack_260[3] = (float)*piVar4 * fStack_494;
        fStack_250 = (float)param_1[1].base.base.process_disabled * fStack_494;
        fStack_24c = (float)param_1[1].base.base.scale.x * fStack_494;
        fStack_3c8 = (float)*piVar4 * fStack_494;
        afStack_3c4[(uint)bVar26 * -2] = afStack_260[(uint)bVar26 * -2 + 4];
        afStack_3c4[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1] =
             afStack_260[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 5];
        fVar15 = (param_1->base).base.location.position.y;
        fVar7 = (param_1->base).base.location.position.z;
        (pCVar1->position).x = (pCVar1->position).x + fStack_3c8;
        (param_1->base).base.location.position.y = fVar15 + afStack_3c4[0];
        (param_1->base).base.location.position.z = fVar7 + afStack_3c4[1];
        fVar15 = (float)param_1[1].base.base.process_disabled;
        fVar7 = (float)param_1[1].base.base.scale.x;
        *piVar4 = (int)((float)*piVar4 * (float)puVar12);
        param_1[1].base.base.process_disabled = (int)(fVar15 * (float)puVar12);
        param_1[1].base.base.scale.x = (int)(fVar7 * (float)puVar12);
        puStack_58 = puVar12;
        fVar15 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
        (param_1->base).turn_angle_accumulator = fVar15 * fStack_494;
      }
      fVar15 = (*((param_1->base).base.vtable._ub)->cylinderGroundCheck)
                         ((CDemonActor *)param_1,(param_1->base).collision_cylinder_height,
                          (CVector3f *)0x0);
      (param_1->base).closest_distance_threshold = fVar15;
    }
  }
  else {
    fVar15 = (float)core_motion_cpp_FUN_00524a40(&(param_1->base).model);
    if (0.0 < fVar15) {
      core_actor_cpp_FUN_00408b40(param_1->ladder_to_climb);
      uStack_380 = uStack_110;
      afStack_394[(uint)bVar26 * -2 + 6] = afStack_128[(uint)bVar26 * -2 + 7];
      afStack_394[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 7] =
           afStack_128[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 8];
      if (fStack_37c + (float)_DAT_005d9dcc < (param_1->base).base.location.position.y) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(param_1->base).model.base,0,1);
      }
    }
    else {
      param_1->ladder_to_climb = (CLadder *)0x0;
    }
    if (0.0 < (float)param_1[1].base.base.scale.z) {
      if ((float)param_1[1].base.base.scale.z <= param_2) {
        param_1[1].base.base.scale.z = 0;
        fStack_48c = 1.0;
      }
      else {
        fStack_48c = param_2 / (float)param_1[1].base.base.scale.z;
        param_1[1].base.base.scale.z = (int)((float)param_1[1].base.base.scale.z - param_2);
      }
      piVar4 = &param_1[1].base.base.collision_disabled;
      pCVar1 = &(param_1->base).base.location;
      fVar11 = 1.0 - fStack_48c;
      afStack_190[2] = (float)*piVar4 * fStack_48c;
      afStack_190[3] = (float)param_1[1].base.base.process_disabled * fStack_48c;
      fStack_180 = (float)param_1[1].base.base.scale.x * fStack_48c;
      fStack_284 = (float)*piVar4 * fStack_48c;
      afStack_29c[(uint)bVar26 * -2 + 7] = afStack_190[(uint)bVar26 * -2 + 3];
      afStack_29c[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 8] =
           afStack_190[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4];
      fVar15 = (param_1->base).base.location.position.y;
      fVar7 = (param_1->base).base.location.position.z;
      (pCVar1->position).x = (pCVar1->position).x + fStack_284;
      (param_1->base).base.location.position.y = fVar15 + fStack_280;
      (param_1->base).base.location.position.z = fVar7 + fStack_27c;
      fVar15 = (float)param_1[1].base.base.process_disabled;
      fVar7 = (float)param_1[1].base.base.scale.x;
      *piVar4 = (int)((float)*piVar4 * fVar11);
      param_1[1].base.base.process_disabled = (int)(fVar15 * fVar11);
      param_1[1].base.base.scale.x = (int)(fVar7 * fVar11);
      fStack_54 = fVar11;
      fVar15 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
      (param_1->base).turn_angle_accumulator = fVar15 * fStack_48c;
    }
  }
LAB_00469e25:
  if (0.0 < (float)param_1[1].base.base.dead1) {
    if ((float)param_1[1].base.base.dead1 <= param_2) {
      param_1[1].base.base.dead1 = 0;
      fStack_498 = 1.0;
    }
    else {
      fStack_498 = param_2 / (float)param_1[1].base.base.dead1;
      param_1[1].base.base.dead1 = (int)((float)param_1[1].base.base.dead1 - param_2);
    }
    piVar4 = &param_1[1].base.base.blood_effect_timer;
    afStack_2f0[3] = (float)*piVar4 * fStack_498;
    fStack_2e0 = (float)param_1[1].base.base.blood_effect_color * fStack_498;
    fStack_2dc = (float)param_1[1].base.base.footstep_particle_count * fStack_498;
    fStack_104 = (float)*piVar4 * fStack_498;
    afStack_128[(uint)bVar26 * -2 + 10] = afStack_2f0[(uint)bVar26 * -2 + 4];
    afStack_128[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0xb] =
         afStack_2f0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 5];
    core_actor_cpp_FUN_00408b00(param_1);
    pCVar28 = &(param_1->base).model.accumulated_root_motion;
    UStack_1ec.vec.y = fStack_3b0;
    afStack_1e0[(uint)bVar26 * -2 + -1] = afStack_3c4[(uint)bVar26 * -2 + 6];
    afStack_1e0[(uint)bVar26 * -2 + (uint)bVar26 * -2] =
         afStack_3c4[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 7];
    fVar15 = (param_1->base).model.accumulated_root_motion.y;
    fVar7 = (param_1->base).model.accumulated_root_motion.z;
    fStack_48 = 1.0 - fStack_498;
    pCVar28->x = pCVar28->x + UStack_1ec.vec.y;
    (param_1->base).model.accumulated_root_motion.y = fVar15 + UStack_1ec.vec.z;
    (param_1->base).model.accumulated_root_motion.z = fVar7 + afStack_1e0[0];
    fVar15 = (float)param_1[1].base.base.blood_effect_color;
    fVar7 = (float)param_1[1].base.base.footstep_particle_count;
    *piVar4 = (int)((float)*piVar4 * fStack_48);
    param_1[1].base.base.blood_effect_color = (uint)(fVar15 * fStack_48);
    param_1[1].base.base.footstep_particle_count = (int)(fVar7 * fStack_48);
    fVar15 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
    (param_1->base).turn_angle_accumulator = fVar15 * fStack_498;
  }
  pCVar3 = &(param_1->base).model;
  pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar3->base);
  if ((pSVar16->state_index == 0x1e) &&
     (this_ptr_00 = (CAmmoBox *)
                    core_actor_cpp_castToClassHash_FUN_0040c600(param_1->object_to_pick_up),
     this_ptr_00 != (CAmmoBox *)0x0)) {
    fVar15 = core_motion_cpp_FUN_00525020(&pCVar3->base);
    core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e1a0(this_ptr_00,fVar15);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160(&param_1->base);
  core_doc_cpp_FUN_0046e730(param_1);
  if (fStack_64 != 0.0) {
    pCVar13 = &param_1[1].base;
    (pCVar13->base).create_event[0x30] = '\0';
    (pCVar13->base).create_event[0x31] = '\0';
    (pCVar13->base).create_event[0x32] = '\0';
    (pCVar13->base).create_event[0x33] = '\0';
    *(uint *)(param_1[1].base.base.create_event + 0x2c) =
         *(uint *)(param_1[1].base.base.create_event + 0x30);
    *(uint *)(param_1[1].base.base.create_event + 0x28) =
         *(uint *)(param_1[1].base.base.create_event + 0x2c);
  }
  if ((param_1->ladder_to_climb == (CLadder *)0x0) &&
     (param_1[1].base.base.orient_matrix.m[2].x == 0.0)) {
    if (fStack_30 == 0.0) goto LAB_0046a09c;
    pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                        (&(param_1->base).model.base);
    pCVar28 = &(param_1->base).model.accumulated_root_motion;
    iVar20 = pSVar16->state_index;
    pCVar6 = &(param_1->base).position_delta;
    afStack_140[0] = pCVar28->x + pCVar6->x;
    afStack_140[1] =
         (param_1->base).model.accumulated_root_motion.y + (param_1->base).position_delta.y;
    afStack_140[2] =
         (param_1->base).model.accumulated_root_motion.z + (param_1->base).position_delta.z;
    CStack_2c0.x = afStack_140[0];
    *(float *)((int)&CStack_2c0 + (uint)bVar26 * -8 + 4) = afStack_140[(uint)bVar26 * -2 + 1];
    *(float *)((int)&CStack_2c0 + (uint)bVar26 * -8 + (uint)bVar26 * -8 + 8) =
         afStack_140[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 2];
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    pCVar28->x = (param_1->base).model.accumulated_root_motion.y;
    (param_1->base).position_delta.z = 0.0;
    (param_1->base).position_delta.y = (param_1->base).position_delta.z;
    pCVar6->x = (param_1->base).position_delta.y;
    if (iVar20 == 0x12) {
      CStack_2c0.z = 0.0;
      CStack_2c0.y = 0.0;
      CStack_2c0.x = 0.0;
      fVar15 = (param_1->base).velocity.y - param_2 * (float)_DAT_005d9dd4;
      pCVar13 = &param_1[1].base;
      (pCVar13->base).create_event[0x40] = -0x66;
      (pCVar13->base).create_event[0x41] = '?';
      (pCVar13->base).create_event[0x42] = '\x1c';
      (pCVar13->base).create_event[0x43] = 'F';
    }
    else {
      if (iVar20 == 0x13) {
        CStack_2c0.z = 0.0;
        CStack_2c0.y = 0.0;
        CStack_2c0.x = 0.0;
      }
      fVar15 = (param_1->base).velocity.y - param_2 * (float)_DAT_005d9dd4;
    }
    (param_1->base).velocity.y = fVar15;
    iStack_3c = iVar20;
    core_actor_cpp_FUN_00408b00(param_1);
    afStack_ec[0] = afStack_b0[0];
    afStack_ec[(uint)bVar26 * -2 + 1] = afStack_b0[(uint)bVar26 * -2 + 1];
    afStack_ec[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 2] =
         afStack_b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 2];
    afStack_29c[3] = (param_1->base).velocity.x * param_2;
    pCVar28 = &CStack_2c0;
    fStack_28c = (param_1->base).velocity.y * param_2;
    fStack_288 = (param_1->base).velocity.z * param_2;
    fStack_2b4 = afStack_29c[3];
    afStack_2b0[(uint)bVar26 * -2] = afStack_29c[(uint)bVar26 * -2 + 4];
    afStack_2b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1] =
         afStack_29c[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 5];
    fStack_194 = fStack_2b4 + afStack_ec[0];
    afStack_190[0] = afStack_2b0[0] + afStack_ec[1];
    afStack_190[1] = afStack_2b0[1] + afStack_ec[2];
    fStack_2cc = fStack_2b4 + afStack_ec[0];
    afStack_2f0[(uint)bVar26 * -2 + 10] = afStack_190[(uint)bVar26 * -2];
    afStack_2f0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0xb] =
         afStack_190[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1];
    CStack_2c0.x = CStack_2c0.x + fStack_2cc;
    CStack_2c0.y = CStack_2c0.y + fStack_2c8;
    CStack_2c0.z = CStack_2c0.z + fStack_2c4;
    param_1[1].base.base.previous_transform_state.position.z = (param_1->base).velocity.y;
    core_charactr_cpp_FUN_0042d750(&param_1->base,pCVar28);
    if ((param_1->base).base.location.position.y <
        (param_1->base).closest_distance_threshold + (float)_DAT_005d9ddc) {
      (param_1->base).is_on_ground = 1;
    }
    if ((iStack_3c == 0x12) && ((param_1->base).is_on_ground != 0)) {
      engine_console_cpp_FUN_00445430
                (g_CConsolePtr,"Splat at %3.2f fps\n",(double)(param_1->base).velocity.y);
      fVar15 = -param_1[1].base.base.previous_transform_state.position.z;
      if (fVar15 < (float)_DAT_005d9de4) {
        if (iStack_3c == 0x12) goto LAB_0046b941;
LAB_0046b950:
        (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)param_1,(CVector3f *)&DAT_02c8af28,fVar15 * _DAT_005d9e04 + 1.0);
        goto LAB_0046b976;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_484);
      fVar7 = (fVar15 + (float)_DAT_005d9dec) * (float)_DAT_005d9df4 * (float)_DAT_005d9dfc;
      SStack_484.damage_amount = fVar7;
      if (0x42c80000 < (int)fVar7) {
        SStack_484.damage_amount = 9999.0;
      }
      pCVar10 = (param_1->base).base.vtable._uc;
      param_1->invincibility_timer = 0.0;
      (*(pCVar10->_uc).processDamage)(&param_1->base,&SStack_484);
      if ((0.0 < (param_1->base).hit_points) && ((int)fVar7 < 0x42c80001)) {
        in_stack_fffffb20 = 2.12199580084659e-314;
LAB_0046b941:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(param_1->base).model.base,SUB84(in_stack_fffffb20,0),
                   (int)((ulonglong)in_stack_fffffb20 >> 0x20));
        goto LAB_0046b950;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(param_1->base).model.base,0x15,1);
      (*((param_1->base).base.vtable._ub)->playSound)((CDemonActor *)param_1,"fall-?.wav");
      iVar20 = (param_1->base).is_on_ground;
      fVar15 = 0x3F000000;
    }
    else {
LAB_0046b976:
      iVar20 = (param_1->base).is_on_ground;
      fVar15 = 0x3F000000;
    }
    0x3F000000 = fVar15;
    if (iVar20 == 0) {
      *(float *)(param_1[1].base.base.create_event + 0x40) =
           *(float *)(param_1[1].base.base.create_event + 0x40) + param_2;
      if (fStack_2c == 5.60519e-45) {
        fVar15 = fVar15 * (float)_DAT_005d9d7c;
      }
      if ((fVar15 < *(float *)(param_1[1].base.base.create_event + 0x40)) ||
         (param_1[1].base.base.previous_transform_state.position.z < (float)_DAT_005d9dec)) {
        if (fStack_2c != 2.52234e-44) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(param_1->base).model.base,0x12,1);
        }
        (param_1->base).is_on_ground = 0;
      }
      goto LAB_0046a09c;
    }
  }
  else {
    core_actor_cpp_FUN_00408ac0(param_1);
    pCVar1 = &(param_1->base).base.location;
    fStack_224 = fStack_344;
    afStack_220[(uint)bVar26 * -2] = afStack_368[(uint)bVar26 * -2 + 10];
    afStack_220[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1] =
         afStack_368[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0xb];
    fVar15 = (param_1->base).base.location.position.y;
    fVar7 = (param_1->base).base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_224;
    (param_1->base).base.location.position.y = fVar15 + afStack_220[0];
    (param_1->base).base.location.position.z = fVar7 + afStack_220[1];
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).model.accumulated_root_motion.x =
         (param_1->base).model.accumulated_root_motion.y;
  }
  pCVar13 = &param_1[1].base;
  (pCVar13->base).create_event[0x40] = '\0';
  (pCVar13->base).create_event[0x41] = '\0';
  (pCVar13->base).create_event[0x42] = '\0';
  (pCVar13->base).create_event[0x43] = '\0';
LAB_0046a09c:
  pCVar13 = &param_1[1].base;
  (pCVar13->base).create_event[0x30] = '\0';
  (pCVar13->base).create_event[0x31] = '\0';
  (pCVar13->base).create_event[0x32] = '\0';
  (pCVar13->base).create_event[0x33] = '\0';
  *(uint *)(param_1[1].base.base.create_event + 0x2c) =
       *(uint *)(param_1[1].base.base.create_event + 0x30);
  *(uint *)(param_1[1].base.base.create_event + 0x28) =
       *(uint *)(param_1[1].base.base.create_event + 0x2c);
  pCVar14 = g_CGamePtr;
  if (local_28 != 0) {
    if ((param_1->player_input).action_state.draw != 0) {
      if (*(int *)param_1[1].base.base.actor_name == 0) {
        pCVar5 = param_1 + 1;
        (pCVar5->base).base.actor_name[0] = '\x01';
        (pCVar5->base).base.actor_name[1] = '\0';
        (pCVar5->base).base.actor_name[2] = '\0';
        (pCVar5->base).base.actor_name[3] = '\0';
      }
      else {
        pCVar5 = param_1 + 1;
        (pCVar5->base).base.actor_name[0] = '\0';
        (pCVar5->base).base.actor_name[1] = '\0';
        (pCVar5->base).base.actor_name[2] = '\0';
        (pCVar5->base).base.actor_name[3] = '\0';
        if (pCVar14->flashlight_active != 0) {
          pCVar14->flashlight_active = 0;
          (*((param_1->base).base.vtable._ub)->playSound)
                    ((CDemonActor *)param_1,"flashlit.wav");
        }
      }
    }
    if (((param_1->player_input).action_state.light != 0) &&
       (pCVar23 = &param_1->inventory, (param_1->inventory).selected_weapon != (CWeapon *)0x0)) {
      if (*(int *)param_1[1].base.base.actor_name == 1) {
        iVar20 = core_actor_cpp_isOfClass_FUN_0040c550
                           ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y,
                            "CFlashlight");
        if ((iVar20 == 0) || (g_CGamePtr->flashlight_active != 1)) {
          if (((param_1->inventory).selected_weapon)->can_attach_light != 0) {
            uVar19 = (uint)(g_CGamePtr->flashlight_active == 0);
            g_CGamePtr->flashlight_active = uVar19;
            if (uVar19 != 0) {
              pCVar5 = param_1 + 1;
              (pCVar5->base).base.actor_name[0] = '\x01';
              (pCVar5->base).base.actor_name[1] = '\0';
              (pCVar5->base).base.actor_name[2] = '\0';
              (pCVar5->base).base.actor_name[3] = '\0';
            }
            (*((param_1->base).base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"flashlit.wav");
          }
        }
        else {
          g_CGamePtr->flashlight_active = 0;
          pCVar5 = param_1 + 1;
          (pCVar5->base).base.actor_name[0] = '\0';
          (pCVar5->base).base.actor_name[1] = '\0';
          (pCVar5->base).base.actor_name[2] = '\0';
          (pCVar5->base).base.actor_name[3] = '\0';
        }
      }
      else {
        iVar20 = core_inv_cpp_FUN_004f8ce0(pCVar23);
        if (iVar20 == 0) {
          if (((param_1->inventory).selected_weapon)->can_attach_light != 0) {
            uVar19 = (uint)(g_CGamePtr->flashlight_active == 0);
            g_CGamePtr->flashlight_active = uVar19;
            if (uVar19 != 0) {
              pCVar5 = param_1 + 1;
              (pCVar5->base).base.actor_name[0] = '\x01';
              (pCVar5->base).base.actor_name[1] = '\0';
              (pCVar5->base).base.actor_name[2] = '\0';
              (pCVar5->base).base.actor_name[3] = '\0';
            }
            (*((param_1->base).base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"flashlit.wav");
          }
        }
        else {
          pCStack_14 = pCVar23;
          for (iVar20 = 0; iVar20 < pCStack_14->item_count; iVar20 = iVar20 + 1) {
            pCVar17 = (CDemonActor *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar23->items[0]);
            if (pCVar17 != (CDemonActor *)0x0) {
              core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0(pCStack_14,pCVar17,5,1);
              break;
            }
            pCVar23 = (CInventory *)&pCVar23->owner;
          }
          uVar19 = (uint)(g_CGamePtr->flashlight_active == 0);
          g_CGamePtr->flashlight_active = uVar19;
          if (uVar19 != 0) {
            pCVar5 = param_1 + 1;
            (pCVar5->base).base.actor_name[0] = '\x01';
            (pCVar5->base).base.actor_name[1] = '\0';
            (pCVar5->base).base.actor_name[2] = '\0';
            (pCVar5->base).base.actor_name[3] = '\0';
          }
          (*((param_1->base).base.vtable._ub)->playSound)
                    ((CDemonActor *)param_1,"flashlit.wav");
        }
      }
    }
  }
  pCVar8 = (param_1->inventory).selected_weapon;
  if (pCVar8 == (CWeapon *)0x0) {
    g_CGamePtr->flashlight_active = 0;
  }
  else if (pCVar8->can_attach_light == 0) {
    g_CGamePtr->flashlight_active = 0;
  }
  if ((g_CGamePtr->letterbox_mode != 0) &&
     ((param_1->is_wearing_goggles != 0 || (g_CGamePtr->goggles_active != 0)))) {
    (*(((param_1->base).base.vtable._uh)->_uh).toggleGoggles)(param_1);
  }
  if (fStack_2c != 0.0) {
    core_doc_cpp_FUN_00474400(param_1);
  }
  if (*(int *)param_1[1].base.base.actor_name == 0) {
    fVar15 = *(float *)(param_1[1].base.base.actor_name + 4) - param_2 / _DAT_005feca0;
    *(float *)(param_1[1].base.base.actor_name + 4) = fVar15;
    if (fVar15 < 0.0) {
      pCVar13 = &param_1[1].base;
      (pCVar13->base).actor_name[4] = '\0';
      (pCVar13->base).actor_name[5] = '\0';
      (pCVar13->base).actor_name[6] = '\0';
      (pCVar13->base).actor_name[7] = '\0';
    }
  }
  else {
    fVar15 = param_2 / _DAT_005fec9c + *(float *)(param_1[1].base.base.actor_name + 4);
    *(float *)(param_1[1].base.base.actor_name + 4) = fVar15;
    if (1.0 < fVar15) {
      pCVar13 = &param_1[1].base;
      (pCVar13->base).actor_name[4] = '\0';
      (pCVar13->base).actor_name[5] = '\0';
      (pCVar13->base).actor_name[6] = -0x80;
      (pCVar13->base).actor_name[7] = '?';
    }
  }
  fVar15 = param_1[1].base.base.location.position.y - param_2 / _DAT_005feca4;
  param_1[1].base.base.location.position.y = fVar15;
  if (fVar15 <= 0.0) {
    param_1[1].base.base.location.position.y = 0.0;
  }
  fVar15 = param_1[1].base.base.orient_matrix.m[0].z - param_2 / _DAT_005feca4;
  param_1[1].base.base.orient_matrix.m[0].z = fVar15;
  if (fVar15 <= 0.0) {
    param_1[1].base.base.orient_matrix.m[0].z = 0.0;
  }
  if (iStack_18 != 0) {
    core_doc_cpp_FUN_00474ef0();
  }
  core_doc_cpp_FUN_0046caa0();
  if (((param_1->aim_mode == AIM_MODE_MANUAL) &&
      (fVar15 = param_1[1].base.base.orient_matrix.m[2].y, fVar15 != 0.0)) &&
     (*(int *)((int)fVar15 + 0x2e0) == 0)) {
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180
              (&(param_1->base).model);
    core_doc_cpp_FUN_0046f610(param_1);
    core_doc_cpp_FUN_00473160();
    core_doc_cpp_FUN_0046caa0();
  }
  core_doc_cpp_FUN_00473c10(param_1,param_2);
  core_doc_cpp_FUN_00476080();
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80(&param_1->base,param_2);
  pCVar3 = &(param_1->base).model;
  fVar15 = (float)core_motion_cpp_FUN_00524a40(pCVar3);
  if (fVar15 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0(param_1);
  }
  else {
    fVar15 = core_motion_cpp_FUN_00525020(&pCVar3->base);
    if ((1.0 < fVar15) &&
       (pCStack_60 = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c600(param_1->pushed_object),
       pCStack_60 != (CBoxActor *)0x0)) {
      core_doc_cpp_FUN_0046c9e0();
      uStack_c8 = uStack_170;
      afStack_ec[(uint)bVar26 * -2 + 10] = afStack_190[(uint)bVar26 * -2 + 9];
      afStack_ec[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0xb] =
           afStack_190[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 10];
      core_actor_cpp_FUN_00408b40(param_1);
      fStack_350 = afStack_368[3];
      afStack_368[(uint)bVar26 * -2 + 7] = afStack_368[(uint)bVar26 * -2 + 4];
      afStack_368[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 8] =
           afStack_368[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 5];
      afStack_220[2] = fStack_350 - CStack_3a4.x;
      afStack_220[3] = fStack_34c - CStack_3a4.y;
      fStack_210 = fStack_348 - CStack_3a4.z;
      aCStack_1ac[0].x = fStack_350 - CStack_3a4.x;
      *(float *)((int)aCStack_1ac + (uint)bVar26 * -8 + 4) = afStack_220[(uint)bVar26 * -2 + 3];
      *(float *)((int)aCStack_1ac + (uint)bVar26 * -8 + (uint)bVar26 * -8 + 8) =
           afStack_220[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4];
      aCStack_1ac[0].y = 0.0;
      core_actor_cpp_FUN_00408b00(param_1);
      uStack_32c = uStack_158;
      afStack_328[(uint)bVar26 * -2] = afStack_190[(uint)bVar26 * -2 + 0xf];
      afStack_328[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1] =
           afStack_190[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x10];
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
    param_2 = param_1->hero_action_range + param_2;
    param_1->hero_action_range = param_2;
    if ((float)_DAT_005d9dbc < param_2) {
      core_hero_cpp_FUN_004eca10(param_1);
    }
  }
  fVar15 = param_1[1].base.base.orient_matrix.m[2].y;
  if ((fVar15 != 0.0) && (*(int *)((int)fVar15 + 0xfc) != 0)) {
    (param_1->base).base.is_transparent = 1;
  }
  iVar20 = sound_sndmain_cpp_FUN_005735a0(param_1[1].base.base.direction_hint);
  if (iVar20 == 0) {
    if (g_CGamePtr->goggles_active != 0) {
      sound_sndmain_cpp_killSfx_FUN_00573a80(param_1[1].base.base.lifecycle_state);
      sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
      sound_sndmain_cpp_FUN_00572a10(1);
      EVar18 = sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-on.wav");
      param_1[1].base.base.lifecycle_state = EVar18;
      sound_sndmain_cpp_FUN_005728e0(0.0);
      uVar19 = sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-loop.wav");
      param_1[1].base.base.direction_hint = uVar19;
      sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
      sound_sndmain_cpp_setSfxFade_FUN_00573ab0(param_1[1].base.base.direction_hint,0.333,1.0,0);
      if (g_CGamePtr->flashlight_active != 0) {
        g_CGamePtr->flashlight_active = 0;
        (*((param_1->base).base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"flashlit.wav");
        return;
      }
    }
  }
  else if (g_CGamePtr->goggles_active == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(param_1[1].base.base.lifecycle_state);
    sound_sndmain_cpp_killSfx_FUN_00573a80(param_1[1].base.base.direction_hint);
    sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
    sound_sndmain_cpp_FUN_00572a10(1);
    sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-off.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
    return;
  }
  return;
}
