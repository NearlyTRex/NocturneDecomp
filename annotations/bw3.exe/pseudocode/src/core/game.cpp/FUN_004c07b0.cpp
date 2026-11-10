// Name: core_game.cpp_FUN_004c07b0
// Address: 004c07b0
// Address Range: [[004c07b0, 004c4867]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004c07b0(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004c07b0(int param_1,uint *param_2)

{
  CCharacter *this_ptr;
  bool bVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  CPathMap *this_ptr_00;
  CDemonActor *pCVar9;
  CDemonActor *pCVar10;
  int iVar11;
  CDoor *this_ptr_01;
  float *pfVar12;
  uint *puVar13;
  uint *puVar14;
  byte bVar15;
  byte bVar16;
  float afStackY_1734 [943];
  float fStack_868;
  float fStack_864;
  float local_860;
  float fStack_85c;
  float local_858;
  float fStack_854;
  float fStack_850;
  float fStack_84c;
  float fStack_848;
  float local_844;
  float fStack_840;
  float fStack_824;
  float fStack_7fc;
  float fStack_7c8;
  float fStack_794;
  float fStack_790;
  float fStack_78c;
  float fStack_788;
  float fStack_784;
  float fStack_780;
  float fStack_764;
  float fStack_760;
  float fStack_75c;
  float fStack_758;
  float fStack_754;
  float fStack_750;
  float fStack_74c;
  float fStack_740;
  uint uStack_734;
  float fStack_728;
  float fStack_71c;
  float fStack_718;
  float fStack_714;
  uint uStack_710;
  uint uStack_704;
  int iStack_6ec;
  float fStack_6e8;
  int iStack_6e4;
  int iStack_6e0;
  float fStack_6d4;
  float afStack_6d0 [4];
  float fStack_6c0;
  float fStack_6bc;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  float fStack_698;
  float fStack_694;
  float fStack_690;
  uint uStack_68c;
  float fStack_680;
  float fStack_67c;
  float fStack_678;
  uint uStack_674;
  float fStack_66c;
  int iStack_668;
  float afStack_664 [4];
  float fStack_654;
  uint uStack_650;
  float fStack_64c;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  float fStack_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  float fStack_620;
  float fStack_61c;
  float fStack_618;
  int iStack_614;
  float fStack_610;
  int iStack_60c;
  uint uStack_608;
  uint uStack_604;
  uint uStack_600;
  uint uStack_5fc;
  float afStack_5f8 [4];
  float fStack_5e8;
  float fStack_5e4;
  float afStack_5e0 [4];
  float fStack_5d0;
  float fStack_5cc;
  float fStack_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float fStack_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  uint uStack_5a8;
  float afStack_5a4 [6];
  float fStack_58c;
  float fStack_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  uint uStack_578;
  float fStack_56c;
  float fStack_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  float fStack_558;
  float fStack_554;
  uint uStack_548;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  uint uStack_530;
  uint uStack_524;
  uint uStack_520;
  uint uStack_51c;
  uint uStack_518;
  float afStack_514 [4];
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float fStack_4f8;
  float fStack_4f4;
  float fStack_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float afStack_4b4 [4];
  float fStack_4a4;
  uint uStack_4a0;
  uint uStack_49c;
  uint uStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_444;
  uint uStack_440;
  int iStack_434;
  float afStack_430 [4];
  float fStack_420;
  float fStack_41c;
  float afStack_418 [4];
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  int iStack_3f8;
  float fStack_3f4;
  int iStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float afStack_3dc [6];
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float afStack_3b8 [4];
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  uint uStack_398;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  uint uStack_374;
  uint uStack_368;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  uint uStack_350;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  uint uStack_338;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_308;
  float afStack_304 [5];
  int iStack_2f0;
  float fStack_2ec;
  int iStack_2e8;
  float fStack_2e4;
  float afStack_2e0 [5];
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float afStack_298 [4];
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  int iStack_230;
  float afStack_22c [5];
  uint uStack_218;
  float afStack_214 [2];
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  float fStack_200;
  float afStack_1fc [5];
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  int iStack_1d0;
  float afStack_1cc [2];
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  float fStack_1b8;
  float afStack_1b4 [5];
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int iStack_17c;
  float afStack_178 [2];
  CVector3f CStack_170;
  float fStack_164;
  float afStack_160 [4];
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  int iStack_140;
  float afStack_13c [4];
  float fStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  float fStack_11c;
  float afStack_118 [6];
  float afStack_100 [4];
  float fStack_f0;
  int iStack_ec;
  float afStack_e8 [5];
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  float fStack_c8;
  float afStack_c4 [4];
  int iStack_b4;
  int iStack_b0;
  int local_ac;
  float fStack_a8;
  int iStack_a4;
  CDemonActor *pCStack_a0;
  float fStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int local_88;
  int iStack_84;
  float local_80;
  CDemonActor *pCStack_74;
  float fStack_70;
  float fStack_68;
  float fStack_60;
  float fStack_58;
  float local_54;
  int local_50;
  int local_4c;
  float fStack_48;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_28;
  CDemonActor *pCStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar15 = 0;
  if ((DAT_01d1e35c & 1) == 0) {
    DAT_01d1e35c = DAT_01d1e35c | 1;
  }
  local_858 = 0.1875;
  if ((DAT_01d1e35c & 2) == 0) {
    DAT_01d1e35c = DAT_01d1e35c | 2;
  }
  local_54 = 8.0;
  local_844 = 0.0;
  local_50 = core_actor_cpp_castToClassHash_FUN_0040c840();
  iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  if (((iVar7 != 0) && (iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x10c))(), 0 < iVar7)) ||
     ((local_50 != 0 && (iVar7 = unkafter_stranger_cpp_FUN_00527110(), iVar7 != 0)))) {
    return;
  }
  local_88 = _DAT_01c5fadc;
  local_4c = _DAT_01c5fae0;
  local_90 = DAT_005fba18;
  local_ac = DAT_005fba1c;
  if (0x1e0 < DAT_005fba1c) {
    local_88 = (_DAT_01c5fadc * 0x1e0) / DAT_005fba1c;
    local_4c = (_DAT_01c5fae0 * 0x1e0) / DAT_005fba1c;
    local_90 = 0x280;
    local_ac = 0x1e0;
  }
  if (*(int *)(param_1 + 0x328) != 0) {
    local_ac = 0xf0;
    local_90 = 0x140;
  }
  if (local_88 < 2) {
    local_88 = 2;
  }
  if (local_90 + -2 < local_88) {
    local_88 = local_90 + -2;
  }
  if (local_4c < 2) {
    local_4c = 2;
  }
  if (local_ac + -2 < local_4c) {
    local_4c = local_ac + -2;
  }
  local_860 = 2.0;
  local_80 = 0.2;
  memset(param_2,0,0x34);
  if ((&DAT_01d21fa0)[*(int *)(param_1 + 0x50)] == (&DAT_01c6cef0)[*(int *)(param_1 + 0x50)]) {
    param_2[5] = 0;
  }
  else {
    param_2[5] = (uint)(byte)(&DAT_01c6cef0)[*(int *)(param_1 + 0x50)];
  }
  if ((&DAT_01d21fa0)[*(int *)(param_1 + 0x54)] == (&DAT_01c6cef0)[*(int *)(param_1 + 0x54)]) {
    param_2[6] = 0;
  }
  else {
    param_2[6] = (uint)(byte)(&DAT_01c6cef0)[*(int *)(param_1 + 0x54)];
  }
  if ((&DAT_01d21fa0)[*(int *)(param_1 + 0x6c)] == (&DAT_01c6cef0)[*(int *)(param_1 + 0x6c)]) {
    param_2[7] = 0;
  }
  else {
    param_2[7] = (uint)(byte)(&DAT_01c6cef0)[*(int *)(param_1 + 0x6c)];
  }
  iVar7 = (**(code **)(*0x01D70A78 + 4))();
  if (iVar7 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
              ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),(CDemonActor *)0x0,
               5,1);
  }
  iVar7 = (**(code **)(*0x01D70A78 + 4))();
  if (iVar7 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
              ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),(CDemonActor *)0x0,
               5,-1);
  }
  iVar7 = (**(code **)(*0x01D70A78 + 4))();
  if (iVar7 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbc40
              ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),1);
  }
  iVar7 = (**(code **)(*0x01D70A78 + 4))();
  if (iVar7 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbc40
              ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),-1);
  }
  iVar7 = (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) + 0x148))();
  iStack_b4 = iVar7;
  iVar8 = (**(code **)(*0x01D70A78 + 4))();
  if ((iVar8 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,0,1), iVar7 == 0)) {
    param_2[7] = 1;
  }
  iVar7 = (**(code **)(*0x01D70A78 + 4))();
  if ((iVar7 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,1,1), iStack_b4 == 0)) {
    param_2[7] = 1;
  }
  iVar7 = (**(code **)(*0x01D70A78 + 4))();
  if ((iVar7 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,2,1), iStack_b4 == 0)) {
    param_2[7] = 1;
  }
  iVar7 = (**(code **)(*0x01D70A78 + 4))();
  if ((iVar7 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,3,1), iStack_b4 == 0)) {
    param_2[7] = 1;
  }
  iVar7 = (**(code **)(*0x01D70A78 + 4))();
  if ((iVar7 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,4,1), iStack_b4 == 0)) {
    param_2[7] = 1;
  }
  if ((_DAT_01d22c9c != 0) ||
     (iVar7 = core_script_cpp_CScript_getLetterboxHeight_FUN_00528f60(g_CScriptPtr), 2 < iVar7)) {
    _DAT_01d22c9c = 0;
    _DAT_01d1e334 = 0;
    _DAT_01d1e324 = 0;
    _DAT_01c5fae4 = 0;
    _DAT_01d1e34c = 0;
    sound_sndmain_cpp_killAllSfx_FUN_00556c60();
    _DAT_01d22c30 = 1e+30;
    _DAT_01d1e358 = g_CDemonSetPtr->selected_camera_index;
  }
  if ((int)_DAT_01d22b48 < 0) {
    _DAT_01c5fae4 = 0;
    _DAT_01d1e334 = 0;
    _DAT_01d1e34c = 0;
    _DAT_01d22c30 = 1e+30;
    _DAT_01d1e324 = 0;
  }
  if (*(int *)(param_1 + 0x264) != 0) {
    if ((_DAT_01c5fae4 & 1) != 0) {
      if ((float10)0 < (float10)(local_4c - local_90 / 2) / (float10)(local_ac / 2)) {
        param_2[1] = 1;
      }
      else {
        *param_2 = 1;
      }
      if (*(int *)(param_1 + 0xb0) == 0) {
        bVar15 = (&DAT_01c6cef0)[*(int *)(param_1 + 0x30)];
      }
      else {
        bVar15 = (&DAT_01c6cef0)[*(int *)(param_1 + 0x30)] == '\0';
      }
      param_2[2] = (uint)bVar15;
    }
    fVar2 = (float)(local_88 - local_90 / 2) / (float)(local_90 / 2);
    param_2[0xb] = fVar2;
    uVar4 = _DAT_01c5fae4;
    param_2[0xb] = fVar2 * (float)param_2[0xb] * (float)param_2[0xb] * _DAT_005c3c0c;
    if ((uVar4 & 2) == 0) {
      return;
    }
    param_2[3] = 1;
    return;
  }
  if (_DAT_005fe9d4 < 0.0) {
    _DAT_005fe9d4 = 0.25;
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    core_dcamera_cpp_FUN_00449eb0(&g_CDemonCameraInstance);
    iStack_2f0 = uStack_218;
    (&fStack_2ec)[(uint)bVar15 * -2] = afStack_214[(uint)bVar15 * -2];
    (&fStack_2ec)[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_214[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    core_dcamera_cpp_FUN_00449f80();
    iStack_2f0 = iStack_668;
    (&fStack_2ec)[(uint)bVar15 * -2] = afStack_664[(uint)bVar15 * -2];
    (&fStack_2ec)[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_664[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    fStack_3ec = (float)iStack_2f0 * _DAT_005e06e4;
    fStack_3e8 = (float)(int)fStack_2ec * _DAT_005e06e4;
    fStack_3e4 = (float)iStack_2e8 * _DAT_005e06e4;
    fStack_740 = g_CDemonCameraInstance.base.position.f.x;
    *(uint *)(&stack0xfffff8c4 + (uint)bVar15 * -8) =
         *(uint *)((int)&g_CDemonCameraInstance + (uint)bVar15 * -8 + 8);
    fVar5 = fStack_3e8;
    fVar2 = fStack_3ec;
    *(uint *)(&stack0xfffff8c8 + (uint)bVar15 * -8 + (uint)bVar15 * -8) =
         *(uint *)((uint)bVar15 * -8 + 0x2038f58 + (uint)bVar15 * -8);
    fStack_5c0 = fStack_740;
    afStack_5e0[(uint)bVar15 * -2 + 9] = *(float *)(&stack0xfffff8c4 + (uint)bVar15 * -8);
    afStack_5e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
         *(float *)(&stack0xfffff8c8 + (uint)bVar15 * -8 + (uint)bVar15 * -8);
    fStack_1dc = fVar2 - fStack_5c0;
    fStack_1d8 = fVar5 - fStack_5bc;
    fStack_1d4 = fStack_3e4 - fStack_5b8;
    fStack_494 = fVar2 - fStack_5c0;
    afStack_4b4[(uint)bVar15 * -2 + 9] = afStack_1fc[(uint)bVar15 * -2 + 9];
    afStack_4b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
         afStack_1fc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
    fStack_60 = SQRT(fStack_48c * fStack_48c + fStack_494 * fStack_494 + fStack_490 * fStack_490);
    if (fStack_60 <= 0.0) {
      fStack_490 = 0.0;
      fStack_494 = 0.0;
      fStack_48c = 0.0;
    }
    else {
      fVar2 = 1.0 / fStack_60;
      fStack_494 = fStack_494 * fVar2;
      fStack_490 = fStack_490 * fVar2;
      fStack_48c = fStack_48c * fVar2;
    }
    fStack_494 = fStack_494 * _DAT_005c3c08;
    fStack_490 = fStack_490 * _DAT_005c3c08;
    fStack_48c = fStack_48c * _DAT_005c3c08;
    fStack_164 = fStack_5c0 + fStack_494;
    afStack_160[0] = fStack_5bc + fStack_490;
    afStack_160[1] = fStack_5b8 + fStack_48c;
    fStack_248 = fStack_164;
    afStack_298[(uint)bVar15 * -2 + 0x15] = afStack_160[(uint)bVar15 * -2];
    afStack_298[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16] =
         afStack_160[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    if (&fStack_3ec != afStack_298 + 0x14) {
      fStack_3ec = fStack_248;
      fStack_3e8 = fStack_244;
      fStack_3e4 = fStack_240;
    }
    core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,4);
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
              (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
    _DAT_01d22c2c = (CDemonActor *)0x0;
    iStack_b0 = 0;
    while( true ) {
      iVar7 = iStack_b0 + 1;
      bVar1 = 3 < iStack_b0;
      pCVar9 = _DAT_01d22c2c;
      iStack_b0 = iVar7;
      if (((bVar1) ||
          (fStack_40 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr), pCVar9 = _DAT_01d22c2c
          , fStack_28 = fStack_40, fStack_40 < 0.0)) || (0x3f800000 < (int)fStack_40))
      goto LAB_004c23a6;
      pCVar10 = g_CDemonSetPtr->collision_actor;
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if (((iVar7 != 0) &&
          (iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840(), *(int *)(iVar7 + 0x2e0) == 0)) &&
         (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                            (0x01C6E360,(char *)(iVar7 + 0x2e8)), iVar7 == 0)) break;
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if (iVar7 != 0) {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
        pCVar9 = _DAT_01d22c2c;
        if (*(int *)(iVar7 + 0x314) != 0) {
          _DAT_01d22c2c = pCVar10;
          *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b68) = 4;
          pCVar9 = _DAT_01d22c2c;
        }
        goto LAB_004c23a6;
      }
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      pCVar9 = pCVar10;
      if (iVar7 != 0) goto LAB_004c23a6;
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if (iVar7 != 0) {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
        iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x84))();
        pCVar9 = _DAT_01d22c2c;
        if (iVar7 != 5) {
          pCVar9 = pCVar10;
        }
        goto LAB_004c23a6;
      }
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if (iVar7 != 0) {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
        iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x84))();
        pCVar9 = _DAT_01d22c2c;
        if (iVar7 != 5) {
          pCVar9 = pCVar10;
        }
        goto LAB_004c23a6;
      }
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if (iVar7 != 0) {
        _DAT_01d22c2c = pCVar10;
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b68) = 8;
        pCVar9 = _DAT_01d22c2c;
        goto LAB_004c23a6;
      }
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if (iVar7 != 0) {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
        iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x10c))();
        if (iVar7 == 0) goto LAB_004c23a6;
      }
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if (iVar7 != 0) goto LAB_004c23a6;
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if (((iVar7 != 0) &&
          (iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840(), *(int *)(iVar7 + 0xd844) == 1)) &&
         (-1 < *(int *)(iVar7 + 0xd848))) {
        _DAT_01d22c2c = *(CDemonActor **)(iVar7 + 0xd1c8 + *(int *)(iVar7 + 0xd848) * 0x48);
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b68) = 4;
        pCVar9 = _DAT_01d22c2c;
        goto LAB_004c23a6;
      }
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c840();
      iVar7 = _DAT_01d5ba14;
      if ((iVar8 != 0) &&
         (iVar8 = core_actor_cpp_castToClassHash_FUN_0040c840(),
         iVar8 != *(int *)(iVar7 * 4 + 0x1d5ba04))) goto LAB_004c23a6;
      pCVar9 = _DAT_01d22c2c;
      if (pCVar10 != _DAT_01d22c2c) {
        iVar7 = 0;
        while ((pCVar9 = _DAT_01d22c2c, iVar7 < g_CDemonSetPtr->actor_count &&
               ((pCVar9 = (CDemonActor *)core_actor_cpp_castToClassHash_FUN_0040c840(),
                pCVar9 == (CDemonActor *)0x0 ||
                (pCVar10 != (CDemonActor *)pCVar9[2].orient_matrix.m[1].y))))) {
          iVar7 = iVar7 + 1;
        }
      }
      _DAT_01d22c2c = pCVar9;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCVar10);
      pCVar9 = _DAT_01d22c2c;
      if ((fStack_40 < 0.0) || (0x3f800000 < (int)fStack_40)) goto LAB_004c23a6;
    }
    _DAT_01d22c2c = pCVar10;
    *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b68) = 3;
    pCVar9 = _DAT_01d22c2c;
LAB_004c23a6:
    _DAT_01d22c2c = pCVar9;
    if (_DAT_01d22c2c == (CDemonActor *)0x0) {
      core_hero_cpp_FUN_004d3210();
    }
    else {
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      pCVar9 = _DAT_01d22c2c;
      iVar8 = _DAT_01d5ba14 * 4;
      if (iVar7 == 0) {
        *(CDemonActor **)(*(int *)(iVar8 + 0x1d5ba04) + 0x20b6c) = _DAT_01d22c2c;
        *(CDemonActor **)(*(int *)(iVar8 + 0x1d5ba04) + 0x20b70) = pCVar9;
        *(uint *)(*(int *)(iVar8 + 0x1d5ba04) + 0x20b7c) = 0;
        *(uint *)(*(int *)(iVar8 + 0x1d5ba04) + 0x20b78) = 1;
      }
      else {
        *(uint *)(*(int *)(iVar8 + 0x1d5ba04) + 0x20b68) = 1;
        *(CDemonActor **)(*(int *)(iVar8 + 0x1d5ba04) + 0x20b6c) = _DAT_01d22c2c;
        iVar8 = core_actor_cpp_castToClassHash_FUN_0040c840();
        iVar7 = _DAT_01d5ba14;
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b70) =
             *(uint *)(iVar8 + 0x2fc);
        *(uint *)(*(int *)(iVar7 * 4 + 0x1d5ba04) + 0x20b7c) = 0;
        *(uint *)(*(int *)(iVar7 * 4 + 0x1d5ba04) + 0x20b78) = 1;
      }
    }
  }
  else {
    _DAT_005fe9d4 = _DAT_005fe9d4 - g_CGamePtr->delta_time_float;
  }
  if (local_88 < 0x20) {
    _DAT_01d22b48 = (CDemonActor *)0x3;
  }
  else if (local_90 + -0x20 < local_88) {
    _DAT_01d22b48 = (CDemonActor *)0x4;
  }
  else if (local_4c < 0x20) {
    _DAT_01d22b48 = (CDemonActor *)0x1;
  }
  else if (local_ac + -0x20 < local_4c) {
    _DAT_01d22b48 = (CDemonActor *)0x2;
  }
  else if (_DAT_01d22c2c == (CDemonActor *)0x0) {
    _DAT_01d22b48 = _DAT_01d22c2c;
    if (_DAT_01d1e34c != 0) {
      _DAT_01d22b48 = (CDemonActor *)0x7;
    }
  }
  else {
    iVar7 = core_actor_cpp_isOfClass_FUN_0040c790(_DAT_01d22c2c,"BCEnemy" + 1);
    if (iVar7 == 0) {
      _DAT_01d22b48 = (CDemonActor *)0x5;
    }
    else {
      _DAT_01d22b48 = (CDemonActor *)0x6;
    }
  }
  pCStack_74 = (CDemonActor *)0x0;
  if ((_DAT_01d1e324 == 0) && ((_DAT_01c5fae4 == 1 || ((_DAT_01c5fae4 & 2) != 0)))) {
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    core_dcamera_cpp_FUN_00449eb0(&g_CDemonCameraInstance);
    iStack_1c4 = uStack_530;
    afStack_1cc[(uint)bVar15 * -2 + 3] = afStack_5a4[(uint)bVar15 * -2 + 0x1e];
    afStack_1cc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
         afStack_5a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1f];
    core_dcamera_cpp_FUN_00449f80();
    iStack_1c4 = iStack_434;
    afStack_1cc[(uint)bVar15 * -2 + 3] = afStack_430[(uint)bVar15 * -2];
    afStack_1cc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
         afStack_430[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    fStack_2a8 = (float)iStack_1c4 * _DAT_005e06e4;
    fStack_2a4 = (float)iStack_1c0 * _DAT_005e06e4;
    fStack_2a0 = (float)iStack_1bc * _DAT_005e06e4;
    afStack_e8[2] = g_CDemonCameraInstance.base.position.f.x;
    afStack_e8[(uint)bVar15 * -2 + 3] =
         *(float *)((int)&g_CDemonCameraInstance + (uint)bVar15 * -8 + 8);
    afStack_e8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
         *(float *)((uint)bVar15 * -8 + 0x2038f58 + (uint)bVar15 * -8);
    fVar5 = fStack_2a4;
    fVar2 = fStack_2a8;
    fStack_6d4 = afStack_e8[2];
    afStack_6d0[(uint)bVar15 * -2] = afStack_e8[(uint)bVar15 * -2 + 3];
    afStack_6d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_e8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    fStack_620 = fVar2 - fStack_6d4;
    fStack_61c = fVar5 - afStack_6d0[0];
    fStack_618 = fStack_2a0 - afStack_6d0[1];
    fStack_2cc = fVar2 - fStack_6d4;
    afStack_2e0[(uint)bVar15 * -2 + 6] = afStack_664[(uint)bVar15 * -2 + 0x12];
    afStack_2e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
         afStack_664[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13];
    fStack_a8 = SQRT(fStack_2c4 * fStack_2c4 + fStack_2cc * fStack_2cc + fStack_2c8 * fStack_2c8);
    if (fStack_a8 <= 0.0) {
      fStack_2c8 = 0.0;
      fStack_2cc = 0.0;
      fStack_2c4 = 0.0;
    }
    else {
      fVar2 = 1.0 / fStack_a8;
      fStack_2cc = fStack_2cc * fVar2;
      fStack_2c8 = fStack_2c8 * fVar2;
      fStack_2c4 = fStack_2c4 * fVar2;
    }
    fStack_2cc = fStack_2cc * _DAT_005c3c08;
    fStack_2c8 = fStack_2c8 * _DAT_005c3c08;
    fStack_2c4 = fStack_2c4 * _DAT_005c3c08;
    afStack_5a4[5] = fStack_6d4 + fStack_2cc;
    fStack_58c = afStack_6d0[0] + fStack_2c8;
    fStack_588 = afStack_6d0[1] + fStack_2c4;
    fStack_680 = afStack_5a4[5];
    afStack_6d0[(uint)bVar15 * -2 + 0x15] = afStack_5a4[(uint)bVar15 * -2 + 6];
    afStack_6d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16] =
         afStack_5a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    if (afStack_2e0 + 0xe != afStack_6d0 + 0x14) {
      fStack_2a8 = fStack_680;
      fStack_2a4 = fStack_67c;
      fStack_2a0 = fStack_678;
    }
    _DAT_01d1e354 = 0;
    core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,4);
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
              (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
    iStack_44 = 0;
    while (iVar7 = iStack_44, iStack_44 = iStack_44 + 1, iVar7 < 4) {
      fStack_28 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr);
      fStack_3c = fStack_28;
      if ((fStack_28 < 0.0) || (0x3f800000 < (int)fStack_28)) break;
      pCVar9 = g_CDemonSetPtr->collision_actor;
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if ((iVar7 != 0) &&
         ((iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840(), *(int *)(iVar7 + 0x2e0) == 0 &&
          (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                             (0x01C6E360,(char *)(iVar7 + 0x2e8)), iVar7 == 0)))) {
        pCStack_74 = pCVar9;
        _DAT_01d1e354 = 3;
        break;
      }
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if (iVar7 != 0) {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
        if (*(int *)(iVar7 + 0x314) != 0) {
          pCStack_74 = pCVar9;
          _DAT_01d1e354 = 4;
        }
        break;
      }
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if (iVar7 != 0) {
        pCStack_74 = pCVar9;
        break;
      }
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if (iVar7 != 0) {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
        iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x84))();
        if (iVar7 != 5) {
          pCStack_74 = pCVar9;
        }
        break;
      }
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if (iVar7 != 0) {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
        iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x84))();
        if (iVar7 != 5) {
          pCStack_74 = pCVar9;
        }
        break;
      }
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if (iVar7 != 0) {
        pCStack_74 = pCVar9;
        _DAT_01d1e354 = 8;
        break;
      }
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if (iVar7 != 0) {
        pCStack_74 = pCVar9;
        break;
      }
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if (iVar7 != 0) {
        pCStack_74 = pCVar9;
        break;
      }
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if (((iVar7 != 0) &&
          (iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840(), *(int *)(iVar7 + 0xd844) == 1)) &&
         (-1 < *(int *)(iVar7 + 0xd848))) {
        pCStack_74 = *(CDemonActor **)(iVar7 + 0xd1c8 + *(int *)(iVar7 + 0xd848) * 0x48);
        _DAT_01d1e354 = 4;
        break;
      }
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if (iVar7 != 0) {
        pCStack_74 = pCVar9;
        break;
      }
      if (pCVar9 != pCStack_74) {
        for (iVar7 = 0; iVar7 < g_CDemonSetPtr->actor_count; iVar7 = iVar7 + 1) {
          pCVar10 = (CDemonActor *)core_actor_cpp_castToClassHash_FUN_0040c840();
          if ((pCVar10 != (CDemonActor *)0x0) &&
             (pCVar9 == (CDemonActor *)pCVar10[2].orient_matrix.m[1].y)) {
            _DAT_01d1e354 = 1;
            pCStack_74 = pCVar10;
            break;
          }
        }
      }
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCVar9);
      if ((fStack_3c < 0.0) || (0x3f800000 < (int)fStack_3c)) break;
    }
    _DAT_01d1e350 = pCStack_74;
  }
  if ((iStack_b4 == 0) && ((_DAT_01c5fae4 & 2) != 0)) {
    param_2[3] = 1;
  }
  if ((((local_50 != 0) &&
       (pCVar9 = *(CDemonActor **)(local_50 + 0x20c24), pCVar9 != (CDemonActor *)0x0)) &&
      ((pCVar9[2].orient.vec.x == 4.2039e-45 ||
       (((iVar7 = core_actor_cpp_isOfClass_FUN_0040c790(pCVar9,"CStorm"), iVar7 != 0 ||
         (iVar7 = core_actor_cpp_isOfClass_FUN_0040c790(pCVar9,"CHeal"), iVar7 != 0)) ||
        (iVar7 = core_actor_cpp_isOfClass_FUN_0040c790(pCVar9,"CFireStaff"), iVar7 != 0))))
      )) && (_DAT_01d1e34c = 0, _DAT_01d22b48 == (CDemonActor *)0x5)) {
    _DAT_01d22b48 = (CDemonActor *)0x0;
  }
  if ((iStack_b4 == 0) || ((_DAT_01c5fae4 & 2) == 0)) {
    if (iStack_b4 == 0) {
      _DAT_01d1e34c = iStack_b4;
    }
  }
  else {
    if (((local_50 == 0) || (*(int *)(local_50 + 0x20c24) == 0)) ||
       (*(int *)(*(int *)(local_50 + 0x20c24) + 0x2e0) != 3)) {
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      core_dcamera_cpp_FUN_00449eb0(&g_CDemonCameraInstance);
      iStack_20c = uStack_374;
      afStack_214[(uint)bVar15 * -2 + 3] = afStack_3b8[(uint)bVar15 * -2 + 0x12];
      afStack_214[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
           afStack_3b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13];
      core_dcamera_cpp_FUN_00449f80();
      iStack_20c = iStack_1d0;
      afStack_214[(uint)bVar15 * -2 + 3] = afStack_1cc[(uint)bVar15 * -2];
      afStack_214[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
           afStack_1cc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      afStack_430[2] = (float)iStack_20c * _DAT_005e06e4;
      afStack_430[3] = (float)iStack_208 * _DAT_005e06e4;
      fStack_420 = (float)iStack_204 * _DAT_005e06e4;
      fStack_23c = g_CDemonCameraInstance.base.position.f.x;
      afStack_298[(uint)bVar15 * -2 + 0x18] =
           *(float *)((int)&g_CDemonCameraInstance + (uint)bVar15 * -8 + 8);
      afStack_298[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19] =
           *(float *)((uint)bVar15 * -8 + 0x2038f58 + (uint)bVar15 * -8);
      fVar5 = afStack_430[3];
      fVar2 = afStack_430[2];
      fStack_2e4 = fStack_23c;
      afStack_2e0[(uint)bVar15 * -2] = afStack_298[(uint)bVar15 * -2 + 0x18];
      afStack_2e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_298[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19];
      afStack_13c[2] = fVar2 - fStack_2e4;
      afStack_13c[3] = fVar5 - afStack_2e0[0];
      fStack_12c = fStack_420 - afStack_2e0[1];
      fStack_5e4 = fVar2 - fStack_2e4;
      afStack_5e0[(uint)bVar15 * -2] = afStack_13c[(uint)bVar15 * -2 + 3];
      afStack_5e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_13c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      fStack_30 = SQRT(afStack_5e0[1] * afStack_5e0[1] +
                       fStack_5e4 * fStack_5e4 + afStack_5e0[0] * afStack_5e0[0]);
      if (fStack_30 <= 0.0) {
        afStack_5e0[0] = 0.0;
        fStack_5e4 = 0.0;
        afStack_5e0[1] = 0.0;
      }
      else {
        fVar2 = 1.0 / fStack_30;
        fStack_5e4 = fStack_5e4 * fVar2;
        afStack_5e0[0] = afStack_5e0[0] * fVar2;
        afStack_5e0[1] = afStack_5e0[1] * fVar2;
      }
      fStack_5e4 = fStack_5e4 * _DAT_005c3c08;
      afStack_5e0[0] = afStack_5e0[0] * _DAT_005c3c08;
      afStack_5e0[1] = afStack_5e0[1] * _DAT_005c3c08;
      fStack_2b4 = fStack_2e4 + fStack_5e4;
      fStack_2b0 = afStack_2e0[0] + afStack_5e0[0];
      fStack_2ac = afStack_2e0[1] + afStack_5e0[1];
      afStack_160[2] = fStack_2b4;
      afStack_160[(uint)bVar15 * -2 + 3] = afStack_2e0[(uint)bVar15 * -2 + 0xc];
      afStack_160[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
           afStack_2e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
      if (afStack_430 + 2 != afStack_160 + 2) {
        afStack_430[2] = afStack_160[2];
        afStack_430[3] = afStack_160[3];
        fStack_420 = fStack_150;
      }
      core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,4);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
      iVar7 = 0;
      while (iVar7 < 4) {
        fStack_28 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr);
        fStack_85c = fStack_28;
        if ((fStack_28 < 0.0) || (0x3f800000 < (int)fStack_28)) break;
        iVar8 = core_actor_cpp_castToClassHash_FUN_0040c840();
        if ((iVar8 != 0) && (iVar11 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x10c))(), iVar11 == 0)
           ) {
          _DAT_01d22b48 = (CDemonActor *)0x5;
          _DAT_01d1e34c = iVar8;
          break;
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                  (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        if ((fStack_85c < 0.0) || (iVar7 = iVar7 + 1, 0x3f800000 < (int)fStack_85c)) break;
      }
      if (_DAT_01d1e34c != 0) {
        core_actor_cpp_FUN_00408bf0();
        uStack_440 = uStack_734;
        afStack_4b4[(uint)bVar15 * -2 + 0x1e] = *(float *)(&stack0xfffff8d0 + (uint)bVar15 * -8);
        afStack_4b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1f] =
             *(float *)(&stack0xfffff8d4 + (uint)bVar15 * -8 + (uint)bVar15 * -8);
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
        uStack_650 = uStack_68c;
        afStack_664[(uint)bVar15 * -2 + 6] = afStack_6d0[(uint)bVar15 * -2 + 0x12];
        afStack_664[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
             afStack_6d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13];
        if ((fStack_64c <= _DAT_005c3c10) || (0x3e860a91 < (int)fStack_64c)) goto LAB_004c15df;
      }
    }
    else {
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      core_dcamera_cpp_FUN_00449eb0(&g_CDemonCameraInstance);
      iStack_3f8 = uStack_548;
      (&fStack_3f4)[(uint)bVar15 * -2] = afStack_5a4[(uint)bVar15 * -2 + 0x18];
      (&fStack_3f4)[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_5a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19];
      core_dcamera_cpp_FUN_00449f80();
      iStack_3f8 = iStack_ec;
      (&fStack_3f4)[(uint)bVar15 * -2] = afStack_e8[(uint)bVar15 * -2];
      (&fStack_3f4)[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_e8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      afStack_3dc[5] = (float)iStack_3f8 * _DAT_005e06e4;
      fStack_3c4 = (float)(int)fStack_3f4 * _DAT_005e06e4;
      fStack_3c0 = (float)iStack_3f0 * _DAT_005e06e4;
      afStack_304[2] = g_CDemonCameraInstance.base.position.f.x;
      afStack_304[(uint)bVar15 * -2 + 3] =
           *(float *)((int)&g_CDemonCameraInstance + (uint)bVar15 * -8 + 8);
      afStack_304[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
           *(float *)((uint)bVar15 * -8 + 0x2038f58 + (uint)bVar15 * -8);
      fVar5 = fStack_3c4;
      fVar2 = afStack_3dc[5];
      fStack_194 = afStack_304[2];
      afStack_1b4[(uint)bVar15 * -2 + 9] = afStack_304[(uint)bVar15 * -2 + 3];
      afStack_1b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
           afStack_304[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      afStack_100[2] = fVar2 - fStack_194;
      afStack_100[3] = fVar5 - fStack_190;
      fStack_f0 = fStack_3c0 - fStack_18c;
      fStack_26c = fVar2 - fStack_194;
      afStack_298[(uint)bVar15 * -2 + 0xc] = afStack_100[(uint)bVar15 * -2 + 3];
      afStack_298[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
           afStack_100[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      fStack_38 = SQRT(fStack_264 * fStack_264 + fStack_26c * fStack_26c + fStack_268 * fStack_268);
      if (fStack_38 <= 0.0) {
        fStack_268 = 0.0;
        fStack_26c = 0.0;
        fStack_264 = 0.0;
      }
      else {
        fVar2 = 1.0 / fStack_38;
        fStack_26c = fStack_26c * fVar2;
        fStack_268 = fStack_268 * fVar2;
        fStack_264 = fStack_264 * fVar2;
      }
      fStack_26c = fStack_26c * _DAT_005c3c08;
      fStack_268 = fStack_268 * _DAT_005c3c08;
      fStack_264 = fStack_264 * _DAT_005c3c08;
      fStack_698 = fStack_194 + fStack_26c;
      fStack_694 = fStack_190 + fStack_268;
      fStack_690 = fStack_18c + fStack_264;
      fStack_32c = fStack_698;
      afStack_3b8[(uint)bVar15 * -2 + 0x24] = afStack_6d0[(uint)bVar15 * -2 + 0xf];
      afStack_3b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x25] =
           afStack_6d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
      if (afStack_3dc + 5 != afStack_3b8 + 0x23) {
        afStack_3dc[5] = fStack_32c;
        fStack_3c4 = fStack_328;
        fStack_3c0 = fStack_324;
      }
      core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,4);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
      core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr);
      if (&g_CDemonSetPtr->collision_impact_position != (CVector3f *)&DAT_01d22c30) {
        _DAT_01d22c30 = (g_CDemonSetPtr->collision_impact_position).x;
        _DAT_01d22c38 = (g_CDemonSetPtr->collision_impact_position).z;
        _DAT_01d22c34 = (g_CDemonSetPtr->collision_impact_position).y;
      }
      iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      if ((float *)(iVar7 + 0x20) != (float *)&DAT_01d1e328) {
        _DAT_01d1e328 = *(float *)(iVar7 + 0x20);
        _DAT_01d1e330 = *(float *)(iVar7 + 0x28);
        _DAT_01d1e32c = *(float *)(iVar7 + 0x24);
      }
    }
    param_2[3] = 1;
  }
LAB_004c15df:
  if (((((_DAT_01c5fae4 & 2) != 0) && (local_50 != 0)) && (*(int *)(local_50 + 0x20c24) != 0)) &&
     (*(int *)(*(int *)(local_50 + 0x20c24) + 0x2e0) == 7)) {
    param_2[3] = 1;
  }
  if ((_DAT_01c5fae4 & 1) == 0) {
    _DAT_01d1e358 = g_CDemonSetPtr->selected_camera_index;
  }
  if ((_DAT_01c5fae4 == 1) && (g_CDemonSetPtr->selected_camera_index == _DAT_01d1e358)) {
    _DAT_01d22c30 = 1e+30;
    core_dcamera_cpp_FUN_00449eb0(&g_CDemonCameraInstance);
    pCVar9 = pCStack_74;
    iStack_6ec = iStack_6e0;
    (&fStack_6e8)[(uint)bVar15 * -2] = (&fStack_6e8)[(uint)bVar15 * -2 + 3];
    (&fStack_6e8)[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         (&fStack_6e8)[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    if (pCVar9 == (CDemonActor *)0x0) {
      if (((local_88 < 0x20) || (local_90 + -0x20 < local_88)) ||
         ((local_4c < 0x20 || (local_ac + -0x20 < local_4c)))) {
        core_dcamera_cpp_FUN_00449eb0(&g_CDemonCameraInstance);
        iStack_614 = uStack_578;
        (&fStack_610)[(uint)bVar15 * -2] = afStack_5a4[(uint)bVar15 * -2 + 0xc];
        (&fStack_610)[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_5a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
        core_dcamera_cpp_FUN_00449f80();
        iStack_614 = iStack_230;
        (&fStack_610)[(uint)bVar15 * -2] = afStack_22c[(uint)bVar15 * -2];
        (&fStack_610)[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_22c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
        afStack_5f8[2] = (float)iStack_614 * _DAT_005e06e4;
        afStack_5f8[3] = (float)(int)fStack_610 * _DAT_005e06e4;
        fStack_5e8 = (float)iStack_60c * _DAT_005e06e4;
        core_dcamera_cpp_FUN_00449f80();
        iStack_6ec = iStack_17c;
        (&fStack_6e8)[(uint)bVar15 * -2] = afStack_178[(uint)bVar15 * -2];
        (&fStack_6e8)[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_178[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
        fStack_5b4 = (float)iStack_6ec * _DAT_005e06e4;
        fStack_5b0 = (float)(int)fStack_6e8 * _DAT_005e06e4;
        fStack_5ac = (float)iStack_6e4 * _DAT_005e06e4;
        fStack_53c = (float)iStack_6ec * _DAT_005e06e4 - afStack_5f8[2];
        fStack_538 = (float)(int)fStack_6e8 * _DAT_005e06e4 - afStack_5f8[3];
        fStack_534 = (float)iStack_6e4 * _DAT_005e06e4 - fStack_5e8;
        afStack_5a4[2] = fStack_53c;
        afStack_5a4[(uint)bVar15 * -2 + 3] = afStack_5a4[(uint)bVar15 * -2 + 0x1b];
        afStack_5a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
             afStack_5a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c];
        fVar6 = fStack_5ac;
        fVar5 = fStack_5b0;
        fVar2 = fStack_5b4;
        fStack_70 = SQRT(afStack_5a4[4] * afStack_5a4[4] + afStack_5a4[2] * afStack_5a4[2]);
        afStack_5a4[3] = 0.0;
        if (fStack_70 <= 0.0) {
          afStack_5a4[2] = 0.0;
          afStack_5a4[4] = 0.0;
        }
        else {
          fVar3 = 1.0 / fStack_70;
          afStack_5a4[2] = afStack_5a4[2] * fVar3;
          afStack_5a4[3] = fVar3 * 0.0;
          afStack_5a4[4] = afStack_5a4[4] * fVar3;
        }
        if ((iStack_b4 != 0) && ((_DAT_01c5fae4 & 2) != 0)) {
          if (_DAT_01d1e334 != 1) {
            _DAT_01d1e334 = 0;
          }
          goto LAB_004c3ec2;
        }
        afStack_664[2] = afStack_5a4[2] * local_54;
        afStack_664[3] = afStack_5a4[3] * local_54;
        fStack_654 = afStack_5a4[4] * local_54;
        fStack_284 = afStack_5a4[2] * local_54;
        afStack_298[(uint)bVar15 * -2 + 6] = afStack_664[(uint)bVar15 * -2 + 3];
        afStack_298[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
             afStack_664[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
        fStack_644 = fVar2 + fStack_284;
        fStack_640 = fVar5 + fStack_280;
        fStack_63c = fVar6 + fStack_27c;
        fStack_464 = fVar2 + fStack_284;
        afStack_4b4[(uint)bVar15 * -2 + 0x15] = afStack_664[(uint)bVar15 * -2 + 9];
        afStack_4b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16] =
             afStack_664[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
        if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x25].y_min) {
          _DAT_01d1e328 = fStack_464;
          _DAT_01d1e32c = fStack_460;
          _DAT_01d1e330 = fStack_45c;
        }
        _DAT_01d1e344 = 0.0;
        _DAT_01d1e334 = 1;
      }
      else {
        core_dcamera_cpp_FUN_00449f80();
        iStack_6ec = iStack_140;
        (&fStack_6e8)[(uint)bVar15 * -2] = afStack_13c[(uint)bVar15 * -2];
        (&fStack_6e8)[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_13c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
        fStack_404 = (float)iStack_6ec * _DAT_005e06e4;
        fStack_400 = (float)(int)fStack_6e8 * _DAT_005e06e4;
        fStack_3fc = (float)iStack_6e4 * _DAT_005e06e4;
        afStack_1b4[2] = g_CDemonCameraInstance.base.position.f.x;
        afStack_1b4[(uint)bVar15 * -2 + 3] =
             *(float *)((int)&g_CDemonCameraInstance + (uint)bVar15 * -8 + 8);
        afStack_1b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
             *(float *)((uint)bVar15 * -8 + 0x2038f58 + (uint)bVar15 * -8);
        fVar5 = fStack_400;
        fVar2 = fStack_404;
        fStack_3a4 = afStack_1b4[2];
        afStack_3b8[(uint)bVar15 * -2 + 6] = afStack_1b4[(uint)bVar15 * -2 + 3];
        afStack_3b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
             afStack_1b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
        fStack_320 = fVar2 - fStack_3a4;
        fStack_31c = fVar5 - fStack_3a0;
        fStack_318 = fStack_3fc - fStack_39c;
        fStack_38c = fVar2 - fStack_3a4;
        afStack_3b8[(uint)bVar15 * -2 + 0xc] = afStack_3b8[(uint)bVar15 * -2 + 0x27];
        afStack_3b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
             afStack_3b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x28];
        fStack_68 = SQRT(fStack_384 * fStack_384 + fStack_38c * fStack_38c + fStack_388 * fStack_388
                        );
        if (fStack_68 <= 0.0) {
          fStack_388 = 0.0;
          fStack_38c = 0.0;
          fStack_384 = 0.0;
        }
        else {
          fVar2 = 1.0 / fStack_68;
          fStack_38c = fStack_38c * fVar2;
          fStack_388 = fStack_388 * fVar2;
          fStack_384 = fStack_384 * fVar2;
        }
        fStack_38c = fStack_38c * _DAT_005c3c08;
        fStack_388 = fStack_388 * _DAT_005c3c08;
        fStack_384 = fStack_384 * _DAT_005c3c08;
        afStack_298[2] = fStack_3a4 + fStack_38c;
        afStack_298[3] = fStack_3a0 + fStack_388;
        fStack_288 = fStack_39c + fStack_384;
        fStack_35c = afStack_298[2];
        afStack_3b8[(uint)bVar15 * -2 + 0x18] = afStack_298[(uint)bVar15 * -2 + 3];
        afStack_3b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19] =
             afStack_298[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
        if (&fStack_404 != afStack_3b8 + 0x17) {
          fStack_404 = fStack_35c;
          fStack_400 = fStack_358;
          fStack_3fc = fStack_354;
        }
        core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,4);
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                  (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
        core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr);
        if ((iStack_b4 != 0) && ((_DAT_01c5fae4 & 2) != 0)) {
          if (_DAT_01d1e334 != 1) {
            _DAT_01d1e334 = 0;
          }
LAB_004c3ec2:
          _DAT_01d22c30 = 1e+30;
          goto LAB_004c3ecc;
        }
        if (_DAT_01c5fae4 != 1) goto LAB_004c3ecc;
        if (&g_CDemonSetPtr->collision_impact_position != (CVector3f *)&DAT_01d1e328) {
          _DAT_01d1e328 = (g_CDemonSetPtr->collision_impact_position).x;
          _DAT_01d1e330 = (g_CDemonSetPtr->collision_impact_position).z;
          _DAT_01d1e32c = (g_CDemonSetPtr->collision_impact_position).y;
        }
        _DAT_01d1e344 = 0.0;
        _DAT_01d1e334 = 1;
      }
LAB_004c3ed9:
      if (*(int *)(param_1 + 0xb0) == 0) {
        bVar16 = (&DAT_01c6cef0)[*(int *)(param_1 + 0x30)];
      }
      else {
        bVar16 = (&DAT_01c6cef0)[*(int *)(param_1 + 0x30)] == '\0';
      }
      param_2[2] = (uint)bVar16;
      if (param_2[2] == 0) {
        _DAT_01d1e348 = 0;
      }
      else {
        _DAT_01d1e348 = 1;
      }
    }
    else {
      if (((_DAT_01c5fae4 & 2) != 0) && (_DAT_01d1e34c == 0)) {
        this_ptr = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        _DAT_01d1e320 = 1;
        if (this_ptr[2].flames[0x14].render_corona == 0) {
          core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0(this_ptr);
          local_844 = 2.0;
        }
      }
      local_844 = local_844 - *(float *)(param_1 + 0x314);
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c840();
      iStack_a4 = iVar8;
      pCStack_a0 = (CDemonActor *)core_actor_cpp_castToClassHash_FUN_0040c840();
      pCStack_24 = pCStack_a0;
      fStack_9c = (float)core_actor_cpp_castToClassHash_FUN_0040c840();
      fStack_18 = fStack_9c;
      iStack_98 = core_actor_cpp_castToClassHash_FUN_0040c840();
      iStack_94 = core_actor_cpp_castToClassHash_FUN_0040c840();
      iStack_1c = iStack_94;
      iStack_84 = core_actor_cpp_castToClassHash_FUN_0040c840();
      iStack_20 = core_actor_cpp_castToClassHash_FUN_0040c840();
      iVar7 = iStack_84;
      fVar2 = fStack_9c;
      local_860 = 2.5;
      if (pCStack_a0 == (CDemonActor *)0x0) {
        if (iVar8 == 0) {
          if (fStack_9c == 0.0) {
            if (iStack_94 == 0) {
              if (iStack_84 == 0) {
                if (iStack_20 == 0) {
                  if (iStack_98 == 0) {
                    if ((_DAT_01c5fae4 == 1) &&
                       (&pCStack_74->location != (CLocation *)&DAT_01d1e328)) {
                      _DAT_01d1e328 = (pCStack_74->location).position.x;
                      _DAT_01d1e330 = (pCStack_74->location).position.z;
                      _DAT_01d1e32c = (pCStack_74->location).position.y;
                    }
                  }
                  else {
                    pfVar12 = (float *)(iStack_98 + 0x24 + (uint)bVar15 * -8);
                    fStack_11c = *(float *)(iStack_98 + 0x20);
                    afStack_118[(uint)bVar15 * -2] = *pfVar12;
                    afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                         pfVar12[(uint)bVar15 * -2 + 1];
                    core_actor_cpp_FUN_00408bf0();
                    afStack_118[0] = *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x24);
                    (**(code **)(*(int *)(iStack_98 + 0x154) + 0x1c))();
                    puVar13 = (uint *)&stack0xfffff80c;
                    puVar14 = (uint *)&stack0xfffff7f4;
                    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
                      *puVar14 = *puVar13;
                      puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
                      puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
                    }
                    fStack_4c0 = fStack_7fc;
                    fStack_4c4 = 0.0;
                    fStack_4bc = 0.0;
                    core_actor_cpp_FUN_00408b80();
                    fStack_260 = fStack_62c;
                    afStack_298[(uint)bVar15 * -2 + 0xf] = afStack_664[(uint)bVar15 * -2 + 0xf];
                    afStack_298[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] =
                         afStack_664[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
                    if (afStack_514 + 0x14 != afStack_298 + 0xe) {
                      fStack_4c4 = fStack_260;
                      fStack_4c0 = fStack_25c;
                      fStack_4bc = fStack_258;
                    }
                    if (&stack0x00000000 != g_CDemonLightInstance.base.camera_name + 0xa4) {
                      _DAT_01d1e328 = fStack_11c;
                      _DAT_01d1e32c = afStack_118[0];
                      _DAT_01d1e330 = afStack_118[1];
                    }
                    if ((CBloodParticle *)&stack0x00000000 != g_BloodParticles + 8) {
                      _DAT_01d22c30 = fStack_4c4;
                      _DAT_01d22c34 = fStack_4c0;
                      _DAT_01d22c38 = fStack_4bc;
                    }
                  }
                }
                else {
                  pfVar12 = (float *)(iStack_20 + 0x24 + (uint)bVar15 * -8);
                  fStack_254 = *(float *)(iStack_20 + 0x20);
                  afStack_298[(uint)bVar15 * -2 + 0x12] = *pfVar12;
                  afStack_298[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] =
                       pfVar12[(uint)bVar15 * -2 + 1];
                  core_actor_cpp_FUN_00408bf0();
                  fStack_250 = *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x24);
                  if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[4].y_min) {
                    _DAT_01d1e328 = fStack_254;
                    _DAT_01d1e330 = fStack_24c;
                    _DAT_01d1e32c = fStack_250;
                  }
                  if ((float *)(iStack_20 + 0x20) != (float *)&DAT_01d22c30) {
                    _DAT_01d22c30 = *(float *)(iStack_20 + 0x20);
                    _DAT_01d22c38 = *(float *)(iStack_20 + 0x28);
                    _DAT_01d22c34 = *(float *)(iStack_20 + 0x24);
                  }
                }
              }
              else {
                pfVar12 = (float *)(iStack_84 + 0x24 + (uint)bVar15 * -8);
                fStack_638 = *(float *)(iStack_84 + 0x20);
                afStack_664[(uint)bVar15 * -2 + 0xc] = *pfVar12;
                afStack_664[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
                     pfVar12[(uint)bVar15 * -2 + 1];
                (**(code **)(*(int *)(iVar7 + 0x154) + 0x1c))();
                puVar13 = (uint *)&stack0xfffff83c;
                puVar14 = (uint *)&stack0xfffff824;
                for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *puVar14 = *puVar13;
                  puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
                  puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
                }
                fStack_408 = fStack_7c8;
                afStack_418[2] = fVar2;
                afStack_418[3] = fVar2;
                core_actor_cpp_FUN_00408b80();
                afStack_6d0[2] = fStack_380;
                afStack_6d0[(uint)bVar15 * -2 + 3] = afStack_3b8[(uint)bVar15 * -2 + 0xf];
                afStack_6d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                     afStack_3b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
                if (afStack_418 + 2 != afStack_6d0 + 2) {
                  afStack_418[2] = afStack_6d0[2];
                  afStack_418[3] = afStack_6d0[3];
                  fStack_408 = fStack_6c0;
                }
                fStack_634 = *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x24);
                if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x42].y_max) {
                  _DAT_01d1e328 = fStack_638;
                  _DAT_01d1e330 = fStack_630;
                  _DAT_01d1e32c = fStack_634;
                }
                if (&stack0x00000000 != &g_BloodParticles[5].field_0x24) {
                  _DAT_01d22c30 = afStack_418[2];
                  _DAT_01d22c34 = afStack_418[3];
                  _DAT_01d22c38 = fStack_408;
                }
              }
            }
            else {
              pfVar12 = (float *)(iStack_94 + 0x24 + (uint)bVar15 * -8);
              fStack_47c = *(float *)(iStack_94 + 0x20);
              afStack_4b4[(uint)bVar15 * -2 + 0xf] = *pfVar12;
              afStack_4b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] =
                   pfVar12[(uint)bVar15 * -2 + 1];
              core_actor_cpp_FUN_00408bf0();
              fStack_478 = *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x24);
              if ((CRect *)&stack0x00000000 != g_CDemonLightInstance.base.rect_array + 0x27) {
                _DAT_01d1e328 = fStack_47c;
                _DAT_01d1e330 = fStack_474;
                _DAT_01d1e32c = fStack_478;
              }
              if ((float *)(iStack_1c + 0x20) != (float *)&DAT_01d22c30) {
                _DAT_01d22c30 = *(float *)(iStack_1c + 0x20);
                _DAT_01d22c38 = *(float *)(iStack_1c + 0x28);
                _DAT_01d22c34 = *(float *)(iStack_1c + 0x24);
              }
            }
          }
          else {
            pfVar12 = (float *)((int)fStack_9c + 0x24 + (uint)bVar15 * -8);
            fStack_4dc = *(float *)((int)fStack_9c + 0x20);
            afStack_514[(uint)bVar15 * -2 + 0xf] = *pfVar12;
            afStack_514[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] =
                 pfVar12[(uint)bVar15 * -2 + 1];
            core_actor_cpp_FUN_00408bf0();
            iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            uStack_398 = uStack_5a8;
            afStack_3b8[(uint)bVar15 * -2 + 9] = afStack_5a4[(uint)bVar15 * -2];
            afStack_3b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
                 afStack_5a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            fStack_4d8 = *(float *)(iVar7 + 0x24);
            if (0.0 <= fStack_390) {
              uStack_d4 = 0;
              uStack_d0 = 0;
              uStack_cc = 0x40000000;
              core_actor_cpp_FUN_00408b00();
              fStack_2c0 = fStack_4b8;
              afStack_2e0[(uint)bVar15 * -2 + 9] = afStack_4b4[(uint)bVar15 * -2];
              afStack_2e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
                   afStack_4b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
              fStack_4dc = fStack_4dc + fStack_2c0;
              fStack_4d8 = fStack_4d8 + fStack_2bc;
              fStack_4d4 = fStack_4d4 + fStack_2b8;
            }
            else {
              uStack_128 = 0;
              uStack_124 = 0;
              uStack_120 = 0xc0000000;
              core_actor_cpp_FUN_00408b00();
              fStack_1a0 = fStack_308;
              afStack_1b4[(uint)bVar15 * -2 + 6] = afStack_304[(uint)bVar15 * -2];
              afStack_1b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
                   afStack_304[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
              fStack_4dc = fStack_4dc + fStack_1a0;
              fStack_4d8 = fStack_4d8 + fStack_19c;
              fStack_4d4 = fStack_4d4 + fStack_198;
            }
            if ((CRect *)&stack0x00000000 != g_CDemonLightInstance.base.rect_array + 0x2d) {
              _DAT_01d1e328 = fStack_4dc;
              _DAT_01d1e32c = fStack_4d8;
              _DAT_01d1e330 = fStack_4d4;
            }
            if ((float *)((int)fStack_18 + 0x20) != (float *)&DAT_01d22c30) {
              _DAT_01d22c30 = *(float *)((int)fStack_18 + 0x20);
              _DAT_01d22c38 = *(float *)((int)fStack_18 + 0x28);
              _DAT_01d22c34 = *(float *)((int)fStack_18 + 0x24);
            }
          }
        }
        else if ((*(int *)(iVar8 + 0x9d8) == 0) && (*(int *)(iVar8 + 0x2d8) != 0)) {
          (**(code **)(*(int *)(iVar8 + 0x154) + 0x1c))();
          puVar13 = (uint *)&stack0xfffff854;
          puVar14 = &stack0xfffff89c;
          for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
            puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
          }
          afStack_514[2] = fStack_764 + fStack_758;
          afStack_514[3] = fStack_760 + fStack_754;
          fStack_504 = fStack_75c + fStack_750;
          fStack_41c = fStack_764 + fStack_758;
          afStack_418[(uint)bVar15 * -2] = afStack_514[(uint)bVar15 * -2 + 3];
          afStack_418[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_514[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
          afStack_3b8[2] = fStack_41c * _DAT_005c3c14;
          afStack_3b8[3] = afStack_418[0] * _DAT_005c3c14;
          fStack_3a8 = afStack_418[1] * _DAT_005c3c14;
          fStack_4f4 = fStack_41c * _DAT_005c3c14;
          afStack_514[(uint)bVar15 * -2 + 9] = afStack_3b8[(uint)bVar15 * -2 + 3];
          afStack_514[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
               afStack_3b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
          core_actor_cpp_FUN_00408b80();
          fStack_188 = fStack_74c;
          afStack_1b4[(uint)bVar15 * -2 + 0xc] = *(float *)(&stack0xfffff8b8 + (uint)bVar15 * -8);
          afStack_1b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
               *(float *)(&stack0xfffff8bc + (uint)bVar15 * -8 + (uint)bVar15 * -8);
          core_actor_cpp_FUN_00408bf0();
          uStack_5fc = uStack_368;
          afStack_5f8[(uint)bVar15 * -2] = afStack_3b8[(uint)bVar15 * -2 + 0x15];
          afStack_5f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_3b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16];
          (**(code **)(*(int *)(iVar8 + 0x154) + 0x1c))();
          puVar13 = (uint *)&stack0xfffff884;
          puVar14 = &stack0xfffff7dc;
          for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
            puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
          }
          fStack_184 = fStack_824;
          if (0.0 <= afStack_5f8[1]) {
            afStack_3dc[2] = 0.0;
            afStack_3dc[3] = 0.0;
            afStack_3dc[4] = 1.5;
            core_actor_cpp_FUN_00408b00();
            fStack_3bc = fStack_278;
            afStack_3b8[(uint)bVar15 * -2] = afStack_298[(uint)bVar15 * -2 + 9];
            afStack_3b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_298[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
            fStack_188 = fStack_188 + fStack_3bc;
            fStack_184 = fStack_184 + afStack_3b8[0];
            fStack_180 = fStack_180 + afStack_3b8[1];
          }
          else {
            afStack_118[4] = -1.5;
            afStack_118[2] = 0.0;
            afStack_118[3] = 0.0;
            core_actor_cpp_FUN_00408b00();
            fStack_71c = afStack_2e0[2];
            *(float *)((int)&stack0xfffff8e8 + (uint)bVar15 * -8) =
                 afStack_2e0[(uint)bVar15 * -2 + 3];
            *(float *)((int)&stack0xfffff8ec + (uint)bVar15 * -8 + (uint)bVar15 * -8) =
                 afStack_2e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
            fStack_188 = fStack_188 + fStack_71c;
            fStack_184 = fStack_184 + fStack_718;
            fStack_180 = fStack_180 + fStack_714;
          }
          if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.display_width) {
            _DAT_01d1e328 = fStack_188;
            _DAT_01d1e32c = fStack_184;
            _DAT_01d1e330 = fStack_180;
          }
          (**(code **)(*(int *)(iStack_a4 + 0x154) + 0x1c))();
          puVar13 = (uint *)&stack0xfffff7c4;
          puVar14 = &stack0xfffff86c;
          for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
            puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
          }
          fStack_200 = fStack_794 + fStack_788;
          afStack_1fc[0] = fStack_790 + fStack_784;
          afStack_1fc[1] = fStack_78c + fStack_780;
          fStack_458 = fStack_794 + fStack_788;
          afStack_4b4[(uint)bVar15 * -2 + 0x18] = afStack_1fc[(uint)bVar15 * -2];
          afStack_4b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19] =
               afStack_1fc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          fStack_1e8 = fStack_458 * _DAT_005c3c14;
          fStack_1e4 = fStack_454 * _DAT_005c3c14;
          fStack_1e0 = fStack_450 * _DAT_005c3c14;
          fStack_488 = fStack_458 * _DAT_005c3c14;
          afStack_4b4[(uint)bVar15 * -2 + 0xc] = afStack_1fc[(uint)bVar15 * -2 + 6];
          afStack_4b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
               afStack_1fc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
          core_actor_cpp_FUN_00408b80();
          fStack_470 = fStack_1b8;
          afStack_4b4[(uint)bVar15 * -2 + 0x12] = afStack_1b4[(uint)bVar15 * -2];
          afStack_4b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] =
               afStack_1b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          if (&stack0x00000000 != &g_BloodParticles[6].field_0x3c) {
            _DAT_01d22c30 = fStack_470;
            _DAT_01d22c34 = fStack_46c;
            _DAT_01d22c38 = fStack_468;
          }
        }
        else {
          pfVar12 = (float *)(iStack_a4 + 0x9c0 + (uint)bVar15 * -8);
          fStack_56c = *(float *)(iStack_a4 + 0x9bc);
          afStack_5a4[(uint)bVar15 * -2 + 0xf] = *pfVar12;
          afStack_5a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] = pfVar12[(uint)bVar15 * -2 + 1]
          ;
          core_actor_cpp_FUN_00408bf0();
          uStack_674 = uStack_518;
          afStack_6d0[(uint)bVar15 * -2 + 0x18] = afStack_514[(uint)bVar15 * -2];
          afStack_6d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19] =
               afStack_514[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          if (0.0 <= fStack_66c) {
            uStack_498 = 0x3fc00000;
            uStack_4a0 = 0;
            uStack_49c = 0xc0600000;
            core_actor_cpp_FUN_00408b00();
            fStack_584 = afStack_118[5];
            afStack_5a4[(uint)bVar15 * -2 + 9] = afStack_100[(uint)bVar15 * -2];
            afStack_5a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
                 afStack_100[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            fStack_56c = fStack_56c + fStack_584;
            fStack_568 = fStack_568 + fStack_580;
            fStack_564 = fStack_564 + fStack_57c;
          }
          else {
            uStack_608 = 0;
            uStack_600 = 0xbfc00000;
            uStack_604 = 0xc0600000;
            core_actor_cpp_FUN_00408b00();
            afStack_5e0[2] = fStack_29c;
            afStack_5e0[(uint)bVar15 * -2 + 3] = afStack_298[(uint)bVar15 * -2];
            afStack_5e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                 afStack_298[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            fStack_56c = fStack_56c + afStack_5e0[2];
            fStack_568 = fStack_568 + afStack_5e0[3];
            fStack_564 = fStack_564 + fStack_5d0;
          }
          if ((CRect *)&stack0x00000000 != g_CDemonLightInstance.base.rect_array + 0x36) {
            _DAT_01d1e328 = fStack_56c;
            _DAT_01d1e32c = fStack_568;
            _DAT_01d1e330 = fStack_564;
          }
          if ((float *)(iStack_a4 + 0x9bc) != (float *)&DAT_01d22c30) {
            _DAT_01d22c30 = *(float *)(iStack_a4 + 0x9bc);
            _DAT_01d22c38 = *(float *)(iStack_a4 + 0x9c4);
            _DAT_01d22c34 = *(float *)(iStack_a4 + 0x9c0);
          }
        }
      }
      else {
        iVar7 = core_actor_cpp_isOfClass_FUN_0040c790(pCStack_a0,"CEnemy");
        if (iVar7 == 0) {
          iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          pfVar12 = (float *)((int)pCStack_a0 + (uint)bVar15 * -8 + 0x24);
          fStack_560 = (pCStack_a0->location).position.x;
          afStack_5a4[(uint)bVar15 * -2 + 0x12] = *pfVar12;
          afStack_5a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] = pfVar12[(uint)bVar15 * -2 + 1]
          ;
          fStack_55c = *(float *)(iVar7 + 0x24);
          uStack_524 = 0;
          uStack_520 = 0;
          uStack_51c = 0x40000000;
          core_actor_cpp_FUN_00408b00();
          fStack_500 = fStack_4d0;
          afStack_514[(uint)bVar15 * -2 + 6] = afStack_514[(uint)bVar15 * -2 + 0x12];
          afStack_514[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
               afStack_514[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13];
          fStack_560 = fStack_560 + fStack_500;
          fStack_55c = fStack_55c + fStack_4fc;
          fStack_558 = fStack_558 + fStack_4f8;
          if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x35].x_max) {
            _DAT_01d1e328 = fStack_560;
            _DAT_01d1e32c = fStack_55c;
            _DAT_01d1e330 = fStack_558;
          }
          if (&pCStack_24->location != (CLocation *)&DAT_01d22c30) {
            _DAT_01d22c30 = (pCStack_24->location).position.x;
            _DAT_01d22c38 = (pCStack_24->location).position.z;
            _DAT_01d22c34 = (pCStack_24->location).position.y;
          }
          local_860 = 3.0;
        }
        else {
          iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
          if (iVar7 != 0) {
            local_860 = 5.0;
            (**(code **)(*(int *)(iVar7 + 0x154) + 0x14c))();
            afStack_4b4[2] = fStack_6b0;
            afStack_4b4[(uint)bVar15 * -2 + 3] = afStack_6d0[(uint)bVar15 * -2 + 9];
            afStack_4b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                 afStack_6d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
            if ((CRect *)&stack0x00000000 != g_CDemonLightInstance.base.rect_array + 0x2a) {
              _DAT_01d1e328 = afStack_4b4[2];
              _DAT_01d1e32c = afStack_4b4[3];
              _DAT_01d1e330 = fStack_4a4;
            }
            if (&stack0x00000000 != &g_BloodParticles[7].field_0x30) {
              _DAT_01d22c30 = afStack_4b4[2];
              _DAT_01d22c34 = afStack_4b4[3];
              _DAT_01d22c38 = fStack_4a4;
            }
          }
        }
      }
      if ((iStack_b4 == 0) || ((_DAT_01c5fae4 & 2) == 0)) {
        _DAT_01d1e344 = 0.0;
        _DAT_01d1e334 = 1;
        if (_DAT_01d1e34c != 0) goto LAB_004c3ec2;
LAB_004c3ecc:
        if (_DAT_01d1e334 != 0) goto LAB_004c3ed9;
      }
      else {
        _DAT_01d22c30 = 1e+30;
        _DAT_01d1e334 = 0;
      }
    }
  }
  iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  fStack_c8 = *(float *)(iVar7 + 0x20) - _DAT_01d1e328;
  afStack_c4[0] = *(float *)(iVar7 + 0x24) - _DAT_01d1e32c;
  afStack_c4[1] = *(float *)(iVar7 + 0x28) - _DAT_01d1e330;
  fStack_4e8 = fStack_c8;
  afStack_514[(uint)bVar15 * -2 + 0xc] = afStack_c4[(uint)bVar15 * -2];
  afStack_514[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
       afStack_c4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
  fStack_854 = SQRT(fStack_4e0 * fStack_4e0 + fStack_4e8 * fStack_4e8 + fStack_4e4 * fStack_4e4);
  if (((_DAT_01d1e334 == 0) || (_DAT_01d1e34c != 0)) && ((float)_DAT_005c3c18 <= _DAT_01d22c30))
  goto LAB_004c1e34;
  if (fStack_854 - fStack_854 * (float)_DAT_005c3c20 <
      ABS(_DAT_01d1e32c - *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x24))) {
    _DAT_01d1e320 = 0;
    _DAT_01d22c30 = 1e+30;
    _DAT_01d1e334 = 0;
  }
  this_ptr_00 = core_path_cpp_getPathMap_FUN_0050ced0((CLocation *)&DAT_01d1e328);
  iVar7 = core_path_cpp_CPathMap_findPathWithRetry_FUN_0050c680
                    (this_ptr_00,(CVector3f *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20),
                     &CStack_170,0);
  if (iVar7 == 0) {
    _DAT_01d1e334 = 0;
  }
  else {
    fStack_28 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0();
    fStack_850 = fStack_28;
    fVar2 = fStack_28 * _DAT_005c3c28 * (float)_DAT_005c3c30;
    fStack_868 = -local_858;
    param_2[0xb] = fVar2;
    if (fVar2 < fStack_868) {
      param_2[0xb] = ABS(fStack_28) * fStack_868 * (float)_DAT_005c3c38;
    }
    if (local_858 < (float)param_2[0xb]) {
      param_2[0xb] = ABS(fStack_28) * local_858 * (float)_DAT_005c3c38;
    }
    if (ABS((float)param_2[0xb]) < (float)_DAT_005c3c40) {
      param_2[0xb] = 0;
    }
    iVar7 = _DAT_01d1e348;
    *param_2 = 1;
    if (iVar7 != 0) {
      param_2[2] = 1;
    }
  }
  if (((fStack_854 < local_860 * _DAT_005c3c14) && (_DAT_01d1e348 == 0)) ||
     ((fStack_854 < local_860 * (float)_DAT_005c3c48 && (_DAT_01d1e348 == 1)))) {
    *param_2 = 0;
    if ((float)_DAT_005c3c18 <= _DAT_01d22c30) {
      _DAT_01d1e334 = 0;
    }
    else {
      core_actor_cpp_FUN_00408bf0();
      fStack_6bc = fStack_554;
      afStack_6d0[(uint)bVar15 * -2 + 6] = afStack_5a4[(uint)bVar15 * -2 + 0x15];
      afStack_6d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
           afStack_5a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16];
      if (local_80 < fStack_6bc) {
        param_2[2] = 0;
        param_2[10] = 0x3e4ccccd;
      }
      if (fStack_6bc < -local_80) {
        param_2[2] = 0;
        param_2[10] = 0xbe4ccccd;
      }
      if (local_80 < fStack_6b4) {
        param_2[2] = 0;
        *param_2 = 1;
      }
      if (fStack_6b4 < -local_80) {
        param_2[2] = 0;
        param_2[1] = 1;
      }
      iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_6a4 = _DAT_01d22c30 - *(float *)(iVar7 + 0x20);
      fStack_6a0 = _DAT_01d22c34 - *(float *)(iVar7 + 0x24);
      fStack_69c = _DAT_01d22c38 - *(float *)(iVar7 + 0x28);
      fStack_728 = fStack_6a4;
      *(float *)(&stack0xfffff8dc + (uint)bVar15 * -8) = afStack_6d0[(uint)bVar15 * -2 + 0xc];
      *(float *)(&stack0xfffff8e0 + (uint)bVar15 * -8 + (uint)bVar15 * -8) =
           afStack_6d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
      uStack_350 = uStack_704;
      afStack_3b8[(uint)bVar15 * -2 + 0x1b] = *(float *)(&stack0xfffff900 + (uint)bVar15 * -8);
      afStack_3b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c] =
           *(float *)(&stack0xfffff904 + (uint)bVar15 * -8 + (uint)bVar15 * -8);
      fStack_28 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0();
      fStack_84c = fStack_28;
      fVar2 = fStack_28 * _DAT_005c3c28 * (float)_DAT_005c3c30;
      fStack_840 = -local_858;
      param_2[0xb] = fVar2;
      if (fVar2 < fStack_840) {
        param_2[0xb] = ABS(fStack_28) * fStack_840 * (float)_DAT_005c3c38;
      }
      if (local_858 < (float)param_2[0xb]) {
        param_2[0xb] = ABS(fStack_28) * local_858 * (float)_DAT_005c3c38;
      }
      if (ABS((float)param_2[0xb]) < (float)_DAT_005c3c40) {
        *param_2 = 0;
        param_2[0xb] = 0;
        _DAT_01d1e334 = 0;
        _DAT_01d22c30 = 1e+30;
      }
    }
    if (((_DAT_01d1e320 != 0) && ((float)_DAT_005c3c18 < _DAT_01d22c30)) &&
       ((_DAT_01d1e320 = 0, iStack_b4 == 0 && (local_844 <= 0.0)))) {
      param_2[3] = 1;
    }
  }
  iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  fStack_5cc = _DAT_01d1e338 - *(float *)(iVar7 + 0x20);
  fStack_5c8 = _DAT_01d1e33c - *(float *)(iVar7 + 0x24);
  fStack_5c4 = _DAT_01d1e340 - *(float *)(iVar7 + 0x28);
  fStack_14c = fStack_5cc;
  afStack_160[(uint)bVar15 * -2 + 6] = afStack_5e0[(uint)bVar15 * -2 + 6];
  afStack_160[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
       afStack_5e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
  fStack_48 = SQRT(fStack_144 * fStack_144 + fStack_14c * fStack_14c + fStack_148 * fStack_148);
  fStack_58 = fStack_48;
  if (0.0 < *(float *)(param_1 + 0x314)) {
    fStack_58 = fStack_48 / *(float *)(param_1 + 0x314);
  }
  if (_DAT_005c3c50 <= fStack_58) {
    _DAT_01d1e344 = 0.0;
  }
  else {
    _DAT_01d1e344 = *(float *)(param_1 + 0x314) + _DAT_01d1e344;
    if (((0x3effffff < (int)_DAT_01d1e344) && (_DAT_01d1e334 = 0, _DAT_01d1e320 != 0)) &&
       (_DAT_01d1e320 = 0, iStack_b4 == 0)) {
      param_2[3] = 1;
    }
  }
  if ((_DAT_01d1e334 != 0) || (_DAT_01d1e350 == (CDemonActor *)0x0)) goto LAB_004c1e34;
  iVar8 = core_actor_cpp_castToClassHash_FUN_0040c840();
  iVar7 = _DAT_01d5ba14;
  if (iVar8 == 0) {
    iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
    if ((iVar7 == 0) ||
       (iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840(), *(int *)(iVar7 + 0x9d8) != 0)) {
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c840();
      iVar7 = _DAT_01d5ba14;
      if (iVar8 == 0) {
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b68) = _DAT_01d1e354;
        *(CDemonActor **)(*(int *)(iVar7 * 4 + 0x1d5ba04) + 0x20b6c) = _DAT_01d1e350;
        *(CDemonActor **)(*(int *)(iVar7 * 4 + 0x1d5ba04) + 0x20b70) = _DAT_01d1e350;
        *(uint *)(*(int *)(iVar7 * 4 + 0x1d5ba04) + 0x20b7c) = 0;
        iVar7 = *(int *)(iVar7 * 4 + 0x1d5ba04);
        goto LAB_004c46c3;
      }
      this_ptr_01 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c840();
      iVar8 = core_door_cpp_CDoor_getMoveType_FUN_00465380
                        (this_ptr_01,*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
      iVar7 = _DAT_01d5ba14;
      if (iVar8 != 0) {
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b68) = _DAT_01d1e354;
        pCVar9 = _DAT_01d1e350;
        *(CDemonActor **)(*(int *)(iVar7 * 4 + 0x1d5ba04) + 0x20b6c) = _DAT_01d1e350;
        *(CDemonActor **)(*(int *)(iVar7 * 4 + 0x1d5ba04) + 0x20b70) = pCVar9;
        *(uint *)(*(int *)(iVar7 * 4 + 0x1d5ba04) + 0x20b7c) = 0;
        *(uint *)(*(int *)(iVar7 * 4 + 0x1d5ba04) + 0x20b78) = 1;
        iVar7 = core_door_cpp_CDoor_getMoveType_FUN_00465380
                          (this_ptr_01,*(CDemonActor **)(iVar7 * 4 + 0x1d5ba04));
        *(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b74) = iVar7;
      }
    }
    else {
      core_hero_cpp_FUN_004d2cf0();
    }
  }
  else {
    *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b68) = _DAT_01d1e354;
    *(CDemonActor **)(*(int *)(iVar7 * 4 + 0x1d5ba04) + 0x20b6c) = _DAT_01d1e350;
    iVar8 = core_actor_cpp_castToClassHash_FUN_0040c840();
    iVar7 = _DAT_01d5ba14;
    *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b70) =
         *(uint *)(iVar8 + 0x2fc);
    *(uint *)(*(int *)(iVar7 * 4 + 0x1d5ba04) + 0x20b7c) = 0;
    iVar7 = *(int *)(iVar7 * 4 + 0x1d5ba04);
LAB_004c46c3:
    *(uint *)(iVar7 + 0x20b78) = 1;
  }
  _DAT_01d1e350 = (CDemonActor *)0x0;
  _DAT_01d1e354 = 0;
  param_2[4] = 1;
LAB_004c1e34:
  if (_DAT_01d1e34c != 0) {
    iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    fStack_344 = *(float *)(_DAT_01d1e34c + 0x20) - *(float *)(iVar7 + 0x20);
    fStack_340 = *(float *)(_DAT_01d1e34c + 0x24) - *(float *)(iVar7 + 0x24);
    fStack_33c = *(float *)(_DAT_01d1e34c + 0x28) - *(float *)(iVar7 + 0x28);
    fStack_3e0 = fStack_344;
    afStack_3dc[(uint)bVar15 * -2] = afStack_3b8[(uint)bVar15 * -2 + 0x1e];
    afStack_3dc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_3b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1f];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
    uStack_710 = uStack_338;
    *(float *)(&stack0xfffff8f4 + (uint)bVar15 * -8) = afStack_3b8[(uint)bVar15 * -2 + 0x21];
    *(float *)(&stack0xfffff8f8 + (uint)bVar15 * -8 + (uint)bVar15 * -8) =
         afStack_3b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x22];
    fStack_848 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0();
    if ((float)_DAT_005c3c58 < ABS(fStack_848)) {
      _DAT_01d1e344 = -1.0;
      param_2[9] = 1;
    }
    fVar2 = fStack_848 * _DAT_005c3c28 * (float)_DAT_005c3c30;
    fStack_864 = -local_858;
    param_2[0xb] = fVar2;
    if (fVar2 < fStack_864) {
      param_2[0xb] = ABS(fStack_848) * fStack_864 * (float)_DAT_005c3c38;
    }
    if (local_858 < (float)param_2[0xb]) {
      param_2[0xb] = ABS(fStack_848) * local_858 * (float)_DAT_005c3c38;
    }
    if (ABS((float)param_2[0xb]) < (float)_DAT_005c3c40) {
      param_2[0xb] = 0;
    }
    fStack_28 = fStack_848;
    if (_DAT_01d1e334 != 0) {
      core_actor_cpp_FUN_00408bf0();
      fStack_44c = afStack_1fc[2];
      afStack_4b4[(uint)bVar15 * -2 + 0x1b] = afStack_1fc[(uint)bVar15 * -2 + 3];
      afStack_4b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c] =
           afStack_1fc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      if (local_860 < fStack_44c) {
        param_2[2] = 1;
        param_2[10] = 0x3f800000;
      }
      if (fStack_44c < -local_860) {
        param_2[2] = 1;
        param_2[10] = 0xbf800000;
      }
      if (local_860 < fStack_444) {
        param_2[2] = 1;
        *param_2 = 1;
      }
      if (fStack_444 < -local_860) {
        param_2[2] = 1;
        param_2[1] = 1;
      }
    }
    iVar7 = (**(code **)(*(int *)(_DAT_01d1e34c + 0x154) + 0x10c))();
    if (iVar7 != 0) {
      _DAT_01d1e34c = 0;
    }
  }
  _DAT_01d1e324 = _DAT_01c5fae4;
  iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  if ((float *)(iVar7 + 0x20) != (float *)&DAT_01d1e338) {
    _DAT_01d1e338 = *(float *)(iVar7 + 0x20);
    _DAT_01d1e340 = *(float *)(iVar7 + 0x28);
    _DAT_01d1e33c = *(float *)(iVar7 + 0x24);
  }
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  return;
}
