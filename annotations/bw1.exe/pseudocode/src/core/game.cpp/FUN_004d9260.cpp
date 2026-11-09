// Name: core_game.cpp_FUN_004d9260
// Address: 004d9260
// Address Range: [[004d9260, 004dbff8]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004d9260(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004d9260(int param_1,uint *param_2)

{
  CCharacter *this_ptr;
  CDemonActor *actor;
  CDemonActor *pCVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  CPathMap *this_ptr_00;
  int iVar9;
  float *pfVar10;
  uint *puVar11;
  uint *puVar12;
  byte bVar13;
  byte bVar14;
  float afStackY_158c [943];
  CDemonSet *pCVar15;
  float local_6c0;
  float fStack_6bc;
  float fStack_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float fStack_6a8;
  float local_6a4;
  float local_6a0;
  float fStack_69c;
  float fStack_698;
  float fStack_680;
  float fStack_66c;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  float fStack_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  float fStack_5f8;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5a4;
  float fStack_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float fStack_588;
  float fStack_584;
  uint uStack_580;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  float fStack_568;
  float fStack_564;
  float fStack_560;
  uint uStack_55c;
  float fStack_550;
  uint uStack_544;
  uint uStack_540;
  uint uStack_53c;
  float fStack_52c;
  float fStack_520;
  int iStack_514;
  float afStack_510 [4];
  float fStack_500;
  float fStack_4fc;
  float afStack_4f8 [2];
  int iStack_4f0;
  float fStack_4ec;
  int iStack_4e8;
  uint uStack_4e4;
  int iStack_4d8;
  int iStack_4d4;
  int iStack_4d0;
  uint uStack_4cc;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float afStack_4b0 [6];
  float afStack_498 [5];
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  int iStack_460;
  float fStack_45c;
  int iStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  uint uStack_448;
  float afStack_444 [4];
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  uint uStack_418;
  int iStack_40c;
  float fStack_408;
  int iStack_404;
  float fStack_400;
  float afStack_3fc [11];
  float fStack_3d0;
  float afStack_3cc [4];
  float fStack_3bc;
  uint uStack_3b8;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  uint uStack_3a0;
  uint uStack_39c;
  uint uStack_398;
  float fStack_394;
  float afStack_390 [5];
  uint uStack_37c;
  uint uStack_378;
  uint uStack_374;
  float fStack_370;
  float afStack_36c [4];
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  float afStack_33c [8];
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  uint uStack_310;
  float afStack_30c [5];
  int iStack_2f8;
  float afStack_2f4 [2];
  int iStack_2ec;
  float fStack_2e0;
  float afStack_2dc [4];
  float fStack_2cc;
  uint uStack_2c8;
  float fStack_2bc;
  uint uStack_2b0;
  uint uStack_2ac;
  uint uStack_2a8;
  uint uStack_2a4;
  float afStack_2a0 [4];
  float fStack_290;
  int iStack_28c;
  float fStack_288;
  int iStack_284;
  float fStack_280;
  float afStack_27c [4];
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  int iStack_250;
  float afStack_24c [4];
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  uint uStack_220;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  uint uStack_1fc;
  float fStack_1f0;
  float fStack_1e4;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  uint uStack_19c;
  uint uStack_190;
  int iStack_184;
  float afStack_180 [5];
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  uint uStack_154;
  float fStack_148;
  float fStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  CVector3f CStack_130;
  float fStack_124;
  float afStack_120 [5];
  uint uStack_10c;
  float fStack_104;
  int iStack_100;
  float afStack_fc [5];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  int iStack_dc;
  float afStack_d8 [6];
  float afStack_c0 [4];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  uint uStack_94;
  int iStack_78;
  float fStack_74;
  CDemonActor *pCStack_70;
  int iStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float local_5c;
  float local_58;
  int iStack_54;
  CDemonActor *pCStack_50;
  int iStack_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  CDemonActor *pCStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  
  bVar13 = 0;
  if ((DAT_01ccc3e0 & 1) == 0) {
    DAT_01ccc3e0 = DAT_01ccc3e0 | 1;
  }
  local_6a0 = 0.125;
  if ((DAT_01ccc3e0 & 2) == 0) {
    DAT_01ccc3e0 = DAT_01ccc3e0 | 2;
  }
  local_30 = _DAT_01c4353c;
  local_2c = _DAT_01c43540;
  local_6a4 = 0.0;
  local_38 = DAT_0061b498;
  local_5c = 8.0;
  local_34 = DAT_0061b49c;
  if (0x1e0 < DAT_0061b49c) {
    local_30 = (_DAT_01c4353c * 0x1e0) / DAT_0061b49c;
    local_2c = (_DAT_01c43540 * 0x1e0) / DAT_0061b49c;
    local_38 = 0x280;
    local_34 = 0x1e0;
  }
  if (*(int *)(param_1 + 0x2a8) != 0) {
    local_34 = 0xf0;
    local_38 = 0x140;
  }
  if (local_30 < 2) {
    local_30 = 2;
  }
  if (local_38 + -2 < local_30) {
    local_30 = local_38 + -2;
  }
  if (local_2c < 2) {
    local_2c = 2;
  }
  if (local_34 + -2 < local_2c) {
    local_2c = local_34 + -2;
  }
  local_6c0 = 2.0;
  local_58 = 0.2;
  memset(param_2,0,0x30);
  if ((&DAT_01ccff98)[*(int *)(param_1 + 0x4c)] == (&DAT_01c50950)[*(int *)(param_1 + 0x4c)]) {
    param_2[4] = 0;
  }
  else {
    param_2[4] = (uint)(byte)(&DAT_01c50950)[*(int *)(param_1 + 0x4c)];
  }
  if ((&DAT_01ccff98)[*(int *)(param_1 + 0x50)] == (&DAT_01c50950)[*(int *)(param_1 + 0x50)]) {
    param_2[5] = 0;
  }
  else {
    param_2[5] = (uint)(byte)(&DAT_01c50950)[*(int *)(param_1 + 0x50)];
  }
  if ((&DAT_01ccff98)[*(int *)(param_1 + 0x68)] == (&DAT_01c50950)[*(int *)(param_1 + 0x68)]) {
    param_2[6] = 0;
  }
  else {
    param_2[6] = (uint)(byte)(&DAT_01c50950)[*(int *)(param_1 + 0x68)];
  }
  iVar7 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar7 != 0) {
    core_inv_cpp_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               5,1);
  }
  iVar7 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar7 != 0) {
    core_inv_cpp_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               5,-1);
  }
  iVar7 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar7 != 0) {
    core_inv_cpp_FUN_004f8ec0((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),1);
  }
  iVar7 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar7 != 0) {
    core_inv_cpp_FUN_004f8ec0((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),-1);
  }
  iVar7 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar7 != 0) {
    core_inv_cpp_FUN_004f8fe0((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),1);
  }
  iVar7 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar7 != 0) {
    core_inv_cpp_FUN_004fc370((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8));
  }
  iVar7 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar7 != 0) {
    core_inv_cpp_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               0,1);
  }
  iVar7 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar7 != 0) {
    core_inv_cpp_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               1,1);
  }
  iVar7 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar7 != 0) {
    core_inv_cpp_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               2,1);
  }
  iVar7 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar7 != 0) {
    core_inv_cpp_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               4,1);
  }
  iVar7 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar7 != 0) {
    core_inv_cpp_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               3,1);
  }
  iVar7 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar7 != 0) {
    (**(code **)(*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x154) + 0x150))();
  }
  if ((_DAT_01cd0c94 != 0) ||
     (iVar7 = core_script_cpp_CScript_getLetterboxHeight_FUN_00543950(g_CScriptPtr), 2 < iVar7)) {
    _DAT_01cd0c94 = 0;
    _DAT_01ccc3c4 = 0;
    _DAT_01ccc3b4 = 0;
    _DAT_01c43544 = 0;
    _DAT_01ccc3dc = 0;
    sound_sndmain_cpp_FUN_00573b00();
    _DAT_01cd0c28 = 1e+30;
  }
  if ((int)_DAT_01cd0b40 < 0) {
    _DAT_01c43544 = 0;
    _DAT_01ccc3c4 = 0;
    _DAT_01ccc3dc = 0;
    _DAT_01cd0c28 = 1e+30;
    _DAT_01ccc3b4 = 0;
  }
  iStack_40 = (**(code **)(*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x154) + 0x148))();
  if (*(int *)(param_1 + 0x25c) != 0) {
    if ((_DAT_01c43544 & 1) != 0) {
      if ((float10)0 < (float10)(local_2c - local_38 / 2) / (float10)(local_34 / 2)) {
        param_2[1] = 1;
      }
      else {
        *param_2 = 1;
      }
      if (*(int *)(param_1 + 0xac) == 0) {
        bVar13 = (&DAT_01c50950)[*(int *)(param_1 + 0x30)];
      }
      else {
        bVar13 = (&DAT_01c50950)[*(int *)(param_1 + 0x30)] == '\0';
      }
      param_2[2] = (uint)bVar13;
    }
    fVar3 = (float)(local_30 - local_38 / 2) / (float)(local_38 / 2);
    param_2[10] = fVar3;
    uVar4 = _DAT_01c43544;
    param_2[10] = fVar3 * (float)param_2[10] * (float)param_2[10] * _DAT_005e3600;
    if ((uVar4 & 2) != 0) {
      param_2[3] = 1;
      return;
    }
    return;
  }
  if (0.0 <= _DAT_0061d954) {
    _DAT_0061d954 = _DAT_0061d954 - *(float *)&g_CGamePtr->field_0x294;
  }
  else {
    _DAT_0061d954 = 0.25;
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    core_dcamera_cpp_FUN_0044dd70(&g_CDemonCameraInstance);
    iStack_28c = uStack_1fc;
    (&fStack_288)[(uint)bVar13 * -2] = afStack_24c[(uint)bVar13 * -2 + 0x15];
    (&fStack_288)[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
    core_dcamera_cpp_FUN_0044de40();
    iStack_28c = iStack_dc;
    (&fStack_288)[(uint)bVar13 * -2] = afStack_d8[(uint)bVar13 * -2];
    (&fStack_288)[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_d8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    fStack_34c = (float)iStack_28c * _DAT_00600f74;
    fStack_348 = (float)(int)fStack_288 * _DAT_00600f74;
    fStack_344 = (float)iStack_284 * _DAT_00600f74;
    iVar7 = 4;
    afStack_180[2] = (float)g_CDemonCameraInstance._4_4_;
    afStack_180[(uint)bVar13 * -2 + 3] =
         *(float *)((int)&g_CDemonCameraInstance + (uint)bVar13 * -8 + 8);
    afStack_180[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         *(float *)((uint)bVar13 * -8 + 0x1fe37f8 + (uint)bVar13 * -8);
    uStack_19c = afStack_180[2];
    afStack_24c[(uint)bVar13 * -2 + 0x2d] = afStack_180[(uint)bVar13 * -2 + 3];
    pCVar15 = g_CDemonSetPtr;
    afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2e] =
         afStack_180[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(pCVar15,iVar7);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
              (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4));
    _DAT_01cd0c24 = (CDemonActor *)0x0;
    iVar7 = 0;
    while (pCVar1 = _DAT_01cd0c24, iVar7 < 4) {
      fStack_18 = (float)core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr);
      fStack_20 = fStack_18;
      pCVar1 = _DAT_01cd0c24;
      if ((fStack_18 < 0.0) || (0x3f800000 < (int)fStack_18)) break;
      actor = *(CDemonActor **)&g_CDemonSetPtr->field_0x14d144;
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600();
      if (iVar8 != 0) {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600();
        pCVar1 = _DAT_01cd0c24;
        if ((*(int *)(iVar7 + 0x9d8) != 0) && (*(int *)(iVar7 + 0x2e0) == 0)) {
          _DAT_01cd0c24 = actor;
          *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1ff60) = 3;
          pCVar1 = _DAT_01cd0c24;
        }
        break;
      }
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600();
      if ((iVar8 != 0) &&
         (iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600(), *(int *)(iVar8 + 0x314) != 0)) {
        _DAT_01cd0c24 = actor;
        *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1ff60) = 4;
        pCVar1 = _DAT_01cd0c24;
        break;
      }
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600();
      pCVar1 = actor;
      if (iVar8 != 0) break;
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600();
      if (iVar8 != 0) {
        _DAT_01cd0c24 = actor;
        *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1ff60) = 7;
        pCVar1 = _DAT_01cd0c24;
        break;
      }
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600();
      if ((((iVar8 != 0) || (iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600(), iVar8 != 0)) ||
          ((iVar9 = core_actor_cpp_castToClassHash_FUN_0040c600(), iVar8 = _DAT_01d06ab4, iVar9 != 0
           && (iVar9 = core_actor_cpp_castToClassHash_FUN_0040c600(),
              iVar9 != *(int *)(iVar8 * 4 + 0x1d06aa4))))) ||
         (((iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600(), iVar8 != 0 ||
           (core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,actor),
           pCVar1 = _DAT_01cd0c24, fStack_20 < 0.0)) ||
          (iVar7 = iVar7 + 1, 0x3f800000 < (int)fStack_20)))) break;
    }
    _DAT_01cd0c24 = pCVar1;
    iVar7 = _DAT_01d06ab4;
    pCVar1 = _DAT_01cd0c24;
    if (_DAT_01cd0c24 != (CDemonActor *)0x0) {
      *(CDemonActor **)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1ff64) = _DAT_01cd0c24;
      *(CDemonActor **)(*(int *)(iVar7 * 4 + 0x1d06aa4) + 0x1ff68) = pCVar1;
      *(uint *)(*(int *)(iVar7 * 4 + 0x1d06aa4) + 0x1ff70) = 0;
    }
  }
  if (local_30 < 0x20) {
    _DAT_01cd0b40 = (CDemonActor *)0x3;
  }
  else if (local_38 + -0x20 < local_30) {
    _DAT_01cd0b40 = (CDemonActor *)0x4;
  }
  else if (local_2c < 0x20) {
    _DAT_01cd0b40 = (CDemonActor *)0x1;
  }
  else if (local_34 + -0x20 < local_2c) {
    _DAT_01cd0b40 = (CDemonActor *)0x2;
  }
  else if (_DAT_01cd0c24 == (CDemonActor *)0x0) {
    _DAT_01cd0b40 = _DAT_01cd0c24;
    if (_DAT_01ccc3dc != 0) {
      _DAT_01cd0b40 = (CDemonActor *)0x7;
    }
  }
  else {
    iVar7 = core_actor_cpp_FUN_0040c550(_DAT_01cd0c24,"CEnemy");
    if (iVar7 == 0) {
      _DAT_01cd0b40 = (CDemonActor *)0x5;
    }
    else {
      _DAT_01cd0b40 = (CDemonActor *)0x6;
    }
  }
  pCStack_28 = (CDemonActor *)0x0;
  if ((_DAT_01ccc3b4 == 0) && ((_DAT_01c43544 == 1 || ((_DAT_01c43544 & 2) != 0)))) {
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    core_dcamera_cpp_FUN_0044dd70(&g_CDemonCameraInstance);
    iStack_4f0 = (int)afStack_33c[5];
    (&fStack_4ec)[(uint)bVar13 * -2] = afStack_33c[(uint)bVar13 * -2 + 6];
    (&fStack_4ec)[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_33c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
    core_dcamera_cpp_FUN_0044de40();
    iStack_4f0 = iStack_100;
    (&fStack_4ec)[(uint)bVar13 * -2] = afStack_fc[(uint)bVar13 * -2];
    (&fStack_4ec)[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    fStack_358 = (float)iStack_4f0 * _DAT_00600f74;
    fStack_354 = (float)(int)fStack_4ec * _DAT_00600f74;
    fStack_350 = (float)iStack_4e8 * _DAT_00600f74;
    iVar7 = 4;
    uStack_580 = g_CDemonCameraInstance._4_4_;
    *(uint *)(&stack0xfffffa84 + (uint)bVar13 * -8) =
         *(uint *)((int)&g_CDemonCameraInstance + (uint)bVar13 * -8 + 8);
    *(uint *)(&stack0xfffffa88 + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
         *(uint *)((uint)bVar13 * -8 + 0x1fe37f8 + (uint)bVar13 * -8);
    uStack_4cc = uStack_580;
    (&fStack_4ec)[(uint)bVar13 * -2 + 9] = *(float *)(&stack0xfffffa84 + (uint)bVar13 * -8);
    pCVar15 = g_CDemonSetPtr;
    (&fStack_4ec)[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
         *(float *)(&stack0xfffffa88 + (uint)bVar13 * -8 + (uint)bVar13 * -8);
    core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(pCVar15,iVar7);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
              (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4));
    iVar7 = 0;
    while (iVar7 < 4) {
      fStack_18 = (float)core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr);
      fStack_24 = fStack_18;
      if ((fStack_18 < 0.0) || (0x3f800000 < (int)fStack_18)) break;
      pCVar1 = *(CDemonActor **)&g_CDemonSetPtr->field_0x14d144;
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600();
      if (iVar8 != 0) {
        pCStack_28 = pCVar1;
        break;
      }
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600();
      if ((iVar8 != 0) &&
         (iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600(), *(int *)(iVar8 + 0x314) != 0)) {
        pCStack_28 = pCVar1;
        break;
      }
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600();
      if (iVar8 != 0) {
        pCStack_28 = pCVar1;
        break;
      }
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600();
      if (iVar8 != 0) {
        pCStack_28 = pCVar1;
        break;
      }
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600();
      if (iVar8 != 0) {
        pCStack_28 = pCVar1;
        break;
      }
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600();
      if (iVar8 != 0) {
        pCStack_28 = pCVar1;
        break;
      }
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600();
      if (iVar8 != 0) {
        pCStack_28 = pCVar1;
        break;
      }
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600();
      if (iVar8 != 0) {
        pCStack_28 = pCVar1;
        break;
      }
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCVar1);
      if ((fStack_24 < 0.0) || (iVar7 = iVar7 + 1, 0x3f800000 < (int)fStack_24)) break;
    }
  }
  if ((iStack_40 == 0) || ((_DAT_01c43544 & 2) == 0)) {
    if (iStack_40 == 0) {
      _DAT_01ccc3dc = iStack_40;
    }
  }
  else {
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    core_dcamera_cpp_FUN_0044dd70(&g_CDemonCameraInstance);
    iStack_40c = uStack_190;
    (&fStack_408)[(uint)bVar13 * -2] = afStack_24c[(uint)bVar13 * -2 + 0x30];
    (&fStack_408)[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x31];
    core_dcamera_cpp_FUN_0044de40();
    iStack_40c = iStack_514;
    (&fStack_408)[(uint)bVar13 * -2] = afStack_510[(uint)bVar13 * -2];
    (&fStack_408)[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_510[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    fStack_25c = (float)iStack_40c * _DAT_00600f74;
    fStack_258 = (float)(int)fStack_408 * _DAT_00600f74;
    fStack_254 = (float)iStack_404 * _DAT_00600f74;
    iVar7 = 4;
    afStack_fc[2] = (float)g_CDemonCameraInstance._4_4_;
    afStack_fc[(uint)bVar13 * -2 + 3] =
         *(float *)((int)&g_CDemonCameraInstance + (uint)bVar13 * -8 + 8);
    afStack_fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         *(float *)((uint)bVar13 * -8 + 0x1fe37f8 + (uint)bVar13 * -8);
    uStack_94 = afStack_fc[2];
    afStack_c0[(uint)bVar13 * -2 + 0xc] = afStack_fc[(uint)bVar13 * -2 + 3];
    pCVar15 = g_CDemonSetPtr;
    afStack_c0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
         afStack_fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(pCVar15,iVar7);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
              (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4));
    iVar7 = 0;
    while (iVar7 < 4) {
      fStack_18 = (float)core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr);
      fStack_698 = fStack_18;
      if ((fStack_18 < 0.0) || (0x3f800000 < (int)fStack_18)) break;
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600();
      if (iVar8 != 0) {
        _DAT_01cd0b40 = (CDemonActor *)0x5;
        _DAT_01ccc3dc = iVar8;
        break;
      }
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&g_CDemonSetPtr->field_0x14d144);
      if ((fStack_698 < 0.0) || (iVar7 = iVar7 + 1, 0x3f800000 < (int)fStack_698)) break;
    }
    if (_DAT_01ccc3dc != 0) {
      core_actor_cpp_FUN_00408bb0();
      uStack_448 = uStack_4e4;
      afStack_444[(uint)bVar13 * -2] = (&fStack_4ec)[(uint)bVar13 * -2 + 3];
      afStack_444[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           (&fStack_4ec)[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      if (afStack_444[1] < 0.0) goto LAB_004d9de9;
    }
    param_2[3] = 1;
  }
LAB_004d9de9:
  iVar7 = local_30;
  if (((_DAT_01ccc3b4 != 0) || (_DAT_01c43544 != 1)) && ((_DAT_01c43544 & 2) == 0))
  goto LAB_004da080;
  _DAT_01cd0c28 = 1e+30;
  core_dcamera_cpp_FUN_0044dd70(&g_CDemonCameraInstance);
  iStack_4d8 = iStack_184;
  (&fStack_4ec)[(uint)bVar13 * -2 + 6] = afStack_180[(uint)bVar13 * -2];
  (&fStack_4ec)[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
       afStack_180[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
  if (pCStack_28 == (CDemonActor *)0x0) {
    if (((iVar7 < 0x20) || (local_38 + -0x20 < iVar7)) ||
       ((local_2c < 0x20 || (local_34 + -0x20 < local_2c)))) {
      core_dcamera_cpp_FUN_0044dd70(&g_CDemonCameraInstance);
      iStack_460 = uStack_310;
      (&fStack_45c)[(uint)bVar13 * -2] = afStack_30c[(uint)bVar13 * -2];
      (&fStack_45c)[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_30c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      core_dcamera_cpp_FUN_0044de40();
      iStack_460 = iStack_2ec;
      (&fStack_45c)[(uint)bVar13 * -2] = afStack_2f4[(uint)bVar13 * -2 + 3];
      (&fStack_45c)[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_2f4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      afStack_510[2] = (float)iStack_460 * _DAT_00600f74;
      afStack_510[3] = (float)(int)fStack_45c * _DAT_00600f74;
      fStack_500 = (float)iStack_458 * _DAT_00600f74;
      core_dcamera_cpp_FUN_0044de40();
      iStack_4d8 = iStack_2f8;
      (&fStack_4ec)[(uint)bVar13 * -2 + 6] = afStack_2f4[(uint)bVar13 * -2];
      (&fStack_4ec)[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
           afStack_2f4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      fStack_31c = (float)iStack_4d8 * _DAT_00600f74;
      fStack_318 = (float)iStack_4d4 * _DAT_00600f74;
      fStack_314 = (float)iStack_4d0 * _DAT_00600f74;
      fStack_238 = (float)iStack_4d8 * _DAT_00600f74 - afStack_510[2];
      fStack_234 = (float)iStack_4d4 * _DAT_00600f74 - afStack_510[3];
      fStack_230 = (float)iStack_4d0 * _DAT_00600f74 - fStack_500;
      afStack_33c[2] = fStack_238;
      afStack_33c[(uint)bVar13 * -2 + 3] = afStack_24c[(uint)bVar13 * -2 + 6];
      fVar6 = fStack_314;
      fVar5 = fStack_318;
      fVar3 = fStack_31c;
      afStack_33c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
      fStack_64 = SQRT(afStack_33c[4] * afStack_33c[4] + afStack_33c[2] * afStack_33c[2]);
      afStack_33c[3] = 0.0;
      if (fStack_64 <= 0.0) {
        afStack_33c[2] = 0.0;
        afStack_33c[4] = 0.0;
      }
      else {
        fVar2 = 1.0 / fStack_64;
        afStack_33c[2] = afStack_33c[2] * fVar2;
        afStack_33c[3] = fVar2 * 0.0;
        afStack_33c[4] = afStack_33c[4] * fVar2;
      }
      if ((iStack_40 != 0) && ((_DAT_01c43544 & 2) != 0)) {
        if (_DAT_01ccc3c4 != 1) {
          _DAT_01ccc3c4 = 0;
        }
        goto LAB_004dbaf8;
      }
      fStack_478 = afStack_33c[2] * local_5c;
      fStack_474 = afStack_33c[3] * local_5c;
      fStack_470 = afStack_33c[4] * local_5c;
      afStack_3cc[2] = afStack_33c[2] * local_5c;
      afStack_3cc[(uint)bVar13 * -2 + 3] = afStack_498[(uint)bVar13 * -2 + 9];
      afStack_3cc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_498[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
      fStack_268 = fVar3 + afStack_3cc[2];
      fStack_264 = fVar5 + afStack_3cc[3];
      fStack_260 = fVar6 + fStack_3bc;
      fStack_124 = fVar3 + afStack_3cc[2];
      afStack_120[(uint)bVar13 * -2] = afStack_27c[(uint)bVar13 * -2 + 6];
      afStack_120[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_27c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
      if (&stack0x00000000 != &g_CDemonLightInstance.field_0xf8) {
        _DAT_01ccc3b8 = fStack_124;
        _DAT_01ccc3bc = afStack_120[0];
        _DAT_01ccc3c0 = afStack_120[1];
      }
      _DAT_01ccc3d4 = 0.0;
      _DAT_01ccc3c4 = 1;
    }
    else {
      core_dcamera_cpp_FUN_0044de40();
      iStack_4d8 = iStack_250;
      (&fStack_4ec)[(uint)bVar13 * -2 + 6] = afStack_24c[(uint)bVar13 * -2];
      (&fStack_4ec)[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
           afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      if ((iStack_40 != 0) && ((_DAT_01c43544 & 2) != 0)) {
        if (_DAT_01ccc3c4 != 1) {
          _DAT_01ccc3c4 = 0;
        }
LAB_004dbaf8:
        _DAT_01cd0c28 = 1e+30;
        goto LAB_004dbb02;
      }
      if (_DAT_01c43544 != 1) goto LAB_004dbb02;
      _DAT_01ccc3b8 = (float)iStack_4d8 * _DAT_00600f74;
      _DAT_01ccc3bc = (float)iStack_4d4 * _DAT_00600f74;
      _DAT_01ccc3c0 = (float)iStack_4d0 * _DAT_00600f74;
      _DAT_01ccc3d4 = 0.0;
      _DAT_01ccc3c4 = _DAT_01c43544;
    }
  }
  else {
    if (((_DAT_01c43544 & 2) != 0) && (_DAT_01ccc3dc == 0)) {
      this_ptr = *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      _DAT_01ccc3b0 = 1;
      if (*(int *)&this_ptr[2].field_0x7bbc == 0) {
        core_charactr_cpp_FUN_004328c0(this_ptr);
        local_6a4 = 2.0;
      }
    }
    local_6a4 = local_6a4 - *(float *)(param_1 + 0x294);
    iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600();
    iStack_3c = iVar8;
    pCStack_70 = (CDemonActor *)core_actor_cpp_castToClassHash_FUN_0040c600();
    pCStack_50 = pCStack_70;
    fStack_74 = (float)core_actor_cpp_castToClassHash_FUN_0040c600();
    fStack_48 = fStack_74;
    iStack_44 = core_actor_cpp_castToClassHash_FUN_0040c600();
    iStack_78 = core_actor_cpp_castToClassHash_FUN_0040c600();
    iStack_54 = iStack_78;
    iStack_4c = core_actor_cpp_castToClassHash_FUN_0040c600();
    iStack_6c = core_actor_cpp_castToClassHash_FUN_0040c600();
    fVar3 = fStack_48;
    iVar7 = iStack_4c;
    local_6c0 = 2.5;
    if (pCStack_50 == (CDemonActor *)0x0) {
      if (iVar8 == 0) {
        if (fStack_48 == 0.0) {
          if (iStack_54 == 0) {
            if (iStack_4c == 0) {
              if (iStack_6c == 0) {
                if (iStack_44 == 0) {
                  if ((_DAT_01c43544 == 1) && (&pCStack_28->field_0x20 != &DAT_01ccc3b8)) {
                    _DAT_01ccc3b8 = *(float *)&pCStack_28->field_0x20;
                    _DAT_01ccc3c0 = *(float *)&pCStack_28->field_0x28;
                    _DAT_01ccc3bc = *(float *)&pCStack_28->field_0x24;
                  }
                }
                else {
                  pfVar10 = (float *)(iStack_44 + 0x24 + (uint)bVar13 * -8);
                  fStack_3ac = *(float *)(iStack_44 + 0x20);
                  afStack_3cc[(uint)bVar13 * -2 + 9] = *pfVar10;
                  afStack_3cc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
                       pfVar10[(uint)bVar13 * -2 + 1];
                  core_actor_cpp_FUN_00408bb0();
                  fStack_3a8 = *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x24);
                  (**(code **)(*(int *)(iStack_44 + 0x154) + 0x1c))();
                  puVar11 = (uint *)&stack0xfffffa14;
                  puVar12 = (uint *)&stack0xfffff984;
                  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *puVar12 = *puVar11;
                    puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
                    puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
                  }
                  fStack_450 = fStack_66c;
                  fStack_454 = 0.0;
                  fStack_44c = 0.0;
                  core_actor_cpp_FUN_00408b40();
                  fStack_400 = fStack_208;
                  afStack_3fc[(uint)bVar13 * -2] = afStack_24c[(uint)bVar13 * -2 + 0x12];
                  afStack_3fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                       afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
                  if (&fStack_454 != &fStack_400) {
                    fStack_454 = fStack_400;
                    fStack_450 = afStack_3fc[0];
                    fStack_44c = afStack_3fc[1];
                  }
                  if (&stack0x00000000 != &g_CDemonLightInstance.field_0x380) {
                    _DAT_01ccc3b8 = fStack_3ac;
                    _DAT_01ccc3bc = fStack_3a8;
                    _DAT_01ccc3c0 = fStack_3a4;
                  }
                  if (&stack0x00000000 != &g_BloodParticles[6].field_0x20) {
                    _DAT_01cd0c28 = fStack_454;
                    _DAT_01cd0c2c = fStack_450;
                    _DAT_01cd0c30 = fStack_44c;
                  }
                }
              }
              else {
                pfVar10 = (float *)(iStack_6c + 0x24 + (uint)bVar13 * -8);
                fStack_4fc = *(float *)(iStack_6c + 0x20);
                afStack_4f8[(uint)bVar13 * -2] = *pfVar10;
                afStack_4f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                     pfVar10[(uint)bVar13 * -2 + 1];
                core_actor_cpp_FUN_00408bb0();
                afStack_4f8[0] = *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x24);
                if (&stack0x00000000 != &g_CDemonLightInstance.field_0x4d0) {
                  _DAT_01ccc3b8 = fStack_4fc;
                  _DAT_01ccc3c0 = afStack_4f8[1];
                  _DAT_01ccc3bc = afStack_4f8[0];
                }
                if ((float *)(iStack_6c + 0x20) != (float *)&DAT_01cd0c28) {
                  _DAT_01cd0c28 = *(float *)(iStack_6c + 0x20);
                  _DAT_01cd0c30 = *(float *)(iStack_6c + 0x28);
                  _DAT_01cd0c2c = *(float *)(iStack_6c + 0x24);
                }
              }
            }
            else {
              pfVar10 = (float *)(iStack_4c + 0x24 + (uint)bVar13 * -8);
              afStack_2a0[2] = *(float *)(iStack_4c + 0x20);
              afStack_2a0[(uint)bVar13 * -2 + 3] = *pfVar10;
              afStack_2a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
                   pfVar10[(uint)bVar13 * -2 + 1];
              (**(code **)(*(int *)(iVar7 + 0x154) + 0x1c))();
              puVar11 = (uint *)&stack0xfffffa44;
              puVar12 = (uint *)&stack0xfffff96c;
              for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar12 = *puVar11;
                puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
                puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
              }
              fStack_4b8 = fStack_680;
              fStack_4c0 = fVar3;
              fStack_4bc = fVar3;
              core_actor_cpp_FUN_00408b40();
              fStack_574 = fStack_2bc;
              *(float *)((int)&stack0xfffffa90 + (uint)bVar13 * -8) =
                   afStack_2dc[(uint)bVar13 * -2 + 9];
              *(float *)((int)&stack0xfffffa94 + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
                   afStack_2dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
              if (&fStack_4c0 != &stack0xfffffa8c) {
                fStack_4c0 = fStack_574;
                fStack_4bc = fStack_570;
                fStack_4b8 = fStack_56c;
              }
              afStack_2a0[3] = *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x24);
              if (&stack0x00000000 != &g_CDemonLightInstance.field_0x26c) {
                _DAT_01ccc3b8 = afStack_2a0[2];
                _DAT_01ccc3c0 = fStack_290;
                _DAT_01ccc3bc = afStack_2a0[3];
              }
              if (&stack0x00000000 != &g_BloodParticles[7].field_0x44) {
                _DAT_01cd0c28 = fStack_4c0;
                _DAT_01cd0c2c = fStack_4bc;
                _DAT_01cd0c30 = fStack_4b8;
              }
            }
          }
          else {
            puVar11 = (uint *)(iStack_54 + 0x24 + (uint)bVar13 * -8);
            fStack_568 = *(float *)(iStack_54 + 0x20);
            *(uint *)((int)&stack0xfffffa9c + (uint)bVar13 * -8) = *puVar11;
            *(uint *)((int)&stack0xfffffaa0 + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
                 puVar11[(uint)bVar13 * -2 + 1];
            core_actor_cpp_FUN_00408bb0();
            fStack_564 = *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x24);
            if (&stack0x00000000 != &g_CDemonLightInstance.field_0x53c) {
              _DAT_01ccc3b8 = fStack_568;
              _DAT_01ccc3c0 = fStack_560;
              _DAT_01ccc3bc = fStack_564;
            }
            if ((float *)(iStack_78 + 0x20) != (float *)&DAT_01cd0c28) {
              _DAT_01cd0c28 = *(float *)(iStack_78 + 0x20);
              _DAT_01cd0c30 = *(float *)(iStack_78 + 0x28);
              _DAT_01cd0c2c = *(float *)(iStack_78 + 0x24);
            }
          }
        }
        else {
          pfVar10 = (float *)((int)fStack_48 + 0x24 + (uint)bVar13 * -8);
          fStack_16c = *(float *)((int)fStack_48 + 0x20);
          afStack_180[(uint)bVar13 * -2 + 6] = *pfVar10;
          afStack_180[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] = pfVar10[(uint)bVar13 * -2 + 1];
          core_actor_cpp_FUN_00408bb0();
          iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          uStack_10c = uStack_220;
          afStack_120[(uint)bVar13 * -2 + 6] = afStack_24c[(uint)bVar13 * -2 + 0xc];
          afStack_120[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
               afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
          fStack_168 = *(float *)(iVar7 + 0x24);
          if (0.0 <= fStack_104) {
            uStack_544 = 0;
            uStack_540 = 0;
            uStack_53c = 0x40000000;
            core_actor_cpp_FUN_00408ac0();
            afStack_2dc[2] = fStack_550;
            afStack_2dc[(uint)bVar13 * -2 + 3] = *(float *)(&stack0xfffffab4 + (uint)bVar13 * -8);
            afStack_2dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
                 *(float *)(&stack0xfffffab8 + (uint)bVar13 * -8 + (uint)bVar13 * -8);
            fStack_16c = fStack_16c + afStack_2dc[2];
            fStack_168 = fStack_168 + afStack_2dc[3];
            fStack_164 = fStack_164 + fStack_2cc;
          }
          else {
            uStack_37c = 0;
            uStack_378 = 0;
            uStack_374 = 0xc0000000;
            core_actor_cpp_FUN_00408ac0();
            fStack_598 = fStack_5a4;
            *(uint *)((int)&stack0xfffffa6c + (uint)bVar13 * -8) =
                 *(uint *)(&stack0xfffffa60 + (uint)bVar13 * -8);
            *(uint *)((int)&stack0xfffffa70 + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
                 *(uint *)(&stack0xfffffa64 + (uint)bVar13 * -8 + (uint)bVar13 * -8);
            fStack_16c = fStack_16c + fStack_598;
            fStack_168 = fStack_168 + fStack_594;
            fStack_164 = fStack_164 + fStack_590;
          }
          if (&stack0x00000000 != &g_CDemonLightInstance.field_0x140) {
            _DAT_01ccc3b8 = fStack_16c;
            _DAT_01ccc3bc = fStack_168;
            _DAT_01ccc3c0 = fStack_164;
          }
          if ((float *)((int)fStack_74 + 0x20) != (float *)&DAT_01cd0c28) {
            _DAT_01cd0c28 = *(float *)((int)fStack_74 + 0x20);
            _DAT_01cd0c30 = *(float *)((int)fStack_74 + 0x28);
            _DAT_01cd0c2c = *(float *)((int)fStack_74 + 0x24);
          }
        }
      }
      else if ((*(int *)(iVar8 + 0x9d8) == 0) && (*(int *)(iVar8 + 0x2d8) != 0)) {
        (**(code **)(*(int *)(iVar8 + 0x154) + 0x1c))();
        puVar11 = (uint *)&stack0xfffffa2c;
        puVar12 = &stack0xfffff99c;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
        }
        fStack_1d8 = fStack_664 + fStack_658;
        fStack_1d4 = fStack_660 + fStack_654;
        fStack_1d0 = fStack_65c + fStack_650;
        fStack_1a8 = fStack_664 + fStack_658;
        afStack_24c[(uint)bVar13 * -2 + 0x2a] = afStack_24c[(uint)bVar13 * -2 + 0x1e];
        afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2b] =
             afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f];
        afStack_d8[5] = fStack_1a8 * _DAT_005e3604;
        afStack_c0[0] = fStack_1a4 * _DAT_005e3604;
        afStack_c0[1] = fStack_1a0 * _DAT_005e3604;
        fStack_520 = fStack_1a8 * _DAT_005e3604;
        *(float *)(&stack0xfffffae4 + (uint)bVar13 * -8) = afStack_c0[(uint)bVar13 * -2];
        *(float *)(&stack0xfffffae8 + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
             afStack_c0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        core_actor_cpp_FUN_00408b40();
        afStack_c0[2] = fStack_1f0;
        afStack_c0[(uint)bVar13 * -2 + 3] = afStack_24c[(uint)bVar13 * -2 + 0x18];
        afStack_c0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
             afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
        core_actor_cpp_FUN_00408bb0();
        afStack_36c[2] = (float)uStack_154;
        afStack_36c[(uint)bVar13 * -2 + 3] = afStack_180[(uint)bVar13 * -2 + 0xc];
        afStack_36c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
             afStack_180[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
        (**(code **)(*(int *)(iVar8 + 0x154) + 0x1c))();
        puVar11 = (uint *)&stack0xfffff9e4;
        puVar12 = &stack0xfffff9b4;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
        }
        afStack_c0[3] = fStack_64c;
        if (0.0 <= fStack_35c) {
          uStack_13c = 0;
          uStack_138 = 0;
          uStack_134 = 0x3fc00000;
          core_actor_cpp_FUN_00408ac0();
          fStack_280 = afStack_390[2];
          afStack_27c[(uint)bVar13 * -2] = afStack_390[(uint)bVar13 * -2 + 3];
          afStack_27c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
               afStack_390[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
          afStack_c0[2] = afStack_c0[2] + fStack_280;
          afStack_c0[3] = afStack_c0[3] + afStack_27c[0];
          fStack_b0 = fStack_b0 + afStack_27c[1];
        }
        else {
          afStack_4b0[4] = -1.5;
          afStack_4b0[2] = 0.0;
          afStack_4b0[3] = 0.0;
          core_actor_cpp_FUN_00408ac0();
          fStack_1cc = afStack_498[2];
          afStack_24c[(uint)bVar13 * -2 + 0x21] = afStack_498[(uint)bVar13 * -2 + 3];
          afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22] =
               afStack_498[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
          afStack_c0[2] = afStack_c0[2] + fStack_1cc;
          afStack_c0[3] = afStack_c0[3] + fStack_1c8;
          fStack_b0 = fStack_b0 + fStack_1c4;
        }
        if (&stack0x00000000 != &g_CDemonLightInstance.field_0x8c) {
          _DAT_01ccc3b8 = afStack_c0[2];
          _DAT_01ccc3bc = afStack_c0[3];
          _DAT_01ccc3c0 = fStack_b0;
        }
        (**(code **)(*(int *)(iStack_3c + 0x154) + 0x1c))();
        puVar11 = (uint *)&stack0xfffff9cc;
        puVar12 = &stack0xfffff9fc;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
        }
        fStack_1c0 = fStack_604 + fStack_5f8;
        fStack_1bc = fStack_600 + fStack_5f4;
        fStack_1b8 = fStack_5fc + fStack_5f0;
        fStack_e8 = fStack_604 + fStack_5f8;
        afStack_fc[(uint)bVar13 * -2 + 6] = afStack_24c[(uint)bVar13 * -2 + 0x24];
        afStack_fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
             afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25];
        afStack_444[2] = fStack_e8 * _DAT_005e3604;
        afStack_444[3] = fStack_e4 * _DAT_005e3604;
        fStack_434 = fStack_e0 * _DAT_005e3604;
        fStack_22c = fStack_e8 * _DAT_005e3604;
        afStack_24c[(uint)bVar13 * -2 + 9] = afStack_444[(uint)bVar13 * -2 + 3];
        afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
             afStack_444[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
        core_actor_cpp_FUN_00408b40();
        fStack_214 = fStack_424;
        afStack_24c[(uint)bVar13 * -2 + 0xf] = afStack_444[(uint)bVar13 * -2 + 9];
        afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
             afStack_444[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
        if ((CGore *)&stack0x00000000 != &g_CGoreInstance) {
          _DAT_01cd0c28 = fStack_214;
          _DAT_01cd0c2c = fStack_210;
          _DAT_01cd0c30 = fStack_20c;
        }
      }
      else {
        pfVar10 = (float *)(iStack_3c + 0x9c0 + (uint)bVar13 * -8);
        afStack_24c[2] = *(float *)(iStack_3c + 0x9bc);
        afStack_24c[(uint)bVar13 * -2 + 3] = *pfVar10;
        afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] = pfVar10[(uint)bVar13 * -2 + 1];
        core_actor_cpp_FUN_00408bb0();
        uStack_3b8 = uStack_2c8;
        afStack_3cc[(uint)bVar13 * -2 + 6] = afStack_2dc[(uint)bVar13 * -2 + 6];
        afStack_3cc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
             afStack_2dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
        if (0.0 <= fStack_3b0) {
          afStack_d8[4] = 1.5;
          afStack_d8[2] = 0.0;
          afStack_d8[3] = -3.5;
          core_actor_cpp_FUN_00408ac0();
          fStack_160 = afStack_30c[2];
          afStack_180[(uint)bVar13 * -2 + 9] = afStack_30c[(uint)bVar13 * -2 + 3];
          afStack_180[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
               afStack_30c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
          afStack_24c[2] = afStack_24c[2] + fStack_160;
          afStack_24c[3] = afStack_24c[3] + fStack_15c;
          fStack_23c = fStack_23c + fStack_158;
        }
        else {
          uStack_2b0 = 0;
          uStack_2a8 = 0xbfc00000;
          uStack_2ac = 0xc0600000;
          core_actor_cpp_FUN_00408ac0();
          fStack_ac = fStack_340;
          afStack_c0[(uint)bVar13 * -2 + 6] = afStack_33c[(uint)bVar13 * -2];
          afStack_c0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
               afStack_33c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
          afStack_24c[2] = afStack_24c[2] + fStack_ac;
          afStack_24c[3] = afStack_24c[3] + fStack_a8;
          fStack_23c = fStack_23c + fStack_a4;
        }
        if (&stack0x00000000 != &g_CDemonLightInstance.field_0x218) {
          _DAT_01ccc3b8 = afStack_24c[2];
          _DAT_01ccc3bc = afStack_24c[3];
          _DAT_01ccc3c0 = fStack_23c;
        }
        if ((float *)(iStack_3c + 0x9bc) != (float *)&DAT_01cd0c28) {
          _DAT_01cd0c28 = *(float *)(iStack_3c + 0x9bc);
          _DAT_01cd0c30 = *(float *)(iStack_3c + 0x9c4);
          _DAT_01cd0c2c = *(float *)(iStack_3c + 0x9c0);
        }
      }
    }
    else {
      iVar7 = core_actor_cpp_FUN_0040c550(pCStack_50,"CEnemy");
      if (iVar7 == 0) {
        iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        pfVar10 = (float *)((int)pCStack_50 + (uint)bVar13 * -8 + 0x24);
        fStack_4b4 = *(float *)&pCStack_50->field_0x20;
        afStack_4b0[(uint)bVar13 * -2] = *pfVar10;
        afStack_4b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] = pfVar10[(uint)bVar13 * -2 + 1];
        afStack_4b0[0] = *(float *)(iVar7 + 0x24);
        uStack_3a0 = 0;
        uStack_39c = 0;
        uStack_398 = 0x40000000;
        core_actor_cpp_FUN_00408ac0();
        fStack_370 = fStack_1e4;
        afStack_36c[(uint)bVar13 * -2] = afStack_24c[(uint)bVar13 * -2 + 0x1b];
        afStack_36c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c];
        fStack_4b4 = fStack_4b4 + fStack_370;
        afStack_4b0[0] = afStack_4b0[0] + afStack_36c[0];
        afStack_4b0[1] = afStack_4b0[1] + afStack_36c[1];
        if (&stack0x00000000 != &g_CDemonLightInstance.field_0x488) {
          _DAT_01ccc3b8 = fStack_4b4;
          _DAT_01ccc3bc = afStack_4b0[0];
          _DAT_01ccc3c0 = afStack_4b0[1];
        }
        if (&pCStack_70->field_0x20 != &DAT_01cd0c28) {
          _DAT_01cd0c28 = *(float *)&pCStack_70->field_0x20;
          _DAT_01cd0c30 = *(float *)&pCStack_70->field_0x28;
          _DAT_01cd0c2c = *(float *)&pCStack_70->field_0x24;
        }
        local_6c0 = 3.0;
      }
      else {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600();
        if (iVar7 != 0) {
          local_6c0 = 5.0;
          (**(code **)(*(int *)(iVar7 + 0x154) + 0x148))();
          fStack_430 = afStack_3fc[2];
          afStack_444[(uint)bVar13 * -2 + 6] = afStack_3fc[(uint)bVar13 * -2 + 3];
          afStack_444[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
               afStack_3fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
          if (&stack0x00000000 != &g_CDemonLightInstance.field_0x404) {
            _DAT_01ccc3b8 = fStack_430;
            _DAT_01ccc3bc = fStack_42c;
            _DAT_01ccc3c0 = fStack_428;
          }
          if (&stack0x00000000 != &g_BloodParticles[5].field_0x44) {
            _DAT_01cd0c28 = fStack_430;
            _DAT_01cd0c2c = fStack_42c;
            _DAT_01cd0c30 = fStack_428;
          }
        }
      }
    }
    if ((iStack_40 != 0) && ((_DAT_01c43544 & 2) != 0)) {
      _DAT_01cd0c28 = 1e+30;
      _DAT_01ccc3c4 = 0;
      goto LAB_004da080;
    }
    _DAT_01ccc3d4 = 0.0;
    _DAT_01ccc3c4 = 1;
    if (_DAT_01ccc3dc != 0) goto LAB_004dbaf8;
LAB_004dbb02:
    if (_DAT_01ccc3c4 == 0) goto LAB_004da080;
  }
  if (*(int *)(param_1 + 0xac) == 0) {
    bVar14 = (&DAT_01c50950)[*(int *)(param_1 + 0x30)];
  }
  else {
    bVar14 = (&DAT_01c50950)[*(int *)(param_1 + 0x30)] == '\0';
  }
  param_2[2] = (uint)bVar14;
  if (param_2[2] == 0) {
    _DAT_01ccc3d8 = 0;
  }
  else {
    _DAT_01ccc3d8 = 1;
  }
LAB_004da080:
  iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  afStack_4b0[5] = *(float *)(iVar7 + 0x20) - _DAT_01ccc3b8;
  afStack_498[0] = *(float *)(iVar7 + 0x24) - _DAT_01ccc3bc;
  afStack_498[1] = *(float *)(iVar7 + 0x28) - _DAT_01ccc3c0;
  fStack_1b4 = afStack_4b0[5];
  afStack_24c[(uint)bVar13 * -2 + 0x27] = afStack_498[(uint)bVar13 * -2];
  afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28] =
       afStack_498[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
  fStack_6b4 = SQRT(fStack_1ac * fStack_1ac + fStack_1b4 * fStack_1b4 + fStack_1b0 * fStack_1b0);
  if (((_DAT_01ccc3c4 != 0) && (_DAT_01ccc3dc == 0)) || (_DAT_01cd0c28 < (float)_DAT_005e360c)) {
    if (fStack_6b4 - fStack_6b4 * (float)_DAT_005e3614 <
        ABS(_DAT_01ccc3bc - *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x24))) {
      _DAT_01ccc3b0 = 0;
      _DAT_01cd0c28 = 1e+30;
      _DAT_01ccc3c4 = 0;
    }
    this_ptr_00 = core_path_cpp_getPathMap_FUN_005351f0((CLocation *)&DAT_01ccc3b8);
    iVar7 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                      (this_ptr_00,(CVector3f *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x20),
                       &CStack_130,0);
    if (iVar7 == 0) {
      _DAT_01ccc3c4 = 0;
    }
    else {
      fStack_18 = (float)core_actor_cpp_FUN_0040cd60();
      fStack_69c = fStack_18;
      fVar3 = fStack_18 * _DAT_005e361c * (float)_DAT_005e3624;
      fStack_6a8 = -local_6a0;
      param_2[10] = fVar3;
      if (fVar3 < fStack_6a8) {
        param_2[10] = ABS(fStack_18) * fStack_6a8 * (float)_DAT_005e362c;
      }
      if (local_6a0 < (float)param_2[10]) {
        param_2[10] = ABS(fStack_18) * local_6a0 * (float)_DAT_005e362c;
      }
      if (ABS((float)param_2[10]) < (float)_DAT_005e3634) {
        param_2[10] = 0;
      }
      iVar7 = _DAT_01ccc3d8;
      *param_2 = 1;
      if (iVar7 != 0) {
        param_2[2] = 1;
      }
    }
    if (((fStack_6b4 < local_6c0 * _DAT_005e3604) && (_DAT_01ccc3d8 == 0)) ||
       ((fStack_6b4 < local_6c0 * (float)_DAT_005e363c && (_DAT_01ccc3d8 == 1)))) {
      *param_2 = 0;
      if ((float)_DAT_005e360c <= _DAT_01cd0c28) {
        _DAT_01ccc3c4 = 0;
      }
      else {
        core_actor_cpp_FUN_00408bb0();
        fStack_a0 = fStack_2e0;
        afStack_c0[(uint)bVar13 * -2 + 9] = afStack_2dc[(uint)bVar13 * -2];
        afStack_c0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
             afStack_2dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        if (local_58 < fStack_a0) {
          param_2[2] = 0;
          param_2[9] = 0x3e4ccccd;
        }
        if (fStack_a0 < -local_58) {
          param_2[2] = 0;
          param_2[9] = 0xbe4ccccd;
        }
        if (local_58 < fStack_98) {
          param_2[2] = 0;
          *param_2 = 1;
        }
        if (fStack_98 < -local_58) {
          param_2[2] = 0;
          param_2[1] = 1;
        }
        iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        afStack_27c[2] = _DAT_01cd0c28 - *(float *)(iVar7 + 0x20);
        afStack_27c[3] = _DAT_01cd0c2c - *(float *)(iVar7 + 0x24);
        fStack_26c = _DAT_01cd0c30 - *(float *)(iVar7 + 0x28);
        fStack_52c = afStack_27c[2];
        *(float *)(&stack0xfffffad8 + (uint)bVar13 * -8) = afStack_27c[(uint)bVar13 * -2 + 3];
        *(float *)(&stack0xfffffadc + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
             afStack_27c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
        core_vecdir_cpp_FUN_005a7520();
        uStack_55c = uStack_418;
        *(float *)(&stack0xfffffaa8 + (uint)bVar13 * -8) = afStack_444[(uint)bVar13 * -2 + 0xc];
        *(float *)(&stack0xfffffaac + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
             afStack_444[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
        fStack_18 = (float)core_actor_cpp_FUN_0040cd60();
        fStack_6ac = fStack_18;
        fVar3 = fStack_18 * _DAT_005e361c * (float)_DAT_005e3624;
        fStack_6b8 = -local_6a0;
        param_2[10] = fVar3;
        if (fVar3 < fStack_6b8) {
          param_2[10] = ABS(fStack_18) * fStack_6b8 * (float)_DAT_005e362c;
        }
        if (local_6a0 < (float)param_2[10]) {
          param_2[10] = ABS(fStack_18) * local_6a0 * (float)_DAT_005e362c;
        }
        if (ABS((float)param_2[10]) < (float)_DAT_005e3634) {
          *param_2 = 0;
          param_2[10] = 0;
          _DAT_01ccc3c4 = 0;
          _DAT_01cd0c28 = 1e+30;
        }
      }
      if (((_DAT_01ccc3b0 != 0) && ((float)_DAT_005e360c < _DAT_01cd0c28)) &&
         ((_DAT_01ccc3b0 = 0, iStack_40 == 0 && (local_6a4 <= 0.0)))) {
        param_2[3] = 1;
      }
    }
    iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    fStack_484 = _DAT_01ccc3c8 - *(float *)(iVar7 + 0x20);
    fStack_480 = _DAT_01ccc3cc - *(float *)(iVar7 + 0x24);
    fStack_47c = _DAT_01ccc3d0 - *(float *)(iVar7 + 0x28);
    fStack_3d0 = fStack_484;
    afStack_3cc[(uint)bVar13 * -2] = afStack_498[(uint)bVar13 * -2 + 6];
    afStack_3cc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_498[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
    fStack_60 = SQRT(afStack_3cc[1] * afStack_3cc[1] +
                     fStack_3d0 * fStack_3d0 + afStack_3cc[0] * afStack_3cc[0]);
    fStack_68 = fStack_60;
    if (0.0 < *(float *)(param_1 + 0x294)) {
      fStack_68 = fStack_60 / *(float *)(param_1 + 0x294);
    }
    if (_DAT_005e3644 <= fStack_68) {
      _DAT_01ccc3d4 = 0.0;
    }
    else {
      _DAT_01ccc3d4 = *(float *)(param_1 + 0x294) + _DAT_01ccc3d4;
      if (((_DAT_005e3604 <= _DAT_01ccc3d4) && (_DAT_01ccc3c4 = 0, _DAT_01ccc3b0 != 0)) &&
         (_DAT_01ccc3b0 = 0, iStack_40 == 0)) {
        param_2[3] = 1;
      }
    }
  }
  if (_DAT_01ccc3dc != 0) {
    iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    fStack_58c = *(float *)(_DAT_01ccc3dc + 0x20) - *(float *)(iVar7 + 0x20);
    fStack_588 = *(float *)(_DAT_01ccc3dc + 0x24) - *(float *)(iVar7 + 0x24);
    fStack_584 = *(float *)(_DAT_01ccc3dc + 0x28) - *(float *)(iVar7 + 0x28);
    fStack_394 = fStack_58c;
    afStack_390[(uint)bVar13 * -2] = *(float *)((int)&stack0xfffffa78 + (uint)bVar13 * -8);
    afStack_390[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         *(float *)((int)&stack0xfffffa7c + (uint)bVar13 * -8 + (uint)bVar13 * -8);
    core_vecdir_cpp_FUN_005a7520();
    uStack_2a4 = afStack_120[2];
    afStack_2a0[(uint)bVar13 * -2] = afStack_120[(uint)bVar13 * -2 + 3];
    afStack_2a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_120[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    fStack_6b0 = (float)core_actor_cpp_FUN_0040cd60();
    if ((float)_DAT_005e364c < ABS(fStack_6b0)) {
      _DAT_01ccc3d4 = -1.0;
      param_2[8] = 1;
    }
    fVar3 = fStack_6b0 * _DAT_005e361c * (float)_DAT_005e3624;
    fStack_6bc = -local_6a0;
    param_2[10] = fVar3;
    if (fVar3 < fStack_6bc) {
      param_2[10] = ABS(fStack_6b0) * fStack_6bc * (float)_DAT_005e362c;
    }
    if (local_6a0 < (float)param_2[10]) {
      param_2[10] = ABS(fStack_6b0) * local_6a0 * (float)_DAT_005e362c;
    }
    if (ABS((float)param_2[10]) < (float)_DAT_005e3634) {
      param_2[10] = 0;
    }
    fStack_18 = fStack_6b0;
    if (_DAT_01ccc3c4 != 0) {
      core_actor_cpp_FUN_00408bb0();
      fStack_148 = fStack_46c;
      afStack_180[(uint)bVar13 * -2 + 0xf] = afStack_498[(uint)bVar13 * -2 + 0xc];
      afStack_180[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
           afStack_498[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      if (local_6c0 < fStack_148) {
        param_2[2] = 1;
        param_2[9] = 0x3f800000;
      }
      if (fStack_148 < -local_6c0) {
        param_2[2] = 1;
        param_2[9] = 0xbf800000;
      }
      if (local_6c0 < fStack_140) {
        param_2[2] = 1;
        *param_2 = 1;
      }
      if (fStack_140 < -local_6c0) {
        param_2[2] = 1;
        param_2[1] = 1;
      }
    }
    iVar7 = (**(code **)(*(int *)(_DAT_01ccc3dc + 0x154) + 0x10c))();
    if (iVar7 != 0) {
      _DAT_01ccc3dc = 0;
    }
  }
  _DAT_01ccc3b4 = _DAT_01c43544;
  iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  if ((float *)(iVar7 + 0x20) != (float *)&DAT_01ccc3c8) {
    _DAT_01ccc3c8 = *(float *)(iVar7 + 0x20);
    _DAT_01ccc3d0 = *(float *)(iVar7 + 0x28);
    _DAT_01ccc3cc = *(float *)(iVar7 + 0x24);
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  return;
}
