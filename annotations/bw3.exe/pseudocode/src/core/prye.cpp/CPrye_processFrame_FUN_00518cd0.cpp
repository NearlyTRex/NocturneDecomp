// Name: core_prye.cpp_CPrye_processFrame_FUN_00518cd0
// Address: 00518cd0
// Address Range: [[00518cd0, 0051b54d]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_processFrame_FUN_00518cd0(CPrye *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_processFrame_FUN_00518cd0(CPrye *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  CLadder *pCVar4;
  CWeapon *pCVar5;
  CBoxActor *this_ptr_00;
  EWalkState EVar6;
  uint uVar7;
  CCharacter_full_vtable *pCVar8;
  float fVar9;
  CGame *pCVar10;
  float fVar11;
  SMotion *pSVar12;
  CAmmoBox *this_ptr_01;
  CDemonActor *pCVar13;
  int iVar14;
  int desired_state_index;
  UOrientationVector *unaff_ESI;
  float *pfVar15;
  uint *puVar16;
  float *pfVar17;
  uint *puVar18;
  byte bVar19;
  float afStackY_13b8 [944];
  CBoundingBox3D *in_stack_fffffb10;
  CPrye *this_ptr_02;
  CVector3f *pCVar21;
  ulonglong uVar20;
  UOrientationVector *in_stack_fffffb18;
  UOrientationVector *in_stack_fffffb1c;
  CVector3f *pCVar22;
  float fStack_4a0;
  float fStack_49c;
  float fStack_494;
  SDamageInfo SStack_48c;
  SInteractionInfo SStack_450;
  float fStack_430;
  float fStack_42c;
  uint auStack_428 [4];
  uint auStack_418 [2];
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f0 [2];
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  CVector3f aCStack_3d0 [2];
  byte auStack_3b0 [8];
  float afStack_3a8 [4];
  float fStack_398;
  float fStack_38c;
  float afStack_388 [3];
  CVector3f CStack_37c;
  float fStack_370;
  float afStack_36c [7];
  CVector3f CStack_350;
  float fStack_344;
  CVector3f CStack_340;
  CVector3f CStack_334;
  float fStack_320;
  float afStack_31c [4];
  float fStack_30c;
  float fStack_308;
  CVector3f aCStack_304 [2];
  CVector3f CStack_2ec;
  float afStack_2e0 [3];
  CVector3f CStack_2d4;
  float fStack_2c8;
  float fStack_2c4;
  float afStack_2c0 [3];
  UOrientationVector UStack_2b4;
  float fStack_2a4;
  float afStack_2a0 [5];
  byte auStack_28c [12];
  float afStack_280 [4];
  float fStack_270;
  float fStack_26c;
  CVector3f aCStack_268 [2];
  float fStack_248;
  float afStack_244 [2];
  byte auStack_23c [8];
  float afStack_234 [2];
  CVector3f CStack_22c;
  float fStack_220;
  float fStack_21c;
  float afStack_218 [3];
  CVector3f aCStack_20c [2];
  CVector3f CStack_1f4;
  float fStack_1e4;
  float afStack_1e0 [2];
  CVector3f CStack_1d8;
  CVector3f CStack_1cc;
  float fStack_1c0;
  float afStack_1bc [4];
  float fStack_1ac;
  CVector3f CStack_1a8;
  float fStack_19c;
  float afStack_198 [2];
  CVector3f CStack_190;
  float fStack_184;
  float fStack_180;
  float afStack_17c [4];
  float afStack_16c [5];
  float fStack_158;
  float fStack_154;
  float afStack_150 [2];
  byte auStack_148 [12];
  CVector3f CStack_13c;
  float fStack_130;
  float afStack_12c [2];
  CVector3f CStack_124;
  float fStack_118;
  float afStack_114 [4];
  float fStack_104;
  float fStack_f8;
  CVector3f CStack_f4;
  CVector3f aCStack_e8 [2];
  CVector3f CStack_d0;
  float afStack_c4 [5];
  CVector3f CStack_b0;
  float fStack_a4;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  CVector3f CStack_80;
  CCharacter *pCStack_74;
  CLadder *pCStack_70;
  int iStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int iStack_48;
  float fStack_3c;
  float fStack_38;
  int local_34;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  CCharacter_full_vtable *pCStack_20;
  float fStack_1c;
  CBoxActor *pCStack_18;
  CDeformableModelInstance *pCStack_14;
  
  bVar19 = 0;
  local_34 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                       (0x01C6E360,"?DebugActionPending" + 1);
  pCVar13 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if ((pCVar13 != (CDemonActor *)0x0) && ((this_ptr->carry_object_bbox).max.x < _DAT_005cd147)) {
    (*((pCVar13->vtable)._ub)->getBoundingBox)(pCVar13,in_stack_fffffb10);
    pfVar15 = &fStack_400;
    pfVar17 = local_3f0;
    for (iVar14 = 6; iVar14 != 0; iVar14 = iVar14 + -1) {
      *pfVar17 = *pfVar15;
      pfVar15 = pfVar15 + (uint)bVar19 * -2 + 1;
      pfVar17 = pfVar17 + (uint)bVar19 * -2 + 1;
    }
    if (&this_ptr->carry_object_bbox != (CBoundingBox3D *)&fStack_3e8) {
      (this_ptr->carry_object_bbox).min.x = fStack_3e8;
      (this_ptr->carry_object_bbox).min.y = fStack_3e4;
      (this_ptr->carry_object_bbox).min.z = fStack_3e0;
    }
    pCVar22 = &(this_ptr->carry_object_bbox).max;
    if (pCVar22 != (CVector3f *)&fStack_3dc) {
      pCVar22->x = fStack_3dc;
      (this_ptr->carry_object_bbox).max.y = fStack_3d8;
      (this_ptr->carry_object_bbox).max.z = fStack_3d4;
    }
    afStack_16c[0] = (this_ptr->carry_object_bbox).min.x + (this_ptr->carry_object_bbox).max.x;
    afStack_16c[1] = (this_ptr->carry_object_bbox).min.y + (this_ptr->carry_object_bbox).max.y;
    afStack_16c[2] = (this_ptr->carry_object_bbox).min.z + (this_ptr->carry_object_bbox).max.z;
    afStack_114[2] = afStack_16c[0];
    afStack_114[(uint)bVar19 * -2 + 3] = afStack_16c[(uint)bVar19 * -2 + 1];
    afStack_114[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
         afStack_16c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 2];
    fStack_19c = afStack_114[2] * _DAT_005cd14b;
    afStack_198[0] = afStack_114[3] * _DAT_005cd14b;
    afStack_198[1] = fStack_104 * _DAT_005cd14b;
    CStack_22c.x = afStack_114[2] * _DAT_005cd14b;
    *(float *)((int)&CStack_22c + (uint)bVar19 * -8 + 4) = afStack_198[(uint)bVar19 * -2];
    *(float *)((int)&CStack_22c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
         afStack_198[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              ((this_ptr->base).base.carry_hands[1].carry_actor,&CStack_22c,&CStack_190);
    pCVar22 = &CStack_f4;
    CStack_f4.x = CStack_190.x;
    *(uint *)((int)aCStack_e8 + (uint)bVar19 * -8 + -8) =
         *(uint *)((int)&CStack_190 + (uint)bVar19 * -8 + 4);
    *(uint *)((int)aCStack_e8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + -4) =
         *(uint *)((int)&CStack_190 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
              ((CDemonActor *)this_ptr,pCVar22,&CStack_1a8);
    afStack_388[0] = CStack_1a8.x;
    afStack_388[(uint)bVar19 * -2 + 1] = *(float *)((int)&CStack_1a8 + (uint)bVar19 * -8 + 4);
    afStack_388[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 2] =
         *(float *)((int)&CStack_1a8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
    if (&this_ptr->carry_object_world_center != (CVector3f *)afStack_388) {
      (this_ptr->carry_object_world_center).x = afStack_388[0];
      (this_ptr->carry_object_world_center).y = afStack_388[1];
      (this_ptr->carry_object_world_center).z = afStack_388[2];
    }
  }
  core_game_cpp_CGame_slamDT_FUN_004bf3a0(g_CGamePtr,delta_time);
  core_charactr_cpp_CCharacter_processSmoking_FUN_00433c60((CCharacter *)this_ptr,delta_time);
  fVar11 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar11;
  if (fVar11 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_prye_cpp_CPrye_getHandsMidpoint_FUN_0051c100(this_ptr,(CVector3f *)(auStack_3b0 + 4));
  pCVar22 = aCStack_268;
  aCStack_268[0].x = (float)auStack_3b0._4_4_;
  *(float *)((int)aCStack_268 + (uint)bVar19 * -8 + 4) = afStack_3a8[(uint)bVar19 * -2];
  *(float *)((int)aCStack_268 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
       afStack_3a8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            ((CDemonActor *)this_ptr,pCVar22,&CStack_94);
  aCStack_3d0[0].x = CStack_94.x;
  *(uint *)((int)aCStack_3d0 + ((uint)bVar19 * -2 + -1) * 4 + 8) =
       *(uint *)((int)&CStack_94 + (uint)bVar19 * -8 + 4);
  this_ptr_02 = this_ptr;
  fVar11 = delta_time;
  *(uint *)((int)aCStack_3d0 + ((uint)bVar19 * -2 + (uint)bVar19 * -2) * 4 + 8) =
       *(uint *)((int)&CStack_94 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
  core_prye_cpp_CPrye_processMotionEvents_FUN_0051b550(this_ptr_02,fVar11);
  local_34 = 1;
  fStack_3c = 1.4013e-45;
  fStack_38 = 1.4013e-45;
  iStack_24 = 1;
  iStack_28 = 1;
  if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
    local_34 = 0;
    fStack_38 = 0.0;
    iStack_24 = 0;
    iStack_28 = 0;
    fStack_3c = 0.0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if ((this_ptr->base).pushed_object != (CBoxActor *)0x0) {
    iStack_24 = 0;
    iStack_28 = 0;
    local_34 = 0;
    fStack_38 = 0.0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if (((this_ptr->base).ladder_to_climb != (CLadder *)0x0) ||
     (this_ptr->ladder_to_descend != (CLadder *)0x0)) {
    fStack_3c = 0.0;
    fStack_38 = 0.0;
    iStack_24 = 0;
    iStack_28 = 0;
    local_34 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"ladder\n");
    }
  }
  if (((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) ||
     ((this_ptr->base).action_pending == 4)) {
    iStack_24 = 0;
    iStack_28 = 0;
    local_34 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"pickup\n");
    }
  }
  pCVar2 = &(this_ptr->base).base.model;
  fVar11 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&pCVar2->base,0x31);
  if ((((0.0 < fVar11) ||
       (fVar11 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                           (&pCVar2->base,0x35), 0.0 < fVar11)) ||
      (fVar11 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                          (&pCVar2->base,0x36), 0.0 < fVar11)) ||
     ((this_ptr->base).base.hit_points <= 0.0)) {
    fStack_38 = 0.0;
    iStack_24 = 0;
    iStack_28 = 0;
    local_34 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"hurt\n");
    }
  }
  fVar11 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                     (&(this_ptr->base).base.model.base,0x2a);
  if (((0.0 < fVar11) || ((this_ptr->base).action_pending == 5)) ||
     ((this_ptr->base).door_to_open != (CDoor *)0x0)) {
    iStack_28 = 0;
    local_34 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"door\n");
    }
  }
  fVar11 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                     (&(this_ptr->base).base.model.base,0x2b);
  if (((0.0 < fVar11) || ((this_ptr->base).action_pending == 5)) ||
     ((this_ptr->base).door_to_open != (CDoor *)0x0)) {
    iStack_28 = 0;
    local_34 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"door\n");
    }
  }
  pCVar2 = &(this_ptr->base).base.model;
  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base);
  if ((((((pSVar12->state_index != 0x2a) &&
         (pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base),
         pSVar12->state_index != 0x2b)) &&
        (pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base),
        pSVar12->state_index != 0x28)) &&
       ((pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base),
        pSVar12->state_index != 0x29 &&
        (pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base),
        pSVar12->state_index != 0x27)))) &&
      ((iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x2a &&
       ((iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x2b &&
        (iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x28)))))) &&
     ((iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x29 &&
      (iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x27)))) {
    if ((this_ptr->base).action_pending == 5) {
      (this_ptr->base).action_pending = 0;
    }
    if ((this_ptr->base).door_to_open != (CDoor *)0x0) {
      (this_ptr->base).door_to_open = (CDoor *)0x0;
    }
  }
  pCVar2 = &(this_ptr->base).base.model;
  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base);
  if ((((pSVar12->state_index != 0x20) &&
       (pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base),
       pSVar12->state_index != 0x1e)) &&
      (pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base),
      pSVar12->state_index != 0x22)) &&
     (((pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base),
       pSVar12->state_index != 0x23 && (iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x20)) &&
      ((iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x1e &&
       ((iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x22 &&
        (iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x23)))))))) {
    if ((this_ptr->base).action_pending == 4) {
      (this_ptr->base).action_pending = 0;
    }
    if ((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) {
      (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
    }
  }
  fVar11 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                     (&(this_ptr->base).base.model.base,0x3b);
  if (0.0 < fVar11) {
    fStack_38 = 0.0;
    iStack_24 = 0;
    fStack_3c = 0.0;
    iStack_28 = 0;
    local_34 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"sitting\n");
    }
  }
  if ((this_ptr->base).action_pending == 1) {
    iStack_28 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"stashinventory\n");
    }
  }
  iVar14 = (this_ptr->base).action_pending;
  if ((iVar14 == 8) || (iVar14 == 9)) {
    iStack_28 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"stashinventory\n");
    }
  }
  if ((this_ptr->base).action_pending == 2) {
    iStack_28 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"placeobject\n");
    }
  }
  if ((this_ptr->base).action_pending == 6) {
    iStack_28 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"putdownobject\n");
    }
  }
  if ((this_ptr->base).action_pending == 3) {
    iStack_28 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"toss\n");
    }
  }
  if ((this_ptr->base).action_pending == 7) {
    iStack_28 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"attackmelee\n");
    }
  }
  if (((this_ptr->base).lever_to_pull != (CLever *)0x0) ||
     (fVar11 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                         (&(this_ptr->base).base.model.base,0x2c), 0.0 < fVar11)) {
    iStack_24 = 0;
    iStack_28 = 0;
    local_34 = 0;
    fStack_38 = 0.0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"leverToPull=%s\n");
    }
  }
  if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) {
    if ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0) {
      fStack_3c = 1.4013e-45;
    }
    if ((this_ptr->base).base.base.location.position.y !=
        (this_ptr->base).base.closest_distance_threshold) {
      fStack_3c = 1.4013e-45;
    }
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr);
  if ((this_ptr->base).nearby_interactive_actor == (CDemonActor *)0x0) {
    fVar11 = this_ptr->interact_blend - delta_time * (float)_DAT_005cd14f * (float)_DAT_005cd14f;
    this_ptr->interact_blend = fVar11;
    if (fVar11 < 0.0) {
      this_ptr->interact_blend = 0.0;
    }
  }
  else {
    fVar11 = delta_time * (float)_DAT_005cd14f + this_ptr->interact_blend;
    this_ptr->interact_blend = fVar11;
    if (1.0 < fVar11) {
      this_ptr->interact_blend = 1.0;
    }
  }
  pCVar4 = (this_ptr->base).ladder_to_climb;
  iStack_68 = 1;
  if (pCVar4 == (CLadder *)0x0) {
    if (this_ptr->ladder_to_descend == (CLadder *)0x0) {
      pCVar13 = (this_ptr->base).nearby_interactive_actor;
      if (pCVar13 == (CDemonActor *)0x0) {
        if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) {
          if ((this_ptr->base).pushed_object == (CBoxActor *)0x0) {
            iVar14 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                               ((CCharacter *)this_ptr,delta_time);
            pCVar2 = &(this_ptr->base).base.model;
            if (iVar14 == 0) {
              if (local_34 != 0) {
                pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                    (&pCVar2->base);
                uVar7 = pSVar12->state_index;
                if ((((((uVar7 < 8) || (uVar7 < 9)) || (uVar7 < 0xd)) ||
                     ((uVar7 < 0xe || (uVar7 < 0xf)))) || (uVar7 < 0x10)) ||
                   ((uVar7 < 0x11 || (uVar7 == 0x7a)))) {
                  if ((this_ptr->base).base.is_on_ground != 0) {
                    pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                        (&(this_ptr->base).base.model.base);
                    iVar14 = pSVar12->state_index;
                    desired_state_index = 0;
                    if ((this_ptr->base).player_input.action_state.walk == 0) {
                      if ((this_ptr->base).player_input.action_state.backup == 0) {
                        fVar11 = (this_ptr->base).player_input.strafe_speed;
                        if ((float)_DAT_005cd157 <= fVar11) {
                          if (_DAT_005cd15f < (double)fVar11) {
                            if ((this_ptr->base).player_input.action_state.run == 0) {
                              desired_state_index = 6;
                            }
                            else {
                              desired_state_index = 8;
                            }
                          }
                        }
                        else if ((this_ptr->base).player_input.action_state.run == 0) {
                          desired_state_index = 5;
                        }
                        else {
                          desired_state_index = 7;
                        }
                      }
                      else if ((this_ptr->base).player_input.action_state.run == 0) {
                        fVar11 = (this_ptr->base).player_input.strafe_speed;
                        if ((float)_DAT_005cd157 <= fVar11) {
                          if ((double)fVar11 <= _DAT_005cd15f) {
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
                        fVar11 = (this_ptr->base).player_input.strafe_speed;
                        if ((float)_DAT_005cd157 <= fVar11) {
                          if ((double)fVar11 <= _DAT_005cd15f) {
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
                    else if ((this_ptr->base).player_input.action_state.run == 0) {
                      fVar11 = (this_ptr->base).player_input.strafe_speed;
                      if ((float)_DAT_005cd157 <= fVar11) {
                        if ((double)fVar11 <= _DAT_005cd15f) {
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
                      fVar11 = (this_ptr->base).player_input.strafe_speed;
                      if ((float)_DAT_005cd157 <= fVar11) {
                        if ((double)fVar11 <= _DAT_005cd15f) {
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
                    if (((this_ptr->base).player_input.action_state.quick_turn != 0) &&
                       ((this_ptr->base).base.layer_action_index != 0x11)) {
                      this_ptr->quick_turn_angle = 0.0;
                      this_ptr->quick_turn_active = 1;
                    }
                    if (this_ptr->quick_turn_active == 0) {
                      fVar11 = (this_ptr->base).player_input.turn_speed *
                               (this_ptr->base).base.turn_speed;
                      (this_ptr->base).base.turn_angle_accumulator = fVar11;
                      this_ptr->turn_angle = this_ptr->turn_angle - fVar11;
                    }
                    if ((this_ptr->base).action_pending == 5) {
                      (this_ptr->base).action_pending = 0;
                    }
                    if ((this_ptr->base).door_to_open != (CDoor *)0x0) {
                      (this_ptr->base).door_to_open = (CDoor *)0x0;
                    }
                    if (desired_state_index != iVar14) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                                (&(this_ptr->base).base.model.base,desired_state_index,1);
                    }
                    if ((this_ptr->base).player_input.action_state.use_item != 0) {
                      core_hero_cpp_CHero_tryUseSelectedItem_FUN_004d3c90(&this_ptr->base);
                    }
                  }
                  iStack_68 = 0;
                }
              }
            }
            else {
              EVar6 = (this_ptr->base).base.walk_state;
              if (EVar6 < 2) {
                if (EVar6 == WALK_STATE_WALKING) {
                  uVar20 = 0x100000001;
                }
                else {
                  uVar20 = 0x100000000;
                }
LAB_0051ac8d:
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&(this_ptr->base).base.model.base,(int)uVar20,
                           (int)((ulonglong)uVar20 >> 0x20));
              }
              else {
                if (EVar6 < WALK_STATE_NO_PATH) {
                  uVar20 = 0x100000004;
                  goto LAB_0051ac8d;
                }
                if (EVar6 != WALK_STATE_NO_PATH) {
                  uVar20 = 0x100000000;
                  goto LAB_0051ac8d;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0,1);
                engine_console_cpp_CConsole_printf_FUN_00441ff0
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
            pCStack_70 = pCVar4;
            if ((this_ptr->base).player_input.action_state.fire != 0) {
              this_ptr_00 = (this_ptr->base).pushed_object;
              (*((this_ptr_00->base).vtable._ub)->getBoundingBox)
                        (&this_ptr_00->base,(CBoundingBox3D *)&in_stack_fffffb18->vec);
              puVar16 = auStack_428;
              puVar18 = auStack_418;
              for (iVar14 = 6; iVar14 != 0; iVar14 = iVar14 + -1) {
                *puVar18 = *puVar16;
                puVar16 = puVar16 + (uint)bVar19 * -2 + 1;
                puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
              }
              fStack_38c = fStack_410 + fStack_404;
              afStack_388[0] = fStack_40c + fStack_400;
              afStack_388[1] = local_408 + fStack_3fc;
              fStack_158 = fStack_410 + fStack_404;
              afStack_150[(uint)bVar19 * -2 + -1] = afStack_388[(uint)bVar19 * -2];
              afStack_150[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
                   afStack_388[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
              fStack_a4 = fStack_158 * _DAT_005cd14b;
              CStack_a0.x = fStack_154 * _DAT_005cd14b;
              CStack_a0.y = afStack_150[0] * _DAT_005cd14b;
              CStack_80.x = fStack_158 * _DAT_005cd14b;
              *(uint *)((int)&CStack_80 + (uint)bVar19 * -8 + 4) =
                   *(uint *)((int)&CStack_a0 + (uint)bVar19 * -8);
              *(uint *)((int)&CStack_80 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
                   *(uint *)((int)&CStack_a0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 4);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                        (&((this_ptr->base).pushed_object)->base,&CStack_80,aCStack_20c);
              pCVar22 = &CStack_350;
              CStack_350.x = aCStack_20c[0].x;
              *(uint *)((int)&CStack_350 + (uint)bVar19 * -8 + 4) =
                   *(uint *)((int)aCStack_20c + (uint)bVar19 * -8 + 4);
              *(uint *)((int)&CStack_350 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
                   *(uint *)((int)aCStack_20c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                        ((CDemonActor *)this_ptr,pCVar22,&CStack_b0);
              auStack_23c._0_4_ = CStack_b0.x;
              *(uint *)(auStack_23c + (uint)bVar19 * -8 + 4) =
                   *(uint *)((int)&CStack_b0 + (uint)bVar19 * -8 + 4);
              afStack_234[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
                   *(float *)((int)&CStack_b0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                        ((CVector3f *)auStack_23c,(CVector3f *)auStack_3b0);
              fStack_344 = (float)auStack_3b0._0_4_;
              *(uint *)((int)&CStack_340 + (uint)bVar19 * -8) =
                   *(uint *)(auStack_3b0 + (uint)bVar19 * -8 + 4);
              *(float *)((int)&CStack_340 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 4) =
                   afStack_3a8[(uint)bVar19 * -2 + (uint)bVar19 * -2];
              in_stack_fffffb18 = (UOrientationVector *)0x51aabb;
              in_stack_fffffb1c = (UOrientationVector *)CStack_340.x;
              fStack_4a0 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(CStack_340.x);
              fStack_320 = fStack_404 - fStack_410;
              afStack_31c[0] = fStack_400 - fStack_40c;
              afStack_31c[1] = fStack_3fc - local_408;
              afStack_17c[3] = fStack_404 - fStack_410;
              afStack_16c[(uint)bVar19 * -2] = afStack_31c[(uint)bVar19 * -2];
              afStack_16c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                   afStack_31c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
              fStack_f8 = afStack_17c[3] * _DAT_005cd14b;
              CStack_f4.x = afStack_16c[0] * _DAT_005cd14b;
              CStack_f4.y = afStack_16c[1] * _DAT_005cd14b;
              CStack_1f4.x = afStack_17c[3] * _DAT_005cd14b;
              *(uint *)((int)&CStack_1f4 + ((uint)bVar19 * -2 + -1) * 4 + 8) =
                   *(uint *)((int)&CStack_f4 + (uint)bVar19 * -8);
              *(uint *)((int)&CStack_1f4 + ((uint)bVar19 * -2 + (uint)bVar19 * -2) * 4 + 8) =
                   *(uint *)((int)aCStack_e8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + -8);
              CStack_1f4.y = 0.0;
              if ((((afStack_234[0] -
                     SQRT(CStack_1f4.z * CStack_1f4.z + CStack_1f4.x * CStack_1f4.x) <
                     (float)_DAT_005cd167) && (1.0 < (double)(float)auStack_23c._4_4_)) &&
                  ((double)(float)auStack_23c._4_4_ < _DAT_005cd16f)) &&
                 (ABS(fStack_4a0) < (float)_DAT_005cd177)) {
                fStack_50 = delta_time * _DAT_005cd17f;
                fStack_64 = -fStack_50;
                if (fStack_4a0 < fStack_64) {
                  fStack_4a0 = fStack_64;
                }
                if (fStack_50 < fStack_4a0) {
                  fStack_4a0 = fStack_50;
                }
                in_stack_fffffb1c = &(this_ptr->base).base.base.orient;
                (this_ptr->base).base.base.orient.vec.y =
                     (this_ptr->base).base.base.orient.vec.y + fStack_4a0;
                in_stack_fffffb18 = (UOrientationVector *)this_ptr;
                core_charactr_cpp_CCharacter_setOrientation_FUN_00433220
                          ((CCharacter *)this_ptr,in_stack_fffffb1c);
                goto LAB_0051976f;
              }
            }
            if (pCStack_70 == (CLadder *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(this_ptr->base).base.model.base,0,1);
              core_hero_cpp_CHero_stopPushingBox_FUN_004d3850(&this_ptr->base);
            }
          }
        }
        else {
          if ((this_ptr->base).base.grabbed_type == 0) {
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                      ((CDemonActor *)this_ptr,
                       &(((this_ptr->base).base.grabbed_by)->location).position,&CStack_13c);
            CStack_37c.x = CStack_13c.x;
            *(uint *)((int)&CStack_37c + (uint)bVar19 * -8 + 4) =
                 *(uint *)((int)&CStack_13c + (uint)bVar19 * -8 + 4);
            *(uint *)((int)&CStack_37c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
                 *(uint *)((int)&CStack_13c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                      (&CStack_37c,&CStack_124);
            afStack_36c[2] = CStack_124.x;
            afStack_36c[(uint)bVar19 * -2 + 3] =
                 *(float *)((int)&CStack_124 + (uint)bVar19 * -8 + 4);
            afStack_36c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
                 *(float *)((int)&CStack_124 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            fStack_30 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(afStack_36c[3]);
            if (fStack_30 < _DAT_005cd183) {
              fStack_30 = fStack_30 + _DAT_005cd17f;
            }
            if (_DAT_005cd187 < fStack_30) {
              fStack_30 = fStack_30 + _DAT_005cd18b;
            }
            fStack_54 = delta_time * _DAT_005cd17f;
            fStack_60 = -fStack_54;
            if (fStack_30 < fStack_60) {
              fStack_30 = fStack_60;
            }
            if (fStack_54 < fStack_30) {
              fStack_30 = fStack_54;
            }
            (this_ptr->base).base.base.orient.vec.y =
                 (this_ptr->base).base.base.orient.vec.y + fStack_30;
            core_charactr_cpp_CCharacter_setOrientation_FUN_00433220
                      ((CCharacter *)this_ptr,&(this_ptr->base).base.base.orient);
          }
          pCStack_74 = (CCharacter *)(this_ptr->base).base.grabbed_by;
          pCStack_20 = (pCStack_74->base).vtable._uc;
          pCStack_14 = &(this_ptr->base).base.model;
          core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                    (pCStack_14,0,&CStack_1d8);
          pCVar22 = (CVector3f *)auStack_148;
          auStack_148._0_4_ = CStack_1d8.x;
          *(uint *)(auStack_148 + (uint)bVar19 * -8 + 4) =
               *(uint *)((int)&CStack_1d8 + (uint)bVar19 * -8 + 4);
          *(uint *)(auStack_148 + ((uint)bVar19 * -2 + (uint)bVar19 * -2) * 4 + 8) =
               *(uint *)((int)&CStack_1d8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
          iVar14 = (*(pCStack_20->_uc).attractActorToward)
                             (pCStack_74,(CDemonActor *)this_ptr,pCVar22);
          if (iVar14 == 0) {
            (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
          }
          else if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
            fVar11 = this_ptr->grab_timer + delta_time;
            this_ptr->grab_timer = fVar11;
            if ((_DAT_005e3520 <= fVar11) && ((this_ptr->base).base.grabbed_type != 1)) {
              pCStack_14 = (CDeformableModelInstance *)
                           core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                     ((CMotionController *)&unaff_ESI->vec,0x2f);
              in_stack_fffffb18 = (UOrientationVector *)0x51a2ee;
              fVar11 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                 ((CMotionController *)&unaff_ESI->vec,0x30);
              if (fVar11 + (float)pCStack_14 <= 0.0) {
                in_stack_fffffb1c = (UOrientationVector *)0x51a902;
                (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseFromGrab)
                          ((CCharacter *)this_ptr);
              }
              else if (((this_ptr->base).player_input.action_state.fire != 0) ||
                      (in_stack_fffffb1c = unaff_ESI, _DAT_01c5fae4 != 0)) {
                in_stack_fffffb1c = (UOrientationVector *)0x30;
                in_stack_fffffb18 = (UOrientationVector *)&(this_ptr->base).base.model;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)in_stack_fffffb18,0x30,1);
                (this_ptr->base).player_input.action_state.fire = 0;
              }
            }
            goto LAB_0051976f;
          }
          in_stack_fffffb1c = (UOrientationVector *)0x0;
          in_stack_fffffb18 = (UOrientationVector *)&(this_ptr->base).base.model;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)in_stack_fffffb18,0,1);
        }
      }
      else {
        (*((pCVar13->vtable)._ub)->getInteractionInfo)(pCVar13,&SStack_450);
        if ((SStack_450.approach_offset == 0.0) || (this_ptr != (CPrye *)SStack_450.distance_max)) {
          in_stack_fffffb18 = (UOrientationVector *)0x51a894;
          in_stack_fffffb1c = (UOrientationVector *)this_ptr;
          core_hero_cpp_CHero_stopNearbyInteraction_FUN_004d3af0(&this_ptr->base);
        }
        else {
          pCVar13 = ((CHero *)SStack_450.distance_max)->nearby_interactive_actor;
          puVar16 = (uint *)((int)pCVar13 + (uint)bVar19 * -8 + 0x34);
          UStack_2b4.vec.x = (pCVar13->orient).vec.x;
          *(uint *)((int)&UStack_2b4 + (uint)bVar19 * -8 + 4) = *puVar16;
          *(uint *)((int)&UStack_2b4 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
               puVar16[(uint)bVar19 * -2 + 1];
          fStack_3c = (((CHero *)SStack_450.distance_max)->player_input).turn_speed * _DAT_005cd17f
                      * (float)_DAT_005cd18f * delta_time;
          if (fStack_3c < SStack_450.pitch_min) {
            fStack_3c = SStack_450.pitch_min;
          }
          if (SStack_450.pitch_max < fStack_3c) {
            fStack_3c = SStack_450.pitch_max;
          }
          UStack_2b4.vec.y =
               core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(UStack_2b4.vec.y + fStack_3c);
          fStack_38 = (this_ptr->base).player_input.look_up_down_speed * _DAT_005cd17f *
                      (float)_DAT_005cd18f * delta_time;
          if (fStack_38 < fStack_42c) {
            fStack_38 = fStack_42c;
          }
          if (fStack_430 < fStack_38) {
            fStack_38 = fStack_430;
          }
          UStack_2b4.vec.x =
               core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(UStack_2b4.vec.x + fStack_38);
          in_stack_fffffb18 = &UStack_2b4;
          pCVar13 = (this_ptr->base).nearby_interactive_actor;
          pCVar2 = &(this_ptr->base).base.model;
          iVar14 = (*((pCVar13->vtable)._ub)->updateInteraction)
                             (pCVar13,in_stack_fffffb18,&(this_ptr->base).player_input);
          if (iVar14 == 0) {
            in_stack_fffffb1c = (UOrientationVector *)0x51a8c6;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0,1);
            core_hero_cpp_CHero_stopNearbyInteraction_FUN_004d3af0(&this_ptr->base);
          }
          else {
            SStack_48c.gore_multiplier =
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                           ((((this_ptr->base).nearby_interactive_actor)->orient).vec.y -
                            (this_ptr->base).base.base.orient.vec.y);
            if ((float)_DAT_005cd157 <= SStack_48c.gore_multiplier) {
              if ((double)SStack_48c.gore_multiplier <= _DAT_005cd15f) {
                iVar14 = 0;
              }
              else {
                iVar14 = 5;
              }
            }
            else {
              iVar14 = 6;
            }
            in_stack_fffffb1c = (UOrientationVector *)0x51a6e7;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,iVar14,1);
            fVar11 = SStack_48c.gore_multiplier;
            puVar16 = (uint *)((int)this_ptr + (uint)bVar19 * -8 + 0x34);
            auStack_23c._0_4_ = (this_ptr->base).base.base.orient.vec.x;
            *(uint *)(auStack_23c + (uint)bVar19 * -8 + 4) = *puVar16;
            afStack_234[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
                 (float)puVar16[(uint)bVar19 * -2 + 1];
            auStack_23c._4_4_ = fVar11 * this_ptr->interact_blend + (float)auStack_23c._4_4_;
            core_charactr_cpp_CCharacter_setOrientation_FUN_00433220
                      ((CCharacter *)this_ptr,(UOrientationVector *)auStack_23c);
            afStack_3a8[0] = SStack_450.pitch_min + (float)_DAT_005cd197;
            auStack_3b0._0_4_ = 0.0;
            auStack_3b0._4_4_ = 0.0;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                      ((this_ptr->base).nearby_interactive_actor,(CVector3f *)auStack_3b0,
                       (CVector3f *)(auStack_28c + 8));
            CStack_2ec.z = (float)auStack_28c._8_4_;
            afStack_2e0[(uint)bVar19 * -2] = afStack_280[(uint)bVar19 * -2];
            afStack_2e0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                 afStack_280[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
            pfVar15 = &this_ptr->interact_blend;
            fStack_248 = CStack_2ec.z - (this_ptr->base).base.base.location.position.x;
            afStack_244[0] = afStack_2e0[0] - (this_ptr->base).base.base.location.position.y;
            pCVar22 = &CStack_1f4;
            afStack_244[1] = afStack_2e0[1] - (this_ptr->base).base.base.location.position.z;
            CStack_1f4.x = fStack_248;
            *(float *)((int)&CStack_1f4 + ((uint)bVar19 * -2 + -1) * 4 + 8) =
                 afStack_244[(uint)bVar19 * -2];
            *(float *)((int)&CStack_1f4 + ((uint)bVar19 * -2 + (uint)bVar19 * -2) * 4 + 8) =
                 afStack_244[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
            core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b40
                      ((CDemonActor *)this_ptr,pCVar22,(CVector3f *)(auStack_148 + 8));
            CStack_d0.z = (float)auStack_148._8_4_;
            afStack_c4[(uint)bVar19 * -2] = *(float *)((int)&CStack_13c + (uint)bVar19 * -8);
            afStack_c4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                 *(float *)((int)&CStack_13c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 4);
            pCVar22 = &(this_ptr->base).base.model.accumulated_root_motion;
            afStack_2a0[1] = CStack_d0.z * *pfVar15;
            afStack_2a0[2] = afStack_c4[0] * *pfVar15;
            afStack_2a0[3] = afStack_c4[1] * *pfVar15;
            afStack_1e0[1] = CStack_d0.z * *pfVar15;
            *(float *)((int)&CStack_1d8 + (uint)bVar19 * -8) = afStack_2a0[(uint)bVar19 * -2 + 2];
            *(float *)((int)&CStack_1d8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 4) =
                 afStack_2a0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 3];
            if (pCVar22 != (CVector3f *)(afStack_1e0 + 1)) {
              pCVar22->x = afStack_1e0[1];
              (this_ptr->base).base.model.accumulated_root_motion.y = CStack_1d8.x;
              (this_ptr->base).base.model.accumulated_root_motion.z = CStack_1d8.y;
            }
            (this_ptr->base).base.model.accumulated_root_motion.y = 0.0;
          }
        }
      }
    }
    else {
      fVar11 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                         (&(this_ptr->base).base.model.base,0x38);
      if (0.0 < fVar11) {
        if ((this_ptr->base).base.base.location.position.y <
            (this_ptr->ladder_to_descend->base).location.position.y + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,0,1);
        }
      }
      else {
        this_ptr->ladder_to_descend = (CLadder *)0x0;
      }
      if (0.0 < this_ptr->ladder_blend_time) {
        if (this_ptr->ladder_blend_time <= delta_time) {
          this_ptr->ladder_blend_time = 0.0;
          fStack_494 = 1.0;
        }
        else {
          fStack_494 = delta_time / this_ptr->ladder_blend_time;
          this_ptr->ladder_blend_time = this_ptr->ladder_blend_time - delta_time;
        }
        pCVar22 = &this_ptr->ladder_offset;
        afStack_2e0[0] = pCVar22->x * fStack_494;
        pCVar1 = &(this_ptr->base).base.base.location;
        fVar9 = 1.0 - fStack_494;
        afStack_2e0[1] = (this_ptr->ladder_offset).y * fStack_494;
        afStack_2e0[2] = (this_ptr->ladder_offset).z * fStack_494;
        afStack_31c[3] = afStack_2e0[0];
        afStack_31c[(uint)bVar19 * -2 + 4] = afStack_2e0[(uint)bVar19 * -2 + 1];
        afStack_31c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 5] =
             afStack_2e0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 2];
        fVar11 = (this_ptr->base).base.base.location.position.y;
        fVar3 = (this_ptr->base).base.base.location.position.z;
        (pCVar1->position).x = (pCVar1->position).x + afStack_31c[3];
        (this_ptr->base).base.base.location.position.y = fVar11 + fStack_30c;
        (this_ptr->base).base.base.location.position.z = fVar3 + fStack_308;
        pCVar22->x = pCVar22->x * fVar9;
        (this_ptr->ladder_offset).y = (this_ptr->ladder_offset).y * fVar9;
        (this_ptr->ladder_offset).z = (this_ptr->ladder_offset).z * fVar9;
        fStack_4c = fVar9;
        fVar11 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                           (this_ptr->ladder_facing_angle - (this_ptr->base).base.base.orient.vec.y)
        ;
        (this_ptr->base).base.turn_angle_accumulator = fVar11 * fStack_494;
      }
      fVar11 = (*((this_ptr->base).base.base.vtable._ub)->cylinderGroundCheck)
                         ((CDemonActor *)this_ptr,(this_ptr->base).base.collision_cylinder_height,
                          (CVector3f *)0x0);
      (this_ptr->base).base.closest_distance_threshold = fVar11;
    }
  }
  else {
    fVar11 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                       (&(this_ptr->base).base.model.base,0x37);
    if (0.0 < fVar11) {
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                (&((this_ptr->base).ladder_to_climb)->base,
                 &((this_ptr->base).ladder_to_climb)->ladder_size,&CStack_2ec);
      fStack_118 = CStack_2ec.x;
      afStack_114[(uint)bVar19 * -2] = afStack_2e0[(uint)bVar19 * -2 + -2];
      afStack_114[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
           afStack_2e0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + -1];
      if (afStack_114[0] + (float)_DAT_005cd19f < (this_ptr->base).base.base.location.position.y) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,0,1);
      }
    }
    else {
      (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
    }
    if (0.0 < this_ptr->ladder_blend_time) {
      if (this_ptr->ladder_blend_time <= delta_time) {
        this_ptr->ladder_blend_time = 0.0;
        fStack_49c = 1.0;
      }
      else {
        fStack_49c = delta_time / this_ptr->ladder_blend_time;
        this_ptr->ladder_blend_time = this_ptr->ladder_blend_time - delta_time;
      }
      pCVar22 = &this_ptr->ladder_offset;
      afStack_31c[0] = pCVar22->x * fStack_49c;
      pCVar1 = &(this_ptr->base).base.base.location;
      fVar9 = 1.0 - fStack_49c;
      afStack_31c[1] = (this_ptr->ladder_offset).y * fStack_49c;
      afStack_31c[2] = (this_ptr->ladder_offset).z * fStack_49c;
      fStack_1c0 = afStack_31c[0];
      afStack_1bc[(uint)bVar19 * -2] = afStack_31c[(uint)bVar19 * -2 + 1];
      afStack_1bc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
           afStack_31c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 2];
      fVar11 = (this_ptr->base).base.base.location.position.y;
      fVar3 = (this_ptr->base).base.base.location.position.z;
      (pCVar1->position).x = (pCVar1->position).x + fStack_1c0;
      (this_ptr->base).base.base.location.position.y = fVar11 + afStack_1bc[0];
      (this_ptr->base).base.base.location.position.z = fVar3 + afStack_1bc[1];
      pCVar22->x = pCVar22->x * fVar9;
      (this_ptr->ladder_offset).y = (this_ptr->ladder_offset).y * fVar9;
      (this_ptr->ladder_offset).z = (this_ptr->ladder_offset).z * fVar9;
      fStack_5c = fVar9;
      fVar11 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                         (this_ptr->ladder_facing_angle - (this_ptr->base).base.base.orient.vec.y);
      (this_ptr->base).base.turn_angle_accumulator = fVar11 * fStack_49c;
    }
  }
LAB_0051976f:
  if (0.0 < this_ptr->door_align_timer) {
    if (this_ptr->door_align_timer <= delta_time) {
      this_ptr->door_align_timer = 0.0;
      fStack_4a0 = 1.0;
    }
    else {
      fStack_4a0 = delta_time / this_ptr->door_align_timer;
      this_ptr->door_align_timer = this_ptr->door_align_timer - delta_time;
    }
    pCVar22 = &this_ptr->door_align_offset;
    afStack_3a8[2] = pCVar22->x * fStack_4a0;
    pCVar21 = aCStack_e8;
    afStack_3a8[3] = (this_ptr->door_align_offset).y * fStack_4a0;
    fStack_398 = (this_ptr->door_align_offset).z * fStack_4a0;
    aCStack_e8[0].x = afStack_3a8[2];
    *(float *)((int)aCStack_e8 + (uint)bVar19 * -8 + 4) = afStack_3a8[(uint)bVar19 * -2 + 3];
    *(float *)((int)aCStack_e8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
         afStack_3a8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
    core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b40
              ((CDemonActor *)this_ptr,pCVar21,&CStack_a0);
    pCVar21 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_130 = CStack_a0.x;
    afStack_12c[(uint)bVar19 * -2] = *(float *)((int)&CStack_a0 + (uint)bVar19 * -8 + 4);
    afStack_12c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         *(float *)((int)&CStack_a0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
    fVar11 = (this_ptr->base).base.model.accumulated_root_motion.y;
    fVar3 = (this_ptr->base).base.model.accumulated_root_motion.z;
    fStack_50 = 1.0 - fStack_4a0;
    pCVar21->x = pCVar21->x + fStack_130;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar11 + afStack_12c[0];
    (this_ptr->base).base.model.accumulated_root_motion.z = fVar3 + afStack_12c[1];
    pCVar22->x = pCVar22->x * fStack_50;
    (this_ptr->door_align_offset).y = (this_ptr->door_align_offset).y * fStack_50;
    (this_ptr->door_align_offset).z = (this_ptr->door_align_offset).z * fStack_50;
    fVar11 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                       (this_ptr->door_align_yaw - (this_ptr->base).base.base.orient.vec.y);
    (this_ptr->base).base.turn_angle_accumulator = fVar11 * fStack_4a0;
  }
  pCVar2 = &(this_ptr->base).base.model;
  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base);
  if ((pSVar12->state_index == 0x26) &&
     (this_ptr_01 = (CAmmoBox *)
                    core_actor_cpp_castToClassHash_FUN_0040c840
                              ((this_ptr->base).object_to_pick_up,g_CAmmoBoxClassInfo.name_hash),
     this_ptr_01 != (CAmmoBox *)0x0)) {
    fVar11 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930(&pCVar2->base);
    core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e6b0(this_ptr_01,fVar11);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_prye_cpp_CPrye_updateTurnBlending_FUN_0051e380(this_ptr,delta_time);
  if (iStack_68 != 0) {
    (this_ptr->pending_velocity).z = 0.0;
    (this_ptr->pending_velocity).y = (this_ptr->pending_velocity).z;
    (this_ptr->pending_velocity).x = (this_ptr->pending_velocity).y;
  }
  if (((this_ptr->base).ladder_to_climb == (CLadder *)0x0) &&
     (this_ptr->ladder_to_descend == (CLadder *)0x0)) {
    if (fStack_3c == 0.0) goto LAB_005199e6;
    pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                        (&(this_ptr->base).base.model.base);
    iVar14 = pSVar12->state_index;
    pCVar22 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar21 = &(this_ptr->base).base.position_delta;
    fStack_220 = pCVar22->x + pCVar21->x;
    fStack_21c = (this_ptr->base).base.model.accumulated_root_motion.y +
                 (this_ptr->base).base.position_delta.y;
    afStack_218[0] =
         (this_ptr->base).base.model.accumulated_root_motion.z +
         (this_ptr->base).base.position_delta.z;
    CStack_d0.x = fStack_220;
    afStack_c4[(uint)bVar19 * -2 + -2] = afStack_218[(uint)bVar19 * -2 + -1];
    afStack_c4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + -1] =
         afStack_218[(uint)bVar19 * -2 + (uint)bVar19 * -2];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar22->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar21->x = (this_ptr->base).base.position_delta.y;
    if (iVar14 == 0x1a) {
      CStack_d0.z = 0.0;
      CStack_d0.y = 0.0;
      CStack_d0.x = 0.0;
      fVar11 = (this_ptr->base).base.velocity.y - delta_time * (float)_DAT_005cd1a7;
      this_ptr->airborne_timer = 9999.9;
    }
    else {
      if (iVar14 == 0x1b) {
        CStack_d0.z = 0.0;
        CStack_d0.y = 0.0;
        CStack_d0.x = 0.0;
      }
      fVar11 = (this_ptr->base).base.velocity.y - delta_time * (float)_DAT_005cd1a7;
    }
    (this_ptr->base).base.velocity.y = fVar11;
    iStack_48 = iVar14;
    core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b40
              ((CDemonActor *)this_ptr,&this_ptr->pending_velocity,(CVector3f *)(auStack_23c + 4));
    afStack_280[3] = (float)auStack_23c._4_4_;
    afStack_280[(uint)bVar19 * -2 + 4] = afStack_234[(uint)bVar19 * -2];
    afStack_280[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 5] =
         afStack_234[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    fStack_370 = (this_ptr->base).base.velocity.x * delta_time;
    pCVar22 = &CStack_d0;
    afStack_36c[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_36c[1] = (this_ptr->base).base.velocity.z * delta_time;
    afStack_280[0] = fStack_370;
    afStack_280[(uint)bVar19 * -2 + 1] = afStack_36c[(uint)bVar19 * -2];
    afStack_280[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 2] =
         afStack_36c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    afStack_c4[0] = afStack_280[0] + afStack_280[3];
    afStack_c4[1] = afStack_280[1] + fStack_270;
    afStack_c4[2] = afStack_280[2] + fStack_26c;
    fStack_184 = afStack_280[0] + afStack_280[3];
    afStack_17c[(uint)bVar19 * -2 + -1] = afStack_c4[(uint)bVar19 * -2 + 1];
    afStack_17c[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
         afStack_c4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 2];
    CStack_d0.x = CStack_d0.x + fStack_184;
    CStack_d0.y = CStack_d0.y + fStack_180;
    CStack_d0.z = CStack_d0.z + afStack_17c[0];
    this_ptr->fall_velocity_snapshot = (this_ptr->base).base.velocity.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,pCVar22);
    if ((this_ptr->base).base.base.location.position.y <
        (this_ptr->base).base.closest_distance_threshold + (float)_DAT_005cd1af) {
      (this_ptr->base).base.is_on_ground = 1;
    }
    if ((iStack_48 == 0x1a) && ((this_ptr->base).base.is_on_ground != 0)) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"Splat at %3.2f fps\n");
      fVar11 = -this_ptr->fall_velocity_snapshot;
      if (fVar11 < (float)_DAT_005cd1b7) {
        if (iStack_48 == 0x1a) goto LAB_0051b278;
LAB_0051b287:
        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)this_ptr,(CVector3f *)&DAT_02cfd900,fVar11 * _DAT_005cd1d7 + 1.0);
        goto LAB_0051b2ad;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_48c);
      fVar3 = (fVar11 + (float)_DAT_005cd1bf) * (float)_DAT_005cd1c7 * (float)_DAT_005cd1cf;
      SStack_48c.damage_amount = fVar3;
      if (0x42c80000 < (int)fVar3) {
        SStack_48c.damage_amount = 9999.0;
      }
      pCVar8 = (this_ptr->base).base.base.vtable._uc;
      (this_ptr->base).invincibility_timer = 0.0;
      (*(pCVar8->_uc).processDamage)((CCharacter *)this_ptr,&SStack_48c);
      if ((0.0 < (this_ptr->base).base.hit_points) && ((int)fVar3 < 0x42c80001)) {
        in_stack_fffffb1c = (UOrientationVector *)0x1;
        in_stack_fffffb18 = (UOrientationVector *)0x1c;
LAB_0051b278:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,(int)in_stack_fffffb18,(int)in_stack_fffffb1c);
        goto LAB_0051b287;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,0x1d,1);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"fall-?.wav");
      iVar14 = (this_ptr->base).base.is_on_ground;
      fVar11 = 0x3F000000;
    }
    else {
LAB_0051b2ad:
      iVar14 = (this_ptr->base).base.is_on_ground;
      fVar11 = 0x3F000000;
    }
    0x3F000000 = fVar11;
    if (iVar14 == 0) {
      this_ptr->airborne_timer = this_ptr->airborne_timer + delta_time;
      SStack_48c.impact_point.x = fVar11;
      if (fStack_38 == 5.60519e-45) {
        SStack_48c.impact_point.x = fVar11 * (float)_DAT_005cd14f;
      }
      if ((SStack_48c.impact_point.x < this_ptr->airborne_timer) ||
         (this_ptr->fall_velocity_snapshot < (float)_DAT_005cd1bf)) {
        if (fStack_38 != 3.64338e-44) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,0x1a,1);
        }
        (this_ptr->base).base.is_on_ground = 0;
      }
      goto LAB_005199e6;
    }
  }
  else {
    pCStack_20 = (CCharacter_full_vtable *)&(this_ptr->base).base.model.accumulated_root_motion;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
              ((CDemonActor *)this_ptr,(CVector3f *)pCStack_20,(CVector3f *)auStack_28c);
    pCVar1 = &(this_ptr->base).base.base.location;
    fStack_2a4 = (float)auStack_28c._0_4_;
    afStack_2a0[(uint)bVar19 * -2] = *(float *)(auStack_28c + (uint)bVar19 * -8 + 4);
    afStack_2a0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         afStack_280[(uint)bVar19 * -2 + (uint)bVar19 * -2 + -1];
    fVar11 = (this_ptr->base).base.base.location.position.y;
    fVar3 = (this_ptr->base).base.base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_2a4;
    (this_ptr->base).base.base.location.position.y = fVar11 + afStack_2a0[0];
    (this_ptr->base).base.base.location.position.z = fVar3 + afStack_2a0[1];
    (pCStack_20->_ub).vfunc2 = (CDemonActor_vfunc2 *)0x0;
    (pCStack_20->_ub).markResourcesInUse =
         (CDemonActor_markResourcesInUse *)(pCStack_20->_ub).vfunc2;
    (pCStack_20->_ub).setup = (CDemonActor_setup *)(pCStack_20->_ub).markResourcesInUse;
  }
  this_ptr->airborne_timer = 0.0;
LAB_005199e6:
  (this_ptr->pending_velocity).z = 0.0;
  (this_ptr->pending_velocity).y = (this_ptr->pending_velocity).z;
  (this_ptr->pending_velocity).x = (this_ptr->pending_velocity).y;
  pCVar10 = g_CGamePtr;
  if (local_34 != 0) {
    if (((this_ptr->base).player_input.action_state.draw != 0) ||
       (((this_ptr->base).player_input.action_state.fire != 0 && (this_ptr->guns_drawn == 0)))) {
      if (this_ptr->guns_drawn == 0) {
        if (((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) ||
           (((this_ptr->base).inventory.selected_weapon)->number_of_hands_needed == 1)) {
          this_ptr->guns_drawn = 1;
        }
      }
      else {
        this_ptr->guns_drawn = 0;
        if (pCVar10->flashlight_active != 0) {
          pCVar10->flashlight_active = 0;
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"flashlit.wav");
        }
      }
    }
    if ((this_ptr->base).player_input.action_state.light != 0) {
      pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c840
                          ((this_ptr->base).base.carry_hands[0].carry_actor,DAT_007e1a50);
      if (pCVar13 == (CDemonActor *)0x0) {
        if (((this_ptr->weapon == (CWeapon *)0x0) || (this_ptr->weapon->number_of_hands_needed == 1)
            ) && (iVar14 = core_inv_cpp_CInventory_hasItemOfClass_FUN_004dba80
                                     (&(this_ptr->base).inventory,"CLightActor"),
                 iVar14 != 0)) {
          (this_ptr->base).action_pending = 8;
        }
      }
      else {
        (this_ptr->base).action_pending = 9;
      }
    }
    pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c840
                        ((this_ptr->base).base.carry_hands[0].carry_actor,DAT_007e1a50);
    if ((pCVar13 != (CDemonActor *)0x0) && (*(int *)(pCVar13[0x1a].create_event + 0x38) != 0)) {
      this_ptr->aim_pitch =
           (this_ptr->base).player_input.look_up_down_speed * _DAT_005cd17f * (float)_DAT_005cd14f *
           delta_time + this_ptr->aim_pitch;
      fStack_64 = core_prye_cpp_CPrye_getFlashlightMinAngle_FUN_0051c0a0(this_ptr);
      fStack_1c = core_prye_cpp_CPrye_getFlashlightMaxAngle_FUN_0051c0f0(this_ptr);
      if (this_ptr->aim_pitch < fStack_64) {
        this_ptr->aim_pitch = fStack_64;
      }
      if (fStack_1c < this_ptr->aim_pitch) {
        this_ptr->aim_pitch = fStack_1c;
      }
    }
  }
  pCVar5 = (this_ptr->base).inventory.selected_weapon;
  if (pCVar5 == (CWeapon *)0x0) {
    g_CGamePtr->flashlight_active = 0;
  }
  else if (pCVar5->can_attach_light == 0) {
    g_CGamePtr->flashlight_active = 0;
  }
  if (fStack_38 != 0.0) {
    core_prye_cpp_CPrye_updateWeaponLayerActions_FUN_00524940(this_ptr,delta_time);
  }
  if (this_ptr->guns_drawn == 0) {
    fVar11 = this_ptr->guns_drawn_blend - delta_time / _DAT_005e34f0;
    this_ptr->guns_drawn_blend = fVar11;
    if (fVar11 < 0.0) {
      this_ptr->guns_drawn_blend = 0.0;
    }
  }
  else {
    fVar11 = delta_time / _DAT_005e34ec + this_ptr->guns_drawn_blend;
    this_ptr->guns_drawn_blend = fVar11;
    if (1.0 < fVar11) {
      this_ptr->guns_drawn_blend = 1.0;
    }
  }
  fVar11 = (this_ptr->right_arm_aim).recoil_timer - delta_time / _DAT_005e34f4;
  (this_ptr->right_arm_aim).recoil_timer = fVar11;
  if (fVar11 <= 0.0) {
    (this_ptr->right_arm_aim).recoil_timer = 0.0;
  }
  fVar11 = (this_ptr->left_arm_aim).recoil_timer - delta_time / _DAT_005e34f4;
  (this_ptr->left_arm_aim).recoil_timer = fVar11;
  if (fVar11 <= 0.0) {
    (this_ptr->left_arm_aim).recoil_timer = 0.0;
  }
  if (iStack_24 != 0) {
    core_prye_cpp_FUN_00525930();
  }
  core_prye_cpp_CPrye_updateProceduralAnimation_FUN_0051c1c0(this_ptr);
  pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c840
                      ((this_ptr->base).base.carry_hands[0].carry_actor,DAT_007e1a50);
  if ((pCVar13 != (CDemonActor *)0x0) && (this_ptr->weapon != (CWeapon *)0x0)) {
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
              (&(this_ptr->base).base.model);
    core_prye_cpp_CPrye_updateWeaponPosition_FUN_0051f360(this_ptr,0);
    core_prye_cpp_CPrye_aimLeftPistol_FUN_00523800(this_ptr);
    core_prye_cpp_CPrye_updateProceduralAnimation_FUN_0051c1c0(this_ptr);
  }
  core_prye_cpp_CPrye_updateArmRecoilBlend_FUN_00524170(this_ptr,delta_time,iStack_28);
  core_prye_cpp_FUN_00526cf0();
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  pCVar2 = &(this_ptr->base).base.model;
  fVar11 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&pCVar2->base,0x11);
  if (fVar11 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004d3850(&this_ptr->base);
  }
  else {
    fVar11 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930(&pCVar2->base);
    if ((1.0 < fVar11) &&
       (pCStack_18 = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c840
                               (&((this_ptr->base).pushed_object)->base,
                                g_CBoxActorClassInfo.name_hash), pCStack_18 != (CBoxActor *)0x0)) {
      core_prye_cpp_CPrye_getHandsMidpoint_FUN_0051c100(this_ptr,aCStack_304);
      pCVar22 = &CStack_340;
      CStack_340.x = aCStack_304[0].x;
      *(uint *)((int)&CStack_340 + (uint)bVar19 * -8 + 4) =
           *(uint *)((int)aCStack_304 + (uint)bVar19 * -8 + 4);
      *(uint *)((int)&CStack_340 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           *(uint *)((int)aCStack_304 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar22,&CStack_1cc);
      pCVar22 = &CStack_334;
      fStack_2c8 = CStack_1cc.x;
      afStack_2c0[(uint)bVar19 * -2 + -1] = *(float *)((int)&CStack_1cc + (uint)bVar19 * -8 + 4);
      afStack_2c0[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
           *(float *)((int)&CStack_1cc + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      afStack_1bc[2] = fStack_2c8 - aCStack_3d0[0].x;
      afStack_1bc[3] = fStack_2c4 - aCStack_3d0[0].y;
      fStack_1ac = afStack_2c0[0] - aCStack_3d0[0].z;
      CStack_334.x = fStack_2c8 - aCStack_3d0[0].x;
      *(float *)((int)&CStack_334 + (uint)bVar19 * -8 + 4) = afStack_1bc[(uint)bVar19 * -2 + 3];
      *(float *)((int)&CStack_334 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           afStack_1bc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
      CStack_334.y = 0.0;
      core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b40
                ((CDemonActor *)this_ptr,pCVar22,&CStack_2d4);
      fStack_1e4 = CStack_2d4.x;
      afStack_1e0[(uint)bVar19 * -2] = *(float *)((int)&CStack_2d4 + (uint)bVar19 * -8 + 4);
      afStack_1e0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
           *(float *)((int)&CStack_2d4 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      if (0.0 < afStack_1e0[1]) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_0041ff20(pCStack_18,aCStack_3d0,&CStack_334);
      }
    }
  }
  core_prye_cpp_CPrye_updateWeaponPosition_FUN_0051f360(this_ptr,0);
  core_prye_cpp_CPrye_autoAimAtThreat_FUN_00522b00(this_ptr,0,delta_time);
  core_prye_cpp_CPrye_autoAimAtThreat_FUN_00522b00(this_ptr,1,delta_time);
  core_prye_cpp_FUN_005263c0(this_ptr);
  core_inv_cpp_CInventory_updateInventory_FUN_004dcdb0(&(this_ptr->base).inventory);
  core_prye_cpp_FUN_00526dc0(this_ptr);
  pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c840
                      ((this_ptr->base).base.carry_hands[0].carry_actor,DAT_007e1a50);
  if (pCVar13 != (CDemonActor *)0x0) {
    pCVar13[0x1a].create_event[0x38] = '\x01';
    pCVar13[0x1a].create_event[0x39] = '\0';
    pCVar13[0x1a].create_event[0x3a] = '\0';
    pCVar13[0x1a].create_event[0x3b] = '\0';
    pCVar13 = (this_ptr->base).base.carry_hands[0].carry_actor;
    (*((pCVar13->vtable)._ub)->process)(pCVar13,delta_time);
  }
  if (iStack_24 == 0) {
    core_hero_cpp_FUN_004d3210();
  }
  else {
    fVar11 = (this_ptr->base).hero_action_range + delta_time;
    (this_ptr->base).hero_action_range = fVar11;
    if ((float)_DAT_005cd1df < fVar11) {
      core_hero_cpp_FUN_004d4900(this_ptr,1);
    }
  }
  if ((this_ptr->weapon != (CWeapon *)0x0) && ((this_ptr->weapon->base).is_transparent != 0)) {
    (this_ptr->base).base.base.is_transparent = 1;
    return;
  }
  return;
}
