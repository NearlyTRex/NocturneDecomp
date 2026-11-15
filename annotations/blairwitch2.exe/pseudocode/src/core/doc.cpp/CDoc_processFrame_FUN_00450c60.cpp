// Name: core_doc.cpp_CDoc_processFrame_FUN_00450c60
// Address: 00450c60
// Address Range: [[00450c60, 00453241]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_processFrame_FUN_00450c60(CDoc *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_processFrame_FUN_00450c60(CDoc *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CDemonActor *pCVar8;
  CLadder *pCVar9;
  CBoxActor *this_ptr_00;
  EWalkState EVar10;
  CCharacter_full_vtable *pCVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  float fVar16;
  CSimpleParticleSystem *pCVar17;
  CMotionController *this_ptr_01;
  SMotion *pSVar18;
  CAmmoBox *this_ptr_02;
  uint uVar19;
  int iVar20;
  CMatrix3x4f *pCVar21;
  uint *puVar22;
  float *pfVar23;
  uint *puVar24;
  CMatrix3x4f *pCVar25;
  float *pfVar26;
  byte bVar27;
  float10 fVar28;
  float afStackY_1cdc [1445];
  float fVar29;
  float fVar30;
  uint uVar31;
  float *pfVar32;
  CCharacter *this_ptr_03;
  CBoundingBox3D *in_stack_fffff9e4;
  CQuaternion4f *quat2_in;
  CDoc *actor;
  CQuaternion4f *quat2_in_00;
  CMatrix3x4f *matrix;
  float fVar33;
  CBoundingBox3D *in_stack_fffff9ec;
  CVector3f *pCVar34;
  CMatrix3x4f local_5e0;
  CMatrix3x4f local_5b0;
  SInteractionInfo local_580;
  float local_560 [6];
  float local_548;
  float local_544;
  float local_540;
  float local_53c;
  float local_538;
  float local_534;
  float local_530;
  float local_52c;
  float local_528;
  float local_524;
  float local_520;
  float local_51c;
  float local_518 [6];
  CQuaternion4f local_500;
  CQuaternion4f local_4f0;
  CQuaternion4f local_4e0;
  CQuaternion4f local_4d0;
  CQuaternion4f local_4c0;
  CQuaternion4f local_4b0;
  CQuaternion4f local_4a0;
  CQuaternion4f local_490;
  CQuaternion4f local_480;
  CQuaternion4f local_470;
  float local_460;
  float local_45c [2];
  CVector3f local_454;
  CVector3f local_448;
  CVector3f local_43c;
  float local_430;
  float local_42c [2];
  CVector3f local_424;
  CVector3f local_418;
  float local_40c;
  float local_408 [2];
  CVector3f local_400;
  CVector3f local_3f4;
  float local_3e8;
  float local_3e4 [4];
  float local_3d4;
  CVector3f local_3d0;
  CVector3f local_3c4;
  UOrientationVector local_3b8;
  float local_3ac;
  float local_3a8 [5];
  CVector3f local_394;
  uint local_388;
  float afStack_384 [2];
  CVector3f local_37c;
  float local_370;
  float afStack_36c [2];
  CVector3f local_364;
  float local_358;
  float local_354 [4];
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  CVector3f local_334;
  CVector3f local_328;
  float local_31c;
  float local_318 [2];
  CVector3f local_310;
  float local_304;
  float local_300 [4];
  float local_2f0;
  float local_2ec;
  CVector3f local_2e0;
  CVector3f local_2d4;
  CVector3f local_2c8;
  uint local_2bc;
  float local_2b8 [2];
  CVector3f local_2b0;
  float local_2a4;
  float local_2a0 [5];
  float local_28c;
  float local_288;
  float local_284;
  CVector3f local_280;
  float local_274;
  float local_270 [2];
  CVector3f local_268;
  CVector3f local_25c;
  float local_250;
  float local_24c [4];
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
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
  CVector3f local_1c0;
  CVector3f local_1b4;
  CVector3f local_1a8;
  CVector3f local_19c;
  float local_190;
  float local_18c [4];
  float local_17c;
  float local_178;
  float local_170;
  CVector3f local_16c;
  float local_160;
  float local_15c [4];
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
  CVector3f local_f4;
  CVector3f local_e8;
  float local_dc;
  float local_d8 [2];
  UOrientationVector local_d0;
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
  int local_38;
  int local_34;
  CSimpleParticleSystem *local_30;
  int local_2c;
  CCharacter_full_vtable *local_28;
  CLadder *local_24;
  float local_20;
  CBoxActor *local_1c;
  CMotionController *local_18;
  float local_14;
  
  bVar27 = 0;
  core_muzzle_cpp_FUN_0059e110(&(this_ptr->base).base.follow_formation,delta_time);
  local_3c = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                       (0x01C38BC0,"?DebugActionPending" + 1);
  pCVar8 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if ((pCVar8 != (CDemonActor *)0x0) && ((this_ptr->carry_object_bbox).max.x < _DAT_005cff6f)) {
    (*((pCVar8->vtable)._ub)->getBoundingBox)(pCVar8,in_stack_fffff9e4);
    pfVar23 = local_518;
    pfVar26 = &local_548;
    for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
      *pfVar26 = *pfVar23;
      pfVar23 = pfVar23 + (uint)bVar27 * -2 + 1;
      pfVar26 = pfVar26 + (uint)bVar27 * -2 + 1;
    }
    if (&this_ptr->carry_object_bbox != (CBoundingBox3D *)&local_548) {
      (this_ptr->carry_object_bbox).min.x = local_548;
      (this_ptr->carry_object_bbox).min.y = local_544;
      (this_ptr->carry_object_bbox).min.z = local_540;
    }
    pCVar34 = &(this_ptr->carry_object_bbox).max;
    if (pCVar34 != (CVector3f *)&local_53c) {
      pCVar34->x = local_53c;
      (this_ptr->carry_object_bbox).max.y = local_538;
      (this_ptr->carry_object_bbox).max.z = local_534;
    }
    local_10c = (this_ptr->carry_object_bbox).min.x + (this_ptr->carry_object_bbox).max.x;
    local_108 = (this_ptr->carry_object_bbox).min.y + (this_ptr->carry_object_bbox).max.y;
    local_104 = (this_ptr->carry_object_bbox).min.z + (this_ptr->carry_object_bbox).max.z;
    local_1e4 = local_10c;
    local_1f8[(uint)bVar27 * -2 + 6] = local_15c[(uint)bVar27 * -2 + 0x15];
    local_1f8[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 7] =
         local_15c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0x16];
    local_31c = local_1e4 * _DAT_005cff73;
    local_318[0] = local_1e0 * _DAT_005cff73;
    local_318[1] = local_1dc * _DAT_005cff73;
    local_418.x = local_1e4 * _DAT_005cff73;
    *(float *)((int)&local_418 + (uint)bVar27 * -8 + 4) = local_318[(uint)bVar27 * -2];
    *(float *)((int)&local_418 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8) =
         local_318[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((this_ptr->base).base.carry_hands[1].carry_actor,&local_418,&local_e8);
    pCVar34 = &local_2c8;
    local_2c8.x = local_e8.x;
    *(uint *)((int)&local_2c8 + (uint)bVar27 * -8 + 4) =
         *(uint *)((int)&local_e8 + (uint)bVar27 * -8 + 4);
    *(uint *)((int)&local_2c8 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8) =
         *(uint *)((int)&local_e8 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
              ((CDemonActor *)this_ptr,pCVar34,&local_394);
    local_430 = local_394.x;
    local_42c[(uint)bVar27 * -2] = *(float *)((int)&local_394 + (uint)bVar27 * -8 + 4);
    local_42c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
         *(float *)((int)&local_394 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
    if (&this_ptr->carry_object_world_center != (CVector3f *)&local_430) {
      (this_ptr->carry_object_world_center).x = local_430;
      (this_ptr->carry_object_world_center).y = local_42c[0];
      (this_ptr->carry_object_world_center).z = local_42c[1];
    }
  }
  core_game_cpp_CGame_slamDT_FUN_004bd460(g_CGamePtr,delta_time);
  fVar29 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar29;
  if (fVar29 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_doc_cpp_FUN_00453cc0();
  pCVar34 = &local_3d0;
  local_3d0.x = local_370;
  *(float *)((int)&local_3d0 + (uint)bVar27 * -8 + 4) = afStack_36c[(uint)bVar27 * -2];
  *(float *)((int)&local_3d0 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8) =
       afStack_36c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,pCVar34,&local_364);
  local_454.x = local_364.x;
  *(uint *)((int)&local_454 + (uint)bVar27 * -8 + 4) =
       *(uint *)((int)&local_364 + (uint)bVar27 * -8 + 4);
  *(uint *)((int)&local_454 + ((uint)bVar27 * -2 + (uint)bVar27 * -2) * 4 + 8) =
       *(uint *)((int)&local_364 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
  core_doc_cpp_FUN_00453250();
  local_44 = 1;
  local_58 = 1;
  local_4c = 1;
  local_34 = 1;
  local_38 = 1;
  if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
    local_44 = 0;
    local_4c = 0;
    local_34 = 0;
    local_38 = 0;
    local_58 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if ((this_ptr->base).pushed_object != (CBoxActor *)0x0) {
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    local_4c = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if (((this_ptr->base).ladder_to_climb != (CLadder *)0x0) ||
     (this_ptr->ladder_to_descend != (CLadder *)0x0)) {
    local_58 = 0;
    local_4c = 0;
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"ladder\n");
    }
  }
  if (((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) || (this_ptr->action_pending == 4))
  {
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"pickup\n");
    }
  }
  pCVar2 = &(this_ptr->base).base.model;
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(&pCVar2->base,0x26);
  if ((((0.0 < local_14) ||
       (local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                             (&pCVar2->base,0x2a), 0.0 < local_14)) ||
      (local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                            (&pCVar2->base,0x2b), 0.0 < local_14)) ||
     ((this_ptr->base).base.hit_points <= 0.0)) {
    local_4c = 0;
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"hurt\n");
    }
  }
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                       (&(this_ptr->base).base.model.base,0x1c);
  if (((0.0 < local_14) || (this_ptr->action_pending == 5)) ||
     ((this_ptr->base).door_to_open != (CDoor *)0x0)) {
    local_38 = 0;
    local_44 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"door\n");
    }
  }
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                       (&(this_ptr->base).base.model.base,0x30);
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
  if (this_ptr->action_pending == 1) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"stashinventory\n");
    }
  }
  if (this_ptr->action_pending == 2) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"placeobject\n");
    }
  }
  if (this_ptr->action_pending == 6) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"putdownobject\n");
    }
  }
  if (this_ptr->action_pending == 3) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"toss\n");
    }
  }
  if (this_ptr->action_pending == 7) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"attackmelee\n");
    }
  }
  if (((this_ptr->base).lever_to_pull != (CLever *)0x0) ||
     (local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                           (&(this_ptr->base).base.model.base,0x21), 0.0 < local_14)) {
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    local_4c = 0;
    if (local_3c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"leverToPull=%s\n");
    }
  }
  if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) {
    if ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0) {
      local_58 = 1;
    }
    if ((this_ptr->base).base.base.location.position.y !=
        (this_ptr->base).base.closest_distance_threshold) {
      local_58 = 1;
    }
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0();
  pCVar2 = &(this_ptr->base).base.model;
  pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar2->base);
  if ((pSVar18->state_index == 4) ||
     (pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar2->base),
     pSVar18->state_index == 5)) {
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.x;
  }
  if ((this_ptr->base).nearby_interactive_actor == (CDemonActor *)0x0) {
    fVar29 = this_ptr->interact_blend - delta_time * (float)_DAT_005cff77 * (float)_DAT_005cff77;
    this_ptr->interact_blend = fVar29;
    if (fVar29 < 0.0) {
      this_ptr->interact_blend = 0.0;
    }
  }
  else {
    fVar29 = delta_time * (float)_DAT_005cff77 + this_ptr->interact_blend;
    this_ptr->interact_blend = fVar29;
    if (1.0 < fVar29) {
      this_ptr->interact_blend = 1.0;
    }
  }
  pCVar9 = (this_ptr->base).ladder_to_climb;
  local_94 = 1;
  if (pCVar9 == (CLadder *)0x0) {
    if (this_ptr->ladder_to_descend == (CLadder *)0x0) {
      pCVar8 = (this_ptr->base).nearby_interactive_actor;
      if (pCVar8 == (CDemonActor *)0x0) {
        pCVar8 = (this_ptr->base).base.grabbed_by;
        if (pCVar8 == (CDemonActor *)0x0) {
          this_ptr_00 = (this_ptr->base).pushed_object;
          if (this_ptr_00 == (CBoxActor *)0x0) {
            iVar20 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                               ((CCharacter *)this_ptr,delta_time);
            pCVar2 = &(this_ptr->base).base.model;
            if (iVar20 == 0) {
              if (local_44 != 0) {
                pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                                    (&pCVar2->base);
                switch(pSVar18->state_index) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  if ((this_ptr->base).base.is_on_ground != 0) {
                    iVar20 = 0;
                    pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                                        (&(this_ptr->base).base.model.base);
                    local_98 = pSVar18->state_index;
                    if ((this_ptr->base).player_input.action_state.walk == 0) {
                      if ((this_ptr->base).player_input.action_state.backup == 0) {
                        fVar29 = (this_ptr->base).player_input.strafe_speed;
                        local_b4 = (double)fVar29;
                        if ((float)_DAT_005cff7f <= fVar29) {
                          if (_DAT_005cff87 < local_b4) {
                            iVar20 = 5;
                          }
                        }
                        else {
                          iVar20 = 4;
                        }
                      }
                      else {
                        iVar20 = 2;
                      }
                    }
                    else if ((this_ptr->base).player_input.action_state.run == 0) {
                      iVar20 = 1;
                    }
                    else {
                      iVar20 = 3;
                    }
                    pCVar2 = &(this_ptr->base).base.model;
                    local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                                         (&pCVar2->base,1);
                    local_28 = (CCharacter_full_vtable *)(local_14 * _DAT_005f514c);
                    local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                                         (&pCVar2->base,3);
                    local_28 = (CCharacter_full_vtable *)
                               (local_14 * _DAT_005f5150 + (float)local_28);
                    local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                                         (&pCVar2->base,2);
                    fVar16 = local_14 * _DAT_005f5154;
                    fVar29 = (this_ptr->base).player_input.strafe_speed;
                    fVar15 = (this_ptr->base).player_input.turn_speed *
                             (this_ptr->base).base.turn_speed;
                    (this_ptr->base).base.turn_angle_accumulator = fVar15;
                    fVar30 = (this_ptr->base).base.turn_angle_accumulator;
                    fVar33 = (this_ptr->base).base.turn_angle_accumulator;
                    fVar4 = (this_ptr->right_arm_aim).aim_yaw;
                    fVar5 = (this_ptr->left_arm_aim).aim_yaw;
                    fVar6 = (this_ptr->right_arm_aim).target_yaw;
                    fVar7 = (this_ptr->left_arm_aim).target_yaw;
                    this_ptr->turn_angle = this_ptr->turn_angle - fVar15;
                    (this_ptr->right_arm_aim).aim_yaw = fVar4 - fVar15;
                    (this_ptr->left_arm_aim).aim_yaw = fVar5 - fVar30;
                    (this_ptr->right_arm_aim).target_yaw = fVar6 - fVar30;
                    fVar30 = (this_ptr->base).base.position_delta.x;
                    (this_ptr->left_arm_aim).target_yaw = fVar7 - fVar33;
                    (this_ptr->base).base.position_delta.x =
                         fVar29 * delta_time * (fVar16 + (float)local_28) + fVar30;
                    if (iVar20 != local_98) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                                (&pCVar2->base,iVar20,1);
                    }
                    if ((this_ptr->base).player_input.action_state.use_item != 0) {
                      core_hero_cpp_CHero_tryUseSelectedItem_FUN_004cfc80(&this_ptr->base);
                    }
                    if (((this_ptr->base).player_input.drop_item != 0) &&
                       (ABS(this_ptr->lantern_tween_pct) == 0.0)) {
                      engine_console_cpp_CConsole_printf_FUN_00436710
                                (g_CConsolePtr,"Dropitem\n");
                      pCVar8 = (this_ptr->base).base.carry_hands[1].carry_actor;
                      (this_ptr->base).target_actor = pCVar8;
                      if ((pCVar8 == (CDemonActor *)0x0) &&
                         (((pCVar8 = (this_ptr->base).inventories[0].selected_items
                                     [(this_ptr->base).inventories[0].current_group],
                           (this_ptr->base).target_actor = pCVar8, pCVar8 != (CDemonActor *)0x0 &&
                           (this_ptr->weapon != (CWeapon *)0x0)) && (this_ptr->guns_drawn != 0)))) {
                        (this_ptr->base).target_actor = (CDemonActor *)0x0;
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
                  (this_ptr->base).base.is_on_ground = 0;
                }
              }
            }
            else {
              EVar10 = (this_ptr->base).base.walk_state;
              if (EVar10 < 2) {
                if (EVar10 == WALK_STATE_WALKING) {
                  iVar20 = 1;
                }
                else {
                  iVar20 = 0;
                }
LAB_004526f0:
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(this_ptr->base).base.model.base,iVar20,1);
              }
              else {
                if (EVar10 < WALK_STATE_NO_PATH) {
                  iVar20 = 3;
                  goto LAB_004526f0;
                }
                if (EVar10 != WALK_STATE_NO_PATH) {
                  iVar20 = 0;
                  goto LAB_004526f0;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar2->base,0,1);
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
            local_24 = pCVar9;
            if ((this_ptr->base).player_input.action_state.fire != 0) {
              (*((this_ptr_00->base).vtable._ub)->getBoundingBox)
                        (&this_ptr_00->base,in_stack_fffff9ec);
              pfVar23 = local_560;
              pfVar26 = &local_530;
              for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
                *pfVar26 = *pfVar23;
                pfVar23 = pfVar23 + (uint)bVar27 * -2 + 1;
                pfVar26 = pfVar26 + (uint)bVar27 * -2 + 1;
              }
              local_300[2] = local_530 + local_524;
              local_300[3] = local_52c + local_520;
              local_2f0 = local_528 + local_51c;
              local_1d8 = local_530 + local_524;
              local_1f8[(uint)bVar27 * -2 + 9] = local_300[(uint)bVar27 * -2 + 3];
              local_1f8[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 10] =
                   local_300[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4];
              local_100 = local_1d8 * _DAT_005cff73;
              local_fc = local_1d4 * _DAT_005cff73;
              local_f8 = local_1d0 * _DAT_005cff73;
              local_1b4.x = local_1d8 * _DAT_005cff73;
              *(float *)((int)&local_1b4 + (uint)bVar27 * -8 + 4) =
                   local_15c[(uint)bVar27 * -2 + 0x18];
              *(float *)((int)&local_1b4 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8) =
                   local_15c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0x19];
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                        (&((this_ptr->base).pushed_object)->base,&local_1b4,&local_3c4);
              pCVar34 = &local_1a8;
              local_1a8.x = local_3c4.x;
              *(uint *)((int)&local_1a8 + (uint)bVar27 * -8 + 4) =
                   *(uint *)((int)&local_3c4 + (uint)bVar27 * -8 + 4);
              *(uint *)((int)&local_1a8 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8) =
                   *(uint *)((int)&local_3c4 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                        ((CDemonActor *)this_ptr,pCVar34,&local_280);
              local_190 = local_280.x;
              local_18c[(uint)bVar27 * -2] = *(float *)((int)&local_280 + (uint)bVar27 * -8 + 4);
              local_18c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
                   *(float *)((int)&local_280 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
              local_2bc = local_1cc;
              local_2b8[(uint)bVar27 * -2] = local_1f8[(uint)bVar27 * -2 + 0xc];
              local_2b8[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
                   local_1f8[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0xd];
              fVar29 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_2b8[0]);
              local_18c[2] = local_524 - local_530;
              local_18c[3] = local_520 - local_52c;
              local_17c = local_51c - local_528;
              local_3e4[2] = local_524 - local_530;
              local_3e4[(uint)bVar27 * -2 + 3] = local_18c[(uint)bVar27 * -2 + 3];
              local_3e4[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4] =
                   local_18c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4];
              local_dc = local_3e4[2] * _DAT_005cff73;
              local_d8[0] = local_3e4[3] * _DAT_005cff73;
              local_d8[1] = local_3d4 * _DAT_005cff73;
              local_274 = local_3e4[2] * _DAT_005cff73;
              local_270[(uint)bVar27 * -2] = local_d8[(uint)bVar27 * -2];
              local_270[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
                   local_d8[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
              local_270[0] = 0.0;
              local_50 = fVar29;
              local_14 = fVar29;
              if (((local_18c[1] - SQRT(local_270[1] * local_270[1] + local_274 * local_274) <
                    (float)_DAT_005cff8f) && (1.0 < local_18c[0])) &&
                 ((local_18c[0] < (float)_DAT_005cff97 && (ABS(fVar29) < (float)_DAT_005cff9f)))) {
                local_68 = delta_time * _DAT_005cffa7;
                if (fVar29 < -local_68) {
                  local_50 = -local_68;
                }
                if (local_68 < local_50) {
                  local_50 = local_68;
                }
                (this_ptr->base).base.base.orient.vec.y =
                     (this_ptr->base).base.base.orient.vec.y + local_50;
                core_charactr_cpp_CCharacter_setOrientation_FUN_00429d60
                          ((CCharacter *)this_ptr,&(this_ptr->base).base.base.orient);
                goto switchD_0045277b_caseD_6;
              }
            }
            if (local_24 == (CLadder *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (&(this_ptr->base).base.model.base,0,1);
              core_hero_cpp_CHero_stopPushingBox_FUN_004cf830(&this_ptr->base);
            }
          }
        }
        else {
          if ((this_ptr->base).base.grabbed_type == 0) {
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                      ((CDemonActor *)this_ptr,&(pCVar8->location).position,&local_25c);
            local_2a0[2] = local_25c.x;
            local_2a0[(uint)bVar27 * -2 + 3] = *(float *)((int)&local_25c + (uint)bVar27 * -8 + 4);
            local_2a0[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4] =
                 *(float *)((int)&local_25c + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
            local_1fc = local_388;
            local_1f8[(uint)bVar27 * -2] = afStack_384[(uint)bVar27 * -2];
            local_1f8[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
                 afStack_384[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_1f8[0]);
            local_40 = local_14;
            if (local_14 < _DAT_005cffab) {
              local_40 = local_14 + _DAT_005cffa7;
            }
            if (_DAT_005cffaf < local_40) {
              local_40 = local_40 + _DAT_005cffb3;
            }
            local_78 = delta_time * _DAT_005cffa7;
            local_88 = -local_78;
            if (local_40 < local_88) {
              local_40 = local_88;
            }
            if (local_78 < local_40) {
              local_40 = local_78;
            }
            (this_ptr->base).base.base.orient.vec.y =
                 (this_ptr->base).base.base.orient.vec.y + local_40;
            core_charactr_cpp_CCharacter_setOrientation_FUN_00429d60
                      ((CCharacter *)this_ptr,&(this_ptr->base).base.base.orient);
          }
          local_9c = (CCharacter *)(this_ptr->base).base.grabbed_by;
          local_28 = (local_9c->base).vtable._uc;
          local_6c = &(this_ptr->base).base.model.base;
          core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                    ((CDeformableModelInstance *)local_6c,0,&local_448);
          pCVar11 = local_28;
          this_ptr_03 = local_9c;
          pCVar34 = &local_2b0;
          local_2b0.x = local_448.x;
          *(uint *)((int)&local_2b0 + (uint)bVar27 * -8 + 4) =
               *(uint *)((int)&local_448 + (uint)bVar27 * -8 + 4);
          actor = this_ptr;
          *(uint *)((int)&local_2b0 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8) =
               *(uint *)((int)&local_448 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
          iVar20 = (*(pCVar11->_uc).attractActorToward)(this_ptr_03,(CDemonActor *)actor,pCVar34);
          this_ptr_01 = local_6c;
          if (iVar20 == 0) {
            (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
          }
          else if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
            fVar29 = this_ptr->grab_timer + delta_time;
            this_ptr->grab_timer = fVar29;
            if ((_DAT_005f5158 <= fVar29) && ((this_ptr->base).base.grabbed_type != 1)) {
              local_28 = (CCharacter_full_vtable *)
                         core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                                   (local_6c,0x24);
              local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                                   (this_ptr_01,0x25);
              if (local_14 + (float)local_28 <= 0.0) {
                (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseFromGrab)
                          ((CCharacter *)this_ptr);
              }
              else if ((this_ptr->base).player_input.action_state.fire != 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr_01,0x25,1);
                (this_ptr->base).player_input.action_state.fire = 0;
              }
            }
            goto switchD_0045277b_caseD_6;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0,1);
        }
      }
      else {
        (*((pCVar8->vtable)._ub)->getInteractionInfo)(pCVar8,&local_580);
        if ((local_580.can_interact == 0) || (this_ptr != (CDoc *)local_580.interacting_actor)) {
          core_hero_cpp_CHero_stopNearbyInteraction_FUN_004cfad0(&this_ptr->base);
        }
        else {
          pCVar8 = ((CHero *)(local_580.interacting_actor)->actor_name)->nearby_interactive_actor;
          puVar22 = (uint *)((int)pCVar8 + (uint)bVar27 * -8 + 0x34);
          local_3b8.vec.x = (pCVar8->orient).vec.x;
          *(uint *)((int)&local_3b8 + (uint)bVar27 * -8 + 4) = *puVar22;
          *(uint *)((int)&local_3b8 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8) =
               puVar22[(uint)bVar27 * -2 + 1];
          local_60 = (this_ptr->base).player_input.turn_speed * _DAT_005cffa7 * (float)_DAT_005cffb7
                     * delta_time;
          if (local_60 < local_580.yaw_min) {
            local_60 = local_580.yaw_min;
          }
          if (local_580.yaw_max < local_60) {
            local_60 = local_580.yaw_max;
          }
          local_3b8.vec.y =
               core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_3b8.vec.y + local_60);
          local_64 = (this_ptr->base).player_input.look_up_down_speed * _DAT_005cffa7 *
                     (float)_DAT_005cffb7 * delta_time;
          if (local_64 < local_580.pitch_min) {
            local_64 = local_580.pitch_min;
          }
          if (local_580.pitch_max < local_64) {
            local_64 = local_580.pitch_max;
          }
          local_14 = local_3b8.vec.y;
          local_3b8.vec.x =
               core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_3b8.vec.x + local_64);
          pCVar8 = (this_ptr->base).nearby_interactive_actor;
          pCVar2 = &(this_ptr->base).base.model;
          local_14 = local_3b8.vec.x;
          iVar20 = (*((pCVar8->vtable)._ub)->updateInteraction)
                             (pCVar8,&local_3b8,&(this_ptr->base).player_input);
          if (iVar20 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar2->base,0,1);
            core_hero_cpp_CHero_stopNearbyInteraction_FUN_004cfad0(&this_ptr->base);
          }
          else {
            local_90 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                 ((((this_ptr->base).nearby_interactive_actor)->orient).vec.y -
                                  (this_ptr->base).base.base.orient.vec.y);
            local_bc = (double)local_90;
            if ((float)_DAT_005cff7f <= local_90) {
              if (local_bc <= _DAT_005cff87) {
                fVar29 = 0.0;
              }
              else {
                fVar29 = 5.60519e-45;
              }
            }
            else {
              fVar29 = 7.00649e-45;
            }
            local_14 = local_90;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&pCVar2->base,(int)fVar29,1);
            fVar29 = local_90;
            puVar22 = (uint *)((int)this_ptr + (uint)bVar27 * -8 + 0x34);
            local_d0.vec.x = (this_ptr->base).base.base.orient.vec.x;
            *(uint *)((int)&local_d0 + (uint)bVar27 * -8 + 4) = *puVar22;
            *(uint *)((int)&local_d0 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8) =
                 puVar22[(uint)bVar27 * -2 + 1];
            local_d0.vec.y = fVar29 * this_ptr->interact_blend + local_d0.vec.y;
            core_charactr_cpp_CCharacter_setOrientation_FUN_00429d60
                      ((CCharacter *)this_ptr,&local_d0);
            local_1c0.z = local_580.approach_offset + (float)_DAT_005cffbf;
            local_1c0.x = 0.0;
            local_1c0.y = 0.0;
            local_28 = (CCharacter_full_vtable *)local_1c0.z;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                      ((this_ptr->base).nearby_interactive_actor,&local_1c0,&local_2e0);
            local_124 = local_2e0.x;
            local_15c[(uint)bVar27 * -2 + 0xf] = *(float *)((int)&local_2e0 + (uint)bVar27 * -8 + 4)
            ;
            local_15c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0x10] =
                 *(float *)((int)&local_2e0 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
            local_28 = (CCharacter_full_vtable *)&this_ptr->interact_blend;
            local_15c[2] = local_124 - (this_ptr->base).base.base.location.position.x;
            local_15c[3] = local_120 - (this_ptr->base).base.base.location.position.y;
            pCVar34 = &local_f4;
            local_14c = local_11c - (this_ptr->base).base.base.location.position.z;
            local_f4.x = local_15c[2];
            *(float *)((int)&local_f4 + (uint)bVar27 * -8 + 4) = local_15c[(uint)bVar27 * -2 + 3];
            *(float *)((int)&local_f4 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8) =
                 local_15c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4];
            core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408d30
                      ((CDemonActor *)this_ptr,pCVar34,&local_400);
            local_24c[2] = local_400.x;
            local_24c[(uint)bVar27 * -2 + 3] = *(float *)((int)&local_400 + (uint)bVar27 * -8 + 4);
            local_24c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4] =
                 *(float *)((int)&local_400 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
            local_3e8 = local_24c[2] * (float)(local_28->_ub).setup;
            pCVar34 = &(this_ptr->base).base.model.accumulated_root_motion;
            local_3e4[0] = local_24c[3] * (float)(local_28->_ub).setup;
            local_3e4[1] = local_23c * (float)(local_28->_ub).setup;
            local_358 = local_3e8;
            local_354[(uint)bVar27 * -2] = local_3e4[(uint)bVar27 * -2];
            local_354[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
                 local_3e4[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
            if (pCVar34 != (CVector3f *)&local_358) {
              pCVar34->x = local_358;
              (this_ptr->base).base.model.accumulated_root_motion.y = local_354[0];
              (this_ptr->base).base.model.accumulated_root_motion.z = local_354[1];
            }
            (this_ptr->base).base.model.accumulated_root_motion.y = 0.0;
          }
        }
      }
    }
    else {
      local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                           (&(this_ptr->base).base.model.base,0x2d);
      if (0.0 < local_14) {
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
          local_54 = 1.0;
        }
        else {
          local_54 = delta_time / this_ptr->ladder_blend_time;
          this_ptr->ladder_blend_time = this_ptr->ladder_blend_time - delta_time;
        }
        pCVar34 = &this_ptr->ladder_offset;
        local_130 = pCVar34->x * local_54;
        pCVar1 = &(this_ptr->base).base.base.location;
        fVar33 = 1.0 - local_54;
        local_12c = (this_ptr->ladder_offset).y * local_54;
        local_128 = (this_ptr->ladder_offset).z * local_54;
        local_354[2] = local_130;
        local_354[(uint)bVar27 * -2 + 3] = local_15c[(uint)bVar27 * -2 + 0xc];
        local_354[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4] =
             local_15c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0xd];
        fVar29 = (this_ptr->base).base.base.location.position.y;
        fVar30 = (this_ptr->base).base.base.location.position.z;
        (pCVar1->position).x = (pCVar1->position).x + local_354[2];
        (this_ptr->base).base.base.location.position.y = fVar29 + local_354[3];
        (this_ptr->base).base.base.location.position.z = fVar30 + local_344;
        pCVar34->x = pCVar34->x * fVar33;
        (this_ptr->ladder_offset).y = (this_ptr->ladder_offset).y * fVar33;
        (this_ptr->ladder_offset).z = (this_ptr->ladder_offset).z * fVar33;
        local_20 = fVar33;
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                             (this_ptr->ladder_facing_angle -
                              (this_ptr->base).base.base.orient.vec.y);
        (this_ptr->base).base.turn_angle_accumulator = local_14 * local_54;
      }
      local_14 = (*((this_ptr->base).base.base.vtable._ub)->cylinderGroundCheck)
                           ((CDemonActor *)this_ptr,(this_ptr->base).base.collision_cylinder_height,
                            (CVector3f *)0x0);
      (this_ptr->base).base.closest_distance_threshold = local_14;
    }
  }
  else {
    local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                         (&(this_ptr->base).base.model.base,0x2c);
    if (0.0 < local_14) {
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                (&((this_ptr->base).ladder_to_climb)->base,
                 &((this_ptr->base).ladder_to_climb)->ladder_size,&local_19c);
      local_220 = local_19c.x;
      local_24c[(uint)bVar27 * -2 + 0xc] = *(float *)((int)&local_19c + (uint)bVar27 * -8 + 4);
      local_24c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0xd] =
           *(float *)((int)&local_19c + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
      if (local_21c + (float)_DAT_005cffc7 < (this_ptr->base).base.base.location.position.y) {
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
        local_5c = 1.0;
      }
      else {
        local_5c = delta_time / this_ptr->ladder_blend_time;
        this_ptr->ladder_blend_time = this_ptr->ladder_blend_time - delta_time;
      }
      pCVar34 = &this_ptr->ladder_offset;
      local_460 = pCVar34->x * local_5c;
      pCVar1 = &(this_ptr->base).base.base.location;
      fVar33 = 1.0 - local_5c;
      local_45c[0] = (this_ptr->ladder_offset).y * local_5c;
      local_45c[1] = (this_ptr->ladder_offset).z * local_5c;
      local_340 = local_460;
      local_354[(uint)bVar27 * -2 + 6] = local_45c[(uint)bVar27 * -2];
      local_354[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 7] =
           local_45c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
      fVar29 = (this_ptr->base).base.base.location.position.y;
      fVar30 = (this_ptr->base).base.base.location.position.z;
      (pCVar1->position).x = (pCVar1->position).x + local_340;
      (this_ptr->base).base.base.location.position.y = fVar29 + local_33c;
      (this_ptr->base).base.base.location.position.z = fVar30 + local_338;
      pCVar34->x = pCVar34->x * fVar33;
      (this_ptr->ladder_offset).y = (this_ptr->ladder_offset).y * fVar33;
      (this_ptr->ladder_offset).z = (this_ptr->ladder_offset).z * fVar33;
      local_7c = fVar33;
      local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                           (this_ptr->ladder_facing_angle - (this_ptr->base).base.base.orient.vec.y)
      ;
      (this_ptr->base).base.turn_angle_accumulator = local_14 * local_5c;
    }
  }
switchD_0045277b_caseD_6:
  pCVar2 = &(this_ptr->base).base.model;
  pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar2->base);
  if ((pSVar18->state_index == 0x1b) &&
     (this_ptr_02 = (CAmmoBox *)
                    core_actor_cpp_castToClassHash_FUN_0040c8f0
                              ((this_ptr->base).object_to_pick_up,g_CAmmoBoxClassInfo.name_hash),
     this_ptr_02 != (CAmmoBox *)0x0)) {
    local_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60(&pCVar2->base);
    core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e600(this_ptr_02,local_14);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_doc_cpp_FUN_00455270();
  if (local_94 != 0) {
    (this_ptr->pending_velocity).z = 0.0;
    (this_ptr->pending_velocity).y = (this_ptr->pending_velocity).z;
    (this_ptr->pending_velocity).x = (this_ptr->pending_velocity).y;
  }
  if (((this_ptr->base).ladder_to_climb == (CLadder *)0x0) &&
     (this_ptr->ladder_to_descend == (CLadder *)0x0)) {
    if (local_58 == 0) goto LAB_004514a7;
    local_18 = &(this_ptr->base).base.model.base;
    pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(local_18);
    fVar29 = 0x41900000 * delta_time;
    pCVar34 = &(this_ptr->base).base.model.accumulated_root_motion;
    iVar20 = pSVar18->state_index;
    pCVar3 = &(this_ptr->base).base.position_delta;
    local_3ac = pCVar34->x + pCVar3->x;
    local_3a8[0] = (this_ptr->base).base.model.accumulated_root_motion.y +
                   (this_ptr->base).base.position_delta.y;
    local_3a8[1] = (this_ptr->base).base.model.accumulated_root_motion.z +
                   (this_ptr->base).base.position_delta.z;
    local_3f4.x = local_3ac;
    *(float *)((int)&local_3f4 + (uint)bVar27 * -8 + 4) = local_3a8[(uint)bVar27 * -2];
    *(float *)((int)&local_3f4 + ((uint)bVar27 * -2 + (uint)bVar27 * -2) * 4 + 8) =
         local_3a8[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar34->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar3->x = (this_ptr->base).base.position_delta.y;
    local_74 = fVar29;
    local_48 = iVar20;
    if (iVar20 == 7) {
      local_3f4.x = 0.0;
      local_3f4.y = 0.0;
      this_ptr->jump_speed = 0x41900000;
      this_ptr->airborne_timer = 0.0;
      local_3f4.z = fVar29;
    }
    else {
      if (iVar20 == 8) {
        fVar33 = (float)_DAT_005cffcf;
        local_3f4.y = 0.0;
        fVar30 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = 0x41900000;
        fVar30 = fVar30 - delta_time * fVar33;
        this_ptr->airborne_timer = 0.0;
        local_3f4.z = fVar29;
        goto LAB_00452ac9;
      }
      if (iVar20 == 9) {
        fVar33 = (float)_DAT_005cffcf;
        local_3f4.x = 0.0;
        local_3f4.y = 0.0;
        fVar30 = 0x40000000 * 0x41900000;
        local_3f4.z = this_ptr->jump_speed * delta_time;
        this_ptr->airborne_timer = 0.0;
        fVar29 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = this_ptr->jump_speed - fVar30 * delta_time;
        fVar30 = this_ptr->jump_speed;
        (this_ptr->base).base.velocity.y = fVar29 - delta_time * fVar33;
        if (fVar30 < 0.0) {
          this_ptr->jump_speed = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_18,0xf,1);
        }
      }
      else if (iVar20 == 10) {
        local_3f4.x = 0.0;
        local_3f4.y = 0.0;
        local_3f4.z = fVar29 * (float)_DAT_005cffb7;
      }
      else if (iVar20 == 0xb) {
        this_ptr->jump_speed = 10.0;
        this_ptr->airborne_timer = 0.0;
      }
      else if (iVar20 == 0xc) {
        local_3f4.z = delta_time * _DAT_005cffd7;
        fVar29 = (float)_DAT_005cffcf;
        fVar30 = (this_ptr->base).base.velocity.y;
        this_ptr->jump_speed = 10.0;
        fVar30 = fVar30 - delta_time * fVar29;
        this_ptr->airborne_timer = 0.0;
LAB_00452ac9:
        local_3f4.x = 0.0;
LAB_00452acb:
        (this_ptr->base).base.velocity.y = fVar30;
      }
      else if (iVar20 == 0xd) {
        local_3f4.x = 0.0;
        local_3f4.y = 0.0;
        local_3f4.z = this_ptr->jump_speed * delta_time;
        fVar33 = (float)_DAT_005cffcf;
        fVar29 = (this_ptr->base).base.velocity.y;
        fVar30 = this_ptr->jump_speed;
        this_ptr->airborne_timer = 0.0;
        (this_ptr->base).base.velocity.y = fVar29 - delta_time * fVar33;
        if (fVar30 < 0.0) {
          this_ptr->jump_speed = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_18,0xf,1);
        }
      }
      else {
        if (iVar20 != 0xe) {
          if (iVar20 == 0xf) {
            local_3f4.z = 0.0;
            local_3f4.y = 0.0;
            fVar30 = (this_ptr->base).base.velocity.y - delta_time * (float)_DAT_005cffcf;
            this_ptr->airborne_timer = 9999.9;
            goto LAB_00452ac9;
          }
          if (iVar20 == 0x10) {
            local_3f4.z = 0.0;
            local_3f4.y = 0.0;
            local_3f4.x = 0.0;
            fVar30 = (this_ptr->base).base.velocity.y - delta_time * (float)_DAT_005cffcf;
          }
          else {
            fVar30 = (this_ptr->base).base.velocity.y - delta_time * (float)_DAT_005cffcf;
          }
          goto LAB_00452acb;
        }
        local_3f4.y = 0.0;
      }
    }
    core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408d30
              ((CDemonActor *)this_ptr,&this_ptr->pending_velocity,&local_268);
    local_118 = local_268.x;
    local_15c[(uint)bVar27 * -2 + 0x12] = *(float *)((int)&local_268 + (uint)bVar27 * -8 + 4);
    local_15c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0x13] =
         *(float *)((int)&local_268 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
    local_40c = (this_ptr->base).base.velocity.x * delta_time;
    pCVar34 = &local_3f4;
    local_408[0] = (this_ptr->base).base.velocity.y * delta_time;
    local_408[1] = (this_ptr->base).base.velocity.z * delta_time;
    local_238 = local_40c;
    local_24c[(uint)bVar27 * -2 + 6] = local_408[(uint)bVar27 * -2];
    local_24c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 7] =
         local_408[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
    local_13c = local_238 + local_118;
    local_138 = local_234 + local_114;
    local_134 = local_230 + local_110;
    local_148 = local_238 + local_118;
    local_15c[(uint)bVar27 * -2 + 6] = local_15c[(uint)bVar27 * -2 + 9];
    local_15c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 7] =
         local_15c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 10];
    local_3f4.x = local_3f4.x + local_148;
    local_3f4.y = local_3f4.y + local_144;
    local_3f4.z = local_3f4.z + local_140;
    this_ptr->fall_velocity_snapshot = (this_ptr->base).base.velocity.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00423a60((CCharacter *)this_ptr,pCVar34);
    if ((this_ptr->base).base.base.location.position.y <
        (this_ptr->base).base.closest_distance_threshold + (float)_DAT_005cffdf) {
      (this_ptr->base).base.is_on_ground = 1;
    }
    if (((local_48 == 0xf) || (local_48 == 9)) || (local_48 == 0xd)) {
      if ((this_ptr->base).base.is_on_ground != 0) {
        engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"Splat at %3.2f fps\n");
        local_70 = -this_ptr->fall_velocity_snapshot;
        local_c4 = (double)local_70;
        if ((float)_DAT_005cffe7 <= local_70) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffff9e4);
          fVar28 = (float10)local_c4;
          fVar12 = (float10)_DAT_005cffef;
          fVar13 = (float10)_DAT_005cfff7;
          fVar14 = (float10)_DAT_005cffff;
          pCVar11 = (this_ptr->base).base.base.vtable._uc;
          (this_ptr->base).invincibility_timer = 0.0;
          (*(pCVar11->_uc).processDamage)((CCharacter *)this_ptr,(SDamageInfo *)&stack0xfffff9e4);
          if (((this_ptr->base).base.hit_points <= 0.0) ||
             (0x42c80000 < (int)(float)((fVar28 + fVar12) * fVar13 * fVar14))) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,0x12,1);
            goto LAB_00452c9a;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0x11,1);
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
                    (&(this_ptr->base).base.model.base,iVar20,1);
        }
LAB_00452c78:
        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)this_ptr,(CVector3f *)&DAT_0265370c,local_70 * _DAT_005d0007 + 1.0
                  );
      }
LAB_00452c9a:
      iVar20 = (this_ptr->base).base.is_on_ground;
      fVar29 = 0x40000000;
    }
    else {
      iVar20 = (this_ptr->base).base.is_on_ground;
      fVar29 = 0x40000000;
    }
    0x40000000 = fVar29;
    if (iVar20 == 0) {
      this_ptr->airborne_timer = this_ptr->airborne_timer + delta_time;
      local_80 = fVar29;
      if (local_48 == 3) {
        local_80 = fVar29 * (float)_DAT_005cff77;
      }
      if ((local_80 < this_ptr->airborne_timer) ||
         (this_ptr->fall_velocity_snapshot < (float)_DAT_005cffef)) {
        if (local_48 != 0xf) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0xf,1);
        }
        (this_ptr->base).base.is_on_ground = 0;
      }
      goto LAB_004514a7;
    }
  }
  else {
    local_28 = (CCharacter_full_vtable *)&(this_ptr->base).base.model.accumulated_root_motion;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
              ((CDemonActor *)this_ptr,(CVector3f *)local_28,&local_424);
    pCVar1 = &(this_ptr->base).base.base.location;
    local_160 = local_424.x;
    local_15c[(uint)bVar27 * -2] = *(float *)((int)&local_424 + (uint)bVar27 * -8 + 4);
    local_15c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
         *(float *)((int)&local_424 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
    fVar29 = (this_ptr->base).base.base.location.position.y;
    fVar30 = (this_ptr->base).base.base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + local_160;
    (this_ptr->base).base.base.location.position.y = fVar29 + local_15c[0];
    (this_ptr->base).base.base.location.position.z = fVar30 + local_15c[1];
    (local_28->_ub).setup = (CDemonActor_setup *)0x0;
    (local_28->_ub).vfunc1 = (CDemonActor_vfunc1 *)(local_28->_ub).setup;
    (local_28->_ub).setup = (CDemonActor_setup *)(local_28->_ub).vfunc1;
  }
  this_ptr->airborne_timer = 0.0;
LAB_004514a7:
  (this_ptr->pending_velocity).z = 0.0;
  (this_ptr->pending_velocity).y = (this_ptr->pending_velocity).z;
  (this_ptr->pending_velocity).x = (this_ptr->pending_velocity).y;
  if (local_44 != 0) {
    if ((this_ptr->base).player_input.action_state.draw != 0) {
      if (this_ptr->guns_drawn == 0) {
        if ((this_ptr->lantern_mode == 0) ||
           (iVar20 = core_actor_cpp_isOfClass_FUN_0040c840
                               (&(this_ptr->base).inventories[0].selected_weapons
                                 [(this_ptr->base).inventories[0].current_group]->base,&DAT_005cff2d
                               ), iVar20 != 0)) {
          this_ptr->guns_drawn = 1;
        }
        else {
          this_ptr->guns_drawn = 0;
        }
      }
      else {
        this_ptr->guns_drawn = 0;
      }
    }
    if (((this_ptr->base).player_input.action_state.light != 0) &&
       (iVar20 = core_doc_cpp_FUN_0045df30(), iVar20 == 0)) {
      if (this_ptr->lantern_mode == 0) {
        this_ptr->lantern_mode = 1;
      }
      else {
        this_ptr->lantern_mode = 0;
      }
    }
  }
  if (local_4c != 0) {
    core_doc_cpp_FUN_0045bdc0();
  }
  if (this_ptr->guns_drawn == 0) {
    fVar29 = this_ptr->guns_drawn_blend - delta_time / _DAT_005f5120;
    this_ptr->guns_drawn_blend = fVar29;
    if (fVar29 < 0.0) {
      this_ptr->guns_drawn_blend = 0.0;
    }
  }
  else {
    fVar29 = delta_time / _DAT_005f511c + this_ptr->guns_drawn_blend;
    this_ptr->guns_drawn_blend = fVar29;
    if (1.0 < fVar29) {
      this_ptr->guns_drawn_blend = 1.0;
    }
  }
  fVar29 = (this_ptr->right_arm_aim).recoil_timer - delta_time / _DAT_005f5124;
  (this_ptr->right_arm_aim).recoil_timer = fVar29;
  if (fVar29 <= 0.0) {
    (this_ptr->right_arm_aim).recoil_timer = 0.0;
  }
  fVar29 = (this_ptr->left_arm_aim).recoil_timer - delta_time / _DAT_005f5124;
  (this_ptr->left_arm_aim).recoil_timer = fVar29;
  if (fVar29 <= 0.0) {
    (this_ptr->left_arm_aim).recoil_timer = 0.0;
  }
  if (local_34 != 0) {
    core_doc_cpp_FUN_0045c960();
  }
  core_doc_cpp_FUN_00453d80();
  core_doc_cpp_CDoc_updateArmRecoilBlend_FUN_0045b510(this_ptr,delta_time,local_38);
  core_doc_cpp_FUN_0045db40();
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429420
            ((CCharacter *)this_ptr,delta_time,0);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
            (&(this_ptr->base).base.model);
  fVar29 = *(float *)&(this_ptr->base).base.base.field_0x2a8 - delta_time;
  *(float *)&(this_ptr->base).base.base.field_0x2a8 = fVar29;
  if (fVar29 <= 0.0) {
    local_8c = (this_ptr->base).base.base.particle_systems;
    iVar20 = core_bwspart_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(local_8c);
    if (iVar20 != 0) {
      core_xform_cpp_transformVector3x4_FUN_00591530
                ((CVector3f *)&DAT_0265370c,
                 (CMatrix3x4f *)
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices[_DAT_01b4d29c].m,
                 &local_334);
      pCVar17 = local_8c;
      local_214 = local_334.x;
      local_24c[(uint)bVar27 * -2 + 0xf] = *(float *)((int)&local_334 + (uint)bVar27 * -8 + 4);
      local_24c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 0x10] =
           *(float *)((int)&local_334 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
      local_30 = pCVar17;
      *(uint *)&(this_ptr->base).base.base.field_0x2a8 = 0x3dcccccd;
      local_2c = 0;
      do {
        iVar20 = core_bwgrndma_cpp_FUN_005a7ed0();
        if (iVar20 != 0) {
          local_a4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          local_14 = local_a4;
          local_a0 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          local_14 = local_a0;
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          core_xform_cpp_quaternionFromAngleZ_FUN_00594020(local_14,&local_500);
          quat2_in_00 = &local_4e0;
          local_4e0.w = local_500.w;
          puVar24 = (uint *)((int)&local_4e0 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
          puVar22 = (uint *)((int)&local_500 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
          *(uint *)((int)&local_4e0 + (uint)bVar27 * -8 + 4) =
               *(uint *)((int)&local_500 + (uint)bVar27 * -8 + 4);
          *puVar24 = *puVar22;
          puVar24[(uint)bVar27 * -2 + 1] = puVar22[(uint)bVar27 * -2 + 1];
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_a0,&local_480);
          quat2_in = &local_490;
          local_490.w = local_480.w;
          puVar24 = (uint *)((int)&local_490 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
          puVar22 = (uint *)((int)&local_480 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
          *(uint *)((int)&local_490 + (uint)bVar27 * -8 + 4) =
               *(uint *)((int)&local_480 + (uint)bVar27 * -8 + 4);
          *puVar24 = *puVar22;
          puVar24[(uint)bVar27 * -2 + 1] = puVar22[(uint)bVar27 * -2 + 1];
          core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_a4,&local_4c0);
          local_4b0.w = local_4c0.w;
          puVar24 = (uint *)((int)&local_4b0 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
          puVar22 = (uint *)((int)&local_4c0 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
          *(uint *)((int)&local_4b0 + (uint)bVar27 * -8 + 4) =
               *(uint *)((int)&local_4c0 + (uint)bVar27 * -8 + 4);
          *puVar24 = *puVar22;
          puVar24[(uint)bVar27 * -2 + 1] = puVar22[(uint)bVar27 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_4b0,quat2_in,&local_470);
          local_4d0.w = local_470.w;
          puVar24 = (uint *)((int)&local_4d0 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
          puVar22 = (uint *)((int)&local_470 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
          *(uint *)((int)&local_4d0 + (uint)bVar27 * -8 + 4) =
               *(uint *)((int)&local_470 + (uint)bVar27 * -8 + 4);
          *puVar24 = *puVar22;
          puVar24[(uint)bVar27 * -2 + 1] = puVar22[(uint)bVar27 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_4d0,quat2_in_00,&local_4f0);
          local_4a0.w = local_4f0.w;
          puVar24 = (uint *)((int)&local_4a0 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
          puVar22 = (uint *)((int)&local_4f0 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
          *(uint *)((int)&local_4a0 + (uint)bVar27 * -8 + 4) =
               *(uint *)((int)&local_4f0 + (uint)bVar27 * -8 + 4);
          *puVar24 = *puVar22;
          puVar24[(uint)bVar27 * -2 + 1] = puVar22[(uint)bVar27 * -2 + 1];
          core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&local_4a0,&local_5b0);
          matrix = &local_5e0;
          pCVar21 = &local_5b0;
          pCVar25 = &local_5e0;
          for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
            pCVar25->m[0].w = pCVar21->m[0].w;
            pCVar21 = (CMatrix3x4f *)((int)pCVar21 + ((uint)bVar27 * -2 + 1) * 4);
            pCVar25 = (CMatrix3x4f *)((int)pCVar25 + ((uint)bVar27 * -2 + 1) * 4);
          }
          local_43c.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
          local_43c.x = 0.0;
          local_43c.z = 0.0;
          local_84 = local_43c.y;
          local_14 = local_43c.y;
          core_xform_cpp_transformVector3x4_FUN_00591530(&local_43c,matrix,&local_37c);
          pfVar23 = local_24c + 0x11;
          local_208 = 0.0;
          local_204 = 0x40a00000;
          local_200 = 0;
          local_250 = local_37c.x;
          local_24c[(uint)bVar27 * -2] = *(float *)((int)&local_37c + (uint)bVar27 * -8 + 4);
          local_24c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
               *(float *)((int)&local_37c + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
          fVar33 = 0.0;
          pfVar26 = local_3a8 + 2;
          local_1f8[2] = local_250 + local_214;
          local_1f8[3] = local_24c[0] + local_210;
          local_1e8 = local_24c[1] + local_20c;
          local_22c = local_250 + local_214;
          local_24c[(uint)bVar27 * -2 + 9] = local_1f8[(uint)bVar27 * -2 + 3];
          local_24c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 10] =
               local_1f8[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4];
          pfVar32 = local_24c + 8;
          uVar31 = 0;
          fVar30 = 0.2;
          local_2a4 = local_22c - local_214;
          local_2a0[0] = local_228 - local_210;
          local_2a0[1] = local_224 - local_20c;
          fVar29 = 0.0;
          local_3a8[2] = local_22c - local_214;
          local_3a8[(uint)bVar27 * -2 + 3] = local_2a0[(uint)bVar27 * -2];
          local_3a8[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 4] =
               local_2a0[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1];
          fVar29 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar29,fVar30);
          local_14 = fVar29;
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.4);
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (local_30,0x3f19999a,0x3f800000,0,0x3f333333,0,local_14,fVar29,uVar31,pfVar32,
                     pfVar26,pfVar23,fVar33);
        }
        local_2c = local_2c + 1;
      } while (local_2c < 0xf);
    }
  }
  pCVar2 = &(this_ptr->base).base.model;
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(&pCVar2->base,6);
  if (local_14 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004cf830(&this_ptr->base);
  }
  else {
    local_28 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60(&pCVar2->base);
    if ((1.0 < (float)local_28) &&
       (local_1c = (CBoxActor *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (&((this_ptr->base).pushed_object)->base,g_CBoxActorClassInfo.name_hash
                             ), local_1c != (CBoxActor *)0x0)) {
      core_doc_cpp_FUN_00453cc0();
      pCVar34 = &local_328;
      local_328.x = local_2ec;
      *(float *)((int)&local_328 + (uint)bVar27 * -8 + 4) = local_300[(uint)bVar27 * -2 + 6];
      *(float *)((int)&local_328 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8) =
           local_300[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 7];
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar34,&local_16c);
      local_304 = local_16c.x;
      local_300[(uint)bVar27 * -2] = *(float *)((int)&local_16c + (uint)bVar27 * -8 + 4);
      local_300[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 1] =
           *(float *)((int)&local_16c + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
      local_28c = local_304 - local_454.x;
      local_288 = local_300[0] - local_454.y;
      local_284 = local_300[1] - local_454.z;
      local_310.x = local_304 - local_454.x;
      *(float *)((int)&local_310 + (uint)bVar27 * -8 + 4) = local_2a0[(uint)bVar27 * -2 + 6];
      *(float *)((int)&local_310 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8) =
           local_2a0[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 7];
      local_310.y = 0.0;
      core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408d30
                ((CDemonActor *)this_ptr,&local_310,&local_2d4);
      local_178 = local_2d4.x;
      local_18c[(uint)bVar27 * -2 + 6] = *(float *)((int)&local_2d4 + (uint)bVar27 * -8 + 4);
      local_18c[(uint)bVar27 * -2 + (uint)bVar27 * -2 + 7] =
           *(float *)((int)&local_2d4 + (uint)bVar27 * -8 + (uint)bVar27 * -8 + 8);
      if (0.0 < local_170) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_0041cb40(local_1c,&local_454,&local_310);
      }
    }
  }
  core_doc_cpp_CDoc_autoAimAtThreat_FUN_00459ff0(this_ptr,0,delta_time);
  core_doc_cpp_FUN_0045d2c0();
  core_inv_cpp_CInventory_updateInventory_FUN_004dccd0((this_ptr->base).inventories);
  core_doc_cpp_FUN_0045dbf0();
  if (local_34 == 0) {
    core_hero_cpp_FUN_004cf200();
  }
  else {
    fVar29 = (this_ptr->base).hero_action_range + delta_time;
    (this_ptr->base).hero_action_range = fVar29;
    if ((float)_DAT_005cffb7 < fVar29) {
      core_hero_cpp_FUN_004d0780();
    }
  }
  if ((this_ptr->weapon != (CWeapon *)0x0) && ((this_ptr->weapon->base).is_transparent != 0)) {
    (this_ptr->base).base.base.is_transparent = 1;
  }
  iVar20 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->goggle_sfx_handles[0]);
  if (iVar20 == 0) {
    if (g_CGamePtr->goggles_active != 0) {
      sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->goggle_sfx_handles[1]);
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_005503a0(1);
      uVar19 = sound_sndmain_cpp_startSfx_FUN_005506b0("goggle-on.wav");
      this_ptr->goggle_sfx_handles[1] = uVar19;
      sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(0.0);
      uVar19 = sound_sndmain_cpp_startSfx_FUN_005506b0("goggle-loop.wav");
      this_ptr->goggle_sfx_handles[0] = uVar19;
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
      sound_sndmain_cpp_setSfxFade_FUN_00551080(this_ptr->goggle_sfx_handles[0],1.0,1.0,0);
      if (g_CGamePtr->flashlight_active != 0) {
        g_CGamePtr->flashlight_active = 0;
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"flashlit.wav");
        return;
      }
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
