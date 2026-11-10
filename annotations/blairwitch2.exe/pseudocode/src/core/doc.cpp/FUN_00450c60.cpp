// Name: core_doc.cpp_FUN_00450c60
// Address: 00450c60
// Address Range: [[00450c60, 00453241]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00450c60(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00450c60(CCharacter *param_1,float param_2)

{
  byte *puVar1;
  CDeformableModelInstance *pCVar2;
  byte *puVar3;
  float fVar4;
  EWalkState EVar5;
  CCharacter_full_vtable *pCVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  CMotionController *this_ptr;
  CAmmoBox *this_ptr_00;
  int iVar12;
  uint *puVar13;
  float *pfVar14;
  int iVar15;
  uint *puVar16;
  float *pfVar17;
  byte bVar18;
  float10 fVar19;
  float afStackY_1cdc [1443];
  float fVar20;
  float fVar21;
  uint uVar22;
  CCharacter *pCVar23;
  CCharacter *actor;
  ulonglong uVar24;
  CVector3f *pCVar25;
  int local_580;
  CCharacter *local_57c;
  float local_578;
  float local_570;
  float local_56c;
  float local_568;
  float local_564;
  float local_560 [6];
  uint local_548;
  uint local_544;
  uint local_540;
  uint local_53c;
  uint local_538;
  uint local_534;
  float local_530;
  float local_52c;
  float local_528;
  float local_524;
  float local_520;
  float local_51c;
  uint local_518 [6];
  uint local_500;
  float afStack_4fc [7];
  uint local_4e0 [4];
  uint local_4d0 [4];
  uint local_4c0;
  uint local_4b0 [4];
  uint local_4a0;
  uint local_490 [4];
  uint local_480;
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
  float local_3b8;
  uint local_3b4;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0 [3];
  uint local_394;
  uint local_388;
  float local_37c;
  uint local_370;
  float local_364;
  float local_358;
  uint local_354;
  uint local_350;
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
  uint local_208;
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
  byte *local_8c;
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
  byte *local_30;
  int local_2c;
  CCharacter_full_vtable *local_28;
  int local_24;
  float local_20;
  CBoxActor *local_1c;
  CMotionController *local_18;
  float local_14;
  
  bVar18 = 0;
  unkafter_special_cpp_FUN_0059e110(&param_1->field_0x3058);
  local_3c = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                       (0x01C38BC0,"?DebugActionPending" + 1);
  if ((*(int *)&param_1->field_0x2698 != 0) && (*(float *)&param_1[2].field_0x4258 < _DAT_005cff6f))
  {
    (**(code **)(*(int *)(*(int *)&param_1->field_0x2698 + 0x2b0) + 0x24))();
    puVar13 = local_518;
    puVar16 = &local_548;
    for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar16 = *puVar13;
      puVar13 = puVar13 + (uint)bVar18 * -2 + 1;
      puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
    }
    if ((uint *)&param_1[2].field_0x424c != &local_548) {
      *(uint *)&param_1[2].field_0x424c = local_548;
      *(uint *)&param_1[2].field_0x4250 = local_544;
      *(uint *)&param_1[2].field_0x4254 = local_540;
    }
    if ((uint *)&param_1[2].field_0x4258 != &local_53c) {
      *(uint *)&param_1[2].field_0x4258 = local_53c;
      *(uint *)&param_1[2].field_0x425c = local_538;
      *(uint *)&param_1[2].field_0x4260 = local_534;
    }
    local_10c = *(float *)&param_1[2].field_0x424c + *(float *)&param_1[2].field_0x4258;
    local_108 = *(float *)&param_1[2].field_0x4250 + *(float *)&param_1[2].field_0x425c;
    local_104 = *(float *)&param_1[2].field_0x4254 + *(float *)&param_1[2].field_0x4260;
    local_1e4 = local_10c;
    local_1f8[(uint)bVar18 * -2 + 6] = afStack_1b0[(uint)bVar18 * -2 + 0x2a];
    local_1f8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
         afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x2b];
    local_31c = local_1e4 * _DAT_005cff73;
    local_318 = local_1e0 * _DAT_005cff73;
    local_314 = local_1dc * _DAT_005cff73;
    local_418 = local_1e4 * _DAT_005cff73;
    local_42c[(uint)bVar18 * -2 + 6] = local_3e4[(uint)bVar18 * -2 + 0x33];
    local_42c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
         local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x34];
    core_actor_cpp_FUN_00408d70(*(uint *)&param_1->field_0x2698);
    local_2c8 = local_e8;
    local_300[(uint)bVar18 * -2 + 0xf] = afStack_1b0[(uint)bVar18 * -2 + 0x33];
    local_300[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10] =
         afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x34];
    core_actor_cpp_FUN_00408de0(param_1);
    local_430 = (float)local_394;
    local_42c[(uint)bVar18 * -2] = local_3e4[(uint)bVar18 * -2 + 0x15];
    local_42c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
         local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x16];
    if ((float *)&param_1[2].field_0x4240 != afStack_444 + 5) {
      *(float *)&param_1[2].field_0x4240 = local_430;
      *(float *)&param_1[2].field_0x4244 = local_42c[0];
      *(float *)&param_1[2].field_0x4248 = local_42c[1];
    }
  }
  core_game_cpp_CGame_slamDT_FUN_004bd460(g_CGamePtr,param_2);
  fVar20 = *(float *)param_1[1].base.actor_name - param_2;
  *(float *)param_1[1].base.actor_name = fVar20;
  if (fVar20 < 0.0) {
    param_1[1].base.actor_name[0] = '\0';
    param_1[1].base.actor_name[1] = '\0';
    param_1[1].base.actor_name[2] = '\0';
    param_1[1].base.actor_name[3] = '\0';
  }
  *(uint *)&(param_1->model).field_0x225c = 0;
  *(uint *)&(param_1->model).field_0x2258 = *(uint *)&(param_1->model).field_0x225c;
  *(uint *)&(param_1->model).field_0x2254 = *(uint *)&(param_1->model).field_0x2258;
  core_doc_cpp_FUN_00453cc0();
  local_3d0 = local_370;
  local_3e4[(uint)bVar18 * -2 + 6] = local_3e4[(uint)bVar18 * -2 + 0x1e];
  local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
       local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1f];
  core_actor_cpp_FUN_00408d70(param_1);
  uVar24 = CONCAT44(param_2,param_1);
  local_454.x = local_364;
  *(float *)((int)&local_454 + (uint)bVar18 * -8 + 4) = local_3e4[(uint)bVar18 * -2 + 0x21];
  *(float *)((int)&local_454 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
       local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x22];
  core_doc_cpp_FUN_00453250(uVar24);
  local_44 = 1;
  local_58 = 1;
  local_4c = 1;
  local_34 = 1;
  local_38 = 1;
  if (param_1->grabbed_by != (CDemonActor *)0x0) {
    local_44 = 0;
    local_4c = 0;
    local_34 = 0;
    local_38 = 0;
    local_58 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if (*(int *)&param_1[2].field_0x414c != 0) {
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    local_4c = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if ((*(int *)&param_1[2].field_0x4154 != 0) || (*(int *)&param_1[2].field_0x41d4 != 0)) {
    local_58 = 0;
    local_4c = 0;
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if ((*(int *)&param_1[2].field_0x4148 != 0) || (*(int *)&param_1[2].field_0x41e4 == 4)) {
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  pCVar2 = &param_1->model;
  local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar2);
  if ((((0.0 < local_14) || (local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar2), 0.0 < local_14)
       ) || (local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar2), 0.0 < local_14)) ||
     (param_1->hit_points <= 0.0)) {
    local_4c = 0;
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  local_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->model);
  if (((0.0 < local_14) || (*(int *)&param_1[2].field_0x41e4 == 5)) ||
     (*(int *)&param_1[2].field_0x4144 != 0)) {
    local_38 = 0;
    local_44 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  local_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->model);
  if (0.0 < local_14) {
    local_4c = 0;
    local_34 = 0;
    local_58 = 0;
    local_38 = 0;
    local_44 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x41e4 == 1) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x41e4 == 2) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x41e4 == 6) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x41e4 == 3) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x41e4 == 7) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if ((*(int *)&param_1[2].field_0x4150 != 0) ||
     (local_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->model), 0.0 < local_14)) {
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    local_4c = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"leverToPull=%s\n");
    }
  }
  if (param_1->grabbed_by == (CDemonActor *)0x0) {
    if (*(int *)&(param_1->base).field_0xdc != 0) {
      local_58 = 1;
    }
    if (*(float *)&(param_1->base).field_0x24 != param_1->closest_distance_threshold) {
      local_58 = 1;
    }
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&(param_1->model).field_0x225c;
  core_charactr_cpp_FUN_0042b2a0(param_1);
  iVar12 = core_motion_cpp_FUN_005035c0();
  if ((*(int *)(iVar12 + 0x24) == 4) ||
     (iVar12 = core_motion_cpp_FUN_005035c0(), *(int *)(iVar12 + 0x24) == 5)) {
    *(uint *)&(param_1->model).field_0x2254 = *(uint *)&(param_1->model).field_0x2254;
  }
  if (*(int *)&param_1[2].field_0x4158 == 0) {
    fVar20 = *(float *)&param_1[2].field_0x41ec -
             param_2 * (float)_DAT_005cff77 * (float)_DAT_005cff77;
    *(float *)&param_1[2].field_0x41ec = fVar20;
    if (fVar20 < 0.0) {
      *(uint *)&param_1[2].field_0x41ec = 0;
    }
  }
  else {
    fVar20 = param_2 * (float)_DAT_005cff77 + *(float *)&param_1[2].field_0x41ec;
    *(float *)&param_1[2].field_0x41ec = fVar20;
    if (1.0 < fVar20) {
      *(uint *)&param_1[2].field_0x41ec = 0x3f800000;
    }
  }
  iVar12 = *(int *)&param_1[2].field_0x4154;
  local_94 = 1;
  if (iVar12 == 0) {
    if (*(int *)&param_1[2].field_0x41d4 == 0) {
      iVar15 = *(int *)&param_1[2].field_0x4158;
      if (iVar15 == 0) {
        if (param_1->grabbed_by == (CDemonActor *)0x0) {
          if (*(int *)&param_1[2].field_0x414c == 0) {
            iVar12 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0(param_1,param_2);
            if (iVar12 == 0) {
              if (local_44 != 0) {
                iVar12 = core_motion_cpp_FUN_005035c0();
                switch(*(uint *)(iVar12 + 0x24)) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  if (param_1->is_on_ground != 0) {
                    iVar15 = 0;
                    iVar12 = core_motion_cpp_FUN_005035c0();
                    local_98 = *(int *)(iVar12 + 0x24);
                    if (*(int *)(param_1[1].base.actor_name + 8) == 0) {
                      if (*(int *)(param_1[1].base.actor_name + 0xc) == 0) {
                        fVar20 = *(float *)&param_1[1].base.field_0x2c;
                        local_b4 = (double)fVar20;
                        if ((float)_DAT_005cff7f <= fVar20) {
                          if (_DAT_005cff87 < local_b4) {
                            iVar15 = 5;
                          }
                        }
                        else {
                          iVar15 = 4;
                        }
                      }
                      else {
                        iVar15 = 2;
                      }
                    }
                    else if (*(int *)(param_1[1].base.actor_name + 0x10) == 0) {
                      iVar15 = 1;
                    }
                    else {
                      iVar15 = 3;
                    }
                    pCVar2 = &param_1->model;
                    local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar2);
                    local_28 = (CCharacter_full_vtable *)(local_14 * _DAT_005f514c);
                    local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar2);
                    local_28 = (CCharacter_full_vtable *)
                               (local_14 * _DAT_005f5150 + (float)local_28);
                    local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar2);
                    fVar11 = local_14 * _DAT_005f5154;
                    fVar20 = *(float *)&param_1[1].base.field_0x2c;
                    fVar10 = param_1[1].base.orient.vec.x * *(float *)&param_1->field_0x2598;
                    *(float *)&param_1->field_0x2578 = fVar10;
                    fVar21 = *(float *)&param_1->field_0x2578;
                    fVar4 = *(float *)&param_1->field_0x2578;
                    *(float *)&param_1[2].field_0x41f8 = *(float *)&param_1[2].field_0x41f8 - fVar10
                    ;
                    *(float *)&param_1[2].field_0x4198 = *(float *)&param_1[2].field_0x4198 - fVar10
                    ;
                    *(float *)&param_1[2].field_0x41b8 = *(float *)&param_1[2].field_0x41b8 - fVar21
                    ;
                    *(float *)&param_1[2].field_0x41a0 = *(float *)&param_1[2].field_0x41a0 - fVar21
                    ;
                    fVar21 = *(float *)&param_1->field_0x257c;
                    *(float *)&param_1[2].field_0x41c0 = *(float *)&param_1[2].field_0x41c0 - fVar4;
                    *(float *)&param_1->field_0x257c =
                         fVar20 * param_2 * (fVar11 + (float)local_28) + fVar21;
                    if (iVar15 != local_98) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                                ((CMotionController *)pCVar2,iVar15,1);
                    }
                    if (*(int *)(param_1[1].base.actor_name + 0x18) != 0) {
                      core_hero_cpp_FUN_004cfc80();
                    }
                    if ((param_1[1].base.orient.vec.z != 0.0) &&
                       ((*(uint *)&param_1[2].field_0x44f0 & 0x7fffffff) == 0)) {
                      engine_console_cpp_FUN_00436710(g_CConsolePtr);
                      iVar12 = *(int *)&param_1->field_0x2698;
                      *(int *)&param_1[2].field_0x415c = iVar12;
                      if ((iVar12 == 0) &&
                         (((iVar12 = *(int *)(&param_1[2].field_0x34b8 +
                                             *(int *)&param_1[2].field_0x3324 * 4),
                           *(int *)&param_1[2].field_0x415c = iVar12, iVar12 != 0 &&
                           (*(int *)&param_1[2].field_0x41d8 != 0)) &&
                          (*(int *)&param_1[2].field_0x4180 != 0)))) {
                        *(uint *)&param_1[2].field_0x415c = 0;
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
                  param_1->is_on_ground = 0;
                }
              }
            }
            else {
              EVar5 = param_1->walk_state;
              if (EVar5 < 2) {
                if (EVar5 == WALK_STATE_WALKING) {
                  iVar12 = 1;
                }
                else {
                  iVar12 = 0;
                }
LAB_004526f0:
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&param_1->model,iVar12,1);
              }
              else {
                if (EVar5 < WALK_STATE_NO_PATH) {
                  iVar12 = 3;
                  goto LAB_004526f0;
                }
                if (EVar5 != WALK_STATE_NO_PATH) {
                  iVar12 = 0;
                  goto LAB_004526f0;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&param_1->model,0,1);
                engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
              }
              *(uint *)&(param_1->model).field_0x225c = 0;
              *(uint *)&(param_1->model).field_0x2258 =
                   *(uint *)&(param_1->model).field_0x225c;
              *(uint *)&(param_1->model).field_0x2254 =
                   *(uint *)&(param_1->model).field_0x2258;
            }
          }
          else {
            local_24 = iVar12;
            if (*(int *)(param_1[1].base.actor_name + 0x14) != 0) {
              (**(code **)(*(int *)(*(int *)&param_1[2].field_0x414c + 0x2b0) + 0x24))();
              pfVar14 = local_560;
              pfVar17 = &local_530;
              for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
                *pfVar17 = *pfVar14;
                pfVar14 = pfVar14 + (uint)bVar18 * -2 + 1;
                pfVar17 = pfVar17 + (uint)bVar18 * -2 + 1;
              }
              local_300[2] = local_530 + local_524;
              local_300[3] = local_52c + local_520;
              local_2f0 = local_528 + local_51c;
              local_1d8 = local_530 + local_524;
              local_1f8[(uint)bVar18 * -2 + 9] = local_300[(uint)bVar18 * -2 + 3];
              local_1f8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10] =
                   local_300[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
              local_100 = local_1d8 * _DAT_005cff73;
              local_fc = local_1d4 * _DAT_005cff73;
              local_f8 = local_1d0 * _DAT_005cff73;
              local_1b4 = local_1d8 * _DAT_005cff73;
              afStack_1b0[(uint)bVar18 * -2] = afStack_1b0[(uint)bVar18 * -2 + 0x2d];
              afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
                   afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x2e];
              core_actor_cpp_FUN_00408d70(*(uint *)&param_1[2].field_0x414c);
              afStack_1b0[2] = (float)local_3c4;
              afStack_1b0[(uint)bVar18 * -2 + 3] = local_3e4[(uint)bVar18 * -2 + 9];
              afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
                   local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10];
              core_actor_cpp_FUN_00408de0(param_1);
              local_190 = local_280;
              afStack_1b0[(uint)bVar18 * -2 + 9] = local_2a0[(uint)bVar18 * -2 + 9];
              afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10] =
                   local_2a0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
              local_2bc = local_1cc;
              local_300[(uint)bVar18 * -2 + 0x12] = local_1f8[(uint)bVar18 * -2 + 0xc];
              local_300[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x13] =
                   local_1f8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
              fVar20 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
              local_184 = local_524 - local_530;
              local_180 = local_520 - local_52c;
              local_17c = local_51c - local_528;
              local_3e4[2] = local_524 - local_530;
              local_3e4[(uint)bVar18 * -2 + 3] = afStack_1b0[(uint)bVar18 * -2 + 0xc];
              local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
                   afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
              local_dc = local_3e4[2] * _DAT_005cff73;
              local_d8 = local_3e4[3] * _DAT_005cff73;
              local_d4 = local_3d4 * _DAT_005cff73;
              local_274 = local_3e4[2] * _DAT_005cff73;
              local_2a0[(uint)bVar18 * -2 + 0xc] = afStack_1b0[(uint)bVar18 * -2 + 0x36];
              local_2a0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd] =
                   afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x37];
              local_270 = 0;
              local_50 = fVar20;
              local_14 = fVar20;
              if (((local_188 - SQRT(local_26c * local_26c + local_274 * local_274) <
                    (float)_DAT_005cff8f) && (1.0 < local_18c)) &&
                 ((local_18c < (float)_DAT_005cff97 && (ABS(fVar20) < (float)_DAT_005cff9f)))) {
                local_68 = param_2 * _DAT_005cffa7;
                if (fVar20 < -local_68) {
                  local_50 = -local_68;
                }
                if (local_68 < local_50) {
                  local_50 = local_68;
                }
                (param_1->base).orient.vec.y = (param_1->base).orient.vec.y + local_50;
                core_charactr_cpp_FUN_00429d60(param_1);
                goto switchD_0045277b_caseD_6;
              }
            }
            if (local_24 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->model,0,1);
              core_hero_cpp_CHero_stopPushingBox_FUN_004cf830((CHero *)param_1);
            }
          }
        }
        else {
          if (param_1->grabbed_type == 0) {
            core_actor_cpp_FUN_00408de0(param_1);
            local_2a0[2] = (float)local_25c;
            local_2a0[(uint)bVar18 * -2 + 3] = local_2a0[(uint)bVar18 * -2 + 0x12];
            local_2a0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
                 local_2a0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x13];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
            local_1fc = local_388;
            local_1f8[(uint)bVar18 * -2] = local_3e4[(uint)bVar18 * -2 + 0x18];
            local_1f8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
                 local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x19];
            local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
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
            (param_1->base).orient.vec.y = (param_1->base).orient.vec.y + local_40;
            core_charactr_cpp_FUN_00429d60(param_1);
          }
          local_9c = (CCharacter *)param_1->grabbed_by;
          local_28 = (local_9c->base).vtable._uc;
          local_6c = (CMotionController *)&param_1->model;
          core_skeleton_cpp_FUN_00546a90(local_6c);
          pCVar6 = local_28;
          pCVar23 = local_9c;
          pCVar25 = &local_2b0;
          local_2b0.x = local_448;
          *(float *)((int)&local_2b0 + (uint)bVar18 * -8 + 4) = afStack_444[(uint)bVar18 * -2];
          actor = param_1;
          *(float *)((int)&local_2b0 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
               afStack_444[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
          iVar12 = (*(pCVar6->_uc).attractActorToward)(pCVar23,&actor->base,pCVar25);
          this_ptr = local_6c;
          if (iVar12 == 0) {
            param_1->grabbed_by = (CDemonActor *)0x0;
          }
          else if (param_1->grabbed_by != (CDemonActor *)0x0) {
            fVar20 = *(float *)&param_1[2].field_0x427c + param_2;
            *(float *)&param_1[2].field_0x427c = fVar20;
            if ((_DAT_005f5158 <= fVar20) && (param_1->grabbed_type != 1)) {
              local_28 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0();
              local_14 = (float)core_motion_cpp_FUN_005038a0();
              if (local_14 + (float)local_28 <= 0.0) {
                (*(((param_1->base).vtable._uc)->_uc).releaseFromGrab)(param_1);
              }
              else if (*(int *)(param_1[1].base.actor_name + 0x14) != 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr,0x25,1);
                pCVar23 = param_1 + 1;
                (pCVar23->base).actor_name[0x14] = '\0';
                (pCVar23->base).actor_name[0x15] = '\0';
                (pCVar23->base).actor_name[0x16] = '\0';
                (pCVar23->base).actor_name[0x17] = '\0';
              }
            }
            goto switchD_0045277b_caseD_6;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->model,0,1);
        }
      }
      else {
        (**(code **)(*(int *)(iVar15 + 0x2b0) + 0xa0))(iVar15);
        if ((local_580 == 0) || (param_1 != local_57c)) {
          core_hero_cpp_CHero_stopNearbyInteraction_FUN_004cfad0((CHero *)param_1);
        }
        else {
          pfVar14 = (float *)(*(int *)&local_57c[2].field_0x4158 + 0x34 + (uint)bVar18 * -8);
          local_3b8 = *(float *)(*(int *)&local_57c[2].field_0x4158 + 0x30);
          local_3e4[(uint)bVar18 * -2 + 0xc] = *pfVar14;
          local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd] = pfVar14[(uint)bVar18 * -2 + 1];
          local_60 = param_1[1].base.orient.vec.x * _DAT_005cffa7 * (float)_DAT_005cffb7 * param_2;
          if (local_60 < local_56c) {
            local_60 = local_56c;
          }
          if (local_570 < local_60) {
            local_60 = local_570;
          }
          local_3b4 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
          local_64 = param_1[1].base.orient.vec.y * _DAT_005cffa7 * (float)_DAT_005cffb7 * param_2;
          if (local_64 < local_564) {
            local_64 = local_564;
          }
          if (local_568 < local_64) {
            local_64 = local_568;
          }
          local_14 = (float)local_3b4;
          local_3b8 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
          local_14 = local_3b8;
          iVar12 = (**(code **)(*(int *)(*(int *)&param_1[2].field_0x4158 + 0x2b0) + 0xa8))
                             (*(int *)&param_1[2].field_0x4158,local_3e4 + 0xb);
          if (iVar12 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->model,0,1);
            core_hero_cpp_CHero_stopNearbyInteraction_FUN_004cfad0((CHero *)param_1);
          }
          else {
            local_90 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
            local_bc = (double)local_90;
            if ((float)_DAT_005cff7f <= local_90) {
              if (local_bc <= _DAT_005cff87) {
                iVar12 = 0;
              }
              else {
                iVar12 = 4;
              }
            }
            else {
              iVar12 = 5;
            }
            local_14 = local_90;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->model,iVar12,1);
            fVar20 = local_90;
            pfVar14 = (float *)((int)param_1 + (uint)bVar18 * -8 + 0x34);
            local_d0 = (param_1->base).orient.vec.x;
            afStack_1b0[(uint)bVar18 * -2 + 0x39] = *pfVar14;
            afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x3a] =
                 pfVar14[(uint)bVar18 * -2 + 1];
            local_cc = fVar20 * *(float *)&param_1[2].field_0x41ec + local_cc;
            core_charactr_cpp_FUN_00429d60(param_1);
            local_1b8 = local_578 + (float)_DAT_005cffbf;
            local_1c0 = 0;
            local_1bc = 0;
            local_28 = (CCharacter_full_vtable *)local_1b8;
            core_actor_cpp_FUN_00408d70(*(uint *)&param_1[2].field_0x4158);
            local_124 = local_2e0;
            afStack_1b0[(uint)bVar18 * -2 + 0x24] = local_300[(uint)bVar18 * -2 + 9];
            afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x25] =
                 local_300[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10];
            local_28 = (CCharacter_full_vtable *)&param_1[2].field_0x41ec;
            local_154 = local_124 - *(float *)&(param_1->base).field_0x20;
            local_150 = local_120 - *(float *)&(param_1->base).field_0x24;
            local_14c = local_11c - *(float *)&(param_1->base).field_0x28;
            local_f4 = local_154;
            afStack_1b0[(uint)bVar18 * -2 + 0x30] = afStack_1b0[(uint)bVar18 * -2 + 0x18];
            afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x31] =
                 afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x19];
            core_actor_cpp_FUN_00408d30(param_1);
            local_244 = local_400;
            local_2a0[(uint)bVar18 * -2 + 0x18] = local_42c[(uint)bVar18 * -2 + 0xc];
            local_2a0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x19] =
                 local_42c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
            local_3e8 = local_244 * (float)(local_28->_ub).setup;
            puVar1 = &(param_1->model).field_0x2254;
            local_3e4[0] = local_240 * (float)(local_28->_ub).setup;
            local_3e4[1] = local_23c * (float)(local_28->_ub).setup;
            local_358 = local_3e8;
            local_3e4[(uint)bVar18 * -2 + 0x24] = local_3e4[(uint)bVar18 * -2];
            local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x25] =
                 local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
            if ((float *)puVar1 != local_3e4 + 0x23) {
              *(float *)puVar1 = local_358;
              *(uint *)&(param_1->model).field_0x2258 = local_354;
              *(uint *)&(param_1->model).field_0x225c = local_350;
            }
            *(uint *)&(param_1->model).field_0x2258 = 0;
          }
        }
      }
    }
    else {
      local_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->model);
      if (0.0 < local_14) {
        if (*(float *)&(param_1->base).field_0x24 <
            *(float *)(*(int *)&param_1[2].field_0x41d4 + 0x24) + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->model,0,1);
        }
      }
      else {
        *(uint *)&param_1[2].field_0x41d4 = 0;
      }
      if (0.0 < *(float *)&param_1[2].field_0x4290) {
        if (*(float *)&param_1[2].field_0x4290 <= param_2) {
          *(uint *)&param_1[2].field_0x4290 = 0;
          local_54 = 1.0;
        }
        else {
          local_54 = param_2 / *(float *)&param_1[2].field_0x4290;
          *(float *)&param_1[2].field_0x4290 = *(float *)&param_1[2].field_0x4290 - param_2;
        }
        puVar3 = &param_1[2].field_0x4280;
        puVar1 = &(param_1->base).field_0x20;
        fVar20 = 1.0 - local_54;
        local_130 = *(float *)puVar3 * local_54;
        local_12c = *(float *)&param_1[2].field_0x4284 * local_54;
        local_128 = *(float *)&param_1[2].field_0x4288 * local_54;
        local_34c = *(float *)puVar3 * local_54;
        local_3e4[(uint)bVar18 * -2 + 0x27] = afStack_1b0[(uint)bVar18 * -2 + 0x21];
        local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x28] =
             afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x22];
        *(float *)puVar1 = *(float *)puVar1 + local_34c;
        *(float *)&(param_1->base).field_0x24 = *(float *)&(param_1->base).field_0x24 + local_348;
        *(float *)&(param_1->base).field_0x28 = *(float *)&(param_1->base).field_0x28 + local_344;
        *(float *)puVar3 = *(float *)puVar3 * fVar20;
        *(float *)&param_1[2].field_0x4284 = *(float *)&param_1[2].field_0x4284 * fVar20;
        *(float *)&param_1[2].field_0x4288 = *(float *)&param_1[2].field_0x4288 * fVar20;
        local_20 = fVar20;
        local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
        *(float *)&param_1->field_0x2578 = local_14 * local_54;
      }
      local_14 = (*((param_1->base).vtable._ub)->cylinderGroundCheck)
                           (&param_1->base,*(float *)&param_1->field_0x3430,(CVector3f *)0x0);
      param_1->closest_distance_threshold = local_14;
    }
  }
  else {
    local_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->model);
    if (0.0 < local_14) {
      core_actor_cpp_FUN_00408d70(*(uint *)&param_1[2].field_0x4154);
      local_220 = local_19c;
      local_2a0[(uint)bVar18 * -2 + 0x21] = afStack_1b0[(uint)bVar18 * -2 + 6];
      local_2a0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x22] =
           afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7];
      if (local_21c + (float)_DAT_005cffc7 < *(float *)&(param_1->base).field_0x24) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->model,0,1);
      }
    }
    else {
      *(uint *)&param_1[2].field_0x4154 = 0;
    }
    if (0.0 < *(float *)&param_1[2].field_0x4290) {
      if (*(float *)&param_1[2].field_0x4290 <= param_2) {
        *(uint *)&param_1[2].field_0x4290 = 0;
        local_5c = 1.0;
      }
      else {
        local_5c = param_2 / *(float *)&param_1[2].field_0x4290;
        *(float *)&param_1[2].field_0x4290 = *(float *)&param_1[2].field_0x4290 - param_2;
      }
      puVar3 = &param_1[2].field_0x4280;
      puVar1 = &(param_1->base).field_0x20;
      fVar20 = 1.0 - local_5c;
      local_460 = *(float *)puVar3 * local_5c;
      local_45c = *(float *)&param_1[2].field_0x4284 * local_5c;
      local_458 = *(float *)&param_1[2].field_0x4288 * local_5c;
      local_340 = *(float *)puVar3 * local_5c;
      local_3e4[(uint)bVar18 * -2 + 0x2a] = afStack_4fc[(uint)bVar18 * -2 + 0x28];
      local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x2b] =
           afStack_4fc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x29];
      *(float *)puVar1 = *(float *)puVar1 + local_340;
      *(float *)&(param_1->base).field_0x24 = *(float *)&(param_1->base).field_0x24 + local_33c;
      *(float *)&(param_1->base).field_0x28 = *(float *)&(param_1->base).field_0x28 + local_338;
      *(float *)puVar3 = *(float *)puVar3 * fVar20;
      *(float *)&param_1[2].field_0x4284 = *(float *)&param_1[2].field_0x4284 * fVar20;
      *(float *)&param_1[2].field_0x4288 = *(float *)&param_1[2].field_0x4288 * fVar20;
      local_7c = fVar20;
      local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
      *(float *)&param_1->field_0x2578 = local_14 * local_5c;
    }
  }
switchD_0045277b_caseD_6:
  iVar12 = core_motion_cpp_FUN_005035c0();
  if ((*(int *)(iVar12 + 0x24) == 0x1b) &&
     (this_ptr_00 = (CAmmoBox *)
                    core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (*(uint *)&param_1[2].field_0x4148),
     this_ptr_00 != (CAmmoBox *)0x0)) {
    local_14 = core_motion_cpp_FUN_00503e60((CMotionController *)&param_1->model);
    core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e600(this_ptr_00,local_14);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470(param_1);
  core_doc_cpp_FUN_00455270(param_1);
  if (local_94 != 0) {
    *(uint *)&param_1[2].field_0x4228 = 0;
    *(uint *)&param_1[2].field_0x4224 = *(uint *)&param_1[2].field_0x4228;
    *(uint *)&param_1[2].field_0x4220 = *(uint *)&param_1[2].field_0x4224;
  }
  if ((*(int *)&param_1[2].field_0x4154 == 0) && (*(int *)&param_1[2].field_0x41d4 == 0)) {
    if (local_58 == 0) goto LAB_004514a7;
    local_18 = (CMotionController *)&param_1->model;
    iVar12 = core_motion_cpp_FUN_005035c0();
    fVar20 = 0x41900000 * param_2;
    puVar1 = &(param_1->model).field_0x2254;
    iVar12 = *(int *)(iVar12 + 0x24);
    local_3ac = *(float *)puVar1 + *(float *)&param_1->field_0x257c;
    local_3a8 = *(float *)&(param_1->model).field_0x2258 + *(float *)&param_1->field_0x2580;
    local_3a4 = *(float *)&(param_1->model).field_0x225c + *(float *)&param_1->field_0x2584;
    local_3f4.x = local_3ac;
    *(float *)((int)&local_3f4 + (uint)bVar18 * -8 + 4) = local_3e4[(uint)bVar18 * -2 + 0xf];
    *(float *)((int)&local_3f4 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
         local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10];
    *(uint *)&(param_1->model).field_0x225c = 0;
    *(uint *)&(param_1->model).field_0x2258 = *(uint *)&(param_1->model).field_0x225c;
    *(uint *)puVar1 = *(uint *)&(param_1->model).field_0x2258;
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    local_74 = fVar20;
    local_48 = iVar12;
    if (iVar12 == 7) {
      local_3f4.x = 0.0;
      local_3f4.y = 0.0;
      *(float *)&param_1[2].field_0x423c = 0x41900000;
      *(uint *)&param_1[2].field_0x4238 = 0;
      local_3f4.z = fVar20;
    }
    else {
      if (iVar12 == 8) {
        fVar4 = (float)_DAT_005cffcf;
        local_3f4.y = 0.0;
        fVar21 = *(float *)&param_1->field_0x258c;
        *(float *)&param_1[2].field_0x423c = 0x41900000;
        fVar21 = fVar21 - param_2 * fVar4;
        *(uint *)&param_1[2].field_0x4238 = 0;
        local_3f4.z = fVar20;
        goto LAB_00452ac9;
      }
      if (iVar12 == 9) {
        fVar4 = (float)_DAT_005cffcf;
        local_3f4.x = 0.0;
        local_3f4.y = 0.0;
        fVar21 = 0x40000000 * 0x41900000;
        local_3f4.z = *(float *)&param_1[2].field_0x423c * param_2;
        *(uint *)&param_1[2].field_0x4238 = 0;
        fVar20 = *(float *)&param_1->field_0x258c;
        *(float *)&param_1[2].field_0x423c = *(float *)&param_1[2].field_0x423c - fVar21 * param_2;
        fVar21 = *(float *)&param_1[2].field_0x423c;
        *(float *)&param_1->field_0x258c = fVar20 - param_2 * fVar4;
        if (fVar21 < 0.0) {
          *(uint *)&param_1[2].field_0x423c = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_18,0xf,1);
        }
      }
      else if (iVar12 == 10) {
        local_3f4.x = 0.0;
        local_3f4.y = 0.0;
        local_3f4.z = fVar20 * (float)_DAT_005cffb7;
      }
      else if (iVar12 == 0xb) {
        *(uint *)&param_1[2].field_0x423c = 0x41200000;
        *(uint *)&param_1[2].field_0x4238 = 0;
      }
      else if (iVar12 == 0xc) {
        local_3f4.z = param_2 * _DAT_005cffd7;
        fVar20 = (float)_DAT_005cffcf;
        fVar21 = *(float *)&param_1->field_0x258c;
        *(uint *)&param_1[2].field_0x423c = 0x41200000;
        fVar21 = fVar21 - param_2 * fVar20;
        *(uint *)&param_1[2].field_0x4238 = 0;
LAB_00452ac9:
        local_3f4.x = 0.0;
LAB_00452acb:
        *(float *)&param_1->field_0x258c = fVar21;
      }
      else if (iVar12 == 0xd) {
        local_3f4.x = 0.0;
        local_3f4.y = 0.0;
        local_3f4.z = *(float *)&param_1[2].field_0x423c * param_2;
        fVar4 = (float)_DAT_005cffcf;
        fVar20 = *(float *)&param_1->field_0x258c;
        fVar21 = *(float *)&param_1[2].field_0x423c;
        *(uint *)&param_1[2].field_0x4238 = 0;
        *(float *)&param_1->field_0x258c = fVar20 - param_2 * fVar4;
        if (fVar21 < 0.0) {
          *(uint *)&param_1[2].field_0x423c = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_18,0xf,1);
        }
      }
      else {
        if (iVar12 != 0xe) {
          if (iVar12 == 0xf) {
            local_3f4.z = 0.0;
            local_3f4.y = 0.0;
            fVar21 = *(float *)&param_1->field_0x258c - param_2 * (float)_DAT_005cffcf;
            *(uint *)&param_1[2].field_0x4238 = 0x461c3f9a;
            goto LAB_00452ac9;
          }
          if (iVar12 == 0x10) {
            local_3f4.z = 0.0;
            local_3f4.y = 0.0;
            local_3f4.x = 0.0;
            fVar21 = *(float *)&param_1->field_0x258c - param_2 * (float)_DAT_005cffcf;
          }
          else {
            fVar21 = *(float *)&param_1->field_0x258c - param_2 * (float)_DAT_005cffcf;
          }
          goto LAB_00452acb;
        }
        local_3f4.y = 0.0;
      }
    }
    core_actor_cpp_FUN_00408d30(param_1);
    local_118 = local_268;
    afStack_1b0[(uint)bVar18 * -2 + 0x27] = local_2a0[(uint)bVar18 * -2 + 0xf];
    afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x28] =
         local_2a0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10];
    local_40c = *(float *)&param_1->field_0x2588 * param_2;
    pCVar25 = &local_3f4;
    local_408 = *(float *)&param_1->field_0x258c * param_2;
    local_404 = *(float *)&param_1->field_0x2590 * param_2;
    local_238 = local_40c;
    local_2a0[(uint)bVar18 * -2 + 0x1b] = local_42c[(uint)bVar18 * -2 + 9];
    local_2a0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1c] =
         local_42c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10];
    local_13c = local_238 + local_118;
    local_138 = local_234 + local_114;
    local_134 = local_230 + local_110;
    local_148 = local_238 + local_118;
    afStack_1b0[(uint)bVar18 * -2 + 0x1b] = afStack_1b0[(uint)bVar18 * -2 + 0x1e];
    afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1c] =
         afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1f];
    local_3f4.x = local_3f4.x + local_148;
    local_3f4.y = local_3f4.y + local_144;
    local_3f4.z = local_3f4.z + local_140;
    *(uint *)&param_1[2].field_0x42e8 = *(uint *)&param_1->field_0x258c;
    core_charactr_cpp_FUN_00423a60(param_1,pCVar25);
    if (*(float *)&(param_1->base).field_0x24 <
        param_1->closest_distance_threshold + (float)_DAT_005cffdf) {
      param_1->is_on_ground = 1;
    }
    if (((local_48 == 0xf) || (local_48 == 9)) || (local_48 == 0xd)) {
      if (param_1->is_on_ground != 0) {
        engine_console_cpp_FUN_00436710
                  (g_CConsolePtr,"Splat at %3.2f fps\n",
                   (double)*(float *)&param_1->field_0x258c);
        local_70 = -*(float *)&param_1[2].field_0x42e8;
        local_c4 = (double)local_70;
        if ((float)_DAT_005cffe7 <= local_70) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffff9e4);
          fVar19 = (float10)local_c4;
          fVar7 = (float10)_DAT_005cffef;
          fVar8 = (float10)_DAT_005cfff7;
          fVar9 = (float10)_DAT_005cffff;
          pCVar6 = (param_1->base).vtable._uc;
          param_1[1].base.actor_name[0] = '\0';
          param_1[1].base.actor_name[1] = '\0';
          param_1[1].base.actor_name[2] = '\0';
          param_1[1].base.actor_name[3] = '\0';
          (*(pCVar6->_uc).processDamage)(param_1,(SDamageInfo *)&stack0xfffff9e4);
          if ((param_1->hit_points <= 0.0) ||
             (0x42c80000 < (int)(float)((fVar19 + fVar7) * fVar8 * fVar9))) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->model,0x12,1);
            goto LAB_00452c9a;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->model,0x11,1);
        }
        else {
          if (local_48 == 0xd) {
            iVar12 = 0xe;
          }
          else if (local_48 == 9) {
            iVar12 = 10;
          }
          else {
            if (local_48 != 0xf) goto LAB_00452c78;
            iVar12 = 0x10;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->model,iVar12,1);
        }
LAB_00452c78:
        (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                  (&param_1->base,(CVector3f *)&DAT_0265370c,local_70 * _DAT_005d0007 + 1.0);
      }
LAB_00452c9a:
      iVar12 = param_1->is_on_ground;
      fVar20 = 0x40000000;
    }
    else {
      iVar12 = param_1->is_on_ground;
      fVar20 = 0x40000000;
    }
    0x40000000 = fVar20;
    if (iVar12 == 0) {
      *(float *)&param_1[2].field_0x4238 = *(float *)&param_1[2].field_0x4238 + param_2;
      local_80 = fVar20;
      if (local_48 == 3) {
        local_80 = fVar20 * (float)_DAT_005cff77;
      }
      if ((local_80 < *(float *)&param_1[2].field_0x4238) ||
         (*(float *)&param_1[2].field_0x42e8 < (float)_DAT_005cffef)) {
        if (local_48 != 0xf) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->model,0xf,1);
        }
        param_1->is_on_ground = 0;
      }
      goto LAB_004514a7;
    }
  }
  else {
    local_28 = (CCharacter_full_vtable *)&(param_1->model).field_0x2254;
    core_actor_cpp_FUN_00408cf0(param_1);
    puVar1 = &(param_1->base).field_0x20;
    local_160 = local_42c[2];
    afStack_1b0[(uint)bVar18 * -2 + 0x15] = local_42c[(uint)bVar18 * -2 + 3];
    afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x16] =
         local_42c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
    *(float *)puVar1 = *(float *)puVar1 + local_160;
    *(float *)&(param_1->base).field_0x24 = *(float *)&(param_1->base).field_0x24 + local_15c;
    *(float *)&(param_1->base).field_0x28 = *(float *)&(param_1->base).field_0x28 + local_158;
    (local_28->_ub).setup = (CDemonActor_setup *)0x0;
    (local_28->_ub).vfunc1 = (CDemonActor_vfunc1 *)(local_28->_ub).setup;
    (local_28->_ub).setup = (CDemonActor_setup *)(local_28->_ub).vfunc1;
  }
  *(uint *)&param_1[2].field_0x4238 = 0;
LAB_004514a7:
  *(uint *)&param_1[2].field_0x4228 = 0;
  *(uint *)&param_1[2].field_0x4224 = *(uint *)&param_1[2].field_0x4228;
  *(uint *)&param_1[2].field_0x4220 = *(uint *)&param_1[2].field_0x4224;
  if (local_44 != 0) {
    if (*(int *)&param_1[1].base.field_0x20 != 0) {
      if (*(int *)&param_1[2].field_0x4180 == 0) {
        if ((*(int *)&param_1[2].field_0x4298 == 0) ||
           (iVar12 = core_actor_cpp_isOfClass_FUN_0040c840
                               (*(CDemonActor **)
                                 (&param_1[2].field_0x34cc + *(int *)&param_1[2].field_0x3324 * 4),
                                &DAT_005cff2d), iVar12 != 0)) {
          *(uint *)&param_1[2].field_0x4180 = 1;
        }
        else {
          *(uint *)&param_1[2].field_0x4180 = 0;
        }
      }
      else {
        *(uint *)&param_1[2].field_0x4180 = 0;
      }
    }
    if ((*(int *)(param_1[1].base.actor_name + 0x1c) != 0) &&
       (iVar12 = unkafter_stranger_cpp_FUN_0045df30(), iVar12 == 0)) {
      if (*(int *)&param_1[2].field_0x4298 == 0) {
        *(uint *)&param_1[2].field_0x4298 = 1;
      }
      else {
        *(uint *)&param_1[2].field_0x4298 = 0;
      }
    }
  }
  if (local_4c != 0) {
    unkafter_stranger_cpp_FUN_0045bdc0(param_1);
  }
  if (*(int *)&param_1[2].field_0x4180 == 0) {
    fVar20 = *(float *)&param_1[2].field_0x4184 - param_2 / _DAT_005f5120;
    *(float *)&param_1[2].field_0x4184 = fVar20;
    if (fVar20 < 0.0) {
      *(uint *)&param_1[2].field_0x4184 = 0;
    }
  }
  else {
    fVar20 = param_2 / _DAT_005f511c + *(float *)&param_1[2].field_0x4184;
    *(float *)&param_1[2].field_0x4184 = fVar20;
    if (1.0 < fVar20) {
      *(uint *)&param_1[2].field_0x4184 = 0x3f800000;
    }
  }
  fVar20 = *(float *)&param_1[2].field_0x41a4 - param_2 / _DAT_005f5124;
  *(float *)&param_1[2].field_0x41a4 = fVar20;
  if (fVar20 <= 0.0) {
    *(uint *)&param_1[2].field_0x41a4 = 0;
  }
  fVar20 = *(float *)&param_1[2].field_0x41c4 - param_2 / _DAT_005f5124;
  *(float *)&param_1[2].field_0x41c4 = fVar20;
  if (fVar20 <= 0.0) {
    *(uint *)&param_1[2].field_0x41c4 = 0;
  }
  if (local_34 != 0) {
    unkafter_stranger_cpp_FUN_0045c960();
  }
  core_doc_cpp_FUN_00453d80();
  unkafter_stranger_cpp_FUN_0045b510(param_1,param_2);
  unkafter_stranger_cpp_FUN_0045db40();
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429420(param_1,param_2,0);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90(param_1,param_2);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(&param_1->model);
  fVar20 = *(float *)&(param_1->base).field_0x2a8 - param_2;
  *(float *)&(param_1->base).field_0x2a8 = fVar20;
  if (fVar20 <= 0.0) {
    local_8c = &(param_1->base).field_0x154;
    iVar12 = shape_superopt_cpp_CComplexPolygon_getMaterialId_FUN_005a8130
                       ((CComplexPolygon *)local_8c);
    if (iVar12 != 0) {
      core_xform_cpp_FUN_00591530(&DAT_0265370c);
      puVar1 = local_8c;
      local_214 = local_334;
      local_2a0[(uint)bVar18 * -2 + 0x24] = local_3e4[(uint)bVar18 * -2 + 0x2d];
      local_2a0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x25] =
           local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x2e];
      local_30 = puVar1;
      *(uint *)&(param_1->base).field_0x2a8 = 0x3dcccccd;
      local_2c = 0;
      do {
        iVar12 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
        if (iVar12 != 0) {
          local_a4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          local_14 = local_a4;
          local_a0 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          local_14 = local_a0;
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          core_xform_cpp_quaternionFromAngleZ_FUN_00594020();
          pfVar14 = afStack_4fc + 7;
          local_4e0[0] = local_500;
          afStack_4fc[(uint)bVar18 * -2 + 8] = afStack_4fc[(uint)bVar18 * -2];
          afStack_4fc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 9] =
               afStack_4fc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
          (afStack_4fc + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 9)[(uint)bVar18 * -2 + 1] =
               (afStack_4fc + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_a0);
          uVar24 = CONCAT44(pfVar14,afStack_4fc + 0x1b);
          local_490[0] = local_480;
          afStack_4fc[(uint)bVar18 * -2 + 0x1c] = afStack_4fc[(uint)bVar18 * -2 + 0x20];
          afStack_4fc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1d] =
               afStack_4fc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x21];
          (afStack_4fc + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1d)[(uint)bVar18 * -2 + 1] =
               (afStack_4fc + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x21)[(uint)bVar18 * -2 + 1];
          core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_a4,uVar24);
          local_4b0[0] = local_4c0;
          afStack_4fc[(uint)bVar18 * -2 + 0x14] = afStack_4fc[(uint)bVar18 * -2 + 0x10];
          afStack_4fc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x15] =
               afStack_4fc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x11];
          (afStack_4fc + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x15)[(uint)bVar18 * -2 + 1] =
               (afStack_4fc + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x11)[(uint)bVar18 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_4fc + 0x13);
          local_4d0[0] = local_470;
          afStack_4fc[(uint)bVar18 * -2 + 0xc] = afStack_4fc[(uint)bVar18 * -2 + 0x24];
          afStack_4fc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd] =
               afStack_4fc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x25];
          (afStack_4fc + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd)[(uint)bVar18 * -2 + 1] =
               (afStack_4fc + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x25)[(uint)bVar18 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_4fc + 0xb);
          local_4a0 = afStack_4fc[3];
          afStack_4fc[(uint)bVar18 * -2 + 0x18] = afStack_4fc[(uint)bVar18 * -2 + 4];
          afStack_4fc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x19] =
               afStack_4fc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5];
          (afStack_4fc + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x19)[(uint)bVar18 * -2 + 1] =
               (afStack_4fc + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 5)[(uint)bVar18 * -2 + 1];
          core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10();
          puVar13 = (uint *)&stack0xfffffa50;
          puVar16 = (uint *)&stack0xfffffa20;
          for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar16 = *puVar13;
            puVar13 = puVar13 + (uint)bVar18 * -2 + 1;
            puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
          }
          afStack_444[3] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
          afStack_444[2] = 0.0;
          local_434 = 0;
          local_84 = afStack_444[3];
          local_14 = afStack_444[3];
          core_xform_cpp_FUN_00591530(afStack_444 + 2);
          local_208 = 0;
          local_204 = 0x40a00000;
          local_200 = 0;
          local_250 = local_37c;
          local_2a0[(uint)bVar18 * -2 + 0x15] = local_3e4[(uint)bVar18 * -2 + 0x1b];
          local_2a0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x16] =
               local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1c];
          pfVar14 = local_3e4 + 0x11;
          local_1f8[2] = local_250 + local_214;
          local_1f8[3] = local_24c + local_210;
          local_1e8 = local_248 + local_20c;
          local_22c = local_250 + local_214;
          local_2a0[(uint)bVar18 * -2 + 0x1e] = local_1f8[(uint)bVar18 * -2 + 3];
          local_2a0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1f] =
               local_1f8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
          pfVar17 = local_2a0 + 0x1d;
          uVar22 = 0;
          fVar21 = 0.2;
          local_2a4 = local_22c - local_214;
          local_2a0[0] = local_228 - local_210;
          local_2a0[1] = local_224 - local_20c;
          fVar20 = 0.0;
          local_3a0[0] = local_22c - local_214;
          local_3e4[(uint)bVar18 * -2 + 0x12] = local_2a0[(uint)bVar18 * -2];
          local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x13] =
               local_2a0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
          fVar20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar20,fVar21);
          local_14 = fVar20;
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.4);
          unkafter_superopt_cpp_FUN_005a8300
                    (local_30,0x3f19999a,0x3f800000,0,0x3f333333,0,local_14,fVar20,uVar22,pfVar17,
                     pfVar14);
        }
        local_2c = local_2c + 1;
      } while (local_2c < 0xf);
    }
  }
  local_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->model);
  if (local_14 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004cf830((CHero *)param_1);
  }
  else {
    local_28 = (CCharacter_full_vtable *)
               core_motion_cpp_FUN_00503e60((CMotionController *)&param_1->model);
    if ((1.0 < (float)local_28) &&
       (local_1c = (CBoxActor *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(uint *)&param_1[2].field_0x414c), local_1c != (CBoxActor *)0x0
       )) {
      core_doc_cpp_FUN_00453cc0();
      local_328 = local_2ec;
      local_3e4[(uint)bVar18 * -2 + 0x30] = local_300[(uint)bVar18 * -2 + 6];
      local_3e4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x31] =
           local_300[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7];
      core_actor_cpp_FUN_00408d70(param_1);
      local_304 = local_16c;
      local_300[(uint)bVar18 * -2] = afStack_1b0[(uint)bVar18 * -2 + 0x12];
      local_300[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
           afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x13];
      local_28c = local_304 - local_454.x;
      local_288 = local_300[0] - local_454.y;
      local_284 = local_300[1] - local_454.z;
      local_310.x = local_304 - local_454.x;
      *(float *)((int)&local_310 + (uint)bVar18 * -8 + 4) = local_2a0[(uint)bVar18 * -2 + 6];
      *(float *)((int)&local_310 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
           local_2a0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7];
      local_310.y = 0.0;
      core_actor_cpp_FUN_00408d30(param_1);
      local_178 = local_2d4;
      afStack_1b0[(uint)bVar18 * -2 + 0xf] = local_300[(uint)bVar18 * -2 + 0xc];
      afStack_1b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10] =
           local_300[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
      if (0.0 < local_170) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_0041cb40(local_1c,&local_454,&local_310);
      }
    }
  }
  unkafter_stranger_cpp_FUN_00459ff0(param_1,0);
  unkafter_stranger_cpp_FUN_0045d2c0(param_1);
  core_inv_cpp_CInventory_updateInventory_FUN_004dccd0
            ((CInventory *)(param_1[2].cloth_list.cloths + 7));
  unkafter_stranger_cpp_FUN_0045dbf0(param_1);
  if (local_34 == 0) {
    core_hero_cpp_FUN_004cf200();
  }
  else {
    param_2 = *(float *)&param_1[2].field_0x4140 + param_2;
    *(float *)&param_1[2].field_0x4140 = param_2;
    if ((float)_DAT_005cffb7 < param_2) {
      core_hero_cpp_FUN_004d0780(param_1);
    }
  }
  if ((*(int *)&param_1[2].field_0x41d8 != 0) &&
     (*(int *)(*(int *)&param_1[2].field_0x41d8 + 0xfc) != 0)) {
    *(uint *)&(param_1->base).field_0xfc = 1;
  }
  iVar12 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[2].field_0x41f0);
  if (iVar12 == 0) {
    if (*(int *)&g_CGamePtr->field_0x25c != 0) {
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[2].field_0x41f4);
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_005503a0(1);
      uVar22 = sound_sndmain_cpp_FUN_005506b0();
      *(uint *)&param_1[2].field_0x41f4 = uVar22;
      sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(0.0);
      uVar22 = sound_sndmain_cpp_FUN_005506b0();
      *(uint *)&param_1[2].field_0x41f0 = uVar22;
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
      sound_sndmain_cpp_setSfxFade_FUN_00551080(*(uint *)&param_1[2].field_0x41f0,1.0,1.0,0);
      if (*(int *)&g_CGamePtr->field_0x264 != 0) {
        *(uint *)&g_CGamePtr->field_0x264 = 0;
        (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"flashlit.wav");
        return;
      }
    }
  }
  else if (*(int *)&g_CGamePtr->field_0x25c == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[2].field_0x41f4);
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[2].field_0x41f0);
    sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
    sound_sndmain_cpp_setNextSfxFlagBits_FUN_005503a0(1);
    sound_sndmain_cpp_FUN_005506b0();
    sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    return;
  }
  return;
}
