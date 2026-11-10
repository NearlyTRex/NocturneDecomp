// Name: core_prye.cpp_FUN_00518cd0
// Address: 00518cd0
// Address Range: [[00518cd0, 0051b54d]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_00518cd0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_00518cd0(CCharacter *param_1,float param_2)

{
  CLocation *pCVar1;
  int *piVar2;
  CDeformableModelInstance *pCVar3;
  float fVar4;
  EWalkState EVar5;
  uint uVar6;
  CCharacter_full_vtable *pCVar7;
  float fVar8;
  CFlame *pCVar9;
  CCharacter *pCVar10;
  CGame *pCVar11;
  SMotion *pSVar12;
  CAmmoBox *this_ptr;
  float fVar13;
  int iVar14;
  int desired_state_index;
  uint unaff_EBP;
  float *pfVar15;
  float *pfVar16;
  byte bVar17;
  float afStackY_13c0 [944];
  ulonglong uVar18;
  CVector3f *pCVar19;
  double in_stack_fffffb10;
  float fStack_4b0;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_49c;
  SDamageInfo aSStack_494 [4];
  float fStack_490;
  float fStack_488;
  int iStack_458;
  CCharacter *pCStack_454;
  float fStack_450;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float afStack_438 [6];
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408 [6];
  float local_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  int iStack_3e0;
  int iStack_3dc;
  CVector3f CStack_3d8;
  uint uStack_3cc;
  uint uStack_3c8;
  float fStack_3c4;
  uint uStack_3c0;
  float afStack_3bc [5];
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  int iStack_390;
  float afStack_38c [5];
  float fStack_378;
  float fStack_374;
  float fStack_370;
  uint uStack_36c;
  uint uStack_360;
  uint uStack_354;
  uint uStack_348;
  CVector3f CStack_33c;
  float fStack_330;
  float afStack_32c [4];
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  uint uStack_30c;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  uint uStack_2f4;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  uint uStack_2dc;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  uint uStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_294;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  uint uStack_270;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  uint uStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_234;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  uint uStack_21c;
  float fStack_210;
  float fStack_204;
  uint uStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  uint uStack_1ec;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1d4;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  int iStack_1b0;
  float afStack_1ac [4];
  float fStack_19c;
  uint uStack_198;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  CVector3f CStack_150;
  uint uStack_144;
  float afStack_140 [4];
  float fStack_130;
  uint uStack_12c;
  uint uStack_120;
  float fStack_11c;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint uStack_fc;
  float fStack_f0;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [5];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_9c;
  float fStack_90;
  CCharacter *pCStack_7c;
  float fStack_78;
  float fStack_74;
  int iStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  float fStack_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  float fStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  CCharacter_full_vtable *pCStack_28;
  float fStack_24;
  CBoxActor *pCStack_20;
  CDeformableModelInstance *pCStack_1c;
  int *piStack_18;
  
  bVar17 = 0;
  local_34 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                       (0x01C6E360,"?DebugActionPending" + 1);
  if ((*(int *)&param_1->field_0x2628 != 0) &&
     (param_1[2].flames[0x15].base.previous_transform_state.orientation.vec.z < _DAT_005cd147)) {
    (**(code **)(*(int *)(*(int *)&param_1->field_0x2628 + 0x154) + 0x1c))();
    pfVar15 = local_408;
    pfVar16 = &local_3f0;
    for (iVar14 = 6; iVar14 != 0; iVar14 = iVar14 + -1) {
      *pfVar16 = *pfVar15;
      pfVar15 = pfVar15 + (uint)bVar17 * -2 + 1;
      pfVar16 = pfVar16 + (uint)bVar17 * -2 + 1;
    }
    pfVar15 = &param_1[2].flames[0x15].base.previous_transform_state.position.z;
    if (pfVar15 != &local_3f0) {
      *pfVar15 = local_3f0;
      param_1[2].flames[0x15].base.previous_transform_state.orientation.vec.x = fStack_3ec;
      param_1[2].flames[0x15].base.previous_transform_state.orientation.vec.y = fStack_3e8;
    }
    pfVar15 = &param_1[2].flames[0x15].base.previous_transform_state.orientation.vec.z;
    if (pfVar15 != &fStack_3e4) {
      *pfVar15 = fStack_3e4;
      param_1[2].flames[0x15].base.previous_transform_state.dirty_flags = iStack_3e0;
      param_1[2].flames[0x15].base.render_needs_update = iStack_3dc;
    }
    fStack_174 = param_1[2].flames[0x15].base.previous_transform_state.position.z +
                 param_1[2].flames[0x15].base.previous_transform_state.orientation.vec.z;
    fStack_170 = param_1[2].flames[0x15].base.previous_transform_state.orientation.vec.x +
                 (float)param_1[2].flames[0x15].base.previous_transform_state.dirty_flags;
    fStack_16c = param_1[2].flames[0x15].base.previous_transform_state.orientation.vec.y +
                 (float)param_1[2].flames[0x15].base.render_needs_update;
    fStack_114 = fStack_174;
    afStack_140[(uint)bVar17 * -2 + 0xc] = afStack_1ac[(uint)bVar17 * -2 + 0xf];
    afStack_140[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd] =
         afStack_1ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10];
    afStack_1ac[2] = fStack_114 * _DAT_005cd14b;
    afStack_1ac[3] = fStack_110 * _DAT_005cd14b;
    fStack_19c = fStack_10c * _DAT_005cd14b;
    fStack_234 = fStack_114 * _DAT_005cd14b;
    afStack_32c[(uint)bVar17 * -2 + 0x3f] = afStack_1ac[(uint)bVar17 * -2 + 3];
    afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x40] =
         afStack_1ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
    core_actor_cpp_FUN_00408b80(*(uint *)&param_1->field_0x2628);
    uStack_fc = uStack_198;
    afStack_140[(uint)bVar17 * -2 + 0x12] = afStack_1ac[(uint)bVar17 * -2 + 6];
    afStack_140[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x13] =
         afStack_1ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
    core_actor_cpp_FUN_00408bf0(param_1);
    piVar2 = &param_1[2].flames[0x15].base.dead2;
    iStack_390 = iStack_1b0;
    afStack_38c[(uint)bVar17 * -2] = afStack_1ac[(uint)bVar17 * -2];
    afStack_38c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
         afStack_1ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
    if (piVar2 != &iStack_390) {
      *piVar2 = iStack_390;
      param_1[2].flames[0x15].base.previous_transform_state.position.x = afStack_38c[0];
      param_1[2].flames[0x15].base.previous_transform_state.position.y = afStack_38c[1];
    }
  }
  core_game_cpp_CGame_slamDT_FUN_004bf3a0(g_CGamePtr,param_2);
  core_charactr_cpp_FUN_00433c60(param_1);
  fVar13 = *(float *)param_1[1].base.actor_name - param_2;
  *(float *)param_1[1].base.actor_name = fVar13;
  if (fVar13 < 0.0) {
    param_1[1].base.actor_name[0] = '\0';
    param_1[1].base.actor_name[1] = '\0';
    param_1[1].base.actor_name[2] = '\0';
    param_1[1].base.actor_name[3] = '\0';
  }
  (param_1->model).accumulated_root_motion.z = 0.0;
  (param_1->model).accumulated_root_motion.y = (param_1->model).accumulated_root_motion.z;
  (param_1->model).accumulated_root_motion.x = (param_1->model).accumulated_root_motion.y;
  core_prye_cpp_FUN_0051c100();
  uStack_270 = afStack_3bc[2];
  afStack_32c[(uint)bVar17 * -2 + 0x30] = afStack_3bc[(uint)bVar17 * -2 + 3];
  afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x31] =
       afStack_3bc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
  core_actor_cpp_FUN_00408b80(param_1);
  uVar18 = CONCAT44(param_2,param_1);
  CStack_3d8.x = fStack_9c;
  *(float *)((int)&CStack_3d8 + (uint)bVar17 * -8 + 4) = afStack_c8[(uint)bVar17 * -2 + 0xc];
  *(float *)((int)&CStack_3d8 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
       afStack_c8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd];
  core_prye_cpp_FUN_0051b550(uVar18);
  iStack_3c = 1;
  iStack_44 = 1;
  iStack_40 = 1;
  iStack_2c = 1;
  iStack_30 = 1;
  if (param_1->grabbed_by != (CDemonActor *)0x0) {
    iStack_3c = 0;
    iStack_40 = 0;
    iStack_2c = 0;
    iStack_30 = 0;
    iStack_44 = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if (param_1[2].flames[0x15].base.orient.vec.y != 0.0) {
    iStack_2c = 0;
    iStack_30 = 0;
    iStack_3c = 0;
    iStack_40 = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if ((param_1[2].flames[0x15].base.orient_matrix.m[0].x != 0.0) ||
     (*(int *)(param_1[2].flames[0x15].base.create_event + 0x40) != 0)) {
    iStack_44 = 0;
    iStack_40 = 0;
    iStack_2c = 0;
    iStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  if ((param_1[2].flames[0x15].base.orient.vec.x != 0.0) ||
     (param_1[2].flames[0x14].render_corona == 4)) {
    iStack_2c = 0;
    iStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  pCVar3 = &param_1->model;
  piStack_18 = (int *)core_motion_cpp_FUN_004fc350(pCVar3);
  if ((((0.0 < (float)piStack_18) ||
       (piStack_18 = (int *)core_motion_cpp_FUN_004fc350(pCVar3), 0.0 < (float)piStack_18)) ||
      (piStack_18 = (int *)core_motion_cpp_FUN_004fc350(pCVar3), 0.0 < (float)piStack_18)) ||
     (param_1->hit_points <= 0.0)) {
    iStack_40 = 0;
    iStack_2c = 0;
    iStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  piStack_18 = (int *)core_motion_cpp_FUN_004fc350(&param_1->model);
  if (((0.0 < (float)piStack_18) || (param_1[2].flames[0x14].render_corona == 5)) ||
     (param_1[2].flames[0x15].base.location.area_id != 0)) {
    iStack_30 = 0;
    iStack_3c = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  piStack_18 = (int *)core_motion_cpp_FUN_004fc350(&param_1->model);
  if (((0.0 < (float)piStack_18) || (param_1[2].flames[0x14].render_corona == 5)) ||
     (param_1[2].flames[0x15].base.location.area_id != 0)) {
    iStack_30 = 0;
    iStack_3c = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  pCVar3 = &param_1->model;
  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar3->base);
  if ((((((*(int *)(pSVar12 + 0x24) != 0x2a) &&
         (pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar3->base),
         *(int *)(pSVar12 + 0x24) != 0x2b)) &&
        (pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar3->base),
        *(int *)(pSVar12 + 0x24) != 0x28)) &&
       ((pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar3->base),
        *(int *)(pSVar12 + 0x24) != 0x29 &&
        (pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar3->base),
        *(int *)(pSVar12 + 0x24) != 0x27)))) &&
      ((iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x2a &&
       ((iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x2b &&
        (iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x28)))))) &&
     ((iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x29 &&
      (iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x27)))) {
    if (param_1[2].flames[0x14].render_corona == 5) {
      param_1[2].flames[0x14].render_corona = 0;
    }
    if (param_1[2].flames[0x15].base.location.area_id != 0) {
      param_1[2].flames[0x15].base.location.area_id = 0;
    }
  }
  pCVar3 = &param_1->model;
  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar3->base);
  if ((((*(int *)(pSVar12 + 0x24) != 0x20) &&
       (pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar3->base),
       *(int *)(pSVar12 + 0x24) != 0x1e)) &&
      (pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar3->base),
      *(int *)(pSVar12 + 0x24) != 0x22)) &&
     (((pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar3->base),
       *(int *)(pSVar12 + 0x24) != 0x23 && (iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x20)
       ) && ((iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x1e &&
             ((iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x22 &&
              (iVar14 = core_motion_cpp_FUN_004fc0c0(), iVar14 != 0x23)))))))) {
    if (param_1[2].flames[0x14].render_corona == 4) {
      param_1[2].flames[0x14].render_corona = 0;
    }
    if (param_1[2].flames[0x15].base.orient.vec.x != 0.0) {
      param_1[2].flames[0x15].base.orient.vec.x = 0.0;
    }
  }
  piStack_18 = (int *)core_motion_cpp_FUN_004fc350(&param_1->model);
  if (0.0 < (float)piStack_18) {
    iStack_40 = 0;
    iStack_2c = 0;
    iStack_44 = 0;
    iStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  if (param_1[2].flames[0x14].render_corona == 1) {
    iStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  iVar14 = param_1[2].flames[0x14].render_corona;
  if ((iVar14 == 8) || (iVar14 == 9)) {
    iStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  if (param_1[2].flames[0x14].render_corona == 2) {
    iStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  if (param_1[2].flames[0x14].render_corona == 6) {
    iStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  if (param_1[2].flames[0x14].render_corona == 3) {
    iStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  if (param_1[2].flames[0x14].render_corona == 7) {
    iStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  if ((param_1[2].flames[0x15].base.orient.vec.z != 0.0) ||
     (piStack_18 = (int *)core_motion_cpp_FUN_004fc350(&param_1->model), 0.0 < (float)piStack_18)) {
    iStack_2c = 0;
    iStack_30 = 0;
    iStack_3c = 0;
    iStack_40 = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"leverToPull=%s\n");
    }
  }
  if (param_1->grabbed_by == (CDemonActor *)0x0) {
    if ((param_1->base).standing_platform != (CPlatform *)0x0) {
      iStack_44 = 1;
    }
    if ((param_1->base).location.position.y != param_1->closest_distance_threshold) {
      iStack_44 = 1;
    }
  }
  *(float *)&param_1->field_0x2524 = (param_1->model).accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(param_1);
  if (param_1[2].flames[0x15].base.orient_matrix.m[0].y == 0.0) {
    fVar13 = *(float *)(param_1[2].flames[0x15].base.create_event + 0x54) -
             param_2 * (float)_DAT_005cd14f * (float)_DAT_005cd14f;
    *(float *)(param_1[2].flames[0x15].base.create_event + 0x54) = fVar13;
    if (fVar13 < 0.0) {
      pCVar9 = param_1[2].flames + 0x15;
      (pCVar9->base).create_event[0x54] = '\0';
      (pCVar9->base).create_event[0x55] = '\0';
      (pCVar9->base).create_event[0x56] = '\0';
      (pCVar9->base).create_event[0x57] = '\0';
    }
  }
  else {
    fVar13 = param_2 * (float)_DAT_005cd14f +
             *(float *)(param_1[2].flames[0x15].base.create_event + 0x54);
    *(float *)(param_1[2].flames[0x15].base.create_event + 0x54) = fVar13;
    if (1.0 < fVar13) {
      pCVar9 = param_1[2].flames + 0x15;
      (pCVar9->base).create_event[0x54] = '\0';
      (pCVar9->base).create_event[0x55] = '\0';
      (pCVar9->base).create_event[0x56] = -0x80;
      (pCVar9->base).create_event[0x57] = '?';
    }
  }
  fVar13 = param_1[2].flames[0x15].base.orient_matrix.m[0].x;
  iStack_70 = 1;
  if (fVar13 == 0.0) {
    if (*(int *)(param_1[2].flames[0x15].base.create_event + 0x40) == 0) {
      fVar4 = param_1[2].flames[0x15].base.orient_matrix.m[0].y;
      if (fVar4 == 0.0) {
        if (param_1->grabbed_by == (CDemonActor *)0x0) {
          if (param_1[2].flames[0x15].base.orient.vec.y == 0.0) {
            iVar14 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660(param_1,param_2);
            if (iVar14 == 0) {
              if (iStack_3c != 0) {
                pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                    (&(param_1->model).base);
                uVar6 = *(uint *)(pSVar12 + 0x24);
                if ((((((uVar6 < 8) || (uVar6 < 9)) || (uVar6 < 0xd)) ||
                     ((uVar6 < 0xe || (uVar6 < 0xf)))) || (uVar6 < 0x10)) ||
                   ((uVar6 < 0x11 || (uVar6 == 0x7a)))) {
                  if (param_1->is_on_ground != 0) {
                    pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                        (&(param_1->model).base);
                    iVar14 = *(int *)(pSVar12 + 0x24);
                    desired_state_index = 0;
                    if (*(int *)(param_1[1].base.actor_name + 8) == 0) {
                      if (*(int *)(param_1[1].base.actor_name + 0xc) == 0) {
                        fVar13 = param_1[1].base.orient.vec.x;
                        if ((float)_DAT_005cd157 <= fVar13) {
                          if (_DAT_005cd15f < (double)fVar13) {
                            if (*(int *)(param_1[1].base.actor_name + 0x10) == 0) {
                              desired_state_index = 6;
                            }
                            else {
                              desired_state_index = 8;
                            }
                          }
                        }
                        else if (*(int *)(param_1[1].base.actor_name + 0x10) == 0) {
                          desired_state_index = 5;
                        }
                        else {
                          desired_state_index = 7;
                        }
                      }
                      else if (*(int *)(param_1[1].base.actor_name + 0x10) == 0) {
                        fVar13 = param_1[1].base.orient.vec.x;
                        if ((float)_DAT_005cd157 <= fVar13) {
                          if ((double)fVar13 <= _DAT_005cd15f) {
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
                        fVar13 = param_1[1].base.orient.vec.x;
                        if ((float)_DAT_005cd157 <= fVar13) {
                          if ((double)fVar13 <= _DAT_005cd15f) {
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
                    else if (*(int *)(param_1[1].base.actor_name + 0x10) == 0) {
                      fVar13 = param_1[1].base.orient.vec.x;
                      if ((float)_DAT_005cd157 <= fVar13) {
                        if ((double)fVar13 <= _DAT_005cd15f) {
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
                      fVar13 = param_1[1].base.orient.vec.x;
                      if ((float)_DAT_005cd157 <= fVar13) {
                        if ((double)fVar13 <= _DAT_005cd15f) {
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
                    if ((param_1[1].base.location.area_id != 0) &&
                       (param_1->layer_action_index != 0x11)) {
                      param_1[2].flames[0x15].globe.position.z = 0.0;
                      param_1[2].flames[0x15].globe.position.y = 1.4013e-45;
                    }
                    if (param_1[2].flames[0x15].globe.position.y == 0.0) {
                      fVar13 = param_1[1].base.orient.vec.y * *(float *)&param_1->field_0x2528;
                      param_1->turn_angle_accumulator = fVar13;
                      param_1[2].flames[0x15].base.standing_platform =
                           (CPlatform *)
                           ((float)param_1[2].flames[0x15].base.standing_platform - fVar13);
                    }
                    if (param_1[2].flames[0x14].render_corona == 5) {
                      param_1[2].flames[0x14].render_corona = 0;
                    }
                    if (param_1[2].flames[0x15].base.location.area_id != 0) {
                      param_1[2].flames[0x15].base.location.area_id = 0;
                    }
                    if (desired_state_index != iVar14) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                                (&(param_1->model).base,desired_state_index,1);
                    }
                    if (*(int *)(param_1[1].base.actor_name + 0x1c) != 0) {
                      core_hero_cpp_FUN_004d3c90();
                    }
                  }
                  iStack_70 = 0;
                }
              }
            }
            else {
              EVar5 = param_1->walk_state;
              if (EVar5 < 2) {
                if (EVar5 == WALK_STATE_WALKING) {
                  uVar18 = 0x100000001;
                }
                else {
                  uVar18 = 0x100000000;
                }
LAB_0051ac8d:
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&(param_1->model).base,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
              }
              else {
                if (EVar5 < WALK_STATE_NO_PATH) {
                  uVar18 = 0x100000004;
                  goto LAB_0051ac8d;
                }
                if (EVar5 != WALK_STATE_NO_PATH) {
                  uVar18 = 0x100000000;
                  goto LAB_0051ac8d;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&(param_1->model).base,0,1);
                engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
              }
              (param_1->model).accumulated_root_motion.z = 0.0;
              (param_1->model).accumulated_root_motion.y =
                   (param_1->model).accumulated_root_motion.z;
              (param_1->model).accumulated_root_motion.x =
                   (param_1->model).accumulated_root_motion.y;
            }
          }
          else {
            fStack_78 = fVar13;
            if (*(int *)(param_1[1].base.actor_name + 0x14) != 0) {
              (**(code **)(*(int *)((int)param_1[2].flames[0x15].base.orient.vec.y + 0x154) + 0x1c))
                        ();
              pfVar15 = afStack_438;
              pfVar16 = &fStack_420;
              for (iVar14 = 6; iVar14 != 0; iVar14 = iVar14 + -1) {
                *pfVar16 = *pfVar15;
                pfVar15 = pfVar15 + (uint)bVar17 * -2 + 1;
                pfVar16 = pfVar16 + (uint)bVar17 * -2 + 1;
              }
              fStack_39c = fStack_420 + fStack_414;
              fStack_398 = fStack_41c + fStack_410;
              fStack_394 = fStack_418 + fStack_40c;
              fStack_168 = fStack_420 + fStack_414;
              afStack_1ac[(uint)bVar17 * -2 + 0x12] = afStack_3bc[(uint)bVar17 * -2 + 9];
              afStack_1ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x13] =
                   afStack_3bc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
              fStack_b4 = fStack_168 * _DAT_005cd14b;
              fStack_b0 = fStack_164 * _DAT_005cd14b;
              fStack_ac = fStack_160 * _DAT_005cd14b;
              fStack_90 = fStack_168 * _DAT_005cd14b;
              afStack_c8[(uint)bVar17 * -2 + 0xf] = afStack_c8[(uint)bVar17 * -2 + 6];
              afStack_c8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10] =
                   afStack_c8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
              core_actor_cpp_FUN_00408b80(param_1[2].flames[0x15].base.orient.vec.y);
              uStack_360 = uStack_21c;
              afStack_38c[(uint)bVar17 * -2 + 0xc] = afStack_32c[(uint)bVar17 * -2 + 0x45];
              afStack_38c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd] =
                   afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x46];
              core_actor_cpp_FUN_00408bf0(param_1);
              uStack_24c = afStack_c8[2];
              afStack_32c[(uint)bVar17 * -2 + 0x39] = afStack_c8[(uint)bVar17 * -2 + 3];
              afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x3a] =
                   afStack_c8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
              uStack_354 = uStack_3c0;
              afStack_38c[(uint)bVar17 * -2 + 0xf] = afStack_3bc[(uint)bVar17 * -2];
              afStack_38c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10] =
                   afStack_3bc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
              fStack_4b0 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0();
              piStack_18 = (int *)fStack_4b0;
              fStack_330 = fStack_414 - fStack_420;
              afStack_32c[0] = fStack_410 - fStack_41c;
              afStack_32c[1] = fStack_40c - fStack_418;
              fStack_180 = fStack_414 - fStack_420;
              afStack_1ac[(uint)bVar17 * -2 + 0xc] = afStack_32c[(uint)bVar17 * -2];
              afStack_1ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd] =
                   afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
              fStack_108 = fStack_180 * _DAT_005cd14b;
              fStack_104 = fStack_17c * _DAT_005cd14b;
              fStack_100 = fStack_178 * _DAT_005cd14b;
              fStack_204 = fStack_180 * _DAT_005cd14b;
              afStack_32c[(uint)bVar17 * -2 + 0x4b] = afStack_140[(uint)bVar17 * -2 + 0xf];
              afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x4c] =
                   afStack_140[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10];
              uStack_200 = 0;
              if ((((fStack_244 - SQRT(fStack_1fc * fStack_1fc + fStack_204 * fStack_204) <
                     (float)_DAT_005cd167) &&
                   (in_stack_fffffb10 = (double)fStack_248, 1.0 < in_stack_fffffb10)) &&
                  (in_stack_fffffb10 < _DAT_005cd16f)) && (ABS(fStack_4b0) < (float)_DAT_005cd177))
              {
                fStack_60 = param_2 * _DAT_005cd17f;
                fStack_74 = -fStack_60;
                if (fStack_4b0 < fStack_74) {
                  fStack_4b0 = fStack_74;
                }
                if (fStack_60 < fStack_4b0) {
                  fStack_4b0 = fStack_60;
                }
                (param_1->base).orient.vec.y = (param_1->base).orient.vec.y + fStack_4b0;
                core_charactr_cpp_FUN_00433220(param_1);
                goto LAB_0051976f;
              }
            }
            if (fStack_78 == 0.0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(param_1->model).base,0,1);
              core_hero_cpp_CHero_stopPushingBox_FUN_004d3850((CHero *)param_1);
            }
          }
        }
        else {
          if (param_1->grabbed_type == 0) {
            core_actor_cpp_FUN_00408bf0(param_1);
            afStack_38c[2] = (float)uStack_144;
            afStack_38c[(uint)bVar17 * -2 + 3] = afStack_140[(uint)bVar17 * -2];
            afStack_38c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
                 afStack_140[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
            uStack_36c = uStack_12c;
            afStack_38c[(uint)bVar17 * -2 + 9] = afStack_140[(uint)bVar17 * -2 + 6];
            afStack_38c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10] =
                 afStack_140[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
            piStack_18 = (int *)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0();
            fStack_38 = (float)piStack_18;
            if ((float)piStack_18 < _DAT_005cd183) {
              fStack_38 = (float)piStack_18 + _DAT_005cd17f;
            }
            if (_DAT_005cd187 < fStack_38) {
              fStack_38 = fStack_38 + _DAT_005cd18b;
            }
            fStack_5c = param_2 * _DAT_005cd17f;
            fStack_68 = -fStack_5c;
            if (fStack_38 < fStack_68) {
              fStack_38 = fStack_68;
            }
            if (fStack_5c < fStack_38) {
              fStack_38 = fStack_5c;
            }
            (param_1->base).orient.vec.y = (param_1->base).orient.vec.y + fStack_38;
            core_charactr_cpp_FUN_00433220(param_1);
          }
          pCStack_7c = (CCharacter *)param_1->grabbed_by;
          pCStack_28 = (pCStack_7c->base).vtable._uc;
          pCStack_1c = &param_1->model;
          core_skeleton_cpp_FUN_0054dcc0(pCStack_1c);
          pCVar19 = &CStack_150;
          CStack_150.x = fStack_1e0;
          *(float *)((int)&CStack_150 + (uint)bVar17 * -8 + 4) =
               afStack_32c[(uint)bVar17 * -2 + 0x54];
          *(float *)((int)&CStack_150 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
               afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x55];
          iVar14 = (*(pCStack_28->_uc).attractActorToward)(pCStack_7c,&param_1->base,pCVar19);
          if (iVar14 == 0) {
            param_1->grabbed_by = (CDemonActor *)0x0;
          }
          else if (param_1->grabbed_by != (CDemonActor *)0x0) {
            fVar13 = param_1[2].flames[0x15].flame_size.z + param_2;
            param_1[2].flames[0x15].flame_size.z = fVar13;
            if ((_DAT_005e3520 <= fVar13) && (param_1->grabbed_type != 1)) {
              pCStack_1c = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc350();
              in_stack_fffffb10 = __BITCAST_DOUBLE(CONCAT44(unaff_EBP,0x51a2ee));
              fVar13 = (float)core_motion_cpp_FUN_004fc350();
              if (fVar13 + (float)pCStack_1c <= 0.0) {
                in_stack_fffffb10 = __BITCAST_DOUBLE(CONCAT44(0x51a902,SUB84(in_stack_fffffb10,0)));
                (*(((param_1->base).vtable._uc)->_uc).releaseFromGrab)(param_1);
              }
              else if ((*(int *)(param_1[1].base.actor_name + 0x14) != 0) || (_DAT_01c5fae4 != 0)) {
                in_stack_fffffb10 = __BITCAST_DOUBLE(CONCAT44(0x30,&param_1->model));
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&(param_1->model).base,0x30,1);
                pCVar10 = param_1 + 1;
                (pCVar10->base).actor_name[0x14] = '\0';
                (pCVar10->base).actor_name[0x15] = '\0';
                (pCVar10->base).actor_name[0x16] = '\0';
                (pCVar10->base).actor_name[0x17] = '\0';
              }
            }
            goto LAB_0051976f;
          }
          in_stack_fffffb10 = (double)ZEXT48(&param_1->model);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&(param_1->model).base,0,1)
          ;
        }
      }
      else {
        (**(code **)(*(int *)((int)fVar4 + 0x154) + 0x98))(fVar4);
        if ((iStack_458 == 0) || (param_1 != pCStack_454)) {
          core_hero_cpp_CHero_stopNearbyInteraction_FUN_004d3af0((CHero *)param_1);
        }
        else {
          fVar13 = pCStack_454[2].flames[0x15].base.orient_matrix.m[0].y;
          pfVar15 = (float *)((int)fVar13 + 0x34 + (uint)bVar17 * -8);
          fStack_2c4 = *(float *)((int)fVar13 + 0x30);
          afStack_32c[(uint)bVar17 * -2 + 0x1b] = *pfVar15;
          afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x1c] = pfVar15[(uint)bVar17 * -2 + 1]
          ;
          fStack_4c = pCStack_454[1].base.orient.vec.y * _DAT_005cd17f * (float)_DAT_005cd18f *
                      param_2;
          if (fStack_4c < fStack_444) {
            fStack_4c = fStack_444;
          }
          if (fStack_448 < fStack_4c) {
            fStack_4c = fStack_448;
          }
          uStack_2c0 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0();
          fStack_48 = param_1[1].base.orient.vec.z * _DAT_005cd17f * (float)_DAT_005cd18f * param_2;
          if (fStack_48 < fStack_43c) {
            fStack_48 = fStack_43c;
          }
          if (fStack_440 < fStack_48) {
            fStack_48 = fStack_440;
          }
          piStack_18 = (int *)uStack_2c0;
          fStack_2c4 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0();
          fVar13 = param_1[2].flames[0x15].base.orient_matrix.m[0].y;
          piStack_18 = (int *)fStack_2c4;
          iVar14 = (**(code **)(*(int *)((int)fVar13 + 0x154) + 0xa0))(fVar13,afStack_32c + 0x1a);
          if (iVar14 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&(param_1->model).base,0,1);
            core_hero_cpp_CHero_stopNearbyInteraction_FUN_004d3af0((CHero *)param_1);
          }
          else {
            fVar13 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0();
            if ((float)_DAT_005cd157 <= fVar13) {
              if ((double)fVar13 <= _DAT_005cd15f) {
                iVar14 = 0;
              }
              else {
                iVar14 = 5;
              }
            }
            else {
              iVar14 = 6;
            }
            piStack_18 = (int *)fVar13;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&(param_1->model).base,iVar14,1);
            pfVar15 = (float *)((int)param_1 + (uint)bVar17 * -8 + 0x34);
            fStack_258 = (param_1->base).orient.vec.x;
            afStack_32c[(uint)bVar17 * -2 + 0x36] = *pfVar15;
            afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x37] =
                 pfVar15[(uint)bVar17 * -2 + 1];
            fStack_254 = fVar13 * *(float *)(param_1[2].flames[0x15].base.create_event + 0x54) +
                         fStack_254;
            core_charactr_cpp_FUN_00433220(param_1);
            fStack_3c4 = fStack_450 + (float)_DAT_005cd197;
            uStack_3cc = 0;
            uStack_3c8 = 0;
            pCStack_28 = (CCharacter_full_vtable *)fStack_3c4;
            core_actor_cpp_FUN_00408b80(param_1[2].flames[0x15].base.orient_matrix.m[0].y);
            fStack_300 = fStack_2a0;
            afStack_32c[(uint)bVar17 * -2 + 0xc] = afStack_32c[(uint)bVar17 * -2 + 0x24];
            afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd] =
                 afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x25];
            pCStack_28 = (CCharacter_full_vtable *)
                         (param_1[2].flames[0x15].base.create_event + 0x54);
            fStack_264 = fStack_300 - (param_1->base).location.position.x;
            fStack_260 = fStack_2fc - (param_1->base).location.position.y;
            fStack_25c = fStack_2f8 - (param_1->base).location.position.z;
            fStack_210 = fStack_264;
            afStack_32c[(uint)bVar17 * -2 + 0x48] = afStack_32c[(uint)bVar17 * -2 + 0x33];
            afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x49] =
                 afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x34];
            core_actor_cpp_FUN_00408b40(param_1);
            fStack_e4 = fStack_15c;
            afStack_140[(uint)bVar17 * -2 + 0x18] = afStack_1ac[(uint)bVar17 * -2 + 0x15];
            afStack_140[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x19] =
                 afStack_1ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x16];
            fStack_2b8 = fStack_e4 * (float)(pCStack_28->_ub).setup;
            pCVar19 = &(param_1->model).accumulated_root_motion;
            fStack_2b4 = fStack_e0 * (float)(pCStack_28->_ub).setup;
            fStack_2b0 = fStack_dc * (float)(pCStack_28->_ub).setup;
            fStack_1f8 = fStack_2b8;
            afStack_32c[(uint)bVar17 * -2 + 0x4e] = afStack_32c[(uint)bVar17 * -2 + 0x1e];
            afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x4f] =
                 afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x1f];
            if (pCVar19 != (CVector3f *)(afStack_32c + 0x4d)) {
              pCVar19->x = fStack_1f8;
              (param_1->model).accumulated_root_motion.y = fStack_1f4;
              (param_1->model).accumulated_root_motion.z = fStack_1f0;
            }
            (param_1->model).accumulated_root_motion.y = 0.0;
          }
        }
      }
    }
    else {
      piStack_18 = (int *)core_motion_cpp_FUN_004fc350(&param_1->model);
      if (0.0 < (float)piStack_18) {
        if ((param_1->base).location.position.y <
            *(float *)(*(int *)(param_1[2].flames[0x15].base.create_event + 0x40) + 0x24) + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&(param_1->model).base,0,1)
          ;
        }
      }
      else {
        pCVar9 = param_1[2].flames + 0x15;
        (pCVar9->base).create_event[0x40] = '\0';
        (pCVar9->base).create_event[0x41] = '\0';
        (pCVar9->base).create_event[0x42] = '\0';
        (pCVar9->base).create_event[0x43] = '\0';
      }
      if (0.0 < (float)param_1[2].flames[0x15].globe.linear_radius_scaled) {
        if ((float)param_1[2].flames[0x15].globe.linear_radius_scaled <= param_2) {
          param_1[2].flames[0x15].globe.linear_radius_scaled = 0;
          fStack_49c = 1.0;
        }
        else {
          fStack_49c = param_2 / (float)param_1[2].flames[0x15].globe.linear_radius_scaled;
          param_1[2].flames[0x15].globe.linear_radius_scaled =
               (int)((float)param_1[2].flames[0x15].globe.linear_radius_scaled - param_2);
        }
        pfVar15 = &param_1[2].flames[0x15].animation_time;
        pCVar1 = &(param_1->base).location;
        fVar8 = 1.0 - fStack_49c;
        fStack_2e8 = *pfVar15 * fStack_49c;
        fStack_2e4 = (float)param_1[2].flames[0x15].globe.position_scaled.x * fStack_49c;
        fStack_2e0 = (float)param_1[2].flames[0x15].globe.position_scaled.y * fStack_49c;
        fStack_318 = *pfVar15 * fStack_49c;
        afStack_32c[(uint)bVar17 * -2 + 6] = afStack_32c[(uint)bVar17 * -2 + 0x12];
        afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
             afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x13];
        fVar13 = (param_1->base).location.position.y;
        fVar4 = (param_1->base).location.position.z;
        (pCVar1->position).x = (pCVar1->position).x + fStack_318;
        (param_1->base).location.position.y = fVar13 + fStack_314;
        (param_1->base).location.position.z = fVar4 + fStack_310;
        fVar13 = (float)param_1[2].flames[0x15].globe.position_scaled.x;
        fVar4 = (float)param_1[2].flames[0x15].globe.position_scaled.y;
        *pfVar15 = *pfVar15 * fVar8;
        param_1[2].flames[0x15].globe.position_scaled.x = (int)(fVar13 * fVar8);
        param_1[2].flames[0x15].globe.position_scaled.y = (int)(fVar4 * fVar8);
        fStack_54 = fVar8;
        piStack_18 = (int *)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0();
        param_1->turn_angle_accumulator = (float)piStack_18 * fStack_49c;
      }
      fVar13 = (*((param_1->base).vtable._ub)->cylinderGroundCheck)
                         (&param_1->base,*(float *)&param_1->field_0x326c,(CVector3f *)0x0);
      param_1->closest_distance_threshold = fVar13;
    }
  }
  else {
    piStack_18 = (int *)core_motion_cpp_FUN_004fc350(&param_1->model);
    if (0.0 < (float)piStack_18) {
      core_actor_cpp_FUN_00408b80(param_1[2].flames[0x15].base.orient_matrix.m[0].x);
      uStack_120 = uStack_2f4;
      afStack_140[(uint)bVar17 * -2 + 9] = afStack_32c[(uint)bVar17 * -2 + 0xf];
      afStack_140[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10] =
           afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10];
      if (fStack_11c + (float)_DAT_005cd19f < (param_1->base).location.position.y) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&(param_1->model).base,0,1);
      }
    }
    else {
      param_1[2].flames[0x15].base.orient_matrix.m[0].x = 0.0;
    }
    if (0.0 < (float)param_1[2].flames[0x15].globe.linear_radius_scaled) {
      if ((float)param_1[2].flames[0x15].globe.linear_radius_scaled <= param_2) {
        param_1[2].flames[0x15].globe.linear_radius_scaled = 0;
        fStack_4a4 = 1.0;
      }
      else {
        fStack_4a4 = param_2 / (float)param_1[2].flames[0x15].globe.linear_radius_scaled;
        param_1[2].flames[0x15].globe.linear_radius_scaled =
             (int)((float)param_1[2].flames[0x15].globe.linear_radius_scaled - param_2);
      }
      pfVar15 = &param_1[2].flames[0x15].animation_time;
      pCVar1 = &(param_1->base).location;
      fVar8 = 1.0 - fStack_4a4;
      afStack_32c[2] = *pfVar15 * fStack_4a4;
      afStack_32c[3] = (float)param_1[2].flames[0x15].globe.position_scaled.x * fStack_4a4;
      fStack_31c = (float)param_1[2].flames[0x15].globe.position_scaled.y * fStack_4a4;
      fStack_1c8 = *pfVar15 * fStack_4a4;
      afStack_32c[(uint)bVar17 * -2 + 0x5a] = afStack_32c[(uint)bVar17 * -2 + 3];
      afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x5b] =
           afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
      fVar13 = (param_1->base).location.position.y;
      fVar4 = (param_1->base).location.position.z;
      (pCVar1->position).x = (pCVar1->position).x + fStack_1c8;
      (param_1->base).location.position.y = fVar13 + fStack_1c4;
      (param_1->base).location.position.z = fVar4 + fStack_1c0;
      fVar13 = (float)param_1[2].flames[0x15].globe.position_scaled.x;
      fVar4 = (float)param_1[2].flames[0x15].globe.position_scaled.y;
      *pfVar15 = *pfVar15 * fVar8;
      param_1[2].flames[0x15].globe.position_scaled.x = (int)(fVar13 * fVar8);
      param_1[2].flames[0x15].globe.position_scaled.y = (int)(fVar4 * fVar8);
      fStack_64 = fVar8;
      piStack_18 = (int *)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0();
      param_1->turn_angle_accumulator = (float)piStack_18 * fStack_4a4;
    }
  }
LAB_0051976f:
  if (0.0 < (float)param_1[2].flames[0x15].globe.corona_mode) {
    if ((float)param_1[2].flames[0x15].globe.corona_mode <= param_2) {
      param_1[2].flames[0x15].globe.corona_mode = 0;
      fStack_4a8 = 1.0;
    }
    else {
      fStack_4a8 = param_2 / (float)param_1[2].flames[0x15].globe.corona_mode;
      param_1[2].flames[0x15].globe.corona_mode =
           (int)((float)param_1[2].flames[0x15].globe.corona_mode - param_2);
    }
    piStack_18 = &param_1[2].flames[0x15].globe.quadratic_radius_scaled;
    fStack_3a8 = (float)*piStack_18 * fStack_4a8;
    fStack_3a4 = (float)param_1[2].flames[0x15].globe.falloff_value * fStack_4a8;
    fStack_3a0 = param_1[2].flames[0x15].globe.radius_squared * fStack_4a8;
    fStack_f0 = fStack_3a8;
    afStack_140[(uint)bVar17 * -2 + 0x15] = afStack_3bc[(uint)bVar17 * -2 + 6];
    afStack_140[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x16] =
         afStack_3bc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
    core_actor_cpp_FUN_00408b40(param_1);
    pCVar19 = &(param_1->model).accumulated_root_motion;
    afStack_140[2] = fStack_a8;
    afStack_140[(uint)bVar17 * -2 + 3] = afStack_c8[(uint)bVar17 * -2 + 9];
    afStack_140[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
         afStack_c8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
    fVar13 = (param_1->model).accumulated_root_motion.y;
    fVar4 = (param_1->model).accumulated_root_motion.z;
    fStack_58 = 1.0 - fStack_4a8;
    pCVar19->x = pCVar19->x + afStack_140[2];
    (param_1->model).accumulated_root_motion.y = fVar13 + afStack_140[3];
    (param_1->model).accumulated_root_motion.z = fVar4 + fStack_130;
    *piStack_18 = (int)((float)*piStack_18 * fStack_58);
    piStack_18[1] = (int)((float)piStack_18[1] * fStack_58);
    piStack_18[2] = (int)((float)piStack_18[2] * fStack_58);
    piStack_18 = (int *)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0();
    param_1->turn_angle_accumulator = (float)piStack_18 * fStack_4a8;
  }
  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&(param_1->model).base);
  if ((*(int *)(pSVar12 + 0x24) == 0x26) &&
     (this_ptr = (CAmmoBox *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (param_1[2].flames[0x15].base.orient.vec.x), this_ptr != (CAmmoBox *)0x0)
     ) {
    piStack_18 = (int *)core_motion_cpp_FUN_004fc930(&(param_1->model).base);
    core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e6b0(this_ptr,(float)piStack_18);
  }
  core_charactr_cpp_FUN_0042cd30(param_1);
  core_prye_cpp_FUN_0051e380(param_1);
  if (iStack_70 != 0) {
    param_1[2].flames[0x15].base.scale.y = 0;
    param_1[2].flames[0x15].base.scale.x = param_1[2].flames[0x15].base.scale.y;
    param_1[2].flames[0x15].base.process_disabled = param_1[2].flames[0x15].base.scale.x;
  }
  if ((param_1[2].flames[0x15].base.orient_matrix.m[0].x == 0.0) &&
     (*(int *)(param_1[2].flames[0x15].base.create_event + 0x40) == 0)) {
    if (iStack_44 == 0) goto LAB_005199e6;
    pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                        (&(param_1->model).base);
    iVar14 = *(int *)(pSVar12 + 0x24);
    pCVar19 = &(param_1->model).accumulated_root_motion;
    fStack_228 = pCVar19->x + (param_1->position_delta).x;
    fStack_224 = (param_1->model).accumulated_root_motion.y + (param_1->position_delta).y;
    fStack_220 = (param_1->model).accumulated_root_motion.z + (param_1->position_delta).z;
    CStack_d8.x = fStack_228;
    *(float *)((int)&CStack_d8 + (uint)bVar17 * -8 + 4) = afStack_32c[(uint)bVar17 * -2 + 0x42];
    *(float *)((int)&CStack_d8 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x43];
    (param_1->model).accumulated_root_motion.z = 0.0;
    (param_1->model).accumulated_root_motion.y = (param_1->model).accumulated_root_motion.z;
    pCVar19->x = (param_1->model).accumulated_root_motion.y;
    (param_1->position_delta).z = 0.0;
    (param_1->position_delta).y = (param_1->position_delta).z;
    (param_1->position_delta).x = (param_1->position_delta).y;
    if (iVar14 == 0x1a) {
      CStack_d8.z = 0.0;
      CStack_d8.y = 0.0;
      CStack_d8.x = 0.0;
      fVar13 = (param_1->velocity).y - param_2 * (float)_DAT_005cd1a7;
      pCVar9 = param_1[2].flames;
      pCVar9[0x15].base.footstep_sound_code[0] = -0x66;
      pCVar9[0x15].base.footstep_sound_code[1] = '?';
      pCVar9[0x15].base.footstep_sound_code[2] = '\x1c';
      pCVar9[0x15].base.footstep_sound_code[3] = 'F';
    }
    else {
      if (iVar14 == 0x1b) {
        CStack_d8.z = 0.0;
        CStack_d8.y = 0.0;
        CStack_d8.x = 0.0;
      }
      fVar13 = (param_1->velocity).y - param_2 * (float)_DAT_005cd1a7;
    }
    (param_1->velocity).y = fVar13;
    iStack_50 = iVar14;
    core_actor_cpp_FUN_00408b40(param_1);
    fStack_27c = fStack_240;
    afStack_32c[(uint)bVar17 * -2 + 0x2d] = afStack_32c[(uint)bVar17 * -2 + 0x3c];
    afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x2e] =
         afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x3d];
    fStack_378 = (param_1->velocity).x * param_2;
    pCVar19 = &CStack_d8;
    fStack_374 = (param_1->velocity).y * param_2;
    fStack_370 = (param_1->velocity).z * param_2;
    fStack_288 = fStack_378;
    afStack_32c[(uint)bVar17 * -2 + 0x2a] = afStack_38c[(uint)bVar17 * -2 + 6];
    afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x2b] =
         afStack_38c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
    fStack_cc = fStack_288 + fStack_27c;
    afStack_c8[0] = fStack_284 + fStack_278;
    afStack_c8[1] = fStack_280 + fStack_274;
    fStack_18c = fStack_288 + fStack_27c;
    afStack_1ac[(uint)bVar17 * -2 + 9] = afStack_c8[(uint)bVar17 * -2];
    afStack_1ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10] =
         afStack_c8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
    CStack_d8.x = CStack_d8.x + fStack_18c;
    CStack_d8.y = CStack_d8.y + fStack_188;
    CStack_d8.z = CStack_d8.z + fStack_184;
    param_1[2].flames[0x15].globe.radius = (param_1->velocity).y;
    core_charactr_cpp_FUN_0042c230(param_1,pCVar19);
    if ((param_1->base).location.position.y <
        param_1->closest_distance_threshold + (float)_DAT_005cd1af) {
      param_1->is_on_ground = 1;
    }
    if ((iStack_50 == 0x1a) && (param_1->is_on_ground != 0)) {
      engine_console_cpp_FUN_00441ff0
                (g_CConsolePtr,"Splat at %3.2f fps\n",(double)(param_1->velocity).y);
      fVar13 = -param_1[2].flames[0x15].globe.radius;
      if (fVar13 < (float)_DAT_005cd1b7) {
        if (iStack_50 == 0x1a) goto LAB_0051b278;
LAB_0051b287:
        (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                  (&param_1->base,(CVector3f *)&DAT_02cfd900,fVar13 * _DAT_005cd1d7 + 1.0);
        goto LAB_0051b2ad;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_494);
      fVar4 = (fVar13 + (float)_DAT_005cd1bf) * (float)_DAT_005cd1c7 * (float)_DAT_005cd1cf;
      fStack_490 = fVar4;
      if (0x42c80000 < (int)fVar4) {
        fStack_490 = 9999.0;
      }
      pCVar7 = (param_1->base).vtable._uc;
      param_1[1].base.actor_name[0] = '\0';
      param_1[1].base.actor_name[1] = '\0';
      param_1[1].base.actor_name[2] = '\0';
      param_1[1].base.actor_name[3] = '\0';
      (*(pCVar7->_uc).processDamage)(param_1,aSStack_494);
      if ((0.0 < param_1->hit_points) && ((int)fVar4 < 0x42c80001)) {
        in_stack_fffffb10 = 2.12199580479911e-314;
LAB_0051b278:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(param_1->model).base,SUB84(in_stack_fffffb10,0),
                   (int)((ulonglong)in_stack_fffffb10 >> 0x20));
        goto LAB_0051b287;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&(param_1->model).base,0x1d,1);
      (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"fall-?.wav");
      iVar14 = param_1->is_on_ground;
      fVar13 = 0x3F000000;
    }
    else {
LAB_0051b2ad:
      iVar14 = param_1->is_on_ground;
      fVar13 = 0x3F000000;
    }
    0x3F000000 = fVar13;
    if (iVar14 == 0) {
      *(float *)param_1[2].flames[0x15].base.footstep_sound_code =
           *(float *)param_1[2].flames[0x15].base.footstep_sound_code + param_2;
      fStack_488 = fVar13;
      if (iStack_40 == 4) {
        fStack_488 = fVar13 * (float)_DAT_005cd14f;
      }
      if ((fStack_488 < *(float *)param_1[2].flames[0x15].base.footstep_sound_code) ||
         (param_1[2].flames[0x15].globe.radius < (float)_DAT_005cd1bf)) {
        if (iStack_40 != 0x1a) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(param_1->model).base,0x1a,1);
        }
        param_1->is_on_ground = 0;
      }
      goto LAB_005199e6;
    }
  }
  else {
    pCStack_28 = (CCharacter_full_vtable *)&(param_1->model).accumulated_root_motion;
    core_actor_cpp_FUN_00408b00(param_1);
    pCVar1 = &(param_1->base).location;
    fStack_2ac = fStack_294;
    afStack_32c[(uint)bVar17 * -2 + 0x21] = afStack_32c[(uint)bVar17 * -2 + 0x27];
    afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x22] =
         afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x28];
    fVar13 = (param_1->base).location.position.y;
    fVar4 = (param_1->base).location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_2ac;
    (param_1->base).location.position.y = fVar13 + fStack_2a8;
    (param_1->base).location.position.z = fVar4 + fStack_2a4;
    (pCStack_28->_ub).vfunc2 = (CDemonActor_vfunc2 *)0x0;
    (pCStack_28->_ub).markResourcesInUse =
         (CDemonActor_markResourcesInUse *)(pCStack_28->_ub).vfunc2;
    (pCStack_28->_ub).setup = (CDemonActor_setup *)(pCStack_28->_ub).markResourcesInUse;
  }
  pCVar9 = param_1[2].flames;
  pCVar9[0x15].base.footstep_sound_code[0] = '\0';
  pCVar9[0x15].base.footstep_sound_code[1] = '\0';
  pCVar9[0x15].base.footstep_sound_code[2] = '\0';
  pCVar9[0x15].base.footstep_sound_code[3] = '\0';
LAB_005199e6:
  param_1[2].flames[0x15].base.scale.y = 0;
  param_1[2].flames[0x15].base.scale.x = param_1[2].flames[0x15].base.scale.y;
  param_1[2].flames[0x15].base.process_disabled = param_1[2].flames[0x15].base.scale.x;
  pCVar11 = g_CGamePtr;
  if (iStack_3c != 0) {
    if ((param_1[1].base.location.position.y != 0.0) ||
       ((*(int *)(param_1[1].base.actor_name + 0x14) != 0 &&
        (param_1[2].flames[0x15].base.health == 0)))) {
      if (param_1[2].flames[0x15].base.health == 0) {
        if ((*(int *)&param_1->field_0x25b0 == 0) ||
           (*(int *)((int)param_1[2].flames[0x14].flame_size.y + 0x578) == 1)) {
          param_1[2].flames[0x15].base.health = 1;
        }
      }
      else {
        param_1[2].flames[0x15].base.health = 0;
        if (*(int *)&pCVar11->field_0x26c != 0) {
          *(uint *)&pCVar11->field_0x26c = 0;
          (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"flashlit.wav");
        }
      }
    }
    if (param_1[1].base.location.position.x != 0.0) {
      iVar14 = core_actor_cpp_castToClassHash_FUN_0040c840(*(uint *)&param_1->field_0x25b0);
      if (iVar14 == 0) {
        iVar14 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
        if (((iVar14 == 0) || (*(int *)(iVar14 + 0x578) == 1)) &&
           (iVar14 = core_inv_cpp_FUN_004dba80(param_1[2].flames[0x13].base.create_event + 0x50),
           iVar14 != 0)) {
          param_1[2].flames[0x14].render_corona = 8;
        }
      }
      else {
        param_1[2].flames[0x14].render_corona = 9;
      }
    }
    iVar14 = core_actor_cpp_castToClassHash_FUN_0040c840(*(uint *)&param_1->field_0x25b0);
    if ((iVar14 != 0) && (*(int *)(iVar14 + 0x23a0) != 0)) {
      param_1[2].flames[0x15].base.lifecycle_state =
           (EActorLifecycleState)
           (param_1[1].base.orient.vec.z * _DAT_005cd17f * (float)_DAT_005cd14f * param_2 +
           (float)param_1[2].flames[0x15].base.lifecycle_state);
      fStack_6c = (float)core_prye_cpp_FUN_0051c0a0();
      piStack_18 = (int *)fStack_6c;
      fStack_24 = (float)core_prye_cpp_FUN_0051c0f0();
      if ((float)param_1[2].flames[0x15].base.lifecycle_state < fStack_6c) {
        param_1[2].flames[0x15].base.lifecycle_state = (EActorLifecycleState)fStack_6c;
      }
      piStack_18 = (int *)fStack_24;
      if (fStack_24 < (float)param_1[2].flames[0x15].base.lifecycle_state) {
        param_1[2].flames[0x15].base.lifecycle_state = (EActorLifecycleState)fStack_24;
      }
    }
  }
  fVar13 = param_1[2].flames[0x14].flame_size.y;
  if (fVar13 == 0.0) {
    *(uint *)&g_CGamePtr->field_0x26c = 0;
  }
  else if (*(int *)((int)fVar13 + 0x2f0) == 0) {
    *(uint *)&g_CGamePtr->field_0x26c = 0;
  }
  if (iStack_40 != 0) {
    unkafter_prye_cpp_FUN_00524940(param_1);
  }
  if (param_1[2].flames[0x15].base.health == 0) {
    fVar13 = (float)param_1[2].flames[0x15].base.validation_magic - param_2 / _DAT_005e34f0;
    param_1[2].flames[0x15].base.validation_magic = (uintptr_t)fVar13;
    if (fVar13 < 0.0) {
      param_1[2].flames[0x15].base.validation_magic = 0;
    }
  }
  else {
    fVar13 = param_2 / _DAT_005e34ec + (float)param_1[2].flames[0x15].base.validation_magic;
    param_1[2].flames[0x15].base.validation_magic = (uintptr_t)fVar13;
    if (1.0 < fVar13) {
      param_1[2].flames[0x15].base.validation_magic = 0x3f800000;
    }
  }
  fVar13 = *(float *)(param_1[2].flames[0x15].base.create_event + 0x10) - param_2 / _DAT_005e34f4;
  *(float *)(param_1[2].flames[0x15].base.create_event + 0x10) = fVar13;
  if (fVar13 <= 0.0) {
    pCVar9 = param_1[2].flames + 0x15;
    (pCVar9->base).create_event[0x10] = '\0';
    (pCVar9->base).create_event[0x11] = '\0';
    (pCVar9->base).create_event[0x12] = '\0';
    (pCVar9->base).create_event[0x13] = '\0';
  }
  fVar13 = *(float *)(param_1[2].flames[0x15].base.create_event + 0x30) - param_2 / _DAT_005e34f4;
  *(float *)(param_1[2].flames[0x15].base.create_event + 0x30) = fVar13;
  if (fVar13 <= 0.0) {
    pCVar9 = param_1[2].flames + 0x15;
    (pCVar9->base).create_event[0x30] = '\0';
    (pCVar9->base).create_event[0x31] = '\0';
    (pCVar9->base).create_event[0x32] = '\0';
    (pCVar9->base).create_event[0x33] = '\0';
  }
  if (iStack_2c != 0) {
    unkafter_prye_cpp_FUN_00525930();
  }
  core_prye_cpp_FUN_0051c1c0();
  iVar14 = core_actor_cpp_castToClassHash_FUN_0040c840(*(uint *)&param_1->field_0x25b0);
  if ((iVar14 != 0) && (*(int *)(param_1[2].flames[0x15].base.create_event + 0x44) != 0)) {
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(&param_1->model);
    core_prye_cpp_FUN_0051f360(param_1);
    core_prye_cpp_FUN_00523800();
    core_prye_cpp_FUN_0051c1c0();
  }
  unkafter_prye_cpp_FUN_00524170((CStranger *)param_1,param_2,iStack_30);
  unkafter_prye_cpp_FUN_00526cf0();
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350(param_1,param_2);
  piStack_18 = (int *)core_motion_cpp_FUN_004fc350(&param_1->model);
  if ((float)piStack_18 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004d3850((CHero *)param_1);
  }
  else {
    piStack_18 = (int *)core_motion_cpp_FUN_004fc930(&(param_1->model).base);
    if ((1.0 < (float)piStack_18) &&
       (pCStack_20 = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c840
                               (param_1[2].flames[0x15].base.orient.vec.y),
       pCStack_20 != (CBoxActor *)0x0)) {
      core_prye_cpp_FUN_0051c100();
      uStack_348 = uStack_30c;
      afStack_38c[(uint)bVar17 * -2 + 0x12] = afStack_32c[(uint)bVar17 * -2 + 9];
      afStack_38c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x13] =
           afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
      core_actor_cpp_FUN_00408b80(param_1);
      fStack_2d0 = fStack_1d4;
      afStack_32c[(uint)bVar17 * -2 + 0x18] = afStack_32c[(uint)bVar17 * -2 + 0x57];
      afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x19] =
           afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x58];
      fStack_1bc = fStack_2d0 - CStack_3d8.x;
      fStack_1b8 = fStack_2cc - CStack_3d8.y;
      fStack_1b4 = fStack_2c8 - CStack_3d8.z;
      CStack_33c.x = fStack_2d0 - CStack_3d8.x;
      *(float *)((int)&CStack_33c + (uint)bVar17 * -8 + 4) = afStack_32c[(uint)bVar17 * -2 + 0x5d];
      *(float *)((int)&CStack_33c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x5e];
      CStack_33c.y = 0.0;
      core_actor_cpp_FUN_00408b40(param_1);
      uStack_1ec = uStack_2dc;
      afStack_32c[(uint)bVar17 * -2 + 0x51] = afStack_32c[(uint)bVar17 * -2 + 0x15];
      afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x52] =
           afStack_32c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x16];
      if (0.0 < fStack_1e4) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_0041ff20(pCStack_20,&CStack_3d8,&CStack_33c);
      }
    }
  }
  core_prye_cpp_FUN_0051f360(param_1,0);
  core_prye_cpp_FUN_00522b00(param_1,0,param_2);
  core_prye_cpp_FUN_00522b00(param_1,1,param_2);
  unkafter_prye_cpp_FUN_005263c0(param_1,param_2);
  core_inv_cpp_FUN_004dcdb0();
  unkafter_prye_cpp_FUN_00526dc0(param_1,param_2);
  iVar14 = core_actor_cpp_castToClassHash_FUN_0040c840
                     (*(uint *)&param_1->field_0x25b0,DAT_007e1a50);
  if (iVar14 != 0) {
    *(uint *)(iVar14 + 0x23a0) = 1;
    (**(code **)(*(int *)(*(int *)&param_1->field_0x25b0 + 0x154) + 0xc))
              (*(int *)&param_1->field_0x25b0,param_2);
  }
  if (iStack_2c == 0) {
    core_hero_cpp_FUN_004d3210();
  }
  else {
    param_2 = *(float *)(param_1[2].flames[0x15].base.actor_name + 0x14) + param_2;
    *(float *)(param_1[2].flames[0x15].base.actor_name + 0x14) = param_2;
    if ((float)_DAT_005cd1df < param_2) {
      core_hero_cpp_FUN_004d4900(param_1,1);
    }
  }
  iVar14 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
  if ((iVar14 != 0) && (*(int *)(iVar14 + 0xfc) != 0)) {
    (param_1->base).is_transparent = 1;
    return;
  }
  return;
}
