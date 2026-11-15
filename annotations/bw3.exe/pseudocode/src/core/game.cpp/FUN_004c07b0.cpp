// Name: core_game.cpp_FUN_004c07b0
// Address: 004c07b0
// Address Range: [[004c07b0, 004c4867]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004c07b0(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004c07b0(int param_1,uint *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  CDemonActor *this_ptr;
  CDemonActor *actor_ptr;
  int iVar6;
  CCharacter *pCVar7;
  CDemonActor *this_ptr_00;
  CDemonActor *this_ptr_01;
  CHero *this_ptr_02;
  CPathMap *this_ptr_03;
  EDeathState EVar8;
  CDemonActor *pCVar9;
  CDemonActor *pCVar10;
  float fVar11;
  CVector3f *pCVar12;
  CDemonActor *pCVar13;
  CDoor *this_ptr_04;
  int iVar14;
  uint *puVar15;
  float *pfVar16;
  float *pfVar17;
  uint *puVar18;
  byte bVar19;
  byte bVar20;
  float afStackY_172c [62];
  CDemonActor *apCStackY_1634 [2];
  float afStackY_162c [3];
  CDemonActor *apCStackY_1620 [6];
  float afStackY_1608 [45];
  CDemonActor *apCStackY_1554 [6];
  float afStackY_153c [30];
  CDemonActor *apCStackY_14c4 [3];
  float afStackY_14b8 [6];
  CDemonActor *apCStackY_14a0 [9];
  float afStackY_147c [6];
  CDemonActor *apCStackY_1464 [12];
  float afStackY_1434 [125];
  CDemonActor *apCStackY_1240 [4];
  float afStackY_1230 [39];
  CDemonActor *apCStackY_1194 [6];
  float afStackY_117c [30];
  CDemonActor *apCStackY_1104 [6];
  float afStackY_10ec [541];
  CVector3i *pCVar21;
  CBoundingBox3D *in_stack_fffff798;
  CBoundingBox3D *out_box;
  CDemonActor *out_box_00;
  float fStack_850;
  float fStack_84c;
  float fStack_848;
  float local_844;
  float fStack_840;
  float fStack_814;
  CDemonActor *pCStack_7f4;
  uint auStack_7ec [4];
  uint auStack_7dc [7];
  CDemonActor *pCStack_7c0;
  uint auStack_7bc [6];
  uint auStack_7a4 [8];
  uint auStack_784 [2];
  float fStack_77c;
  float fStack_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  float fStack_768;
  uint auStack_764 [2];
  float fStack_75c;
  float fStack_758;
  float fStack_754;
  float fStack_750;
  float fStack_74c;
  float fStack_748;
  CVector3f CStack_744;
  float afStack_738 [2];
  CVector3f CStack_730;
  float afStack_724 [5];
  uint uStack_710;
  float afStack_70c [5];
  CVector3f CStack_6f8;
  CVector3i CStack_6ec;
  CVector3i CStack_6e0;
  float fStack_6d4;
  float afStack_6d0 [4];
  CVector3f CStack_6c0;
  float afStack_6b4 [4];
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  float fStack_698;
  float fStack_694;
  float fStack_690;
  uint uStack_688;
  float fStack_680;
  float fStack_67c;
  float fStack_678;
  float fStack_674;
  float fStack_66c;
  CVector3i CStack_668;
  float fStack_65c;
  float afStack_658 [4];
  float fStack_648;
  CDemonActor *pCStack_644;
  float afStack_640 [4];
  CDemonActor *apCStack_630 [3];
  CVector3f CStack_624;
  float fStack_618;
  CVector3i CStack_614;
  CVector3f CStack_608;
  float fStack_5f4;
  float afStack_5f0 [7];
  float fStack_5d4;
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
  CVector3f CStack_5a8;
  float fStack_59c;
  float afStack_598 [4];
  float fStack_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  CVector3i CStack_578;
  CDemonActor *pCStack_56c;
  CDemonActor *apCStack_568 [4];
  CDemonActor *pCStack_558;
  CVector3f CStack_554;
  CVector3i CStack_548;
  float fStack_53c;
  float afStack_538 [2];
  CVector3i CStack_530;
  CVector3f CStack_524;
  CVector3f CStack_518;
  float fStack_504;
  float afStack_500 [5];
  CVector3f CStack_4ec;
  float fStack_4e0;
  CDemonActor *pCStack_4dc;
  CDemonActor *apCStack_4d8 [2];
  CVector3f CStack_4d0;
  byte auStack_4bc [8];
  CDemonActor *apCStack_4b4 [4];
  CDemonActor *pCStack_4a4;
  CVector3f CStack_4a0;
  float fStack_494;
  float afStack_490 [5];
  CDemonActor *pCStack_47c;
  CDemonActor *apCStack_478 [2];
  CVector3f CStack_470;
  CDemonActor *pCStack_464;
  CDemonActor *apCStack_460 [4];
  CDemonActor *pCStack_450;
  float fStack_44c;
  float afStack_448 [3];
  CBoundingBox3D CStack_43c;
  float fStack_424;
  float fStack_420;
  float fStack_414;
  float afStack_410 [2];
  CVector3f CStack_408;
  float fStack_3fc;
  CVector3i CStack_3f8;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float afStack_3dc [5];
  float fStack_3c8;
  CVector3f aCStack_3c4 [2];
  float fStack_3ac;
  float afStack_3a8 [4];
  float fStack_398;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  byte auStack_378 [8];
  float afStack_370 [4];
  CVector3f CStack_360;
  float afStack_354 [4];
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
  CVector3f CStack_314;
  CVector3f CStack_308;
  float fStack_2fc;
  float afStack_2f8 [2];
  CVector3i CStack_2f0;
  float fStack_2e4;
  float afStack_2e0 [5];
  float fStack_2cc;
  CVector3f CStack_2c8;
  float afStack_2bc [4];
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  CVector3f CStack_29c;
  CDemonActor *pCStack_290;
  float afStack_28c [4];
  float fStack_27c;
  float fStack_26c;
  CVector3f CStack_268;
  CDemonActor *pCStack_258;
  CDemonActor *apCStack_254 [3];
  float fStack_248;
  float afStack_244 [5];
  CVector3i CStack_230;
  CVector3f CStack_224;
  CVector3i CStack_218;
  CVector3i aCStack_20c [2];
  CVector3f CStack_1f4;
  float fStack_1e8;
  float afStack_1e4 [4];
  float fStack_1d4;
  CVector3i CStack_1d0;
  CVector3i aCStack_1c4 [2];
  float fStack_1ac;
  CDemonActor *apCStack_1a8 [2];
  CVector3f CStack_1a0;
  float fStack_194;
  float afStack_190 [4];
  float fStack_180;
  CVector3i CStack_17c;
  CVector3f CStack_170;
  float fStack_164;
  float afStack_160 [4];
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  CVector3i CStack_140;
  float fStack_134;
  float afStack_130 [2];
  CVector3f CStack_128;
  float fStack_11c;
  float fStack_118;
  CDemonActor *apCStack_114 [4];
  byte auStack_104 [8];
  float afStack_fc [4];
  CVector3i CStack_ec;
  float fStack_e0;
  float afStack_dc [2];
  CVector3f CStack_d4;
  float fStack_c8;
  float afStack_c4 [4];
  CCharacter *pCStack_b4;
  int iStack_b0;
  int local_ac;
  float fStack_a8;
  CDemonActor *pCStack_a4;
  CDemonActor *pCStack_a0;
  CDemonActor *pCStack_9c;
  CDemonActor *pCStack_98;
  CDemonActor *pCStack_94;
  int local_90;
  CDemonActor *pCStack_8c;
  int local_88;
  CDemonActor *pCStack_84;
  float local_80;
  CDemonActor *pCStack_7c;
  CDemonActor *pCStack_74;
  float fStack_70;
  CDemonActor *pCStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_58;
  float local_54;
  CDemonActor *local_50;
  int local_4c;
  float fStack_48;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_28;
  CDemonActor *pCStack_24;
  CDemonActor *pCStack_20;
  CDemonActor *pCStack_1c;
  CDemonActor *pCStack_18;
  
  bVar19 = 0;
  if ((DAT_01d1e35c & 1) == 0) {
    DAT_01d1e35c = DAT_01d1e35c | 1;
  }
  out_box_00 = (CDemonActor *)0x3e400000;
  if ((DAT_01d1e35c & 2) == 0) {
    DAT_01d1e35c = DAT_01d1e35c | 2;
  }
  local_54 = 8.0;
  local_844 = 0.0;
  local_50 = core_actor_cpp_castToClassHash_FUN_0040c840
                       (*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04),g_CPryeClassInfo.name_hash)
  ;
  iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  if (((iVar6 != 0) && (iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(), 0 < iVar6)) ||
     ((local_50 != (CDemonActor *)0x0 && (iVar6 = core_prye_cpp_FUN_00527110(), iVar6 != 0)))) {
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
  out_box = (CBoundingBox3D *)0x40000000;
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
  iVar6 = (**(code **)(*0x01D70A78 + 4))();
  if (iVar6 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
              ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),(CDemonActor *)0x0,
               5,1);
  }
  iVar6 = (**(code **)(*0x01D70A78 + 4))();
  if (iVar6 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
              ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),(CDemonActor *)0x0,
               5,-1);
  }
  iVar6 = (**(code **)(*0x01D70A78 + 4))();
  if (iVar6 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbc40
              ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),1);
  }
  iVar6 = (**(code **)(*0x01D70A78 + 4))();
  if (iVar6 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbc40
              ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),-1);
  }
  pCVar7 = (CCharacter *)
           (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) + 0x148))();
  pCStack_b4 = pCVar7;
  iVar6 = (**(code **)(*0x01D70A78 + 4))();
  if ((iVar6 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,0,1), pCVar7 == (CCharacter *)0x0)) {
    param_2[7] = 1;
  }
  iVar6 = (**(code **)(*0x01D70A78 + 4))();
  if ((iVar6 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,1,1), pCStack_b4 == (CCharacter *)0x0)) {
    param_2[7] = 1;
  }
  iVar6 = (**(code **)(*0x01D70A78 + 4))();
  if ((iVar6 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,2,1), pCStack_b4 == (CCharacter *)0x0)) {
    param_2[7] = 1;
  }
  iVar6 = (**(code **)(*0x01D70A78 + 4))();
  if ((iVar6 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,3,1), pCStack_b4 == (CCharacter *)0x0)) {
    param_2[7] = 1;
  }
  iVar6 = (**(code **)(*0x01D70A78 + 4))();
  if ((iVar6 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,4,1), pCStack_b4 == (CCharacter *)0x0)) {
    param_2[7] = 1;
  }
  if ((_DAT_01d22c9c != 0) ||
     (iVar6 = core_script_cpp_CScript_getLetterboxHeight_FUN_00528f60(g_CScriptPtr), 2 < iVar6)) {
    _DAT_01d22c9c = 0;
    _DAT_01d1e334 = 0;
    _DAT_01d1e324 = 0;
    _DAT_01c5fae4 = 0;
    _DAT_01d1e34c = (CCharacter *)0x0;
    sound_sndmain_cpp_killAllSfx_FUN_00556c60();
    _DAT_01d22c30 = (CDemonActor *)0x7149f2ca;
    _DAT_01d1e358 = g_CDemonSetPtr->selected_camera_index;
  }
  if ((int)_DAT_01d22b48 < 0) {
    _DAT_01c5fae4 = 0;
    _DAT_01d1e334 = 0;
    _DAT_01d1e34c = (CCharacter *)0x0;
    _DAT_01d22c30 = (CDemonActor *)0x7149f2ca;
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
        bVar19 = (&DAT_01c6cef0)[*(int *)(param_1 + 0x30)];
      }
      else {
        bVar19 = (&DAT_01c6cef0)[*(int *)(param_1 + 0x30)] == '\0';
      }
      param_2[2] = (uint)bVar19;
    }
    fVar11 = (float)(local_88 - local_90 / 2) / (float)(local_90 / 2);
    param_2[0xb] = fVar11;
    uVar4 = _DAT_01c5fae4;
    param_2[0xb] = fVar11 * (float)param_2[0xb] * (float)param_2[0xb] * _DAT_005c3c0c;
    if ((uVar4 & 2) == 0) {
      return;
    }
    param_2[3] = 1;
    return;
  }
  if (_DAT_005fe9d4 < 0.0) {
    _DAT_005fe9d4 = 0.25;
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
              (&g_CDemonCameraInstance,local_88,local_4c,&CStack_218);
    pCVar21 = &CStack_2f0;
    CStack_2f0.x = CStack_218.x;
    *(uint *)((int)&CStack_2f0 + (uint)bVar19 * -8 + 4) =
         *(uint *)((int)aCStack_20c + (uint)bVar19 * -8 + -8);
    *(uint *)((int)&CStack_2f0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
         *(uint *)((int)aCStack_20c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + -4);
    core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
              (&g_CDemonCameraInstance,pCVar21,&CStack_668);
    CStack_2f0.x = CStack_668.x;
    *(uint *)((int)&CStack_2f0 + (uint)bVar19 * -8 + 4) =
         *(uint *)((int)&CStack_668 + (uint)bVar19 * -8 + 4);
    *(uint *)((int)&CStack_2f0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
         *(uint *)((int)&CStack_668 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
    fStack_3ec = (float)CStack_2f0.x * _DAT_005e06e4;
    fStack_3e8 = (float)CStack_2f0.y * _DAT_005e06e4;
    fStack_3e4 = (float)CStack_2f0.z * _DAT_005e06e4;
    CStack_744.y = g_CDemonCameraInstance.base.position.f.x;
    afStack_738[(uint)bVar19 * -2 + -1] =
         *(float *)((int)&g_CDemonCameraInstance + (uint)bVar19 * -8 + 8);
    fVar3 = fStack_3e8;
    fVar11 = fStack_3ec;
    afStack_738[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
         *(float *)((uint)bVar19 * -8 + 0x2038f58 + (uint)bVar19 * -8);
    fStack_5c0 = CStack_744.y;
    afStack_5f0[(uint)bVar19 * -2 + 0xd] = afStack_738[(uint)bVar19 * -2 + -1];
    afStack_5f0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0xe] =
         afStack_738[(uint)bVar19 * -2 + (uint)bVar19 * -2];
    afStack_1e4[2] = fVar11 - fStack_5c0;
    afStack_1e4[3] = fVar3 - fStack_5bc;
    fStack_1d4 = fStack_3e4 - fStack_5b8;
    fStack_494 = fVar11 - fStack_5c0;
    afStack_490[(uint)bVar19 * -2] = afStack_1e4[(uint)bVar19 * -2 + 3];
    afStack_490[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         afStack_1e4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
    fStack_60 = SQRT(afStack_490[1] * afStack_490[1] +
                     fStack_494 * fStack_494 + afStack_490[0] * afStack_490[0]);
    if (fStack_60 <= 0.0) {
      afStack_490[0] = 0.0;
      fStack_494 = 0.0;
      afStack_490[1] = 0.0;
    }
    else {
      fVar11 = 1.0 / fStack_60;
      fStack_494 = fStack_494 * fVar11;
      afStack_490[0] = afStack_490[0] * fVar11;
      afStack_490[1] = afStack_490[1] * fVar11;
    }
    fStack_494 = fStack_494 * _DAT_005c3c08;
    afStack_490[0] = afStack_490[0] * _DAT_005c3c08;
    afStack_490[1] = afStack_490[1] * _DAT_005c3c08;
    fStack_164 = fStack_5c0 + fStack_494;
    afStack_160[0] = fStack_5bc + afStack_490[0];
    afStack_160[1] = fStack_5b8 + afStack_490[1];
    fStack_248 = fStack_164;
    afStack_244[(uint)bVar19 * -2] = afStack_160[(uint)bVar19 * -2];
    afStack_244[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         afStack_160[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    if (&fStack_3ec != &fStack_248) {
      fStack_3ec = fStack_248;
      fStack_3e8 = afStack_244[0];
      fStack_3e4 = afStack_244[1];
    }
    core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,4);
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
              (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
    _DAT_01d22c2c = (CDemonActor *)0x0;
    iStack_b0 = 0;
    while( true ) {
      iVar6 = iStack_b0 + 1;
      bVar1 = 3 < iStack_b0;
      pCVar13 = _DAT_01d22c2c;
      iStack_b0 = iVar6;
      if (((bVar1) ||
          (fStack_40 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr),
          pCVar13 = _DAT_01d22c2c, fStack_28 = fStack_40, fStack_40 < 0.0)) ||
         (0x3f800000 < (int)fStack_40)) goto LAB_004c23a6;
      pCVar10 = g_CDemonSetPtr->collision_actor;
      pCVar13 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar10,g_CDoorClassInfo.name_hash);
      if (((pCVar13 != (CDemonActor *)0x0) &&
          (pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar10,g_CDoorClassInfo.name_hash)
          , pCVar13[2].orient.vec.x == 0.0)) &&
         (iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                            (0x01C6E360,(char *)((int)&pCVar13[2].orient + 8)), iVar6 == 0))
      break;
      pCVar13 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar10,g_CBoxActorClassInfo.name_hash);
      if (pCVar13 != (CDemonActor *)0x0) {
        pCVar9 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar10,g_CBoxActorClassInfo.name_hash)
        ;
        pCVar13 = _DAT_01d22c2c;
        if (pCVar9[2].health != 0) {
          _DAT_01d22c2c = pCVar10;
          *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b68) = 4;
          pCVar13 = _DAT_01d22c2c;
        }
        goto LAB_004c23a6;
      }
      pCVar9 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar10,g_CWeaponClassInfo.name_hash);
      pCVar13 = pCVar10;
      if (pCVar9 != (CDemonActor *)0x0) goto LAB_004c23a6;
      pCVar9 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar10,g_CAmmoClassInfo.name_hash);
      if (pCVar9 != (CDemonActor *)0x0) {
        pCVar13 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar10,g_CAmmoClassInfo.name_hash);
        iVar6 = (*((pCVar13->vtable)._ub)->canPickup)
                          (pCVar13,*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
        pCVar13 = _DAT_01d22c2c;
        if (iVar6 != 5) {
          pCVar13 = pCVar10;
        }
        goto LAB_004c23a6;
      }
      pCVar9 = (CHealthItem *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar10,g_CHealthItemClassInfo.name_hash)
      ;
      if (pCVar9 != (CDemonActor *)0x0) {
        pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (pCVar10,g_CHealthItemClassInfo.name_hash);
        iVar6 = (*((pCVar13->vtable)._ub)->canPickup)
                          (pCVar13,*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
        pCVar13 = _DAT_01d22c2c;
        if (iVar6 != 5) {
          pCVar13 = pCVar10;
        }
        goto LAB_004c23a6;
      }
      pCVar9 = (CLever *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar10,g_CLeverClassInfo.name_hash);
      if (pCVar9 != (CDemonActor *)0x0) {
        _DAT_01d22c2c = pCVar10;
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b68) = 8;
        pCVar13 = _DAT_01d22c2c;
        goto LAB_004c23a6;
      }
      pCVar9 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar10,g_CEnemyClassInfo.name_hash);
      if (pCVar9 != (CDemonActor *)0x0) {
        pCVar7 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c840(pCVar10,g_CEnemyClassInfo.name_hash);
        EVar8 = (*(((pCVar7->base).vtable._uc)->_uc).getDeathState)(pCVar7);
        if (EVar8 == DEATH_STATE_ALIVE) goto LAB_004c23a6;
      }
      pCVar9 = (CNPC *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar10,g_CNPCClassInfo.name_hash);
      if (pCVar9 != (CDemonActor *)0x0) goto LAB_004c23a6;
      pCVar9 = (CConstruct *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar10,g_CConstructClassInfo.name_hash);
      if (((pCVar9 != (CDemonActor *)0x0) &&
          (pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (pCVar10,g_CConstructClassInfo.name_hash),
          pCVar9[0xa0].previous_transform_state.dirty_flags == 1)) &&
         (-1 < pCVar9[0xa0].render_needs_update)) {
        _DAT_01d22c2c =
             (CDemonActor *)
             (&pCVar9[0x9c].orient_matrix)[pCVar9[0xa0].render_needs_update * 2 + -1].m[1].y;
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b68) = 4;
        pCVar13 = _DAT_01d22c2c;
        goto LAB_004c23a6;
      }
      pCVar9 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar10,g_CHeroClassInfo.name_hash);
      iVar6 = _DAT_01d5ba14;
      if ((pCVar9 != (CDemonActor *)0x0) &&
         (pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar10,g_CHeroClassInfo.name_hash),
         pCVar9 != *(CDemonActor **)(iVar6 * 4 + 0x1d5ba04))) goto LAB_004c23a6;
      pCVar13 = _DAT_01d22c2c;
      if (pCVar10 != _DAT_01d22c2c) {
        iVar14 = 0;
        iVar6 = 0;
        while ((pCVar13 = _DAT_01d22c2c, iVar6 < g_CDemonSetPtr->actor_count &&
               ((pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c840
                                     (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar14),
                                      g_CTriggerClassInfo.name_hash), pCVar13 == (CDemonActor *)0x0
                || (pCVar10 != (CDemonActor *)pCVar13[2].orient_matrix.m[1].y))))) {
          iVar6 = iVar6 + 1;
          iVar14 = iVar14 + 4;
        }
      }
      _DAT_01d22c2c = pCVar13;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCVar10);
      pCVar13 = _DAT_01d22c2c;
      if ((fStack_40 < 0.0) || (0x3f800000 < (int)fStack_40)) goto LAB_004c23a6;
    }
    _DAT_01d22c2c = pCVar10;
    *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b68) = 3;
    pCVar13 = _DAT_01d22c2c;
LAB_004c23a6:
    _DAT_01d22c2c = pCVar13;
    if (_DAT_01d22c2c == (CDemonActor *)0x0) {
      core_hero_cpp_FUN_004d3210();
    }
    else {
      pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (_DAT_01d22c2c,g_CTriggerClassInfo.name_hash);
      uVar4 = g_CTriggerClassInfo.name_hash;
      pCVar13 = _DAT_01d22c2c;
      iVar6 = _DAT_01d5ba14 * 4;
      if (pCVar10 == (CDemonActor *)0x0) {
        *(CDemonActor **)(*(int *)(iVar6 + 0x1d5ba04) + 0x20b6c) = _DAT_01d22c2c;
        *(CDemonActor **)(*(int *)(iVar6 + 0x1d5ba04) + 0x20b70) = pCVar13;
        *(uint *)(*(int *)(iVar6 + 0x1d5ba04) + 0x20b7c) = 0;
        *(uint *)(*(int *)(iVar6 + 0x1d5ba04) + 0x20b78) = 1;
      }
      else {
        *(uint *)(*(int *)(iVar6 + 0x1d5ba04) + 0x20b68) = 1;
        pCVar13 = _DAT_01d22c2c;
        *(CDemonActor **)(*(int *)(iVar6 + 0x1d5ba04) + 0x20b6c) = _DAT_01d22c2c;
        pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar13,uVar4);
        iVar6 = _DAT_01d5ba14;
        *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b70) =
             pCVar13[2].orient_matrix.m[1].y;
        *(uint *)(*(int *)(iVar6 * 4 + 0x1d5ba04) + 0x20b7c) = 0;
        *(uint *)(*(int *)(iVar6 * 4 + 0x1d5ba04) + 0x20b78) = 1;
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
    if (_DAT_01d1e34c != (CCharacter *)0x0) {
      _DAT_01d22b48 = (CDemonActor *)0x7;
    }
  }
  else {
    iVar6 = core_actor_cpp_isOfClass_FUN_0040c790(_DAT_01d22c2c,"BCEnemy" + 1);
    if (iVar6 == 0) {
      _DAT_01d22b48 = (CDemonActor *)0x5;
    }
    else {
      _DAT_01d22b48 = (CDemonActor *)0x6;
    }
  }
  pCStack_74 = (CDemonActor *)0x0;
  if ((_DAT_01d1e324 == 0) && ((_DAT_01c5fae4 == 1 || ((_DAT_01c5fae4 & 2) != 0)))) {
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
              (&g_CDemonCameraInstance,local_88,local_4c,&CStack_530);
    pCVar21 = aCStack_1c4;
    aCStack_1c4[0].x = CStack_530.x;
    *(uint *)((int)aCStack_1c4 + (uint)bVar19 * -8 + 4) =
         *(uint *)((int)&CStack_530 + (uint)bVar19 * -8 + 4);
    *(uint *)((int)aCStack_1c4 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
         *(uint *)((int)&CStack_530 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
    core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
              (&g_CDemonCameraInstance,pCVar21,(CVector3i *)&CStack_43c.min.z);
    aCStack_1c4[0].x = (int)CStack_43c.min.z;
    *(uint *)((int)aCStack_1c4 + (uint)bVar19 * -8 + 4) =
         *(uint *)((int)&CStack_43c + (uint)bVar19 * -8 + 0xc);
    *(uint *)((int)aCStack_1c4 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
         *(uint *)((int)&CStack_43c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 0x10);
    fStack_2a8 = (float)aCStack_1c4[0].x * _DAT_005e06e4;
    fStack_2a4 = (float)aCStack_1c4[0].y * _DAT_005e06e4;
    fStack_2a0 = (float)aCStack_1c4[0].z * _DAT_005e06e4;
    fStack_e0 = g_CDemonCameraInstance.base.position.f.x;
    afStack_dc[(uint)bVar19 * -2] = *(float *)((int)&g_CDemonCameraInstance + (uint)bVar19 * -8 + 8)
    ;
    afStack_dc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         *(float *)((uint)bVar19 * -8 + 0x2038f58 + (uint)bVar19 * -8);
    fVar3 = fStack_2a4;
    fVar11 = fStack_2a8;
    fStack_6d4 = fStack_e0;
    afStack_6d0[(uint)bVar19 * -2] = afStack_dc[(uint)bVar19 * -2];
    afStack_6d0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         afStack_dc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    CStack_624.y = fVar11 - fStack_6d4;
    CStack_624.z = fVar3 - afStack_6d0[0];
    fStack_618 = fStack_2a0 - afStack_6d0[1];
    fStack_2cc = fVar11 - fStack_6d4;
    *(uint *)((int)&CStack_2c8 + (uint)bVar19 * -8) =
         *(uint *)((int)&CStack_624 + (uint)bVar19 * -8 + 8);
    afStack_2bc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + -2] =
         (&fStack_618)[(uint)bVar19 * -2 + (uint)bVar19 * -2];
    fStack_a8 = SQRT(CStack_2c8.y * CStack_2c8.y +
                     fStack_2cc * fStack_2cc + CStack_2c8.x * CStack_2c8.x);
    if (fStack_a8 <= 0.0) {
      CStack_2c8.x = 0.0;
      fStack_2cc = 0.0;
      CStack_2c8.y = 0.0;
    }
    else {
      fVar11 = 1.0 / fStack_a8;
      fStack_2cc = fStack_2cc * fVar11;
      CStack_2c8.x = CStack_2c8.x * fVar11;
      CStack_2c8.y = CStack_2c8.y * fVar11;
    }
    fStack_2cc = fStack_2cc * _DAT_005c3c08;
    CStack_2c8.x = CStack_2c8.x * _DAT_005c3c08;
    CStack_2c8.y = CStack_2c8.y * _DAT_005c3c08;
    afStack_598[2] = fStack_6d4 + fStack_2cc;
    afStack_598[3] = afStack_6d0[0] + CStack_2c8.x;
    fStack_588 = afStack_6d0[1] + CStack_2c8.y;
    fStack_680 = afStack_598[2];
    afStack_6b4[(uint)bVar19 * -2 + 0xe] = afStack_598[(uint)bVar19 * -2 + 3];
    afStack_6b4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0xf] =
         afStack_598[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
    if (afStack_2bc + 5 != afStack_6b4 + 0xd) {
      fStack_2a8 = fStack_680;
      fStack_2a4 = fStack_67c;
      fStack_2a0 = fStack_678;
    }
    _DAT_01d1e354 = 0;
    core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,4);
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
              (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
    iStack_44 = 0;
    while (iVar6 = iStack_44, iStack_44 = iStack_44 + 1, iVar6 < 4) {
      fStack_28 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr);
      fStack_3c = fStack_28;
      if ((fStack_28 < 0.0) || (0x3f800000 < (int)fStack_28)) break;
      pCVar13 = g_CDemonSetPtr->collision_actor;
      pCVar10 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar13,g_CDoorClassInfo.name_hash);
      if ((pCVar10 != (CDemonActor *)0x0) &&
         ((pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar13,g_CDoorClassInfo.name_hash)
          , pCVar10[2].orient.vec.x == 0.0 &&
          (iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                             (0x01C6E360,(char *)((int)&pCVar10[2].orient + 8)), iVar6 == 0)))) {
        pCStack_74 = pCVar13;
        _DAT_01d1e354 = 3;
        break;
      }
      pCVar10 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar13,g_CBoxActorClassInfo.name_hash);
      if (pCVar10 != (CDemonActor *)0x0) {
        pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (pCVar13,g_CBoxActorClassInfo.name_hash);
        if (pCVar10[2].health != 0) {
          pCStack_74 = pCVar13;
          _DAT_01d1e354 = 4;
        }
        break;
      }
      pCVar10 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar13,g_CWeaponClassInfo.name_hash);
      if (pCVar10 != (CDemonActor *)0x0) {
        pCStack_74 = pCVar13;
        break;
      }
      pCVar10 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar13,g_CAmmoClassInfo.name_hash);
      if (pCVar10 != (CDemonActor *)0x0) {
        pCVar10 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar13,g_CAmmoClassInfo.name_hash);
        iVar6 = (*((pCVar10->vtable)._ub)->canPickup)
                          (pCVar10,*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
        if (iVar6 != 5) {
          pCStack_6c = pCVar13;
        }
        break;
      }
      pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (pCVar13,g_CHealthItemClassInfo.name_hash);
      if (pCVar10 != (CDemonActor *)0x0) {
        pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (pCVar13,g_CHealthItemClassInfo.name_hash);
        iVar6 = (*((pCVar10->vtable)._ub)->canPickup)
                          (pCVar10,*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
        if (iVar6 != 5) {
          pCStack_6c = pCVar13;
        }
        break;
      }
      pCVar10 = (CLever *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar13,g_CLeverClassInfo.name_hash);
      if (pCVar10 != (CDemonActor *)0x0) {
        pCStack_74 = pCVar13;
        _DAT_01d1e354 = 8;
        break;
      }
      pCVar10 = (CNPC *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar13,g_CNPCClassInfo.name_hash);
      if (pCVar10 != (CDemonActor *)0x0) {
        pCStack_74 = pCVar13;
        break;
      }
      pCVar10 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar13,g_CHeroClassInfo.name_hash);
      if (pCVar10 != (CDemonActor *)0x0) {
        pCStack_74 = pCVar13;
        break;
      }
      pCVar10 = (CConstruct *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar13,g_CConstructClassInfo.name_hash)
      ;
      if (((pCVar10 != (CDemonActor *)0x0) &&
          (pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c840
                               (pCVar13,g_CConstructClassInfo.name_hash),
          pCVar10[0xa0].previous_transform_state.dirty_flags == 1)) &&
         (-1 < pCVar10[0xa0].render_needs_update)) {
        pCStack_74 = (CDemonActor *)
                     (&pCVar10[0x9c].orient_matrix)[pCVar10[0xa0].render_needs_update * 2 + -1].m[1]
                     .y;
        _DAT_01d1e354 = 4;
        break;
      }
      pCVar10 = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar13,g_CTriggerClassInfo.name_hash);
      if (pCVar10 != (CDemonActor *)0x0) {
        pCStack_74 = pCVar13;
        break;
      }
      if (pCVar13 != pCStack_74) {
        iVar6 = 0;
        for (iVar14 = 0; iVar14 < g_CDemonSetPtr->actor_count; iVar14 = iVar14 + 1) {
          pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar6),
                               g_CTriggerClassInfo.name_hash);
          if ((pCVar10 != (CDemonActor *)0x0) &&
             (pCVar13 == (CDemonActor *)pCVar10[2].orient_matrix.m[1].y)) {
            _DAT_01d1e354 = 1;
            pCStack_74 = pCVar10;
            break;
          }
          iVar6 = iVar6 + 4;
        }
      }
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCVar13);
      if ((fStack_3c < 0.0) || (0x3f800000 < (int)fStack_3c)) break;
    }
    _DAT_01d1e350 = pCStack_74;
  }
  if ((pCStack_b4 == (CCharacter *)0x0) && ((_DAT_01c5fae4 & 2) != 0)) {
    param_2[3] = 1;
  }
  if ((((local_50 != (CDemonActor *)0x0) &&
       (pCVar13 = *(CDemonActor **)(local_50[0x186].actor_name + 0x14),
       pCVar13 != (CDemonActor *)0x0)) &&
      ((pCVar13[2].orient.vec.x == 4.2039e-45 ||
       (((iVar6 = core_actor_cpp_isOfClass_FUN_0040c790(pCVar13,"CStorm"), iVar6 != 0 ||
         (iVar6 = core_actor_cpp_isOfClass_FUN_0040c790(pCVar13,"CHeal"), iVar6 != 0)) ||
        (iVar6 = core_actor_cpp_isOfClass_FUN_0040c790(pCVar13,"CFireStaff"), iVar6 != 0)))
       ))) && (_DAT_01d1e34c = (CCharacter *)0x0, _DAT_01d22b48 == (CDemonActor *)0x5)) {
    _DAT_01d22b48 = (CDemonActor *)0x0;
  }
  if ((pCStack_b4 == (CCharacter *)0x0) || ((_DAT_01c5fae4 & 2) == 0)) {
    if (pCStack_b4 == (CCharacter *)0x0) {
      _DAT_01d1e34c = pCStack_b4;
    }
  }
  else {
    if (((local_50 == (CDemonActor *)0x0) || (*(int *)(local_50[0x186].actor_name + 0x14) == 0)) ||
       (*(int *)(*(int *)(local_50[0x186].actor_name + 0x14) + 0x2e0) != 3)) {
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
                (&g_CDemonCameraInstance,local_88,local_4c,(CVector3i *)(auStack_378 + 4));
      pCVar21 = aCStack_20c;
      aCStack_20c[0].x = auStack_378._4_4_;
      *(float *)((int)aCStack_20c + (uint)bVar19 * -8 + 4) = afStack_370[(uint)bVar19 * -2];
      *(float *)((int)aCStack_20c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           afStack_370[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
      core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
                (&g_CDemonCameraInstance,pCVar21,&CStack_1d0);
      aCStack_20c[0].x = CStack_1d0.x;
      *(uint *)((int)aCStack_20c + (uint)bVar19 * -8 + 4) =
           *(uint *)((int)aCStack_1c4 + (uint)bVar19 * -8 + -8);
      *(uint *)((int)aCStack_20c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           *(uint *)((int)aCStack_1c4 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + -4);
      CStack_43c.max.z = (float)aCStack_20c[0].x * _DAT_005e06e4;
      fStack_424 = (float)aCStack_20c[0].y * _DAT_005e06e4;
      fStack_420 = (float)aCStack_20c[0].z * _DAT_005e06e4;
      afStack_244[2] = g_CDemonCameraInstance.base.position.f.x;
      afStack_244[(uint)bVar19 * -2 + 3] =
           *(float *)((int)&g_CDemonCameraInstance + (uint)bVar19 * -8 + 8);
      afStack_244[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
           *(float *)((uint)bVar19 * -8 + 0x2038f58 + (uint)bVar19 * -8);
      fVar3 = fStack_424;
      fVar11 = CStack_43c.max.z;
      fStack_2e4 = afStack_244[2];
      afStack_2e0[(uint)bVar19 * -2] = afStack_244[(uint)bVar19 * -2 + 3];
      afStack_2e0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
           afStack_244[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
      fStack_134 = fVar11 - fStack_2e4;
      afStack_130[0] = fVar3 - afStack_2e0[0];
      afStack_130[1] = fStack_420 - afStack_2e0[1];
      afStack_5f0[3] = fVar11 - fStack_2e4;
      afStack_5f0[(uint)bVar19 * -2 + 4] = afStack_130[(uint)bVar19 * -2];
      afStack_5f0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 5] =
           afStack_130[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
      fStack_30 = SQRT(afStack_5f0[5] * afStack_5f0[5] +
                       afStack_5f0[3] * afStack_5f0[3] + afStack_5f0[4] * afStack_5f0[4]);
      if (fStack_30 <= 0.0) {
        afStack_5f0[4] = 0.0;
        afStack_5f0[3] = 0.0;
        afStack_5f0[5] = 0.0;
      }
      else {
        fVar11 = 1.0 / fStack_30;
        afStack_5f0[3] = afStack_5f0[3] * fVar11;
        afStack_5f0[4] = afStack_5f0[4] * fVar11;
        afStack_5f0[5] = afStack_5f0[5] * fVar11;
      }
      afStack_5f0[3] = afStack_5f0[3] * _DAT_005c3c08;
      afStack_5f0[4] = afStack_5f0[4] * _DAT_005c3c08;
      afStack_5f0[5] = afStack_5f0[5] * _DAT_005c3c08;
      afStack_2bc[2] = fStack_2e4 + afStack_5f0[3];
      afStack_2bc[3] = afStack_2e0[0] + afStack_5f0[4];
      fStack_2ac = afStack_2e0[1] + afStack_5f0[5];
      afStack_160[2] = afStack_2bc[2];
      afStack_160[(uint)bVar19 * -2 + 3] = afStack_2bc[(uint)bVar19 * -2 + 3];
      afStack_160[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
           afStack_2bc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
      if (&CStack_43c.max.z != afStack_160 + 2) {
        CStack_43c.max.z = afStack_160[2];
        fStack_424 = afStack_160[3];
        fStack_420 = fStack_150;
      }
      core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,4);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
      iVar6 = 0;
      while (iVar6 < 4) {
        fVar11 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr);
        fStack_28 = fVar11;
        if ((fVar11 < 0.0) || (0x3f800000 < (int)fVar11)) break;
        pCVar7 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (g_CDemonSetPtr->collision_actor,g_CEnemyClassInfo.name_hash);
        if ((pCVar7 != (CCharacter *)0x0) &&
           (EVar8 = (*(((pCVar7->base).vtable._uc)->_uc).getDeathState)(pCVar7),
           EVar8 == DEATH_STATE_ALIVE)) {
          _DAT_01d22b48 = (CDemonActor *)0x5;
          _DAT_01d1e34c = pCVar7;
          break;
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                  (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        if ((fVar11 < 0.0) || (iVar6 = iVar6 + 1, 0x3f800000 < (int)fVar11)) break;
      }
      if (_DAT_01d1e34c != (CCharacter *)0x0) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                  (*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
                   &(_DAT_01d1e34c->base).location.position,&CStack_730);
        in_stack_fffff798 = &CStack_43c;
        CStack_43c.min.x = CStack_730.x;
        *(float *)((int)&CStack_43c + (uint)bVar19 * -8 + 4) = afStack_724[(uint)bVar19 * -2 + -2];
        *(float *)((int)&CStack_43c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
             afStack_724[(uint)bVar19 * -2 + (uint)bVar19 * -2 + -1];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
        afStack_658[3] = (float)uStack_688;
        afStack_658[(uint)bVar19 * -2 + 4] = afStack_6b4[(uint)bVar19 * -2 + 0xc];
        (&pCStack_644)[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
             (CDemonActor *)afStack_6b4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0xd];
        if ((fStack_648 <= _DAT_005c3c10) || (0x3e860a91 < (int)fStack_648)) goto LAB_004c15df;
      }
    }
    else {
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
                (&g_CDemonCameraInstance,local_88,local_4c,&CStack_548);
      pCVar21 = &CStack_3f8;
      CStack_3f8.x = CStack_548.x;
      *(uint *)((int)&CStack_3f8 + (uint)bVar19 * -8 + 4) =
           *(uint *)((int)&CStack_548 + (uint)bVar19 * -8 + 4);
      *(uint *)((int)&CStack_3f8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           *(uint *)((int)&CStack_548 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
                (&g_CDemonCameraInstance,pCVar21,&CStack_ec);
      CStack_3f8.x = CStack_ec.x;
      *(uint *)((int)&CStack_3f8 + (uint)bVar19 * -8 + 4) =
           *(uint *)((int)&CStack_ec + (uint)bVar19 * -8 + 4);
      *(uint *)((int)&CStack_3f8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           *(uint *)((int)&CStack_ec + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      fStack_3c8 = (float)CStack_3f8.x * _DAT_005e06e4;
      aCStack_3c4[0].x = (float)CStack_3f8.y * _DAT_005e06e4;
      aCStack_3c4[0].y = (float)CStack_3f8.z * _DAT_005e06e4;
      fStack_2fc = g_CDemonCameraInstance.base.position.f.x;
      afStack_2f8[(uint)bVar19 * -2] =
           *(float *)((int)&g_CDemonCameraInstance + (uint)bVar19 * -8 + 8);
      afStack_2f8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
           *(float *)((uint)bVar19 * -8 + 0x2038f58 + (uint)bVar19 * -8);
      fVar3 = aCStack_3c4[0].x;
      fVar11 = fStack_3c8;
      fStack_194 = fStack_2fc;
      afStack_190[(uint)bVar19 * -2] = afStack_2f8[(uint)bVar19 * -2];
      afStack_190[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
           afStack_2f8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
      afStack_fc[1] = fVar11 - fStack_194;
      afStack_fc[2] = fVar3 - afStack_190[0];
      afStack_fc[3] = aCStack_3c4[0].y - afStack_190[1];
      fStack_26c = fVar11 - fStack_194;
      *(float *)((int)&CStack_268 + (uint)bVar19 * -8) = afStack_fc[(uint)bVar19 * -2 + 2];
      *(float *)((int)&CStack_268 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 4) =
           afStack_fc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 3];
      fStack_38 = SQRT(CStack_268.y * CStack_268.y +
                       fStack_26c * fStack_26c + CStack_268.x * CStack_268.x);
      if (fStack_38 <= 0.0) {
        CStack_268.x = 0.0;
        fStack_26c = 0.0;
        CStack_268.y = 0.0;
      }
      else {
        fVar11 = 1.0 / fStack_38;
        fStack_26c = fStack_26c * fVar11;
        CStack_268.x = CStack_268.x * fVar11;
        CStack_268.y = CStack_268.y * fVar11;
      }
      fStack_26c = fStack_26c * _DAT_005c3c08;
      CStack_268.x = CStack_268.x * _DAT_005c3c08;
      CStack_268.y = CStack_268.y * _DAT_005c3c08;
      fStack_698 = fStack_194 + fStack_26c;
      fStack_694 = afStack_190[0] + CStack_268.x;
      fStack_690 = afStack_190[1] + CStack_268.y;
      fStack_32c = fStack_698;
      afStack_354[(uint)bVar19 * -2 + 0xb] = afStack_6b4[(uint)bVar19 * -2 + 8];
      afStack_354[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0xc] =
           afStack_6b4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 9];
      if (&fStack_3c8 != afStack_354 + 10) {
        fStack_3c8 = fStack_32c;
        aCStack_3c4[0].x = fStack_328;
        aCStack_3c4[0].y = fStack_324;
      }
      core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,4);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
      core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr);
      if (&g_CDemonSetPtr->collision_impact_position != (CVector3f *)&DAT_01d22c30) {
        _DAT_01d22c30 = (CDemonActor *)(g_CDemonSetPtr->collision_impact_position).x;
        _DAT_01d22c38 = (CDemonActor *)(g_CDemonSetPtr->collision_impact_position).z;
        _DAT_01d22c34 = (CDemonActor *)(g_CDemonSetPtr->collision_impact_position).y;
      }
      iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      if ((float *)(iVar6 + 0x20) != (float *)&DAT_01d1e328) {
        _DAT_01d1e328 = *(CDemonActor **)(iVar6 + 0x20);
        _DAT_01d1e330 = *(CDemonActor **)(iVar6 + 0x28);
        _DAT_01d1e32c = *(CDemonActor **)(iVar6 + 0x24);
      }
    }
    param_2[3] = 1;
  }
LAB_004c15df:
  if (((((_DAT_01c5fae4 & 2) != 0) && (local_50 != (CDemonActor *)0x0)) &&
      (*(int *)(local_50[0x186].actor_name + 0x14) != 0)) &&
     (*(int *)(*(int *)(local_50[0x186].actor_name + 0x14) + 0x2e0) == 7)) {
    param_2[3] = 1;
  }
  if ((_DAT_01c5fae4 & 1) == 0) {
    _DAT_01d1e358 = g_CDemonSetPtr->selected_camera_index;
  }
  if ((_DAT_01c5fae4 == 1) && (g_CDemonSetPtr->selected_camera_index == _DAT_01d1e358)) {
    _DAT_01d22c30 = (CDemonActor *)0x7149f2ca;
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
              (&g_CDemonCameraInstance,local_88,local_4c,&CStack_6e0);
    pCVar13 = pCStack_74;
    CStack_6ec.x = CStack_6e0.x;
    *(uint *)((int)&CStack_6ec + (uint)bVar19 * -8 + 4) =
         *(uint *)((int)&CStack_6e0 + (uint)bVar19 * -8 + 4);
    *(uint *)((int)&CStack_6ec + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
         *(uint *)((int)&CStack_6e0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
    if (pCVar13 == (CDemonActor *)0x0) {
      if (((local_88 < 0x20) || (local_90 + -0x20 < local_88)) ||
         ((local_4c < 0x20 || (local_ac + -0x20 < local_4c)))) {
        core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
                  (&g_CDemonCameraInstance,local_90 / 2,local_ac / 2,&CStack_578);
        pCVar21 = &CStack_614;
        CStack_614.x = CStack_578.x;
        *(uint *)((int)&CStack_614 + (uint)bVar19 * -8 + 4) =
             *(uint *)((int)&CStack_578 + (uint)bVar19 * -8 + 4);
        *(uint *)((int)&CStack_614 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
             *(uint *)((int)&CStack_578 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
                  (&g_CDemonCameraInstance,pCVar21,&CStack_230);
        CStack_614.x = CStack_230.x;
        *(uint *)((int)&CStack_614 + (uint)bVar19 * -8 + 4) =
             *(uint *)((int)&CStack_230 + (uint)bVar19 * -8 + 4);
        *(uint *)((int)&CStack_614 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
             *(uint *)((int)&CStack_230 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
        afStack_5f0[0] = (float)CStack_614.x * _DAT_005e06e4;
        afStack_5f0[1] = (float)CStack_614.y * _DAT_005e06e4;
        afStack_5f0[2] = (float)CStack_614.z * _DAT_005e06e4;
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
                  (&g_CDemonCameraInstance,&CStack_6ec,&CStack_17c);
        CStack_6ec.x = CStack_17c.x;
        *(uint *)((int)&CStack_6ec + (uint)bVar19 * -8 + 4) =
             *(uint *)((int)&CStack_17c + (uint)bVar19 * -8 + 4);
        *(uint *)((int)&CStack_6ec + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
             *(uint *)((int)&CStack_17c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
        fStack_5b4 = (float)CStack_6ec.x * _DAT_005e06e4;
        fStack_5b0 = (float)CStack_6ec.y * _DAT_005e06e4;
        fStack_5ac = (float)CStack_6ec.z * _DAT_005e06e4;
        fStack_53c = (float)CStack_6ec.x * _DAT_005e06e4 - afStack_5f0[0];
        afStack_538[0] = (float)CStack_6ec.y * _DAT_005e06e4 - afStack_5f0[1];
        afStack_538[1] = (float)CStack_6ec.z * _DAT_005e06e4 - afStack_5f0[2];
        fStack_59c = fStack_53c;
        afStack_598[(uint)bVar19 * -2] = afStack_538[(uint)bVar19 * -2];
        afStack_598[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
             afStack_538[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
        fVar5 = fStack_5ac;
        fVar3 = fStack_5b0;
        fVar11 = fStack_5b4;
        fStack_70 = SQRT(afStack_598[1] * afStack_598[1] + fStack_59c * fStack_59c);
        afStack_598[0] = 0.0;
        if (fStack_70 <= 0.0) {
          fStack_59c = 0.0;
          afStack_598[1] = 0.0;
        }
        else {
          fVar2 = 1.0 / fStack_70;
          fStack_59c = fStack_59c * fVar2;
          afStack_598[0] = fVar2 * 0.0;
          afStack_598[1] = afStack_598[1] * fVar2;
        }
        if ((pCStack_b4 != (CCharacter *)0x0) && ((_DAT_01c5fae4 & 2) != 0)) {
          if (_DAT_01d1e334 != 1) {
            _DAT_01d1e334 = 0;
          }
          goto LAB_004c3ec2;
        }
        fStack_65c = fStack_59c * local_54;
        afStack_658[0] = afStack_598[0] * local_54;
        afStack_658[1] = afStack_598[1] * local_54;
        afStack_28c[2] = fStack_59c * local_54;
        afStack_28c[(uint)bVar19 * -2 + 3] = afStack_658[(uint)bVar19 * -2];
        afStack_28c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
             afStack_658[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
        pCStack_644 = (CDemonActor *)(fVar11 + afStack_28c[2]);
        afStack_640[0] = fVar3 + afStack_28c[3];
        afStack_640[1] = fVar5 + fStack_27c;
        pCStack_464 = (CDemonActor *)(fVar11 + afStack_28c[2]);
        apCStack_460[(uint)bVar19 * -2] = (CDemonActor *)afStack_640[(uint)bVar19 * -2];
        apCStack_460[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
             (CDemonActor *)afStack_640[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
        if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x25].y_min) {
          _DAT_01d1e328 = pCStack_464;
          _DAT_01d1e32c = apCStack_460[0];
          _DAT_01d1e330 = apCStack_460[1];
        }
        _DAT_01d1e344 = 0.0;
        _DAT_01d1e334 = 1;
      }
      else {
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
                  (&g_CDemonCameraInstance,&CStack_6ec,&CStack_140);
        CStack_6ec.x = CStack_140.x;
        *(uint *)((int)&CStack_6ec + (uint)bVar19 * -8 + 4) =
             *(uint *)((int)&CStack_140 + (uint)bVar19 * -8 + 4);
        *(uint *)((int)&CStack_6ec + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
             *(uint *)((int)&CStack_140 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
        CStack_408.y = (float)((float)CStack_6ec.x * _DAT_005e06e4);
        CStack_408.z = (float)((float)CStack_6ec.y * _DAT_005e06e4);
        fStack_3fc = (float)CStack_6ec.z * _DAT_005e06e4;
        fStack_1ac = g_CDemonCameraInstance.base.position.f.x;
        apCStack_1a8[(uint)bVar19 * -2] =
             *(CDemonActor **)((int)&g_CDemonCameraInstance + (uint)bVar19 * -8 + 8);
        apCStack_1a8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
             *(CDemonActor **)((uint)bVar19 * -8 + 0x2038f58 + (uint)bVar19 * -8);
        fVar3 = CStack_408.z;
        fVar11 = CStack_408.y;
        afStack_3a8[1] = fStack_1ac;
        afStack_3a8[(uint)bVar19 * -2 + 2] = (float)apCStack_1a8[(uint)bVar19 * -2];
        afStack_3a8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 3] =
             (float)apCStack_1a8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
        fStack_320 = fVar11 - afStack_3a8[1];
        fStack_31c = fVar3 - afStack_3a8[2];
        fStack_318 = fStack_3fc - afStack_3a8[3];
        fStack_38c = fVar11 - afStack_3a8[1];
        afStack_3a8[(uint)bVar19 * -2 + 8] = afStack_354[(uint)bVar19 * -2 + 0xe];
        afStack_3a8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 9] =
             afStack_354[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0xf];
        fStack_68 = SQRT(fStack_384 * fStack_384 + fStack_38c * fStack_38c + fStack_388 * fStack_388
                        );
        if (fStack_68 <= 0.0) {
          fStack_388 = 0.0;
          fStack_38c = 0.0;
          fStack_384 = 0.0;
        }
        else {
          fVar11 = 1.0 / fStack_68;
          fStack_38c = fStack_38c * fVar11;
          fStack_388 = fStack_388 * fVar11;
          fStack_384 = fStack_384 * fVar11;
        }
        fStack_38c = fStack_38c * _DAT_005c3c08;
        fStack_388 = fStack_388 * _DAT_005c3c08;
        fStack_384 = fStack_384 * _DAT_005c3c08;
        pCStack_290 = (CDemonActor *)(afStack_3a8[1] + fStack_38c);
        afStack_28c[0] = afStack_3a8[2] + fStack_388;
        afStack_28c[1] = afStack_3a8[3] + fStack_384;
        CStack_360.y = (float)pCStack_290;
        afStack_354[(uint)bVar19 * -2 + -1] = afStack_28c[(uint)bVar19 * -2];
        afStack_354[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
             afStack_28c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
        if (&CStack_408.y != &CStack_360.y) {
          CStack_408.y = CStack_360.y;
          CStack_408.z = CStack_360.z;
          fStack_3fc = afStack_354[0];
        }
        core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,4);
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                  (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
        core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr);
        if ((pCStack_b4 != (CCharacter *)0x0) && ((_DAT_01c5fae4 & 2) != 0)) {
          if (_DAT_01d1e334 != 1) {
            _DAT_01d1e334 = 0;
          }
LAB_004c3ec2:
          _DAT_01d22c30 = (CDemonActor *)0x7149f2ca;
          goto LAB_004c3ecc;
        }
        if (_DAT_01c5fae4 != 1) goto LAB_004c3ecc;
        if (&g_CDemonSetPtr->collision_impact_position != (CVector3f *)&DAT_01d1e328) {
          _DAT_01d1e328 = (CDemonActor *)(g_CDemonSetPtr->collision_impact_position).x;
          _DAT_01d1e330 = (CDemonActor *)(g_CDemonSetPtr->collision_impact_position).z;
          _DAT_01d1e32c = (CDemonActor *)(g_CDemonSetPtr->collision_impact_position).y;
        }
        _DAT_01d1e344 = 0.0;
        _DAT_01d1e334 = 1;
      }
LAB_004c3ed9:
      if (*(int *)(param_1 + 0xb0) == 0) {
        bVar20 = (&DAT_01c6cef0)[*(int *)(param_1 + 0x30)];
      }
      else {
        bVar20 = (&DAT_01c6cef0)[*(int *)(param_1 + 0x30)] == '\0';
      }
      param_2[2] = (uint)bVar20;
      if (param_2[2] == 0) {
        _DAT_01d1e348 = 0;
      }
      else {
        _DAT_01d1e348 = 1;
      }
    }
    else {
      if (((_DAT_01c5fae4 & 2) != 0) && (_DAT_01d1e34c == (CCharacter *)0x0)) {
        pCVar7 = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        _DAT_01d1e320 = 1;
        if (pCVar7[2].flames[0x14].render_corona == 0) {
          core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0(pCVar7);
          local_844 = 2.0;
        }
      }
      local_844 = local_844 - *(float *)(param_1 + 0x314);
      this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (pCStack_74,g_CDoorClassInfo.name_hash);
      pCVar13 = pCStack_74;
      pCStack_a4 = this_ptr_00;
      pCStack_a0 = core_actor_cpp_castToClassHash_FUN_0040c840
                             (pCStack_74,g_CCharacterClassInfo.name_hash);
      pCStack_24 = pCStack_a0;
      pCStack_9c = (CLever *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar13,g_CLeverClassInfo.name_hash);
      pCStack_18 = pCStack_9c;
      pCStack_98 = core_actor_cpp_castToClassHash_FUN_0040c840
                             (pCVar13,g_CTriggerClassInfo.name_hash);
      pCStack_94 = core_actor_cpp_castToClassHash_FUN_0040c840
                             (pCVar13,g_CBoxActorClassInfo.name_hash);
      pCStack_1c = pCStack_94;
      pCStack_84 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar13,g_CMeleeClassInfo.name_hash);
      actor_ptr = pCStack_74;
      this_ptr_01 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (pCStack_74,g_CWeaponClassInfo.name_hash);
      this_ptr = pCStack_84;
      pCVar9 = pCStack_98;
      pCVar10 = pCStack_9c;
      pCVar13 = pCStack_a4;
      pCStack_20 = this_ptr_01;
      out_box = (CBoundingBox3D *)0x40200000;
      if (pCStack_a0 == (CDemonActor *)0x0) {
        if (this_ptr_00 == (CDemonActor *)0x0) {
          iVar6 = _DAT_01d5ba14 * 4;
          if (pCStack_9c == (CDemonActor *)0x0) {
            if (pCStack_94 == (CDemonActor *)0x0) {
              if (pCStack_84 == (CDemonActor *)0x0) {
                if (this_ptr_01 == (CDemonActor *)0x0) {
                  if (pCStack_98 == (CDemonActor *)0x0) {
                    if ((_DAT_01c5fae4 == 1) &&
                       (&pCStack_74->location != (CLocation *)&DAT_01d1e328)) {
                      _DAT_01d1e328 = (CDemonActor *)(pCStack_74->location).position.x;
                      _DAT_01d1e330 = (CDemonActor *)(pCStack_74->location).position.z;
                      _DAT_01d1e32c = (CDemonActor *)(pCStack_74->location).position.y;
                    }
                  }
                  else {
                    pCVar12 = (CVector3f *)(*(int *)(iVar6 + 0x1d5ba04) + 0x20);
                    pfVar16 = (float *)((int)pCStack_98 + (uint)bVar19 * -8 + 0x24);
                    fStack_11c = (pCStack_98->location).position.x;
                    (&fStack_118)[(uint)bVar19 * -2] = *pfVar16;
                    apCStack_114[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
                         (CDemonActor *)pfVar16[(uint)bVar19 * -2 + 1];
                    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                              (pCVar9,pCVar12,&CStack_224);
                    pCVar13 = pCStack_98;
                    fStack_118 = *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x24);
                    (*((pCStack_98->vtable)._ub)->getBoundingBox)(pCStack_98,in_stack_fffff798);
                    puVar15 = auStack_7ec;
                    puVar18 = (uint *)&stack0xfffff7f4;
                    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                      *puVar18 = *puVar15;
                      puVar15 = puVar15 + (uint)bVar19 * -2 + 1;
                      puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
                    }
                    auStack_4bc._4_4_ = pCStack_7f4;
                    auStack_4bc._0_4_ = (CDemonActor *)0x0;
                    apCStack_4b4[0] = (CDemonActor *)0x0;
                    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                              (pCVar13,(CVector3f *)auStack_4bc,&CStack_624);
                    pCStack_258 = (CDemonActor *)CStack_624.x;
                    apCStack_254[(uint)bVar19 * -2] =
                         *(CDemonActor **)((int)&CStack_624 + (uint)bVar19 * -8 + 4);
                    apCStack_254[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                         *(CDemonActor **)
                          ((int)&CStack_624 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
                    if ((CDemonActor **)auStack_4bc != &pCStack_258) {
                      auStack_4bc._0_4_ = pCStack_258;
                      auStack_4bc._4_4_ = apCStack_254[0];
                      apCStack_4b4[0] = apCStack_254[1];
                    }
                    if (&stack0x00000000 != g_CDemonLightInstance.base.camera_name + 0x9c) {
                      _DAT_01d1e328 = apCStack_114[0];
                      _DAT_01d1e32c = apCStack_114[1];
                      _DAT_01d1e330 = apCStack_114[2];
                    }
                    if ((EBloodType *)&stack0x00000000 != &g_BloodParticles[7].blood_type) {
                      _DAT_01d22c30 = (CDemonActor *)auStack_4bc._0_4_;
                      _DAT_01d22c34 = (CDemonActor *)auStack_4bc._4_4_;
                      _DAT_01d22c38 = apCStack_4b4[0];
                    }
                  }
                }
                else {
                  pCVar12 = (CVector3f *)(*(int *)(iVar6 + 0x1d5ba04) + 0x20);
                  puVar15 = (uint *)((int)this_ptr_01 + (uint)bVar19 * -8 + 0x24);
                  apCStack_254[0] = (CDemonActor *)(this_ptr_01->location).position.x;
                  apCStack_254[(uint)bVar19 * -2 + 1] = (CDemonActor *)*puVar15;
                  apCStack_254[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 2] =
                       (CDemonActor *)puVar15[(uint)bVar19 * -2 + 1];
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                            (this_ptr_01,pCVar12,&CStack_314);
                  apCStack_254[1] =
                       *(CDemonActor **)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x24);
                  if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[4].y_min) {
                    _DAT_01d1e328 = apCStack_254[0];
                    _DAT_01d1e330 = apCStack_254[2];
                    _DAT_01d1e32c = apCStack_254[1];
                  }
                  if (&pCStack_20->location != (CLocation *)&DAT_01d22c30) {
                    _DAT_01d22c30 = (CDemonActor *)(pCStack_20->location).position.x;
                    _DAT_01d22c38 = (CDemonActor *)(pCStack_20->location).position.z;
                    _DAT_01d22c34 = (CDemonActor *)(pCStack_20->location).position.y;
                  }
                }
              }
              else {
                pfVar16 = (float *)((int)pCStack_84 + (uint)bVar19 * -8 + 0x24);
                afStack_640[2] = (pCStack_84->location).position.x;
                afStack_640[(uint)bVar19 * -2 + 3] = *pfVar16;
                apCStack_630[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
                     (CDemonActor *)pfVar16[(uint)bVar19 * -2 + 1];
                (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_fffff798);
                puVar15 = auStack_7bc;
                puVar18 = auStack_7dc;
                for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar18 = *puVar15;
                  puVar15 = puVar15 + (uint)bVar19 * -2 + 1;
                  puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
                }
                CStack_408.z = (float)pCStack_7c0;
                CStack_408.x = (float)pCVar10;
                CStack_408.y = (float)pCVar10;
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                          (pCStack_7c,&CStack_408,(CVector3f *)auStack_378);
                CStack_6c0.x = (float)auStack_378._0_4_;
                afStack_6b4[(uint)bVar19 * -2 + -2] = afStack_370[(uint)bVar19 * -2 + -1];
                afStack_6b4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + -1] =
                     afStack_370[(uint)bVar19 * -2 + (uint)bVar19 * -2];
                if (&CStack_408 != &CStack_6c0) {
                  CStack_408.x = CStack_6c0.x;
                  CStack_408.y = CStack_6c0.y;
                  CStack_408.z = CStack_6c0.z;
                }
                apCStack_630[1] = *(CDemonActor **)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x24);
                if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x42].x_max) {
                  _DAT_01d1e328 = apCStack_630[0];
                  _DAT_01d1e330 = apCStack_630[2];
                  _DAT_01d1e32c = apCStack_630[1];
                }
                if ((float *)&stack0x00000000 != &g_BloodParticles[5].base.acceleration.y) {
                  _DAT_01d22c30 = (CDemonActor *)CStack_408.x;
                  _DAT_01d22c34 = (CDemonActor *)CStack_408.y;
                  _DAT_01d22c38 = (CDemonActor *)CStack_408.z;
                }
              }
            }
            else {
              iVar6 = *(int *)(iVar6 + 0x1d5ba04);
              puVar15 = (uint *)((int)pCStack_94 + (uint)bVar19 * -8 + 0x24);
              pCStack_47c = (CDemonActor *)(pCStack_94->location).position.x;
              apCStack_478[(uint)bVar19 * -2] = (CDemonActor *)*puVar15;
              apCStack_478[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                   (CDemonActor *)puVar15[(uint)bVar19 * -2 + 1];
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                        (pCStack_94,(CVector3f *)(iVar6 + 0x20),&CStack_6f8);
              apCStack_478[0] = *(CDemonActor **)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x24);
              if ((CRect *)&stack0x00000000 != g_CDemonLightInstance.base.rect_array + 0x27) {
                _DAT_01d1e328 = pCStack_47c;
                _DAT_01d1e330 = apCStack_478[1];
                _DAT_01d1e32c = apCStack_478[0];
              }
              if (&pCStack_1c->location != (CLocation *)&DAT_01d22c30) {
                _DAT_01d22c30 = (CDemonActor *)(pCStack_1c->location).position.x;
                _DAT_01d22c38 = (CDemonActor *)(pCStack_1c->location).position.z;
                _DAT_01d22c34 = (CDemonActor *)(pCStack_1c->location).position.y;
              }
            }
          }
          else {
            pCVar12 = (CVector3f *)(*(int *)(iVar6 + 0x1d5ba04) + 0x20);
            puVar15 = (uint *)((int)pCStack_9c + (uint)bVar19 * -8 + 0x24);
            pCStack_4dc = (CDemonActor *)(pCStack_9c->location).position.x;
            apCStack_4d8[(uint)bVar19 * -2] = (CDemonActor *)*puVar15;
            apCStack_4d8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                 (CDemonActor *)puVar15[(uint)bVar19 * -2 + 1];
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0(pCVar10,pCVar12,&CStack_5a8);
            iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            fStack_398 = CStack_5a8.x;
            afStack_3a8[(uint)bVar19 * -2 + 5] =
                 *(float *)((int)&CStack_5a8 + (uint)bVar19 * -8 + 4);
            afStack_3a8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 6] =
                 *(float *)((int)&CStack_5a8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            apCStack_4d8[0] = *(CDemonActor **)(iVar6 + 0x24);
            if (0.0 <= fStack_390) {
              CStack_d4.x = 0.0;
              CStack_d4.y = 0.0;
              CStack_d4.z = 2.0;
              core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                        (pCStack_9c,&CStack_d4,(CVector3f *)(auStack_4bc + 4));
              CStack_2c8.z = (float)auStack_4bc._4_4_;
              afStack_2bc[(uint)bVar19 * -2] = (float)apCStack_4b4[(uint)bVar19 * -2];
              afStack_2bc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                   (float)apCStack_4b4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
              pCStack_4dc = (CDemonActor *)((float)pCStack_4dc + CStack_2c8.z);
              apCStack_4d8[0] = (CDemonActor *)((float)apCStack_4d8[0] + afStack_2bc[0]);
              apCStack_4d8[1] = (CDemonActor *)((float)apCStack_4d8[1] + afStack_2bc[1]);
            }
            else {
              CStack_128.x = 0.0;
              CStack_128.y = 0.0;
              CStack_128.z = -2.0;
              core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                        (pCVar10,&CStack_128,&CStack_308);
              CStack_1a0.x = CStack_308.x;
              *(uint *)((int)&CStack_1a0 + (uint)bVar19 * -8 + 4) =
                   *(uint *)((int)&CStack_308 + (uint)bVar19 * -8 + 4);
              *(uint *)((int)&CStack_1a0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
                   *(uint *)((int)&CStack_308 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
              pCStack_4dc = (CDemonActor *)((float)pCStack_4dc + CStack_1a0.x);
              apCStack_4d8[0] = (CDemonActor *)((float)apCStack_4d8[0] + CStack_1a0.y);
              apCStack_4d8[1] = (CDemonActor *)((float)apCStack_4d8[1] + CStack_1a0.z);
            }
            if ((CRect *)&stack0x00000000 != g_CDemonLightInstance.base.rect_array + 0x2d) {
              _DAT_01d1e328 = pCStack_4dc;
              _DAT_01d1e32c = apCStack_4d8[0];
              _DAT_01d1e330 = apCStack_4d8[1];
            }
            if (&pCStack_18->location != (CLocation *)&DAT_01d22c30) {
              _DAT_01d22c30 = (CDemonActor *)(pCStack_18->location).position.x;
              _DAT_01d22c38 = (CDemonActor *)(pCStack_18->location).position.z;
              _DAT_01d22c34 = (CDemonActor *)(pCStack_18->location).position.y;
            }
          }
        }
        else if ((this_ptr_00[7].lifecycle_state == ACTOR_NOT_CREATED) &&
                (this_ptr_00[2].location.position.z != 0.0)) {
          (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_fffff798);
          puVar15 = auStack_7a4;
          puVar18 = auStack_764;
          for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar18 = *puVar15;
            puVar15 = puVar15 + (uint)bVar19 * -2 + 1;
            puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
          }
          fStack_504 = fStack_75c + fStack_750;
          afStack_500[0] = fStack_758 + fStack_74c;
          afStack_500[1] = fStack_754 + fStack_748;
          fStack_414 = fStack_75c + fStack_750;
          afStack_410[(uint)bVar19 * -2] = afStack_500[(uint)bVar19 * -2];
          afStack_410[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
               afStack_500[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
          pCVar12 = &CStack_4ec;
          afStack_3a8[0] = fStack_414 * _DAT_005c3c14;
          afStack_3a8[1] = afStack_410[0] * _DAT_005c3c14;
          afStack_3a8[2] = afStack_410[1] * _DAT_005c3c14;
          CStack_4ec.x = fStack_414 * _DAT_005c3c14;
          *(float *)((int)&CStack_4ec + (uint)bVar19 * -8 + 4) = afStack_3a8[(uint)bVar19 * -2 + 1];
          *(float *)((int)&CStack_4ec + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
               afStack_3a8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 2];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(this_ptr_00,pCVar12,&CStack_744)
          ;
          pCVar12 = (CVector3f *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20);
          fStack_180 = CStack_744.x;
          *(float *)((int)&CStack_17c + (uint)bVar19 * -8) = afStack_738[(uint)bVar19 * -2 + -2];
          *(float *)((int)&CStack_17c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 4) =
               afStack_738[(uint)bVar19 * -2 + (uint)bVar19 * -2 + -1];
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0(this_ptr_00,pCVar12,&CStack_360)
          ;
          fStack_5f4 = CStack_360.x;
          afStack_5f0[(uint)bVar19 * -2] = afStack_354[(uint)bVar19 * -2 + -2];
          afStack_5f0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
               afStack_354[(uint)bVar19 * -2 + (uint)bVar19 * -2 + -1];
          (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,out_box);
          pfVar16 = &fStack_76c;
          pfVar17 = (float *)&stack0xfffff7e4;
          for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pfVar17 = *pfVar16;
            pfVar16 = pfVar16 + (uint)bVar19 * -2 + 1;
            pfVar17 = pfVar17 + (uint)bVar19 * -2 + 1;
          }
          CStack_17c.z = (int)fStack_814;
          if (0.0 <= afStack_5f0[3]) {
            aCStack_3c4[0].x = 0.0;
            aCStack_3c4[0].y = 0.0;
            aCStack_3c4[0].z = 1.5;
            core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                      (this_ptr_00,aCStack_3c4,&CStack_268);
            fStack_3ac = CStack_268.x;
            afStack_3a8[(uint)bVar19 * -2] = *(float *)((int)&CStack_268 + (uint)bVar19 * -8 + 4);
            afStack_3a8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                 *(float *)((int)&CStack_268 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            CStack_17c.y = (int)((float)CStack_17c.y + fStack_3ac);
            CStack_17c.z = (int)((float)CStack_17c.z + afStack_3a8[0]);
            CStack_170.x = CStack_170.x + afStack_3a8[1];
          }
          else {
            afStack_fc[1] = -1.5;
            auStack_104._4_4_ = 0.0;
            afStack_fc[0] = 0.0;
            core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                      (this_ptr_00,(CVector3f *)(auStack_104 + 4),&CStack_2c8);
            afStack_70c[0] = CStack_2c8.x;
            afStack_70c[(uint)bVar19 * -2 + 1] = afStack_2bc[(uint)bVar19 * -2 + -2];
            afStack_70c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 2] =
                 afStack_2bc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + -1];
            CStack_17c.y = (int)((float)CStack_17c.y + afStack_70c[0]);
            CStack_17c.z = (int)((float)CStack_17c.z + afStack_70c[1]);
            CStack_170.x = CStack_170.x + afStack_70c[2];
          }
          if ((float *)&stack0x00000000 != &g_CDemonLightInstance.base.max_distance) {
            _DAT_01d1e328 = (CDemonActor *)CStack_17c.y;
            _DAT_01d1e32c = (CDemonActor *)CStack_17c.z;
            _DAT_01d1e330 = (CDemonActor *)CStack_170.x;
          }
          out_box = (CBoundingBox3D *)0x4c3643;
          (*((pCStack_94->vtable)._ub)->getBoundingBox)(pCStack_94,(CBoundingBox3D *)out_box_00);
          puVar15 = (uint *)&stack0xfffff7dc;
          puVar18 = auStack_784;
          for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar18 = *puVar15;
            puVar15 = puVar15 + (uint)bVar19 * -2 + 1;
            puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
          }
          fStack_1e8 = fStack_77c + fStack_770;
          afStack_1e4[0] = fStack_778 + fStack_76c;
          afStack_1e4[1] = fStack_774 + fStack_768;
          afStack_448[2] = fStack_77c + fStack_770;
          *(float *)((int)&CStack_43c + (uint)bVar19 * -8) = afStack_1e4[(uint)bVar19 * -2];
          *(float *)((int)&CStack_43c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 4) =
               afStack_1e4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
          pCVar12 = &CStack_470;
          CStack_1d0.x = (int)(afStack_448[2] * _DAT_005c3c14);
          CStack_1d0.y = (int)(CStack_43c.min.x * _DAT_005c3c14);
          CStack_1d0.z = (int)(CStack_43c.min.y * _DAT_005c3c14);
          CStack_470.x = afStack_448[2] * _DAT_005c3c14;
          *(uint *)((int)&CStack_470 + (uint)bVar19 * -8 + 4) =
               *(uint *)((int)aCStack_1c4 + (uint)bVar19 * -8 + -8);
          *(uint *)((int)&CStack_470 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
               *(uint *)((int)aCStack_1c4 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + -4);
          out_box_00 = pCStack_8c;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(pCStack_8c,pCVar12,&CStack_1a0);
          apCStack_460[2] = (CDemonActor *)CStack_1a0.x;
          apCStack_460[(uint)bVar19 * -2 + 3] =
               *(CDemonActor **)((int)&CStack_1a0 + (uint)bVar19 * -8 + 4);
          apCStack_460[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
               *(CDemonActor **)((int)&CStack_1a0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
          if ((float *)&stack0x00000000 != &g_BloodParticles[6].base.lifetime_remaining) {
            _DAT_01d22c30 = apCStack_460[2];
            _DAT_01d22c34 = apCStack_460[3];
            _DAT_01d22c38 = pCStack_450;
          }
        }
        else {
          pCVar12 = (CVector3f *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20);
          puVar15 = (uint *)((int)pCStack_a4 + (uint)bVar19 * -8 + 0x9c0);
          pCStack_56c = (CDemonActor *)pCStack_a4[7].orient_matrix.m[2].x;
          apCStack_568[(uint)bVar19 * -2] = (CDemonActor *)*puVar15;
          apCStack_568[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
               (CDemonActor *)puVar15[(uint)bVar19 * -2 + 1];
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0(pCVar13,pCVar12,&CStack_518);
          fStack_674 = CStack_518.x;
          afStack_6b4[(uint)bVar19 * -2 + 0x11] =
               *(float *)((int)&CStack_518 + (uint)bVar19 * -8 + 4);
          afStack_6b4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x12] =
               *(float *)((int)&CStack_518 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
          if (0.0 <= fStack_66c) {
            CStack_4a0.z = 1.5;
            CStack_4a0.x = 0.0;
            CStack_4a0.y = -3.5;
            core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                      (pCVar13,&CStack_4a0,(CVector3f *)auStack_104);
            fStack_584 = (float)auStack_104._0_4_;
            afStack_598[(uint)bVar19 * -2 + 6] = *(float *)(auStack_104 + (uint)bVar19 * -8 + 4);
            afStack_598[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7] =
                 afStack_fc[(uint)bVar19 * -2 + (uint)bVar19 * -2];
            pCStack_56c = (CDemonActor *)((float)pCStack_56c + fStack_584);
            apCStack_568[0] = (CDemonActor *)((float)apCStack_568[0] + fStack_580);
            apCStack_568[1] = (CDemonActor *)((float)apCStack_568[1] + fStack_57c);
          }
          else {
            CStack_608.x = 0.0;
            CStack_608.z = -1.5;
            CStack_608.y = -3.5;
            core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                      (pCStack_a4,&CStack_608,&CStack_29c);
            afStack_5f0[6] = CStack_29c.x;
            afStack_5f0[(uint)bVar19 * -2 + 7] =
                 *(float *)((int)&CStack_29c + (uint)bVar19 * -8 + 4);
            afStack_5f0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 8] =
                 *(float *)((int)&CStack_29c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            pCStack_56c = (CDemonActor *)((float)pCStack_56c + afStack_5f0[6]);
            apCStack_568[0] = (CDemonActor *)((float)apCStack_568[0] + fStack_5d4);
            apCStack_568[1] = (CDemonActor *)((float)apCStack_568[1] + fStack_5d0);
          }
          if ((CRect *)&stack0x00000000 != g_CDemonLightInstance.base.rect_array + 0x36) {
            _DAT_01d1e328 = pCStack_56c;
            _DAT_01d1e32c = apCStack_568[0];
            _DAT_01d1e330 = apCStack_568[1];
          }
          pCVar12 = pCStack_a4[7].orient_matrix.m + 2;
          if (pCVar12 != (CVector3f *)&DAT_01d22c30) {
            _DAT_01d22c30 = (CDemonActor *)pCVar12->x;
            _DAT_01d22c38 = (CDemonActor *)pCStack_a4[7].orient_matrix.m[2].z;
            _DAT_01d22c34 = (CDemonActor *)pCStack_a4[7].orient_matrix.m[2].y;
          }
        }
      }
      else {
        iVar6 = core_actor_cpp_isOfClass_FUN_0040c790(pCStack_a0,"CEnemy");
        if (iVar6 == 0) {
          iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          puVar15 = (uint *)((int)pCStack_a0 + (uint)bVar19 * -8 + 0x24);
          apCStack_568[2] = (CDemonActor *)(pCStack_a0->location).position.x;
          apCStack_568[(uint)bVar19 * -2 + 3] = (CDemonActor *)*puVar15;
          apCStack_568[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
               (CDemonActor *)puVar15[(uint)bVar19 * -2 + 1];
          apCStack_568[3] = *(CDemonActor **)(iVar6 + 0x24);
          CStack_524.x = 0.0;
          CStack_524.y = 0.0;
          CStack_524.z = 2.0;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                    (pCStack_a0,&CStack_524,&CStack_4d0);
          afStack_500[0] = CStack_4d0.x;
          afStack_500[(uint)bVar19 * -2 + 1] = *(float *)((int)&CStack_4d0 + (uint)bVar19 * -8 + 4);
          afStack_500[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 2] =
               *(float *)((int)&CStack_4d0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
          apCStack_568[2] = (CDemonActor *)((float)apCStack_568[2] + afStack_500[0]);
          apCStack_568[3] = (CDemonActor *)((float)apCStack_568[3] + afStack_500[1]);
          pCStack_558 = (CDemonActor *)((float)pCStack_558 + afStack_500[2]);
          if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x35].x_max) {
            _DAT_01d1e328 = apCStack_568[2];
            _DAT_01d1e32c = apCStack_568[3];
            _DAT_01d1e330 = pCStack_558;
          }
          if (&pCStack_24->location != (CLocation *)&DAT_01d22c30) {
            _DAT_01d22c30 = (CDemonActor *)(pCStack_24->location).position.x;
            _DAT_01d22c38 = (CDemonActor *)(pCStack_24->location).position.z;
            _DAT_01d22c34 = (CDemonActor *)(pCStack_24->location).position.y;
          }
          out_box = (CBoundingBox3D *)0x40400000;
        }
        else {
          this_ptr_02 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c840
                                           (actor_ptr,g_CConstructClassInfo.name_hash);
          if (this_ptr_02 != (CHero *)0x0) {
            out_box = (CBoundingBox3D *)0x40a00000;
            (*(((this_ptr_02->base).base.vtable._uh)->_uh).reset)(this_ptr_02);
            apCStack_4b4[2] = (CDemonActor *)afStack_6b4[2];
            apCStack_4b4[(uint)bVar19 * -2 + 3] = (CDemonActor *)afStack_6b4[(uint)bVar19 * -2 + 3];
            apCStack_4b4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
                 (CDemonActor *)afStack_6b4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
            if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x29].y_max) {
              _DAT_01d1e328 = apCStack_4b4[3];
              _DAT_01d1e32c = pCStack_4a4;
              _DAT_01d1e330 = (CDemonActor *)CStack_4a0.x;
            }
            if ((CVector3f *)&stack0x00000000 != &g_BloodParticles[7].base.previous_position) {
              _DAT_01d22c30 = apCStack_4b4[3];
              _DAT_01d22c34 = pCStack_4a4;
              _DAT_01d22c38 = (CDemonActor *)CStack_4a0.x;
            }
          }
        }
      }
      if ((pCStack_b4 == (CCharacter *)0x0) || ((_DAT_01c5fae4 & 2) == 0)) {
        _DAT_01d1e344 = 0.0;
        _DAT_01d1e334 = 1;
        if (_DAT_01d1e34c != (CCharacter *)0x0) goto LAB_004c3ec2;
LAB_004c3ecc:
        if (_DAT_01d1e334 != 0) goto LAB_004c3ed9;
      }
      else {
        _DAT_01d22c30 = (CDemonActor *)0x7149f2ca;
        _DAT_01d1e334 = 0;
      }
    }
  }
  iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  fStack_c8 = *(float *)(iVar6 + 0x20) - (float)_DAT_01d1e328;
  afStack_c4[0] = *(float *)(iVar6 + 0x24) - (float)_DAT_01d1e32c;
  afStack_c4[1] = *(float *)(iVar6 + 0x28) - (float)_DAT_01d1e330;
  CStack_4ec.y = fStack_c8;
  *(float *)((int)&CStack_4ec + (uint)bVar19 * -8 + 8) = afStack_c4[(uint)bVar19 * -2];
  (&fStack_4e0)[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
       afStack_c4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
  fVar11 = SQRT(fStack_4e0 * fStack_4e0 + CStack_4ec.y * CStack_4ec.y + CStack_4ec.z * CStack_4ec.z)
  ;
  if (((_DAT_01d1e334 == 0) || (_DAT_01d1e34c != (CCharacter *)0x0)) &&
     ((float)_DAT_005c3c18 <= (float)_DAT_01d22c30)) goto LAB_004c1e34;
  if (fVar11 - fVar11 * (float)_DAT_005c3c20 <
      ABS((float)_DAT_01d1e32c - *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x24))) {
    _DAT_01d1e320 = 0;
    _DAT_01d22c30 = (CDemonActor *)0x7149f2ca;
    _DAT_01d1e334 = 0;
  }
  this_ptr_03 = core_path_cpp_getPathMap_FUN_0050ced0((CLocation *)&DAT_01d1e328);
  iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_0050c680
                    (this_ptr_03,(CVector3f *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20),
                     &CStack_170,0);
  if (iVar6 == 0) {
    _DAT_01d1e334 = 0;
  }
  else {
    fStack_28 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                          (CStack_170.y - *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x34)
                          );
    fStack_850 = fStack_28;
    fVar3 = fStack_28 * _DAT_005c3c28 * (float)_DAT_005c3c30;
    param_2[0xb] = fVar3;
    if (fVar3 < -(float)out_box_00) {
      param_2[0xb] = ABS(fStack_28) * -(float)out_box_00 * (float)_DAT_005c3c38;
    }
    if ((float)out_box_00 < (float)param_2[0xb]) {
      param_2[0xb] = ABS(fStack_28) * (float)out_box_00 * (float)_DAT_005c3c38;
    }
    if (ABS((float)param_2[0xb]) < (float)_DAT_005c3c40) {
      param_2[0xb] = 0;
    }
    iVar6 = _DAT_01d1e348;
    *param_2 = 1;
    if (iVar6 != 0) {
      param_2[2] = 1;
    }
  }
  if (((fVar11 < (float)out_box * _DAT_005c3c14) && (_DAT_01d1e348 == 0)) ||
     ((fVar11 < (float)out_box * (float)_DAT_005c3c48 && (_DAT_01d1e348 == 1)))) {
    *param_2 = 0;
    if ((float)_DAT_005c3c18 <= (float)_DAT_01d22c30) {
      _DAT_01d1e334 = 0;
    }
    else {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                (*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04),(CVector3f *)&DAT_01d1e328,
                 &CStack_554);
      CStack_6c0.y = CStack_554.x;
      afStack_6b4[(uint)bVar19 * -2 + -1] = *(float *)((int)&CStack_554 + (uint)bVar19 * -8 + 4);
      afStack_6b4[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
           *(float *)((int)&CStack_554 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      if (local_80 < CStack_6c0.y) {
        param_2[2] = 0;
        param_2[10] = 0x3e4ccccd;
      }
      if (CStack_6c0.y < -local_80) {
        param_2[2] = 0;
        param_2[10] = 0xbe4ccccd;
      }
      if (local_80 < afStack_6b4[0]) {
        param_2[2] = 0;
        *param_2 = 1;
      }
      if (afStack_6b4[0] < -local_80) {
        param_2[2] = 0;
        param_2[1] = 1;
      }
      iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_6a4 = (float)_DAT_01d22c30 - *(float *)(iVar6 + 0x20);
      fStack_6a0 = (float)_DAT_01d22c34 - *(float *)(iVar6 + 0x24);
      fStack_69c = (float)_DAT_01d22c38 - *(float *)(iVar6 + 0x28);
      CStack_730.z = fStack_6a4;
      afStack_724[(uint)bVar19 * -2] = afStack_6b4[(uint)bVar19 * -2 + 5];
      afStack_724[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
           afStack_6b4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 6];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
      afStack_354[1] = afStack_70c[2];
      afStack_354[(uint)bVar19 * -2 + 2] = afStack_70c[(uint)bVar19 * -2 + 3];
      afStack_354[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 3] =
           afStack_70c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
      fStack_28 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                            (afStack_354[2] -
                             *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x34));
      fStack_84c = fStack_28;
      fVar11 = fStack_28 * _DAT_005c3c28 * (float)_DAT_005c3c30;
      fStack_840 = -(float)out_box_00;
      param_2[0xb] = fVar11;
      if (fVar11 < fStack_840) {
        param_2[0xb] = ABS(fStack_28) * fStack_840 * (float)_DAT_005c3c38;
      }
      if ((float)out_box_00 < (float)param_2[0xb]) {
        param_2[0xb] = ABS(fStack_28) * (float)out_box_00 * (float)_DAT_005c3c38;
      }
      if (ABS((float)param_2[0xb]) < (float)_DAT_005c3c40) {
        *param_2 = 0;
        param_2[0xb] = 0;
        _DAT_01d1e334 = 0;
        _DAT_01d22c30 = (CDemonActor *)0x7149f2ca;
      }
    }
    if (((_DAT_01d1e320 != 0) && ((float)_DAT_005c3c18 < (float)_DAT_01d22c30)) &&
       ((_DAT_01d1e320 = 0, pCStack_b4 == (CCharacter *)0x0 && (local_844 <= 0.0)))) {
      param_2[3] = 1;
    }
  }
  iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  fStack_5cc = _DAT_01d1e338 - *(float *)(iVar6 + 0x20);
  fStack_5c8 = _DAT_01d1e33c - *(float *)(iVar6 + 0x24);
  fStack_5c4 = _DAT_01d1e340 - *(float *)(iVar6 + 0x28);
  fStack_14c = fStack_5cc;
  afStack_160[(uint)bVar19 * -2 + 6] = afStack_5f0[(uint)bVar19 * -2 + 10];
  afStack_160[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7] =
       afStack_5f0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0xb];
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
       (_DAT_01d1e320 = 0, pCStack_b4 == (CCharacter *)0x0)) {
      param_2[3] = 1;
    }
  }
  if ((_DAT_01d1e334 != 0) || (_DAT_01d1e350 == (CDemonActor *)0x0)) goto LAB_004c1e34;
  pCVar13 = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c840(_DAT_01d1e350,g_CTriggerClassInfo.name_hash)
  ;
  iVar6 = _DAT_01d5ba14;
  if (pCVar13 == (CDemonActor *)0x0) {
    pCVar13 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c840(_DAT_01d1e350,g_CDoorClassInfo.name_hash);
    if ((pCVar13 == (CDemonActor *)0x0) ||
       (pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (_DAT_01d1e350,g_CDoorClassInfo.name_hash),
       pCVar13[7].lifecycle_state != ACTOR_NOT_CREATED)) {
      pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (_DAT_01d1e350,g_CDoorClassInfo.name_hash);
      iVar6 = _DAT_01d5ba14;
      if (pCVar13 == (CDemonActor *)0x0) {
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b68) = _DAT_01d1e354;
        *(CDemonActor **)(*(int *)(iVar6 * 4 + 0x1d5ba04) + 0x20b6c) = _DAT_01d1e350;
        *(CDemonActor **)(*(int *)(iVar6 * 4 + 0x1d5ba04) + 0x20b70) = _DAT_01d1e350;
        *(uint *)(*(int *)(iVar6 * 4 + 0x1d5ba04) + 0x20b7c) = 0;
        iVar6 = *(int *)(iVar6 * 4 + 0x1d5ba04);
        goto LAB_004c46c3;
      }
      this_ptr_04 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c840
                                       (_DAT_01d1e350,g_CDoorClassInfo.name_hash);
      iVar14 = core_door_cpp_CDoor_getMoveType_FUN_00465380
                         (this_ptr_04,*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
      iVar6 = _DAT_01d5ba14;
      if (iVar14 != 0) {
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b68) = _DAT_01d1e354;
        pCVar13 = _DAT_01d1e350;
        *(CDemonActor **)(*(int *)(iVar6 * 4 + 0x1d5ba04) + 0x20b6c) = _DAT_01d1e350;
        *(CDemonActor **)(*(int *)(iVar6 * 4 + 0x1d5ba04) + 0x20b70) = pCVar13;
        *(uint *)(*(int *)(iVar6 * 4 + 0x1d5ba04) + 0x20b7c) = 0;
        *(uint *)(*(int *)(iVar6 * 4 + 0x1d5ba04) + 0x20b78) = 1;
        iVar6 = core_door_cpp_CDoor_getMoveType_FUN_00465380
                          (this_ptr_04,*(CDemonActor **)(iVar6 * 4 + 0x1d5ba04));
        *(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b74) = iVar6;
      }
    }
    else {
      core_hero_cpp_CHero_tryInteract_FUN_004d2cf0(*(CHero **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
    }
  }
  else {
    *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b68) = _DAT_01d1e354;
    *(CDemonActor **)(*(int *)(iVar6 * 4 + 0x1d5ba04) + 0x20b6c) = _DAT_01d1e350;
    pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (_DAT_01d1e350,g_CTriggerClassInfo.name_hash);
    iVar6 = _DAT_01d5ba14;
    *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b70) = pCVar13[2].orient_matrix.m[1].y;
    *(uint *)(*(int *)(iVar6 * 4 + 0x1d5ba04) + 0x20b7c) = 0;
    iVar6 = *(int *)(iVar6 * 4 + 0x1d5ba04);
LAB_004c46c3:
    *(uint *)(iVar6 + 0x20b78) = 1;
  }
  _DAT_01d1e350 = (CDemonActor *)0x0;
  _DAT_01d1e354 = 0;
  param_2[4] = 1;
LAB_004c1e34:
  if (_DAT_01d1e34c != (CCharacter *)0x0) {
    iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    fStack_344 = (_DAT_01d1e34c->base).location.position.x - *(float *)(iVar6 + 0x20);
    fStack_340 = (_DAT_01d1e34c->base).location.position.y - *(float *)(iVar6 + 0x24);
    fStack_33c = (_DAT_01d1e34c->base).location.position.z - *(float *)(iVar6 + 0x28);
    fStack_3e0 = fStack_344;
    afStack_3dc[(uint)bVar19 * -2] = afStack_354[(uint)bVar19 * -2 + 5];
    afStack_3dc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         afStack_354[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 6];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
    uStack_710 = uStack_338;
    afStack_70c[(uint)bVar19 * -2] = afStack_354[(uint)bVar19 * -2 + 8];
    afStack_70c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         afStack_354[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 9];
    fStack_848 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                           (afStack_70c[0] -
                            *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x34));
    if ((float)_DAT_005c3c58 < ABS(fStack_848)) {
      _DAT_01d1e344 = -1.0;
      param_2[9] = 1;
    }
    fVar11 = fStack_848 * _DAT_005c3c28 * (float)_DAT_005c3c30;
    param_2[0xb] = fVar11;
    if (fVar11 < -(float)out_box_00) {
      param_2[0xb] = ABS(fStack_848) * -(float)out_box_00 * (float)_DAT_005c3c38;
    }
    if ((float)out_box_00 < (float)param_2[0xb]) {
      param_2[0xb] = ABS(fStack_848) * (float)out_box_00 * (float)_DAT_005c3c38;
    }
    if (ABS((float)param_2[0xb]) < (float)_DAT_005c3c40) {
      param_2[0xb] = 0;
    }
    fStack_28 = fStack_848;
    if (_DAT_01d1e334 != 0) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                (*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04),(CVector3f *)&DAT_01d1e328,
                 &CStack_1f4);
      fStack_44c = CStack_1f4.x;
      afStack_448[(uint)bVar19 * -2] = *(float *)((int)&CStack_1f4 + (uint)bVar19 * -8 + 4);
      afStack_448[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
           *(float *)((int)&CStack_1f4 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      if ((float)out_box < fStack_44c) {
        param_2[2] = 1;
        param_2[10] = 0x3f800000;
      }
      if (fStack_44c < -(float)out_box) {
        param_2[2] = 1;
        param_2[10] = 0xbf800000;
      }
      if ((float)out_box < afStack_448[1]) {
        param_2[2] = 1;
        *param_2 = 1;
      }
      if (afStack_448[1] < -(float)out_box) {
        param_2[2] = 1;
        param_2[1] = 1;
      }
    }
    EVar8 = (*(((_DAT_01d1e34c->base).vtable._uc)->_uc).getDeathState)(_DAT_01d1e34c);
    if (EVar8 != DEATH_STATE_ALIVE) {
      _DAT_01d1e34c = (CCharacter *)0x0;
    }
  }
  _DAT_01d1e324 = _DAT_01c5fae4;
  iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  if ((float *)(iVar6 + 0x20) != (float *)&DAT_01d1e338) {
    _DAT_01d1e338 = *(float *)(iVar6 + 0x20);
    _DAT_01d1e340 = *(float *)(iVar6 + 0x28);
    _DAT_01d1e33c = *(float *)(iVar6 + 0x24);
  }
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  return;
}
