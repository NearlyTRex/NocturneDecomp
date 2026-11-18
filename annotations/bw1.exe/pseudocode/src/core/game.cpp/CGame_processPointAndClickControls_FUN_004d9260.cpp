// Name: core_game.cpp_CGame_processPointAndClickControls_FUN_004d9260
// Address: 004d9260
// Address Range: [[004d9260, 004dbff8]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processPointAndClickControls_FUN_004d9260(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processPointAndClickControls_FUN_004d9260(CGame *this_ptr,SPlayerInput *player_control)

{
  float fVar1;
  float fVar2;
  _BIT_INTEGER32 _Var3;
  int iVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  CDemonActor *pCVar8;
  CDemonActor *pCVar9;
  CDemonActor *this_ptr_00;
  CDemonActor *this_ptr_01;
  CDemonActor *this_ptr_02;
  CDemonActor *this_ptr_03;
  CHero *pCVar10;
  CPathMap *this_ptr_04;
  EDeathState EVar11;
  CLocation *pCVar12;
  CDemonActor *pCVar13;
  int *piVar14;
  float *pfVar15;
  uint *puVar16;
  uint *puVar17;
  byte bVar18;
  byte bVar19;
  float in_stack_0000000c;
  CDemonActor *in_stack_00000018;
  CDemonActor *pCStack00000028;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  CDemonActor *in_stack_0000003c;
  CDemonActor *pCStack00000040;
  CDemonActor *in_stack_00000044;
  float afStackY_1524 [80];
  int aiStackY_13e4 [7];
  float afStackY_13c8 [78];
  int aiStackY_1290 [3];
  float afStackY_1284 [6];
  int aiStackY_126c [6];
  float afStackY_1254 [101];
  int aiStackY_10c0 [7];
  float afStackY_10a4 [630];
  uint uStack_668;
  CDemonSet *pCVar20;
  CVector3i *pCVar21;
  CVector3f *pCVar22;
  CBoundingBox3D *out_box;
  CBoundingBox3D *in_stack_fffff9b0;
  CBoundingBox3D *in_stack_fffff9b8;
  float fStack_640;
  float fStack_63c;
  float fStack_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  float fStack_610;
  float fStack_5fc;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  float fStack_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5d4;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float fStack_578;
  float fStack_574;
  float fStack_570;
  CVector3f CStack_53c;
  float fStack_530;
  float fStack_52c;
  float afStack_528 [4];
  float afStack_518 [5];
  CVector3f CStack_504;
  float afStack_4f8 [4];
  CVector3f CStack_4e8;
  CVector3f CStack_4dc;
  CVector3f CStack_4d0;
  CVector3f CStack_4bc;
  byte auStack_4b0 [8];
  float afStack_4a8 [4];
  float fStack_498;
  float fStack_494;
  float afStack_490 [2];
  CVector3i CStack_488;
  CVector3f CStack_47c;
  CVector3i CStack_470;
  CVector3f CStack_464;
  CVector3f CStack_450;
  float afStack_444 [5];
  CVector3f CStack_430;
  float afStack_424 [3];
  CVector3f CStack_418;
  float fStack_40c;
  float afStack_408 [3];
  byte auStack_3fc [8];
  float fStack_3f4;
  int aiStack_3f0 [3];
  CVector3f CStack_3e4;
  float afStack_3d8 [4];
  float fStack_3c8;
  float afStack_3c4 [4];
  float fStack_3b4;
  byte auStack_3a8 [8];
  float fStack_3a0;
  float afStack_39c [3];
  CVector3f CStack_390;
  CVector3f CStack_380;
  CVector3f CStack_374;
  float fStack_360;
  float afStack_35c [5];
  float fStack_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  CVector3f CStack_338;
  CVector3f CStack_324;
  byte auStack_314 [8];
  float afStack_30c [6];
  float fStack_2f4;
  CVector3f CStack_2f0;
  CVector3f CStack_2e4;
  CVector3f CStack_2d8;
  float fStack_2cc;
  float afStack_2c8 [2];
  CVector3i CStack_2c0;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  CVector3i CStack_2a8;
  CVector3f CStack_29c;
  CVector3i CStack_290;
  CVector3i CStack_284;
  CVector3f CStack_270;
  float fStack_264;
  CVector3f CStack_260;
  byte auStack_24c [8];
  float afStack_244 [4];
  float fStack_234;
  float afStack_230 [3];
  CVector3i aCStack_224 [2];
  float fStack_208;
  float afStack_204 [4];
  CVector3f CStack_1f4;
  CVector3i CStack_1e8;
  float fStack_1dc;
  float afStack_1d8 [4];
  float fStack_1c8;
  CVector3f CStack_1b8;
  CVector3f CStack_1ac;
  byte auStack_198 [8];
  float fStack_190;
  float afStack_18c [3];
  byte auStack_180 [8];
  float afStack_178 [4];
  float fStack_168;
  float fStack_164;
  float afStack_160 [4];
  float fStack_150;
  float afStack_14c [4];
  float fStack_13c;
  float fStack_138;
  CVector3f CStack_134;
  CVector3i CStack_128;
  CVector3i CStack_11c;
  float fStack_110;
  float afStack_10c [4];
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  CVector3f CStack_e4;
  float fStack_d8;
  int iStack_d4;
  float fStack_d0;
  byte auStack_c4 [8];
  float fStack_bc;
  float fStack_b8;
  float afStack_b4 [3];
  CVector3f CStack_a8;
  float fStack_9c;
  CVector3i CStack_98;
  float fStack_8c;
  uint auStack_88 [5];
  CVector3i CStack_74;
  CVector3f CStack_68;
  uint local_5c;
  uint local_58;
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  float fStack_3c;
  float local_38;
  int local_34;
  float local_30;
  CVector3f local_2c [2];
  
  bVar18 = 0;
  if ((g_BYTE_01ccc3e0 & 1) == 0) {
    g_BYTE_01ccc3e0 = g_BYTE_01ccc3e0 | 1;
  }
  if ((g_BYTE_01ccc3e0 & 2) == 0) {
    g_BYTE_01ccc3e0 = g_BYTE_01ccc3e0 | 2;
  }
  local_30 = (float)g_MouseX;
  local_2c[0].x = (float)g_MouseY;
  local_38 = (float)g_INT_0061b498;
  local_5c = 0x41000000;
  local_34 = g_INT_0061b49c;
  if (0x1e0 < g_INT_0061b49c) {
    local_30 = (float)((g_MouseX * 0x1e0) / g_INT_0061b49c);
    local_2c[0].x = (float)((g_MouseY * 0x1e0) / g_INT_0061b49c);
    local_38 = 8.96831e-43;
    local_34 = 0x1e0;
  }
  if (this_ptr->screen_clear_enabled != 0) {
    local_34 = 0xf0;
    local_38 = 4.48416e-43;
  }
  if ((int)local_30 < 2) {
    local_30 = 2.8026e-45;
  }
  if ((int)local_38 + -2 < (int)local_30) {
    local_30 = (float)((int)local_38 + -2);
  }
  if ((int)local_2c[0].x < 2) {
    local_2c[0].x = 2.8026e-45;
  }
  if (local_34 + -2 < (int)local_2c[0].x) {
    local_2c[0].x = (float)(local_34 + -2);
  }
  local_58 = 0x3e4ccccd;
  memset(player_control,0,0x30);
  piVar14 = &(player_control->action_state).use_item;
  if (g_PrevKeyboardState[this_ptr->key_use_item] == g_KeyboardState[this_ptr->key_use_item]) {
    *piVar14 = 0;
  }
  else {
    *piVar14 = (uint)(byte)g_KeyboardState[this_ptr->key_use_item];
  }
  piVar14 = &(player_control->action_state).light;
  if (g_PrevKeyboardState[this_ptr->key_light] == g_KeyboardState[this_ptr->key_light]) {
    *piVar14 = 0;
  }
  else {
    *piVar14 = (uint)(byte)g_KeyboardState[this_ptr->key_light];
  }
  piVar14 = &(player_control->action_state).draw;
  if (g_PrevKeyboardState[this_ptr->key_draw] == g_KeyboardState[this_ptr->key_draw]) {
    *piVar14 = 0;
  }
  else {
    *piVar14 = (uint)(byte)g_KeyboardState[this_ptr->key_draw];
  }
  iVar6 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_next_weapon);
  if (iVar6 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,(CDemonActor *)0x0,5,1);
  }
  iVar6 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_prev_weapon);
  if (iVar6 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,(CDemonActor *)0x0,5,-1);
  }
  iVar6 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_next_item);
  if (iVar6 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004f8ec0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,1);
  }
  iVar6 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_prev_item);
  if (iVar6 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004f8ec0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,-1);
  }
  iVar6 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_next_ammo);
  if (iVar6 != 0) {
    core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004f8fe0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,1);
  }
  iVar6 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_item_desc);
  if (iVar6 != 0) {
    core_inv_cpp_CInventory_toggleDetailView_FUN_004fc370
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory);
  }
  iVar6 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_weapon_1);
  if (iVar6 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,(CDemonActor *)0x0,0,1);
  }
  iVar6 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_weapon_2);
  if (iVar6 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,(CDemonActor *)0x0,1,1);
  }
  iVar6 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_weapon_3);
  if (iVar6 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,(CDemonActor *)0x0,2,1);
  }
  iVar6 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_weapon_4);
  if (iVar6 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,(CDemonActor *)0x0,4,1);
  }
  iVar6 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_weapon_5);
  if (iVar6 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,(CDemonActor *)0x0,3,1);
  }
  iVar6 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_infrared);
  if (iVar6 != 0) {
    uStack_668 = 0x4d970f;
    (*(((g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.vtable._uh)->_uh).toggleGoggles)
              (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]);
  }
  if ((g_INT_01cd0c94 != 0) ||
     (iVar6 = core_script_cpp_CScript_getLetterboxHeight_FUN_00543950(g_CScriptPtr), 2 < iVar6)) {
    g_INT_01cd0c94 = 0;
    g_INT_01ccc3c4 = 0;
    g_INT_01ccc3b4 = 0;
    g_MouseButtonFlags.dword = 0;
    g_CDemonActor_PTR_01ccc3dc = (CDemonActor *)0x0;
    sound_sndmain_cpp_killAllSfx_FUN_00573b00();
    g_FLOAT_01cd0c28 = 1e+30;
  }
  if (g_INT_01cd0b40 < 0) {
    g_MouseButtonFlags.dword = 0;
    g_INT_01ccc3c4 = 0;
    g_CDemonActor_PTR_01ccc3dc = (CDemonActor *)0x0;
    g_FLOAT_01cd0c28 = 1e+30;
    g_INT_01ccc3b4 = 0;
  }
  pCStack00000028 =
       (CDemonActor *)
       (*(((g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.vtable._uh)->_uh).isWeaponDrawn)
                 (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]);
  if (this_ptr->goggles_active != 0) {
    if ((g_MouseButtonFlags.dword & 1) != 0) {
      if ((float10)0 <
          (float10)((int)in_stack_0000003c - in_stack_00000030 / 2) /
          (float10)(in_stack_00000034 / 2)) {
        (player_control->action_state).backup = 1;
      }
      else {
        (player_control->action_state).walk = 1;
      }
      if (this_ptr->always_run == 0) {
        bVar18 = g_KeyboardState[this_ptr->key_run];
      }
      else {
        bVar18 = g_KeyboardState[this_ptr->key_run] == '\0';
      }
      (player_control->action_state).run = (uint)bVar18;
    }
    fVar7 = (float)(in_stack_00000038 - in_stack_00000030 / 2) / (float)(in_stack_00000030 / 2);
    player_control->turn_speed = fVar7;
    _Var3 = g_MouseButtonFlags;
    player_control->turn_speed =
         fVar7 * player_control->turn_speed * player_control->turn_speed * 0.25f;
    if ((_Var3.dword & 2) != 0) {
      (player_control->action_state).fire = 1;
      return;
    }
    return;
  }
  if (0.0 <= g_FLOAT_0061d954) {
    g_FLOAT_0061d954 = g_FLOAT_0061d954 - g_CGamePtr->delta_time_float;
  }
  else {
    g_FLOAT_0061d954 = 0.25;
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    uStack_668 = 0x4d997f;
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044dd70
              (&g_CDemonCameraInstance,in_stack_00000038,(int)in_stack_0000003c,
               (CVector3i *)(auStack_198 + 4));
    pCVar21 = aCStack_224;
    aCStack_224[0].x = auStack_198._4_4_;
    *(float *)((int)aCStack_224 + ((uint)bVar18 * -2 + -1) * 4 + 8) =
         afStack_18c[(uint)bVar18 * -2 + -1];
    *(float *)((int)aCStack_224 + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8) =
         afStack_18c[(uint)bVar18 * -2 + (uint)bVar18 * -2];
    core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40
              (&g_CDemonCameraInstance,pCVar21,&CStack_74);
    aCStack_224[0].x = CStack_74.x;
    *(uint *)((int)aCStack_224 + ((uint)bVar18 * -2 + -1) * 4 + 8) =
         *(uint *)((int)&CStack_74 + (uint)bVar18 * -8 + 4);
    *(uint *)((int)aCStack_224 + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8) =
         *(uint *)((int)&CStack_74 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
    CStack_2e4.x = (float)aCStack_224[0].x * 0.00390625f;
    CStack_2e4.y = (float)aCStack_224[0].y * 0.00390625f;
    CStack_2e4.z = (float)aCStack_224[0].z * 0.00390625f;
    iVar6 = 4;
    fStack_110 = g_CDemonCameraInstance.base.position.f.x;
    afStack_10c[(uint)bVar18 * -2] =
         *(float *)((int)&g_CDemonCameraInstance + (uint)bVar18 * -8 + 8);
    afStack_10c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
         *(float *)((uint)bVar18 * -8 + 0x1fe37f8 + (uint)bVar18 * -8);
    CStack_134.x = fStack_110;
    *(float *)((int)&CStack_134 + (uint)bVar18 * -8 + 4) = afStack_10c[(uint)bVar18 * -2];
    pCVar20 = g_CDemonSetPtr;
    *(float *)((int)&CStack_134 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
         afStack_10c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
    core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(pCVar20,iVar6);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
              (g_CDemonSetPtr,(CDemonActor *)g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]);
    g_INT_01cd0c24 = 0;
    iVar6 = 0;
    while (pCVar13 = (CDemonActor *)g_INT_01cd0c24, iVar6 < 4) {
      uStack_668 = 0x4d9a63;
      fVar7 = core_setcolid_cpp_CDemonSet_raycast_FUN_00557300
                        (g_CDemonSetPtr,&CStack_134,&CStack_2e4);
      pCVar13 = (CDemonActor *)g_INT_01cd0c24;
      if ((fVar7 < 0.0) || (0x3f800000 < (int)fVar7)) break;
      pCVar8 = g_CDemonSetPtr->collision_actor;
      pCVar13 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar8,g_CDoorClassInfo.name_hash);
      if (pCVar13 != (CDemonActor *)0x0) {
        pCVar9 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar8,g_CDoorClassInfo.name_hash);
        pCVar13 = (CDemonActor *)g_INT_01cd0c24;
        if ((pCVar9[7].lifecycle_state != ACTOR_NOT_CREATED) && (pCVar9[2].orient.vec.x == 0.0)) {
          g_INT_01cd0c24 = (int)pCVar8;
          g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->hero_action = 3;
          pCVar13 = (CDemonActor *)g_INT_01cd0c24;
        }
        break;
      }
      pCVar13 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar8,g_CBoxActorClassInfo.name_hash);
      if ((pCVar13 != (CDemonActor *)0x0) &&
         (pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c600
                              (pCVar8,g_CBoxActorClassInfo.name_hash), pCVar13[2].health != 0)) {
        g_INT_01cd0c24 = (int)pCVar8;
        g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->hero_action = 4;
        pCVar13 = (CDemonActor *)g_INT_01cd0c24;
        break;
      }
      pCVar9 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar8,g_CWeaponClassInfo.name_hash);
      pCVar13 = pCVar8;
      if (pCVar9 != (CDemonActor *)0x0) break;
      pCVar9 = (CLever *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar8,g_CLeverClassInfo.name_hash);
      if (pCVar9 != (CDemonActor *)0x0) {
        g_INT_01cd0c24 = (int)pCVar8;
        g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->hero_action = 7;
        pCVar13 = (CDemonActor *)g_INT_01cd0c24;
        break;
      }
      pCVar9 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar8,g_CEnemyClassInfo.name_hash);
      if ((((pCVar9 != (CDemonActor *)0x0) ||
           (pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar8,g_CNPCClassInfo.name_hash),
           pCVar9 != (CDemonActor *)0x0)) ||
          ((pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar8,g_CHeroClassInfo.name_hash),
           iVar4 = g_INT_01d06ab4, pCVar9 != (CDemonActor *)0x0 &&
           (pCVar10 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c600
                                         (pCVar8,g_CHeroClassInfo.name_hash),
           pCVar10 != g_CHero_PTR_ARRAY_01d06aa4[iVar4])))) ||
         (((pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c600
                               (pCVar8,g_CTriggerClassInfo.name_hash), pCVar9 != (CDemonActor *)0x0
           || (core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCVar8),
              pCVar13 = (CDemonActor *)g_INT_01cd0c24, fVar7 < 0.0)) ||
          (iVar6 = iVar6 + 1, 0x3f800000 < (int)fVar7)))) break;
    }
    g_INT_01cd0c24 = (int)pCVar13;
    iVar4 = g_INT_01d06ab4;
    iVar6 = g_INT_01cd0c24;
    if (g_INT_01cd0c24 != 0) {
      g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->hero_action_actor = (CDemonActor *)g_INT_01cd0c24;
      g_CHero_PTR_ARRAY_01d06aa4[iVar4]->hero_action_target = (CDemonActor *)iVar6;
      g_CHero_PTR_ARRAY_01d06aa4[iVar4]->hero_action_range = 0.0;
    }
  }
  if (in_stack_00000038 < 0x20) {
    g_INT_01cd0b40 = 3;
  }
  else if (in_stack_00000030 + -0x20 < in_stack_00000038) {
    g_INT_01cd0b40 = 4;
  }
  else if ((int)in_stack_0000003c < 0x20) {
    g_INT_01cd0b40 = 1;
  }
  else if (in_stack_00000034 + -0x20 < (int)in_stack_0000003c) {
    g_INT_01cd0b40 = 2;
  }
  else if (g_INT_01cd0c24 == 0) {
    g_INT_01cd0b40 = g_INT_01cd0c24;
    if (g_CDemonActor_PTR_01ccc3dc != (CDemonActor *)0x0) {
      g_INT_01cd0b40 = 7;
    }
  }
  else {
    iVar6 = core_actor_cpp_isOfClass_FUN_0040c550((CDemonActor *)g_INT_01cd0c24,"CEnemy");
    if (iVar6 == 0) {
      g_INT_01cd0b40 = 5;
    }
    else {
      g_INT_01cd0b40 = 6;
    }
  }
  pCStack00000040 = (CDemonActor *)0x0;
  pCVar13 = pCStack00000040;
  if ((g_INT_01ccc3b4 == 0) &&
     ((g_MouseButtonFlags.dword == 1 || ((g_MouseButtonFlags.dword & 2) != 0)))) {
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    uStack_668 = 0x4d9b3e;
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044dd70
              (&g_CDemonCameraInstance,in_stack_00000038,(int)in_stack_0000003c,&CStack_2c0);
    pCVar21 = &CStack_488;
    CStack_488.x = CStack_2c0.x;
    *(uint *)((int)&CStack_488 + (uint)bVar18 * -8 + 4) =
         *(uint *)((int)&CStack_2c0 + (uint)bVar18 * -8 + 4);
    *(uint *)((int)&CStack_488 + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8) =
         *(uint *)((int)&CStack_2c0 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
    core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40
              (&g_CDemonCameraInstance,pCVar21,&CStack_98);
    CStack_488.x = CStack_98.x;
    *(uint *)((int)&CStack_488 + (uint)bVar18 * -8 + 4) =
         *(uint *)((int)&CStack_98 + (uint)bVar18 * -8 + 4);
    *(uint *)((int)&CStack_488 + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8) =
         *(uint *)((int)&CStack_98 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
    CStack_2f0.x = (float)CStack_488.x * 0.00390625f;
    CStack_2f0.y = (float)CStack_488.y * 0.00390625f;
    CStack_2f0.z = (float)CStack_488.z * 0.00390625f;
    iVar6 = 4;
    afStack_518[0] = g_CDemonCameraInstance.base.position.f.x;
    afStack_518[(uint)bVar18 * -2 + 1] =
         *(float *)((int)&g_CDemonCameraInstance + (uint)bVar18 * -8 + 8);
    afStack_518[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2] =
         *(float *)((uint)bVar18 * -8 + 0x1fe37f8 + (uint)bVar18 * -8);
    CStack_464.x = afStack_518[0];
    *(float *)((int)&CStack_464 + (uint)bVar18 * -8 + 4) = afStack_518[(uint)bVar18 * -2 + 1];
    pCVar20 = g_CDemonSetPtr;
    *(float *)((int)&CStack_464 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
         afStack_518[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2];
    core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(pCVar20,iVar6);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
              (g_CDemonSetPtr,(CDemonActor *)g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]);
    iVar6 = 0;
    while (pCVar13 = pCStack00000040, iVar6 < 4) {
      uStack_668 = 0x4d9c1b;
      in_stack_00000044 =
           (CDemonActor *)
           core_setcolid_cpp_CDemonSet_raycast_FUN_00557300(g_CDemonSetPtr,&CStack_464,&CStack_2f0);
      pCVar13 = pCStack00000040;
      if (((float)in_stack_00000044 < 0.0) || (0x3f800000 < (int)in_stack_00000044)) break;
      pCVar13 = g_CDemonSetPtr->collision_actor;
      pCVar8 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar13,g_CDoorClassInfo.name_hash);
      if (((((pCVar8 != (CDemonActor *)0x0) ||
            (((pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                                  (pCVar13,g_CBoxActorClassInfo.name_hash),
              pCVar8 != (CDemonActor *)0x0 &&
              (pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                                  (pCVar13,g_CBoxActorClassInfo.name_hash), pCVar8[2].health != 0))
             || (pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                                    (pCVar13,g_CWeaponClassInfo.name_hash),
                pCVar8 != (CDemonActor *)0x0)))) ||
           (((pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                                 (pCVar13,g_CLeverClassInfo.name_hash), pCVar8 != (CDemonActor *)0x0
             || (pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                                    (pCVar13,g_CNPCClassInfo.name_hash),
                pCVar8 != (CDemonActor *)0x0)) ||
            (pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (pCVar13,g_CHeroClassInfo.name_hash), pCVar8 != (CDemonActor *)0x0))
           )) || ((pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                                      (pCVar13,g_CConstructClassInfo.name_hash),
                  pCVar8 != (CDemonActor *)0x0 ||
                  (pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                                      (pCVar13,g_CTriggerClassInfo.name_hash),
                  pCVar8 != (CDemonActor *)0x0)))) ||
         ((core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCVar13),
          pCVar13 = pCStack00000040, (float)in_stack_00000044 < 0.0 ||
          (iVar6 = iVar6 + 1, 0x3f800000 < (int)in_stack_00000044)))) break;
    }
  }
  pCStack00000040 = pCVar13;
  if ((pCStack00000028 == (CDemonActor *)0x0) || ((g_MouseButtonFlags.dword & 2) == 0)) {
    if (pCStack00000028 == (CDemonActor *)0x0) {
      g_CDemonActor_PTR_01ccc3dc = pCStack00000028;
    }
  }
  else {
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    uStack_668 = 0x4d9c99;
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044dd70
              (&g_CDemonCameraInstance,in_stack_00000038,(int)in_stack_0000003c,&CStack_128);
    pCVar21 = (CVector3i *)(auStack_3a8 + 4);
    auStack_3a8._4_4_ = CStack_128.x;
    afStack_39c[(uint)bVar18 * -2 + -1] = *(float *)((int)&CStack_128 + (uint)bVar18 * -8 + 4);
    afStack_39c[(uint)bVar18 * -2 + (uint)bVar18 * -2] =
         *(float *)((int)&CStack_128 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
    core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40
              (&g_CDemonCameraInstance,pCVar21,(CVector3i *)(auStack_4b0 + 4));
    auStack_3a8._4_4_ = auStack_4b0._4_4_;
    afStack_39c[(uint)bVar18 * -2 + -1] = afStack_4a8[(uint)bVar18 * -2];
    afStack_39c[(uint)bVar18 * -2 + (uint)bVar18 * -2] =
         afStack_4a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
    CStack_1f4.x = (float)(int)auStack_3a8._4_4_ * 0.00390625f;
    CStack_1f4.y = (float)(int)fStack_3a0 * 0.00390625f;
    CStack_1f4.z = (float)(int)afStack_39c[0] * 0.00390625f;
    iVar6 = 4;
    fStack_8c = g_CDemonCameraInstance.base.position.f.x;
    auStack_88[(uint)bVar18 * -2] =
         *(uint *)((int)&g_CDemonCameraInstance + (uint)bVar18 * -8 + 8);
    auStack_88[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
         *(uint *)((uint)bVar18 * -8 + 0x1fe37f8 + (uint)bVar18 * -8);
    local_2c[0].x = fStack_8c;
    *(uint *)((int)local_2c + (uint)bVar18 * -8 + 4) = auStack_88[(uint)bVar18 * -2];
    pCVar20 = g_CDemonSetPtr;
    *(uint *)((int)local_2c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
         auStack_88[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
    core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(pCVar20,iVar6);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
              (g_CDemonSetPtr,(CDemonActor *)g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]);
    iVar6 = 0;
    while (iVar6 < 4) {
      uStack_668 = 0x4d9d76;
      fStack_630 = core_setcolid_cpp_CDemonSet_raycast_FUN_00557300
                             (g_CDemonSetPtr,local_2c,&CStack_1f4);
      if ((fStack_630 < 0.0) || (0x3f800000 < (int)fStack_630)) break;
      pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (g_CDemonSetPtr->collision_actor,g_CEnemyClassInfo.name_hash);
      if (pCVar13 != (CDemonActor *)0x0) {
        g_INT_01cd0b40 = 5;
        g_CDemonActor_PTR_01ccc3dc = pCVar13;
        break;
      }
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
      if ((fStack_630 < 0.0) || (iVar6 = iVar6 + 1, 0x3f800000 < (int)fStack_630)) break;
    }
    if (g_CDemonActor_PTR_01ccc3dc != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4],
                 &(g_CDemonActor_PTR_01ccc3dc->location).position,&CStack_47c);
      CStack_3e4.y = CStack_47c.x;
      afStack_3d8[(uint)bVar18 * -2 + -1] = *(float *)((int)&CStack_47c + (uint)bVar18 * -8 + 4);
      afStack_3d8[(uint)bVar18 * -2 + (uint)bVar18 * -2] =
           *(float *)((int)&CStack_47c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      if (afStack_3d8[0] < 0.0) goto LAB_004d9de9;
    }
    (player_control->action_state).fire = 1;
  }
LAB_004d9de9:
  if (((g_INT_01ccc3b4 != 0) || (g_MouseButtonFlags.dword != 1)) &&
     ((g_MouseButtonFlags.dword & 2) == 0)) goto LAB_004da080;
  g_FLOAT_01cd0c28 = 1e+30;
  uStack_668 = 0x4d9e36;
  core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044dd70
            (&g_CDemonCameraInstance,in_stack_00000038,(int)in_stack_0000003c,&CStack_11c);
  CStack_470.x = CStack_11c.x;
  *(uint *)((int)&CStack_470 + (uint)bVar18 * -8 + 4) =
       *(uint *)((int)&CStack_11c + (uint)bVar18 * -8 + 4);
  *(uint *)((int)&CStack_470 + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8) =
       *(uint *)((int)&CStack_11c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
  if (pCStack00000040 == (CDemonActor *)0x0) {
    if (((in_stack_00000038 < 0x20) || (in_stack_00000030 + -0x20 < in_stack_00000038)) ||
       (((int)in_stack_0000003c < 0x20 || (in_stack_00000034 + -0x20 < (int)in_stack_0000003c)))) {
      uStack_668 = 0x4dbb97;
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044dd70
                (&g_CDemonCameraInstance,in_stack_00000030 / 2,in_stack_00000034 / 2,&CStack_2a8);
      pCVar21 = (CVector3i *)(auStack_3fc + 4);
      auStack_3fc._4_4_ = CStack_2a8.x;
      aiStack_3f0[(uint)bVar18 * -2 + -1] = *(int *)((int)&CStack_2a8 + (uint)bVar18 * -8 + 4);
      aiStack_3f0[(uint)bVar18 * -2 + (uint)bVar18 * -2] =
           *(int *)((int)&CStack_2a8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40
                (&g_CDemonCameraInstance,pCVar21,&CStack_284);
      auStack_3fc._4_4_ = CStack_284.x;
      aiStack_3f0[(uint)bVar18 * -2 + -1] = *(int *)((int)&CStack_284 + (uint)bVar18 * -8 + 4);
      aiStack_3f0[(uint)bVar18 * -2 + (uint)bVar18 * -2] =
           *(int *)((int)&CStack_284 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      afStack_4a8[2] = (float)(int)auStack_3fc._4_4_ * 0.00390625f;
      afStack_4a8[3] = (float)(int)fStack_3f4 * 0.00390625f;
      fStack_498 = (float)aiStack_3f0[0] * 0.00390625f;
      core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40
                (&g_CDemonCameraInstance,&CStack_470,&CStack_290);
      CStack_470.x = CStack_290.x;
      *(uint *)((int)&CStack_470 + (uint)bVar18 * -8 + 4) =
           *(uint *)((int)&CStack_290 + (uint)bVar18 * -8 + 4);
      *(uint *)((int)&CStack_470 + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8) =
           *(uint *)((int)&CStack_290 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      fStack_2b4 = (float)CStack_470.x * 0.00390625f;
      fStack_2b0 = (float)CStack_470.y * 0.00390625f;
      fStack_2ac = (float)CStack_470.z * 0.00390625f;
      afStack_1d8[2] = (float)CStack_470.x * 0.00390625f - afStack_4a8[2];
      afStack_1d8[3] = (float)CStack_470.y * 0.00390625f - afStack_4a8[3];
      fStack_1c8 = (float)CStack_470.z * 0.00390625f - fStack_498;
      fStack_2cc = afStack_1d8[2];
      afStack_2c8[(uint)bVar18 * -2] = afStack_1d8[(uint)bVar18 * -2 + 3];
      fVar5 = fStack_2ac;
      fVar2 = fStack_2b0;
      fVar7 = fStack_2b4;
      afStack_2c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
           afStack_1d8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
      this_ptr = (CGame *)SQRT(afStack_2c8[1] * afStack_2c8[1] + fStack_2cc * fStack_2cc);
      afStack_2c8[0] = 0.0;
      if ((float)this_ptr <= 0.0) {
        fStack_2cc = 0.0;
        afStack_2c8[1] = 0.0;
      }
      else {
        fVar1 = 1.0 / (float)this_ptr;
        fStack_2cc = fStack_2cc * fVar1;
        afStack_2c8[0] = fVar1 * 0.0;
        afStack_2c8[1] = afStack_2c8[1] * fVar1;
      }
      if ((pCStack00000028 != (CDemonActor *)0x0) && ((g_MouseButtonFlags.dword & 2) != 0)) {
        if (g_INT_01ccc3c4 != 1) {
          g_INT_01ccc3c4 = 0;
        }
        goto LAB_004dbaf8;
      }
      CStack_418.z = fStack_2cc * in_stack_0000000c;
      fStack_40c = afStack_2c8[0] * in_stack_0000000c;
      afStack_408[0] = afStack_2c8[1] * in_stack_0000000c;
      afStack_35c[0] = fStack_2cc * in_stack_0000000c;
      afStack_35c[(uint)bVar18 * -2 + 1] = afStack_408[(uint)bVar18 * -2 + -1];
      afStack_35c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2] =
           afStack_408[(uint)bVar18 * -2 + (uint)bVar18 * -2];
      afStack_204[1] = fVar7 + afStack_35c[0];
      afStack_204[2] = fVar2 + afStack_35c[1];
      afStack_204[3] = fVar5 + afStack_35c[2];
      fStack_bc = fVar7 + afStack_35c[0];
      afStack_b4[(uint)bVar18 * -2 + -1] = afStack_204[(uint)bVar18 * -2 + 2];
      afStack_b4[(uint)bVar18 * -2 + (uint)bVar18 * -2] =
           afStack_204[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 3];
      if (&stack0x00000000 != g_CDemonLightInstance.base.camera_name + 0x50) {
        g_CVector3f_01ccc3b8.x = fStack_bc;
        g_CVector3f_01ccc3b8.y = fStack_b8;
        g_CVector3f_01ccc3b8.z = afStack_b4[0];
      }
      g_FLOAT_01ccc3d4 = 0.0;
      g_INT_01ccc3c4 = 1;
    }
    else {
      core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40
                (&g_CDemonCameraInstance,&CStack_470,&CStack_1e8);
      CStack_470.x = CStack_1e8.x;
      *(uint *)((int)&CStack_470 + (uint)bVar18 * -8 + 4) =
           *(uint *)((int)&CStack_1e8 + (uint)bVar18 * -8 + 4);
      *(uint *)((int)&CStack_470 + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8) =
           *(uint *)((int)&CStack_1e8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      if ((pCStack00000028 != (CDemonActor *)0x0) && ((g_MouseButtonFlags.dword & 2) != 0)) {
        if (g_INT_01ccc3c4 != 1) {
          g_INT_01ccc3c4 = 0;
        }
LAB_004dbaf8:
        g_FLOAT_01cd0c28 = 1e+30;
        goto LAB_004dbb02;
      }
      if (g_MouseButtonFlags.dword != 1) goto LAB_004dbb02;
      g_CVector3f_01ccc3b8.x = (float)CStack_470.x * 0.00390625f;
      g_CVector3f_01ccc3b8.y = (float)CStack_470.y * 0.00390625f;
      g_CVector3f_01ccc3b8.z = (float)CStack_470.z * 0.00390625f;
      g_FLOAT_01ccc3d4 = 0.0;
      g_INT_01ccc3c4 = (int)g_MouseButtonFlags;
    }
  }
  else {
    if (((g_MouseButtonFlags.dword & 2) != 0) && (g_CDemonActor_PTR_01ccc3dc == (CDemonActor *)0x0))
    {
      g_INT_01ccc3b0 = 1;
      if (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->action_pending == 0) {
        core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0
                  (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base);
        fStack_63c = 2.0;
      }
    }
    fStack_63c = fStack_63c - this_ptr->delta_time_float;
    pCVar8 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c600(pCStack00000040,g_CDoorClassInfo.name_hash)
    ;
    pCVar13 = pCStack00000040;
    in_stack_00000018 =
         core_actor_cpp_castToClassHash_FUN_0040c600
                   (pCStack00000040,g_CCharacterClassInfo.name_hash);
    pCVar9 = (CLever *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar13,g_CLeverClassInfo.name_hash);
    this_ptr_00 = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar13,g_CTriggerClassInfo.name_hash)
    ;
    this_ptr_01 = core_actor_cpp_castToClassHash_FUN_0040c600
                            (pCVar13,g_CBoxActorClassInfo.name_hash);
    this_ptr_02 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar13,g_CMeleeClassInfo.name_hash);
    pCVar13 = pCStack00000040;
    this_ptr_03 = core_actor_cpp_castToClassHash_FUN_0040c600
                            (pCStack00000040,g_CWeaponClassInfo.name_hash);
    out_box = (CBoundingBox3D *)0x40200000;
    if (in_stack_00000018 == (CDemonActor *)0x0) {
      if (pCVar8 == (CDemonActor *)0x0) {
        if (pCVar9 == (CDemonActor *)0x0) {
          if (this_ptr_01 == (CDemonActor *)0x0) {
            if (this_ptr_02 == (CDemonActor *)0x0) {
              if (this_ptr_03 == (CDemonActor *)0x0) {
                if (this_ptr_00 == (CDemonActor *)0x0) {
                  if ((g_MouseButtonFlags.dword == 1) &&
                     (&pCStack00000040->location != (CLocation *)&g_CVector3f_01ccc3b8)) {
                    g_CVector3f_01ccc3b8.x = (pCStack00000040->location).position.x;
                    g_CVector3f_01ccc3b8.z = (pCStack00000040->location).position.z;
                    g_CVector3f_01ccc3b8.y = (pCStack00000040->location).position.y;
                  }
                }
                else {
                  pCVar22 = &(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location.
                             position;
                  pfVar15 = (float *)((int)this_ptr_00 + (uint)bVar18 * -8 + 0x24);
                  fStack_344 = (this_ptr_00->location).position.x;
                  afStack_35c[(uint)bVar18 * -2 + 7] = *pfVar15;
                  afStack_35c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 8] =
                       pfVar15[(uint)bVar18 * -2 + 1];
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                            (this_ptr_00,pCVar22,&CStack_374);
                  fStack_340 = (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location.
                               position.y;
                  (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,out_box);
                  puVar16 = &stack0xfffffa84;
                  puVar17 = (uint *)&stack0xfffff9ec;
                  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *puVar17 = *puVar16;
                    puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
                    puVar17 = puVar17 + (uint)bVar18 * -2 + 1;
                  }
                  CStack_3e4.y = fStack_5fc;
                  CStack_3e4.x = 0.0;
                  CStack_3e4.z = 0.0;
                  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                            (this_ptr_00,&CStack_3e4,(CVector3f *)auStack_198);
                  CStack_390.x = (float)auStack_198._0_4_;
                  *(uint *)((int)&CStack_390 + (uint)bVar18 * -8 + 4) =
                       *(uint *)(auStack_198 + (uint)bVar18 * -8 + 4);
                  *(float *)((int)&CStack_390 + ((uint)bVar18 * -2 + (uint)bVar18 * -2 + 1) * 4 + 4)
                       = afStack_18c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + -1];
                  if (&CStack_3e4 != (CVector3f *)(afStack_39c + 3)) {
                    CStack_3e4.x = CStack_390.x;
                    CStack_3e4.y = CStack_390.y;
                    CStack_3e4.z = CStack_390.z;
                  }
                  if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x13].y_max)
                  {
                    g_CVector3f_01ccc3b8.x = fStack_33c;
                    g_CVector3f_01ccc3b8.y = CStack_338.x;
                    g_CVector3f_01ccc3b8.z = CStack_338.y;
                  }
                  if ((EBloodType *)&stack0x00000000 != &g_BloodParticles[4].blood_type) {
                    g_FLOAT_01cd0c28 = CStack_3e4.x;
                    g_FLOAT_01cd0c2c = CStack_3e4.y;
                    g_FLOAT_01cd0c30 = CStack_3e4.z;
                  }
                }
              }
              else {
                pCVar22 = &(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location.position
                ;
                pfVar15 = (float *)((int)this_ptr_03 + (uint)bVar18 * -8 + 0x24);
                fStack_494 = (this_ptr_03->location).position.x;
                afStack_490[(uint)bVar18 * -2] = *pfVar15;
                afStack_490[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
                     pfVar15[(uint)bVar18 * -2 + 1];
                core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                          (this_ptr_03,pCVar22,&CStack_380);
                afStack_490[0] =
                     (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location.position.y;
                if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x29].x_max) {
                  g_CVector3f_01ccc3b8.x = fStack_494;
                  g_CVector3f_01ccc3b8.z = afStack_490[1];
                  g_CVector3f_01ccc3b8.y = afStack_490[0];
                }
                if (&this_ptr_03->location != (CLocation *)&g_FLOAT_01cd0c28) {
                  g_FLOAT_01cd0c28 = (this_ptr_03->location).position.x;
                  g_FLOAT_01cd0c30 = (this_ptr_03->location).position.z;
                  g_FLOAT_01cd0c2c = (this_ptr_03->location).position.y;
                }
              }
            }
            else {
              pfVar15 = (float *)((int)this_ptr_02 + (uint)bVar18 * -8 + 0x24);
              afStack_230[0] = (this_ptr_02->location).position.x;
              afStack_230[(uint)bVar18 * -2 + 1] = *pfVar15;
              afStack_230[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2] =
                   pfVar15[(uint)bVar18 * -2 + 1];
              (*((this_ptr_02->vtable)._ub)->getBoundingBox)(this_ptr_02,out_box);
              puVar16 = (uint *)&stack0xfffffab4;
              puVar17 = &stack0xfffff9d4;
              for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar17 = *puVar16;
                puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
                puVar17 = puVar17 + (uint)bVar18 * -2 + 1;
              }
              CStack_450.z = fStack_610;
              CStack_450.x = (float)pCVar9;
              CStack_450.y = (float)pCVar9;
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                        (this_ptr_00,&CStack_450,(CVector3f *)auStack_24c);
              CStack_504.x = (float)auStack_24c._0_4_;
              afStack_4f8[(uint)bVar18 * -2 + -2] = *(float *)(auStack_24c + (uint)bVar18 * -8 + 4);
              afStack_4f8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + -1] =
                   afStack_244[(uint)bVar18 * -2 + (uint)bVar18 * -2];
              if (&CStack_450 != &CStack_504) {
                CStack_450.x = CStack_504.x;
                CStack_450.y = CStack_504.y;
                CStack_450.z = CStack_504.z;
              }
              aCStack_224[0].x =
                   (int)(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location.position.y;
              if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[2].y_min) {
                g_CVector3f_01ccc3b8.x = afStack_230[2];
                g_CVector3f_01ccc3b8.z = (float)aCStack_224[0].y;
                g_CVector3f_01ccc3b8.y = (float)aCStack_224[0].x;
              }
              if ((float *)&stack0x00000000 != &g_BloodParticles[6].base.acceleration.y) {
                g_FLOAT_01cd0c28 = CStack_450.x;
                g_FLOAT_01cd0c2c = CStack_450.y;
                g_FLOAT_01cd0c30 = CStack_450.z;
              }
            }
          }
          else {
            pCVar10 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
            pfVar15 = (float *)((int)this_ptr_01 + (uint)bVar18 * -8 + 0x24);
            CStack_504.y = (this_ptr_01->location).position.x;
            afStack_4f8[(uint)bVar18 * -2 + -1] = *pfVar15;
            afStack_4f8[(uint)bVar18 * -2 + (uint)bVar18 * -2] = pfVar15[(uint)bVar18 * -2 + 1];
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                      (this_ptr_01,&(pCVar10->base).base.location.position,&CStack_4d0);
            CStack_504.z = (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location.position
                           .y;
            if ((CRect *)&stack0x00000000 != g_CDemonLightInstance.base.rect_array + 0x30) {
              g_CVector3f_01ccc3b8.x = CStack_504.y;
              g_CVector3f_01ccc3b8.z = afStack_4f8[0];
              g_CVector3f_01ccc3b8.y = CStack_504.z;
            }
            if (&this_ptr_01->location != (CLocation *)&g_FLOAT_01cd0c28) {
              g_FLOAT_01cd0c28 = (this_ptr_01->location).position.x;
              g_FLOAT_01cd0c30 = (this_ptr_01->location).position.z;
              g_FLOAT_01cd0c2c = (this_ptr_01->location).position.y;
            }
          }
        }
        else {
          pCVar22 = &(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location.position;
          pfVar15 = (float *)((int)pCVar9 + (uint)bVar18 * -8 + 0x24);
          afStack_10c[2] = (pCVar9->location).position.x;
          afStack_10c[(uint)bVar18 * -2 + 3] = *pfVar15;
          afStack_10c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] = pfVar15[(uint)bVar18 * -2 + 1];
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0(pCVar9,pCVar22,&CStack_1b8);
          pCVar10 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
          CStack_a8.y = CStack_1b8.x;
          *(uint *)((int)&CStack_a8 + (uint)bVar18 * -8 + 8) =
               *(uint *)((int)&CStack_1b8 + (uint)bVar18 * -8 + 4);
          (&fStack_9c)[(uint)bVar18 * -2 + (uint)bVar18 * -2] =
               *(float *)((int)&CStack_1b8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
          afStack_10c[3] = (pCVar10->base).base.location.position.y;
          if (0.0 <= fStack_9c) {
            CStack_4dc.x = 0.0;
            CStack_4dc.y = 0.0;
            CStack_4dc.z = 2.0;
            core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0(pCVar9,&CStack_4dc,&CStack_4e8);
            CStack_270.y = CStack_4e8.x;
            *(uint *)((int)&CStack_270 + (uint)bVar18 * -8 + 8) =
                 *(uint *)((int)&CStack_4e8 + (uint)bVar18 * -8 + 4);
            (&fStack_264)[(uint)bVar18 * -2 + (uint)bVar18 * -2] =
                 *(float *)((int)&CStack_4e8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
            afStack_10c[2] = afStack_10c[2] + CStack_270.y;
            afStack_10c[3] = afStack_10c[3] + CStack_270.z;
            fStack_fc = fStack_fc + fStack_264;
          }
          else {
            auStack_314._0_4_ = 0.0;
            auStack_314._4_4_ = 0.0;
            afStack_30c[0] = -2.0;
            core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                      (pCVar9,(CVector3f *)auStack_314,&CStack_53c);
            fStack_530 = CStack_53c.x;
            afStack_528[(uint)bVar18 * -2 + -1] =
                 *(float *)((int)&CStack_53c + (uint)bVar18 * -8 + 4);
            afStack_528[(uint)bVar18 * -2 + (uint)bVar18 * -2] =
                 *(float *)((int)&CStack_53c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
            afStack_10c[2] = afStack_10c[2] + fStack_530;
            afStack_10c[3] = afStack_10c[3] + fStack_52c;
            fStack_fc = fStack_fc + afStack_528[0];
          }
          if (&stack0x00000000 != g_CDemonLightInstance.base.camera_name + 0x98) {
            g_CVector3f_01ccc3b8.x = afStack_10c[2];
            g_CVector3f_01ccc3b8.y = afStack_10c[3];
            g_CVector3f_01ccc3b8.z = fStack_fc;
          }
          if (&pCVar9->location != (CLocation *)&g_FLOAT_01cd0c28) {
            g_FLOAT_01cd0c28 = (pCVar9->location).position.x;
            g_FLOAT_01cd0c30 = (pCVar9->location).position.z;
            g_FLOAT_01cd0c2c = (pCVar9->location).position.y;
          }
        }
      }
      else if ((pCVar8[7].lifecycle_state == ACTOR_NOT_CREATED) &&
              (pCVar8[2].location.position.z != 0.0)) {
        (*((pCVar8->vtable)._ub)->getBoundingBox)(pCVar8,(CBoundingBox3D *)0x40200000);
        puVar16 = (uint *)&stack0xfffffa9c;
        puVar17 = &stack0xfffffa04;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar17 = *puVar16;
          puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
          puVar17 = puVar17 + (uint)bVar18 * -2 + 1;
        }
        fStack_168 = fStack_5f4 + fStack_5e8;
        fStack_164 = fStack_5f0 + fStack_5e4;
        afStack_160[0] = fStack_5ec + fStack_5e0;
        fStack_138 = fStack_5f4 + fStack_5e8;
        *(float *)((int)&CStack_134 + (uint)bVar18 * -8) = afStack_160[(uint)bVar18 * -2 + -1];
        *(float *)((int)&CStack_134 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 4) =
             afStack_160[(uint)bVar18 * -2 + (uint)bVar18 * -2];
        pCVar22 = (CVector3f *)auStack_4b0;
        fStack_54 = fStack_138 * 0.5f;
        afStack_50[0] = CStack_134.x * 0.5f;
        afStack_50[1] = CStack_134.y * 0.5f;
        auStack_4b0._0_4_ = fStack_138 * 0.5f;
        afStack_4a8[(uint)bVar18 * -2 + -1] = afStack_50[(uint)bVar18 * -2];
        afStack_4a8[(uint)bVar18 * -2 + (uint)bVar18 * -2] =
             afStack_50[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  (pCVar8,pCVar22,(CVector3f *)auStack_180);
        pCVar22 = &(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location.position;
        afStack_50[2] = (float)auStack_180._0_4_;
        afStack_50[(uint)bVar18 * -2 + 3] = afStack_178[(uint)bVar18 * -2 + -1];
        afStack_50[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
             afStack_178[(uint)bVar18 * -2 + (uint)bVar18 * -2];
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0(pCVar8,pCVar22,&CStack_e4);
        fStack_2f4 = CStack_e4.x;
        *(uint *)((int)&CStack_2f0 + (uint)bVar18 * -8) =
             *(uint *)((int)&CStack_e4 + (uint)bVar18 * -8 + 4);
        *(uint *)((int)&CStack_2f0 + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 4) =
             *(uint *)((int)&CStack_e4 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        (*((pCVar8->vtable)._ub)->getBoundingBox)(pCVar8,in_stack_fffff9b0);
        puVar16 = (uint *)&stack0xfffffa5c;
        puVar17 = (uint *)&stack0xfffffa24;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar17 = *puVar16;
          puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
          puVar17 = puVar17 + (uint)bVar18 * -2 + 1;
        }
        fStack_3c = fStack_5d4;
        if (0.0 <= CStack_2e4.x) {
          auStack_c4._0_4_ = 0.0;
          auStack_c4._4_4_ = 0.0;
          fStack_bc = 1.5;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                    (pCVar8,(CVector3f *)auStack_c4,(CVector3f *)(auStack_314 + 4));
          fStack_208 = (float)auStack_314._4_4_;
          afStack_204[(uint)bVar18 * -2] = afStack_30c[(uint)bVar18 * -2];
          afStack_204[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
               afStack_30c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
          fStack_40 = fStack_40 + fStack_208;
          fStack_3c = fStack_3c + afStack_204[0];
          local_38 = local_38 + afStack_204[1];
        }
        else {
          CStack_430.z = -1.5;
          CStack_430.x = 0.0;
          CStack_430.y = 0.0;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0(pCVar8,&CStack_430,&CStack_418);
          afStack_160[3] = CStack_418.x;
          afStack_14c[(uint)bVar18 * -2 + -1] = *(float *)((int)&CStack_418 + (uint)bVar18 * -8 + 4)
          ;
          afStack_14c[(uint)bVar18 * -2 + (uint)bVar18 * -2] =
               *(float *)((int)&CStack_418 + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8);
          fStack_40 = fStack_40 + afStack_160[3];
          fStack_3c = fStack_3c + fStack_150;
          local_38 = local_38 + afStack_14c[0];
        }
        if ((float *)&stack0x00000000 != &g_CDemonLightInstance.base.base.rotation_matrix.m[0].y) {
          g_CVector3f_01ccc3b8.x = fStack_40;
          g_CVector3f_01ccc3b8.y = fStack_3c;
          g_CVector3f_01ccc3b8.z = local_38;
        }
        in_stack_fffff9b0 = (CBoundingBox3D *)0x4db270;
        (*((in_stack_0000003c->vtable)._ub)->getBoundingBox)(in_stack_0000003c,in_stack_fffff9b8);
        puVar16 = (uint *)&stack0xfffffa4c;
        puVar17 = (uint *)&stack0xfffffa74;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar17 = *puVar16;
          puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
          puVar17 = puVar17 + (uint)bVar18 * -2 + 1;
        }
        afStack_14c[3] = fStack_584 + fStack_578;
        fStack_13c = fStack_580 + fStack_574;
        fStack_138 = fStack_57c + fStack_570;
        CStack_68.x = fStack_584 + fStack_578;
        *(float *)((int)&CStack_68 + (uint)bVar18 * -8 + 4) = afStack_14c[(uint)bVar18 * -2 + 4];
        *(float *)((int)&CStack_68 + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8) =
             afStack_14c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5];
        pCVar22 = &CStack_1ac;
        afStack_3c4[2] = CStack_68.x * 0.5f;
        afStack_3c4[3] = CStack_68.y * 0.5f;
        fStack_3b4 = CStack_68.z * 0.5f;
        CStack_1ac.x = CStack_68.x * 0.5f;
        *(float *)((int)&CStack_1ac + (uint)bVar18 * -8 + 4) = afStack_3c4[(uint)bVar18 * -2 + 3];
        *(float *)((int)&CStack_1ac + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
             afStack_3c4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  (in_stack_00000044,pCVar22,(CVector3f *)(auStack_3a8 + 4));
        auStack_198._4_4_ = auStack_3a8._4_4_;
        afStack_18c[(uint)bVar18 * -2 + -1] = afStack_39c[(uint)bVar18 * -2 + -1];
        afStack_18c[(uint)bVar18 * -2 + (uint)bVar18 * -2] =
             afStack_39c[(uint)bVar18 * -2 + (uint)bVar18 * -2];
        if ((int *)&stack0x00000000 != g_GhoulIndices + 9) {
          g_FLOAT_01cd0c28 = (float)auStack_198._4_4_;
          g_FLOAT_01cd0c2c = fStack_190;
          g_FLOAT_01cd0c30 = afStack_18c[0];
        }
      }
      else {
        pCVar22 = &(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location.position;
        pfVar15 = (float *)((int)pCVar8 + (uint)bVar18 * -8 + 0x9c0);
        fStack_1dc = pCVar8[7].orient_matrix.m[2].x;
        afStack_1d8[(uint)bVar18 * -2] = *pfVar15;
        afStack_1d8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] = pfVar15[(uint)bVar18 * -2 + 1];
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0(pCVar8,pCVar22,&CStack_260);
        afStack_35c[3] = CStack_260.x;
        afStack_35c[(uint)bVar18 * -2 + 4] = *(float *)((int)&CStack_260 + (uint)bVar18 * -8 + 4);
        afStack_35c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5] =
             *(float *)((int)&CStack_260 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        if (0.0 <= fStack_348) {
          CStack_68.z = 1.5;
          CStack_68.x = 0.0;
          CStack_68.y = -3.5;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0(pCVar8,&CStack_68,&CStack_29c);
          fStack_f8 = CStack_29c.x;
          afStack_10c[(uint)bVar18 * -2 + 6] = *(float *)((int)&CStack_29c + (uint)bVar18 * -8 + 4);
          afStack_10c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
               *(float *)((int)&CStack_29c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
          fStack_1dc = fStack_1dc + fStack_f8;
          afStack_1d8[0] = afStack_1d8[0] + fStack_f4;
          afStack_1d8[1] = afStack_1d8[1] + fStack_f0;
        }
        else {
          auStack_24c._4_4_ = 0.0;
          afStack_244[1] = -1.5;
          afStack_244[0] = -3.5;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                    (pCVar8,(CVector3f *)(auStack_24c + 4),&CStack_2d8);
          afStack_50[3] = CStack_2d8.x;
          afStack_50[(uint)bVar18 * -2 + 4] = *(float *)((int)&CStack_2d8 + (uint)bVar18 * -8 + 4);
          afStack_50[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5] =
               *(float *)((int)&CStack_2d8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
          fStack_1dc = fStack_1dc + afStack_50[3];
          afStack_1d8[0] = afStack_1d8[0] + fStack_40;
          afStack_1d8[1] = afStack_1d8[1] + fStack_3c;
        }
        if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.inverted_matrix.m[1].z) {
          g_CVector3f_01ccc3b8.x = fStack_1dc;
          g_CVector3f_01ccc3b8.y = afStack_1d8[0];
          g_CVector3f_01ccc3b8.z = afStack_1d8[1];
        }
        pCVar22 = pCVar8[7].orient_matrix.m + 2;
        if (pCVar22 != (CVector3f *)&g_FLOAT_01cd0c28) {
          g_FLOAT_01cd0c28 = pCVar22->x;
          g_FLOAT_01cd0c30 = pCVar8[7].orient_matrix.m[2].z;
          g_FLOAT_01cd0c2c = pCVar8[7].orient_matrix.m[2].y;
        }
      }
    }
    else {
      iVar6 = core_actor_cpp_isOfClass_FUN_0040c550(in_stack_00000018,"CEnemy");
      if (iVar6 == 0) {
        pCVar10 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
        pfVar15 = (float *)((int)in_stack_00000018 + (uint)bVar18 * -8 + 0x24);
        CStack_450.y = (in_stack_00000018->location).position.x;
        afStack_444[(uint)bVar18 * -2 + -1] = *pfVar15;
        afStack_444[(uint)bVar18 * -2 + (uint)bVar18 * -2] = pfVar15[(uint)bVar18 * -2 + 1];
        CStack_450.z = (pCVar10->base).base.location.position.y;
        CStack_338.x = 0.0;
        CStack_338.y = 0.0;
        CStack_338.z = 2.0;
        core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                  (in_stack_00000018,&CStack_338,(CVector3f *)(auStack_180 + 4));
        afStack_30c[1] = (float)auStack_180._4_4_;
        afStack_30c[(uint)bVar18 * -2 + 2] = afStack_178[(uint)bVar18 * -2];
        afStack_30c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 3] =
             afStack_178[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
        CStack_450.y = CStack_450.y + afStack_30c[1];
        CStack_450.z = CStack_450.z + afStack_30c[2];
        afStack_444[0] = afStack_444[0] + afStack_30c[3];
        if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x24].y_max) {
          g_CVector3f_01ccc3b8.x = CStack_450.y;
          g_CVector3f_01ccc3b8.y = CStack_450.z;
          g_CVector3f_01ccc3b8.z = afStack_444[0];
        }
        if (&in_stack_00000018->location != (CLocation *)&g_FLOAT_01cd0c28) {
          g_FLOAT_01cd0c28 = (in_stack_00000018->location).position.x;
          g_FLOAT_01cd0c30 = (in_stack_00000018->location).position.z;
          g_FLOAT_01cd0c2c = (in_stack_00000018->location).position.y;
        }
      }
      else {
        pCVar10 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c600
                                     (pCVar13,g_CConstructClassInfo.name_hash);
        if (pCVar10 != (CHero *)0x0) {
          (*(((pCVar10->base).base.vtable._uh)->_uh).isWeaponDrawn)(pCVar10);
          fStack_3c8 = CStack_390.z;
          afStack_3c4[(uint)bVar18 * -2] =
               *(float *)((int)&CStack_390 + ((uint)bVar18 * -2 + 2) * 4 + 4);
          afStack_3c4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
               *(float *)((int)&CStack_380 + (uint)bVar18 * -8 + (uint)bVar18 * -8);
          if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x1c].x_max) {
            g_CVector3f_01ccc3b8.x = afStack_3c4[0];
            g_CVector3f_01ccc3b8.y = afStack_3c4[1];
            g_CVector3f_01ccc3b8.z = afStack_3c4[2];
          }
          if ((float *)&stack0x00000000 != &g_BloodParticles[4].base.acceleration.z) {
            g_FLOAT_01cd0c28 = afStack_3c4[0];
            g_FLOAT_01cd0c2c = afStack_3c4[1];
            g_FLOAT_01cd0c30 = afStack_3c4[2];
          }
        }
      }
    }
    if ((in_stack_00000030 != 0) && ((g_MouseButtonFlags.dword & 2) != 0)) {
      g_FLOAT_01cd0c28 = 1e+30;
      g_INT_01ccc3c4 = 0;
      goto LAB_004da080;
    }
    g_FLOAT_01ccc3d4 = 0.0;
    g_INT_01ccc3c4 = 1;
    if (g_CDemonActor_PTR_01ccc3dc != (CDemonActor *)0x0) goto LAB_004dbaf8;
LAB_004dbb02:
    if (g_INT_01ccc3c4 == 0) goto LAB_004da080;
  }
  if (this_ptr->always_run == 0) {
    bVar19 = g_KeyboardState[this_ptr->key_run];
  }
  else {
    bVar19 = g_KeyboardState[this_ptr->key_run] == '\0';
  }
  (player_control->action_state).run = (uint)bVar19;
  if ((player_control->action_state).run == 0) {
    g_INT_01ccc3d8 = 0;
  }
  else {
    g_INT_01ccc3d8 = 1;
  }
LAB_004da080:
  pCVar10 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
  CStack_430.y = (pCVar10->base).base.location.position.x - g_CVector3f_01ccc3b8.x;
  CStack_430.z = (pCVar10->base).base.location.position.y - g_CVector3f_01ccc3b8.y;
  afStack_424[0] = (pCVar10->base).base.location.position.z - g_CVector3f_01ccc3b8.z;
  afStack_14c[2] = CStack_430.y;
  afStack_14c[(uint)bVar18 * -2 + 3] = afStack_424[(uint)bVar18 * -2 + -1];
  afStack_14c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
       afStack_424[(uint)bVar18 * -2 + (uint)bVar18 * -2];
  fVar7 = SQRT(fStack_13c * fStack_13c +
               afStack_14c[2] * afStack_14c[2] + afStack_14c[3] * afStack_14c[3]);
  if (((g_INT_01ccc3c4 != 0) && (g_CDemonActor_PTR_01ccc3dc == (CDemonActor *)0x0)) ||
     (g_FLOAT_01cd0c28 < (float)9.9999999999999991e+28)) {
    if (fVar7 - fVar7 * (float)0.25 <
        ABS(g_CVector3f_01ccc3b8.y -
            (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location.position.y)) {
      g_INT_01ccc3b0 = 0;
      g_FLOAT_01cd0c28 = 1e+30;
      g_INT_01ccc3c4 = 0;
    }
    this_ptr_04 = core_path_cpp_getPathMap_FUN_005351f0((CLocation *)&g_CVector3f_01ccc3b8);
    iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                      (this_ptr_04,
                       &(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location.position,
                       (CVector3f *)(auStack_c4 + 4),0);
    if (iVar6 == 0) {
      g_INT_01ccc3c4 = 0;
    }
    else {
      fStack_62c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                             (fStack_bc -
                              (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.orient.vec.y);
      fVar2 = fStack_62c * 0.3183099f * (float)4;
      fStack_638 = -fStack_630;
      player_control->turn_speed = fVar2;
      if (fVar2 < fStack_638) {
        player_control->turn_speed = ABS(fStack_62c) * fStack_638 * (float)2;
      }
      if (fStack_630 < player_control->turn_speed) {
        player_control->turn_speed = ABS(fStack_62c) * fStack_630 * (float)2;
      }
      if (ABS(player_control->turn_speed) < (float)0.080000000000000002) {
        player_control->turn_speed = 0.0;
      }
      iVar6 = g_INT_01ccc3d8;
      (player_control->action_state).walk = 1;
      if (iVar6 != 0) {
        (player_control->action_state).run = 1;
      }
    }
    if (((fVar7 < (float)in_stack_fffff9b0 * 0.5f) && (g_INT_01ccc3d8 == 0)) ||
       ((fVar7 < (float)in_stack_fffff9b0 * (float)1.5 && (g_INT_01ccc3d8 == 1)))) {
      (player_control->action_state).walk = 0;
      if ((float)9.9999999999999991e+28 <= g_FLOAT_01cd0c28) {
        g_INT_01ccc3c4 = 0;
      }
      else {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                  ((CDemonActor *)g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4],&g_CVector3f_01ccc3b8,
                   &CStack_270);
        local_30 = CStack_270.x;
        *(uint *)((int)local_2c + (uint)bVar18 * -8) =
             *(uint *)((int)&CStack_270 + (uint)bVar18 * -8 + 4);
        *(uint *)((int)local_2c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 4) =
             *(uint *)((int)&CStack_270 + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8);
        if ((float)in_stack_00000018 < local_30) {
          (player_control->action_state).run = 0;
          player_control->strafe_speed = 0.2;
        }
        if (local_30 < -(float)in_stack_00000018) {
          (player_control->action_state).run = 0;
          player_control->strafe_speed = -0.2;
        }
        if ((float)in_stack_00000018 < local_2c[0].y) {
          (player_control->action_state).run = 0;
          (player_control->action_state).walk = 1;
        }
        if (local_2c[0].y < -(float)in_stack_00000018) {
          (player_control->action_state).run = 0;
          (player_control->action_state).backup = 1;
        }
        pCVar10 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
        afStack_204[0] = g_FLOAT_01cd0c28 - (pCVar10->base).base.location.position.x;
        afStack_204[1] = g_FLOAT_01cd0c2c - (pCVar10->base).base.location.position.y;
        afStack_204[2] = g_FLOAT_01cd0c30 - (pCVar10->base).base.location.position.z;
        CStack_4bc.x = afStack_204[0];
        *(float *)(auStack_4b0 + (uint)bVar18 * -8 + -8) = afStack_204[(uint)bVar18 * -2 + 1];
        *(float *)(auStack_4b0 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + -4) =
             afStack_204[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
                  (&CStack_4bc,(CVector3f *)auStack_3a8);
        afStack_4f8[3] = (float)auStack_3a8._0_4_;
        *(uint *)((int)&CStack_4e8 + (uint)bVar18 * -8) =
             *(uint *)(auStack_3a8 + (uint)bVar18 * -8 + 4);
        *(float *)((int)&CStack_4e8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 4) =
             afStack_39c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + -1];
        fStack_63c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                               (CStack_4e8.x -
                                (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.orient.vec.y
                               );
        fVar7 = fStack_63c * 0.3183099f * (float)4;
        player_control->turn_speed = fVar7;
        if (fVar7 < -fStack_630) {
          player_control->turn_speed = ABS(fStack_63c) * -fStack_630 * (float)2;
        }
        if (fStack_630 < player_control->turn_speed) {
          player_control->turn_speed = ABS(fStack_63c) * fStack_630 * (float)2;
        }
        if (ABS(player_control->turn_speed) < (float)0.080000000000000002) {
          (player_control->action_state).walk = 0;
          player_control->turn_speed = 0.0;
          g_INT_01ccc3c4 = 0;
          g_FLOAT_01cd0c28 = 1e+30;
        }
      }
      if (((g_INT_01ccc3b0 != 0) && ((float)9.9999999999999991e+28 < g_FLOAT_01cd0c28)) &&
         ((g_INT_01ccc3b0 = 0, in_stack_00000030 == 0 && (fStack_634 <= 0.0)))) {
        (player_control->action_state).fire = 1;
      }
    }
    pCVar10 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
    CStack_418.y = g_FLOAT_01ccc3c8 - (pCVar10->base).base.location.position.x;
    CStack_418.z = g_FLOAT_01ccc3cc - (pCVar10->base).base.location.position.y;
    fStack_40c = g_FLOAT_01ccc3d0 - (pCVar10->base).base.location.position.z;
    fStack_360 = CStack_418.y;
    afStack_35c[(uint)bVar18 * -2] = *(float *)((int)&CStack_418 + (uint)bVar18 * -8 + 8);
    afStack_35c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
         afStack_408[(uint)bVar18 * -2 + (uint)bVar18 * -2 + -1];
    player_control =
         (SPlayerInput *)
         SQRT(afStack_35c[1] * afStack_35c[1] +
              fStack_360 * fStack_360 + afStack_35c[0] * afStack_35c[0]);
    if (0.0 < this_ptr->delta_time_float) {
      player_control = (SPlayerInput *)((float)player_control / this_ptr->delta_time_float);
    }
    if (0.4f <= (float)player_control) {
      g_FLOAT_01ccc3d4 = 0.0;
    }
    else {
      g_FLOAT_01ccc3d4 = this_ptr->delta_time_float + g_FLOAT_01ccc3d4;
      if (((0.5f <= g_FLOAT_01ccc3d4) && (g_INT_01ccc3c4 = 0, g_INT_01ccc3b0 != 0)) &&
         (g_INT_01ccc3b0 = 0, in_stack_00000030 == 0)) {
        (player_control->action_state).fire = 1;
      }
    }
  }
  if (g_CDemonActor_PTR_01ccc3dc != (CDemonActor *)0x0) {
    pCVar10 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
    afStack_528[3] =
         (g_CDemonActor_PTR_01ccc3dc->location).position.x -
         (pCVar10->base).base.location.position.x;
    afStack_518[0] =
         (g_CDemonActor_PTR_01ccc3dc->location).position.y -
         (pCVar10->base).base.location.position.y;
    afStack_518[1] =
         (g_CDemonActor_PTR_01ccc3dc->location).position.z -
         (pCVar10->base).base.location.position.z;
    CStack_324.x = afStack_528[3];
    *(float *)((int)&CStack_324 + (uint)bVar18 * -8 + 4) = afStack_518[(uint)bVar18 * -2];
    *(float *)((int)&CStack_324 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
         afStack_518[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_324,&CStack_a8);
    fStack_234 = CStack_a8.x;
    afStack_230[(uint)bVar18 * -2] = *(float *)((int)&CStack_a8 + (uint)bVar18 * -8 + 4);
    afStack_230[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
         *(float *)((int)&CStack_a8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
    fStack_640 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                           (afStack_230[0] -
                            (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.orient.vec.y);
    if ((float)2.8274333881499998 < ABS(fStack_640)) {
      g_FLOAT_01ccc3d4 = -1.0;
      (player_control->action_state).quick_turn = 1;
    }
    fVar7 = fStack_640 * 0.3183099f * (float)4;
    player_control->turn_speed = fVar7;
    if (fVar7 < -fStack_630) {
      player_control->turn_speed = ABS(fStack_640) * -fStack_630 * (float)2;
    }
    if (fStack_630 < player_control->turn_speed) {
      player_control->turn_speed = ABS(fStack_640) * fStack_630 * (float)2;
    }
    if (ABS(player_control->turn_speed) < (float)0.080000000000000002) {
      player_control->turn_speed = 0.0;
    }
    if (g_INT_01ccc3c4 != 0) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4],&g_CVector3f_01ccc3b8,
                 (CVector3f *)auStack_3fc);
      fStack_d8 = (float)auStack_3fc._0_4_;
      (&iStack_d4)[(uint)bVar18 * -2] = *(int *)(auStack_3fc + (uint)bVar18 * -8 + 4);
      (&iStack_d4)[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
           aiStack_3f0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + -1];
      if ((float)in_stack_fffff9b0 < fStack_d8) {
        (player_control->action_state).run = 1;
        player_control->strafe_speed = 1.0;
      }
      if (fStack_d8 < -(float)in_stack_fffff9b0) {
        (player_control->action_state).run = 1;
        player_control->strafe_speed = -1.0;
      }
      if ((float)in_stack_fffff9b0 < fStack_d0) {
        (player_control->action_state).run = 1;
        (player_control->action_state).walk = 1;
      }
      if (fStack_d0 < -(float)in_stack_fffff9b0) {
        (player_control->action_state).run = 1;
        (player_control->action_state).backup = 1;
      }
    }
    EVar11 = (*(((g_CDemonActor_PTR_01ccc3dc->vtable)._uc)->_uc).getDeathState)
                       ((CCharacter *)g_CDemonActor_PTR_01ccc3dc);
    if (EVar11 != DEATH_STATE_ALIVE) {
      g_CDemonActor_PTR_01ccc3dc = (CDemonActor *)0x0;
    }
  }
  g_INT_01ccc3b4 = g_MouseButtonFlags.dword;
  pCVar10 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
  pCVar12 = &(pCVar10->base).base.location;
  if (pCVar12 != (CLocation *)&g_FLOAT_01ccc3c8) {
    g_FLOAT_01ccc3c8 = (pCVar12->position).x;
    g_FLOAT_01ccc3d0 = (pCVar10->base).base.location.position.z;
    g_FLOAT_01ccc3cc = (pCVar10->base).base.location.position.y;
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  return;
}
