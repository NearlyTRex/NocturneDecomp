// Name: core_doc.cpp_FUN_00469550
// Address: 00469550
// Address Range: [[00469550, 0046bdd0]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00469550(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00469550(CCharacter *param_1,float param_2)

{
  CLocation *pCVar1;
  char *pcVar2;
  CDeformableModelInstance *pCVar3;
  int *piVar4;
  float fVar5;
  EWalkState EVar6;
  CCharacter_full_vtable *pCVar7;
  float fVar8;
  CFlame *pCVar9;
  CCharacter *pCVar10;
  CGame *pCVar11;
  SMotion *pSVar12;
  CAmmoBox *this_ptr;
  float fVar13;
  CDemonActor *pCVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  float *pfVar18;
  int desired_state_index;
  CInventory *pCVar19;
  uint *puVar20;
  float *pfVar21;
  byte bVar22;
  float afStackY_13b8 [944];
  ulonglong uVar23;
  CVector3f *pCVar24;
  double in_stack_fffffb18;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  CCharacter_full_vtable *pCStack_490;
  SDamageInfo aSStack_48c [4];
  float fStack_488;
  int iStack_450;
  CCharacter *pCStack_44c;
  float fStack_448;
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float afStack_430 [6];
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  uint local_400;
  uint uStack_3fc;
  uint uStack_3f8;
  uint uStack_3f4;
  uint uStack_3f0;
  uint uStack_3ec;
  uint local_3e8 [6];
  float fStack_3d0;
  float afStack_3cc [5];
  float fStack_3b8;
  CVector3f CStack_3ac;
  uint uStack_3a0;
  float afStack_39c [5];
  uint uStack_388;
  float fStack_384;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  uint uStack_370;
  float fStack_364;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_340;
  float fStack_33c;
  uint uStack_334;
  float fStack_32c;
  float fStack_328;
  float fStack_31c;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  CVector3f CStack_2c8;
  float fStack_2bc;
  float afStack_2b8 [4];
  float fStack_2a8;
  uint uStack_2a4;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  uint uStack_244;
  CVector3f CStack_238;
  float fStack_22c;
  float afStack_228 [4];
  float fStack_218;
  uint uStack_214;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  CCharacter_full_vtable *pCStack_1fc;
  float afStack_1f8 [4];
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  uint uStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  float fStack_1c0;
  CVector3f CStack_1b4;
  float fStack_1a8;
  float afStack_1a4 [4];
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  uint uStack_178;
  uint uStack_16c;
  uint uStack_160;
  uint uStack_154;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  uint uStack_13c;
  float fStack_130;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint uStack_118;
  float fStack_10c;
  uint uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  uint uStack_d0;
  uint uStack_c4;
  float fStack_b8;
  uint uStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint uStack_94;
  uint uStack_90;
  CCharacter_full_vtable *pCStack_8c;
  float fStack_88;
  float afStack_84 [4];
  char *pcStack_74;
  CCharacter *pCStack_70;
  int iStack_6c;
  CBoxActor *pCStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CDeformableModelInstance *pCStack_4c;
  CCharacter_full_vtable *pCStack_48;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  float fStack_2c;
  int local_28;
  uint uStack_24;
  int iStack_20;
  CInventory *pCStack_1c;
  CCharacter_full_vtable *pCStack_18;
  
  bVar22 = 0;
  local_28 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                       (0x01C51D80,"?DebugActionPending" + 1);
  if ((*(int *)&param_1->field_0x2628 != 0) &&
     (*(float *)(param_1[2].flames[0x1a].off_event + 0x44) < _DAT_005d9d70)) {
    (**(code **)(*(int *)(*(int *)&param_1->field_0x2628 + 0x154) + 0x1c))();
    puVar17 = local_3e8;
    puVar20 = &local_400;
    for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar20 = *puVar17;
      puVar17 = puVar17 + (uint)bVar22 * -2 + 1;
      puVar20 = puVar20 + (uint)bVar22 * -2 + 1;
    }
    pcVar2 = param_1[2].flames[0x1a].off_event + 0x38;
    if (pcVar2 != (char *)&local_400) {
      *(uint *)pcVar2 = local_400;
      *(uint *)(param_1[2].flames[0x1a].off_event + 0x3c) = uStack_3fc;
      *(uint *)(param_1[2].flames[0x1a].off_event + 0x40) = uStack_3f8;
    }
    pcVar2 = param_1[2].flames[0x1a].off_event + 0x44;
    if (pcVar2 != (char *)&uStack_3f4) {
      *(uint *)pcVar2 = uStack_3f4;
      *(uint *)(param_1[2].flames[0x1a].off_event + 0x48) = uStack_3f0;
      *(uint *)(param_1[2].flames[0x1a].off_event + 0x4c) = uStack_3ec;
    }
    fStack_dc = *(float *)(param_1[2].flames[0x1a].off_event + 0x38) +
                *(float *)(param_1[2].flames[0x1a].off_event + 0x44);
    fStack_d8 = *(float *)(param_1[2].flames[0x1a].off_event + 0x3c) +
                *(float *)(param_1[2].flames[0x1a].off_event + 0x48);
    fStack_d4 = *(float *)(param_1[2].flames[0x1a].off_event + 0x40) +
                *(float *)(param_1[2].flames[0x1a].off_event + 0x4c);
    fStack_184 = fStack_dc;
    afStack_1a4[(uint)bVar22 * -2 + 9] = afStack_1a4[(uint)bVar22 * -2 + 0x33];
    afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10] =
         afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x34];
    fStack_124 = fStack_184 * _DAT_005d9d74;
    fStack_120 = fStack_180 * _DAT_005d9d74;
    fStack_11c = fStack_17c * _DAT_005d9d74;
    fStack_31c = fStack_184 * _DAT_005d9d74;
    afStack_39c[(uint)bVar22 * -2 + 0x21] = afStack_1a4[(uint)bVar22 * -2 + 0x21];
    afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x22] =
         afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x22];
    core_actor_cpp_FUN_00408b40(*(uint *)&param_1->field_0x2628);
    uStack_3a0 = uStack_370;
    afStack_39c[(uint)bVar22 * -2] = afStack_39c[(uint)bVar22 * -2 + 0xc];
    afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
         afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xd];
    core_actor_cpp_FUN_00408bb0(param_1);
    pcVar2 = param_1[2].flames[0x1a].off_event + 0x2c;
    fStack_1cc = fStack_328;
    afStack_1f8[(uint)bVar22 * -2 + 0xc] = afStack_39c[(uint)bVar22 * -2 + 0x1e];
    afStack_1f8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xd] =
         afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x1f];
    if ((float *)pcVar2 != afStack_1f8 + 0xb) {
      *(float *)pcVar2 = fStack_1cc;
      *(uint *)(param_1[2].flames[0x1a].off_event + 0x30) = uStack_1c8;
      *(uint *)(param_1[2].flames[0x1a].off_event + 0x34) = uStack_1c4;
    }
  }
  core_game_cpp_CGame_slamDT_FUN_004d7f50(g_CGamePtr,param_2);
  core_charactr_cpp_FUN_00434790(param_1);
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
  core_doc_cpp_FUN_0046c9e0();
  uStack_244 = afStack_39c[2];
  afStack_2b8[(uint)bVar22 * -2 + 0x1e] = afStack_39c[(uint)bVar22 * -2 + 3];
  afStack_2b8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x1f] =
       afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
  core_actor_cpp_FUN_00408b40(param_1);
  uVar23 = CONCAT44(param_2,param_1);
  CStack_3ac.x = fStack_268;
  *(float *)((int)&CStack_3ac + (uint)bVar22 * -8 + 4) = afStack_2b8[(uint)bVar22 * -2 + 0x15];
  *(float *)((int)&CStack_3ac + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
       afStack_2b8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x16];
  core_doc_cpp_FUN_0046bde0(uVar23);
  iStack_30 = 1;
  iStack_38 = 1;
  iStack_34 = 1;
  iStack_20 = 1;
  uStack_24 = 1;
  if (param_1->grabbed_by != (CDemonActor *)0x0) {
    iStack_30 = 0;
    iStack_34 = 0;
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_38 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if (param_1[2].flames[0x1a].flame_size.x != 0.0) {
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    iStack_34 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if ((param_1[2].flames[0x1a].flame_size.z != 0.0) ||
     (*(int *)(param_1[2].flames[0x1a].on_event + 0x24) != 0)) {
    iStack_38 = 0;
    iStack_34 = 0;
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if ((param_1[2].flames[0x1a].base.vtable._ub != (CDemonActor_vtable *)0x0) ||
     (param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y == 5.60519e-45)) {
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  pCVar3 = &param_1->model;
  pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(pCVar3);
  if (((((0.0 < (float)pCStack_18) ||
        (pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(pCVar3),
        0.0 < (float)pCStack_18)) ||
       (pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(pCVar3),
       0.0 < (float)pCStack_18)) ||
      ((pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(pCVar3),
       0.0 < (float)pCStack_18 ||
       (pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(pCVar3),
       0.0 < (float)pCStack_18)))) || (param_1->hit_points <= 0.0)) {
    iStack_34 = 0;
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(&param_1->model);
  if (((0.0 < (float)pCStack_18) ||
      (param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y == 7.00649e-45)) ||
     (param_1[2].flames[0x1a].base.prev_actor != (CDemonActor *)0x0)) {
    uStack_24 = 0;
    iStack_30 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(&param_1->model);
  if (((0.0 < (float)pCStack_18) ||
      (param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y == 7.00649e-45)) ||
     (param_1[2].flames[0x1a].base.prev_actor != (CDemonActor *)0x0)) {
    uStack_24 = 0;
    iStack_30 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(&param_1->model);
  if (0.0 < (float)pCStack_18) {
    iStack_34 = 0;
    iStack_20 = 0;
    iStack_38 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y == 1.4013e-45) {
    uStack_24 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y == 2.8026e-45) {
    uStack_24 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y == 8.40779e-45) {
    uStack_24 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y == 4.2039e-45) {
    uStack_24 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y == 9.80909e-45) {
    uStack_24 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if ((param_1[2].flames[0x1a].flame_size.y != 0.0) ||
     (pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(&param_1->model),
     0.0 < (float)pCStack_18)) {
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    iStack_34 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"leverToPull=%s\n");
    }
  }
  if (param_1->grabbed_by == (CDemonActor *)0x0) {
    if ((param_1->base).standing_platform != (CPlatform *)0x0) {
      iStack_38 = 1;
    }
    if ((param_1->base).location.position.y != param_1->closest_distance_threshold) {
      iStack_38 = 1;
    }
  }
  *(float *)&param_1->field_0x2524 = (param_1->model).accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(param_1);
  if (param_1[2].flames[0x1a].animation_time == 0.0) {
    fVar13 = *(float *)(param_1[2].flames[0x1a].on_event + 0x38) -
             param_2 * (float)_DAT_005d9d7c * (float)_DAT_005d9d7c;
    *(float *)(param_1[2].flames[0x1a].on_event + 0x38) = fVar13;
    if (fVar13 < 0.0) {
      pCVar9 = param_1[2].flames;
      pCVar9[0x1a].on_event[0x38] = '\0';
      pCVar9[0x1a].on_event[0x39] = '\0';
      pCVar9[0x1a].on_event[0x3a] = '\0';
      pCVar9[0x1a].on_event[0x3b] = '\0';
    }
  }
  else {
    fVar13 = param_2 * (float)_DAT_005d9d7c + *(float *)(param_1[2].flames[0x1a].on_event + 0x38);
    *(float *)(param_1[2].flames[0x1a].on_event + 0x38) = fVar13;
    if (1.0 < fVar13) {
      pCVar9 = param_1[2].flames;
      pCVar9[0x1a].on_event[0x38] = '\0';
      pCVar9[0x1a].on_event[0x39] = '\0';
      pCVar9[0x1a].on_event[0x3a] = -0x80;
      pCVar9[0x1a].on_event[0x3b] = '?';
    }
  }
  fVar13 = param_1[2].flames[0x1a].flame_size.z;
  iStack_6c = 1;
  if (fVar13 == 0.0) {
    if (*(int *)(param_1[2].flames[0x1a].on_event + 0x24) == 0) {
      fVar5 = param_1[2].flames[0x1a].animation_time;
      if (fVar5 == 0.0) {
        if (param_1->grabbed_by == (CDemonActor *)0x0) {
          fVar5 = param_1[2].flames[0x1a].flame_size.x;
          if (fVar5 == 0.0) {
            iVar16 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240(param_1,param_2);
            if (iVar16 == 0) {
              if (iStack_30 != 0) {
                pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                    (&(param_1->model).base);
                uVar15 = *(uint *)(pSVar12 + 0x24);
                if ((((uVar15 < 9) || (uVar15 < 10)) || (uVar15 < 0xe)) || (uVar15 < 0xf)) {
LAB_0046b39a:
                  if (param_1->is_on_ground != 0) {
                    desired_state_index = 0;
                    pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                        (&(param_1->model).base);
                    iVar16 = *(int *)(pSVar12 + 0x24);
                    if (*(int *)(param_1[1].base.actor_name + 8) == 0) {
                      if (*(int *)(param_1[1].base.actor_name + 0xc) == 0) {
                        fVar13 = (float)param_1[1].base.location.area_id;
                        in_stack_fffffb18 = (double)fVar13;
                        if ((float)_DAT_005d9d84 <= fVar13) {
                          if (_DAT_005d9d8c < in_stack_fffffb18) {
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
                        fVar13 = (float)param_1[1].base.location.area_id;
                        if ((float)_DAT_005d9d84 <= fVar13) {
                          if ((double)fVar13 <= _DAT_005d9d8c) {
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
                        fVar13 = (float)param_1[1].base.location.area_id;
                        if ((float)_DAT_005d9d84 <= fVar13) {
                          if ((double)fVar13 <= _DAT_005d9d8c) {
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
                      fVar13 = (float)param_1[1].base.location.area_id;
                      if ((float)_DAT_005d9d84 <= fVar13) {
                        if ((double)fVar13 <= _DAT_005d9d8c) {
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
                      fVar13 = (float)param_1[1].base.location.area_id;
                      if ((float)_DAT_005d9d84 <= fVar13) {
                        if ((double)fVar13 <= _DAT_005d9d8c) {
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
                    if ((param_1[1].base.location.position.z != 0.0) &&
                       (param_1->layer_action_index != 0xe)) {
                      pCVar9 = param_1[2].flames + 0x1b;
                      (pCVar9->base).actor_name[0x14] = '\0';
                      (pCVar9->base).actor_name[0x15] = '\0';
                      (pCVar9->base).actor_name[0x16] = '\0';
                      (pCVar9->base).actor_name[0x17] = '\0';
                      pCVar9 = param_1[2].flames + 0x1b;
                      (pCVar9->base).actor_name[0x10] = '\x01';
                      (pCVar9->base).actor_name[0x11] = '\0';
                      (pCVar9->base).actor_name[0x12] = '\0';
                      (pCVar9->base).actor_name[0x13] = '\0';
                    }
                    if (*(int *)(param_1[2].flames[0x1b].base.actor_name + 0x10) == 0) {
                      fVar13 = param_1[1].base.orient.vec.x * *(float *)&param_1->field_0x2528;
                      param_1->turn_angle_accumulator = fVar13;
                      *(float *)(param_1[2].flames[0x1a].on_event + 0x48) =
                           *(float *)(param_1[2].flames[0x1a].on_event + 0x48) - fVar13;
                    }
                    if (desired_state_index != iVar16) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                                (&(param_1->model).base,desired_state_index,1);
                    }
                    if (*(int *)(param_1[1].base.actor_name + 0x18) != 0) {
                      core_hero_cpp_CHero_tryUseSelectedItem_FUN_004ec020((CHero *)param_1);
                    }
                  }
                  iStack_6c = 0;
                }
                else if (uVar15 < 0x75) {
                  if ((uVar15 < 0x10) || (uVar15 == 0x10)) goto LAB_0046b39a;
                }
                else if (((0x75 < uVar15) && (0x77 < uVar15)) &&
                        ((uVar15 < 0x79 || (uVar15 == 0x79)))) {
                  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                      (&(param_1->model).base);
                  iVar16 = 0x78;
                  if (*(int *)(param_1[1].base.actor_name + 8) != 0) {
                    iVar16 = 0x79;
                  }
                  if (iVar16 != *(int *)(pSVar12 + 0x24)) {
                    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                              (&(param_1->model).base,iVar16,1);
                  }
                  if (*(int *)(param_1[2].flames[0x1b].base.actor_name + 0x10) == 0) {
                    fVar13 = param_1[1].base.orient.vec.x * *(float *)&param_1->field_0x2528;
                    param_1->turn_angle_accumulator = fVar13;
                    *(float *)(param_1[2].flames[0x1a].on_event + 0x48) =
                         *(float *)(param_1[2].flames[0x1a].on_event + 0x48) - fVar13;
                  }
                }
              }
            }
            else {
              EVar6 = param_1->walk_state;
              if (EVar6 < 2) {
                if (EVar6 == WALK_STATE_WALKING) {
                  iVar16 = 1;
                }
                else {
                  iVar16 = 0;
                }
LAB_0046b2fb:
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(param_1->model).base,iVar16,1);
              }
              else {
                if (EVar6 < WALK_STATE_NO_PATH) {
                  iVar16 = 4;
                  goto LAB_0046b2fb;
                }
                if (EVar6 != WALK_STATE_NO_PATH) {
                  iVar16 = 0;
                  goto LAB_0046b2fb;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(param_1->model).base,0,1);
                engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
              }
              (param_1->model).accumulated_root_motion.z = 0.0;
              (param_1->model).accumulated_root_motion.y =
                   (param_1->model).accumulated_root_motion.z;
              (param_1->model).accumulated_root_motion.x =
                   (param_1->model).accumulated_root_motion.y;
            }
          }
          else {
            fStack_58 = fVar13;
            if (*(int *)(param_1[1].base.actor_name + 0x14) != 0) {
              (**(code **)(*(int *)((int)fVar5 + 0x154) + 0x1c))();
              pfVar18 = afStack_430;
              pfVar21 = &fStack_418;
              for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
                *pfVar21 = *pfVar18;
                pfVar18 = pfVar18 + (uint)bVar22 * -2 + 1;
                pfVar21 = pfVar21 + (uint)bVar22 * -2 + 1;
              }
              fStack_37c = fStack_418 + fStack_40c;
              fStack_378 = fStack_414 + fStack_408;
              fStack_374 = fStack_410 + fStack_404;
              fStack_1e4 = fStack_418 + fStack_40c;
              afStack_1f8[(uint)bVar22 * -2 + 6] = afStack_39c[(uint)bVar22 * -2 + 9];
              afStack_1f8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
                   afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10];
              fStack_a0 = fStack_1e4 * _DAT_005d9d74;
              fStack_9c = fStack_1e0 * _DAT_005d9d74;
              fStack_98 = fStack_1dc * _DAT_005d9d74;
              fStack_130 = fStack_1e4 * _DAT_005d9d74;
              afStack_1a4[(uint)bVar22 * -2 + 0x1e] = afStack_1a4[(uint)bVar22 * -2 + 0x42];
              afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x1f] =
                   afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x43];
              core_actor_cpp_FUN_00408b40(param_1[2].flames[0x1a].flame_size.x);
              uStack_13c = uStack_c4;
              afStack_1a4[(uint)bVar22 * -2 + 0x1b] = afStack_1a4[(uint)bVar22 * -2 + 0x39];
              afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x1c] =
                   afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x3a];
              core_actor_cpp_FUN_00408bb0(param_1);
              uStack_100 = uStack_154;
              afStack_1a4[(uint)bVar22 * -2 + 0x2a] = afStack_1a4[(uint)bVar22 * -2 + 0x15];
              afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x2b] =
                   afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x16];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
              uStack_2a4 = uStack_ac;
              afStack_2b8[(uint)bVar22 * -2 + 6] = afStack_1a4[(uint)bVar22 * -2 + 0x3f];
              afStack_2b8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
                   afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x40];
              pCStack_490 = (CCharacter_full_vtable *)
                            core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
              pCStack_18 = pCStack_490;
              fStack_208 = fStack_40c - fStack_418;
              fStack_204 = fStack_408 - fStack_414;
              fStack_200 = fStack_404 - fStack_410;
              fStack_2e0 = fStack_40c - fStack_418;
              afStack_39c[(uint)bVar22 * -2 + 0x30] = afStack_228[(uint)bVar22 * -2 + 9];
              afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x31] =
                   afStack_228[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10];
              afStack_2b8[2] = fStack_2e0 * _DAT_005d9d74;
              afStack_2b8[3] = fStack_2dc * _DAT_005d9d74;
              fStack_2a8 = fStack_2d8 * _DAT_005d9d74;
              fStack_1d8 = fStack_2e0 * _DAT_005d9d74;
              afStack_1f8[(uint)bVar22 * -2 + 9] = afStack_2b8[(uint)bVar22 * -2 + 3];
              afStack_1f8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10] =
                   afStack_2b8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
              uStack_1d4 = 0;
              if ((((fStack_f8 - SQRT(fStack_1d0 * fStack_1d0 + fStack_1d8 * fStack_1d8) <
                     (float)_DAT_005d9d94) && (1.0 < (double)fStack_fc)) &&
                  ((double)fStack_fc < _DAT_005d9d9c)) &&
                 (ABS((float)pCStack_490) < (float)_DAT_005d9da4)) {
                pCStack_48 = (CCharacter_full_vtable *)(param_2 * _DAT_005d9dac);
                if ((float)pCStack_490 < -(float)pCStack_48) {
                  pCStack_490 = (CCharacter_full_vtable *)-(float)pCStack_48;
                }
                if ((float)pCStack_48 < (float)pCStack_490) {
                  pCStack_490 = pCStack_48;
                }
                (param_1->base).orient.vec.y = (param_1->base).orient.vec.y + (float)pCStack_490;
                core_charactr_cpp_FUN_00433d50(param_1);
                goto LAB_00469e25;
              }
            }
            if (fStack_58 == 0.0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(param_1->model).base,0,1);
              core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0((CHero *)param_1);
            }
          }
        }
        else {
          if (param_1->grabbed_type == 0) {
            core_actor_cpp_FUN_00408bb0(param_1);
            afStack_3cc[2] = (float)uStack_e8;
            afStack_3cc[(uint)bVar22 * -2 + 3] = afStack_1a4[(uint)bVar22 * -2 + 0x30];
            afStack_3cc[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
                 afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x31];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
            uStack_214 = uStack_16c;
            afStack_228[(uint)bVar22 * -2 + 6] = afStack_1a4[(uint)bVar22 * -2 + 0xf];
            afStack_228[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
                 afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x10];
            pCStack_18 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
            fStack_2c = (float)pCStack_18;
            if ((float)pCStack_18 < _DAT_005d9db0) {
              fStack_2c = (float)pCStack_18 + _DAT_005d9dac;
            }
            if (_DAT_005d9db4 < fStack_2c) {
              fStack_2c = fStack_2c + _DAT_005d9db8;
            }
            fStack_54 = param_2 * _DAT_005d9dac;
            fStack_64 = -fStack_54;
            if (fStack_2c < fStack_64) {
              fStack_2c = fStack_64;
            }
            if (fStack_54 < fStack_2c) {
              fStack_2c = fStack_54;
            }
            (param_1->base).orient.vec.y = (param_1->base).orient.vec.y + fStack_2c;
            core_charactr_cpp_FUN_00433d50(param_1);
          }
          pCStack_70 = (CCharacter *)param_1->grabbed_by;
          pCStack_18 = (pCStack_70->base).vtable._uc;
          pCStack_4c = &param_1->model;
          core_skeleton_cpp_FUN_00569130(pCStack_4c);
          pCVar24 = &CStack_238;
          CStack_238.x = fStack_1c0;
          *(float *)((int)&CStack_238 + (uint)bVar22 * -8 + 4) =
               afStack_1f8[(uint)bVar22 * -2 + 0xf];
          *(float *)((int)&CStack_238 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
               afStack_1f8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x10];
          iVar16 = (*(pCStack_18->_uc).attractActorToward)(pCStack_70,&param_1->base,pCVar24);
          if (iVar16 == 0) {
            param_1->grabbed_by = (CDemonActor *)0x0;
          }
          else if (param_1->grabbed_by != (CDemonActor *)0x0) {
            fVar13 = param_1[2].flames[0x1a].randomness + param_2;
            param_1[2].flames[0x1a].randomness = fVar13;
            if ((_DAT_005feccc <= fVar13) && (param_1->grabbed_type != 1)) {
              pCStack_68 = (CBoxActor *)core_motion_cpp_FUN_00524a40();
              in_stack_fffffb18 = __BITCAST_DOUBLE(CONCAT44(fStack_40,0x46a96b));
              fVar13 = (float)core_motion_cpp_FUN_00524a40();
              if (fVar13 + (float)pCStack_68 <= 0.0) {
                in_stack_fffffb18 = __BITCAST_DOUBLE(CONCAT44(0x46af7f,SUB84(in_stack_fffffb18,0)));
                (*(((param_1->base).vtable._uc)->_uc).releaseFromGrab)(param_1);
              }
              else if ((*(int *)(param_1[1].base.actor_name + 0x14) != 0) || (_DAT_01c43544 != 0)) {
                in_stack_fffffb18 = __BITCAST_DOUBLE(CONCAT44(0x28,&param_1->model));
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(param_1->model).base,0x28,1);
                pCVar10 = param_1 + 1;
                (pCVar10->base).actor_name[0x14] = '\0';
                (pCVar10->base).actor_name[0x15] = '\0';
                (pCVar10->base).actor_name[0x16] = '\0';
                (pCVar10->base).actor_name[0x17] = '\0';
              }
            }
            goto LAB_00469e25;
          }
          in_stack_fffffb18 = (double)ZEXT48(&param_1->model);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&(param_1->model).base,0,1)
          ;
        }
      }
      else {
        (**(code **)(*(int *)((int)fVar5 + 0x154) + 0x98))(fVar5);
        if ((iStack_450 == 0) || (param_1 != pCStack_44c)) {
          core_hero_cpp_CHero_stopNearbyInteraction_FUN_004ebe80((CHero *)param_1);
        }
        else {
          fVar13 = pCStack_44c[2].flames[0x1a].animation_time;
          pfVar18 = (float *)((int)fVar13 + 0x34 + (uint)bVar22 * -8);
          pCStack_1fc = *(CCharacter_full_vtable **)((int)fVar13 + 0x30);
          afStack_1f8[(uint)bVar22 * -2] = *pfVar18;
          afStack_1f8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] = pfVar18[(uint)bVar22 * -2 + 1];
          fStack_3c = pCStack_44c[1].base.orient.vec.x * _DAT_005d9dac * (float)_DAT_005d9dbc *
                      param_2;
          if (fStack_3c < fStack_43c) {
            fStack_3c = fStack_43c;
          }
          if (fStack_440 < fStack_3c) {
            fStack_3c = fStack_440;
          }
          afStack_1f8[0] = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
          fStack_40 = param_1[1].base.orient.vec.y * _DAT_005d9dac * (float)_DAT_005d9dbc * param_2;
          if (fStack_40 < fStack_434) {
            fStack_40 = fStack_434;
          }
          if (fStack_438 < fStack_40) {
            fStack_40 = fStack_438;
          }
          pCStack_18 = (CCharacter_full_vtable *)afStack_1f8[0];
          pCStack_1fc = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
          fVar13 = param_1[2].flames[0x1a].animation_time;
          pCStack_18 = pCStack_1fc;
          iVar16 = (**(code **)(*(int *)((int)fVar13 + 0x154) + 0xa0))(fVar13,&pCStack_1fc);
          if (iVar16 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(param_1->model).base,0,1);
            core_hero_cpp_CHero_stopNearbyInteraction_FUN_004ebe80((CHero *)param_1);
          }
          else {
            fVar13 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
            if ((float)_DAT_005d9d84 <= fVar13) {
              if ((double)fVar13 <= _DAT_005d9d8c) {
                iVar16 = 0;
              }
              else {
                iVar16 = 5;
              }
            }
            else {
              iVar16 = 6;
            }
            pCStack_18 = (CCharacter_full_vtable *)fVar13;
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(param_1->model).base,iVar16,1);
            pfVar18 = (float *)((int)param_1 + (uint)bVar22 * -8 + 0x34);
            fStack_340 = (param_1->base).orient.vec.x;
            afStack_39c[(uint)bVar22 * -2 + 0x18] = *pfVar18;
            afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x19] =
                 pfVar18[(uint)bVar22 * -2 + 1];
            fStack_33c = fVar13 * *(float *)(param_1[2].flames[0x1a].on_event + 0x38) + fStack_33c;
            core_charactr_cpp_FUN_00433d50(param_1);
            pCStack_8c = (CCharacter_full_vtable *)(fStack_448 + (float)_DAT_005d9dc4);
            uStack_94 = 0;
            uStack_90 = 0;
            pCStack_18 = pCStack_8c;
            core_actor_cpp_FUN_00408b40(param_1[2].flames[0x1a].animation_time);
            fStack_88 = fStack_280;
            afStack_84[(uint)bVar22 * -2] = afStack_2b8[(uint)bVar22 * -2 + 0xf];
            afStack_84[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                 afStack_2b8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x10];
            pcStack_74 = param_1[2].flames[0x1a].on_event + 0x38;
            fStack_310 = fStack_88 - (param_1->base).location.position.x;
            fStack_30c = afStack_84[0] - (param_1->base).location.position.y;
            fStack_308 = afStack_84[1] - (param_1->base).location.position.z;
            fStack_304 = fStack_310;
            afStack_39c[(uint)bVar22 * -2 + 0x27] = afStack_39c[(uint)bVar22 * -2 + 0x24];
            afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x28] =
                 afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x25];
            core_actor_cpp_FUN_00408b00(param_1);
            fStack_1a8 = fStack_250;
            afStack_1a4[(uint)bVar22 * -2] = afStack_2b8[(uint)bVar22 * -2 + 0x1b];
            afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                 afStack_2b8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x1c];
            pCVar24 = &(param_1->model).accumulated_root_motion;
            fStack_274 = fStack_1a8 * *(float *)pcStack_74;
            fStack_270 = afStack_1a4[0] * *(float *)pcStack_74;
            fStack_26c = afStack_1a4[1] * *(float *)pcStack_74;
            fStack_2f8 = fStack_1a8 * *(float *)pcStack_74;
            afStack_39c[(uint)bVar22 * -2 + 0x2a] = afStack_2b8[(uint)bVar22 * -2 + 0x12];
            afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x2b] =
                 afStack_2b8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x13];
            if (pCVar24 != (CVector3f *)(afStack_39c + 0x29)) {
              pCVar24->x = fStack_2f8;
              (param_1->model).accumulated_root_motion.y = fStack_2f4;
              (param_1->model).accumulated_root_motion.z = fStack_2f0;
            }
            (param_1->model).accumulated_root_motion.y = 0.0;
          }
        }
      }
    }
    else {
      pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(&param_1->model);
      if (0.0 < (float)pCStack_18) {
        if ((param_1->base).location.position.y <
            *(float *)(*(int *)(param_1[2].flames[0x1a].on_event + 0x24) + 0x24) + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&(param_1->model).base,0,1)
          ;
        }
      }
      else {
        pCVar9 = param_1[2].flames;
        pCVar9[0x1a].on_event[0x24] = '\0';
        pCVar9[0x1a].on_event[0x25] = '\0';
        pCVar9[0x1a].on_event[0x26] = '\0';
        pCVar9[0x1a].on_event[0x27] = '\0';
      }
      if (0.0 < (float)param_1[2].flames[0x1a].do_visibility_check) {
        if ((float)param_1[2].flames[0x1a].do_visibility_check <= param_2) {
          param_1[2].flames[0x1a].do_visibility_check = 0;
          fStack_49c = 1.0;
        }
        else {
          fStack_49c = param_2 / (float)param_1[2].flames[0x1a].do_visibility_check;
          param_1[2].flames[0x1a].do_visibility_check =
               (int)((float)param_1[2].flames[0x1a].do_visibility_check - param_2);
        }
        piVar4 = &param_1[2].flames[0x1a].burn_hero;
        pCVar1 = &(param_1->base).location;
        fVar8 = 1.0 - fStack_49c;
        fStack_25c = (float)*piVar4 * fStack_49c;
        fStack_258 = (float)param_1[2].flames[0x1a].burn_enemy * fStack_49c;
        fStack_254 = (float)param_1[2].flames[0x1a].is_visible * fStack_49c;
        fStack_3d0 = (float)*piVar4 * fStack_49c;
        afStack_3cc[(uint)bVar22 * -2] = afStack_2b8[(uint)bVar22 * -2 + 0x18];
        afStack_3cc[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
             afStack_2b8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x19];
        fVar13 = (param_1->base).location.position.y;
        fVar5 = (param_1->base).location.position.z;
        (pCVar1->position).x = (pCVar1->position).x + fStack_3d0;
        (param_1->base).location.position.y = fVar13 + afStack_3cc[0];
        (param_1->base).location.position.z = fVar5 + afStack_3cc[1];
        fVar13 = (float)param_1[2].flames[0x1a].burn_enemy;
        fVar5 = (float)param_1[2].flames[0x1a].is_visible;
        *piVar4 = (int)((float)*piVar4 * fVar8);
        param_1[2].flames[0x1a].burn_enemy = (int)(fVar13 * fVar8);
        param_1[2].flames[0x1a].is_visible = (int)(fVar5 * fVar8);
        fStack_60 = fVar8;
        pCStack_18 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
        param_1->turn_angle_accumulator = (float)pCStack_18 * fStack_49c;
      }
      fVar13 = (*((param_1->base).vtable._ub)->cylinderGroundCheck)
                         (&param_1->base,*(float *)&param_1->field_0x2fec,(CVector3f *)0x0);
      param_1->closest_distance_threshold = fVar13;
    }
  }
  else {
    pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(&param_1->model);
    if (0.0 < (float)pCStack_18) {
      core_actor_cpp_FUN_00408b40(param_1[2].flames[0x1a].flame_size.z);
      uStack_388 = uStack_118;
      afStack_39c[(uint)bVar22 * -2 + 6] = afStack_1a4[(uint)bVar22 * -2 + 0x24];
      afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
           afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x25];
      if (fStack_384 + (float)_DAT_005d9dcc < (param_1->base).location.position.y) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&(param_1->model).base,0,1);
      }
    }
    else {
      param_1[2].flames[0x1a].flame_size.z = 0.0;
    }
    if (0.0 < (float)param_1[2].flames[0x1a].do_visibility_check) {
      if ((float)param_1[2].flames[0x1a].do_visibility_check <= param_2) {
        param_1[2].flames[0x1a].do_visibility_check = 0;
        fStack_494 = 1.0;
      }
      else {
        fStack_494 = param_2 / (float)param_1[2].flames[0x1a].do_visibility_check;
        param_1[2].flames[0x1a].do_visibility_check =
             (int)((float)param_1[2].flames[0x1a].do_visibility_check - param_2);
      }
      piVar4 = &param_1[2].flames[0x1a].burn_hero;
      pCVar1 = &(param_1->base).location;
      fVar8 = 1.0 - fStack_494;
      fStack_190 = (float)*piVar4 * fStack_494;
      fStack_18c = (float)param_1[2].flames[0x1a].burn_enemy * fStack_494;
      fStack_188 = (float)param_1[2].flames[0x1a].is_visible * fStack_494;
      fStack_28c = (float)*piVar4 * fStack_494;
      afStack_2b8[(uint)bVar22 * -2 + 0xc] = afStack_1a4[(uint)bVar22 * -2 + 6];
      afStack_2b8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xd] =
           afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7];
      fVar13 = (param_1->base).location.position.y;
      fVar5 = (param_1->base).location.position.z;
      (pCVar1->position).x = (pCVar1->position).x + fStack_28c;
      (param_1->base).location.position.y = fVar13 + fStack_288;
      (param_1->base).location.position.z = fVar5 + fStack_284;
      fVar13 = (float)param_1[2].flames[0x1a].burn_enemy;
      fVar5 = (float)param_1[2].flames[0x1a].is_visible;
      *piVar4 = (int)((float)*piVar4 * fVar8);
      param_1[2].flames[0x1a].burn_enemy = (int)(fVar13 * fVar8);
      param_1[2].flames[0x1a].is_visible = (int)(fVar5 * fVar8);
      fStack_5c = fVar8;
      pCStack_18 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
      param_1->turn_angle_accumulator = (float)pCStack_18 * fStack_494;
    }
  }
LAB_00469e25:
  if (0.0 < *(float *)(param_1[2].flames[0x1b].base.actor_name + 8)) {
    if (*(float *)(param_1[2].flames[0x1b].base.actor_name + 8) <= param_2) {
      pCVar9 = param_1[2].flames + 0x1b;
      (pCVar9->base).actor_name[8] = '\0';
      (pCVar9->base).actor_name[9] = '\0';
      (pCVar9->base).actor_name[10] = '\0';
      (pCVar9->base).actor_name[0xb] = '\0';
      fStack_4a0 = 1.0;
    }
    else {
      fStack_4a0 = param_2 / *(float *)(param_1[2].flames[0x1b].base.actor_name + 8);
      *(float *)(param_1[2].flames[0x1b].base.actor_name + 8) =
           *(float *)(param_1[2].flames[0x1b].base.actor_name + 8) - param_2;
    }
    pCStack_18 = (CCharacter_full_vtable *)&param_1[2].flames[0x1a].enemy_burn_index;
    fStack_2ec = *(float *)pCStack_18 * fStack_4a0;
    fStack_2e8 = (float)param_1[2].flames[0x1a].render_corona * fStack_4a0;
    fStack_2e4 = *(float *)param_1[2].flames[0x1b].base.actor_name * fStack_4a0;
    fStack_10c = fStack_2ec;
    afStack_1a4[(uint)bVar22 * -2 + 0x27] = afStack_39c[(uint)bVar22 * -2 + 0x2d];
    afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x28] =
         afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x2e];
    core_actor_cpp_FUN_00408b00(param_1);
    pCVar24 = &(param_1->model).accumulated_root_motion;
    afStack_1f8[2] = fStack_3b8;
    afStack_1f8[(uint)bVar22 * -2 + 3] = afStack_3cc[(uint)bVar22 * -2 + 6];
    afStack_1f8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
         afStack_3cc[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7];
    fVar13 = (param_1->model).accumulated_root_motion.y;
    fVar5 = (param_1->model).accumulated_root_motion.z;
    fStack_50 = 1.0 - fStack_4a0;
    pCVar24->x = pCVar24->x + afStack_1f8[2];
    (param_1->model).accumulated_root_motion.y = fVar13 + afStack_1f8[3];
    (param_1->model).accumulated_root_motion.z = fVar5 + fStack_1e8;
    *(float *)pCStack_18 = *(float *)pCStack_18 * fStack_50;
    *(float *)((int)pCStack_18 + 4) = *(float *)((int)pCStack_18 + 4) * fStack_50;
    *(float *)((int)pCStack_18 + 8) = *(float *)((int)pCStack_18 + 8) * fStack_50;
    pCStack_18 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
    param_1->turn_angle_accumulator = (float)pCStack_18 * fStack_4a0;
  }
  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&(param_1->model).base);
  if ((*(int *)(pSVar12 + 0x24) == 0x1e) &&
     (this_ptr = (CAmmoBox *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (param_1[2].flames[0x1a].base.vtable._ub), this_ptr != (CAmmoBox *)0x0))
  {
    pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00525020(&(param_1->model).base);
    core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e1a0(this_ptr,(float)pCStack_18);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160(param_1);
  core_doc_cpp_FUN_0046e730(param_1);
  if (iStack_6c != 0) {
    pCVar9 = param_1[2].flames;
    pCVar9[0x1a].off_event[0x14] = '\0';
    pCVar9[0x1a].off_event[0x15] = '\0';
    pCVar9[0x1a].off_event[0x16] = '\0';
    pCVar9[0x1a].off_event[0x17] = '\0';
    *(uint *)(param_1[2].flames[0x1a].off_event + 0x10) =
         *(uint *)(param_1[2].flames[0x1a].off_event + 0x14);
    *(uint *)(param_1[2].flames[0x1a].off_event + 0xc) =
         *(uint *)(param_1[2].flames[0x1a].off_event + 0x10);
  }
  if ((param_1[2].flames[0x1a].flame_size.z == 0.0) &&
     (*(int *)(param_1[2].flames[0x1a].on_event + 0x24) == 0)) {
    if (iStack_38 == 0) goto LAB_0046a09c;
    pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                        (&(param_1->model).base);
    pCVar24 = &(param_1->model).accumulated_root_motion;
    iVar16 = *(int *)(pSVar12 + 0x24);
    fStack_148 = pCVar24->x + (param_1->position_delta).x;
    fStack_144 = (param_1->model).accumulated_root_motion.y + (param_1->position_delta).y;
    fStack_140 = (param_1->model).accumulated_root_motion.z + (param_1->position_delta).z;
    CStack_2c8.x = fStack_148;
    *(float *)((int)&CStack_2c8 + (uint)bVar22 * -8 + 4) = afStack_1a4[(uint)bVar22 * -2 + 0x18];
    *(float *)((int)&CStack_2c8 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
         afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x19];
    (param_1->model).accumulated_root_motion.z = 0.0;
    (param_1->model).accumulated_root_motion.y = (param_1->model).accumulated_root_motion.z;
    pCVar24->x = (param_1->model).accumulated_root_motion.y;
    (param_1->position_delta).z = 0.0;
    (param_1->position_delta).y = (param_1->position_delta).z;
    (param_1->position_delta).x = (param_1->position_delta).y;
    if (iVar16 == 0x12) {
      CStack_2c8.z = 0.0;
      CStack_2c8.y = 0.0;
      CStack_2c8.x = 0.0;
      fVar13 = (param_1->velocity).y - param_2 * (float)_DAT_005d9dd4;
      pCVar9 = param_1[2].flames;
      pCVar9[0x1a].off_event[0x24] = -0x66;
      pCVar9[0x1a].off_event[0x25] = '?';
      pCVar9[0x1a].off_event[0x26] = '\x1c';
      pCVar9[0x1a].off_event[0x27] = 'F';
    }
    else {
      if (iVar16 == 0x13) {
        CStack_2c8.z = 0.0;
        CStack_2c8.y = 0.0;
        CStack_2c8.x = 0.0;
      }
      fVar13 = (param_1->velocity).y - param_2 * (float)_DAT_005d9dd4;
    }
    (param_1->velocity).y = fVar13;
    iStack_44 = iVar16;
    core_actor_cpp_FUN_00408b00(param_1);
    fStack_f4 = fStack_b8;
    afStack_1a4[(uint)bVar22 * -2 + 0x2d] = afStack_1a4[(uint)bVar22 * -2 + 0x3c];
    afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x2e] =
         afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x3d];
    fStack_298 = (param_1->velocity).x * param_2;
    pCVar24 = &CStack_2c8;
    fStack_294 = (param_1->velocity).y * param_2;
    fStack_290 = (param_1->velocity).z * param_2;
    fStack_2bc = fStack_298;
    afStack_2b8[(uint)bVar22 * -2] = afStack_2b8[(uint)bVar22 * -2 + 9];
    afStack_2b8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
         afStack_2b8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10];
    afStack_1a4[2] = fStack_2bc + fStack_f4;
    afStack_1a4[3] = afStack_2b8[0] + fStack_f0;
    fStack_194 = afStack_2b8[1] + fStack_ec;
    fStack_2d4 = fStack_2bc + fStack_f4;
    afStack_39c[(uint)bVar22 * -2 + 0x33] = afStack_1a4[(uint)bVar22 * -2 + 3];
    afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x34] =
         afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
    CStack_2c8.x = CStack_2c8.x + fStack_2d4;
    CStack_2c8.y = CStack_2c8.y + fStack_2d0;
    CStack_2c8.z = CStack_2c8.z + fStack_2cc;
    *(float *)(param_1[2].flames[0x1b].base.actor_name + 0x18) = (param_1->velocity).y;
    core_charactr_cpp_FUN_0042d750(param_1,pCVar24);
    if ((param_1->base).location.position.y <
        param_1->closest_distance_threshold + (float)_DAT_005d9ddc) {
      param_1->is_on_ground = 1;
    }
    if ((iStack_44 == 0x12) && (param_1->is_on_ground != 0)) {
      engine_console_cpp_FUN_00445430
                (g_CConsolePtr,"Splat at %3.2f fps\n",(double)(param_1->velocity).y);
      fVar13 = -*(float *)(param_1[2].flames[0x1b].base.actor_name + 0x18);
      if (fVar13 < (float)_DAT_005d9de4) {
        if (iStack_44 == 0x12) goto LAB_0046b941;
LAB_0046b950:
        (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                  (&param_1->base,(CVector3f *)&DAT_02c8af28,fVar13 * _DAT_005d9e04 + 1.0);
        goto LAB_0046b976;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_48c);
      fVar5 = (fVar13 + (float)_DAT_005d9dec) * (float)_DAT_005d9df4 * (float)_DAT_005d9dfc;
      fStack_488 = fVar5;
      if (0x42c80000 < (int)fVar5) {
        fStack_488 = 9999.0;
      }
      pCVar7 = (param_1->base).vtable._uc;
      param_1[1].base.actor_name[0] = '\0';
      param_1[1].base.actor_name[1] = '\0';
      param_1[1].base.actor_name[2] = '\0';
      param_1[1].base.actor_name[3] = '\0';
      (*(pCVar7->_uc).processDamage)(param_1,aSStack_48c);
      if ((0.0 < param_1->hit_points) && ((int)fVar5 < 0x42c80001)) {
        in_stack_fffffb18 = 2.12199580084659e-314;
LAB_0046b941:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(param_1->model).base,SUB84(in_stack_fffffb18,0),
                   (int)((ulonglong)in_stack_fffffb18 >> 0x20));
        goto LAB_0046b950;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&(param_1->model).base,0x15,1);
      (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"fall-?.wav");
      iVar16 = param_1->is_on_ground;
      fStack_498 = 0x3F000000;
    }
    else {
LAB_0046b976:
      iVar16 = param_1->is_on_ground;
      fStack_498 = 0x3F000000;
    }
    0x3F000000 = fStack_498;
    if (iVar16 == 0) {
      *(float *)(param_1[2].flames[0x1a].off_event + 0x24) =
           *(float *)(param_1[2].flames[0x1a].off_event + 0x24) + param_2;
      if (iStack_34 == 4) {
        fStack_498 = fStack_498 * (float)_DAT_005d9d7c;
      }
      if ((fStack_498 < *(float *)(param_1[2].flames[0x1a].off_event + 0x24)) ||
         (*(float *)(param_1[2].flames[0x1b].base.actor_name + 0x18) < (float)_DAT_005d9dec)) {
        if (iStack_34 != 0x12) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(param_1->model).base,0x12,1);
        }
        param_1->is_on_ground = 0;
      }
      goto LAB_0046a09c;
    }
  }
  else {
    pCStack_18 = (CCharacter_full_vtable *)&(param_1->model).accumulated_root_motion;
    core_actor_cpp_FUN_00408ac0(param_1);
    pCVar1 = &(param_1->base).location;
    fStack_22c = fStack_34c;
    afStack_228[(uint)bVar22 * -2] = afStack_39c[(uint)bVar22 * -2 + 0x15];
    afStack_228[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
         afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x16];
    fVar13 = (param_1->base).location.position.y;
    fVar5 = (param_1->base).location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_22c;
    (param_1->base).location.position.y = fVar13 + afStack_228[0];
    (param_1->base).location.position.z = fVar5 + afStack_228[1];
    (pCStack_18->_ub).vfunc2 = (CDemonActor_vfunc2 *)0x0;
    (pCStack_18->_ub).markResourcesInUse =
         (CDemonActor_markResourcesInUse *)(pCStack_18->_ub).vfunc2;
    (pCStack_18->_ub).setup = (CDemonActor_setup *)(pCStack_18->_ub).markResourcesInUse;
  }
  pCVar9 = param_1[2].flames;
  pCVar9[0x1a].off_event[0x24] = '\0';
  pCVar9[0x1a].off_event[0x25] = '\0';
  pCVar9[0x1a].off_event[0x26] = '\0';
  pCVar9[0x1a].off_event[0x27] = '\0';
LAB_0046a09c:
  pCVar9 = param_1[2].flames;
  pCVar9[0x1a].off_event[0x14] = '\0';
  pCVar9[0x1a].off_event[0x15] = '\0';
  pCVar9[0x1a].off_event[0x16] = '\0';
  pCVar9[0x1a].off_event[0x17] = '\0';
  *(uint *)(param_1[2].flames[0x1a].off_event + 0x10) =
       *(uint *)(param_1[2].flames[0x1a].off_event + 0x14);
  *(uint *)(param_1[2].flames[0x1a].off_event + 0xc) =
       *(uint *)(param_1[2].flames[0x1a].off_event + 0x10);
  pCVar11 = g_CGamePtr;
  if (iStack_30 != 0) {
    if (param_1[1].base.location.position.x != 0.0) {
      if (param_1[2].flames[0x1a].globe.corona_mode == 0) {
        param_1[2].flames[0x1a].globe.corona_mode = 1;
      }
      else {
        param_1[2].flames[0x1a].globe.corona_mode = 0;
        if (*(int *)&pCVar11->field_0x264 != 0) {
          *(uint *)&pCVar11->field_0x264 = 0;
          (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"flashlit.wav");
        }
      }
    }
    if ((*(int *)(param_1[1].base.actor_name + 0x1c) != 0) &&
       (pCVar19 = (CInventory *)(param_1[2].flames[0x18].on_event + 0x54),
       param_1[2].flames[0x19].render_corona != 0)) {
      if (param_1[2].flames[0x1a].globe.corona_mode == 1) {
        iVar16 = core_actor_cpp_isOfClass_FUN_0040c550
                           (*(CDemonActor **)(param_1[2].flames[0x1a].on_event + 0x28),
                            "CFlashlight");
        if ((iVar16 == 0) || (*(int *)&g_CGamePtr->field_0x264 != 1)) {
          if (*(int *)(param_1[2].flames[0x19].render_corona + 0x2f0) != 0) {
            uVar15 = (uint)(*(int *)&g_CGamePtr->field_0x264 == 0);
            *(uint *)&g_CGamePtr->field_0x264 = uVar15;
            if (uVar15 != 0) {
              param_1[2].flames[0x1a].globe.corona_mode = 1;
            }
            (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"flashlit.wav");
          }
        }
        else {
          *(uint *)&g_CGamePtr->field_0x264 = 0;
          param_1[2].flames[0x1a].globe.corona_mode = 0;
        }
      }
      else {
        iVar16 = core_inv_cpp_FUN_004f8ce0(pCVar19);
        if (iVar16 == 0) {
          if (*(int *)(param_1[2].flames[0x19].render_corona + 0x2f0) != 0) {
            uVar15 = (uint)(*(int *)&g_CGamePtr->field_0x264 == 0);
            *(uint *)&g_CGamePtr->field_0x264 = uVar15;
            if (uVar15 != 0) {
              param_1[2].flames[0x1a].globe.corona_mode = 1;
            }
            (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"flashlit.wav");
          }
        }
        else {
          pCStack_1c = pCVar19;
          for (iVar16 = 0; iVar16 < *(int *)(pCStack_1c + 0x10); iVar16 = iVar16 + 1) {
            pCVar14 = (CDemonActor *)
                      core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)(pCVar19 + 0x14));
            if (pCVar14 != (CDemonActor *)0x0) {
              core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0(pCStack_1c,pCVar14,5,1);
              break;
            }
            pCVar19 = pCVar19 + 4;
          }
          uVar15 = (uint)(*(int *)&g_CGamePtr->field_0x264 == 0);
          *(uint *)&g_CGamePtr->field_0x264 = uVar15;
          if (uVar15 != 0) {
            param_1[2].flames[0x1a].globe.corona_mode = 1;
          }
          (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"flashlit.wav");
        }
      }
    }
  }
  iVar16 = param_1[2].flames[0x19].render_corona;
  if (iVar16 == 0) {
    *(uint *)&g_CGamePtr->field_0x264 = 0;
  }
  else if (*(int *)(iVar16 + 0x2f0) == 0) {
    *(uint *)&g_CGamePtr->field_0x264 = 0;
  }
  if ((*(int *)&g_CGamePtr->field_0x244 != 0) &&
     ((param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x != 0.0 ||
      (*(int *)&g_CGamePtr->field_0x25c != 0)))) {
    (*(((param_1->base).vtable._uh)->_uh).toggleGoggles)((CHero *)param_1);
  }
  if (iStack_34 != 0) {
    core_doc_cpp_FUN_00474400(param_1);
  }
  if (param_1[2].flames[0x1a].globe.corona_mode == 0) {
    fVar13 = param_1[2].flames[0x1a].globe.position.x - param_2 / _DAT_005feca0;
    param_1[2].flames[0x1a].globe.position.x = fVar13;
    if (fVar13 < 0.0) {
      param_1[2].flames[0x1a].globe.position.x = 0.0;
    }
  }
  else {
    fVar13 = param_2 / _DAT_005fec9c + param_1[2].flames[0x1a].globe.position.x;
    param_1[2].flames[0x1a].globe.position.x = fVar13;
    if (1.0 < fVar13) {
      param_1[2].flames[0x1a].globe.position.x = 1.0;
    }
  }
  fVar13 = param_1[2].flames[0x1a].globe_scalar - param_2 / _DAT_005feca4;
  param_1[2].flames[0x1a].globe_scalar = fVar13;
  if (fVar13 <= 0.0) {
    param_1[2].flames[0x1a].globe_scalar = 0.0;
  }
  fVar13 = *(float *)(param_1[2].flames[0x1a].on_event + 0x14) - param_2 / _DAT_005feca4;
  *(float *)(param_1[2].flames[0x1a].on_event + 0x14) = fVar13;
  if (fVar13 <= 0.0) {
    pCVar9 = param_1[2].flames;
    pCVar9[0x1a].on_event[0x14] = '\0';
    pCVar9[0x1a].on_event[0x15] = '\0';
    pCVar9[0x1a].on_event[0x16] = '\0';
    pCVar9[0x1a].on_event[0x17] = '\0';
  }
  if (iStack_20 != 0) {
    core_doc_cpp_FUN_00474ef0();
  }
  core_doc_cpp_FUN_0046caa0();
  if (((*(int *)(param_1[2].flames[0x18].on_event + 0x50) == 2) &&
      (iVar16 = *(int *)(param_1[2].flames[0x1a].on_event + 0x28), iVar16 != 0)) &&
     (*(int *)(iVar16 + 0x2e0) == 0)) {
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(&param_1->model);
    core_doc_cpp_FUN_0046f610(param_1);
    core_doc_cpp_FUN_00473160();
    core_doc_cpp_FUN_0046caa0();
  }
  core_doc_cpp_FUN_00473c10(param_1,param_2);
  core_doc_cpp_FUN_00476080();
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80(param_1,param_2);
  pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(&param_1->model);
  if ((float)pCStack_18 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0((CHero *)param_1);
  }
  else {
    pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00525020(&(param_1->model).base);
    if ((1.0 < (float)pCStack_18) &&
       (pCStack_68 = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c600
                               (param_1[2].flames[0x1a].flame_size.x),
       pCStack_68 != (CBoxActor *)0x0)) {
      core_doc_cpp_FUN_0046c9e0();
      uStack_d0 = uStack_178;
      afStack_1a4[(uint)bVar22 * -2 + 0x36] = afStack_1a4[(uint)bVar22 * -2 + 0xc];
      afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x37] =
           afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xd];
      core_actor_cpp_FUN_00408b40(param_1);
      fStack_358 = fStack_364;
      afStack_39c[(uint)bVar22 * -2 + 0x12] = afStack_39c[(uint)bVar22 * -2 + 0xf];
      afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x13] =
           afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x10];
      afStack_228[2] = fStack_358 - CStack_3ac.x;
      afStack_228[3] = fStack_354 - CStack_3ac.y;
      fStack_218 = fStack_350 - CStack_3ac.z;
      CStack_1b4.x = fStack_358 - CStack_3ac.x;
      *(float *)((int)&CStack_1b4 + (uint)bVar22 * -8 + 4) = afStack_228[(uint)bVar22 * -2 + 3];
      *(float *)((int)&CStack_1b4 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
           afStack_228[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
      CStack_1b4.y = 0.0;
      core_actor_cpp_FUN_00408b00(param_1);
      uStack_334 = uStack_160;
      afStack_39c[(uint)bVar22 * -2 + 0x1b] = afStack_1a4[(uint)bVar22 * -2 + 0x12];
      afStack_39c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x1c] =
           afStack_1a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x13];
      if (0.0 < fStack_32c) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_00422ab0(pCStack_68,&CStack_3ac,&CStack_1b4);
      }
    }
  }
  core_doc_cpp_FUN_0046f610(param_1);
  core_doc_cpp_FUN_004724a0(param_1,0);
  core_doc_cpp_FUN_004724a0(param_1,1);
  core_doc_cpp_FUN_00475920(param_1);
  core_inv_cpp_FUN_004f9f10();
  core_doc_cpp_FUN_00476150(param_1);
  if (iStack_20 == 0) {
    core_hero_cpp_FUN_004eb5b0();
  }
  else {
    pCVar14 = (CDemonActor *)((float)param_1[2].flames[0x1a].base.next_actor + param_2);
    param_1[2].flames[0x1a].base.next_actor = pCVar14;
    if ((float)_DAT_005d9dbc < (float)pCVar14) {
      core_hero_cpp_FUN_004eca10(param_1);
    }
  }
  iVar16 = *(int *)(param_1[2].flames[0x1a].on_event + 0x28);
  if ((iVar16 != 0) && (*(int *)(iVar16 + 0xfc) != 0)) {
    (param_1->base).is_transparent = 1;
  }
  iVar16 = sound_sndmain_cpp_FUN_005735a0(*(uint *)(param_1[2].flames[0x1a].on_event + 0x3c));
  if (iVar16 == 0) {
    if (*(int *)&g_CGamePtr->field_0x25c != 0) {
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1[2].flames[0x1a].on_event + 0x40));
      sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
      sound_sndmain_cpp_FUN_00572a10(1);
      uVar15 = sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-on.wav");
      *(uint *)(param_1[2].flames[0x1a].on_event + 0x40) = uVar15;
      sound_sndmain_cpp_FUN_005728e0(0.0);
      uVar15 = sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-loop.wav");
      *(uint *)(param_1[2].flames[0x1a].on_event + 0x3c) = uVar15;
      sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
      sound_sndmain_cpp_setSfxFade_FUN_00573ab0
                (*(uint *)(param_1[2].flames[0x1a].on_event + 0x3c),0.333,1.0,0);
      if (*(int *)&g_CGamePtr->field_0x264 != 0) {
        *(uint *)&g_CGamePtr->field_0x264 = 0;
        (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"flashlit.wav");
        return;
      }
    }
  }
  else if (*(int *)&g_CGamePtr->field_0x25c == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1[2].flames[0x1a].on_event + 0x40));
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1[2].flames[0x1a].on_event + 0x3c));
    sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
    sound_sndmain_cpp_FUN_00572a10(1);
    sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-off.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
    return;
  }
  return;
}
