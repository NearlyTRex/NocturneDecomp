// Name: core_prye.cpp_FUN_00518cd0
// Address: 00518cd0
// Address Range: [[00518cd0, 0051b54d]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_00518cd0(UOrientationVector *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_00518cd0(UOrientationVector *param_1,float param_2)

{
  CMotionController *pCVar1;
  UOrientationVector *pUVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  CGame *pCVar6;
  float fVar7;
  SMotion *pSVar8;
  CAmmoBox *this_ptr;
  CDemonActor *pCVar9;
  int iVar10;
  int desired_state_index;
  UOrientationVector *unaff_ESI;
  uint *puVar11;
  float *pfVar12;
  float *pfVar13;
  uint *puVar14;
  byte bVar15;
  float afStackY_13b8 [212];
  CCharacter *apCStackY_1068 [732];
  CBoundingBox3D *in_stack_fffffb10;
  ulonglong uVar16;
  CVector3f *pCVar17;
  UOrientationVector *in_stack_fffffb18;
  UOrientationVector *in_stack_fffffb1c;
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
  uint uStack_3e8;
  uint uStack_3e4;
  float fStack_3e0;
  uint uStack_3dc;
  uint uStack_3d8;
  float fStack_3d4;
  CVector3f aCStack_3d0 [2];
  uint uStack_3b0;
  float afStack_3ac [4];
  float fStack_39c;
  float fStack_398;
  float fStack_38c;
  float afStack_388 [6];
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  uint uStack_364;
  float fStack_360;
  float fStack_350;
  float afStack_34c [3];
  UOrientationVector *pUStack_340;
  CVector3f CStack_334;
  float fStack_320;
  float afStack_31c [4];
  float fStack_30c;
  float fStack_308;
  UOrientationVector *pUStack_304;
  float afStack_300 [5];
  uint uStack_2ec;
  float afStack_2e8 [4];
  float fStack_2d8;
  uint uStack_2d4;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  UOrientationVector UStack_2b4;
  float fStack_2a4;
  float afStack_2a0 [5];
  float fStack_28c;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_248;
  float afStack_244 [4];
  float fStack_234;
  float fStack_22c;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  uint uStack_20c;
  float afStack_208 [5];
  float fStack_1f4;
  uint uStack_1f0;
  float afStack_1ec [4];
  byte auStack_1dc [4];
  CVector3f CStack_1d8;
  float fStack_1cc;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_170;
  float afStack_16c [5];
  float fStack_158;
  float fStack_154;
  float afStack_150 [2];
  CVector3f CStack_148;
  float afStack_13c [4];
  float fStack_12c;
  float fStack_128;
  uint uStack_124;
  uint uStack_118;
  float fStack_114;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_f8;
  float afStack_f4 [9];
  CVector3f CStack_d0;
  float afStack_c4 [5];
  float fStack_b0;
  float afStack_ac [4];
  float fStack_9c;
  float fStack_94;
  float fStack_80;
  CCharacter *apCStack_7c [3];
  float fStack_70;
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
  UOrientationVector *pUStack_20;
  float fStack_1c;
  CBoxActor *pCStack_18;
  CDeformableModelInstance *pCStack_14;
  
  bVar15 = 0;
  local_34 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                       (0x01C6E360,"?DebugActionPending" + 1);
  pCVar9 = *(CDemonActor **)(param_1 + 0x32e);
  if ((pCVar9 != (CDemonActor *)0x0) && (*(float *)((int)param_1 + 0x20ca4) < _DAT_005cd147)) {
    (*((pCVar9->vtable)._ub)->getBoundingBox)(pCVar9,in_stack_fffffb10);
    pfVar12 = &fStack_400;
    pfVar13 = local_3f0;
    for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar13 = *pfVar12;
      pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
      pfVar13 = pfVar13 + (uint)bVar15 * -2 + 1;
    }
    if ((uint *)((int)param_1 + 0x20c98) != &uStack_3e8) {
      *(uint *)((int)param_1 + 0x20c98) = uStack_3e8;
      *(uint *)((int)param_1 + 0x20c9c) = uStack_3e4;
      param_1[0x2bb8].vec.x = fStack_3e0;
    }
    if ((uint *)((int)param_1 + 0x20ca4) != &uStack_3dc) {
      *(uint *)((int)param_1 + 0x20ca4) = uStack_3dc;
      *(uint *)((int)param_1 + 0x20ca8) = uStack_3d8;
      param_1[0x2bb9].vec.x = fStack_3d4;
    }
    afStack_16c[0] = *(float *)((int)param_1 + 0x20c98) + *(float *)((int)param_1 + 0x20ca4);
    afStack_16c[1] = *(float *)((int)param_1 + 0x20c9c) + *(float *)((int)param_1 + 0x20ca8);
    afStack_16c[2] = param_1[0x2bb8].vec.x + param_1[0x2bb9].vec.x;
    fStack_10c = afStack_16c[0];
    afStack_13c[(uint)bVar15 * -2 + 0xd] = afStack_16c[(uint)bVar15 * -2 + 1];
    afStack_13c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xe] =
         afStack_16c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 2];
    fStack_19c = fStack_10c * _DAT_005cd14b;
    fStack_198 = fStack_108 * _DAT_005cd14b;
    fStack_194 = fStack_104 * _DAT_005cd14b;
    fStack_22c = fStack_10c * _DAT_005cd14b;
    afStack_244[(uint)bVar15 * -2 + 7] =
         *(float *)((int)&CStack_1d8 + ((uint)bVar15 * -2 + 0xf) * 4 + 4);
    afStack_244[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 8] =
         *(float *)((int)&CStack_1d8 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10) * 4 + 4);
    core_actor_cpp_FUN_00408b80(param_1[0x32e].vec.x);
    afStack_f4[0] = fStack_190;
    afStack_f4[(uint)bVar15 * -2 + 1] =
         *(float *)((int)&CStack_1d8 + ((uint)bVar15 * -2 + 0x12) * 4 + 4);
    afStack_f4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 2] =
         *(float *)((int)&CStack_1d8 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13) * 4 + 4);
    core_actor_cpp_FUN_00408bf0(param_1);
    afStack_388[0] = fStack_1a8;
    afStack_388[(uint)bVar15 * -2 + 1] =
         *(float *)((int)&CStack_1d8 + ((uint)bVar15 * -2 + 0xc) * 4 + 4);
    afStack_388[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 2] =
         *(float *)((int)&CStack_1d8 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd) * 4 + 4);
    if ((float *)((int)param_1 + 0x20c8c) != afStack_388) {
      *(float *)((int)param_1 + 0x20c8c) = afStack_388[0];
      *(float *)((int)param_1 + 0x20c90) = afStack_388[1];
      param_1[0x2bb7].vec.x = afStack_388[2];
    }
  }
  core_game_cpp_CGame_slamDT_FUN_004bf3a0(g_CGamePtr,param_2);
  core_charactr_cpp_FUN_00433c60(param_1);
  fVar7 = *(float *)((int)param_1 + 0xcdcc) - param_2;
  *(float *)((int)param_1 + 0xcdcc) = fVar7;
  if (fVar7 < 0.0) {
    *(uint *)((int)param_1 + 0xcdcc) = 0;
  }
  *(uint *)((int)param_1 + 0x24a4) = 0;
  *(uint *)((int)param_1 + 0x24a0) = *(uint *)((int)param_1 + 0x24a4);
  param_1[0x30d].vec.x = *(float *)((int)param_1 + 0x24a0);
  core_prye_cpp_FUN_0051c100();
  fStack_268 = afStack_3ac[0];
  afStack_2a0[(uint)bVar15 * -2 + 0xf] = afStack_3ac[(uint)bVar15 * -2 + 1];
  afStack_2a0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] =
       afStack_3ac[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 2];
  core_actor_cpp_FUN_00408b80(param_1);
  uVar16 = CONCAT44(param_2,param_1);
  aCStack_3d0[0].x = fStack_94;
  *(float *)((int)aCStack_3d0 + ((uint)bVar15 * -2 + -1) * 4 + 8) =
       afStack_ac[(uint)bVar15 * -2 + 7];
  *(float *)((int)aCStack_3d0 + ((uint)bVar15 * -2 + (uint)bVar15 * -2) * 4 + 8) =
       afStack_ac[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 8];
  core_prye_cpp_FUN_0051b550(uVar16);
  local_34 = 1;
  fStack_3c = 1.4013e-45;
  fStack_38 = 1.4013e-45;
  iStack_24 = 1;
  iStack_28 = 1;
  if (*(int *)((int)param_1 + 0x26fc) != 0) {
    local_34 = 0;
    fStack_38 = 0.0;
    iStack_24 = 0;
    iStack_28 = 0;
    fStack_3c = 0.0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if (*(int *)((int)param_1 + 0x20b9c) != 0) {
    iStack_24 = 0;
    iStack_28 = 0;
    local_34 = 0;
    fStack_38 = 0.0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if ((param_1[0x2ba3].vec.x != 0.0) || (*(int *)((int)param_1 + 0x20c20) != 0)) {
    fStack_3c = 0.0;
    fStack_38 = 0.0;
    iStack_24 = 0;
    iStack_28 = 0;
    local_34 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"ladder\n");
    }
  }
  if ((param_1[0x2ba2].vec.x != 0.0) || (*(int *)((int)param_1 + 0x20b64) == 4)) {
    iStack_24 = 0;
    iStack_28 = 0;
    local_34 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"pickup\n");
    }
  }
  iVar10 = (int)param_1 + 0x158;
  fVar7 = (float)core_motion_cpp_FUN_004fc350(iVar10);
  if ((((0.0 < fVar7) || (fVar7 = (float)core_motion_cpp_FUN_004fc350(iVar10), 0.0 < fVar7)) ||
      (fVar7 = (float)core_motion_cpp_FUN_004fc350(iVar10), 0.0 < fVar7)) ||
     (param_1[0x31a].vec.x <= 0.0)) {
    fStack_38 = 0.0;
    iStack_24 = 0;
    iStack_28 = 0;
    local_34 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"hurt\n");
    }
  }
  fVar7 = (float)core_motion_cpp_FUN_004fc350((int)param_1 + 0x158);
  if (((0.0 < fVar7) || (*(int *)((int)param_1 + 0x20b64) == 5)) ||
     (*(int *)((int)param_1 + 0x20b94) != 0)) {
    iStack_28 = 0;
    local_34 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"door\n");
    }
  }
  fVar7 = (float)core_motion_cpp_FUN_004fc350((int)param_1 + 0x158);
  if (((0.0 < fVar7) || (*(int *)((int)param_1 + 0x20b64) == 5)) ||
     (*(int *)((int)param_1 + 0x20b94) != 0)) {
    iStack_28 = 0;
    local_34 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"door\n");
    }
  }
  pCVar1 = (CMotionController *)((int)param_1 + 0x158);
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCVar1);
  if ((((((pSVar8->state_index != 0x2a) &&
         (pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCVar1),
         pSVar8->state_index != 0x2b)) &&
        (pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCVar1),
        pSVar8->state_index != 0x28)) &&
       ((pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCVar1),
        pSVar8->state_index != 0x29 &&
        (pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCVar1),
        pSVar8->state_index != 0x27)))) &&
      ((iVar10 = core_motion_cpp_FUN_004fc0c0(), iVar10 != 0x2a &&
       ((iVar10 = core_motion_cpp_FUN_004fc0c0(), iVar10 != 0x2b &&
        (iVar10 = core_motion_cpp_FUN_004fc0c0(), iVar10 != 0x28)))))) &&
     ((iVar10 = core_motion_cpp_FUN_004fc0c0(), iVar10 != 0x29 &&
      (iVar10 = core_motion_cpp_FUN_004fc0c0(), iVar10 != 0x27)))) {
    if (*(int *)((int)param_1 + 0x20b64) == 5) {
      *(uint *)((int)param_1 + 0x20b64) = 0;
    }
    if (*(int *)((int)param_1 + 0x20b94) != 0) {
      *(uint *)((int)param_1 + 0x20b94) = 0;
    }
  }
  pCVar1 = (CMotionController *)((int)param_1 + 0x158);
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCVar1);
  if ((((pSVar8->state_index != 0x20) &&
       (pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCVar1),
       pSVar8->state_index != 0x1e)) &&
      (pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCVar1),
      pSVar8->state_index != 0x22)) &&
     (((pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCVar1),
       pSVar8->state_index != 0x23 && (iVar10 = core_motion_cpp_FUN_004fc0c0(), iVar10 != 0x20)) &&
      ((iVar10 = core_motion_cpp_FUN_004fc0c0(), iVar10 != 0x1e &&
       ((iVar10 = core_motion_cpp_FUN_004fc0c0(), iVar10 != 0x22 &&
        (iVar10 = core_motion_cpp_FUN_004fc0c0(), iVar10 != 0x23)))))))) {
    if (*(int *)((int)param_1 + 0x20b64) == 4) {
      *(uint *)((int)param_1 + 0x20b64) = 0;
    }
    if (param_1[0x2ba2].vec.x != 0.0) {
      param_1[0x2ba2].vec.x = 0.0;
    }
  }
  fVar7 = (float)core_motion_cpp_FUN_004fc350((int)param_1 + 0x158);
  if (0.0 < fVar7) {
    fStack_38 = 0.0;
    iStack_24 = 0;
    fStack_3c = 0.0;
    iStack_28 = 0;
    local_34 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"sitting\n");
    }
  }
  if (*(int *)((int)param_1 + 0x20b64) == 1) {
    iStack_28 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"stashinventory\n");
    }
  }
  if ((*(int *)((int)param_1 + 0x20b64) == 8) || (*(int *)((int)param_1 + 0x20b64) == 9)) {
    iStack_28 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"stashinventory\n");
    }
  }
  if (*(int *)((int)param_1 + 0x20b64) == 2) {
    iStack_28 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"placeobject\n");
    }
  }
  if (*(int *)((int)param_1 + 0x20b64) == 6) {
    iStack_28 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"putdownobject\n");
    }
  }
  if (*(int *)((int)param_1 + 0x20b64) == 3) {
    iStack_28 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"toss\n");
    }
  }
  if (*(int *)((int)param_1 + 0x20b64) == 7) {
    iStack_28 = 0;
    iStack_24 = 0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"attackmelee\n");
    }
  }
  if ((*(int *)((int)param_1 + 0x20ba0) != 0) ||
     (fVar7 = (float)core_motion_cpp_FUN_004fc350((int)param_1 + 0x158), 0.0 < fVar7)) {
    iStack_24 = 0;
    iStack_28 = 0;
    local_34 = 0;
    fStack_38 = 0.0;
    if (iStack_2c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"leverToPull=%s\n");
    }
  }
  if (*(int *)((int)param_1 + 0x26fc) == 0) {
    if (*(int *)((int)param_1 + 0xdc) != 0) {
      fStack_3c = 1.4013e-45;
    }
    if (param_1[3].vec.x != *(float *)((int)param_1 + 0x2504)) {
      fStack_3c = 1.4013e-45;
    }
  }
  *(uint *)((int)param_1 + 0x2524) = *(uint *)((int)param_1 + 0x24a4);
  core_charactr_cpp_FUN_00434850(param_1);
  if (*(int *)((int)param_1 + 0x20ba8) == 0) {
    fVar7 = param_1[0x2baf].vec.x - param_2 * (float)_DAT_005cd14f * (float)_DAT_005cd14f;
    param_1[0x2baf].vec.x = fVar7;
    if (fVar7 < 0.0) {
      param_1[0x2baf].vec.x = 0.0;
    }
  }
  else {
    fVar7 = param_2 * (float)_DAT_005cd14f + param_1[0x2baf].vec.x;
    param_1[0x2baf].vec.x = fVar7;
    if (1.0 < fVar7) {
      param_1[0x2baf].vec.x = 1.0;
    }
  }
  iStack_68 = 1;
  if (param_1[0x2ba3].vec.x == 0.0) {
    if (*(int *)((int)param_1 + 0x20c20) == 0) {
      pCVar9 = *(CDemonActor **)((int)param_1 + 0x20ba8);
      if (pCVar9 == (CDemonActor *)0x0) {
        if (*(int *)((int)param_1 + 0x26fc) == 0) {
          if (*(int *)((int)param_1 + 0x20b9c) == 0) {
            iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                               ((CCharacter *)&param_1->vec,param_2);
            if (iVar10 == 0) {
              if (local_34 != 0) {
                pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                   ((CMotionController *)((int)param_1 + 0x158));
                uVar4 = pSVar8->state_index;
                if ((((((uVar4 < 8) || (uVar4 < 9)) || (uVar4 < 0xd)) ||
                     ((uVar4 < 0xe || (uVar4 < 0xf)))) || (uVar4 < 0x10)) ||
                   ((uVar4 < 0x11 || (uVar4 == 0x7a)))) {
                  if (*(int *)((int)param_1 + 0x2500) != 0) {
                    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                       ((CMotionController *)((int)param_1 + 0x158));
                    iVar10 = pSVar8->state_index;
                    desired_state_index = 0;
                    if (param_1[0x1127].vec.x == 0.0) {
                      if (*(int *)((int)param_1 + 0xcdd8) == 0) {
                        if ((float)_DAT_005cd157 <= *(float *)((int)param_1 + 0xcdfc)) {
                          if (_DAT_005cd15f < (double)*(float *)((int)param_1 + 0xcdfc)) {
                            if (*(int *)((int)param_1 + 0xcddc) == 0) {
                              desired_state_index = 6;
                            }
                            else {
                              desired_state_index = 8;
                            }
                          }
                        }
                        else if (*(int *)((int)param_1 + 0xcddc) == 0) {
                          desired_state_index = 5;
                        }
                        else {
                          desired_state_index = 7;
                        }
                      }
                      else if (*(int *)((int)param_1 + 0xcddc) == 0) {
                        if ((float)_DAT_005cd157 <= *(float *)((int)param_1 + 0xcdfc)) {
                          if ((double)*(float *)((int)param_1 + 0xcdfc) <= _DAT_005cd15f) {
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
                      else if ((float)_DAT_005cd157 <= *(float *)((int)param_1 + 0xcdfc)) {
                        if ((double)*(float *)((int)param_1 + 0xcdfc) <= _DAT_005cd15f) {
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
                    else if (*(int *)((int)param_1 + 0xcddc) == 0) {
                      if ((float)_DAT_005cd157 <= *(float *)((int)param_1 + 0xcdfc)) {
                        if ((double)*(float *)((int)param_1 + 0xcdfc) <= _DAT_005cd15f) {
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
                    else if ((float)_DAT_005cd157 <= *(float *)((int)param_1 + 0xcdfc)) {
                      if ((double)*(float *)((int)param_1 + 0xcdfc) <= _DAT_005cd15f) {
                        desired_state_index = 4;
                      }
                      else {
                        desired_state_index = 10;
                      }
                    }
                    else {
                      desired_state_index = 9;
                    }
                    if ((param_1[0x112a].vec.x != 0.0) && (*(int *)((int)param_1 + 0x2f00) != 0x11))
                    {
                      *(uint *)((int)param_1 + 0x20cfc) = 0;
                      *(uint *)((int)param_1 + 0x20cf8) = 1;
                    }
                    if (*(int *)((int)param_1 + 0x20cf8) == 0) {
                      fVar7 = *(float *)((int)param_1 + 0xce00) * *(float *)((int)param_1 + 0x2528);
                      param_1[0x316].vec.x = fVar7;
                      *(float *)((int)param_1 + 0x20c44) =
                           *(float *)((int)param_1 + 0x20c44) - fVar7;
                    }
                    if (*(int *)((int)param_1 + 0x20b64) == 5) {
                      *(uint *)((int)param_1 + 0x20b64) = 0;
                    }
                    if (*(int *)((int)param_1 + 0x20b94) != 0) {
                      *(uint *)((int)param_1 + 0x20b94) = 0;
                    }
                    if (desired_state_index != iVar10) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                                ((CMotionController *)((int)param_1 + 0x158),desired_state_index,1);
                    }
                    if (*(int *)((int)param_1 + 0xcde8) != 0) {
                      core_hero_cpp_FUN_004d3c90();
                    }
                  }
                  iStack_68 = 0;
                }
              }
            }
            else {
              uVar4 = *(uint *)(param_1 + 0x345);
              if (uVar4 < 2) {
                if (uVar4 == 1) {
                  uVar16 = 0x100000001;
                }
                else {
                  uVar16 = 0x100000000;
                }
LAB_0051ac8d:
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)((int)param_1 + 0x158),(int)uVar16,
                           (int)((ulonglong)uVar16 >> 0x20));
              }
              else {
                if (uVar4 < 3) {
                  uVar16 = 0x100000004;
                  goto LAB_0051ac8d;
                }
                if (uVar4 != 3) {
                  uVar16 = 0x100000000;
                  goto LAB_0051ac8d;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)((int)param_1 + 0x158),0,1);
                engine_console_cpp_CConsole_printf_FUN_00441ff0
                          (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
              }
              *(uint *)((int)param_1 + 0x24a4) = 0;
              *(uint *)((int)param_1 + 0x24a0) = *(uint *)((int)param_1 + 0x24a4);
              param_1[0x30d].vec.x = *(float *)((int)param_1 + 0x24a0);
            }
          }
          else {
            fStack_70 = param_1[0x2ba3].vec.x;
            if (param_1[0x1128].vec.x != 0.0) {
              (*(((*(CDemonActor **)((int)param_1 + 0x20b9c))->vtable)._ub)->getBoundingBox)
                        (*(CDemonActor **)((int)param_1 + 0x20b9c),
                         (CBoundingBox3D *)&in_stack_fffffb18->vec);
              puVar11 = auStack_428;
              puVar14 = auStack_418;
              for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar14 = *puVar11;
                puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
                puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
              }
              fStack_38c = fStack_410 + fStack_404;
              afStack_388[0] = fStack_40c + fStack_400;
              afStack_388[1] = local_408 + fStack_3fc;
              fStack_158 = fStack_410 + fStack_404;
              afStack_150[(uint)bVar15 * -2 + -1] = afStack_388[(uint)bVar15 * -2];
              afStack_150[(uint)bVar15 * -2 + (uint)bVar15 * -2] =
                   afStack_388[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
              afStack_ac[2] = fStack_158 * _DAT_005cd14b;
              afStack_ac[3] = fStack_154 * _DAT_005cd14b;
              fStack_9c = afStack_150[0] * _DAT_005cd14b;
              fStack_80 = fStack_158 * _DAT_005cd14b;
              apCStack_7c[(uint)bVar15 * -2] = (CCharacter *)afStack_ac[(uint)bVar15 * -2 + 3];
              apCStack_7c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                   (CCharacter *)afStack_ac[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
              core_actor_cpp_FUN_00408b80(*(uint *)((int)param_1 + 0x20b9c),afStack_ac + 0xb);
              pfVar12 = afStack_388 + 0xe;
              fStack_350 = (float)uStack_20c;
              afStack_34c[(uint)bVar15 * -2] = afStack_208[(uint)bVar15 * -2];
              afStack_34c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                   afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
              core_actor_cpp_FUN_00408bf0(param_1,pfVar12);
              afStack_244[2] = fStack_b0;
              afStack_244[(uint)bVar15 * -2 + 3] = afStack_ac[(uint)bVar15 * -2];
              afStack_244[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                   afStack_ac[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_244 + 2);
              afStack_34c[2] = (float)uStack_3b0;
              afStack_34c[(uint)bVar15 * -2 + 3] = afStack_3ac[(uint)bVar15 * -2];
              afStack_34c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                   afStack_3ac[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
              in_stack_fffffb18 = (UOrientationVector *)0x51aabb;
              in_stack_fffffb1c = pUStack_340;
              fStack_4a0 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0((float)pUStack_340);
              fStack_320 = fStack_404 - fStack_410;
              afStack_31c[0] = fStack_400 - fStack_40c;
              afStack_31c[1] = fStack_3fc - local_408;
              fStack_170 = fStack_404 - fStack_410;
              afStack_16c[(uint)bVar15 * -2] = afStack_31c[(uint)bVar15 * -2];
              afStack_16c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                   afStack_31c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
              fStack_f8 = fStack_170 * _DAT_005cd14b;
              afStack_f4[0] = afStack_16c[0] * _DAT_005cd14b;
              afStack_f4[1] = afStack_16c[1] * _DAT_005cd14b;
              fStack_1f4 = fStack_170 * _DAT_005cd14b;
              afStack_1ec[(uint)bVar15 * -2 + -1] = afStack_f4[(uint)bVar15 * -2];
              afStack_1ec[(uint)bVar15 * -2 + (uint)bVar15 * -2] =
                   afStack_f4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
              uStack_1f0 = 0;
              if ((((fStack_234 - SQRT(afStack_1ec[0] * afStack_1ec[0] + fStack_1f4 * fStack_1f4) <
                     (float)_DAT_005cd167) && (1.0 < (double)afStack_244[3])) &&
                  ((double)afStack_244[3] < _DAT_005cd16f)) &&
                 (ABS(fStack_4a0) < (float)_DAT_005cd177)) {
                fStack_50 = param_2 * _DAT_005cd17f;
                fStack_64 = -fStack_50;
                if (fStack_4a0 < fStack_64) {
                  fStack_4a0 = fStack_64;
                }
                if (fStack_50 < fStack_4a0) {
                  fStack_4a0 = fStack_50;
                }
                in_stack_fffffb1c = param_1 + 4;
                *(float *)((int)param_1 + 0x34) = *(float *)((int)param_1 + 0x34) + fStack_4a0;
                in_stack_fffffb18 = param_1;
                core_charactr_cpp_FUN_00433220();
                goto LAB_0051976f;
              }
            }
            if (fStack_70 == 0.0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)((int)param_1 + 0x158),0,1);
              core_hero_cpp_CHero_stopPushingBox_FUN_004d3850((CHero *)&param_1->vec);
            }
          }
        }
        else {
          if (param_1[0x340].vec.x == 0.0) {
            core_actor_cpp_FUN_00408bf0(param_1);
            afStack_388[3] = afStack_13c[0];
            afStack_388[(uint)bVar15 * -2 + 4] = afStack_13c[(uint)bVar15 * -2 + 1];
            afStack_388[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 5] =
                 afStack_13c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 2];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
            uStack_364 = uStack_124;
            afStack_388[(uint)bVar15 * -2 + 10] = afStack_13c[(uint)bVar15 * -2 + 7];
            afStack_388[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xb] =
                 afStack_13c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 8];
            fStack_30 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fStack_360);
            if (fStack_30 < _DAT_005cd183) {
              fStack_30 = fStack_30 + _DAT_005cd17f;
            }
            if (_DAT_005cd187 < fStack_30) {
              fStack_30 = fStack_30 + _DAT_005cd18b;
            }
            fStack_54 = param_2 * _DAT_005cd17f;
            fStack_60 = -fStack_54;
            if (fStack_30 < fStack_60) {
              fStack_30 = fStack_60;
            }
            if (fStack_54 < fStack_30) {
              fStack_30 = fStack_54;
            }
            *(float *)((int)param_1 + 0x34) = *(float *)((int)param_1 + 0x34) + fStack_30;
            core_charactr_cpp_FUN_00433220(param_1);
          }
          apCStack_7c[2] = *(CCharacter **)((int)param_1 + 0x26fc);
          pUStack_20 = (UOrientationVector *)(apCStack_7c[2]->base).vtable._uc;
          pCStack_14 = (CDeformableModelInstance *)((int)param_1 + 0x158);
          core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                    (pCStack_14,0,(CVector3f *)(auStack_1dc + 4));
          pCVar17 = &CStack_148;
          CStack_148.x = CStack_1d8.x;
          afStack_13c[(uint)bVar15 * -2 + -2] = *(float *)((int)&CStack_1d8 + (uint)bVar15 * -8 + 4)
          ;
          afStack_13c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + -1] =
               *(float *)((int)&CStack_1d8 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 1) * 4 + 4);
          iVar10 = (**(code **)((int)pUStack_20 + 0x110))
                             (apCStack_7c[2],(CDemonActor *)&param_1->vec,pCVar17);
          if (iVar10 == 0) {
            *(uint *)((int)param_1 + 0x26fc) = 0;
          }
          else if (*(int *)((int)param_1 + 0x26fc) != 0) {
            fVar7 = *(float *)((int)param_1 + 0x20cc8) + param_2;
            *(float *)((int)param_1 + 0x20cc8) = fVar7;
            if ((_DAT_005e3520 <= fVar7) && (param_1[0x340].vec.x != 1.4013e-45)) {
              pCStack_14 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc350(unaff_ESI,0x2f);
              in_stack_fffffb18 = (UOrientationVector *)0x51a2ee;
              fVar7 = (float)core_motion_cpp_FUN_004fc350(unaff_ESI,0x30);
              if (fVar7 + (float)pCStack_14 <= 0.0) {
                in_stack_fffffb1c = (UOrientationVector *)0x51a902;
                (**(code **)(*(int *)((int)param_1 + 0x154) + 0xf0))((CCharacter *)&param_1->vec);
              }
              else if ((param_1[0x1128].vec.x != 0.0) ||
                      (in_stack_fffffb1c = unaff_ESI, _DAT_01c5fae4 != 0)) {
                in_stack_fffffb1c = (UOrientationVector *)0x30;
                in_stack_fffffb18 = (UOrientationVector *)((int)param_1 + 0x158);
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)&in_stack_fffffb18->vec,0x30,1);
                param_1[0x1128].vec.x = 0.0;
              }
            }
            goto LAB_0051976f;
          }
          in_stack_fffffb1c = (UOrientationVector *)0x0;
          in_stack_fffffb18 = (UOrientationVector *)((int)param_1 + 0x158);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&in_stack_fffffb18->vec,0,1);
        }
      }
      else {
        (*((pCVar9->vtable)._ub)->getInteractionInfo)(pCVar9,&SStack_450);
        if ((SStack_450.approach_offset == 0.0) ||
           (param_1 != (UOrientationVector *)SStack_450.distance_max)) {
          in_stack_fffffb18 = (UOrientationVector *)0x51a894;
          in_stack_fffffb1c = param_1;
          core_hero_cpp_CHero_stopNearbyInteraction_FUN_004d3af0((CHero *)&param_1->vec);
        }
        else {
          puVar11 = (uint *)
                    (*(int *)((int)SStack_450.distance_max + 0x20ba8) + 0x34 + (uint)bVar15 * -8);
          UStack_2b4.vec.x = *(float *)(*(int *)((int)SStack_450.distance_max + 0x20ba8) + 0x30);
          *(uint *)((int)&UStack_2b4 + (uint)bVar15 * -8 + 4) = *puVar11;
          *(uint *)((int)&UStack_2b4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
               puVar11[(uint)bVar15 * -2 + 1];
          fStack_3c = *(float *)((int)SStack_450.distance_max + 0xce00) * _DAT_005cd17f *
                      (float)_DAT_005cd18f * param_2;
          if (fStack_3c < SStack_450.pitch_min) {
            fStack_3c = SStack_450.pitch_min;
          }
          if (SStack_450.pitch_max < fStack_3c) {
            fStack_3c = SStack_450.pitch_max;
          }
          UStack_2b4.vec.y =
               core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(UStack_2b4.vec.y + fStack_3c);
          fStack_38 = param_1[0x112b].vec.x * _DAT_005cd17f * (float)_DAT_005cd18f * param_2;
          if (fStack_38 < fStack_42c) {
            fStack_38 = fStack_42c;
          }
          if (fStack_430 < fStack_38) {
            fStack_38 = fStack_430;
          }
          UStack_2b4.vec.x =
               core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(UStack_2b4.vec.x + fStack_38);
          in_stack_fffffb18 = &UStack_2b4;
          iVar10 = (*(((*(CDemonActor **)((int)param_1 + 0x20ba8))->vtable)._ub)->updateInteraction)
                             (*(CDemonActor **)((int)param_1 + 0x20ba8),in_stack_fffffb18,
                              (SPlayerInput *)&param_1[0x1127].vec);
          if (iVar10 == 0) {
            in_stack_fffffb1c = (UOrientationVector *)0x51a8c6;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)((int)param_1 + 0x158),0,1);
            core_hero_cpp_CHero_stopNearbyInteraction_FUN_004d3af0((CHero *)&param_1->vec);
          }
          else {
            SStack_48c.gore_multiplier =
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                           (*(float *)(*(int *)((int)param_1 + 0x20ba8) + 0x34) -
                            *(float *)((int)param_1 + 0x34));
            if ((float)_DAT_005cd157 <= SStack_48c.gore_multiplier) {
              if ((double)SStack_48c.gore_multiplier <= _DAT_005cd15f) {
                iVar10 = 0;
              }
              else {
                iVar10 = 5;
              }
            }
            else {
              iVar10 = 6;
            }
            in_stack_fffffb1c = (UOrientationVector *)0x51a6e7;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)((int)param_1 + 0x158),iVar10,1);
            fVar7 = SStack_48c.gore_multiplier;
            pfVar12 = (float *)((int)param_1 + (uint)bVar15 * -8 + 0x34);
            afStack_244[2] = param_1[4].vec.x;
            afStack_244[(uint)bVar15 * -2 + 3] = *pfVar12;
            afStack_244[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] = pfVar12[(uint)bVar15 * -2 + 1];
            afStack_244[3] = fVar7 * param_1[0x2baf].vec.x + afStack_244[3];
            core_charactr_cpp_FUN_00433220();
            afStack_3ac[1] = SStack_450.pitch_min + (float)_DAT_005cd197;
            uStack_3b0 = 0;
            afStack_3ac[0] = 0.0;
            core_actor_cpp_FUN_00408b80();
            afStack_2e8[1] = fStack_284;
            afStack_2e8[(uint)bVar15 * -2 + 2] = afStack_2a0[(uint)bVar15 * -2 + 8];
            afStack_2e8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 3] =
                 afStack_2a0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 9];
            pUVar2 = param_1 + 0x2baf;
            fStack_248 = afStack_2e8[1] - *(float *)((int)param_1 + 0x20);
            afStack_244[0] = afStack_2e8[2] - param_1[3].vec.x;
            afStack_244[1] = afStack_2e8[3] - *(float *)((int)param_1 + 0x28);
            fStack_1f4 = fStack_248;
            afStack_1ec[(uint)bVar15 * -2 + -1] = afStack_244[(uint)bVar15 * -2];
            afStack_1ec[(uint)bVar15 * -2 + (uint)bVar15 * -2] =
                 afStack_244[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            core_actor_cpp_FUN_00408b40();
            CStack_d0.z = CStack_148.z;
            afStack_c4[(uint)bVar15 * -2] = afStack_13c[(uint)bVar15 * -2];
            afStack_c4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_13c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            afStack_2a0[1] = CStack_d0.z * (pUVar2->vec).x;
            afStack_2a0[2] = afStack_c4[0] * (pUVar2->vec).x;
            afStack_2a0[3] = afStack_c4[1] * (pUVar2->vec).x;
            auStack_1dc = (byte  [4])afStack_2a0[1];
            *(float *)(auStack_1dc + (uint)bVar15 * -8 + 4) = afStack_2a0[(uint)bVar15 * -2 + 2];
            *(float *)((int)&CStack_1d8 + ((uint)bVar15 * -2 + (uint)bVar15 * -2) * 4 + 4) =
                 afStack_2a0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 3];
            if (param_1 + 0x30d != (UOrientationVector *)auStack_1dc) {
              param_1[0x30d].vec.x = (float)auStack_1dc;
              *(float *)((int)param_1 + 0x24a0) = CStack_1d8.x;
              *(float *)((int)param_1 + 0x24a4) = CStack_1d8.y;
            }
            *(uint *)((int)param_1 + 0x24a0) = 0;
          }
        }
      }
    }
    else {
      fVar7 = (float)core_motion_cpp_FUN_004fc350((int)param_1 + 0x158);
      if (0.0 < fVar7) {
        if (param_1[3].vec.x < *(float *)(*(int *)((int)param_1 + 0x20c20) + 0x24) + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)((int)param_1 + 0x158),0,1);
        }
      }
      else {
        *(uint *)((int)param_1 + 0x20c20) = 0;
      }
      if (0.0 < param_1[0x2bbd].vec.x) {
        if (param_1[0x2bbd].vec.x <= param_2) {
          param_1[0x2bbd].vec.x = 0.0;
          fStack_494 = 1.0;
        }
        else {
          fStack_494 = param_2 / param_1[0x2bbd].vec.x;
          param_1[0x2bbd].vec.x = param_1[0x2bbd].vec.x - param_2;
        }
        pfVar12 = (float *)((int)param_1 + 0x20ccc);
        fVar5 = 1.0 - fStack_494;
        afStack_2e8[2] = *pfVar12 * fStack_494;
        afStack_2e8[3] = param_1[0x2bbc].vec.x * fStack_494;
        fStack_2d8 = *(float *)((int)param_1 + 0x20cd4) * fStack_494;
        afStack_31c[3] = *pfVar12 * fStack_494;
        afStack_31c[(uint)bVar15 * -2 + 4] = afStack_2e8[(uint)bVar15 * -2 + 3];
        afStack_31c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 5] =
             afStack_2e8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
        fVar7 = param_1[3].vec.x;
        fVar3 = *(float *)((int)param_1 + 0x28);
        *(float *)((int)param_1 + 0x20) = *(float *)((int)param_1 + 0x20) + afStack_31c[3];
        param_1[3].vec.x = fVar7 + fStack_30c;
        *(float *)((int)param_1 + 0x28) = fVar3 + fStack_308;
        fVar7 = param_1[0x2bbc].vec.x;
        fVar3 = *(float *)((int)param_1 + 0x20cd4);
        *pfVar12 = *pfVar12 * fVar5;
        param_1[0x2bbc].vec.x = fVar7 * fVar5;
        *(float *)((int)param_1 + 0x20cd4) = fVar3 * fVar5;
        fStack_4c = fVar5;
        fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                          (*(float *)((int)param_1 + 0x20cd8) - *(float *)((int)param_1 + 0x34));
        param_1[0x316].vec.x = fVar7 * fStack_494;
      }
      fVar7 = (**(code **)(*(int *)((int)param_1 + 0x154) + 0x40))
                        ((CDemonActor *)&param_1->vec,*(float *)((int)param_1 + 0x326c),
                         (CVector3f *)0x0);
      *(float *)((int)param_1 + 0x2504) = fVar7;
    }
  }
  else {
    fVar7 = (float)core_motion_cpp_FUN_004fc350((int)param_1 + 0x158);
    if (0.0 < fVar7) {
      core_actor_cpp_FUN_00408b80(param_1[0x2ba3].vec.x);
      uStack_118 = uStack_2ec;
      afStack_13c[(uint)bVar15 * -2 + 10] = afStack_2e8[(uint)bVar15 * -2];
      afStack_13c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xb] =
           afStack_2e8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      if (fStack_114 + (float)_DAT_005cd19f < param_1[3].vec.x) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)((int)param_1 + 0x158),0,1);
      }
    }
    else {
      param_1[0x2ba3].vec.x = 0.0;
    }
    if (0.0 < param_1[0x2bbd].vec.x) {
      if (param_1[0x2bbd].vec.x <= param_2) {
        param_1[0x2bbd].vec.x = 0.0;
        fStack_49c = 1.0;
      }
      else {
        fStack_49c = param_2 / param_1[0x2bbd].vec.x;
        param_1[0x2bbd].vec.x = param_1[0x2bbd].vec.x - param_2;
      }
      pfVar12 = (float *)((int)param_1 + 0x20ccc);
      fVar5 = 1.0 - fStack_49c;
      afStack_31c[0] = *pfVar12 * fStack_49c;
      afStack_31c[1] = param_1[0x2bbc].vec.x * fStack_49c;
      afStack_31c[2] = *(float *)((int)param_1 + 0x20cd4) * fStack_49c;
      fStack_1c0 = *pfVar12 * fStack_49c;
      *(float *)((int)&CStack_1d8 + ((uint)bVar15 * -2 + 6) * 4 + 4) =
           afStack_31c[(uint)bVar15 * -2 + 1];
      *(float *)((int)&CStack_1d8 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 7) * 4 + 4) =
           afStack_31c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 2];
      fVar7 = param_1[3].vec.x;
      fVar3 = *(float *)((int)param_1 + 0x28);
      *(float *)((int)param_1 + 0x20) = *(float *)((int)param_1 + 0x20) + fStack_1c0;
      param_1[3].vec.x = fVar7 + fStack_1bc;
      *(float *)((int)param_1 + 0x28) = fVar3 + fStack_1b8;
      fVar7 = param_1[0x2bbc].vec.x;
      fVar3 = *(float *)((int)param_1 + 0x20cd4);
      *pfVar12 = *pfVar12 * fVar5;
      param_1[0x2bbc].vec.x = fVar7 * fVar5;
      *(float *)((int)param_1 + 0x20cd4) = fVar3 * fVar5;
      fStack_5c = fVar5;
      fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                        (*(float *)((int)param_1 + 0x20cd8) - *(float *)((int)param_1 + 0x34));
      param_1[0x316].vec.x = fVar7 * fStack_49c;
    }
  }
LAB_0051976f:
  if (0.0 < *(float *)((int)param_1 + 0x20cf0)) {
    if (*(float *)((int)param_1 + 0x20cf0) <= param_2) {
      *(uint *)((int)param_1 + 0x20cf0) = 0;
      fStack_4a0 = 1.0;
    }
    else {
      fStack_4a0 = param_2 / *(float *)((int)param_1 + 0x20cf0);
      *(float *)((int)param_1 + 0x20cf0) = *(float *)((int)param_1 + 0x20cf0) - param_2;
    }
    pfVar12 = (float *)((int)param_1 + 0x20ce0);
    afStack_3ac[3] = *pfVar12 * fStack_4a0;
    fStack_39c = *(float *)((int)param_1 + 0x20ce4) * fStack_4a0;
    fStack_398 = param_1[0x2bbe].vec.x * fStack_4a0;
    afStack_f4[3] = *pfVar12 * fStack_4a0;
    afStack_f4[(uint)bVar15 * -2 + 4] = afStack_3ac[(uint)bVar15 * -2 + 4];
    afStack_f4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 5] =
         afStack_3ac[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 5];
    core_actor_cpp_FUN_00408b40(param_1);
    afStack_13c[3] = afStack_ac[3];
    afStack_13c[(uint)bVar15 * -2 + 4] = afStack_ac[(uint)bVar15 * -2 + 4];
    afStack_13c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 5] =
         afStack_ac[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 5];
    fVar7 = *(float *)((int)param_1 + 0x24a0);
    fVar3 = *(float *)((int)param_1 + 0x24a4);
    fStack_50 = 1.0 - fStack_4a0;
    param_1[0x30d].vec.x = param_1[0x30d].vec.x + afStack_13c[3];
    *(float *)((int)param_1 + 0x24a0) = fVar7 + fStack_12c;
    *(float *)((int)param_1 + 0x24a4) = fVar3 + fStack_128;
    fVar7 = param_1[0x2bbe].vec.x;
    *pfVar12 = *pfVar12 * fStack_50;
    *(float *)((int)param_1 + 0x20ce4) = *(float *)((int)param_1 + 0x20ce4) * fStack_50;
    param_1[0x2bbe].vec.x = fVar7 * fStack_50;
    fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                      (*(float *)((int)param_1 + 0x20cec) - *(float *)((int)param_1 + 0x34));
    param_1[0x316].vec.x = fVar7 * fStack_4a0;
  }
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)((int)param_1 + 0x158));
  if ((pSVar8->state_index == 0x26) &&
     (this_ptr = (CAmmoBox *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           ((CDemonActor *)param_1[0x2ba2].vec.x,g_CAmmoBoxClassInfo.name_hash),
     this_ptr != (CAmmoBox *)0x0)) {
    fVar7 = core_motion_cpp_FUN_004fc930((CMotionController *)((int)param_1 + 0x158));
    core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e6b0(this_ptr,fVar7);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)&param_1->vec);
  core_prye_cpp_CPrye_updateTurnBlending_FUN_0051e380((CPrye *)&param_1->vec,param_2);
  if (iStack_68 != 0) {
    *(uint *)((int)param_1 + 0x20c74) = 0;
    param_1[0x2bb4].vec.x = *(float *)((int)param_1 + 0x20c74);
    *(float *)((int)param_1 + 0x20c6c) = param_1[0x2bb4].vec.x;
  }
  if ((param_1[0x2ba3].vec.x == 0.0) && (*(int *)((int)param_1 + 0x20c20) == 0)) {
    if (fStack_3c == 0.0) goto LAB_005199e6;
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)((int)param_1 + 0x158));
    iVar10 = pSVar8->state_index;
    fStack_220 = param_1[0x30d].vec.x + *(float *)((int)param_1 + 0x250c);
    fStack_21c = *(float *)((int)param_1 + 0x24a0) + *(float *)((int)param_1 + 0x2510);
    fStack_218 = *(float *)((int)param_1 + 0x24a4) + param_1[0x317].vec.x;
    CStack_d0.x = fStack_220;
    afStack_c4[(uint)bVar15 * -2 + -2] = afStack_244[(uint)bVar15 * -2 + 10];
    afStack_c4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + -1] =
         afStack_244[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xb];
    *(uint *)((int)param_1 + 0x24a4) = 0;
    *(uint *)((int)param_1 + 0x24a0) = *(uint *)((int)param_1 + 0x24a4);
    param_1[0x30d].vec.x = *(float *)((int)param_1 + 0x24a0);
    param_1[0x317].vec.x = 0.0;
    *(float *)((int)param_1 + 0x2510) = param_1[0x317].vec.x;
    *(float *)((int)param_1 + 0x250c) = *(float *)((int)param_1 + 0x2510);
    if (iVar10 == 0x1a) {
      CStack_d0.z = 0.0;
      CStack_d0.y = 0.0;
      CStack_d0.x = 0.0;
      fVar7 = *(float *)((int)param_1 + 0x251c) - param_2 * (float)_DAT_005cd1a7;
      *(uint *)((int)param_1 + 0x20c84) = 0x461c3f9a;
    }
    else {
      if (iVar10 == 0x1b) {
        CStack_d0.z = 0.0;
        CStack_d0.y = 0.0;
        CStack_d0.x = 0.0;
      }
      fVar7 = *(float *)((int)param_1 + 0x251c) - param_2 * (float)_DAT_005cd1a7;
    }
    *(float *)((int)param_1 + 0x251c) = fVar7;
    iStack_48 = iVar10;
    core_actor_cpp_FUN_00408b40(param_1);
    fStack_274 = afStack_244[3];
    afStack_2a0[(uint)bVar15 * -2 + 0xc] = afStack_244[(uint)bVar15 * -2 + 4];
    afStack_2a0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
         afStack_244[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 5];
    fStack_370 = *(float *)((int)param_1 + 0x2518) * param_2;
    pCVar17 = &CStack_d0;
    fStack_36c = *(float *)((int)param_1 + 0x251c) * param_2;
    fStack_368 = param_1[0x318].vec.x * param_2;
    fStack_280 = fStack_370;
    afStack_2a0[(uint)bVar15 * -2 + 9] = afStack_388[(uint)bVar15 * -2 + 7];
    afStack_2a0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
         afStack_388[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 8];
    afStack_c4[0] = fStack_280 + fStack_274;
    afStack_c4[1] = fStack_27c + fStack_270;
    afStack_c4[2] = fStack_278 + fStack_26c;
    fStack_184 = fStack_280 + fStack_274;
    *(float *)((int)&CStack_1d8 + ((uint)bVar15 * -2 + 0x15) * 4 + 4) =
         afStack_c4[(uint)bVar15 * -2 + 1];
    *(float *)((int)&CStack_1d8 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16) * 4 + 4) =
         afStack_c4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 2];
    CStack_d0.x = CStack_d0.x + fStack_184;
    CStack_d0.y = CStack_d0.y + fStack_180;
    CStack_d0.z = CStack_d0.z + fStack_17c;
    param_1[0x2bc0].vec.x = *(float *)((int)param_1 + 0x251c);
    core_charactr_cpp_FUN_0042c230((CCharacter *)&param_1->vec,pCVar17);
    if (param_1[3].vec.x < *(float *)((int)param_1 + 0x2504) + (float)_DAT_005cd1af) {
      *(uint *)((int)param_1 + 0x2500) = 1;
    }
    if ((iStack_48 == 0x1a) && (*(int *)((int)param_1 + 0x2500) != 0)) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"Splat at %3.2f fps\n");
      fVar7 = -param_1[0x2bc0].vec.x;
      if (fVar7 < (float)_DAT_005cd1b7) {
        if (iStack_48 == 0x1a) goto LAB_0051b278;
LAB_0051b287:
        (**(code **)(*(int *)((int)param_1 + 0x154) + 0x24))
                  ((CDemonActor *)&param_1->vec,(CVector3f *)&DAT_02cfd900,
                   fVar7 * _DAT_005cd1d7 + 1.0);
        goto LAB_0051b2ad;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_48c);
      fVar3 = (fVar7 + (float)_DAT_005cd1bf) * (float)_DAT_005cd1c7 * (float)_DAT_005cd1cf;
      SStack_48c.damage_amount = fVar3;
      if (0x42c80000 < (int)fVar3) {
        SStack_48c.damage_amount = 9999.0;
      }
      *(uint *)((int)param_1 + 0xcdcc) = 0;
      (**(code **)(*(int *)((int)param_1 + 0x154) + 0x108))((CCharacter *)&param_1->vec,&SStack_48c)
      ;
      if ((0.0 < param_1[0x31a].vec.x) && ((int)fVar3 < 0x42c80001)) {
        in_stack_fffffb1c = (UOrientationVector *)0x1;
        in_stack_fffffb18 = (UOrientationVector *)0x1c;
LAB_0051b278:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)((int)param_1 + 0x158),(int)in_stack_fffffb18,
                   (int)in_stack_fffffb1c);
        goto LAB_0051b287;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)((int)param_1 + 0x158),0x1d,1);
      (**(code **)(*(int *)((int)param_1 + 0x154) + 0x2c))
                ((CDemonActor *)&param_1->vec,"fall-?.wav");
      iVar10 = *(int *)((int)param_1 + 0x2500);
      fVar7 = 0x3F000000;
    }
    else {
LAB_0051b2ad:
      iVar10 = *(int *)((int)param_1 + 0x2500);
      fVar7 = 0x3F000000;
    }
    0x3F000000 = fVar7;
    if (iVar10 == 0) {
      *(float *)((int)param_1 + 0x20c84) = *(float *)((int)param_1 + 0x20c84) + param_2;
      SStack_48c.impact_point.x = fVar7;
      if (fStack_38 == 5.60519e-45) {
        SStack_48c.impact_point.x = fVar7 * (float)_DAT_005cd14f;
      }
      if ((SStack_48c.impact_point.x < *(float *)((int)param_1 + 0x20c84)) ||
         (param_1[0x2bc0].vec.x < (float)_DAT_005cd1bf)) {
        if (fStack_38 != 3.64338e-44) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)((int)param_1 + 0x158),0x1a,1);
        }
        *(uint *)((int)param_1 + 0x2500) = 0;
      }
      goto LAB_005199e6;
    }
  }
  else {
    pUStack_20 = param_1 + 0x30d;
    core_actor_cpp_FUN_00408b00(param_1);
    fStack_2a4 = fStack_28c;
    afStack_2a0[(uint)bVar15 * -2] = afStack_2a0[(uint)bVar15 * -2 + 6];
    afStack_2a0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_2a0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    fVar7 = param_1[3].vec.x;
    fVar3 = *(float *)((int)param_1 + 0x28);
    *(float *)((int)param_1 + 0x20) = *(float *)((int)param_1 + 0x20) + fStack_2a4;
    param_1[3].vec.x = fVar7 + afStack_2a0[0];
    *(float *)((int)param_1 + 0x28) = fVar3 + afStack_2a0[1];
    (pUStack_20->vec).z = 0.0;
    (pUStack_20->vec).y = (pUStack_20->vec).z;
    (pUStack_20->vec).x = (pUStack_20->vec).y;
  }
  *(uint *)((int)param_1 + 0x20c84) = 0;
LAB_005199e6:
  *(uint *)((int)param_1 + 0x20c74) = 0;
  param_1[0x2bb4].vec.x = *(float *)((int)param_1 + 0x20c74);
  *(float *)((int)param_1 + 0x20c6c) = param_1[0x2bb4].vec.x;
  pCVar6 = g_CGamePtr;
  if (local_34 != 0) {
    if ((*(int *)((int)param_1 + 0xcdf0) != 0) ||
       ((param_1[0x1128].vec.x != 0.0 && (*(int *)((int)param_1 + 0x20bcc) == 0)))) {
      if (*(int *)((int)param_1 + 0x20bcc) == 0) {
        if ((param_1[0x324].vec.x == 0.0) ||
           (*(int *)(*(int *)((int)param_1 + 0x20a20) + 0x578) == 1)) {
          *(uint *)((int)param_1 + 0x20bcc) = 1;
        }
      }
      else {
        *(uint *)((int)param_1 + 0x20bcc) = 0;
        if (pCVar6->flashlight_active != 0) {
          pCVar6->flashlight_active = 0;
          (**(code **)(*(int *)((int)param_1 + 0x154) + 0x2c))
                    ((CDemonActor *)&param_1->vec,"flashlit.wav");
        }
      }
    }
    if (param_1[0x1129].vec.x != 0.0) {
      pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c840
                         ((CDemonActor *)param_1[0x324].vec.x,DAT_007e1a50);
      if (pCVar9 == (CDemonActor *)0x0) {
        if (((*(int *)((int)param_1 + 0x20c24) == 0) ||
            (*(int *)(*(int *)((int)param_1 + 0x20c24) + 0x578) == 1)) &&
           (iVar10 = core_inv_cpp_FUN_004dba80(param_1 + 0x2b3e), iVar10 != 0)) {
          *(uint *)((int)param_1 + 0x20b64) = 8;
        }
      }
      else {
        *(uint *)((int)param_1 + 0x20b64) = 9;
      }
    }
    pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c840
                       ((CDemonActor *)param_1[0x324].vec.x,DAT_007e1a50);
    if ((pCVar9 != (CDemonActor *)0x0) && (*(int *)(pCVar9[0x1a].create_event + 0x38) != 0)) {
      *(float *)((int)param_1 + 0x20bd8) =
           param_1[0x112b].vec.x * _DAT_005cd17f * (float)_DAT_005cd14f * param_2 +
           *(float *)((int)param_1 + 0x20bd8);
      fStack_64 = core_prye_cpp_CPrye_getFlashlightMinAngle_FUN_0051c0a0((CPrye *)&param_1->vec);
      fStack_1c = (float)core_prye_cpp_FUN_0051c0f0();
      if (*(float *)((int)param_1 + 0x20bd8) < fStack_64) {
        *(float *)((int)param_1 + 0x20bd8) = fStack_64;
      }
      if (fStack_1c < *(float *)((int)param_1 + 0x20bd8)) {
        *(float *)((int)param_1 + 0x20bd8) = fStack_1c;
      }
    }
  }
  if (*(int *)((int)param_1 + 0x20a20) == 0) {
    g_CGamePtr->flashlight_active = 0;
  }
  else if (*(int *)(*(int *)((int)param_1 + 0x20a20) + 0x2f0) == 0) {
    g_CGamePtr->flashlight_active = 0;
  }
  if (fStack_38 != 0.0) {
    core_prye_cpp_FUN_00524940(param_1);
  }
  if (*(int *)((int)param_1 + 0x20bcc) == 0) {
    fVar7 = *(float *)((int)param_1 + 0x20bd0) - param_2 / _DAT_005e34f0;
    *(float *)((int)param_1 + 0x20bd0) = fVar7;
    if (fVar7 < 0.0) {
      *(uint *)((int)param_1 + 0x20bd0) = 0;
    }
  }
  else {
    fVar7 = param_2 / _DAT_005e34ec + *(float *)((int)param_1 + 0x20bd0);
    *(float *)((int)param_1 + 0x20bd0) = fVar7;
    if (1.0 < fVar7) {
      *(uint *)((int)param_1 + 0x20bd0) = 0x3f800000;
    }
  }
  fVar7 = *(float *)((int)param_1 + 0x20bf0) - param_2 / _DAT_005e34f4;
  *(float *)((int)param_1 + 0x20bf0) = fVar7;
  if (fVar7 <= 0.0) {
    *(uint *)((int)param_1 + 0x20bf0) = 0;
  }
  fVar7 = param_1[0x2bac].vec.x - param_2 / _DAT_005e34f4;
  param_1[0x2bac].vec.x = fVar7;
  if (fVar7 <= 0.0) {
    param_1[0x2bac].vec.x = 0.0;
  }
  if (iStack_24 != 0) {
    core_prye_cpp_FUN_00525930();
  }
  core_prye_cpp_FUN_0051c1c0();
  pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c840
                     ((CDemonActor *)param_1[0x324].vec.x,DAT_007e1a50);
  if ((pCVar9 != (CDemonActor *)0x0) && (*(int *)((int)param_1 + 0x20c24) != 0)) {
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
              ((CDeformableModelInstance *)((int)param_1 + 0x158));
    core_prye_cpp_CPrye_updateWeaponPosition_FUN_0051f360((CPrye *)&param_1->vec,0);
    core_prye_cpp_CPrye_aimLeftPistol_FUN_00523800((CPrye *)&param_1->vec);
    core_prye_cpp_FUN_0051c1c0();
  }
  core_prye_cpp_CPrye_updateArmRecoilBlend_FUN_00524170((CPrye *)&param_1->vec,param_2,iStack_28);
  core_prye_cpp_FUN_00526cf0();
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)&param_1->vec,param_2);
  fVar7 = (float)core_motion_cpp_FUN_004fc350((CMotionController *)((int)param_1 + 0x158));
  if (fVar7 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004d3850((CHero *)&param_1->vec);
  }
  else {
    fVar7 = core_motion_cpp_FUN_004fc930((CMotionController *)((int)param_1 + 0x158));
    if ((1.0 < fVar7) &&
       (pCStack_18 = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c840
                               (*(CDemonActor **)((int)param_1 + 0x20b9c),
                                g_CBoxActorClassInfo.name_hash), pCStack_18 != (CBoxActor *)0x0)) {
      core_prye_cpp_FUN_0051c100();
      pUStack_340 = pUStack_304;
      afStack_34c[(uint)bVar15 * -2 + 4] = afStack_300[(uint)bVar15 * -2];
      afStack_34c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 5] =
           afStack_300[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      core_actor_cpp_FUN_00408b80(param_1);
      fStack_2c8 = fStack_1cc;
      afStack_2e8[(uint)bVar15 * -2 + 9] =
           *(float *)((int)&CStack_1d8 + ((uint)bVar15 * -2 + 3) * 4 + 4);
      afStack_2e8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
           *(float *)((int)&CStack_1d8 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 4) * 4 + 4);
      fStack_1b4 = fStack_2c8 - aCStack_3d0[0].x;
      fStack_1b0 = fStack_2c4 - aCStack_3d0[0].y;
      fStack_1ac = fStack_2c0 - aCStack_3d0[0].z;
      CStack_334.x = fStack_2c8 - aCStack_3d0[0].x;
      *(uint *)((int)&CStack_334 + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_1d8 + ((uint)bVar15 * -2 + 9) * 4 + 4);
      *(uint *)((int)&CStack_334 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_1d8 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 10) * 4 + 4);
      CStack_334.y = 0.0;
      core_actor_cpp_FUN_00408b40(param_1);
      afStack_1ec[2] = (float)uStack_2d4;
      afStack_1ec[(uint)bVar15 * -2 + 3] = afStack_2e8[(uint)bVar15 * -2 + 6];
      *(float *)(auStack_1dc + ((uint)bVar15 * -2 + (uint)bVar15 * -2) * 4) =
           afStack_2e8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
      if (0.0 < (float)auStack_1dc) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_0041ff20(pCStack_18,aCStack_3d0,&CStack_334);
      }
    }
  }
  core_prye_cpp_CPrye_updateWeaponPosition_FUN_0051f360((CPrye *)&param_1->vec,0);
  core_prye_cpp_FUN_00522b00(param_1,0);
  core_prye_cpp_FUN_00522b00(param_1,1);
  core_prye_cpp_FUN_005263c0(param_1);
  core_inv_cpp_FUN_004dcdb0();
  core_prye_cpp_FUN_00526dc0(param_1);
  pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c840
                     ((CDemonActor *)param_1[0x324].vec.x,DAT_007e1a50);
  if (pCVar9 != (CDemonActor *)0x0) {
    pCVar9[0x1a].create_event[0x38] = '\x01';
    pCVar9[0x1a].create_event[0x39] = '\0';
    pCVar9[0x1a].create_event[0x3a] = '\0';
    pCVar9[0x1a].create_event[0x3b] = '\0';
    (*(((*(CDemonActor **)(param_1 + 0x324))->vtable)._ub)->process)
              (*(CDemonActor **)(param_1 + 0x324),param_2);
  }
  if (iStack_24 == 0) {
    core_hero_cpp_FUN_004d3210();
  }
  else {
    param_2 = *(float *)((int)param_1 + 0x20b7c) + param_2;
    *(float *)((int)param_1 + 0x20b7c) = param_2;
    if ((float)_DAT_005cd1df < param_2) {
      core_hero_cpp_FUN_004d4900(param_1,1);
    }
  }
  if ((*(int *)((int)param_1 + 0x20c24) != 0) &&
     (*(int *)(*(int *)((int)param_1 + 0x20c24) + 0xfc) != 0)) {
    param_1[0x15].vec.x = 1.4013e-45;
    return;
  }
  return;
}
