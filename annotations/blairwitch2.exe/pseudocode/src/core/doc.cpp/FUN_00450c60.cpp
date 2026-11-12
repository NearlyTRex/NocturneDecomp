// Name: core_doc.cpp_FUN_00450c60
// Address: 00450c60
// Address Range: [[00450c60, 00453241]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00450c60(CHero *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00450c60(CHero *param_1,float param_2)

{
  CLocation *pCVar1;
  char *pcVar2;
  int *piVar3;
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CDemonActor *pCVar9;
  CLadder *pCVar10;
  CBoxActor *this_ptr_00;
  EWalkState EVar11;
  CCharacter_full_vtable *pCVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  float fVar17;
  CSimpleParticleSystem *pCVar18;
  CMotionController *this_ptr_01;
  CAmmoBox *this_ptr_02;
  EActorLifecycleState EVar19;
  int iVar20;
  CMatrix3x4f *pCVar21;
  uint *puVar22;
  float *pfVar23;
  int desired_state_index;
  uint *puVar24;
  float *pfVar25;
  byte bVar26;
  float10 fVar27;
  float afStackY_1cdc [1445];
  float fVar28;
  float fVar29;
  uint uVar30;
  float *pfVar31;
  CCharacter *pCVar32;
  CBoundingBox3D *in_stack_fffff9e4;
  CHero *pCVar33;
  float fVar34;
  CVector3f *pCVar35;
  CBoundingBox3D *in_stack_fffff9ec;
  CMatrix3x4f local_5b0;
  SInteractionInfo local_580;
  float local_560 [6];
  uint local_548;
  uint local_544;
  uint local_540;
  uint local_53c;
  CPlatform *local_538;
  float local_534;
  float local_530;
  float local_52c;
  float local_528;
  float local_524;
  float local_520;
  float local_51c;
  uint local_518 [6];
  uint local_500;
  float afStack_4fc [7];
  uint local_4e0;
  uint local_4d0;
  uint local_4c0;
  float local_4b0 [4];
  CQuaternion4f local_4a0;
  uint local_490;
  float afStack_48c [7];
  uint local_470;
  float local_460;
  float local_45c;
  float local_458;
  CVector3f local_454;
  float local_448;
  float afStack_444 [4];
  uint local_434;
  float local_430;
  float local_42c [5];
  float local_418;
  float local_40c;
  float local_408;
  float local_404;
  float local_400;
  CVector3f local_3f4;
  float local_3e8;
  float local_3e4 [4];
  float local_3d4;
  uint local_3d0;
  uint local_3c4;
  UOrientationVector local_3b8;
  float local_3ac;
  float local_3a8 [5];
  float local_394;
  uint local_388;
  float local_37c;
  uint local_370;
  float local_364;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  uint local_328;
  float local_31c;
  float local_318;
  float local_314;
  CVector3f local_310;
  float local_304;
  float local_300 [4];
  float local_2f0;
  uint local_2ec;
  float local_2e0;
  uint local_2d4;
  uint local_2c8;
  uint local_2bc;
  float local_2b8;
  CVector3f local_2b0;
  float local_2a4;
  float local_2a0 [5];
  float local_28c;
  float local_288;
  float local_284;
  uint local_280;
  float local_274;
  uint local_270;
  float local_26c;
  float local_268;
  uint local_25c;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  uint local_220;
  float local_21c;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  float local_1f8 [4];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  uint local_1cc;
  uint local_1c0;
  uint local_1bc;
  float local_1b8;
  float local_1b4;
  float afStack_1b0 [5];
  uint local_19c;
  uint local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  uint local_178;
  float local_170;
  float local_16c;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  uint local_e8;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  double local_c4;
  double local_bc;
  double local_b4;
  float local_a4;
  float local_a0;
  CCharacter *local_9c;
  int local_98;
  int local_94;
  float local_90;
  CSimpleParticleSystem *local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  CMotionController *local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  float local_40;
  int local_3c;
  uint local_38;
  int local_34;
  CSimpleParticleSystem *local_30;
  int local_2c;
  CCharacter_full_vtable *local_28;
  CLadder *local_24;
  float local_20;
  CBoxActor *local_1c;
  CMotionController *local_18;
  float local_14;
  
  bVar26 = 0;
  core_muzzle_cpp_FUN_0059e110(&(param_1->base).follow_formation,param_2);
  local_3c = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                       (0x01C38BC0,"?DebugActionPending" + 1);
  pCVar9 = (param_1->base).carry_hands[1].carry_actor;
  if ((pCVar9 != (CDemonActor *)0x0) &&
     (*(float *)(param_1[1].base.base.create_event + 0x60) < _DAT_005cff6f)) {
    (*((pCVar9->vtable)._ub)->getBoundingBox)(pCVar9,in_stack_fffff9e4);
    puVar22 = local_518;
    puVar24 = &local_548;
    for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
      *puVar24 = *puVar22;
      puVar22 = puVar22 + (uint)bVar26 * -2 + 1;
      puVar24 = puVar24 + (uint)bVar26 * -2 + 1;
    }
    pcVar2 = param_1[1].base.base.create_event + 0x54;
    if (pcVar2 != (char *)&local_548) {
      *(uint *)pcVar2 = local_548;
      *(uint *)(param_1[1].base.base.create_event + 0x58) = local_544;
      *(uint *)(param_1[1].base.base.create_event + 0x5c) = local_540;
    }
    pcVar2 = param_1[1].base.base.create_event + 0x60;
    if (pcVar2 != (char *)&local_53c) {
      *(uint *)pcVar2 = local_53c;
      param_1[1].base.base.standing_platform = local_538;
      param_1[1].base.base.platform_position_delta.x = local_534;
    }
    local_10c = *(float *)(param_1[1].base.base.create_event + 0x54) +
                *(float *)(param_1[1].base.base.create_event + 0x60);
    local_108 = *(float *)(param_1[1].base.base.create_event + 0x58) +
                (float)param_1[1].base.base.standing_platform;
    local_104 = *(float *)(param_1[1].base.base.create_event + 0x5c) +
                param_1[1].base.base.platform_position_delta.x;
    local_1e4 = local_10c;
    local_1f8[(uint)bVar26 * -2 + 6] = afStack_1b0[(uint)bVar26 * -2 + 0x2a];
    local_1f8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 7] =
         afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x2b];
    local_31c = local_1e4 * _DAT_005cff73;
    local_318 = local_1e0 * _DAT_005cff73;
    local_314 = local_1dc * _DAT_005cff73;
    local_418 = local_1e4 * _DAT_005cff73;
    local_42c[(uint)bVar26 * -2 + 6] = local_3a8[(uint)bVar26 * -2 + 0x24];
    local_42c[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 7] =
         local_3a8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x25];
    core_actor_cpp_FUN_00408d70();
    local_2c8 = local_e8;
    local_300[(uint)bVar26 * -2 + 0xf] = afStack_1b0[(uint)bVar26 * -2 + 0x33];
    local_300[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x10] =
         afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x34];
    core_actor_cpp_FUN_00408de0();
    pcVar2 = param_1[1].base.base.create_event + 0x48;
    local_430 = local_394;
    local_42c[(uint)bVar26 * -2] = local_3a8[(uint)bVar26 * -2 + 6];
    local_42c[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1] =
         local_3a8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 7];
    if ((float *)pcVar2 != afStack_444 + 5) {
      *(float *)pcVar2 = local_430;
      *(float *)(param_1[1].base.base.create_event + 0x4c) = local_42c[0];
      *(float *)(param_1[1].base.base.create_event + 0x50) = local_42c[1];
    }
  }
  core_game_cpp_CGame_slamDT_FUN_004bd460(g_CGamePtr,param_2);
  fVar28 = param_1->invincibility_timer - param_2;
  param_1->invincibility_timer = fVar28;
  if (fVar28 < 0.0) {
    param_1->invincibility_timer = 0.0;
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  core_doc_cpp_FUN_00453cc0();
  local_3d0 = local_370;
  local_3e4[(uint)bVar26 * -2 + 6] = local_3a8[(uint)bVar26 * -2 + 0xf];
  local_3e4[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 7] =
       local_3a8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x10];
  core_actor_cpp_FUN_00408d70();
  local_454.x = local_364;
  *(float *)((int)&local_454 + (uint)bVar26 * -8 + 4) = local_3a8[(uint)bVar26 * -2 + 0x12];
  *(float *)((int)&local_454 + (uint)bVar26 * -8 + (uint)bVar26 * -8 + 8) =
       local_3a8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x13];
  core_doc_cpp_FUN_00453250();
  local_44 = 1;
  local_58 = 1;
  local_4c = 1;
  local_34 = 1;
  local_38 = 1;
  if ((param_1->base).grabbed_by != (CDemonActor *)0x0) {
    local_44 = 0;
    local_4c = 0;
    local_34 = 0;
    local_38 = 0;
    local_58 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if (param_1->pushed_object != (CBoxActor *)0x0) {
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    local_4c = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if ((param_1->ladder_to_climb != (CLadder *)0x0) ||
     (param_1[1].base.base.orient_matrix.m[2].x != 0.0)) {
    local_58 = 0;
    local_4c = 0;
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"ladder\n");
    }
  }
  if ((param_1->object_to_pick_up != (CDemonActor *)0x0) || (param_1[1].base.base.health == 4)) {
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"pickup\n");
    }
  }
  local_14 = (float)core_motion_cpp_FUN_005038a0();
  if ((((0.0 < local_14) || (local_14 = (float)core_motion_cpp_FUN_005038a0(), 0.0 < local_14)) ||
      (local_14 = (float)core_motion_cpp_FUN_005038a0(), 0.0 < local_14)) ||
     ((param_1->base).hit_points <= 0.0)) {
    local_4c = 0;
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"hurt\n");
    }
  }
  local_14 = (float)core_motion_cpp_FUN_005038a0();
  if (((0.0 < local_14) || (param_1[1].base.base.health == 5)) ||
     (param_1->door_to_open != (CDoor *)0x0)) {
    local_38 = 0;
    local_44 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"door\n");
    }
  }
  local_14 = (float)core_motion_cpp_FUN_005038a0();
  if (0.0 < local_14) {
    local_4c = 0;
    local_34 = 0;
    local_58 = 0;
    local_38 = 0;
    local_44 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"sitting\n");
    }
  }
  if (param_1[1].base.base.health == 1) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"stashinventory\n");
    }
  }
  if (param_1[1].base.base.health == 2) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"placeobject\n");
    }
  }
  if (param_1[1].base.base.health == 6) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"putdownobject\n");
    }
  }
  if (param_1[1].base.base.health == 3) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"toss\n");
    }
  }
  if (param_1[1].base.base.health == 7) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"attackmelee\n");
    }
  }
  if ((param_1->lever_to_pull != (CLever *)0x0) ||
     (local_14 = (float)core_motion_cpp_FUN_005038a0(), 0.0 < local_14)) {
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    local_4c = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"leverToPull=%s\n");
    }
  }
  if ((param_1->base).grabbed_by == (CDemonActor *)0x0) {
    if ((param_1->base).base.standing_platform != (CPlatform *)0x0) {
      local_58 = 1;
    }
    if ((param_1->base).base.location.position.y != (param_1->base).closest_distance_threshold) {
      local_58 = 1;
    }
  }
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0();
  iVar20 = core_motion_cpp_FUN_005035c0();
  if ((*(int *)(iVar20 + 0x24) == 4) ||
     (iVar20 = core_motion_cpp_FUN_005035c0(), *(int *)(iVar20 + 0x24) == 5)) {
    (param_1->base).model.accumulated_root_motion.x =
         (param_1->base).model.accumulated_root_motion.x;
  }
  if (param_1->nearby_interactive_actor == (CDemonActor *)0x0) {
    fVar28 = (float)param_1[1].base.base.direction_hint -
             param_2 * (float)_DAT_005cff77 * (float)_DAT_005cff77;
    param_1[1].base.base.direction_hint = (int)fVar28;
    if (fVar28 < 0.0) {
      param_1[1].base.base.direction_hint = 0;
    }
  }
  else {
    fVar28 = param_2 * (float)_DAT_005cff77 + (float)param_1[1].base.base.direction_hint;
    param_1[1].base.base.direction_hint = (int)fVar28;
    if (1.0 < fVar28) {
      param_1[1].base.base.direction_hint = 0x3f800000;
    }
  }
  pCVar10 = param_1->ladder_to_climb;
  local_94 = 1;
  if (pCVar10 == (CLadder *)0x0) {
    if (param_1[1].base.base.orient_matrix.m[2].x == 0.0) {
      pCVar9 = param_1->nearby_interactive_actor;
      if (pCVar9 == (CDemonActor *)0x0) {
        if ((param_1->base).grabbed_by == (CDemonActor *)0x0) {
          this_ptr_00 = param_1->pushed_object;
          if (this_ptr_00 == (CBoxActor *)0x0) {
            iVar20 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                               (&param_1->base,param_2);
            if (iVar20 == 0) {
              if (local_44 != 0) {
                iVar20 = core_motion_cpp_FUN_005035c0();
                switch(*(uint *)(iVar20 + 0x24)) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  if ((param_1->base).is_on_ground != 0) {
                    desired_state_index = 0;
                    iVar20 = core_motion_cpp_FUN_005035c0();
                    local_98 = *(int *)(iVar20 + 0x24);
                    if ((param_1->player_input).action_state.walk == 0) {
                      if ((param_1->player_input).action_state.backup == 0) {
                        fVar28 = (param_1->player_input).strafe_speed;
                        local_b4 = (double)fVar28;
                        if ((float)_DAT_005cff7f <= fVar28) {
                          if (_DAT_005cff87 < local_b4) {
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
                    else if ((param_1->player_input).action_state.run == 0) {
                      desired_state_index = 1;
                    }
                    else {
                      desired_state_index = 3;
                    }
                    local_14 = (float)core_motion_cpp_FUN_005038a0();
                    local_28 = (CCharacter_full_vtable *)(local_14 * _DAT_005f514c);
                    local_14 = (float)core_motion_cpp_FUN_005038a0();
                    local_28 = (CCharacter_full_vtable *)
                               (local_14 * _DAT_005f5150 + (float)local_28);
                    local_14 = (float)core_motion_cpp_FUN_005038a0();
                    fVar17 = local_14 * _DAT_005f5154;
                    fVar28 = (param_1->player_input).strafe_speed;
                    fVar16 = (param_1->player_input).turn_speed * (param_1->base).turn_speed;
                    (param_1->base).turn_angle_accumulator = fVar16;
                    fVar29 = (param_1->base).turn_angle_accumulator;
                    fVar34 = (param_1->base).turn_angle_accumulator;
                    fVar5 = *(float *)(param_1[1].base.base.actor_name + 0x18);
                    fVar6 = param_1[1].base.base.orient.vec.z;
                    fVar7 = param_1[1].base.base.location.position.x;
                    fVar8 = param_1[1].base.base.orient_matrix.m[0].y;
                    *(float *)param_1[1].base.base.create_event =
                         *(float *)param_1[1].base.base.create_event - fVar16;
                    *(float *)(param_1[1].base.base.actor_name + 0x18) = fVar5 - fVar16;
                    param_1[1].base.base.orient.vec.z = fVar6 - fVar29;
                    param_1[1].base.base.location.position.x = fVar7 - fVar29;
                    fVar29 = (param_1->base).position_delta.x;
                    param_1[1].base.base.orient_matrix.m[0].y = fVar8 - fVar34;
                    (param_1->base).position_delta.x =
                         fVar28 * param_2 * (fVar17 + (float)local_28) + fVar29;
                    if (desired_state_index != local_98) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                                (&(param_1->base).model.base,desired_state_index,1);
                    }
                    if ((param_1->player_input).action_state.use_item != 0) {
                      core_hero_cpp_FUN_004cfc80();
                    }
                    if (((param_1->player_input).drop_item != 0) &&
                       (ABS(param_1[1].base.model.bone_origins[8].y) == 0.0)) {
                      engine_console_cpp_CConsole_printf_FUN_00436710
                                (g_CConsolePtr,"Dropitem\n");
                      pCVar9 = (param_1->base).carry_hands[1].carry_actor;
                      param_1->target_actor = pCVar9;
                      if ((pCVar9 == (CDemonActor *)0x0) &&
                         (((pCVar9 = param_1->inventories[0].selected_items
                                     [param_1->inventories[0].current_group],
                           param_1->target_actor = pCVar9, pCVar9 != (CDemonActor *)0x0 &&
                           (param_1[1].base.base.orient_matrix.m[2].y != 0.0)) &&
                          (*(int *)param_1[1].base.base.actor_name != 0)))) {
                        param_1->target_actor = (CDemonActor *)0x0;
                        local_94 = 0;
                        break;
                      }
                    }
                  }
                  local_94 = 0;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                  (param_1->base).is_on_ground = 0;
                }
              }
            }
            else {
              EVar11 = (param_1->base).walk_state;
              if (EVar11 < 2) {
                if (EVar11 == WALK_STATE_WALKING) {
                  iVar20 = 1;
                }
                else {
                  iVar20 = 0;
                }
LAB_004526f0:
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(param_1->base).model.base,iVar20,1);
              }
              else {
                if (EVar11 < WALK_STATE_NO_PATH) {
                  iVar20 = 3;
                  goto LAB_004526f0;
                }
                if (EVar11 != WALK_STATE_NO_PATH) {
                  iVar20 = 0;
                  goto LAB_004526f0;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(param_1->base).model.base,0,1);
                engine_console_cpp_CConsole_printf_FUN_00436710
                          (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
              }
              (param_1->base).model.accumulated_root_motion.z = 0.0;
              (param_1->base).model.accumulated_root_motion.y =
                   (param_1->base).model.accumulated_root_motion.z;
              (param_1->base).model.accumulated_root_motion.x =
                   (param_1->base).model.accumulated_root_motion.y;
            }
          }
          else {
            local_24 = pCVar10;
            if ((param_1->player_input).action_state.fire != 0) {
              (*((this_ptr_00->base).vtable._ub)->getBoundingBox)
                        (&this_ptr_00->base,in_stack_fffff9ec);
              pfVar23 = local_560;
              pfVar25 = &local_530;
              for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
                *pfVar25 = *pfVar23;
                pfVar23 = pfVar23 + (uint)bVar26 * -2 + 1;
                pfVar25 = pfVar25 + (uint)bVar26 * -2 + 1;
              }
              local_300[2] = local_530 + local_524;
              local_300[3] = local_52c + local_520;
              local_2f0 = local_528 + local_51c;
              local_1d8 = local_530 + local_524;
              local_1f8[(uint)bVar26 * -2 + 9] = local_300[(uint)bVar26 * -2 + 3];
              local_1f8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 10] =
                   local_300[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4];
              local_100 = local_1d8 * _DAT_005cff73;
              local_fc = local_1d4 * _DAT_005cff73;
              local_f8 = local_1d0 * _DAT_005cff73;
              local_1b4 = local_1d8 * _DAT_005cff73;
              afStack_1b0[(uint)bVar26 * -2] = afStack_1b0[(uint)bVar26 * -2 + 0x2d];
              afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1] =
                   afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x2e];
              core_actor_cpp_FUN_00408d70();
              afStack_1b0[2] = (float)local_3c4;
              afStack_1b0[(uint)bVar26 * -2 + 3] = local_3e4[(uint)bVar26 * -2 + 9];
              afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4] =
                   local_3e4[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 10];
              core_actor_cpp_FUN_00408de0();
              local_190 = local_280;
              afStack_1b0[(uint)bVar26 * -2 + 9] = local_2a0[(uint)bVar26 * -2 + 9];
              afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 10] =
                   local_2a0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 10];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
              local_2bc = local_1cc;
              local_300[(uint)bVar26 * -2 + 0x12] = local_1f8[(uint)bVar26 * -2 + 0xc];
              local_300[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x13] =
                   local_1f8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0xd];
              fVar28 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_2b8);
              local_184 = local_524 - local_530;
              local_180 = local_520 - local_52c;
              local_17c = local_51c - local_528;
              local_3e4[2] = local_524 - local_530;
              local_3e4[(uint)bVar26 * -2 + 3] = afStack_1b0[(uint)bVar26 * -2 + 0xc];
              local_3e4[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4] =
                   afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0xd];
              local_dc = local_3e4[2] * _DAT_005cff73;
              local_d8 = local_3e4[3] * _DAT_005cff73;
              local_d4 = local_3d4 * _DAT_005cff73;
              local_274 = local_3e4[2] * _DAT_005cff73;
              local_2a0[(uint)bVar26 * -2 + 0xc] = afStack_1b0[(uint)bVar26 * -2 + 0x36];
              local_2a0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0xd] =
                   afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x37];
              local_270 = 0;
              local_50 = fVar28;
              local_14 = fVar28;
              if (((local_188 - SQRT(local_26c * local_26c + local_274 * local_274) <
                    (float)_DAT_005cff8f) && (1.0 < local_18c)) &&
                 ((local_18c < (float)_DAT_005cff97 && (ABS(fVar28) < (float)_DAT_005cff9f)))) {
                local_68 = param_2 * _DAT_005cffa7;
                if (fVar28 < -local_68) {
                  local_50 = -local_68;
                }
                if (local_68 < local_50) {
                  local_50 = local_68;
                }
                (param_1->base).base.orient.vec.y = (param_1->base).base.orient.vec.y + local_50;
                core_charactr_cpp_FUN_00429d60();
                goto switchD_0045277b_caseD_6;
              }
            }
            if (local_24 == (CLadder *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (&(param_1->base).model.base,0,1);
              core_hero_cpp_CHero_stopPushingBox_FUN_004cf830(param_1);
            }
          }
        }
        else {
          if ((param_1->base).grabbed_type == 0) {
            core_actor_cpp_FUN_00408de0();
            local_2a0[2] = (float)local_25c;
            local_2a0[(uint)bVar26 * -2 + 3] = local_2a0[(uint)bVar26 * -2 + 0x12];
            local_2a0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4] =
                 local_2a0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x13];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
            local_1fc = local_388;
            local_1f8[(uint)bVar26 * -2] = local_3a8[(uint)bVar26 * -2 + 9];
            local_1f8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1] =
                 local_3a8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 10];
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_1f8[0]);
            local_40 = local_14;
            if (local_14 < _DAT_005cffab) {
              local_40 = local_14 + _DAT_005cffa7;
            }
            if (_DAT_005cffaf < local_40) {
              local_40 = local_40 + _DAT_005cffb3;
            }
            local_78 = param_2 * _DAT_005cffa7;
            local_88 = -local_78;
            if (local_40 < local_88) {
              local_40 = local_88;
            }
            if (local_78 < local_40) {
              local_40 = local_78;
            }
            (param_1->base).base.orient.vec.y = (param_1->base).base.orient.vec.y + local_40;
            core_charactr_cpp_FUN_00429d60();
          }
          local_9c = (CCharacter *)(param_1->base).grabbed_by;
          local_28 = (local_9c->base).vtable._uc;
          local_6c = &(param_1->base).model.base;
          core_skeleton_cpp_FUN_00546a90();
          pCVar12 = local_28;
          pCVar32 = local_9c;
          pCVar35 = &local_2b0;
          local_2b0.x = local_448;
          *(float *)((int)&local_2b0 + (uint)bVar26 * -8 + 4) = afStack_444[(uint)bVar26 * -2];
          pCVar33 = param_1;
          *(float *)((int)&local_2b0 + (uint)bVar26 * -8 + (uint)bVar26 * -8 + 8) =
               afStack_444[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1];
          iVar20 = (*(pCVar12->_uc).attractActorToward)(pCVar32,(CDemonActor *)pCVar33,pCVar35);
          this_ptr_01 = local_6c;
          if (iVar20 == 0) {
            (param_1->base).grabbed_by = (CDemonActor *)0x0;
          }
          else if ((param_1->base).grabbed_by != (CDemonActor *)0x0) {
            fVar28 = (float)param_1[1].base.base.is_transparent + param_2;
            param_1[1].base.base.is_transparent = (int)fVar28;
            if ((_DAT_005f5158 <= fVar28) && ((param_1->base).grabbed_type != 1)) {
              local_28 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0();
              local_14 = (float)core_motion_cpp_FUN_005038a0();
              if (local_14 + (float)local_28 <= 0.0) {
                (*(((param_1->base).base.vtable._uc)->_uc).releaseFromGrab)(&param_1->base);
              }
              else if ((param_1->player_input).action_state.fire != 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr_01,0x25,1);
                (param_1->player_input).action_state.fire = 0;
              }
            }
            goto switchD_0045277b_caseD_6;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(param_1->base).model.base,0,1);
        }
      }
      else {
        (*((pCVar9->vtable)._ub)->getInteractionInfo)(pCVar9,&local_580);
        if ((local_580.can_interact == 0) || (param_1 != (CHero *)local_580.interacting_actor)) {
          core_hero_cpp_CHero_stopNearbyInteraction_FUN_004cfad0(param_1);
        }
        else {
          puVar22 = (uint *)
                    ((int)*(CDemonActor **)((int)local_580.interacting_actor + 0x25618) +
                    (uint)bVar26 * -8 + 0x34);
          local_3b8.vec.x =
               ((*(CDemonActor **)((int)local_580.interacting_actor + 0x25618))->orient).vec.x;
          *(uint *)((int)&local_3b8 + (uint)bVar26 * -8 + 4) = *puVar22;
          *(uint *)((int)&local_3b8 + (uint)bVar26 * -8 + (uint)bVar26 * -8 + 8) =
               puVar22[(uint)bVar26 * -2 + 1];
          local_60 = (param_1->player_input).turn_speed * _DAT_005cffa7 * (float)_DAT_005cffb7 *
                     param_2;
          if (local_60 < local_580.yaw_min) {
            local_60 = local_580.yaw_min;
          }
          if (local_580.yaw_max < local_60) {
            local_60 = local_580.yaw_max;
          }
          local_3b8.vec.y =
               core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_3b8.vec.y + local_60);
          local_64 = (param_1->player_input).look_up_down_speed * _DAT_005cffa7 *
                     (float)_DAT_005cffb7 * param_2;
          if (local_64 < local_580.pitch_min) {
            local_64 = local_580.pitch_min;
          }
          if (local_580.pitch_max < local_64) {
            local_64 = local_580.pitch_max;
          }
          local_14 = local_3b8.vec.y;
          local_3b8.vec.x =
               core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_3b8.vec.x + local_64);
          this_ptr = &(param_1->base).model;
          local_14 = local_3b8.vec.x;
          iVar20 = (*((param_1->nearby_interactive_actor->vtable)._ub)->updateInteraction)
                             (param_1->nearby_interactive_actor,&local_3b8,&param_1->player_input);
          if (iVar20 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr->base,0,1);
            core_hero_cpp_CHero_stopNearbyInteraction_FUN_004cfad0(param_1);
          }
          else {
            local_90 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                 ((param_1->nearby_interactive_actor->orient).vec.y -
                                  (param_1->base).base.orient.vec.y);
            local_bc = (double)local_90;
            if ((float)_DAT_005cff7f <= local_90) {
              if (local_bc <= _DAT_005cff87) {
                fVar28 = 0.0;
              }
              else {
                fVar28 = 5.60519e-45;
              }
            }
            else {
              fVar28 = 7.00649e-45;
            }
            local_14 = local_90;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&this_ptr->base,(int)fVar28,1);
            fVar28 = local_90;
            pfVar23 = (float *)((int)param_1 + (uint)bVar26 * -8 + 0x34);
            local_d0 = (param_1->base).base.orient.vec.x;
            afStack_1b0[(uint)bVar26 * -2 + 0x39] = *pfVar23;
            afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x3a] =
                 pfVar23[(uint)bVar26 * -2 + 1];
            local_cc = fVar28 * (float)param_1[1].base.base.direction_hint + local_cc;
            core_charactr_cpp_FUN_00429d60();
            local_1b8 = local_580.approach_offset + (float)_DAT_005cffbf;
            local_1c0 = 0;
            local_1bc = 0;
            local_28 = (CCharacter_full_vtable *)local_1b8;
            core_actor_cpp_FUN_00408d70();
            local_124 = local_2e0;
            afStack_1b0[(uint)bVar26 * -2 + 0x24] = local_300[(uint)bVar26 * -2 + 9];
            afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x25] =
                 local_300[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 10];
            local_28 = (CCharacter_full_vtable *)&param_1[1].base.base.direction_hint;
            local_154 = local_124 - (param_1->base).base.location.position.x;
            local_150 = local_120 - (param_1->base).base.location.position.y;
            local_14c = local_11c - (param_1->base).base.location.position.z;
            local_f4 = local_154;
            afStack_1b0[(uint)bVar26 * -2 + 0x30] = afStack_1b0[(uint)bVar26 * -2 + 0x18];
            afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x31] =
                 afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x19];
            core_actor_cpp_FUN_00408d30();
            local_244 = local_400;
            local_2a0[(uint)bVar26 * -2 + 0x18] = local_42c[(uint)bVar26 * -2 + 0xc];
            local_2a0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x19] =
                 local_42c[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0xd];
            local_3e8 = local_244 * (float)(local_28->_ub).setup;
            pCVar35 = &(param_1->base).model.accumulated_root_motion;
            local_3e4[0] = local_240 * (float)(local_28->_ub).setup;
            local_3e4[1] = local_23c * (float)(local_28->_ub).setup;
            local_358 = local_3e8;
            local_3a8[(uint)bVar26 * -2 + 0x15] = local_3e4[(uint)bVar26 * -2];
            local_3a8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x16] =
                 local_3e4[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1];
            if (pCVar35 != (CVector3f *)(local_3a8 + 0x14)) {
              pCVar35->x = local_358;
              (param_1->base).model.accumulated_root_motion.y = local_354;
              (param_1->base).model.accumulated_root_motion.z = local_350;
            }
            (param_1->base).model.accumulated_root_motion.y = 0.0;
          }
        }
      }
    }
    else {
      local_14 = (float)core_motion_cpp_FUN_005038a0();
      if (0.0 < local_14) {
        if ((param_1->base).base.location.position.y <
            *(float *)((int)param_1[1].base.base.orient_matrix.m[2].x + 0x24) + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(param_1->base).model.base,0,1);
        }
      }
      else {
        param_1[1].base.base.orient_matrix.m[2].x = 0.0;
      }
      if (0.0 < (float)param_1[1].base.base.scale.z) {
        if ((float)param_1[1].base.base.scale.z <= param_2) {
          param_1[1].base.base.scale.z = 0;
          local_54 = 1.0;
        }
        else {
          local_54 = param_2 / (float)param_1[1].base.base.scale.z;
          param_1[1].base.base.scale.z = (int)((float)param_1[1].base.base.scale.z - param_2);
        }
        piVar3 = &param_1[1].base.base.collision_disabled;
        pCVar1 = &(param_1->base).base.location;
        fVar34 = 1.0 - local_54;
        local_130 = (float)*piVar3 * local_54;
        local_12c = (float)param_1[1].base.base.process_disabled * local_54;
        local_128 = (float)param_1[1].base.base.scale.x * local_54;
        local_34c = (float)*piVar3 * local_54;
        local_3a8[(uint)bVar26 * -2 + 0x18] = afStack_1b0[(uint)bVar26 * -2 + 0x21];
        local_3a8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x19] =
             afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x22];
        fVar28 = (param_1->base).base.location.position.y;
        fVar29 = (param_1->base).base.location.position.z;
        (pCVar1->position).x = (pCVar1->position).x + local_34c;
        (param_1->base).base.location.position.y = fVar28 + local_348;
        (param_1->base).base.location.position.z = fVar29 + local_344;
        fVar28 = (float)param_1[1].base.base.process_disabled;
        fVar29 = (float)param_1[1].base.base.scale.x;
        *piVar3 = (int)((float)*piVar3 * fVar34);
        param_1[1].base.base.process_disabled = (int)(fVar28 * fVar34);
        param_1[1].base.base.scale.x = (int)(fVar29 * fVar34);
        local_20 = fVar34;
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                             ((float)param_1[1].base.base.scale.y -
                              (param_1->base).base.orient.vec.y);
        (param_1->base).turn_angle_accumulator = local_14 * local_54;
      }
      local_14 = (*((param_1->base).base.vtable._ub)->cylinderGroundCheck)
                           ((CDemonActor *)param_1,(param_1->base).collision_cylinder_height,
                            (CVector3f *)0x0);
      (param_1->base).closest_distance_threshold = local_14;
    }
  }
  else {
    local_14 = (float)core_motion_cpp_FUN_005038a0();
    if (0.0 < local_14) {
      core_actor_cpp_FUN_00408d70();
      local_220 = local_19c;
      local_2a0[(uint)bVar26 * -2 + 0x21] = afStack_1b0[(uint)bVar26 * -2 + 6];
      local_2a0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x22] =
           afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 7];
      if (local_21c + (float)_DAT_005cffc7 < (param_1->base).base.location.position.y) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(param_1->base).model.base,0,1);
      }
    }
    else {
      param_1->ladder_to_climb = (CLadder *)0x0;
    }
    if (0.0 < (float)param_1[1].base.base.scale.z) {
      if ((float)param_1[1].base.base.scale.z <= param_2) {
        param_1[1].base.base.scale.z = 0;
        local_5c = 1.0;
      }
      else {
        local_5c = param_2 / (float)param_1[1].base.base.scale.z;
        param_1[1].base.base.scale.z = (int)((float)param_1[1].base.base.scale.z - param_2);
      }
      piVar3 = &param_1[1].base.base.collision_disabled;
      pCVar1 = &(param_1->base).base.location;
      fVar34 = 1.0 - local_5c;
      local_460 = (float)*piVar3 * local_5c;
      local_45c = (float)param_1[1].base.base.process_disabled * local_5c;
      local_458 = (float)param_1[1].base.base.scale.x * local_5c;
      local_340 = (float)*piVar3 * local_5c;
      local_3a8[(uint)bVar26 * -2 + 0x1b] = afStack_48c[(uint)bVar26 * -2 + 0xc];
      local_3a8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x1c] =
           afStack_48c[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0xd];
      fVar28 = (param_1->base).base.location.position.y;
      fVar29 = (param_1->base).base.location.position.z;
      (pCVar1->position).x = (pCVar1->position).x + local_340;
      (param_1->base).base.location.position.y = fVar28 + local_33c;
      (param_1->base).base.location.position.z = fVar29 + local_338;
      fVar28 = (float)param_1[1].base.base.process_disabled;
      fVar29 = (float)param_1[1].base.base.scale.x;
      *piVar3 = (int)((float)*piVar3 * fVar34);
      param_1[1].base.base.process_disabled = (int)(fVar28 * fVar34);
      param_1[1].base.base.scale.x = (int)(fVar29 * fVar34);
      local_7c = fVar34;
      local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                           ((float)param_1[1].base.base.scale.y - (param_1->base).base.orient.vec.y)
      ;
      (param_1->base).turn_angle_accumulator = local_14 * local_5c;
    }
  }
switchD_0045277b_caseD_6:
  iVar20 = core_motion_cpp_FUN_005035c0();
  if ((*(int *)(iVar20 + 0x24) == 0x1b) &&
     (this_ptr_02 = (CAmmoBox *)
                    core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (param_1->object_to_pick_up,g_CAmmoBoxClassInfo.name_hash),
     this_ptr_02 != (CAmmoBox *)0x0)) {
    local_14 = core_motion_cpp_FUN_00503e60(&(param_1->base).model.base);
    core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e600(this_ptr_02,local_14);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470(&param_1->base);
  core_doc_cpp_FUN_00455270();
  if (local_94 != 0) {
    pCVar32 = &param_1[1].base;
    (pCVar32->base).create_event[0x30] = '\0';
    (pCVar32->base).create_event[0x31] = '\0';
    (pCVar32->base).create_event[0x32] = '\0';
    (pCVar32->base).create_event[0x33] = '\0';
    *(uint *)(param_1[1].base.base.create_event + 0x2c) =
         *(uint *)(param_1[1].base.base.create_event + 0x30);
    *(uint *)(param_1[1].base.base.create_event + 0x28) =
         *(uint *)(param_1[1].base.base.create_event + 0x2c);
  }
  if ((param_1->ladder_to_climb == (CLadder *)0x0) &&
     (param_1[1].base.base.orient_matrix.m[2].x == 0.0)) {
    if (local_58 == 0) goto LAB_004514a7;
    local_18 = &(param_1->base).model.base;
    iVar20 = core_motion_cpp_FUN_005035c0();
    fVar28 = 0x41900000 * param_2;
    pCVar35 = &(param_1->base).model.accumulated_root_motion;
    iVar20 = *(int *)(iVar20 + 0x24);
    pCVar4 = &(param_1->base).position_delta;
    local_3ac = pCVar35->x + pCVar4->x;
    local_3a8[0] = (param_1->base).model.accumulated_root_motion.y +
                   (param_1->base).position_delta.y;
    local_3a8[1] = (param_1->base).model.accumulated_root_motion.z +
                   (param_1->base).position_delta.z;
    local_3f4.x = local_3ac;
    *(float *)((int)&local_3f4 + (uint)bVar26 * -8 + 4) = local_3a8[(uint)bVar26 * -2];
    *(float *)((int)&local_3f4 + (uint)bVar26 * -8 + (uint)bVar26 * -8 + 8) =
         local_3a8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1];
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    pCVar35->x = (param_1->base).model.accumulated_root_motion.y;
    (param_1->base).position_delta.z = 0.0;
    (param_1->base).position_delta.y = (param_1->base).position_delta.z;
    pCVar4->x = (param_1->base).position_delta.y;
    local_74 = fVar28;
    local_48 = iVar20;
    if (iVar20 == 7) {
      local_3f4.x = 0.0;
      local_3f4.y = 0.0;
      *(float *)(param_1[1].base.base.create_event + 0x44) = 0x41900000;
      pCVar32 = &param_1[1].base;
      (pCVar32->base).create_event[0x40] = '\0';
      (pCVar32->base).create_event[0x41] = '\0';
      (pCVar32->base).create_event[0x42] = '\0';
      (pCVar32->base).create_event[0x43] = '\0';
      local_3f4.z = fVar28;
    }
    else {
      if (iVar20 == 8) {
        fVar34 = (float)_DAT_005cffcf;
        local_3f4.y = 0.0;
        fVar29 = (param_1->base).velocity.y;
        *(float *)(param_1[1].base.base.create_event + 0x44) = 0x41900000;
        fVar29 = fVar29 - param_2 * fVar34;
        pCVar32 = &param_1[1].base;
        (pCVar32->base).create_event[0x40] = '\0';
        (pCVar32->base).create_event[0x41] = '\0';
        (pCVar32->base).create_event[0x42] = '\0';
        (pCVar32->base).create_event[0x43] = '\0';
        local_3f4.z = fVar28;
        goto LAB_00452ac9;
      }
      if (iVar20 == 9) {
        fVar34 = (float)_DAT_005cffcf;
        local_3f4.x = 0.0;
        local_3f4.y = 0.0;
        fVar29 = 0x40000000 * 0x41900000;
        local_3f4.z = *(float *)(param_1[1].base.base.create_event + 0x44) * param_2;
        pCVar32 = &param_1[1].base;
        (pCVar32->base).create_event[0x40] = '\0';
        (pCVar32->base).create_event[0x41] = '\0';
        (pCVar32->base).create_event[0x42] = '\0';
        (pCVar32->base).create_event[0x43] = '\0';
        fVar28 = (param_1->base).velocity.y;
        *(float *)(param_1[1].base.base.create_event + 0x44) =
             *(float *)(param_1[1].base.base.create_event + 0x44) - fVar29 * param_2;
        fVar29 = *(float *)(param_1[1].base.base.create_event + 0x44);
        (param_1->base).velocity.y = fVar28 - param_2 * fVar34;
        if (fVar29 < 0.0) {
          pCVar32 = &param_1[1].base;
          (pCVar32->base).create_event[0x44] = '\0';
          (pCVar32->base).create_event[0x45] = '\0';
          (pCVar32->base).create_event[0x46] = '\0';
          (pCVar32->base).create_event[0x47] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_18,0xf,1);
        }
      }
      else if (iVar20 == 10) {
        local_3f4.x = 0.0;
        local_3f4.y = 0.0;
        local_3f4.z = fVar28 * (float)_DAT_005cffb7;
      }
      else if (iVar20 == 0xb) {
        pCVar32 = &param_1[1].base;
        (pCVar32->base).create_event[0x44] = '\0';
        (pCVar32->base).create_event[0x45] = '\0';
        (pCVar32->base).create_event[0x46] = ' ';
        (pCVar32->base).create_event[0x47] = 'A';
        pCVar32 = &param_1[1].base;
        (pCVar32->base).create_event[0x40] = '\0';
        (pCVar32->base).create_event[0x41] = '\0';
        (pCVar32->base).create_event[0x42] = '\0';
        (pCVar32->base).create_event[0x43] = '\0';
      }
      else if (iVar20 == 0xc) {
        local_3f4.z = param_2 * _DAT_005cffd7;
        fVar28 = (float)_DAT_005cffcf;
        fVar29 = (param_1->base).velocity.y;
        pCVar32 = &param_1[1].base;
        (pCVar32->base).create_event[0x44] = '\0';
        (pCVar32->base).create_event[0x45] = '\0';
        (pCVar32->base).create_event[0x46] = ' ';
        (pCVar32->base).create_event[0x47] = 'A';
        fVar29 = fVar29 - param_2 * fVar28;
        pCVar32 = &param_1[1].base;
        (pCVar32->base).create_event[0x40] = '\0';
        (pCVar32->base).create_event[0x41] = '\0';
        (pCVar32->base).create_event[0x42] = '\0';
        (pCVar32->base).create_event[0x43] = '\0';
LAB_00452ac9:
        local_3f4.x = 0.0;
LAB_00452acb:
        (param_1->base).velocity.y = fVar29;
      }
      else if (iVar20 == 0xd) {
        local_3f4.x = 0.0;
        local_3f4.y = 0.0;
        local_3f4.z = *(float *)(param_1[1].base.base.create_event + 0x44) * param_2;
        fVar34 = (float)_DAT_005cffcf;
        fVar28 = (param_1->base).velocity.y;
        fVar29 = *(float *)(param_1[1].base.base.create_event + 0x44);
        pCVar32 = &param_1[1].base;
        (pCVar32->base).create_event[0x40] = '\0';
        (pCVar32->base).create_event[0x41] = '\0';
        (pCVar32->base).create_event[0x42] = '\0';
        (pCVar32->base).create_event[0x43] = '\0';
        (param_1->base).velocity.y = fVar28 - param_2 * fVar34;
        if (fVar29 < 0.0) {
          pCVar32 = &param_1[1].base;
          (pCVar32->base).create_event[0x44] = '\0';
          (pCVar32->base).create_event[0x45] = '\0';
          (pCVar32->base).create_event[0x46] = '\0';
          (pCVar32->base).create_event[0x47] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_18,0xf,1);
        }
      }
      else {
        if (iVar20 != 0xe) {
          if (iVar20 == 0xf) {
            local_3f4.z = 0.0;
            local_3f4.y = 0.0;
            fVar29 = (param_1->base).velocity.y - param_2 * (float)_DAT_005cffcf;
            pCVar32 = &param_1[1].base;
            (pCVar32->base).create_event[0x40] = -0x66;
            (pCVar32->base).create_event[0x41] = '?';
            (pCVar32->base).create_event[0x42] = '\x1c';
            (pCVar32->base).create_event[0x43] = 'F';
            goto LAB_00452ac9;
          }
          if (iVar20 == 0x10) {
            local_3f4.z = 0.0;
            local_3f4.y = 0.0;
            local_3f4.x = 0.0;
            fVar29 = (param_1->base).velocity.y - param_2 * (float)_DAT_005cffcf;
          }
          else {
            fVar29 = (param_1->base).velocity.y - param_2 * (float)_DAT_005cffcf;
          }
          goto LAB_00452acb;
        }
        local_3f4.y = 0.0;
      }
    }
    core_actor_cpp_FUN_00408d30();
    local_118 = local_268;
    afStack_1b0[(uint)bVar26 * -2 + 0x27] = local_2a0[(uint)bVar26 * -2 + 0xf];
    afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x28] =
         local_2a0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x10];
    local_40c = (param_1->base).velocity.x * param_2;
    pCVar35 = &local_3f4;
    local_408 = (param_1->base).velocity.y * param_2;
    local_404 = (param_1->base).velocity.z * param_2;
    local_238 = local_40c;
    local_2a0[(uint)bVar26 * -2 + 0x1b] = local_42c[(uint)bVar26 * -2 + 9];
    local_2a0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x1c] =
         local_42c[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 10];
    local_13c = local_238 + local_118;
    local_138 = local_234 + local_114;
    local_134 = local_230 + local_110;
    local_148 = local_238 + local_118;
    afStack_1b0[(uint)bVar26 * -2 + 0x1b] = afStack_1b0[(uint)bVar26 * -2 + 0x1e];
    afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x1c] =
         afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x1f];
    local_3f4.x = local_3f4.x + local_148;
    local_3f4.y = local_3f4.y + local_144;
    local_3f4.z = local_3f4.z + local_140;
    param_1[1].base.base.particle_systems[0].owner = (CDemonActor *)(param_1->base).velocity.y;
    core_charactr_cpp_FUN_00423a60(&param_1->base,pCVar35);
    if ((param_1->base).base.location.position.y <
        (param_1->base).closest_distance_threshold + (float)_DAT_005cffdf) {
      (param_1->base).is_on_ground = 1;
    }
    if (((local_48 == 0xf) || (local_48 == 9)) || (local_48 == 0xd)) {
      if ((param_1->base).is_on_ground != 0) {
        engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"Splat at %3.2f fps\n");
        local_70 = -(float)param_1[1].base.base.particle_systems[0].owner;
        local_c4 = (double)local_70;
        if ((float)_DAT_005cffe7 <= local_70) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffff9e4);
          fVar27 = (float10)local_c4;
          fVar13 = (float10)_DAT_005cffef;
          fVar14 = (float10)_DAT_005cfff7;
          fVar15 = (float10)_DAT_005cffff;
          pCVar12 = (param_1->base).base.vtable._uc;
          param_1->invincibility_timer = 0.0;
          (*(pCVar12->_uc).processDamage)(&param_1->base,(SDamageInfo *)&stack0xfffff9e4);
          if (((param_1->base).hit_points <= 0.0) ||
             (0x42c80000 < (int)(float)((fVar27 + fVar13) * fVar14 * fVar15))) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(param_1->base).model.base,0x12,1);
            goto LAB_00452c9a;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(param_1->base).model.base,0x11,1);
        }
        else {
          if (local_48 == 0xd) {
            iVar20 = 0xe;
          }
          else if (local_48 == 9) {
            iVar20 = 10;
          }
          else {
            if (local_48 != 0xf) goto LAB_00452c78;
            iVar20 = 0x10;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(param_1->base).model.base,iVar20,1);
        }
LAB_00452c78:
        (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)param_1,(CVector3f *)&DAT_0265370c,local_70 * _DAT_005d0007 + 1.0)
        ;
      }
LAB_00452c9a:
      iVar20 = (param_1->base).is_on_ground;
      fVar28 = 0x40000000;
    }
    else {
      iVar20 = (param_1->base).is_on_ground;
      fVar28 = 0x40000000;
    }
    0x40000000 = fVar28;
    if (iVar20 == 0) {
      *(float *)(param_1[1].base.base.create_event + 0x40) =
           *(float *)(param_1[1].base.base.create_event + 0x40) + param_2;
      local_80 = fVar28;
      if (local_48 == 3) {
        local_80 = fVar28 * (float)_DAT_005cff77;
      }
      if ((local_80 < *(float *)(param_1[1].base.base.create_event + 0x40)) ||
         ((float)param_1[1].base.base.particle_systems[0].owner < (float)_DAT_005cffef)) {
        if (local_48 != 0xf) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(param_1->base).model.base,0xf,1);
        }
        (param_1->base).is_on_ground = 0;
      }
      goto LAB_004514a7;
    }
  }
  else {
    local_28 = (CCharacter_full_vtable *)&(param_1->base).model.accumulated_root_motion;
    core_actor_cpp_FUN_00408cf0();
    pCVar1 = &(param_1->base).base.location;
    local_160 = local_42c[2];
    afStack_1b0[(uint)bVar26 * -2 + 0x15] = local_42c[(uint)bVar26 * -2 + 3];
    afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x16] =
         local_42c[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4];
    fVar28 = (param_1->base).base.location.position.y;
    fVar29 = (param_1->base).base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + local_160;
    (param_1->base).base.location.position.y = fVar28 + local_15c;
    (param_1->base).base.location.position.z = fVar29 + local_158;
    (local_28->_ub).setup = (CDemonActor_setup *)0x0;
    (local_28->_ub).vfunc1 = (CDemonActor_vfunc1 *)(local_28->_ub).setup;
    (local_28->_ub).setup = (CDemonActor_setup *)(local_28->_ub).vfunc1;
  }
  pCVar32 = &param_1[1].base;
  (pCVar32->base).create_event[0x40] = '\0';
  (pCVar32->base).create_event[0x41] = '\0';
  (pCVar32->base).create_event[0x42] = '\0';
  (pCVar32->base).create_event[0x43] = '\0';
LAB_004514a7:
  pCVar32 = &param_1[1].base;
  (pCVar32->base).create_event[0x30] = '\0';
  (pCVar32->base).create_event[0x31] = '\0';
  (pCVar32->base).create_event[0x32] = '\0';
  (pCVar32->base).create_event[0x33] = '\0';
  *(uint *)(param_1[1].base.base.create_event + 0x2c) =
       *(uint *)(param_1[1].base.base.create_event + 0x30);
  *(uint *)(param_1[1].base.base.create_event + 0x28) =
       *(uint *)(param_1[1].base.base.create_event + 0x2c);
  if (local_44 != 0) {
    if ((param_1->player_input).action_state.draw != 0) {
      if (*(int *)param_1[1].base.base.actor_name == 0) {
        if ((param_1[1].base.base.blood_effect_color == 0) ||
           (iVar20 = core_actor_cpp_isOfClass_FUN_0040c840
                               (&param_1->inventories[0].selected_weapons
                                 [param_1->inventories[0].current_group]->base,&DAT_005cff2d),
           iVar20 != 0)) {
          pCVar33 = param_1 + 1;
          (pCVar33->base).base.actor_name[0] = '\x01';
          (pCVar33->base).base.actor_name[1] = '\0';
          (pCVar33->base).base.actor_name[2] = '\0';
          (pCVar33->base).base.actor_name[3] = '\0';
        }
        else {
          pCVar33 = param_1 + 1;
          (pCVar33->base).base.actor_name[0] = '\0';
          (pCVar33->base).base.actor_name[1] = '\0';
          (pCVar33->base).base.actor_name[2] = '\0';
          (pCVar33->base).base.actor_name[3] = '\0';
        }
      }
      else {
        pCVar33 = param_1 + 1;
        (pCVar33->base).base.actor_name[0] = '\0';
        (pCVar33->base).base.actor_name[1] = '\0';
        (pCVar33->base).base.actor_name[2] = '\0';
        (pCVar33->base).base.actor_name[3] = '\0';
      }
    }
    if (((param_1->player_input).action_state.light != 0) &&
       (iVar20 = core_doc_cpp_FUN_0045df30(), iVar20 == 0)) {
      if (param_1[1].base.base.blood_effect_color == 0) {
        param_1[1].base.base.blood_effect_color = 1;
      }
      else {
        param_1[1].base.base.blood_effect_color = 0;
      }
    }
  }
  if (local_4c != 0) {
    core_doc_cpp_FUN_0045bdc0();
  }
  if (*(int *)param_1[1].base.base.actor_name == 0) {
    fVar28 = *(float *)(param_1[1].base.base.actor_name + 4) - param_2 / _DAT_005f5120;
    *(float *)(param_1[1].base.base.actor_name + 4) = fVar28;
    if (fVar28 < 0.0) {
      pCVar32 = &param_1[1].base;
      (pCVar32->base).actor_name[4] = '\0';
      (pCVar32->base).actor_name[5] = '\0';
      (pCVar32->base).actor_name[6] = '\0';
      (pCVar32->base).actor_name[7] = '\0';
    }
  }
  else {
    fVar28 = param_2 / _DAT_005f511c + *(float *)(param_1[1].base.base.actor_name + 4);
    *(float *)(param_1[1].base.base.actor_name + 4) = fVar28;
    if (1.0 < fVar28) {
      pCVar32 = &param_1[1].base;
      (pCVar32->base).actor_name[4] = '\0';
      (pCVar32->base).actor_name[5] = '\0';
      (pCVar32->base).actor_name[6] = -0x80;
      (pCVar32->base).actor_name[7] = '?';
    }
  }
  fVar28 = param_1[1].base.base.location.position.y - param_2 / _DAT_005f5124;
  param_1[1].base.base.location.position.y = fVar28;
  if (fVar28 <= 0.0) {
    param_1[1].base.base.location.position.y = 0.0;
  }
  fVar28 = param_1[1].base.base.orient_matrix.m[0].z - param_2 / _DAT_005f5124;
  param_1[1].base.base.orient_matrix.m[0].z = fVar28;
  if (fVar28 <= 0.0) {
    param_1[1].base.base.orient_matrix.m[0].z = 0.0;
  }
  if (local_34 != 0) {
    core_doc_cpp_FUN_0045c960();
  }
  core_doc_cpp_FUN_00453d80();
  core_doc_cpp_FUN_0045b510(param_1);
  core_doc_cpp_FUN_0045db40();
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429420(&param_1->base,param_2,0);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90(&param_1->base,param_2);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
            (&(param_1->base).model);
  fVar28 = *(float *)&(param_1->base).base.field_0x2a8 - param_2;
  *(float *)&(param_1->base).base.field_0x2a8 = fVar28;
  if (fVar28 <= 0.0) {
    local_8c = (param_1->base).base.particle_systems;
    iVar20 = core_bwspart_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(local_8c);
    if (iVar20 != 0) {
      core_xform_cpp_FUN_00591530();
      pCVar18 = local_8c;
      local_214 = local_334;
      local_2a0[(uint)bVar26 * -2 + 0x24] = local_3a8[(uint)bVar26 * -2 + 0x1e];
      local_2a0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x25] =
           local_3a8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x1f];
      local_30 = pCVar18;
      *(uint *)&(param_1->base).base.field_0x2a8 = 0x3dcccccd;
      local_2c = 0;
      do {
        iVar20 = core_bwgrndma_cpp_FUN_005a7ed0();
        if (iVar20 != 0) {
          local_a4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          local_14 = local_a4;
          local_a0 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          local_14 = local_a0;
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          core_xform_cpp_quaternionFromAngleZ_FUN_00594020();
          local_4e0 = local_500;
          afStack_4fc[(uint)bVar26 * -2 + 8] = afStack_4fc[(uint)bVar26 * -2];
          afStack_4fc[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 9] =
               afStack_4fc[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1];
          (afStack_4fc + (uint)bVar26 * -2 + (uint)bVar26 * -2 + 9)[(uint)bVar26 * -2 + 1] =
               (afStack_4fc + (uint)bVar26 * -2 + (uint)bVar26 * -2 + 1)[(uint)bVar26 * -2 + 1];
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0();
          local_490 = afStack_48c[3];
          afStack_48c[(uint)bVar26 * -2] = afStack_48c[(uint)bVar26 * -2 + 4];
          afStack_48c[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1] =
               afStack_48c[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 5];
          (afStack_48c + (uint)bVar26 * -2 + (uint)bVar26 * -2 + 1)[(uint)bVar26 * -2 + 1] =
               (afStack_48c + (uint)bVar26 * -2 + (uint)bVar26 * -2 + 5)[(uint)bVar26 * -2 + 1];
          core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_a4);
          local_4b0[0] = (float)local_4c0;
          afStack_4fc[(uint)bVar26 * -2 + 0x14] = afStack_4fc[(uint)bVar26 * -2 + 0x10];
          afStack_4fc[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x15] =
               afStack_4fc[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x11];
          (afStack_4fc + (uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x15)[(uint)bVar26 * -2 + 1] =
               (afStack_4fc + (uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x11)[(uint)bVar26 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_4fc + 0x13);
          local_4d0 = local_470;
          afStack_4fc[(uint)bVar26 * -2 + 0xc] = afStack_48c[(uint)bVar26 * -2 + 8];
          afStack_4fc[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0xd] =
               afStack_48c[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 9];
          (afStack_4fc + (uint)bVar26 * -2 + (uint)bVar26 * -2 + 0xd)[(uint)bVar26 * -2 + 1] =
               (afStack_48c + (uint)bVar26 * -2 + (uint)bVar26 * -2 + 9)[(uint)bVar26 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60();
          local_4a0.w = afStack_4fc[3];
          pfVar23 = (float *)((int)&local_4a0 + (uint)bVar26 * -8 + (uint)bVar26 * -8 + 8);
          *(float *)((int)&local_4a0 + (uint)bVar26 * -8 + 4) = afStack_4fc[(uint)bVar26 * -2 + 4];
          *pfVar23 = afStack_4fc[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 5];
          pfVar23[(uint)bVar26 * -2 + 1] =
               (afStack_4fc + (uint)bVar26 * -2 + (uint)bVar26 * -2 + 5)[(uint)bVar26 * -2 + 1];
          core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&local_4a0,&local_5b0);
          pCVar21 = &local_5b0;
          pfVar23 = (float *)&stack0xfffffa20;
          for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
            *pfVar23 = pCVar21->m[0].w;
            pCVar21 = (CMatrix3x4f *)((int)pCVar21 + ((uint)bVar26 * -2 + 1) * 4);
            pfVar23 = pfVar23 + (uint)bVar26 * -2 + 1;
          }
          afStack_444[3] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
          afStack_444[2] = 0.0;
          local_434 = 0;
          local_84 = afStack_444[3];
          local_14 = afStack_444[3];
          core_xform_cpp_FUN_00591530();
          pfVar23 = local_2a0 + 0x26;
          local_208 = 0.0;
          local_204 = 0x40a00000;
          local_200 = 0;
          local_250 = local_37c;
          local_2a0[(uint)bVar26 * -2 + 0x15] = local_3a8[(uint)bVar26 * -2 + 0xc];
          local_2a0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x16] =
               local_3a8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0xd];
          fVar34 = 0.0;
          pfVar25 = local_3a8 + 2;
          local_1f8[2] = local_250 + local_214;
          local_1f8[3] = local_24c + local_210;
          local_1e8 = local_248 + local_20c;
          local_22c = local_250 + local_214;
          local_2a0[(uint)bVar26 * -2 + 0x1e] = local_1f8[(uint)bVar26 * -2 + 3];
          local_2a0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x1f] =
               local_1f8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4];
          pfVar31 = local_2a0 + 0x1d;
          uVar30 = 0;
          fVar29 = 0.2;
          local_2a4 = local_22c - local_214;
          local_2a0[0] = local_228 - local_210;
          local_2a0[1] = local_224 - local_20c;
          fVar28 = 0.0;
          local_3a8[2] = local_22c - local_214;
          local_3a8[(uint)bVar26 * -2 + 3] = local_2a0[(uint)bVar26 * -2];
          local_3a8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 4] =
               local_2a0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1];
          fVar28 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar28,fVar29);
          local_14 = fVar28;
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.4);
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (local_30,0x3f19999a,0x3f800000,0,0x3f333333,0,local_14,fVar28,uVar30,pfVar31,
                     pfVar25,pfVar23,fVar34);
        }
        local_2c = local_2c + 1;
      } while (local_2c < 0xf);
    }
  }
  local_14 = (float)core_motion_cpp_FUN_005038a0();
  if (local_14 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004cf830(param_1);
  }
  else {
    local_28 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00503e60(&(param_1->base).model.base);
    if ((1.0 < (float)local_28) &&
       (local_1c = (CBoxActor *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (&param_1->pushed_object->base,g_CBoxActorClassInfo.name_hash),
       local_1c != (CBoxActor *)0x0)) {
      core_doc_cpp_FUN_00453cc0();
      local_328 = local_2ec;
      local_3a8[(uint)bVar26 * -2 + 0x21] = local_300[(uint)bVar26 * -2 + 6];
      local_3a8[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x22] =
           local_300[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 7];
      core_actor_cpp_FUN_00408d70();
      local_304 = local_16c;
      local_300[(uint)bVar26 * -2] = afStack_1b0[(uint)bVar26 * -2 + 0x12];
      local_300[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 1] =
           afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x13];
      local_28c = local_304 - local_454.x;
      local_288 = local_300[0] - local_454.y;
      local_284 = local_300[1] - local_454.z;
      local_310.x = local_304 - local_454.x;
      *(float *)((int)&local_310 + (uint)bVar26 * -8 + 4) = local_2a0[(uint)bVar26 * -2 + 6];
      *(float *)((int)&local_310 + (uint)bVar26 * -8 + (uint)bVar26 * -8 + 8) =
           local_2a0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 7];
      local_310.y = 0.0;
      core_actor_cpp_FUN_00408d30();
      local_178 = local_2d4;
      afStack_1b0[(uint)bVar26 * -2 + 0xf] = local_300[(uint)bVar26 * -2 + 0xc];
      afStack_1b0[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x10] =
           local_300[(uint)bVar26 * -2 + (uint)bVar26 * -2 + 0xd];
      if (0.0 < local_170) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_0041cb40(local_1c,&local_454,&local_310);
      }
    }
  }
  core_doc_cpp_FUN_00459ff0(param_1);
  core_doc_cpp_FUN_0045d2c0();
  core_inv_cpp_CInventory_updateInventory_FUN_004dccd0(param_1->inventories);
  core_doc_cpp_FUN_0045dbf0();
  if (local_34 == 0) {
    core_hero_cpp_FUN_004cf200();
  }
  else {
    param_2 = param_1->hero_action_range + param_2;
    param_1->hero_action_range = param_2;
    if ((float)_DAT_005cffb7 < param_2) {
      core_hero_cpp_FUN_004d0780();
    }
  }
  fVar28 = param_1[1].base.base.orient_matrix.m[2].y;
  if ((fVar28 != 0.0) && (*(int *)((int)fVar28 + 0xfc) != 0)) {
    (param_1->base).base.is_transparent = 1;
  }
  iVar20 = sound_sndmain_cpp_FUN_00550b70(param_1[1].base.base.lifecycle_state);
  if (iVar20 == 0) {
    if (g_CGamePtr->goggles_active != 0) {
      sound_sndmain_cpp_killSfx_FUN_00551050((uint)param_1[1].base.base.create_prob);
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_005503a0(1);
      fVar28 = (float)sound_sndmain_cpp_FUN_005506b0();
      param_1[1].base.base.create_prob = fVar28;
      sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(0.0);
      EVar19 = sound_sndmain_cpp_FUN_005506b0();
      param_1[1].base.base.lifecycle_state = EVar19;
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
      sound_sndmain_cpp_setSfxFade_FUN_00551080(param_1[1].base.base.lifecycle_state,1.0,1.0,0);
      if (g_CGamePtr->flashlight_active != 0) {
        g_CGamePtr->flashlight_active = 0;
        (*((param_1->base).base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"flashlit.wav");
        return;
      }
    }
  }
  else if (g_CGamePtr->goggles_active == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050((uint)param_1[1].base.base.create_prob);
    sound_sndmain_cpp_killSfx_FUN_00551050(param_1[1].base.base.lifecycle_state);
    sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
    sound_sndmain_cpp_setNextSfxFlagBits_FUN_005503a0(1);
    sound_sndmain_cpp_FUN_005506b0();
    sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    return;
  }
  return;
}
