// Name: core_game.cpp_FUN_004d9260
// Address: 004d9260
// Address Range: [[004d9260, 004dbff8]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004d9260(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004d9260(int param_1,uint *param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  CDemonActor *this_ptr;
  CDemonActor *actor_ptr;
  int iVar5;
  CDemonActor *this_ptr_00;
  CDemonActor *this_ptr_01;
  CHero *this_ptr_02;
  CPathMap *this_ptr_03;
  float fVar6;
  float fVar7;
  EDeathState EVar8;
  CDemonActor *pCVar9;
  CDemonActor *pCVar10;
  CDemonActor *pCVar11;
  CCharacter *pCVar12;
  CVector3f *pCVar13;
  uint *puVar14;
  float *pfVar15;
  CDemonActor **ppCVar16;
  uint *puVar17;
  float *pfVar18;
  byte bVar19;
  byte bVar20;
  float afStackY_158c [14];
  CDemonActor *apCStackY_1554 [7];
  float afStackY_1538 [21];
  CDemonActor *apCStackY_14e4 [6];
  float afStackY_14cc [6];
  CDemonActor *apCStackY_14b4 [14];
  float afStackY_147c [25];
  CDemonActor *apCStackY_1418 [3];
  float afStackY_140c [30];
  CDemonActor *apCStackY_1394 [8];
  float afStackY_1374 [61];
  CDemonActor *apCStackY_1280 [11];
  float afStackY_1254 [10];
  CDemonActor *apCStackY_122c [3];
  float afStackY_1220 [14];
  CDemonActor *apCStackY_11e8 [6];
  float afStackY_11d0 [28];
  CDemonActor *apCStackY_1160 [6];
  float afStackY_1148 [15];
  CDemonActor *apCStackY_110c [5];
  float afStackY_10f8 [24];
  CDemonActor *apCStackY_1098 [6];
  float afStackY_1080 [620];
  CDemonSet *pCVar21;
  CVector3i *pCVar22;
  CBoundingBox3D *out_box;
  CBoundingBox3D *in_stack_fffff948;
  CBoundingBox3D *in_stack_fffff950;
  float fStack_69c;
  CDemonActor *pCStack_698;
  float afStack_694 [6];
  float fStack_67c;
  CDemonActor *pCStack_678;
  CDemonActor *apCStack_664 [2];
  float fStack_65c;
  float fStack_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  float fStack_648;
  uint auStack_644 [2];
  float fStack_63c;
  uint auStack_61c [4];
  uint auStack_60c [6];
  uint auStack_5f4 [2];
  float fStack_5ec;
  float fStack_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  float fStack_5d8;
  uint auStack_5cc [6];
  float afStack_5b4 [4];
  CVector3f CStack_5a4;
  float fStack_598;
  float afStack_594 [4];
  float fStack_584;
  float afStack_580 [5];
  CVector3f CStack_56c;
  CDemonActor *apCStack_560 [4];
  CVector3f CStack_550;
  CVector3f CStack_544;
  CVector3f CStack_538;
  float fStack_524;
  float afStack_520 [2];
  byte auStack_518 [8];
  float afStack_510 [4];
  float fStack_500;
  CDemonActor *pCStack_4fc;
  CDemonActor *apCStack_4f8 [2];
  CVector3i CStack_4f0;
  CVector3f CStack_4e4;
  CVector3i CStack_4d8;
  float fStack_4cc;
  CDemonActor *apCStack_4c8 [4];
  CVector3f CStack_4b8;
  CDemonActor *apCStack_4ac [5];
  CVector3f CStack_498;
  float afStack_48c [3];
  CVector3f CStack_480;
  float afStack_474 [4];
  byte auStack_464 [8];
  float fStack_45c;
  float afStack_458 [3];
  CVector3f CStack_44c;
  float afStack_440 [4];
  CDemonActor *pCStack_430;
  CDemonActor *apCStack_42c [3];
  float afStack_420 [4];
  uint uStack_410;
  CVector3f CStack_40c;
  CVector3f CStack_3f8;
  uint uStack_3ec;
  CVector3f CStack_3e8;
  CVector3f CStack_3dc;
  float fStack_3c8;
  float afStack_3c4 [5];
  float fStack_3b0;
  float fStack_3ac;
  uint uStack_3a8;
  CDemonActor *pCStack_3a4;
  CVector3f CStack_3a0;
  float fStack_38c;
  float afStack_388 [3];
  byte auStack_37c [8];
  float afStack_374 [6];
  float fStack_35c;
  float afStack_358 [4];
  float fStack_348;
  float fStack_344;
  CVector3f CStack_340;
  float fStack_334;
  float afStack_330 [2];
  CVector3i CStack_328;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  CVector3i CStack_310;
  CVector3f CStack_304;
  CVector3i CStack_2f8;
  CVector3i CStack_2ec;
  CVector3f CStack_2d8;
  float fStack_2cc;
  CVector3f CStack_2c8;
  byte auStack_2b4 [8];
  float afStack_2ac [4];
  uint uStack_29c;
  float afStack_298 [2];
  CDemonActor *pCStack_290;
  CVector3i aCStack_28c [2];
  float fStack_270;
  float fStack_26c;
  CDemonActor *pCStack_268;
  float afStack_264 [4];
  float fStack_254;
  CVector3i CStack_250;
  CDemonActor *pCStack_244;
  CDemonActor *apCStack_240 [2];
  float fStack_238;
  float afStack_234 [5];
  CVector3f CStack_220;
  CVector3f CStack_214;
  byte auStack_200 [8];
  CDemonActor *apCStack_1f8 [4];
  byte auStack_1e8 [8];
  float afStack_1e0 [4];
  float fStack_1d0;
  float afStack_1cc [4];
  float fStack_1bc;
  float afStack_1b8 [4];
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  CVector3i CStack_190;
  CVector3i CStack_184;
  float fStack_178;
  CDemonActor *apCStack_174 [4];
  CDemonActor *pCStack_164;
  float fStack_160;
  float afStack_15c [4];
  CVector3f CStack_14c;
  float fStack_140;
  float afStack_13c [4];
  byte auStack_12c [8];
  CDemonActor *pCStack_124;
  CDemonActor *apCStack_120 [4];
  uint uStack_110;
  float afStack_10c [3];
  CVector3i CStack_100;
  float fStack_f4;
  float afStack_f0 [5];
  CVector3i CStack_dc;
  CVector3f CStack_d0;
  float fStack_bc;
  float afStack_b8 [4];
  CDemonActor *apCStack_a8 [4];
  float fStack_98;
  float afStack_94 [7];
  CDemonActor *pCStack_78;
  CDemonActor *pCStack_74;
  CDemonActor *pCStack_70;
  CDemonActor *pCStack_6c;
  float fStack_64;
  float fStack_60;
  float local_5c;
  float local_58;
  CDemonActor *pCStack_54;
  CDemonActor *pCStack_50;
  CDemonActor *pCStack_4c;
  CDemonActor *pCStack_48;
  CDemonActor *pCStack_44;
  CCharacter *pCStack_40;
  CDemonActor *pCStack_3c;
  int local_38;
  int local_34;
  int local_30;
  CDemonActor *local_2c;
  CDemonActor *pCStack_28;
  CDemonActor *pCStack_24;
  CDemonActor *pCStack_20;
  CDemonActor *pCStack_18;
  
  bVar19 = 0;
  if ((DAT_01ccc3e0 & 1) == 0) {
    DAT_01ccc3e0 = DAT_01ccc3e0 | 1;
  }
  if ((DAT_01ccc3e0 & 2) == 0) {
    DAT_01ccc3e0 = DAT_01ccc3e0 | 2;
  }
  local_30 = _DAT_01c4353c;
  local_2c = _DAT_01c43540;
  local_38 = DAT_0061b498;
  local_5c = 8.0;
  local_34 = DAT_0061b49c;
  if (0x1e0 < DAT_0061b49c) {
    local_30 = (_DAT_01c4353c * 0x1e0) / DAT_0061b49c;
    local_2c = (CDemonActor *)(((int)_DAT_01c43540 * 0x1e0) / DAT_0061b49c);
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
  if ((int)local_2c < 2) {
    local_2c = (CDemonActor *)0x2;
  }
  if (local_34 + -2 < (int)local_2c) {
    local_2c = (CDemonActor *)(local_34 + -2);
  }
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
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               5,1);
  }
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               5,-1);
  }
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004f8ec0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),1);
  }
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004f8ec0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),-1);
  }
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004f8fe0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),1);
  }
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_toggleDetailView_FUN_004fc370
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8));
  }
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               0,1);
  }
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               1,1);
  }
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               2,1);
  }
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               4,1);
  }
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               3,1);
  }
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))();
  if (iVar5 != 0) {
    (**(code **)(*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x154) + 0x150))();
  }
  if ((_DAT_01cd0c94 != 0) ||
     (iVar5 = core_script_cpp_CScript_getLetterboxHeight_FUN_00543950(g_CScriptPtr), 2 < iVar5)) {
    _DAT_01cd0c94 = 0;
    _DAT_01ccc3c4 = 0;
    _DAT_01ccc3b4 = 0;
    _DAT_01c43544 = 0;
    _DAT_01ccc3dc = (CCharacter *)0x0;
    sound_sndmain_cpp_killAllSfx_FUN_00573b00();
    _DAT_01cd0c28 = (CDemonActor *)0x7149f2ca;
  }
  if ((int)_DAT_01cd0b40 < 0) {
    _DAT_01c43544 = 0;
    _DAT_01ccc3c4 = 0;
    _DAT_01ccc3dc = (CCharacter *)0x0;
    _DAT_01cd0c28 = (CDemonActor *)0x7149f2ca;
    _DAT_01ccc3b4 = 0;
  }
  pCStack_40 = (CCharacter *)
               (**(code **)(*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x154) + 0x148))();
  if (*(int *)(param_1 + 0x25c) != 0) {
    if ((_DAT_01c43544 & 1) != 0) {
      if ((float10)0 < (float10)((int)local_2c - local_38 / 2) / (float10)(local_34 / 2)) {
        param_2[1] = 1;
      }
      else {
        *param_2 = 1;
      }
      if (*(int *)(param_1 + 0xac) == 0) {
        bVar19 = (&DAT_01c50950)[*(int *)(param_1 + 0x30)];
      }
      else {
        bVar19 = (&DAT_01c50950)[*(int *)(param_1 + 0x30)] == '\0';
      }
      param_2[2] = (uint)bVar19;
    }
    fVar7 = (float)(local_30 - local_38 / 2) / (float)(local_38 / 2);
    param_2[10] = fVar7;
    uVar2 = _DAT_01c43544;
    param_2[10] = fVar7 * (float)param_2[10] * (float)param_2[10] * _DAT_005e3600;
    if ((uVar2 & 2) != 0) {
      param_2[3] = 1;
      return;
    }
    return;
  }
  if (0.0 <= _DAT_0061d954) {
    _DAT_0061d954 = _DAT_0061d954 - g_CGamePtr->delta_time_float;
  }
  else {
    _DAT_0061d954 = 0.25;
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044dd70
              (&g_CDemonCameraInstance,local_30,(int)local_2c,(CVector3i *)(auStack_200 + 4));
    pCVar22 = aCStack_28c;
    aCStack_28c[0].x = auStack_200._4_4_;
    *(CDemonActor **)((int)aCStack_28c + (uint)bVar19 * -8 + 4) = apCStack_1f8[(uint)bVar19 * -2];
    *(CDemonActor **)((int)aCStack_28c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
         apCStack_1f8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40
              (&g_CDemonCameraInstance,pCVar22,&CStack_dc);
    aCStack_28c[0].x = CStack_dc.x;
    *(uint *)((int)aCStack_28c + (uint)bVar19 * -8 + 4) =
         *(uint *)((int)&CStack_dc + (uint)bVar19 * -8 + 4);
    *(uint *)((int)aCStack_28c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
         *(uint *)((int)&CStack_dc + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
    afStack_358[3] = (float)aCStack_28c[0].x * _DAT_00600f74;
    fStack_348 = (float)aCStack_28c[0].y * _DAT_00600f74;
    fStack_344 = (float)aCStack_28c[0].z * _DAT_00600f74;
    iVar5 = 4;
    fStack_178 = g_CDemonCameraInstance.base.position.f.x;
    apCStack_174[(uint)bVar19 * -2] =
         *(CDemonActor **)((int)&g_CDemonCameraInstance + (uint)bVar19 * -8 + 8);
    apCStack_174[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         *(CDemonActor **)((uint)bVar19 * -8 + 0x1fe37f8 + (uint)bVar19 * -8);
    fStack_19c = fStack_178;
    afStack_1b8[(uint)bVar19 * -2 + 8] = (float)apCStack_174[(uint)bVar19 * -2];
    pCVar21 = g_CDemonSetPtr;
    afStack_1b8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 9] =
         (float)apCStack_174[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(pCVar21,iVar5);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
              (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4));
    _DAT_01cd0c24 = (CDemonActor *)0x0;
    iVar5 = 0;
    while (pCVar9 = _DAT_01cd0c24, iVar5 < 4) {
      pCStack_18 = (CDemonActor *)core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr);
      pCStack_20 = pCStack_18;
      pCVar9 = _DAT_01cd0c24;
      if (((float)pCStack_18 < 0.0) || (0x3f800000 < (int)pCStack_18)) break;
      pCVar11 = g_CDemonSetPtr->collision_actor;
      pCVar9 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar11,g_CDoorClassInfo.name_hash);
      if (pCVar9 != (CDemonActor *)0x0) {
        pCVar10 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar11,g_CDoorClassInfo.name_hash);
        pCVar9 = _DAT_01cd0c24;
        if ((pCVar10[7].lifecycle_state != ACTOR_NOT_CREATED) && (pCVar10[2].orient.vec.x == 0.0)) {
          _DAT_01cd0c24 = pCVar11;
          *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1ff60) = 3;
          pCVar9 = _DAT_01cd0c24;
        }
        break;
      }
      pCVar9 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar11,g_CBoxActorClassInfo.name_hash);
      if ((pCVar9 != (CDemonActor *)0x0) &&
         (pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c600
                             (pCVar11,g_CBoxActorClassInfo.name_hash), pCVar9[2].health != 0)) {
        _DAT_01cd0c24 = pCVar11;
        *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1ff60) = 4;
        pCVar9 = _DAT_01cd0c24;
        break;
      }
      pCVar10 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar11,g_CWeaponClassInfo.name_hash);
      pCVar9 = pCVar11;
      if (pCVar10 != (CDemonActor *)0x0) break;
      pCVar10 = (CLever *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar11,g_CLeverClassInfo.name_hash);
      if (pCVar10 != (CDemonActor *)0x0) {
        _DAT_01cd0c24 = pCVar11;
        *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1ff60) = 7;
        pCVar9 = _DAT_01cd0c24;
        break;
      }
      pCVar10 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar11,g_CEnemyClassInfo.name_hash);
      if ((((pCVar10 != (CDemonActor *)0x0) ||
           (pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar11,g_CNPCClassInfo.name_hash)
           , pCVar10 != (CDemonActor *)0x0)) ||
          ((pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (pCVar11,g_CHeroClassInfo.name_hash), iVar3 = _DAT_01d06ab4,
           pCVar10 != (CDemonActor *)0x0 &&
           (pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (pCVar11,g_CHeroClassInfo.name_hash),
           pCVar10 != *(CDemonActor **)(iVar3 * 4 + 0x1d06aa4))))) ||
         (((pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (pCVar11,g_CTriggerClassInfo.name_hash),
           pCVar10 != (CDemonActor *)0x0 ||
           (core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCVar11),
           pCVar9 = _DAT_01cd0c24, (float)pCStack_20 < 0.0)) ||
          (iVar5 = iVar5 + 1, 0x3f800000 < (int)pCStack_20)))) break;
    }
    _DAT_01cd0c24 = pCVar9;
    iVar5 = _DAT_01d06ab4;
    pCVar9 = _DAT_01cd0c24;
    if (_DAT_01cd0c24 != (CDemonActor *)0x0) {
      *(CDemonActor **)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1ff64) = _DAT_01cd0c24;
      *(CDemonActor **)(*(int *)(iVar5 * 4 + 0x1d06aa4) + 0x1ff68) = pCVar9;
      *(uint *)(*(int *)(iVar5 * 4 + 0x1d06aa4) + 0x1ff70) = 0;
    }
  }
  if (local_30 < 0x20) {
    _DAT_01cd0b40 = (CDemonActor *)0x3;
  }
  else if (local_38 + -0x20 < local_30) {
    _DAT_01cd0b40 = (CDemonActor *)0x4;
  }
  else if ((int)local_2c < 0x20) {
    _DAT_01cd0b40 = (CDemonActor *)0x1;
  }
  else if (local_34 + -0x20 < (int)local_2c) {
    _DAT_01cd0b40 = (CDemonActor *)0x2;
  }
  else if (_DAT_01cd0c24 == (CDemonActor *)0x0) {
    _DAT_01cd0b40 = _DAT_01cd0c24;
    if (_DAT_01ccc3dc != (CCharacter *)0x0) {
      _DAT_01cd0b40 = (CDemonActor *)0x7;
    }
  }
  else {
    iVar5 = core_actor_cpp_isOfClass_FUN_0040c550(_DAT_01cd0c24,"CEnemy");
    if (iVar5 == 0) {
      _DAT_01cd0b40 = (CDemonActor *)0x5;
    }
    else {
      _DAT_01cd0b40 = (CDemonActor *)0x6;
    }
  }
  pCStack_28 = (CDemonActor *)0x0;
  if ((_DAT_01ccc3b4 == 0) && ((_DAT_01c43544 == 1 || ((_DAT_01c43544 & 2) != 0)))) {
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044dd70
              (&g_CDemonCameraInstance,local_30,(int)local_2c,&CStack_328);
    pCVar22 = &CStack_4f0;
    CStack_4f0.x = CStack_328.x;
    *(uint *)((int)&CStack_4f0 + (uint)bVar19 * -8 + 4) =
         *(uint *)((int)&CStack_328 + (uint)bVar19 * -8 + 4);
    *(uint *)((int)&CStack_4f0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
         *(uint *)((int)&CStack_328 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
    core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40
              (&g_CDemonCameraInstance,pCVar22,&CStack_100);
    CStack_4f0.x = CStack_100.x;
    *(uint *)((int)&CStack_4f0 + (uint)bVar19 * -8 + 4) =
         *(uint *)((int)&CStack_100 + (uint)bVar19 * -8 + 4);
    *(uint *)((int)&CStack_4f0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
         *(uint *)((int)&CStack_100 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
    afStack_358[0] = (float)CStack_4f0.x * _DAT_00600f74;
    afStack_358[1] = (float)CStack_4f0.y * _DAT_00600f74;
    afStack_358[2] = (float)CStack_4f0.z * _DAT_00600f74;
    iVar5 = 4;
    afStack_580[0] = g_CDemonCameraInstance.base.position.f.x;
    afStack_580[(uint)bVar19 * -2 + 1] =
         *(float *)((int)&g_CDemonCameraInstance + (uint)bVar19 * -8 + 8);
    afStack_580[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 2] =
         *(float *)((uint)bVar19 * -8 + 0x1fe37f8 + (uint)bVar19 * -8);
    fStack_4cc = afStack_580[0];
    apCStack_4c8[(uint)bVar19 * -2] = (CDemonActor *)afStack_580[(uint)bVar19 * -2 + 1];
    pCVar21 = g_CDemonSetPtr;
    apCStack_4c8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         (CDemonActor *)afStack_580[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 2];
    core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(pCVar21,iVar5);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
              (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4));
    iVar5 = 0;
    while (iVar5 < 4) {
      pCStack_18 = (CDemonActor *)core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr);
      pCStack_24 = pCStack_18;
      if (((float)pCStack_18 < 0.0) || (0x3f800000 < (int)pCStack_18)) break;
      pCVar9 = g_CDemonSetPtr->collision_actor;
      pCVar11 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar9,g_CDoorClassInfo.name_hash);
      if (pCVar11 != (CDemonActor *)0x0) {
        pCStack_28 = pCVar9;
        break;
      }
      pCVar11 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar9,g_CBoxActorClassInfo.name_hash);
      if ((pCVar11 != (CDemonActor *)0x0) &&
         (pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c600
                              (pCVar9,g_CBoxActorClassInfo.name_hash), pCVar11[2].health != 0)) {
        pCStack_28 = pCVar9;
        break;
      }
      pCVar11 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar9,g_CWeaponClassInfo.name_hash);
      if (pCVar11 != (CDemonActor *)0x0) {
        pCStack_28 = pCVar9;
        break;
      }
      pCVar11 = (CLever *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar9,g_CLeverClassInfo.name_hash);
      if (pCVar11 != (CDemonActor *)0x0) {
        pCStack_28 = pCVar9;
        break;
      }
      pCVar11 = (CNPC *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar9,g_CNPCClassInfo.name_hash);
      if (pCVar11 != (CDemonActor *)0x0) {
        pCStack_28 = pCVar9;
        break;
      }
      pCVar11 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar9,g_CHeroClassInfo.name_hash);
      if (pCVar11 != (CDemonActor *)0x0) {
        pCStack_28 = pCVar9;
        break;
      }
      pCVar11 = (CConstruct *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar9,g_CConstructClassInfo.name_hash);
      if (pCVar11 != (CDemonActor *)0x0) {
        pCStack_28 = pCVar9;
        break;
      }
      pCVar11 = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar9,g_CTriggerClassInfo.name_hash);
      if (pCVar11 != (CDemonActor *)0x0) {
        pCStack_28 = pCVar9;
        break;
      }
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCVar9);
      if (((float)pCStack_24 < 0.0) || (iVar5 = iVar5 + 1, 0x3f800000 < (int)pCStack_24)) break;
    }
  }
  if ((pCStack_40 == (CCharacter *)0x0) || ((_DAT_01c43544 & 2) == 0)) {
    if (pCStack_40 == (CCharacter *)0x0) {
      _DAT_01ccc3dc = pCStack_40;
    }
  }
  else {
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044dd70
              (&g_CDemonCameraInstance,local_30,(int)local_2c,&CStack_190);
    pCVar13 = &CStack_40c;
    CStack_40c.x = (float)CStack_190.x;
    *(uint *)((int)&CStack_40c + (uint)bVar19 * -8 + 4) =
         *(uint *)((int)&CStack_190 + (uint)bVar19 * -8 + 4);
    *(uint *)((int)&CStack_40c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
         *(uint *)((int)&CStack_190 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
    core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40
              (&g_CDemonCameraInstance,(CVector3i *)pCVar13,(CVector3i *)(auStack_518 + 4));
    CStack_40c.x = (float)auStack_518._4_4_;
    *(float *)((int)&CStack_40c + (uint)bVar19 * -8 + 4) = afStack_510[(uint)bVar19 * -2];
    *(float *)((int)&CStack_40c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
         afStack_510[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    afStack_264[2] = (float)(int)CStack_40c.x * _DAT_00600f74;
    afStack_264[3] = (float)(int)CStack_40c.y * _DAT_00600f74;
    fStack_254 = (float)(int)CStack_40c.z * _DAT_00600f74;
    iVar5 = 4;
    fStack_f4 = g_CDemonCameraInstance.base.position.f.x;
    afStack_f0[(uint)bVar19 * -2] = *(float *)((int)&g_CDemonCameraInstance + (uint)bVar19 * -8 + 8)
    ;
    afStack_f0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         *(float *)((uint)bVar19 * -8 + 0x1fe37f8 + (uint)bVar19 * -8);
    afStack_94[0] = fStack_f4;
    afStack_94[(uint)bVar19 * -2 + 1] = afStack_f0[(uint)bVar19 * -2];
    pCVar21 = g_CDemonSetPtr;
    afStack_94[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 2] =
         afStack_f0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(pCVar21,iVar5);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
              (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4));
    iVar5 = 0;
    while (iVar5 < 4) {
      pCStack_698 = (CDemonActor *)core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr);
      pCStack_18 = pCStack_698;
      if (((float)pCStack_698 < 0.0) || (0x3f800000 < (int)pCStack_698)) break;
      pCVar12 = (CCharacter *)
                core_actor_cpp_castToClassHash_FUN_0040c600
                          (g_CDemonSetPtr->collision_actor,g_CEnemyClassInfo.name_hash);
      if (pCVar12 != (CCharacter *)0x0) {
        _DAT_01cd0b40 = (CDemonActor *)0x5;
        _DAT_01ccc3dc = pCVar12;
        break;
      }
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
      if (((float)pCStack_698 < 0.0) || (iVar5 = iVar5 + 1, 0x3f800000 < (int)pCStack_698)) break;
    }
    if (_DAT_01ccc3dc != (CCharacter *)0x0) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                (*(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4),
                 &(_DAT_01ccc3dc->base).location.position,&CStack_4e4);
      CStack_44c.y = CStack_4e4.x;
      afStack_440[(uint)bVar19 * -2 + -1] = *(float *)((int)&CStack_4e4 + (uint)bVar19 * -8 + 4);
      afStack_440[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
           *(float *)((int)&CStack_4e4 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      if (afStack_440[0] < 0.0) goto LAB_004d9de9;
    }
    param_2[3] = 1;
  }
LAB_004d9de9:
  iVar5 = local_30;
  if (((_DAT_01ccc3b4 != 0) || (_DAT_01c43544 != 1)) && ((_DAT_01c43544 & 2) == 0))
  goto LAB_004da080;
  _DAT_01cd0c28 = (CDemonActor *)0x7149f2ca;
  core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044dd70
            (&g_CDemonCameraInstance,local_30,(int)local_2c,&CStack_184);
  CStack_4d8.x = CStack_184.x;
  *(uint *)((int)&CStack_4d8 + (uint)bVar19 * -8 + 4) =
       *(uint *)((int)&CStack_184 + (uint)bVar19 * -8 + 4);
  *(uint *)((int)&CStack_4d8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
       *(uint *)((int)&CStack_184 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
  if (pCStack_28 == (CDemonActor *)0x0) {
    if (((iVar5 < 0x20) || (local_38 + -0x20 < iVar5)) ||
       (((int)local_2c < 0x20 || (local_34 + -0x20 < (int)local_2c)))) {
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044dd70
                (&g_CDemonCameraInstance,local_38 / 2,local_34 / 2,&CStack_310);
      pCVar22 = (CVector3i *)(auStack_464 + 4);
      auStack_464._4_4_ = CStack_310.x;
      afStack_458[(uint)bVar19 * -2 + -1] = *(float *)((int)&CStack_310 + (uint)bVar19 * -8 + 4);
      afStack_458[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
           *(float *)((int)&CStack_310 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40
                (&g_CDemonCameraInstance,pCVar22,&CStack_2ec);
      auStack_464._4_4_ = CStack_2ec.x;
      afStack_458[(uint)bVar19 * -2 + -1] = *(float *)((int)&CStack_2ec + (uint)bVar19 * -8 + 4);
      afStack_458[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
           *(float *)((int)&CStack_2ec + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      afStack_510[2] = (float)(int)auStack_464._4_4_ * _DAT_00600f74;
      afStack_510[3] = (float)(int)fStack_45c * _DAT_00600f74;
      fStack_500 = (float)(int)afStack_458[0] * _DAT_00600f74;
      core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40
                (&g_CDemonCameraInstance,&CStack_4d8,&CStack_2f8);
      CStack_4d8.x = CStack_2f8.x;
      *(uint *)((int)&CStack_4d8 + (uint)bVar19 * -8 + 4) =
           *(uint *)((int)&CStack_2f8 + (uint)bVar19 * -8 + 4);
      *(uint *)((int)&CStack_4d8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           *(uint *)((int)&CStack_2f8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      fStack_31c = (float)CStack_4d8.x * _DAT_00600f74;
      fStack_318 = (float)CStack_4d8.y * _DAT_00600f74;
      fStack_314 = (float)CStack_4d8.z * _DAT_00600f74;
      fStack_238 = (float)CStack_4d8.x * _DAT_00600f74 - afStack_510[2];
      afStack_234[0] = (float)CStack_4d8.y * _DAT_00600f74 - afStack_510[3];
      afStack_234[1] = (float)CStack_4d8.z * _DAT_00600f74 - fStack_500;
      fStack_334 = fStack_238;
      afStack_330[(uint)bVar19 * -2] = afStack_234[(uint)bVar19 * -2];
      fVar4 = fStack_314;
      fVar6 = fStack_318;
      fVar7 = fStack_31c;
      afStack_330[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
           afStack_234[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
      fStack_64 = SQRT(afStack_330[1] * afStack_330[1] + fStack_334 * fStack_334);
      afStack_330[0] = 0.0;
      if (fStack_64 <= 0.0) {
        fStack_334 = 0.0;
        afStack_330[1] = 0.0;
      }
      else {
        fVar1 = 1.0 / fStack_64;
        fStack_334 = fStack_334 * fVar1;
        afStack_330[0] = fVar1 * 0.0;
        afStack_330[1] = afStack_330[1] * fVar1;
      }
      if ((pCStack_40 != (CCharacter *)0x0) && ((_DAT_01c43544 & 2) != 0)) {
        if (_DAT_01ccc3c4 != 1) {
          _DAT_01ccc3c4 = 0;
        }
        goto LAB_004dbaf8;
      }
      CStack_480.z = fStack_334 * local_5c;
      afStack_474[0] = afStack_330[0] * local_5c;
      afStack_474[1] = afStack_330[1] * local_5c;
      afStack_3c4[0] = fStack_334 * local_5c;
      afStack_3c4[(uint)bVar19 * -2 + 1] = afStack_474[(uint)bVar19 * -2];
      afStack_3c4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 2] =
           afStack_474[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
      pCStack_268 = (CDemonActor *)(fVar7 + afStack_3c4[0]);
      afStack_264[0] = fVar6 + afStack_3c4[1];
      afStack_264[1] = fVar4 + afStack_3c4[2];
      pCStack_124 = (CDemonActor *)(fVar7 + afStack_3c4[0]);
      apCStack_120[(uint)bVar19 * -2] = (CDemonActor *)afStack_264[(uint)bVar19 * -2];
      apCStack_120[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
           (CDemonActor *)afStack_264[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
      if (&stack0x00000000 != g_CDemonLightInstance.base.camera_name + 0xb8) {
        _DAT_01ccc3b8 = pCStack_124;
        _DAT_01ccc3bc = apCStack_120[0];
        _DAT_01ccc3c0 = apCStack_120[1];
      }
      _DAT_01ccc3d4 = 0.0;
      _DAT_01ccc3c4 = 1;
    }
    else {
      core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40
                (&g_CDemonCameraInstance,&CStack_4d8,&CStack_250);
      CStack_4d8.x = CStack_250.x;
      *(uint *)((int)&CStack_4d8 + (uint)bVar19 * -8 + 4) =
           *(uint *)((int)&CStack_250 + (uint)bVar19 * -8 + 4);
      *(uint *)((int)&CStack_4d8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           *(uint *)((int)&CStack_250 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
      if ((pCStack_40 != (CCharacter *)0x0) && ((_DAT_01c43544 & 2) != 0)) {
        if (_DAT_01ccc3c4 != 1) {
          _DAT_01ccc3c4 = 0;
        }
LAB_004dbaf8:
        _DAT_01cd0c28 = (CDemonActor *)0x7149f2ca;
        goto LAB_004dbb02;
      }
      if (_DAT_01c43544 != 1) goto LAB_004dbb02;
      _DAT_01ccc3b8 = (CDemonActor *)((float)CStack_4d8.x * _DAT_00600f74);
      _DAT_01ccc3bc = (CDemonActor *)((float)CStack_4d8.y * _DAT_00600f74);
      _DAT_01ccc3c0 = (CDemonActor *)((float)CStack_4d8.z * _DAT_00600f74);
      _DAT_01ccc3d4 = 0.0;
      _DAT_01ccc3c4 = _DAT_01c43544;
    }
  }
  else {
    if (((_DAT_01c43544 & 2) != 0) && (_DAT_01ccc3dc == (CCharacter *)0x0)) {
      pCVar12 = *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      _DAT_01ccc3b0 = 1;
      if (pCVar12[2].flames[0x1a].base.previous_transform_state.orientation.vec.x == 0.0) {
        core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0(pCVar12);
      }
    }
    this_ptr_00 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c600(pCStack_28,g_CDoorClassInfo.name_hash)
    ;
    pCVar9 = pCStack_28;
    pCStack_3c = this_ptr_00;
    pCStack_70 = core_actor_cpp_castToClassHash_FUN_0040c600
                           (pCStack_28,g_CCharacterClassInfo.name_hash);
    pCStack_50 = pCStack_70;
    pCStack_74 = (CLever *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar9,g_CLeverClassInfo.name_hash);
    pCStack_48 = pCStack_74;
    pCStack_44 = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar9,g_CTriggerClassInfo.name_hash);
    pCStack_78 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar9,g_CBoxActorClassInfo.name_hash);
    pCStack_54 = pCStack_78;
    pCStack_4c = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar9,g_CMeleeClassInfo.name_hash);
    actor_ptr = pCStack_28;
    this_ptr_01 = core_actor_cpp_castToClassHash_FUN_0040c600
                            (pCStack_28,g_CWeaponClassInfo.name_hash);
    this_ptr = pCStack_3c;
    pCVar10 = pCStack_44;
    pCVar11 = pCStack_48;
    pCVar9 = pCStack_4c;
    pCStack_6c = this_ptr_01;
    out_box = (CBoundingBox3D *)0x40200000;
    if (pCStack_50 == (CDemonActor *)0x0) {
      if (this_ptr_00 == (CDemonActor *)0x0) {
        iVar5 = _DAT_01d06ab4 * 4;
        if (pCStack_48 == (CDemonActor *)0x0) {
          if (pCStack_54 == (CDemonActor *)0x0) {
            if (pCStack_4c == (CDemonActor *)0x0) {
              if (this_ptr_01 == (CDemonActor *)0x0) {
                if (pCStack_44 == (CDemonActor *)0x0) {
                  if ((_DAT_01c43544 == 1) && (&pCStack_28->location != (CLocation *)&DAT_01ccc3b8))
                  {
                    _DAT_01ccc3b8 = (CDemonActor *)(pCStack_28->location).position.x;
                    _DAT_01ccc3c0 = (CDemonActor *)(pCStack_28->location).position.z;
                    _DAT_01ccc3bc = (CDemonActor *)(pCStack_28->location).position.y;
                  }
                }
                else {
                  pCVar13 = (CVector3f *)(*(int *)(iVar5 + 0x1d06aa4) + 0x20);
                  pfVar15 = (float *)((int)pCStack_44 + (uint)bVar19 * -8 + 0x24);
                  fStack_3ac = (pCStack_44->location).position.x;
                  afStack_3c4[(uint)bVar19 * -2 + 7] = *pfVar15;
                  (&pCStack_3a4)[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
                       (CDemonActor *)pfVar15[(uint)bVar19 * -2 + 1];
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                            (pCVar10,pCVar13,&CStack_3dc);
                  pCVar9 = pCStack_44;
                  uStack_3a8 = *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x24);
                  (*((pCStack_44->vtable)._ub)->getBoundingBox)(pCStack_44,out_box);
                  pfVar15 = &fStack_5e4;
                  pfVar18 = &fStack_67c;
                  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *pfVar18 = *pfVar15;
                    pfVar15 = pfVar15 + (uint)bVar19 * -2 + 1;
                    pfVar18 = pfVar18 + (uint)bVar19 * -2 + 1;
                  }
                  CStack_44c.y = (float)apCStack_664[0];
                  CStack_44c.x = 0.0;
                  CStack_44c.z = 0.0;
                  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                            (pCVar9,&CStack_44c,(CVector3f *)auStack_200);
                  CStack_3f8.x = (float)auStack_200._0_4_;
                  *(uint *)((int)&CStack_3f8 + (uint)bVar19 * -8 + 4) =
                       *(uint *)(auStack_200 + (uint)bVar19 * -8 + 4);
                  *(CDemonActor **)((int)&CStack_3f8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
                       apCStack_1f8[(uint)bVar19 * -2 + (uint)bVar19 * -2];
                  if (&CStack_44c != &CStack_3f8) {
                    CStack_44c.x = CStack_3f8.x;
                    CStack_44c.y = CStack_3f8.y;
                    CStack_44c.z = CStack_3f8.z;
                  }
                  if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x1a].x_max)
                  {
                    _DAT_01ccc3b8 = pCStack_3a4;
                    _DAT_01ccc3bc = (CDemonActor *)CStack_3a0.x;
                    _DAT_01ccc3c0 = (CDemonActor *)CStack_3a0.y;
                  }
                  if ((CVector3f *)&stack0x00000000 != &g_BloodParticles[6].base.acceleration) {
                    _DAT_01cd0c28 = (CDemonActor *)CStack_44c.x;
                    _DAT_01cd0c2c = (CDemonActor *)CStack_44c.y;
                    _DAT_01cd0c30 = (CDemonActor *)CStack_44c.z;
                  }
                }
              }
              else {
                pCVar13 = (CVector3f *)(*(int *)(iVar5 + 0x1d06aa4) + 0x20);
                puVar14 = (uint *)((int)this_ptr_01 + (uint)bVar19 * -8 + 0x24);
                pCStack_4fc = (CDemonActor *)(this_ptr_01->location).position.x;
                apCStack_4f8[(uint)bVar19 * -2] = (CDemonActor *)*puVar14;
                apCStack_4f8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                     (CDemonActor *)puVar14[(uint)bVar19 * -2 + 1];
                core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                          (this_ptr_01,pCVar13,&CStack_3e8);
                apCStack_4f8[0] = *(CDemonActor **)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x24);
                if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x2f].y_max) {
                  _DAT_01ccc3b8 = pCStack_4fc;
                  _DAT_01ccc3c0 = apCStack_4f8[1];
                  _DAT_01ccc3bc = apCStack_4f8[0];
                }
                if (&pCStack_6c->location != (CLocation *)&DAT_01cd0c28) {
                  _DAT_01cd0c28 = (CDemonActor *)(pCStack_6c->location).position.x;
                  _DAT_01cd0c30 = (CDemonActor *)(pCStack_6c->location).position.z;
                  _DAT_01cd0c2c = (CDemonActor *)(pCStack_6c->location).position.y;
                }
              }
            }
            else {
              pfVar15 = (float *)((int)pCStack_4c + (uint)bVar19 * -8 + 0x24);
              afStack_298[0] = (pCStack_4c->location).position.x;
              afStack_298[(uint)bVar19 * -2 + 1] = *pfVar15;
              (&pCStack_290)[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
                   (CDemonActor *)pfVar15[(uint)bVar19 * -2 + 1];
              (*((pCVar9->vtable)._ub)->getBoundingBox)(pCVar9,out_box);
              pfVar15 = afStack_5b4;
              pfVar18 = afStack_694;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *pfVar18 = *pfVar15;
                pfVar15 = pfVar15 + (uint)bVar19 * -2 + 1;
                pfVar18 = pfVar18 + (uint)bVar19 * -2 + 1;
              }
              CStack_4b8.z = (float)pCStack_678;
              CStack_4b8.x = (float)pCVar11;
              CStack_4b8.y = (float)pCVar11;
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                        (pCStack_44,&CStack_4b8,(CVector3f *)auStack_2b4);
              CStack_56c.x = (float)auStack_2b4._0_4_;
              apCStack_560[(uint)bVar19 * -2 + -2] =
                   *(CDemonActor **)(auStack_2b4 + (uint)bVar19 * -8 + 4);
              apCStack_560[(uint)bVar19 * -2 + (uint)bVar19 * -2 + -1] =
                   (CDemonActor *)afStack_2ac[(uint)bVar19 * -2 + (uint)bVar19 * -2];
              if (&CStack_4b8 != &CStack_56c) {
                CStack_4b8.x = CStack_56c.x;
                CStack_4b8.y = CStack_56c.y;
                CStack_4b8.z = CStack_56c.z;
              }
              aCStack_28c[0].x = *(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x24);
              if ((CRect *)&stack0x00000000 != g_CDemonLightInstance.base.rect_array + 9) {
                _DAT_01ccc3b8 = pCStack_290;
                _DAT_01ccc3c0 = (CDemonActor *)aCStack_28c[0].y;
                _DAT_01ccc3bc = (CDemonActor *)aCStack_28c[0].x;
              }
              if ((CParticle_vtable **)&stack0x00000000 != &g_BloodParticles[7].base.vtable) {
                _DAT_01cd0c28 = (CDemonActor *)CStack_4b8.x;
                _DAT_01cd0c2c = (CDemonActor *)CStack_4b8.y;
                _DAT_01cd0c30 = (CDemonActor *)CStack_4b8.z;
              }
            }
          }
          else {
            iVar5 = *(int *)(iVar5 + 0x1d06aa4);
            puVar14 = (uint *)((int)pCStack_54 + (uint)bVar19 * -8 + 0x24);
            CStack_56c.y = (pCStack_54->location).position.x;
            apCStack_560[(uint)bVar19 * -2 + -1] = (CDemonActor *)*puVar14;
            apCStack_560[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
                 (CDemonActor *)puVar14[(uint)bVar19 * -2 + 1];
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                      (pCStack_54,(CVector3f *)(iVar5 + 0x20),&CStack_538);
            CStack_56c.z = *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x24);
            if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x36].y_min) {
              _DAT_01ccc3b8 = (CDemonActor *)CStack_56c.y;
              _DAT_01ccc3c0 = apCStack_560[0];
              _DAT_01ccc3bc = (CDemonActor *)CStack_56c.z;
            }
            if (&pCStack_78->location != (CLocation *)&DAT_01cd0c28) {
              _DAT_01cd0c28 = (CDemonActor *)(pCStack_78->location).position.x;
              _DAT_01cd0c30 = (CDemonActor *)(pCStack_78->location).position.z;
              _DAT_01cd0c2c = (CDemonActor *)(pCStack_78->location).position.y;
            }
          }
        }
        else {
          pCVar13 = (CVector3f *)(*(int *)(iVar5 + 0x1d06aa4) + 0x20);
          puVar14 = (uint *)((int)pCStack_48 + (uint)bVar19 * -8 + 0x24);
          apCStack_174[2] = (CDemonActor *)(pCStack_48->location).position.x;
          apCStack_174[(uint)bVar19 * -2 + 3] = (CDemonActor *)*puVar14;
          apCStack_174[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
               (CDemonActor *)puVar14[(uint)bVar19 * -2 + 1];
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0(pCVar11,pCVar13,&CStack_220);
          iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          afStack_10c[0] = CStack_220.x;
          afStack_10c[(uint)bVar19 * -2 + 1] = *(float *)((int)&CStack_220 + (uint)bVar19 * -8 + 4);
          afStack_10c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 2] =
               *(float *)((int)&CStack_220 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
          apCStack_174[3] = *(CDemonActor **)(iVar5 + 0x24);
          if (0.0 <= afStack_10c[2]) {
            CStack_544.x = 0.0;
            CStack_544.y = 0.0;
            CStack_544.z = 2.0;
            core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                      (pCStack_48,&CStack_544,&CStack_550);
            CStack_2d8.y = CStack_550.x;
            *(uint *)((int)&CStack_2d8 + (uint)bVar19 * -8 + 8) =
                 *(uint *)((int)&CStack_550 + (uint)bVar19 * -8 + 4);
            (&fStack_2cc)[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
                 *(float *)((int)&CStack_550 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            apCStack_174[2] = (CDemonActor *)((float)apCStack_174[2] + CStack_2d8.y);
            apCStack_174[3] = (CDemonActor *)((float)apCStack_174[3] + CStack_2d8.z);
            pCStack_164 = (CDemonActor *)((float)pCStack_164 + fStack_2cc);
          }
          else {
            auStack_37c._0_4_ = 0.0;
            auStack_37c._4_4_ = 0.0;
            afStack_374[0] = -2.0;
            core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                      (pCVar11,(CVector3f *)auStack_37c,&CStack_5a4);
            fStack_598 = CStack_5a4.x;
            afStack_594[(uint)bVar19 * -2] = *(float *)((int)&CStack_5a4 + (uint)bVar19 * -8 + 4);
            afStack_594[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                 *(float *)((int)&CStack_5a4 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            apCStack_174[2] = (CDemonActor *)((float)apCStack_174[2] + fStack_598);
            apCStack_174[3] = (CDemonActor *)((float)apCStack_174[3] + afStack_594[0]);
            pCStack_164 = (CDemonActor *)((float)pCStack_164 + afStack_594[1]);
          }
          if ((float *)&stack0x00000000 != &g_CDemonLightInstance.base.max_distance) {
            _DAT_01ccc3b8 = apCStack_174[2];
            _DAT_01ccc3bc = apCStack_174[3];
            _DAT_01ccc3c0 = pCStack_164;
          }
          if (&pCStack_74->location != (CLocation *)&DAT_01cd0c28) {
            _DAT_01cd0c28 = (CDemonActor *)(pCStack_74->location).position.x;
            _DAT_01cd0c30 = (CDemonActor *)(pCStack_74->location).position.z;
            _DAT_01cd0c2c = (CDemonActor *)(pCStack_74->location).position.y;
          }
        }
      }
      else if ((this_ptr_00[7].lifecycle_state == ACTOR_NOT_CREATED) &&
              (this_ptr_00[2].location.position.z != 0.0)) {
        (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,(CBoundingBox3D *)0x40200000);
        puVar14 = auStack_5cc;
        ppCVar16 = apCStack_664;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *ppCVar16 = (CDemonActor *)*puVar14;
          puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
          ppCVar16 = ppCVar16 + (uint)bVar19 * -2 + 1;
        }
        fStack_1d0 = fStack_65c + fStack_650;
        afStack_1cc[0] = fStack_658 + fStack_64c;
        afStack_1cc[1] = fStack_654 + fStack_648;
        fStack_1a0 = fStack_65c + fStack_650;
        afStack_1b8[(uint)bVar19 * -2 + 7] = afStack_1cc[(uint)bVar19 * -2];
        afStack_1b8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 8] =
             afStack_1cc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
        pCVar13 = (CVector3f *)auStack_518;
        fStack_bc = fStack_1a0 * _DAT_005e3604;
        afStack_b8[0] = fStack_19c * _DAT_005e3604;
        afStack_b8[1] = fStack_198 * _DAT_005e3604;
        auStack_518._0_4_ = fStack_1a0 * _DAT_005e3604;
        afStack_510[(uint)bVar19 * -2 + -1] = afStack_b8[(uint)bVar19 * -2];
        afStack_510[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
             afStack_b8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  (this_ptr_00,pCVar13,(CVector3f *)auStack_1e8);
        pCVar13 = (CVector3f *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x20);
        afStack_b8[2] = (float)auStack_1e8._0_4_;
        afStack_b8[(uint)bVar19 * -2 + 3] = afStack_1e0[(uint)bVar19 * -2 + -1];
        apCStack_a8[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
             (CDemonActor *)afStack_1e0[(uint)bVar19 * -2 + (uint)bVar19 * -2];
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0(this_ptr_00,pCVar13,&CStack_14c);
        fStack_35c = CStack_14c.x;
        afStack_358[(uint)bVar19 * -2] = *(float *)((int)&CStack_14c + (uint)bVar19 * -8 + 4);
        afStack_358[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
             *(float *)((int)&CStack_14c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
        (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_fffff948);
        puVar14 = auStack_60c;
        puVar17 = auStack_644;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *puVar14;
          puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
          puVar17 = puVar17 + (uint)bVar19 * -2 + 1;
        }
        apCStack_a8[1] = (CDemonActor *)fStack_63c;
        if (0.0 <= afStack_358[3]) {
          auStack_12c._0_4_ = 0.0;
          auStack_12c._4_4_ = 0.0;
          pCStack_124 = (CDemonActor *)0x3fc00000;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                    (this_ptr_00,(CVector3f *)auStack_12c,(CVector3f *)(auStack_37c + 4));
          fStack_270 = (float)auStack_37c._4_4_;
          (&fStack_26c)[(uint)bVar19 * -2] = afStack_374[(uint)bVar19 * -2];
          (&pCStack_268)[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
               (CDemonActor *)afStack_374[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
          apCStack_a8[0] = (CDemonActor *)((float)apCStack_a8[0] + fStack_270);
          apCStack_a8[1] = (CDemonActor *)((float)apCStack_a8[1] + fStack_26c);
          apCStack_a8[2] = (CDemonActor *)((float)apCStack_a8[2] + (float)pCStack_268);
        }
        else {
          CStack_498.z = -1.5;
          CStack_498.x = 0.0;
          CStack_498.y = 0.0;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                    (this_ptr_00,&CStack_498,&CStack_480);
          fStack_1bc = CStack_480.x;
          afStack_1b8[(uint)bVar19 * -2] = afStack_474[(uint)bVar19 * -2 + -2];
          afStack_1b8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
               afStack_474[(uint)bVar19 * -2 + (uint)bVar19 * -2 + -1];
          apCStack_a8[0] = (CDemonActor *)((float)apCStack_a8[0] + fStack_1bc);
          apCStack_a8[1] = (CDemonActor *)((float)apCStack_a8[1] + afStack_1b8[0]);
          apCStack_a8[2] = (CDemonActor *)((float)apCStack_a8[2] + afStack_1b8[1]);
        }
        if (&stack0x00000000 != g_CDemonLightInstance.base.camera_name + 0x3c) {
          _DAT_01ccc3b8 = apCStack_a8[0];
          _DAT_01ccc3bc = apCStack_a8[1];
          _DAT_01ccc3c0 = apCStack_a8[2];
        }
        in_stack_fffff948 = (CBoundingBox3D *)0x4db270;
        (*((local_2c->vtable)._ub)->getBoundingBox)(local_2c,in_stack_fffff950);
        puVar14 = auStack_61c;
        puVar17 = auStack_5f4;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *puVar14;
          puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
          puVar17 = puVar17 + (uint)bVar19 * -2 + 1;
        }
        fStack_1a8 = fStack_5ec + fStack_5e0;
        fStack_1a4 = fStack_5e8 + fStack_5dc;
        fStack_1a0 = fStack_5e4 + fStack_5d8;
        CStack_d0.x = fStack_5ec + fStack_5e0;
        *(float *)((int)&CStack_d0 + (uint)bVar19 * -8 + 4) = afStack_1b8[(uint)bVar19 * -2 + 5];
        pCVar9 = pCStack_24;
        *(float *)((int)&CStack_d0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
             afStack_1b8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 6];
        pCVar13 = &CStack_214;
        apCStack_42c[2] = (CDemonActor *)(CStack_d0.x * _DAT_005e3604);
        afStack_420[0] = CStack_d0.y * _DAT_005e3604;
        afStack_420[1] = CStack_d0.z * _DAT_005e3604;
        CStack_214.x = CStack_d0.x * _DAT_005e3604;
        *(float *)((int)&CStack_214 + (uint)bVar19 * -8 + 4) = afStack_420[(uint)bVar19 * -2];
        *(float *)((int)&CStack_214 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
             afStack_420[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(pCVar9,pCVar13,&CStack_40c);
        auStack_200._4_4_ = CStack_40c.x;
        apCStack_1f8[(uint)bVar19 * -2] =
             *(CDemonActor **)((int)&CStack_40c + (uint)bVar19 * -8 + 4);
        apCStack_1f8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
             *(CDemonActor **)((int)&CStack_40c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
        if (&stack0x00000000 != g_CGogglesClassInfo.class_name + 0x24) {
          _DAT_01cd0c28 = (CDemonActor *)auStack_200._4_4_;
          _DAT_01cd0c2c = apCStack_1f8[0];
          _DAT_01cd0c30 = apCStack_1f8[1];
        }
      }
      else {
        pCVar13 = (CVector3f *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x20);
        puVar14 = (uint *)((int)pCStack_3c + (uint)bVar19 * -8 + 0x9c0);
        pCStack_244 = (CDemonActor *)pCStack_3c[7].orient_matrix.m[2].x;
        apCStack_240[(uint)bVar19 * -2] = (CDemonActor *)*puVar14;
        apCStack_240[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
             (CDemonActor *)puVar14[(uint)bVar19 * -2 + 1];
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0(this_ptr,pCVar13,&CStack_2c8);
        afStack_3c4[3] = CStack_2c8.x;
        afStack_3c4[(uint)bVar19 * -2 + 4] = *(float *)((int)&CStack_2c8 + (uint)bVar19 * -8 + 4);
        afStack_3c4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 5] =
             *(float *)((int)&CStack_2c8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
        if (0.0 <= fStack_3b0) {
          CStack_d0.z = 1.5;
          CStack_d0.x = 0.0;
          CStack_d0.y = -3.5;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0(this_ptr,&CStack_d0,&CStack_304);
          fStack_160 = CStack_304.x;
          afStack_15c[(uint)bVar19 * -2] = *(float *)((int)&CStack_304 + (uint)bVar19 * -8 + 4);
          afStack_15c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
               *(float *)((int)&CStack_304 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
          pCStack_244 = (CDemonActor *)((float)pCStack_244 + fStack_160);
          apCStack_240[0] = (CDemonActor *)((float)apCStack_240[0] + afStack_15c[0]);
          apCStack_240[1] = (CDemonActor *)((float)apCStack_240[1] + afStack_15c[1]);
        }
        else {
          auStack_2b4._4_4_ = 0.0;
          afStack_2ac[1] = -1.5;
          afStack_2ac[0] = -3.5;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                    (pCStack_3c,(CVector3f *)(auStack_2b4 + 4),&CStack_340);
          afStack_b8[3] = CStack_340.x;
          apCStack_a8[(uint)bVar19 * -2] =
               *(CDemonActor **)((int)&CStack_340 + (uint)bVar19 * -8 + 4);
          apCStack_a8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
               *(CDemonActor **)((int)&CStack_340 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
          pCStack_244 = (CDemonActor *)((float)pCStack_244 + afStack_b8[3]);
          apCStack_240[0] = (CDemonActor *)((float)apCStack_240[0] + (float)apCStack_a8[0]);
          apCStack_240[1] = (CDemonActor *)((float)apCStack_240[1] + (float)apCStack_a8[1]);
        }
        if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[4].x_max) {
          _DAT_01ccc3b8 = pCStack_244;
          _DAT_01ccc3bc = apCStack_240[0];
          _DAT_01ccc3c0 = apCStack_240[1];
        }
        pCVar13 = pCStack_3c[7].orient_matrix.m + 2;
        if (pCVar13 != (CVector3f *)&DAT_01cd0c28) {
          _DAT_01cd0c28 = (CDemonActor *)pCVar13->x;
          _DAT_01cd0c30 = (CDemonActor *)pCStack_3c[7].orient_matrix.m[2].z;
          _DAT_01cd0c2c = (CDemonActor *)pCStack_3c[7].orient_matrix.m[2].y;
        }
      }
    }
    else {
      iVar5 = core_actor_cpp_isOfClass_FUN_0040c550(pCStack_50,"CEnemy");
      if (iVar5 == 0) {
        iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        puVar14 = (uint *)((int)pCStack_50 + (uint)bVar19 * -8 + 0x24);
        CStack_4b8.y = (pCStack_50->location).position.x;
        apCStack_4ac[(uint)bVar19 * -2 + -1] = (CDemonActor *)*puVar14;
        apCStack_4ac[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
             (CDemonActor *)puVar14[(uint)bVar19 * -2 + 1];
        CStack_4b8.z = *(float *)(iVar5 + 0x24);
        CStack_3a0.x = 0.0;
        CStack_3a0.y = 0.0;
        CStack_3a0.z = 2.0;
        core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                  (pCStack_50,&CStack_3a0,(CVector3f *)(auStack_1e8 + 4));
        afStack_374[1] = (float)auStack_1e8._4_4_;
        afStack_374[(uint)bVar19 * -2 + 2] = afStack_1e0[(uint)bVar19 * -2];
        afStack_374[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 3] =
             afStack_1e0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
        CStack_4b8.y = CStack_4b8.y + afStack_374[1];
        CStack_4b8.z = CStack_4b8.z + afStack_374[2];
        apCStack_4ac[0] = (CDemonActor *)((float)apCStack_4ac[0] + afStack_374[3]);
        if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x2b].x_max) {
          _DAT_01ccc3b8 = (CDemonActor *)CStack_4b8.y;
          _DAT_01ccc3bc = (CDemonActor *)CStack_4b8.z;
          _DAT_01ccc3c0 = apCStack_4ac[0];
        }
        if (&pCStack_70->location != (CLocation *)&DAT_01cd0c28) {
          _DAT_01cd0c28 = (CDemonActor *)(pCStack_70->location).position.x;
          _DAT_01cd0c30 = (CDemonActor *)(pCStack_70->location).position.z;
          _DAT_01cd0c2c = (CDemonActor *)(pCStack_70->location).position.y;
        }
      }
      else {
        this_ptr_02 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c600
                                         (actor_ptr,g_CConstructClassInfo.name_hash);
        if (this_ptr_02 != (CHero *)0x0) {
          (*(((this_ptr_02->base).base.vtable._uh)->_uh).isWeaponDrawn)(this_ptr_02);
          pCStack_430 = (CDemonActor *)CStack_3f8.z;
          apCStack_42c[(uint)bVar19 * -2] = (CDemonActor *)(&uStack_3ec)[(uint)bVar19 * -2];
          apCStack_42c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
               *(CDemonActor **)((int)&CStack_3e8 + (uint)bVar19 * -8 + (uint)bVar19 * -8);
          if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x22].y_max) {
            _DAT_01ccc3b8 = apCStack_42c[0];
            _DAT_01ccc3bc = apCStack_42c[1];
            _DAT_01ccc3c0 = apCStack_42c[2];
          }
          if ((EBloodType *)&stack0x00000000 != &g_BloodParticles[5].blood_type) {
            _DAT_01cd0c28 = apCStack_42c[0];
            _DAT_01cd0c2c = apCStack_42c[1];
            _DAT_01cd0c30 = apCStack_42c[2];
          }
        }
      }
    }
    if ((local_38 != 0) && ((_DAT_01c43544 & 2) != 0)) {
      _DAT_01cd0c28 = (CDemonActor *)0x7149f2ca;
      _DAT_01ccc3c4 = 0;
      goto LAB_004da080;
    }
    _DAT_01ccc3d4 = 0.0;
    _DAT_01ccc3c4 = 1;
    if (_DAT_01ccc3dc != (CCharacter *)0x0) goto LAB_004dbaf8;
LAB_004dbb02:
    if (_DAT_01ccc3c4 == 0) goto LAB_004da080;
  }
  if (*(int *)(param_1 + 0xac) == 0) {
    bVar20 = (&DAT_01c50950)[*(int *)(param_1 + 0x30)];
  }
  else {
    bVar20 = (&DAT_01c50950)[*(int *)(param_1 + 0x30)] == '\0';
  }
  param_2[2] = (uint)bVar20;
  if (param_2[2] == 0) {
    _DAT_01ccc3d8 = 0;
  }
  else {
    _DAT_01ccc3d8 = 1;
  }
LAB_004da080:
  iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  CStack_498.y = *(float *)(iVar5 + 0x20) - (float)_DAT_01ccc3b8;
  CStack_498.z = *(float *)(iVar5 + 0x24) - (float)_DAT_01ccc3bc;
  afStack_48c[0] = *(float *)(iVar5 + 0x28) - (float)_DAT_01ccc3c0;
  afStack_1b8[3] = CStack_498.y;
  afStack_1b8[(uint)bVar19 * -2 + 4] = afStack_48c[(uint)bVar19 * -2 + -1];
  afStack_1b8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 5] =
       afStack_48c[(uint)bVar19 * -2 + (uint)bVar19 * -2];
  fVar7 = SQRT(fStack_1a4 * fStack_1a4 + afStack_1b8[3] * afStack_1b8[3] + fStack_1a8 * fStack_1a8);
  if (((_DAT_01ccc3c4 != 0) && (_DAT_01ccc3dc == (CCharacter *)0x0)) ||
     ((float)_DAT_01cd0c28 < (float)_DAT_005e360c)) {
    if (fVar7 - fVar7 * (float)_DAT_005e3614 <
        ABS((float)_DAT_01ccc3bc - *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x24))) {
      _DAT_01ccc3b0 = 0;
      _DAT_01cd0c28 = (CDemonActor *)0x7149f2ca;
      _DAT_01ccc3c4 = 0;
    }
    this_ptr_03 = core_path_cpp_getPathMap_FUN_005351f0((CLocation *)&DAT_01ccc3b8);
    iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                      (this_ptr_03,(CVector3f *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x20),
                       (CVector3f *)(auStack_12c + 4),0);
    if (iVar5 == 0) {
      _DAT_01ccc3c4 = 0;
    }
    else {
      afStack_694[0] =
           core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                     ((float)pCStack_124 -
                      *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x34));
      fVar6 = afStack_694[0] * _DAT_005e361c * (float)_DAT_005e3624;
      param_2[10] = fVar6;
      if (fVar6 < -(float)pCStack_698) {
        param_2[10] = ABS(afStack_694[0]) * -(float)pCStack_698 * (float)_DAT_005e362c;
      }
      if ((float)pCStack_698 < (float)param_2[10]) {
        param_2[10] = ABS(afStack_694[0]) * (float)pCStack_698 * (float)_DAT_005e362c;
      }
      if (ABS((float)param_2[10]) < (float)_DAT_005e3634) {
        param_2[10] = 0;
      }
      iVar5 = _DAT_01ccc3d8;
      *param_2 = 1;
      if (iVar5 != 0) {
        param_2[2] = 1;
      }
    }
    if (((fVar7 < (float)in_stack_fffff948 * _DAT_005e3604) && (_DAT_01ccc3d8 == 0)) ||
       ((fVar7 < (float)in_stack_fffff948 * (float)_DAT_005e363c && (_DAT_01ccc3d8 == 1)))) {
      *param_2 = 0;
      if ((float)_DAT_005e360c <= (float)_DAT_01cd0c28) {
        _DAT_01ccc3c4 = 0;
      }
      else {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                  (*(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4),(CVector3f *)&DAT_01ccc3b8,
                   &CStack_2d8);
        fStack_98 = CStack_2d8.x;
        afStack_94[(uint)bVar19 * -2] = *(float *)((int)&CStack_2d8 + (uint)bVar19 * -8 + 4);
        afStack_94[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
             *(float *)((int)&CStack_2d8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
        if ((float)pCStack_50 < fStack_98) {
          param_2[2] = 0;
          param_2[9] = 0x3e4ccccd;
        }
        if (fStack_98 < -(float)pCStack_50) {
          param_2[2] = 0;
          param_2[9] = 0xbe4ccccd;
        }
        if ((float)pCStack_50 < afStack_94[1]) {
          param_2[2] = 0;
          *param_2 = 1;
        }
        if (afStack_94[1] < -(float)pCStack_50) {
          param_2[2] = 0;
          param_2[1] = 1;
        }
        iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        fStack_26c = (float)_DAT_01cd0c28 - *(float *)(iVar5 + 0x20);
        pCStack_268 = (CDemonActor *)((float)_DAT_01cd0c2c - *(float *)(iVar5 + 0x24));
        afStack_264[0] = (float)_DAT_01cd0c30 - *(float *)(iVar5 + 0x28);
        fStack_524 = fStack_26c;
        afStack_520[(uint)bVar19 * -2] = (float)(&pCStack_268)[(uint)bVar19 * -2];
        afStack_520[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
             afStack_264[(uint)bVar19 * -2 + (uint)bVar19 * -2];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
        apCStack_560[3] = (CDemonActor *)uStack_410;
        *(uint *)((int)&CStack_550 + (uint)bVar19 * -8) =
             *(uint *)((int)&CStack_40c + (uint)bVar19 * -8);
        *(uint *)((int)&CStack_550 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 4) =
             *(uint *)((int)&CStack_40c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 4);
        fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                          (CStack_550.x - *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x34)
                          );
        fVar7 = fVar6 * _DAT_005e361c * (float)_DAT_005e3624;
        param_2[10] = fVar7;
        if (fVar7 < -(float)pCStack_698) {
          param_2[10] = ABS(fVar6) * -(float)pCStack_698 * (float)_DAT_005e362c;
        }
        if ((float)pCStack_698 < (float)param_2[10]) {
          param_2[10] = ABS(fVar6) * (float)pCStack_698 * (float)_DAT_005e362c;
        }
        if (ABS((float)param_2[10]) < (float)_DAT_005e3634) {
          *param_2 = 0;
          param_2[10] = 0;
          _DAT_01ccc3c4 = 0;
          _DAT_01cd0c28 = (CDemonActor *)0x7149f2ca;
        }
      }
      if (((_DAT_01ccc3b0 != 0) && ((float)_DAT_005e360c < (float)_DAT_01cd0c28)) &&
         ((_DAT_01ccc3b0 = 0, local_38 == 0 && (fStack_69c <= 0.0)))) {
        param_2[3] = 1;
      }
    }
    iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    CStack_480.y = _DAT_01ccc3c8 - *(float *)(iVar5 + 0x20);
    CStack_480.z = _DAT_01ccc3cc - *(float *)(iVar5 + 0x24);
    afStack_474[0] = _DAT_01ccc3d0 - *(float *)(iVar5 + 0x28);
    fStack_3c8 = CStack_480.y;
    afStack_3c4[(uint)bVar19 * -2] = afStack_474[(uint)bVar19 * -2 + -1];
    afStack_3c4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         afStack_474[(uint)bVar19 * -2 + (uint)bVar19 * -2];
    local_58 = SQRT(afStack_3c4[1] * afStack_3c4[1] +
                    fStack_3c8 * fStack_3c8 + afStack_3c4[0] * afStack_3c4[0]);
    fStack_60 = local_58;
    if (0.0 < *(float *)(param_1 + 0x294)) {
      fStack_60 = local_58 / *(float *)(param_1 + 0x294);
    }
    if (_DAT_005e3644 <= fStack_60) {
      _DAT_01ccc3d4 = 0.0;
    }
    else {
      _DAT_01ccc3d4 = *(float *)(param_1 + 0x294) + _DAT_01ccc3d4;
      if (((_DAT_005e3604 <= _DAT_01ccc3d4) && (_DAT_01ccc3c4 = 0, _DAT_01ccc3b0 != 0)) &&
         (_DAT_01ccc3b0 = 0, local_38 == 0)) {
        param_2[3] = 1;
      }
    }
  }
  if (_DAT_01ccc3dc != (CCharacter *)0x0) {
    iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    fStack_584 = (_DAT_01ccc3dc->base).location.position.x - *(float *)(iVar5 + 0x20);
    afStack_580[0] = (_DAT_01ccc3dc->base).location.position.y - *(float *)(iVar5 + 0x24);
    afStack_580[1] = (_DAT_01ccc3dc->base).location.position.z - *(float *)(iVar5 + 0x28);
    fStack_38c = fStack_584;
    afStack_388[(uint)bVar19 * -2] = afStack_580[(uint)bVar19 * -2];
    afStack_388[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         afStack_580[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
    uStack_29c = uStack_110;
    afStack_298[(uint)bVar19 * -2] = afStack_10c[(uint)bVar19 * -2];
    afStack_298[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         afStack_10c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                      (afStack_298[0] - *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x34));
    if ((float)_DAT_005e364c < ABS(fVar7)) {
      _DAT_01ccc3d4 = -1.0;
      param_2[8] = 1;
    }
    fVar6 = fVar7 * _DAT_005e361c * (float)_DAT_005e3624;
    param_2[10] = fVar6;
    if (fVar6 < -(float)pCStack_698) {
      param_2[10] = ABS(fVar7) * -(float)pCStack_698 * (float)_DAT_005e362c;
    }
    if ((float)pCStack_698 < (float)param_2[10]) {
      param_2[10] = ABS(fVar7) * (float)pCStack_698 * (float)_DAT_005e362c;
    }
    if (ABS((float)param_2[10]) < (float)_DAT_005e3634) {
      param_2[10] = 0;
    }
    if (_DAT_01ccc3c4 != 0) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                (*(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4),(CVector3f *)&DAT_01ccc3b8,
                 (CVector3f *)auStack_464);
      fStack_140 = (float)auStack_464._0_4_;
      afStack_13c[(uint)bVar19 * -2] = *(float *)(auStack_464 + (uint)bVar19 * -8 + 4);
      afStack_13c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
           afStack_458[(uint)bVar19 * -2 + (uint)bVar19 * -2 + -1];
      if ((float)in_stack_fffff948 < fStack_140) {
        param_2[2] = 1;
        param_2[9] = 0x3f800000;
      }
      if (fStack_140 < -(float)in_stack_fffff948) {
        param_2[2] = 1;
        param_2[9] = 0xbf800000;
      }
      if ((float)in_stack_fffff948 < afStack_13c[1]) {
        param_2[2] = 1;
        *param_2 = 1;
      }
      if (afStack_13c[1] < -(float)in_stack_fffff948) {
        param_2[2] = 1;
        param_2[1] = 1;
      }
    }
    EVar8 = (*(((_DAT_01ccc3dc->base).vtable._uc)->_uc).getDeathState)(_DAT_01ccc3dc);
    if (EVar8 != DEATH_STATE_ALIVE) {
      _DAT_01ccc3dc = (CCharacter *)0x0;
    }
  }
  _DAT_01ccc3b4 = _DAT_01c43544;
  iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  if ((float *)(iVar5 + 0x20) != (float *)&DAT_01ccc3c8) {
    _DAT_01ccc3c8 = *(float *)(iVar5 + 0x20);
    _DAT_01ccc3d0 = *(float *)(iVar5 + 0x28);
    _DAT_01ccc3cc = *(float *)(iVar5 + 0x24);
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  return;
}
