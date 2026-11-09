// Name: core_prye.cpp_FUN_00518cd0
// Address: 00518cd0
// Address Range: [[00518cd0, 0051b54d]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_00518cd0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_00518cd0(CCharacter *param_1,float param_2)

{
  byte *puVar1;
  uint uVar2;
  CGame *pCVar3;
  SMotion *pSVar4;
  CAmmoBox *this_ptr;
  float fVar5;
  int iVar6;
  int desired_state_index;
  uint *puVar7;
  float *pfVar8;
  uint *puVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_13c0 [944];
  ulonglong uVar12;
  CVector3f *velocity;
  float fStack_4b0;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_49c;
  float fStack_498;
  SDamageInfo aSStack_494 [4];
  float fStack_490;
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
  uint local_408 [6];
  uint local_3f0;
  uint uStack_3ec;
  uint uStack_3e8;
  uint uStack_3e4;
  uint uStack_3e0;
  uint uStack_3dc;
  float fStack_3d8;
  float afStack_3d4 [5];
  uint uStack_3c0;
  float afStack_3bc [5];
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  uint uStack_38c;
  uint uStack_388;
  uint uStack_384;
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
  uint uStack_258;
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
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  float fStack_1e4;
  uint uStack_1e0;
  float fStack_1d4;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  uint uStack_1b0;
  float fStack_1a4;
  float fStack_1a0;
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
  uint uStack_150;
  uint uStack_144;
  float fStack_138;
  float fStack_134;
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
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  uint uStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_9c;
  float fStack_90;
  int iStack_7c;
  int iStack_78;
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
  uint uStack_30;
  int iStack_2c;
  float *pfStack_28;
  float fStack_24;
  CBoxActor *pCStack_20;
  byte *puStack_1c;
  float *pfStack_18;
  
  bVar11 = 0;
  local_34 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                       (0x01C6E360,"?DebugActionPending" + 1);
  if ((*(int *)&param_1->field_0x2628 != 0) && (*(float *)&param_1[2].field_0x710c < _DAT_005cd147))
  {
    (**(code **)(*(int *)(*(int *)&param_1->field_0x2628 + 0x154) + 0x1c))();
    puVar7 = local_408;
    puVar9 = &local_3f0;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    if ((uint *)&param_1[2].field_0x7100 != &local_3f0) {
      *(uint *)&param_1[2].field_0x7100 = local_3f0;
      *(uint *)&param_1[2].field_0x7104 = uStack_3ec;
      *(uint *)&param_1[2].field_0x7108 = uStack_3e8;
    }
    if ((uint *)&param_1[2].field_0x710c != &uStack_3e4) {
      *(uint *)&param_1[2].field_0x710c = uStack_3e4;
      *(uint *)&param_1[2].field_0x7110 = uStack_3e0;
      *(uint *)&param_1[2].field_0x7114 = uStack_3dc;
    }
    fStack_174 = *(float *)&param_1[2].field_0x7100 + *(float *)&param_1[2].field_0x710c;
    fStack_170 = *(float *)&param_1[2].field_0x7104 + *(float *)&param_1[2].field_0x7110;
    fStack_16c = *(float *)&param_1[2].field_0x7108 + *(float *)&param_1[2].field_0x7114;
    fStack_114 = fStack_174;
    afStack_32c[(uint)bVar11 * -2 + 0x87] = afStack_32c[(uint)bVar11 * -2 + 0x6f];
    afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x88] =
         afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x70];
    fStack_1a4 = fStack_114 * _DAT_005cd14b;
    fStack_1a0 = fStack_110 * _DAT_005cd14b;
    fStack_19c = fStack_10c * _DAT_005cd14b;
    fStack_234 = fStack_114 * _DAT_005cd14b;
    afStack_32c[(uint)bVar11 * -2 + 0x3f] = afStack_32c[(uint)bVar11 * -2 + 99];
    afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x40] =
         afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 100];
    core_actor_cpp_FUN_00408b80(*(uint *)&param_1->field_0x2628);
    uStack_fc = uStack_198;
    afStack_32c[(uint)bVar11 * -2 + 0x8d] = afStack_32c[(uint)bVar11 * -2 + 0x66];
    afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x8e] =
         afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x67];
    core_actor_cpp_FUN_00408bf0(param_1);
    fStack_390 = (float)uStack_1b0;
    afStack_3bc[(uint)bVar11 * -2 + 0xc] = afStack_32c[(uint)bVar11 * -2 + 0x60];
    afStack_3bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
         afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x61];
    if ((float *)&param_1[2].field_0x70f4 != afStack_3bc + 0xb) {
      *(float *)&param_1[2].field_0x70f4 = fStack_390;
      *(uint *)&param_1[2].field_0x70f8 = uStack_38c;
      *(uint *)&param_1[2].field_0x70fc = uStack_388;
    }
  }
  core_game_cpp_CGame_slamDT_FUN_004bf3a0(g_CGamePtr,param_2);
  core_charactr_cpp_FUN_00433c60(param_1);
  fVar5 = *(float *)(param_1 + 1);
  *(float *)(param_1 + 1) = fVar5 - param_2;
  if (fVar5 - param_2 < 0.0) {
    *(uint *)(param_1 + 1) = 0;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  core_prye_cpp_FUN_0051c100();
  uStack_270 = afStack_3bc[2];
  afStack_32c[(uint)bVar11 * -2 + 0x30] = afStack_3bc[(uint)bVar11 * -2 + 3];
  afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x31] =
       afStack_3bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  core_actor_cpp_FUN_00408b80(param_1);
  uVar12 = CONCAT44(param_2,param_1);
  fStack_3d8 = fStack_9c;
  afStack_3d4[(uint)bVar11 * -2] = afStack_d4[(uint)bVar11 * -2 + 0xf];
  afStack_3d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
  core_prye_cpp_FUN_0051b550(uVar12);
  iStack_3c = 1;
  iStack_44 = 1;
  iStack_40 = 1;
  iStack_2c = 1;
  uStack_30 = 1;
  if (*(int *)&param_1->field_0x26fc != 0) {
    iStack_3c = 0;
    iStack_40 = 0;
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_44 = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if (*(int *)&param_1[2].field_0x7004 != 0) {
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_3c = 0;
    iStack_40 = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if ((*(int *)&param_1[2].field_0x700c != 0) || (*(int *)&param_1[2].field_0x7088 != 0)) {
    iStack_44 = 0;
    iStack_40 = 0;
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  if ((*(int *)&param_1[2].field_0x7000 != 0) || (*(int *)&param_1[2].field_0x6fcc == 4)) {
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  puVar1 = &param_1->field_0x158;
  pfStack_18 = (float *)core_motion_cpp_FUN_004fc350(puVar1);
  if ((((0.0 < (float)pfStack_18) ||
       (pfStack_18 = (float *)core_motion_cpp_FUN_004fc350(puVar1), 0.0 < (float)pfStack_18)) ||
      (pfStack_18 = (float *)core_motion_cpp_FUN_004fc350(puVar1), 0.0 < (float)pfStack_18)) ||
     (*(float *)&param_1->field_0x2538 <= 0.0)) {
    iStack_40 = 0;
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  pfStack_18 = (float *)core_motion_cpp_FUN_004fc350(&param_1->field_0x158);
  if (((0.0 < (float)pfStack_18) || (*(int *)&param_1[2].field_0x6fcc == 5)) ||
     (*(int *)&param_1[2].field_0x6ffc != 0)) {
    uStack_30 = 0;
    iStack_3c = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  pfStack_18 = (float *)core_motion_cpp_FUN_004fc350(&param_1->field_0x158);
  if (((0.0 < (float)pfStack_18) || (*(int *)&param_1[2].field_0x6fcc == 5)) ||
     (*(int *)&param_1[2].field_0x6ffc != 0)) {
    uStack_30 = 0;
    iStack_3c = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  puVar1 = &param_1->field_0x158;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)puVar1);
  if ((((((*(int *)(pSVar4 + 0x24) != 0x2a) &&
         (pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                             ((CMotionController *)puVar1), *(int *)(pSVar4 + 0x24) != 0x2b)) &&
        (pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                            ((CMotionController *)puVar1), *(int *)(pSVar4 + 0x24) != 0x28)) &&
       ((pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                            ((CMotionController *)puVar1), *(int *)(pSVar4 + 0x24) != 0x29 &&
        (pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                            ((CMotionController *)puVar1), *(int *)(pSVar4 + 0x24) != 0x27)))) &&
      ((iVar6 = core_motion_cpp_FUN_004fc0c0(), iVar6 != 0x2a &&
       ((iVar6 = core_motion_cpp_FUN_004fc0c0(), iVar6 != 0x2b &&
        (iVar6 = core_motion_cpp_FUN_004fc0c0(), iVar6 != 0x28)))))) &&
     ((iVar6 = core_motion_cpp_FUN_004fc0c0(), iVar6 != 0x29 &&
      (iVar6 = core_motion_cpp_FUN_004fc0c0(), iVar6 != 0x27)))) {
    if (*(int *)&param_1[2].field_0x6fcc == 5) {
      *(uint *)&param_1[2].field_0x6fcc = 0;
    }
    if (*(int *)&param_1[2].field_0x6ffc != 0) {
      *(uint *)&param_1[2].field_0x6ffc = 0;
    }
  }
  puVar1 = &param_1->field_0x158;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)puVar1);
  if ((((*(int *)(pSVar4 + 0x24) != 0x20) &&
       (pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                           ((CMotionController *)puVar1), *(int *)(pSVar4 + 0x24) != 0x1e)) &&
      (pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                          ((CMotionController *)puVar1), *(int *)(pSVar4 + 0x24) != 0x22)) &&
     (((pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                           ((CMotionController *)puVar1), *(int *)(pSVar4 + 0x24) != 0x23 &&
       (iVar6 = core_motion_cpp_FUN_004fc0c0(), iVar6 != 0x20)) &&
      ((iVar6 = core_motion_cpp_FUN_004fc0c0(), iVar6 != 0x1e &&
       ((iVar6 = core_motion_cpp_FUN_004fc0c0(), iVar6 != 0x22 &&
        (iVar6 = core_motion_cpp_FUN_004fc0c0(), iVar6 != 0x23)))))))) {
    if (*(int *)&param_1[2].field_0x6fcc == 4) {
      *(uint *)&param_1[2].field_0x6fcc = 0;
    }
    if (*(int *)&param_1[2].field_0x7000 != 0) {
      *(uint *)&param_1[2].field_0x7000 = 0;
    }
  }
  pfStack_18 = (float *)core_motion_cpp_FUN_004fc350(&param_1->field_0x158);
  if (0.0 < (float)pfStack_18) {
    iStack_40 = 0;
    iStack_2c = 0;
    iStack_44 = 0;
    uStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x6fcc == 1) {
    uStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  if ((*(int *)&param_1[2].field_0x6fcc == 8) || (*(int *)&param_1[2].field_0x6fcc == 9)) {
    uStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x6fcc == 2) {
    uStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x6fcc == 6) {
    uStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x6fcc == 3) {
    uStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x6fcc == 7) {
    uStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
  }
  if ((*(int *)&param_1[2].field_0x7008 != 0) ||
     (pfStack_18 = (float *)core_motion_cpp_FUN_004fc350(&param_1->field_0x158),
     0.0 < (float)pfStack_18)) {
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_3c = 0;
    iStack_40 = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"leverToPull=%s\n");
    }
  }
  if (*(int *)&param_1->field_0x26fc == 0) {
    if (*(int *)&param_1->field_0xdc != 0) {
      iStack_44 = 1;
    }
    if (*(float *)&param_1->field_0x24 != *(float *)&param_1->field_0x2504) {
      iStack_44 = 1;
    }
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1);
  if (*(int *)&param_1[2].field_0x7010 == 0) {
    fVar5 = *(float *)&param_1[2].field_0x709c -
            param_2 * (float)_DAT_005cd14f * (float)_DAT_005cd14f;
    *(float *)&param_1[2].field_0x709c = fVar5;
    if (fVar5 < 0.0) {
      *(uint *)&param_1[2].field_0x709c = 0;
    }
  }
  else {
    fVar5 = param_2 * (float)_DAT_005cd14f + *(float *)&param_1[2].field_0x709c;
    *(float *)&param_1[2].field_0x709c = fVar5;
    if (1.0 < fVar5) {
      *(uint *)&param_1[2].field_0x709c = 0x3f800000;
    }
  }
  iStack_70 = 1;
  if (*(int *)&param_1[2].field_0x700c == 0) {
    if (*(int *)&param_1[2].field_0x7088 == 0) {
      iVar6 = *(int *)&param_1[2].field_0x7010;
      if (iVar6 == 0) {
        if (*(int *)&param_1->field_0x26fc == 0) {
          if (*(int *)&param_1[2].field_0x7004 == 0) {
            iVar6 = core_charactr_cpp_FUN_00431660(param_1,param_2);
            if (iVar6 == 0) {
              if (iStack_3c != 0) {
                pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                   ((CMotionController *)&param_1->field_0x158);
                uVar2 = *(uint *)(pSVar4 + 0x24);
                if ((((((uVar2 < 8) || (uVar2 < 9)) || (uVar2 < 0xd)) ||
                     ((uVar2 < 0xe || (uVar2 < 0xf)))) || (uVar2 < 0x10)) ||
                   ((uVar2 < 0x11 || (uVar2 == 0x7a)))) {
                  if (*(int *)&param_1->field_0x2500 != 0) {
                    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                       ((CMotionController *)&param_1->field_0x158);
                    iVar6 = *(int *)(pSVar4 + 0x24);
                    desired_state_index = 0;
                    if (*(int *)&param_1[1].field_0x8 == 0) {
                      if (*(int *)&param_1[1].field_0xc == 0) {
                        if ((float)_DAT_005cd157 <= *(float *)&param_1[1].field_0x30) {
                          if (_DAT_005cd15f < (double)*(float *)&param_1[1].field_0x30) {
                            if (*(int *)&param_1[1].field_0x10 == 0) {
                              desired_state_index = 6;
                            }
                            else {
                              desired_state_index = 8;
                            }
                          }
                        }
                        else if (*(int *)&param_1[1].field_0x10 == 0) {
                          desired_state_index = 5;
                        }
                        else {
                          desired_state_index = 7;
                        }
                      }
                      else if (*(int *)&param_1[1].field_0x10 == 0) {
                        if ((float)_DAT_005cd157 <= *(float *)&param_1[1].field_0x30) {
                          if ((double)*(float *)&param_1[1].field_0x30 <= _DAT_005cd15f) {
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
                      else if ((float)_DAT_005cd157 <= *(float *)&param_1[1].field_0x30) {
                        if ((double)*(float *)&param_1[1].field_0x30 <= _DAT_005cd15f) {
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
                    else if (*(int *)&param_1[1].field_0x10 == 0) {
                      if ((float)_DAT_005cd157 <= *(float *)&param_1[1].field_0x30) {
                        if ((double)*(float *)&param_1[1].field_0x30 <= _DAT_005cd15f) {
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
                    else if ((float)_DAT_005cd157 <= *(float *)&param_1[1].field_0x30) {
                      if ((double)*(float *)&param_1[1].field_0x30 <= _DAT_005cd15f) {
                        desired_state_index = 4;
                      }
                      else {
                        desired_state_index = 10;
                      }
                    }
                    else {
                      desired_state_index = 9;
                    }
                    if ((*(int *)&param_1[1].field_0x2c != 0) &&
                       (*(int *)&param_1->field_0x2f00 != 0x11)) {
                      *(uint *)&param_1[2].field_0x7164 = 0;
                      *(uint *)&param_1[2].field_0x7160 = 1;
                    }
                    if (*(int *)&param_1[2].field_0x7160 == 0) {
                      fVar5 = *(float *)&param_1[1].field_0x34 * *(float *)&param_1->field_0x2528;
                      *(float *)&param_1->field_0x2508 = fVar5;
                      *(float *)&param_1[2].field_0x70ac =
                           *(float *)&param_1[2].field_0x70ac - fVar5;
                    }
                    if (*(int *)&param_1[2].field_0x6fcc == 5) {
                      *(uint *)&param_1[2].field_0x6fcc = 0;
                    }
                    if (*(int *)&param_1[2].field_0x6ffc != 0) {
                      *(uint *)&param_1[2].field_0x6ffc = 0;
                    }
                    if (desired_state_index != iVar6) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                                ((CMotionController *)&param_1->field_0x158,desired_state_index,1);
                    }
                    if (*(int *)&param_1[1].field_0x1c != 0) {
                      core_hero_cpp_FUN_004d3c90();
                    }
                  }
                  iStack_70 = 0;
                }
              }
            }
            else {
              uVar2 = *(uint *)&param_1->field_0x273c;
              if (uVar2 < 2) {
                if (uVar2 == 1) {
                  uVar12 = 0x100000001;
                }
                else {
                  uVar12 = 0x100000000;
                }
LAB_0051ac8d:
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)&param_1->field_0x158,(int)uVar12,
                           (int)((ulonglong)uVar12 >> 0x20));
              }
              else {
                if (uVar2 < 3) {
                  uVar12 = 0x100000004;
                  goto LAB_0051ac8d;
                }
                if (uVar2 != 3) {
                  uVar12 = 0x100000000;
                  goto LAB_0051ac8d;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)&param_1->field_0x158,0,1);
                engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
              }
              *(uint *)&param_1->field_0x24a4 = 0;
              *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
              *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
            }
          }
          else {
            iStack_78 = *(int *)&param_1[2].field_0x700c;
            if (*(int *)&param_1[1].field_0x14 != 0) {
              (**(code **)(*(int *)(*(int *)&param_1[2].field_0x7004 + 0x154) + 0x1c))();
              pfVar8 = afStack_438;
              pfVar10 = &fStack_420;
              for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                *pfVar10 = *pfVar8;
                pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
                pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
              }
              fStack_39c = fStack_420 + fStack_414;
              fStack_398 = fStack_41c + fStack_410;
              fStack_394 = fStack_418 + fStack_40c;
              fStack_168 = fStack_420 + fStack_414;
              afStack_32c[(uint)bVar11 * -2 + 0x72] = afStack_3bc[(uint)bVar11 * -2 + 9];
              afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x73] =
                   afStack_3bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
              fStack_b4 = fStack_168 * _DAT_005cd14b;
              fStack_b0 = fStack_164 * _DAT_005cd14b;
              fStack_ac = fStack_160 * _DAT_005cd14b;
              fStack_90 = fStack_168 * _DAT_005cd14b;
              afStack_d4[(uint)bVar11 * -2 + 0x12] = afStack_d4[(uint)bVar11 * -2 + 9];
              afStack_d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
                   afStack_d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
              core_actor_cpp_FUN_00408b80(*(uint *)&param_1[2].field_0x7004);
              uStack_360 = uStack_21c;
              afStack_3bc[(uint)bVar11 * -2 + 0x18] = afStack_32c[(uint)bVar11 * -2 + 0x45];
              afStack_3bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
                   afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x46];
              core_actor_cpp_FUN_00408bf0(param_1);
              uStack_24c = uStack_c0;
              afStack_32c[(uint)bVar11 * -2 + 0x39] = afStack_d4[(uint)bVar11 * -2 + 6];
              afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3a] =
                   afStack_d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
              core_vecdir_cpp_FUN_00576250();
              uStack_354 = uStack_3c0;
              afStack_3bc[(uint)bVar11 * -2 + 0x1b] = afStack_3bc[(uint)bVar11 * -2];
              afStack_3bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c] =
                   afStack_3bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
              fStack_4b0 = (float)core_actor_cpp_FUN_0040cfa0();
              pfStack_18 = (float *)fStack_4b0;
              fStack_330 = fStack_414 - fStack_420;
              afStack_32c[0] = fStack_410 - fStack_41c;
              afStack_32c[1] = fStack_40c - fStack_418;
              fStack_180 = fStack_414 - fStack_420;
              afStack_32c[(uint)bVar11 * -2 + 0x6c] = afStack_32c[(uint)bVar11 * -2];
              afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x6d] =
                   afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
              fStack_108 = fStack_180 * _DAT_005cd14b;
              fStack_104 = fStack_17c * _DAT_005cd14b;
              fStack_100 = fStack_178 * _DAT_005cd14b;
              fStack_204 = fStack_180 * _DAT_005cd14b;
              afStack_32c[(uint)bVar11 * -2 + 0x4b] = afStack_32c[(uint)bVar11 * -2 + 0x8a];
              afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x4c] =
                   afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x8b];
              uStack_200 = 0;
              if ((((fStack_244 - SQRT(fStack_1fc * fStack_1fc + fStack_204 * fStack_204) <
                     (float)_DAT_005cd167) && (1.0 < (double)fStack_248)) &&
                  ((double)fStack_248 < _DAT_005cd16f)) && (ABS(fStack_4b0) < (float)_DAT_005cd177))
              {
                fStack_60 = param_2 * _DAT_005cd17f;
                fStack_74 = -fStack_60;
                if (fStack_4b0 < fStack_74) {
                  fStack_4b0 = fStack_74;
                }
                if (fStack_60 < fStack_4b0) {
                  fStack_4b0 = fStack_60;
                }
                *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_4b0;
                core_charactr_cpp_FUN_00433220(param_1);
                goto LAB_0051976f;
              }
            }
            if (iStack_78 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,0,1);
              core_hero_cpp_FUN_004d3850((CHero *)param_1);
            }
          }
        }
        else {
          if (*(int *)&param_1->field_0x2700 == 0) {
            core_actor_cpp_FUN_00408bf0(param_1);
            uStack_384 = uStack_144;
            afStack_3bc[(uint)bVar11 * -2 + 0xf] = afStack_32c[(uint)bVar11 * -2 + 0x7b];
            afStack_3bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
                 afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x7c];
            core_vecdir_cpp_FUN_00576250();
            uStack_36c = uStack_12c;
            afStack_3bc[(uint)bVar11 * -2 + 0x15] = afStack_32c[(uint)bVar11 * -2 + 0x81];
            afStack_3bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
                 afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x82];
            pfStack_18 = (float *)core_actor_cpp_FUN_0040cfa0();
            fStack_38 = (float)pfStack_18;
            if ((float)pfStack_18 < _DAT_005cd183) {
              fStack_38 = (float)pfStack_18 + _DAT_005cd17f;
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
            *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_38;
            core_charactr_cpp_FUN_00433220(param_1);
          }
          iStack_7c = *(int *)&param_1->field_0x26fc;
          pfStack_28 = *(float **)(iStack_7c + 0x154);
          puStack_1c = &param_1->field_0x158;
          core_skeleton_cpp_FUN_0054dcc0(puStack_1c);
          uStack_150 = uStack_1e0;
          afStack_32c[(uint)bVar11 * -2 + 0x78] = afStack_32c[(uint)bVar11 * -2 + 0x54];
          afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x79] =
               afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x55];
          iVar6 = (*(code *)pfStack_28[0x44])(iStack_7c,param_1);
          if (iVar6 == 0) {
            *(uint *)&param_1->field_0x26fc = 0;
          }
          else if (*(int *)&param_1->field_0x26fc != 0) {
            fVar5 = *(float *)&param_1[2].field_0x7130 + param_2;
            *(float *)&param_1[2].field_0x7130 = fVar5;
            if ((_DAT_005e3520 <= fVar5) && (*(int *)&param_1->field_0x2700 != 1)) {
              pfStack_28 = (float *)core_motion_cpp_FUN_004fc350(puStack_1c);
              pfStack_18 = (float *)core_motion_cpp_FUN_004fc350(puStack_1c);
              if ((float)pfStack_18 + (float)pfStack_28 <= 0.0) {
                (**(code **)(*(int *)&param_1->field_0x154 + 0xf0))();
              }
              else if ((*(int *)&param_1[1].field_0x14 != 0) || (_DAT_01c5fae4 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)&param_1->field_0x158,0x30,1);
                *(uint *)&param_1[1].field_0x14 = 0;
              }
            }
            goto LAB_0051976f;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,0,1);
        }
      }
      else {
        (**(code **)(*(int *)(iVar6 + 0x154) + 0x98))(iVar6);
        if ((iStack_458 == 0) || (param_1 != pCStack_454)) {
          core_hero_cpp_FUN_004d3af0((CHero *)param_1);
        }
        else {
          pfVar8 = (float *)(*(int *)&pCStack_454[2].field_0x7010 + 0x34 + (uint)bVar11 * -8);
          fStack_2c4 = *(float *)(*(int *)&pCStack_454[2].field_0x7010 + 0x30);
          afStack_32c[(uint)bVar11 * -2 + 0x1b] = *pfVar8;
          afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c] = pfVar8[(uint)bVar11 * -2 + 1];
          fStack_4c = *(float *)&pCStack_454[1].field_0x34 * _DAT_005cd17f * (float)_DAT_005cd18f *
                      param_2;
          if (fStack_4c < fStack_444) {
            fStack_4c = fStack_444;
          }
          if (fStack_448 < fStack_4c) {
            fStack_4c = fStack_448;
          }
          uStack_2c0 = core_actor_cpp_FUN_0040cfa0();
          fStack_48 = *(float *)&param_1[1].field_0x38 * _DAT_005cd17f * (float)_DAT_005cd18f *
                      param_2;
          if (fStack_48 < fStack_43c) {
            fStack_48 = fStack_43c;
          }
          if (fStack_440 < fStack_48) {
            fStack_48 = fStack_440;
          }
          pfStack_18 = (float *)uStack_2c0;
          fStack_2c4 = (float)core_actor_cpp_FUN_0040cfa0();
          pfStack_18 = (float *)fStack_2c4;
          iVar6 = (**(code **)(*(int *)(*(int *)&param_1[2].field_0x7010 + 0x154) + 0xa0))
                            (*(int *)&param_1[2].field_0x7010,&fStack_2c4);
          if (iVar6 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,0,1);
            core_hero_cpp_FUN_004d3af0((CHero *)param_1);
          }
          else {
            fVar5 = (float)core_actor_cpp_FUN_0040cfa0();
            if ((float)_DAT_005cd157 <= fVar5) {
              if ((double)fVar5 <= _DAT_005cd15f) {
                iVar6 = 0;
              }
              else {
                iVar6 = 5;
              }
            }
            else {
              iVar6 = 6;
            }
            pfStack_18 = (float *)fVar5;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,iVar6,1);
            pfVar8 = (float *)((int)param_1 + (uint)bVar11 * -8 + 0x34);
            uStack_258 = *(uint *)&param_1->field_0x30;
            afStack_32c[(uint)bVar11 * -2 + 0x36] = *pfVar8;
            afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x37] =
                 pfVar8[(uint)bVar11 * -2 + 1];
            fStack_254 = fVar5 * *(float *)&param_1[2].field_0x709c + fStack_254;
            core_charactr_cpp_FUN_00433220(param_1);
            afStack_3d4[4] = fStack_450 + (float)_DAT_005cd197;
            afStack_3d4[2] = 0.0;
            afStack_3d4[3] = 0.0;
            pfStack_28 = (float *)afStack_3d4[4];
            core_actor_cpp_FUN_00408b80(*(uint *)&param_1[2].field_0x7010);
            fStack_300 = fStack_2a0;
            afStack_32c[(uint)bVar11 * -2 + 0xc] = afStack_32c[(uint)bVar11 * -2 + 0x24];
            afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
                 afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25];
            pfStack_28 = (float *)&param_1[2].field_0x709c;
            fStack_264 = fStack_300 - *(float *)&param_1->field_0x20;
            fStack_260 = fStack_2fc - *(float *)&param_1->field_0x24;
            fStack_25c = fStack_2f8 - *(float *)&param_1->field_0x28;
            fStack_210 = fStack_264;
            afStack_32c[(uint)bVar11 * -2 + 0x48] = afStack_32c[(uint)bVar11 * -2 + 0x33];
            afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x49] =
                 afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x34];
            core_actor_cpp_FUN_00408b40(param_1);
            fStack_e4 = fStack_15c;
            afStack_32c[(uint)bVar11 * -2 + 0x93] = afStack_32c[(uint)bVar11 * -2 + 0x75];
            afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x94] =
                 afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x76];
            fStack_2b8 = fStack_e4 * *pfStack_28;
            fStack_2b4 = fStack_e0 * *pfStack_28;
            fStack_2b0 = fStack_dc * *pfStack_28;
            fStack_1f8 = fStack_e4 * *pfStack_28;
            afStack_32c[(uint)bVar11 * -2 + 0x4e] = afStack_32c[(uint)bVar11 * -2 + 0x1e];
            afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x4f] =
                 afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f];
            if ((float *)&param_1->field_0x249c != &fStack_1f8) {
              *(float *)&param_1->field_0x249c = fStack_1f8;
              *(uint *)&param_1->field_0x24a0 = uStack_1f4;
              *(uint *)&param_1->field_0x24a4 = uStack_1f0;
            }
            *(uint *)&param_1->field_0x24a0 = 0;
          }
        }
      }
    }
    else {
      pfStack_18 = (float *)core_motion_cpp_FUN_004fc350(&param_1->field_0x158);
      if (0.0 < (float)pfStack_18) {
        if (*(float *)&param_1->field_0x24 <
            *(float *)(*(int *)&param_1[2].field_0x7088 + 0x24) + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,0,1);
        }
      }
      else {
        *(uint *)&param_1[2].field_0x7088 = 0;
      }
      if (0.0 < *(float *)&param_1[2].field_0x7144) {
        if (*(float *)&param_1[2].field_0x7144 <= param_2) {
          *(uint *)&param_1[2].field_0x7144 = 0;
          fStack_49c = 1.0;
        }
        else {
          fStack_49c = param_2 / *(float *)&param_1[2].field_0x7144;
          *(float *)&param_1[2].field_0x7144 = *(float *)&param_1[2].field_0x7144 - param_2;
        }
        puVar1 = &param_1[2].field_0x7134;
        fVar5 = 1.0 - fStack_49c;
        fStack_2e8 = *(float *)puVar1 * fStack_49c;
        fStack_2e4 = *(float *)&param_1[2].field_0x7138 * fStack_49c;
        fStack_2e0 = *(float *)&param_1[2].field_0x713c * fStack_49c;
        fStack_318 = *(float *)puVar1 * fStack_49c;
        afStack_32c[(uint)bVar11 * -2 + 6] = afStack_32c[(uint)bVar11 * -2 + 0x12];
        afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
             afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
        *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + fStack_318;
        *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + fStack_314;
        *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_310;
        *(float *)puVar1 = *(float *)puVar1 * fVar5;
        *(float *)&param_1[2].field_0x7138 = *(float *)&param_1[2].field_0x7138 * fVar5;
        *(float *)&param_1[2].field_0x713c = *(float *)&param_1[2].field_0x713c * fVar5;
        fStack_54 = fVar5;
        pfStack_18 = (float *)core_actor_cpp_FUN_0040cfa0();
        *(float *)&param_1->field_0x2508 = (float)pfStack_18 * fStack_49c;
      }
      pfStack_18 = (float *)(**(code **)(*(int *)&param_1->field_0x154 + 0x40))
                                      (param_1,*(uint *)&param_1->field_0x326c);
      *(float **)&param_1->field_0x2504 = pfStack_18;
    }
  }
  else {
    pfStack_18 = (float *)core_motion_cpp_FUN_004fc350(&param_1->field_0x158);
    if (0.0 < (float)pfStack_18) {
      core_actor_cpp_FUN_00408b80(*(uint *)&param_1[2].field_0x700c);
      uStack_120 = uStack_2f4;
      afStack_32c[(uint)bVar11 * -2 + 0x84] = afStack_32c[(uint)bVar11 * -2 + 0xf];
      afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x85] =
           afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
      if (fStack_11c + (float)_DAT_005cd19f < *(float *)&param_1->field_0x24) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,0,1);
      }
    }
    else {
      *(uint *)&param_1[2].field_0x700c = 0;
    }
    if (0.0 < *(float *)&param_1[2].field_0x7144) {
      if (*(float *)&param_1[2].field_0x7144 <= param_2) {
        *(uint *)&param_1[2].field_0x7144 = 0;
        fStack_4a4 = 1.0;
      }
      else {
        fStack_4a4 = param_2 / *(float *)&param_1[2].field_0x7144;
        *(float *)&param_1[2].field_0x7144 = *(float *)&param_1[2].field_0x7144 - param_2;
      }
      puVar1 = &param_1[2].field_0x7134;
      fVar5 = 1.0 - fStack_4a4;
      afStack_32c[2] = *(float *)puVar1 * fStack_4a4;
      afStack_32c[3] = *(float *)&param_1[2].field_0x7138 * fStack_4a4;
      fStack_31c = *(float *)&param_1[2].field_0x713c * fStack_4a4;
      fStack_1c8 = *(float *)puVar1 * fStack_4a4;
      afStack_32c[(uint)bVar11 * -2 + 0x5a] = afStack_32c[(uint)bVar11 * -2 + 3];
      afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x5b] =
           afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + fStack_1c8;
      *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + fStack_1c4;
      *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_1c0;
      *(float *)puVar1 = *(float *)puVar1 * fVar5;
      *(float *)&param_1[2].field_0x7138 = *(float *)&param_1[2].field_0x7138 * fVar5;
      *(float *)&param_1[2].field_0x713c = *(float *)&param_1[2].field_0x713c * fVar5;
      fStack_64 = fVar5;
      pfStack_18 = (float *)core_actor_cpp_FUN_0040cfa0();
      *(float *)&param_1->field_0x2508 = (float)pfStack_18 * fStack_4a4;
    }
  }
LAB_0051976f:
  if (0.0 < *(float *)&param_1[2].field_0x7158) {
    if (*(float *)&param_1[2].field_0x7158 <= param_2) {
      *(uint *)&param_1[2].field_0x7158 = 0;
      fStack_4a8 = 1.0;
    }
    else {
      fStack_4a8 = param_2 / *(float *)&param_1[2].field_0x7158;
      *(float *)&param_1[2].field_0x7158 = *(float *)&param_1[2].field_0x7158 - param_2;
    }
    fStack_3a8 = *(float *)&param_1[2].field_0x7148 * fStack_4a8;
    pfStack_18 = (float *)&param_1[2].field_0x7148;
    fStack_3a4 = *(float *)&param_1[2].field_0x714c * fStack_4a8;
    fStack_3a0 = *(float *)&param_1[2].field_0x7150 * fStack_4a8;
    fStack_f0 = fStack_3a8;
    afStack_32c[(uint)bVar11 * -2 + 0x90] = afStack_3bc[(uint)bVar11 * -2 + 6];
    afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x91] =
         afStack_3bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    core_actor_cpp_FUN_00408b40(param_1);
    fStack_138 = fStack_a8;
    afStack_32c[(uint)bVar11 * -2 + 0x7e] = afStack_d4[(uint)bVar11 * -2 + 0xc];
    afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x7f] =
         afStack_d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
    fStack_58 = 1.0 - fStack_4a8;
    *(float *)&param_1->field_0x249c = *(float *)&param_1->field_0x249c + fStack_138;
    *(float *)&param_1->field_0x24a0 = *(float *)&param_1->field_0x24a0 + fStack_134;
    *(float *)&param_1->field_0x24a4 = *(float *)&param_1->field_0x24a4 + fStack_130;
    *pfStack_18 = *pfStack_18 * fStack_58;
    pfStack_18[1] = pfStack_18[1] * fStack_58;
    pfStack_18[2] = pfStack_18[2] * fStack_58;
    pfStack_18 = (float *)core_actor_cpp_FUN_0040cfa0();
    *(float *)&param_1->field_0x2508 = (float)pfStack_18 * fStack_4a8;
  }
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  if ((*(int *)(pSVar4 + 0x24) == 0x26) &&
     (this_ptr = (CAmmoBox *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (*(uint *)&param_1[2].field_0x7000), this_ptr != (CAmmoBox *)0x0))
  {
    pfStack_18 = (float *)core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
    core_ammobox_cpp_FUN_0040e6b0(this_ptr,(float)pfStack_18);
  }
  core_charactr_cpp_FUN_0042cd30(param_1);
  core_prye_cpp_FUN_0051e380(param_1);
  if (iStack_70 != 0) {
    *(uint *)&param_1[2].field_0x70dc = 0;
    *(uint *)&param_1[2].field_0x70d8 = *(uint *)&param_1[2].field_0x70dc;
    *(uint *)&param_1[2].field_0x70d4 = *(uint *)&param_1[2].field_0x70d8;
  }
  if ((*(int *)&param_1[2].field_0x700c == 0) && (*(int *)&param_1[2].field_0x7088 == 0)) {
    if (iStack_44 == 0) goto LAB_005199e6;
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)&param_1->field_0x158);
    iVar6 = *(int *)(pSVar4 + 0x24);
    fStack_228 = *(float *)&param_1->field_0x249c + *(float *)&param_1->field_0x250c;
    fStack_224 = *(float *)&param_1->field_0x24a0 + *(float *)&param_1->field_0x2510;
    fStack_220 = *(float *)&param_1->field_0x24a4 + *(float *)&param_1->field_0x2514;
    fStack_d8 = fStack_228;
    afStack_d4[(uint)bVar11 * -2] = afStack_32c[(uint)bVar11 * -2 + 0x42];
    afStack_d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x43];
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    if (iVar6 == 0x1a) {
      afStack_d4[1] = 0.0;
      afStack_d4[0] = 0.0;
      fStack_d8 = 0.0;
      fVar5 = *(float *)&param_1->field_0x251c - param_2 * (float)_DAT_005cd1a7;
      *(uint *)&param_1[2].field_0x70ec = 0x461c3f9a;
    }
    else {
      if (iVar6 == 0x1b) {
        afStack_d4[1] = 0.0;
        afStack_d4[0] = 0.0;
        fStack_d8 = 0.0;
      }
      fVar5 = *(float *)&param_1->field_0x251c - param_2 * (float)_DAT_005cd1a7;
    }
    *(float *)&param_1->field_0x251c = fVar5;
    iStack_50 = iVar6;
    core_actor_cpp_FUN_00408b40(param_1);
    fStack_27c = fStack_240;
    afStack_32c[(uint)bVar11 * -2 + 0x2d] = afStack_32c[(uint)bVar11 * -2 + 0x3c];
    afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2e] =
         afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3d];
    fStack_378 = *(float *)&param_1->field_0x2518 * param_2;
    velocity = (CVector3f *)&fStack_d8;
    fStack_374 = *(float *)&param_1->field_0x251c * param_2;
    fStack_370 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_288 = fStack_378;
    afStack_32c[(uint)bVar11 * -2 + 0x2a] = afStack_3bc[(uint)bVar11 * -2 + 0x12];
    afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b] =
         afStack_3bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
    afStack_d4[2] = fStack_288 + fStack_27c;
    afStack_d4[3] = fStack_284 + fStack_278;
    fStack_c4 = fStack_280 + fStack_274;
    fStack_18c = fStack_288 + fStack_27c;
    afStack_32c[(uint)bVar11 * -2 + 0x69] = afStack_d4[(uint)bVar11 * -2 + 3];
    afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x6a] =
         afStack_d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    fStack_d8 = fStack_d8 + fStack_18c;
    afStack_d4[0] = afStack_d4[0] + fStack_188;
    afStack_d4[1] = afStack_d4[1] + fStack_184;
    *(uint *)&param_1[2].field_0x7168 = *(uint *)&param_1->field_0x251c;
    core_charactr_cpp_FUN_0042c230(param_1,velocity);
    if (*(float *)&param_1->field_0x24 < *(float *)&param_1->field_0x2504 + (float)_DAT_005cd1af) {
      *(uint *)&param_1->field_0x2500 = 1;
    }
    if ((iStack_50 == 0x1a) && (*(int *)&param_1->field_0x2500 != 0)) {
      engine_console_cpp_FUN_00441ff0
                (g_CConsolePtr,"Splat at %3.2f fps\n",(double)*(float *)&param_1->field_0x251c
                );
      fVar5 = *(float *)&param_1[2].field_0x7168;
      if (-fVar5 < (float)_DAT_005cd1b7) {
        if (iStack_50 == 0x1a) {
          iVar6 = 0x1b;
          goto LAB_0051b278;
        }
LAB_0051b287:
        (**(code **)(*(int *)&param_1->field_0x154 + 0x24))(param_1,&DAT_02cfd900);
        goto LAB_0051b2ad;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_494);
      fVar5 = (-fVar5 + (float)_DAT_005cd1bf) * (float)_DAT_005cd1c7 * (float)_DAT_005cd1cf;
      fStack_490 = fVar5;
      if (0x42c80000 < (int)fVar5) {
        fStack_490 = 9999.0;
      }
      *(uint *)(param_1 + 1) = 0;
      (**(code **)(*(int *)&param_1->field_0x154 + 0x108))(param_1);
      if ((0.0 < *(float *)&param_1->field_0x2538) && ((int)fVar5 < 0x42c80001)) {
        iVar6 = 0x1c;
LAB_0051b278:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,iVar6,1);
        goto LAB_0051b287;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,0x1d,1);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
      iVar6 = *(int *)&param_1->field_0x2500;
      fStack_498 = 0x3F000000;
    }
    else {
LAB_0051b2ad:
      iVar6 = *(int *)&param_1->field_0x2500;
      fStack_498 = 0x3F000000;
    }
    0x3F000000 = fStack_498;
    if (iVar6 == 0) {
      *(float *)&param_1[2].field_0x70ec = *(float *)&param_1[2].field_0x70ec + param_2;
      if (iStack_50 == 4) {
        fStack_498 = fStack_498 * (float)_DAT_005cd14f;
      }
      if ((fStack_498 < *(float *)&param_1[2].field_0x70ec) ||
         (*(float *)&param_1[2].field_0x7168 < (float)_DAT_005cd1bf)) {
        if (iStack_50 != 0x1a) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,0x1a,1);
        }
        *(uint *)&param_1->field_0x2500 = 0;
      }
      goto LAB_005199e6;
    }
  }
  else {
    pfStack_28 = (float *)&param_1->field_0x249c;
    core_actor_cpp_FUN_00408b00(param_1);
    fStack_2ac = fStack_294;
    afStack_32c[(uint)bVar11 * -2 + 0x21] = afStack_32c[(uint)bVar11 * -2 + 0x27];
    afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22] =
         afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28];
    *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + fStack_2ac;
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + fStack_2a8;
    *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_2a4;
    pfStack_28[2] = 0.0;
    pfStack_28[1] = pfStack_28[2];
    *pfStack_28 = pfStack_28[1];
  }
  *(uint *)&param_1[2].field_0x70ec = 0;
LAB_005199e6:
  *(uint *)&param_1[2].field_0x70dc = 0;
  *(uint *)&param_1[2].field_0x70d8 = *(uint *)&param_1[2].field_0x70dc;
  *(uint *)&param_1[2].field_0x70d4 = *(uint *)&param_1[2].field_0x70d8;
  pCVar3 = g_CGamePtr;
  if (iStack_3c != 0) {
    if ((*(int *)&param_1[1].field_0x24 != 0) ||
       ((*(int *)&param_1[1].field_0x14 != 0 && (*(int *)&param_1[2].field_0x7034 == 0)))) {
      if (*(int *)&param_1[2].field_0x7034 == 0) {
        if ((*(int *)&param_1->field_0x25b0 == 0) ||
           (*(int *)(*(int *)&param_1[2].field_0x6e88 + 0x578) == 1)) {
          *(uint *)&param_1[2].field_0x7034 = 1;
        }
      }
      else {
        *(uint *)&param_1[2].field_0x7034 = 0;
        if (*(int *)&pCVar3->field_0x26c != 0) {
          *(uint *)&pCVar3->field_0x26c = 0;
          (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
        }
      }
    }
    if (*(int *)&param_1[1].field_0x20 != 0) {
      iVar6 = core_actor_cpp_castToClassHash_FUN_0040c840(*(uint *)&param_1->field_0x25b0);
      if (iVar6 == 0) {
        if (((*(int *)&param_1[2].field_0x708c == 0) ||
            (*(int *)(*(int *)&param_1[2].field_0x708c + 0x578) == 1)) &&
           (iVar6 = core_inv_cpp_FUN_004dba80(&param_1[2].field_0x6b50), iVar6 != 0)) {
          *(uint *)&param_1[2].field_0x6fcc = 8;
        }
      }
      else {
        *(uint *)&param_1[2].field_0x6fcc = 9;
      }
    }
    iVar6 = core_actor_cpp_castToClassHash_FUN_0040c840(*(uint *)&param_1->field_0x25b0);
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x23a0) != 0)) {
      *(float *)&param_1[2].field_0x7040 =
           *(float *)&param_1[1].field_0x38 * _DAT_005cd17f * (float)_DAT_005cd14f * param_2 +
           *(float *)&param_1[2].field_0x7040;
      fStack_6c = (float)core_prye_cpp_FUN_0051c0a0();
      pfStack_18 = (float *)fStack_6c;
      fStack_24 = (float)core_prye_cpp_FUN_0051c0f0();
      if (*(float *)&param_1[2].field_0x7040 < fStack_6c) {
        *(float *)&param_1[2].field_0x7040 = fStack_6c;
      }
      pfStack_18 = (float *)fStack_24;
      if (fStack_24 < *(float *)&param_1[2].field_0x7040) {
        *(float *)&param_1[2].field_0x7040 = fStack_24;
      }
    }
  }
  if (*(int *)&param_1[2].field_0x6e88 == 0) {
    *(uint *)&g_CGamePtr->field_0x26c = 0;
  }
  else if (*(int *)(*(int *)&param_1[2].field_0x6e88 + 0x2f0) == 0) {
    *(uint *)&g_CGamePtr->field_0x26c = 0;
  }
  if (iStack_40 != 0) {
    unkafter_prye_cpp_FUN_00524940(param_1);
  }
  if (*(int *)&param_1[2].field_0x7034 == 0) {
    fVar5 = *(float *)&param_1[2].field_0x7038 - param_2 / _DAT_005e34f0;
    *(float *)&param_1[2].field_0x7038 = fVar5;
    if (fVar5 < 0.0) {
      *(uint *)&param_1[2].field_0x7038 = 0;
    }
  }
  else {
    fVar5 = param_2 / _DAT_005e34ec + *(float *)&param_1[2].field_0x7038;
    *(float *)&param_1[2].field_0x7038 = fVar5;
    if (1.0 < fVar5) {
      *(uint *)&param_1[2].field_0x7038 = 0x3f800000;
    }
  }
  fVar5 = *(float *)&param_1[2].field_0x7058 - param_2 / _DAT_005e34f4;
  *(float *)&param_1[2].field_0x7058 = fVar5;
  if (fVar5 <= 0.0) {
    *(uint *)&param_1[2].field_0x7058 = 0;
  }
  fVar5 = *(float *)&param_1[2].field_0x7078 - param_2 / _DAT_005e34f4;
  *(float *)&param_1[2].field_0x7078 = fVar5;
  if (fVar5 <= 0.0) {
    *(uint *)&param_1[2].field_0x7078 = 0;
  }
  if (iStack_2c != 0) {
    unkafter_prye_cpp_FUN_00525930();
  }
  core_prye_cpp_FUN_0051c1c0();
  iVar6 = core_actor_cpp_castToClassHash_FUN_0040c840(*(uint *)&param_1->field_0x25b0);
  if ((iVar6 != 0) && (*(int *)&param_1[2].field_0x708c != 0)) {
    core_skeleton_cpp_FUN_0054dd10((CDeformableModelInstance *)&param_1->field_0x158);
    core_prye_cpp_FUN_0051f360(param_1);
    core_prye_cpp_FUN_00523800();
    core_prye_cpp_FUN_0051c1c0();
  }
  unkafter_prye_cpp_FUN_00524170(param_1,param_2);
  unkafter_prye_cpp_FUN_00526cf0();
  core_charactr_cpp_FUN_00433350(param_1,param_2);
  pfStack_18 = (float *)core_motion_cpp_FUN_004fc350(&param_1->field_0x158);
  if ((float)pfStack_18 <= 0.0) {
    core_hero_cpp_FUN_004d3850((CHero *)param_1);
  }
  else {
    pfStack_18 = (float *)core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
    if ((1.0 < (float)pfStack_18) &&
       (pCStack_20 = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c840
                               (*(uint *)&param_1[2].field_0x7004),
       pCStack_20 != (CBoxActor *)0x0)) {
      core_prye_cpp_FUN_0051c100();
      uStack_348 = uStack_30c;
      afStack_3bc[(uint)bVar11 * -2 + 0x1e] = afStack_32c[(uint)bVar11 * -2 + 9];
      afStack_3bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f] =
           afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
      core_actor_cpp_FUN_00408b80(param_1);
      fStack_2d0 = fStack_1d4;
      afStack_32c[(uint)bVar11 * -2 + 0x18] = afStack_32c[(uint)bVar11 * -2 + 0x57];
      afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
           afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x58];
      fStack_1bc = fStack_2d0 - fStack_3d8;
      fStack_1b8 = fStack_2cc - afStack_3d4[0];
      fStack_1b4 = fStack_2c8 - afStack_3d4[1];
      CStack_33c._0_4_ = fStack_2d0 - fStack_3d8;
      *(float *)((int)&CStack_33c + ((uint)bVar11 * -2 + 1) * 4) =
           afStack_32c[(uint)bVar11 * -2 + 0x5d];
      *(float *)((int)&CStack_33c + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 2) * 4) =
           afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x5e];
      CStack_33c._4_4_ = 0;
      core_actor_cpp_FUN_00408b40(param_1);
      uStack_1ec = uStack_2dc;
      afStack_32c[(uint)bVar11 * -2 + 0x51] = afStack_32c[(uint)bVar11 * -2 + 0x15];
      afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x52] =
           afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
      if (0.0 < fStack_1e4) {
        core_boxactor_cpp_FUN_0041ff20(pCStack_20,(CVector3f *)&fStack_3d8,&CStack_33c);
      }
    }
  }
  core_prye_cpp_FUN_0051f360(param_1,0);
  core_prye_cpp_FUN_00522b00(param_1,0,param_2);
  core_prye_cpp_FUN_00522b00(param_1,1,param_2);
  unkafter_prye_cpp_FUN_005263c0(param_1,param_2);
  core_inv_cpp_FUN_004dcdb0();
  unkafter_prye_cpp_FUN_00526dc0(param_1,param_2);
  iVar6 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&param_1->field_0x25b0,DAT_007e1a50);
  if (iVar6 != 0) {
    *(uint *)(iVar6 + 0x23a0) = 1;
    (**(code **)(*(int *)(*(int *)&param_1->field_0x25b0 + 0x154) + 0xc))
              (*(int *)&param_1->field_0x25b0,param_2);
  }
  if (iStack_2c == 0) {
    core_hero_cpp_FUN_004d3210();
  }
  else {
    param_2 = *(float *)&param_1[2].field_0x6fe4 + param_2;
    *(float *)&param_1[2].field_0x6fe4 = param_2;
    if ((float)_DAT_005cd1df < param_2) {
      core_hero_cpp_FUN_004d4900(param_1,1);
    }
  }
  if ((*(int *)&param_1[2].field_0x708c != 0) &&
     (*(int *)(*(int *)&param_1[2].field_0x708c + 0xfc) != 0)) {
    *(uint *)&param_1->field_0xfc = 1;
    return;
  }
  return;
}
