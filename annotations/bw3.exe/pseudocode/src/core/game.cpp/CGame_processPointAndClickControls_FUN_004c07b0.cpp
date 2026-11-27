// Name: core_game.cpp_CGame_processPointAndClickControls_FUN_004c07b0
// Address: 004c07b0
// Address Range: [[004c07b0, 004c4867]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processPointAndClickControls_FUN_004c07b0(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processPointAndClickControls_FUN_004c07b0(CGame *this_ptr,SPlayerInput *player_control)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  _BIT_INTEGER32 _Var4;
  uint class_name_hash;
  float fVar5;
  uint uVar6;
  uint uVar7;
  CPrye *this_ptr_00;
  CDemonActor *actor_ptr;
  int iVar8;
  float fVar9;
  CDemonActor *this_ptr_01;
  CDemonActor *pCVar10;
  CPrye *pCVar11;
  CDemonActor *pCVar12;
  CDemonActor *this_ptr_02;
  CHero *pCVar13;
  CPathMap *this_ptr_03;
  EDeathState EVar14;
  CDemonActor *pCVar15;
  CDemonActor *pCVar16;
  CCharacter *pCVar17;
  CLocation *pCVar18;
  CDemonActor *pCVar19;
  CDoor *this_ptr_04;
  int iVar20;
  int *piVar21;
  float unaff_EBX;
  float *pfVar22;
  uint *puVar23;
  uint *puVar24;
  byte bVar25;
  byte bVar26;
  int unaff_retaddr;
  int iStack0000000c;
  float afStackY_16dc [923];
  CVector3i *pCVar27;
  CVector3f *pCVar28;
  CBoundingBox3D *in_stack_fffff7e8;
  CBoundingBox3D *in_stack_fffff7f0;
  CDemonActor *in_stack_fffff7f8;
  float fStack_800;
  float fStack_7fc;
  float fStack_7f8;
  float fStack_7f4;
  float fStack_7f0;
  float fStack_7c4;
  float fStack_7a4;
  float fStack_770;
  float fStack_72c;
  float fStack_728;
  float fStack_724;
  float fStack_720;
  float fStack_71c;
  float fStack_718;
  float fStack_70c;
  float fStack_708;
  float fStack_704;
  float fStack_700;
  float fStack_6fc;
  float fStack_6f8;
  CVector3f CStack_6f4;
  float afStack_6e8 [2];
  byte auStack_6e0 [12];
  float afStack_6d4 [5];
  float fStack_6c0;
  float afStack_6bc [2];
  CVector3f CStack_6b4;
  CVector3f CStack_6a8;
  CVector3i CStack_69c;
  CVector3i CStack_690;
  CVector3f CStack_684;
  CPrye *pCStack_670;
  CPrye *pCStack_66c;
  float fStack_668;
  float afStack_664 [4];
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  float fStack_648;
  float fStack_644;
  float fStack_640;
  CVector3f CStack_638;
  float afStack_62c [4];
  float fStack_61c;
  CVector3i CStack_618;
  float fStack_60c;
  float fStack_608;
  float afStack_604 [4];
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  float fStack_5e8;
  float fStack_5e0;
  float fStack_5dc;
  float fStack_5d8;
  CVector3f CStack_5d4;
  float fStack_5c8;
  CVector3i CStack_5c4;
  CVector3f CStack_5b8;
  float fStack_5a4;
  float afStack_5a0 [7];
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float fStack_578;
  float fStack_574;
  CVector3f CStack_570;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  CVector3f CStack_558;
  float fStack_54c;
  float afStack_548 [4];
  float fStack_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  CVector3i CStack_528;
  float fStack_51c;
  float afStack_518 [4];
  float fStack_508;
  CVector3f CStack_504;
  CVector3i CStack_4f8;
  float fStack_4ec;
  float afStack_4e8 [2];
  CVector3i CStack_4e0;
  CVector3f CStack_4d4;
  CVector3f CStack_4c8;
  float fStack_4b4;
  float afStack_4b0 [5];
  CVector3f CStack_49c;
  float afStack_490 [4];
  CVector3f CStack_480;
  byte auStack_46c [8];
  float afStack_464 [4];
  float fStack_454;
  CVector3f CStack_450;
  float fStack_444;
  float fStack_440;
  float afStack_43c [4];
  float fStack_42c;
  float afStack_428 [2];
  CVector3f CStack_420;
  float fStack_414;
  float afStack_410 [4];
  float fStack_400;
  float fStack_3fc;
  float fStack_3f4;
  float fStack_3f0;
  byte auStack_3ec [24];
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3c4;
  float afStack_3c0 [2];
  byte auStack_3b8 [8];
  float fStack_3b0;
  float fStack_3ac;
  CVector3i CStack_3a8;
  CVector3f CStack_39c;
  CVector3f aCStack_390 [2];
  byte auStack_378 [8];
  float fStack_370;
  uint uStack_36c;
  float fStack_35c;
  float fStack_358;
  CVector3f CStack_354;
  float fStack_348;
  float afStack_344 [7];
  byte auStack_328 [8];
  float afStack_320 [4];
  CVector3f CStack_310;
  float afStack_304 [4];
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  CVector3f CStack_2e8;
  float fStack_2dc;
  float afStack_2d8 [4];
  float fStack_2c8;
  CVector3f CStack_2c4;
  CVector3f CStack_2b8;
  float fStack_2ac;
  float afStack_2a8 [2];
  CVector3i CStack_2a0;
  CVector3f aCStack_294 [2];
  float fStack_27c;
  CVector3f CStack_278;
  float afStack_26c [4];
  float fStack_25c;
  CVector3f CStack_258;
  CVector3f CStack_24c;
  CPrye *pCStack_240;
  float afStack_23c [4];
  float fStack_22c;
  float fStack_21c;
  CVector3f CStack_218;
  float fStack_208;
  float afStack_204 [3];
  CVector3f CStack_1f8;
  float fStack_1ec;
  CVector3i CStack_1e0;
  CVector3f CStack_1d4;
  CVector3i CStack_1c8;
  CVector3i aCStack_1bc [2];
  CVector3f CStack_1a4;
  float fStack_198;
  float afStack_194 [4];
  float fStack_184;
  CVector3i CStack_180;
  CVector3i aCStack_174 [2];
  float fStack_15c;
  float afStack_158 [2];
  CVector3f CStack_150;
  CVector3f CStack_144;
  float fStack_130;
  CVector3i CStack_12c;
  CVector3f CStack_120;
  float fStack_114;
  float afStack_110 [4];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  CVector3i CStack_f0;
  float fStack_e4;
  float afStack_e0 [2];
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [5];
  byte auStack_b4 [8];
  float local_ac [4];
  CVector3i CStack_9c;
  float local_90;
  float afStack_8c [2];
  CVector3f CStack_84;
  float fStack_78;
  float afStack_74 [2];
  int iStack_6c;
  CDemonActor *pCStack_64;
  int iStack_60;
  int iStack_5c;
  float fStack_58;
  CDemonActor *local_54;
  CDemonActor *local_50;
  CPrye *local_4c;
  CDemonActor *pCStack_48;
  CDemonActor *pCStack_44;
  int iStack_40;
  CDemonActor *pCStack_3c;
  int iStack_38;
  CDemonActor *pCStack_34;
  float fStack_30;
  CDemonActor *pCStack_2c;
  CDemonActor *pCStack_24;
  float fStack_20;
  CDemonActor *pCStack_1c;
  float fStack_18;
  SPlayerInput *pSVar29;
  
  bVar25 = 0;
  if ((g_BYTE_01d1e35c & 1) == 0) {
    g_BYTE_01d1e35c = g_BYTE_01d1e35c | 1;
  }
  if ((g_BYTE_01d1e35c & 2) == 0) {
    g_BYTE_01d1e35c = g_BYTE_01d1e35c | 2;
  }
  local_54 = (CDemonActor *)0x41000000;
  local_50 = core_actor_cpp_castToClassHash_FUN_0040c840
                       ((CDemonActor *)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14],
                        g_CPryeClassInfo.name_hash);
  pCVar13 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
  if (((pCVar13 != (CHero *)0x0) &&
      (EVar14 = (*(((pCVar13->base).base.vtable._uc)->_uc).getDeathState)(&pCVar13->base),
      0 < (int)EVar14)) ||
     ((local_4c != (CPrye *)0x0 &&
      (iVar8 = core_prye_cpp_CPrye_isPerformingAction_FUN_00527110(local_4c), iVar8 != 0)))) {
    return;
  }
  CStack_84.x = (float)g_MouseX;
  pCStack_48 = (CDemonActor *)g_MouseY;
  afStack_8c[0] = (float)g_INT_005fba18;
  local_ac[1] = (float)g_INT_005fba1c;
  if (0x1e0 < g_INT_005fba1c) {
    CStack_84.x = (float)((g_MouseX * 0x1e0) / g_INT_005fba1c);
    pCStack_48 = (CDemonActor *)((g_MouseY * 0x1e0) / g_INT_005fba1c);
    afStack_8c[0] = 8.96831e-43;
    local_ac[1] = 6.72623e-43;
  }
  if (this_ptr->screen_clear_enabled != 0) {
    local_ac[1] = 3.36312e-43;
    afStack_8c[0] = 4.48416e-43;
  }
  if ((int)CStack_84.x < 2) {
    CStack_84.x = 2.8026e-45;
  }
  if ((int)afStack_8c[0] + -2 < (int)CStack_84.x) {
    CStack_84.x = (float)((int)afStack_8c[0] + -2);
  }
  if ((int)pCStack_48 < 2) {
    pCStack_48 = (CDemonActor *)0x2;
  }
  if ((int)local_ac[1] + -2 < (int)pCStack_48) {
    pCStack_48 = (CDemonActor *)((int)local_ac[1] + -2);
  }
  CStack_84.z = 0.2;
  memset(player_control,0,0x34);
  piVar21 = &(player_control->action_state).use_item;
  if (g_PrevKeyboardState[this_ptr->key_use_item] == g_KeyboardState[this_ptr->key_use_item]) {
    *piVar21 = 0;
  }
  else {
    *piVar21 = (uint)(byte)g_KeyboardState[this_ptr->key_use_item];
  }
  piVar21 = &(player_control->action_state).light;
  if (g_PrevKeyboardState[this_ptr->key_light] == g_KeyboardState[this_ptr->key_light]) {
    *piVar21 = 0;
  }
  else {
    *piVar21 = (uint)(byte)g_KeyboardState[this_ptr->key_light];
  }
  piVar21 = &(player_control->action_state).draw;
  if (g_PrevKeyboardState[this_ptr->key_draw] == g_KeyboardState[this_ptr->key_draw]) {
    *piVar21 = 0;
  }
  else {
    *piVar21 = (uint)(byte)g_KeyboardState[this_ptr->key_draw];
  }
  iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_next_weapon);
  if (iVar8 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
              (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,(CDemonActor *)0x0,5,1);
  }
  iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_prev_weapon);
  if (iVar8 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
              (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,(CDemonActor *)0x0,5,-1);
  }
  iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_next_item);
  if (iVar8 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbc40
              (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,1);
  }
  iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_prev_item);
  if (iVar8 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbc40
              (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,-1);
  }
  fVar9 = (float)(*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._ue)->_ue).
                   randomize)((CEnemy *)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]);
  afStack_8c[0] = fVar9;
  iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_1);
  if ((iVar8 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,(CDemonActor *)0x0,0,1),
     fVar9 == 0.0)) {
    (player_control->action_state).draw = 1;
  }
  iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_2);
  if ((iVar8 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,(CDemonActor *)0x0,1,1),
     CStack_84.z == 0.0)) {
    (player_control->action_state).draw = 1;
  }
  iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_3);
  if ((iVar8 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,(CDemonActor *)0x0,2,1),
     afStack_74[0] == 0.0)) {
    (player_control->action_state).draw = 1;
  }
  iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_4);
  if ((iVar8 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,(CDemonActor *)0x0,3,1),
     iStack_6c == 0)) {
    (player_control->action_state).draw = 1;
  }
  iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_5);
  if ((iVar8 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,(CDemonActor *)0x0,4,1),
     pCStack_64 == (CDemonActor *)0x0)) {
    (player_control->action_state).draw = 1;
  }
  if ((g_INT_01d22c9c != 0) ||
     (iVar8 = core_script_cpp_CScript_getLetterboxHeight_FUN_00528f60(g_CScriptPtr), 2 < iVar8)) {
    g_INT_01d22c9c = 0;
    g_INT_01d1e334 = 0;
    g_INT_01d1e324 = 0;
    g_MouseButtonFlags.dword = 0;
    g_CDemonActor_PTR_01d1e34c = (CDemonActor *)0x0;
    sound_sndmain_cpp_killAllSfx_FUN_00556c60();
    g_FLOAT_01d22c30 = 1e+30;
    g_INT_01d1e358 = g_CDemonSetPtr->selected_camera_index;
  }
  if (g_INT_01d22b48 < 0) {
    g_MouseButtonFlags.dword = 0;
    g_INT_01d1e334 = 0;
    g_CDemonActor_PTR_01d1e34c = (CDemonActor *)0x0;
    g_FLOAT_01d22c30 = 1e+30;
    g_INT_01d1e324 = 0;
  }
  if (this_ptr->goggles_active != 0) {
    if ((g_MouseButtonFlags.dword & 1) != 0) {
      if ((float10)0 < (float10)((int)this_ptr - iStack_40 / 2) / (float10)(iStack_5c / 2)) {
        (player_control->action_state).backup = 1;
      }
      else {
        (player_control->action_state).walk = 1;
      }
      if (this_ptr->always_run == 0) {
        bVar25 = g_KeyboardState[this_ptr->key_run];
      }
      else {
        bVar25 = g_KeyboardState[this_ptr->key_run] == '\0';
      }
      (player_control->action_state).run = (uint)bVar25;
    }
    fVar9 = (float)(iStack_38 - iStack_40 / 2) / (float)(iStack_40 / 2);
    player_control->turn_speed = fVar9;
    _Var4 = g_MouseButtonFlags;
    player_control->turn_speed =
         fVar9 * player_control->turn_speed * player_control->turn_speed * 0.25f;
    if ((_Var4.dword & 2) == 0) {
      return;
    }
    (player_control->action_state).fire = 1;
    return;
  }
  if (g_FLOAT_005fe9d4 < 0.0) {
    g_FLOAT_005fe9d4 = 0.25;
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
              (&g_CDemonCameraInstance,iStack_38,(int)this_ptr,&CStack_1c8);
    pCVar27 = &CStack_2a0;
    CStack_2a0.x = CStack_1c8.x;
    *(uint *)((int)aCStack_294 + (uint)bVar25 * -8 + -8) =
         *(uint *)((int)aCStack_1bc + (uint)bVar25 * -8 + -8);
    *(uint *)((int)aCStack_294 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + -4) =
         *(uint *)((int)aCStack_1bc + (uint)bVar25 * -8 + (uint)bVar25 * -8 + -4);
    core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
              (&g_CDemonCameraInstance,pCVar27,&CStack_618);
    CStack_2a0.x = CStack_618.x;
    *(uint *)((int)aCStack_294 + (uint)bVar25 * -8 + -8) =
         *(uint *)((int)&CStack_618 + (uint)bVar25 * -8 + 4);
    *(uint *)((int)aCStack_294 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + -4) =
         *(uint *)((int)&CStack_618 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
    CStack_39c.x = (float)CStack_2a0.x * 0.00390625f;
    CStack_39c.y = (float)CStack_2a0.y * 0.00390625f;
    CStack_39c.z = (float)CStack_2a0.z * 0.00390625f;
    CStack_6f4.y = g_CDemonCameraInstance.base.position.f.x;
    afStack_6e8[(uint)bVar25 * -2 + -1] =
         *(float *)((int)&g_CDemonCameraInstance + (uint)bVar25 * -8 + 8);
    fVar3 = CStack_39c.y;
    fVar9 = CStack_39c.x;
    afStack_6e8[(uint)bVar25 * -2 + (uint)bVar25 * -2] =
         *(float *)((uint)bVar25 * -8 + 0x2038f58 + (uint)bVar25 * -8);
    CStack_570.x = CStack_6f4.y;
    *(float *)((int)&CStack_570 + (uint)bVar25 * -8 + 4) = afStack_6e8[(uint)bVar25 * -2 + -1];
    *(float *)((int)&CStack_570 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8) =
         afStack_6e8[(uint)bVar25 * -2 + (uint)bVar25 * -2];
    afStack_194[2] = fVar9 - CStack_570.x;
    afStack_194[3] = fVar3 - CStack_570.y;
    fStack_184 = CStack_39c.z - CStack_570.z;
    fStack_444 = fVar9 - CStack_570.x;
    afStack_43c[(uint)bVar25 * -2 + -1] = afStack_194[(uint)bVar25 * -2 + 3];
    afStack_43c[(uint)bVar25 * -2 + (uint)bVar25 * -2] =
         afStack_194[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 4];
    fVar9 = SQRT(afStack_43c[0] * afStack_43c[0] + fStack_444 * fStack_444 + fStack_440 * fStack_440
                );
    if (fVar9 <= 0.0) {
      fStack_440 = 0.0;
      fStack_444 = 0.0;
      afStack_43c[0] = 0.0;
    }
    else {
      fVar9 = 1.0 / fVar9;
      fStack_444 = fStack_444 * fVar9;
      fStack_440 = fStack_440 * fVar9;
      afStack_43c[0] = afStack_43c[0] * fVar9;
    }
    fStack_444 = fStack_444 * 1000.0f;
    fStack_440 = fStack_440 * 1000.0f;
    afStack_43c[0] = afStack_43c[0] * 1000.0f;
    fStack_114 = CStack_570.x + fStack_444;
    afStack_110[0] = CStack_570.y + fStack_440;
    afStack_110[1] = CStack_570.z + afStack_43c[0];
    CStack_1f8.x = fStack_114;
    afStack_204[(uint)bVar25 * -2 + 4] = afStack_110[(uint)bVar25 * -2];
    afStack_204[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 5] =
         afStack_110[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1];
    if (&CStack_39c != (CVector3f *)(afStack_204 + 3)) {
      CStack_39c.x = CStack_1f8.x;
      CStack_39c.y = CStack_1f8.y;
      CStack_39c.z = CStack_1f8.z;
    }
    core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,4);
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
              (g_CDemonSetPtr,(CDemonActor *)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]);
    g_INT_01d22c2c = 0;
    iStack_60 = 0;
    while( true ) {
      iVar8 = iStack_60 + 1;
      bVar1 = 3 < iStack_60;
      pCVar19 = (CDemonActor *)g_INT_01d22c2c;
      iStack_60 = iVar8;
      if (((bVar1) ||
          (fVar9 = core_setcolid_cpp_CDemonSet_raycast_FUN_0053ccc0
                             (g_CDemonSetPtr,&CStack_570,&CStack_39c),
          pCVar19 = (CDemonActor *)g_INT_01d22c2c, fVar9 < 0.0)) || (0x3f800000 < (int)fVar9))
      goto LAB_004c23a6;
      pCVar16 = g_CDemonSetPtr->collision_actor;
      pCVar19 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar16,g_CDoorClassInfo.name_hash);
      if (((pCVar19 != (CDemonActor *)0x0) &&
          (pCVar19 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar16,g_CDoorClassInfo.name_hash)
          , pCVar19[2].orient.vec.x == 0.0)) &&
         (iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                            (g_CEventListPtr,(char *)((int)&pCVar19[2].orient + 8)), iVar8 == 0))
      break;
      pCVar19 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar16,g_CBoxActorClassInfo.name_hash);
      if (pCVar19 != (CDemonActor *)0x0) {
        pCVar15 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (pCVar16,g_CBoxActorClassInfo.name_hash);
        pCVar19 = (CDemonActor *)g_INT_01d22c2c;
        if (pCVar15[2].process_order != 0) {
          g_INT_01d22c2c = (int)pCVar16;
          g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->hero_action = 4;
          pCVar19 = (CDemonActor *)g_INT_01d22c2c;
        }
        goto LAB_004c23a6;
      }
      pCVar15 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar16,g_CWeaponClassInfo.name_hash);
      pCVar19 = pCVar16;
      if (pCVar15 != (CDemonActor *)0x0) goto LAB_004c23a6;
      pCVar15 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar16,g_CAmmoClassInfo.name_hash);
      if (pCVar15 != (CDemonActor *)0x0) {
        pCVar19 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar16,g_CAmmoClassInfo.name_hash);
        iVar8 = (*((pCVar19->vtable)._ub)->canPickup)
                          (pCVar19,(CDemonActor *)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]);
        pCVar19 = (CDemonActor *)g_INT_01d22c2c;
        if (iVar8 != 5) {
          pCVar19 = pCVar16;
        }
        goto LAB_004c23a6;
      }
      pCVar15 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (pCVar16,g_CHealthItemClassInfo.name_hash);
      if (pCVar15 != (CDemonActor *)0x0) {
        pCVar19 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (pCVar16,g_CHealthItemClassInfo.name_hash);
        iVar8 = (*((pCVar19->vtable)._ub)->canPickup)
                          (pCVar19,(CDemonActor *)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]);
        pCVar19 = (CDemonActor *)g_INT_01d22c2c;
        if (iVar8 != 5) {
          pCVar19 = pCVar16;
        }
        goto LAB_004c23a6;
      }
      pCVar15 = (CLever *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar16,g_CLeverClassInfo.name_hash);
      if (pCVar15 != (CDemonActor *)0x0) {
        g_INT_01d22c2c = (int)pCVar16;
        g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->hero_action = 8;
        pCVar19 = (CDemonActor *)g_INT_01d22c2c;
        goto LAB_004c23a6;
      }
      pCVar15 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar16,g_CEnemyClassInfo.name_hash);
      if (pCVar15 != (CDemonActor *)0x0) {
        pCVar17 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c840(pCVar16,g_CEnemyClassInfo.name_hash);
        EVar14 = (*(((pCVar17->base).vtable._uc)->_uc).getDeathState)(pCVar17);
        if (EVar14 == DEATH_STATE_ALIVE) goto LAB_004c23a6;
      }
      pCVar15 = (CNPC *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar16,g_CNPCClassInfo.name_hash);
      if (pCVar15 != (CDemonActor *)0x0) goto LAB_004c23a6;
      pCVar15 = (CConstruct *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar16,g_CConstructClassInfo.name_hash)
      ;
      if (((pCVar15 != (CDemonActor *)0x0) &&
          (pCVar15 = core_actor_cpp_castToClassHash_FUN_0040c840
                               (pCVar16,g_CConstructClassInfo.name_hash),
          pCVar15[0xa0].previous_transform_state.dirty_flags == 1)) &&
         (-1 < pCVar15[0xa0].render_needs_update)) {
        g_INT_01d22c2c =
             (int)(&pCVar15[0x9c].orient_matrix)[pCVar15[0xa0].render_needs_update * 2 + -1].m[1].y;
        g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->hero_action = 4;
        pCVar19 = (CDemonActor *)g_INT_01d22c2c;
        goto LAB_004c23a6;
      }
      pCVar15 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar16,g_CHeroClassInfo.name_hash);
      iVar8 = g_INT_01d5ba14;
      if ((pCVar15 != (CDemonActor *)0x0) &&
         (pCVar13 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c840
                                       (pCVar16,g_CHeroClassInfo.name_hash),
         pCVar13 != g_CHero_PTR_ARRAY_01d5ba04[iVar8])) goto LAB_004c23a6;
      pCVar19 = (CDemonActor *)g_INT_01d22c2c;
      if (pCVar16 != (CDemonActor *)g_INT_01d22c2c) {
        iVar20 = 0;
        iVar8 = 0;
        while ((pCVar19 = (CDemonActor *)g_INT_01d22c2c, iVar8 < g_CDemonSetPtr->actor_count &&
               ((pCVar19 = core_actor_cpp_castToClassHash_FUN_0040c840
                                     (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar20),
                                      g_CTriggerClassInfo.name_hash), pCVar19 == (CDemonActor *)0x0
                || (pCVar16 != (CDemonActor *)pCVar19[2].orient_matrix.m[1].y))))) {
          iVar8 = iVar8 + 1;
          iVar20 = iVar20 + 4;
        }
      }
      g_INT_01d22c2c = (int)pCVar19;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCVar16);
      pCVar19 = (CDemonActor *)g_INT_01d22c2c;
      if ((fVar9 < 0.0) || (0x3f800000 < (int)fVar9)) goto LAB_004c23a6;
    }
    g_INT_01d22c2c = (int)pCVar16;
    g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->hero_action = 3;
    pCVar19 = (CDemonActor *)g_INT_01d22c2c;
LAB_004c23a6:
    g_INT_01d22c2c = (int)pCVar19;
    if (g_INT_01d22c2c == 0) {
      core_hero_cpp_CHero_clearHeroAction_FUN_004d3210(g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]);
    }
    else {
      pCVar19 = core_actor_cpp_castToClassHash_FUN_0040c840
                          ((CDemonActor *)g_INT_01d22c2c,g_CTriggerClassInfo.name_hash);
      class_name_hash = g_CTriggerClassInfo.name_hash;
      iVar20 = g_INT_01d5ba14;
      iVar8 = g_INT_01d22c2c;
      if (pCVar19 == (CDemonActor *)0x0) {
        g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->hero_action_actor =
             (CDemonActor *)g_INT_01d22c2c;
        g_CHero_PTR_ARRAY_01d5ba04[iVar20]->hero_action_target = (CDemonActor *)iVar8;
        g_CHero_PTR_ARRAY_01d5ba04[iVar20]->hero_action_range = 0.0;
        g_CHero_PTR_ARRAY_01d5ba04[iVar20]->hero_action_started = 1;
      }
      else {
        g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->hero_action = 1;
        iVar8 = g_INT_01d22c2c;
        g_CHero_PTR_ARRAY_01d5ba04[iVar20]->hero_action_actor = (CDemonActor *)g_INT_01d22c2c;
        pCVar19 = core_actor_cpp_castToClassHash_FUN_0040c840((CDemonActor *)iVar8,class_name_hash);
        iVar8 = g_INT_01d5ba14;
        g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->hero_action_target =
             (CDemonActor *)pCVar19[2].orient_matrix.m[1].y;
        g_CHero_PTR_ARRAY_01d5ba04[iVar8]->hero_action_range = 0.0;
        g_CHero_PTR_ARRAY_01d5ba04[iVar8]->hero_action_started = 1;
      }
    }
  }
  else {
    g_FLOAT_005fe9d4 = g_FLOAT_005fe9d4 - g_CGamePtr->delta_time_float;
  }
  if (iStack_38 < 0x20) {
    g_INT_01d22b48 = 3;
  }
  else if (iStack_40 + -0x20 < iStack_38) {
    g_INT_01d22b48 = 4;
  }
  else if ((int)this_ptr < 0x20) {
    g_INT_01d22b48 = 1;
  }
  else if (iStack_5c + -0x20 < (int)this_ptr) {
    g_INT_01d22b48 = 2;
  }
  else if (g_INT_01d22c2c == 0) {
    g_INT_01d22b48 = g_INT_01d22c2c;
    if (g_CDemonActor_PTR_01d1e34c != (CDemonActor *)0x0) {
      g_INT_01d22b48 = 7;
    }
  }
  else {
    iVar8 = core_actor_cpp_isOfClass_FUN_0040c790((CDemonActor *)g_INT_01d22c2c,"CEnemy");
    if (iVar8 == 0) {
      g_INT_01d22b48 = 5;
    }
    else {
      g_INT_01d22b48 = 6;
    }
  }
  pCStack_24 = (CDemonActor *)0x0;
  if ((g_INT_01d1e324 == 0) &&
     ((g_MouseButtonFlags.dword == 1 || ((g_MouseButtonFlags.dword & 2) != 0)))) {
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
              (&g_CDemonCameraInstance,iStack_38,(int)this_ptr,&CStack_4e0);
    pCVar27 = aCStack_174;
    aCStack_174[0].x = CStack_4e0.x;
    *(uint *)((int)aCStack_174 + ((uint)bVar25 * -2 + -1) * 4 + 8) =
         *(uint *)((int)&CStack_4e0 + (uint)bVar25 * -8 + 4);
    *(uint *)((int)aCStack_174 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8) =
         *(uint *)((int)&CStack_4e0 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
    core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
              (&g_CDemonCameraInstance,pCVar27,(CVector3i *)(auStack_3ec + 8));
    aCStack_174[0].x = auStack_3ec._8_4_;
    *(uint *)((int)aCStack_174 + ((uint)bVar25 * -2 + -1) * 4 + 8) =
         *(uint *)(auStack_3ec + (uint)bVar25 * -8 + 0xc);
    *(uint *)((int)aCStack_174 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8) =
         *(uint *)(auStack_3ec + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 0x10);
    CStack_258.x = (float)aCStack_174[0].x * 0.00390625f;
    CStack_258.y = (float)aCStack_174[0].y * 0.00390625f;
    CStack_258.z = (float)aCStack_174[0].z * 0.00390625f;
    local_90 = g_CDemonCameraInstance.base.position.f.x;
    afStack_8c[(uint)bVar25 * -2] = *(float *)((int)&g_CDemonCameraInstance + (uint)bVar25 * -8 + 8)
    ;
    afStack_8c[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1] =
         *(float *)((uint)bVar25 * -8 + 0x2038f58 + (uint)bVar25 * -8);
    fVar3 = CStack_258.y;
    fVar9 = CStack_258.x;
    CStack_684.x = local_90;
    *(float *)((int)&CStack_684 + ((uint)bVar25 * -2 + -1) * 4 + 8) = afStack_8c[(uint)bVar25 * -2];
    *(float *)((int)&CStack_684 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8) =
         afStack_8c[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1];
    CStack_5d4.y = fVar9 - CStack_684.x;
    CStack_5d4.z = fVar3 - CStack_684.y;
    fStack_5c8 = CStack_258.z - CStack_684.z;
    fStack_27c = fVar9 - CStack_684.x;
    *(uint *)((int)&CStack_278 + (uint)bVar25 * -8) =
         *(uint *)((int)&CStack_5d4 + (uint)bVar25 * -8 + 8);
    afStack_26c[(uint)bVar25 * -2 + (uint)bVar25 * -2 + -2] =
         (&fStack_5c8)[(uint)bVar25 * -2 + (uint)bVar25 * -2];
    fStack_58 = SQRT(CStack_278.y * CStack_278.y +
                     fStack_27c * fStack_27c + CStack_278.x * CStack_278.x);
    if (fStack_58 <= 0.0) {
      CStack_278.x = 0.0;
      fStack_27c = 0.0;
      CStack_278.y = 0.0;
    }
    else {
      fVar9 = 1.0 / fStack_58;
      fStack_27c = fStack_27c * fVar9;
      CStack_278.x = CStack_278.x * fVar9;
      CStack_278.y = CStack_278.y * fVar9;
    }
    fStack_27c = fStack_27c * 1000.0f;
    CStack_278.x = CStack_278.x * 1000.0f;
    CStack_278.y = CStack_278.y * 1000.0f;
    afStack_548[2] = CStack_684.x + fStack_27c;
    afStack_548[3] = CStack_684.y + CStack_278.x;
    fStack_538 = CStack_684.z + CStack_278.y;
    CStack_638.z = afStack_548[2];
    afStack_62c[(uint)bVar25 * -2] = afStack_548[(uint)bVar25 * -2 + 3];
    afStack_62c[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1] =
         afStack_548[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 4];
    if (&CStack_258 != (CVector3f *)&CStack_638.z) {
      CStack_258.x = CStack_638.z;
      CStack_258.y = afStack_62c[0];
      CStack_258.z = afStack_62c[1];
    }
    g_INT_01d1e354 = 0;
    core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,4);
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
              (g_CDemonSetPtr,(CDemonActor *)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]);
    iStack0000000c = 0;
    while( true ) {
      if (((3 < iStack0000000c) ||
          (fVar9 = core_setcolid_cpp_CDemonSet_raycast_FUN_0053ccc0
                             (g_CDemonSetPtr,&CStack_684,&CStack_258), fVar9 < 0.0)) ||
         (0x3f800000 < (int)fVar9)) goto LAB_004c122b;
      pCVar19 = g_CDemonSetPtr->collision_actor;
      pCVar16 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar19,g_CDoorClassInfo.name_hash);
      if (((pCVar16 != (CDemonActor *)0x0) &&
          (pCVar16 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar19,g_CDoorClassInfo.name_hash)
          , pCVar16[2].orient.vec.x == 0.0)) &&
         (iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                            (g_CEventListPtr,(char *)((int)&pCVar16[2].orient + 8)), iVar8 == 0))
      break;
      pCVar16 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar19,g_CBoxActorClassInfo.name_hash);
      if (pCVar16 != (CDemonActor *)0x0) {
        pCVar16 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (pCVar19,g_CBoxActorClassInfo.name_hash);
        if (pCVar16[2].process_order != 0) {
          pCStack_24 = pCVar19;
          g_INT_01d1e354 = 4;
        }
        goto LAB_004c122b;
      }
      pCVar16 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar19,g_CWeaponClassInfo.name_hash);
      if (pCVar16 != (CDemonActor *)0x0) {
        pCStack_24 = pCVar19;
        goto LAB_004c122b;
      }
      pCVar16 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar19,g_CAmmoClassInfo.name_hash);
      if (pCVar16 != (CDemonActor *)0x0) {
        pCVar16 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar19,g_CAmmoClassInfo.name_hash);
        iVar8 = (*((pCVar16->vtable)._ub)->canPickup)
                          (pCVar16,(CDemonActor *)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]);
        if (iVar8 != 5) {
          pCStack_1c = pCVar19;
        }
        goto LAB_004c122b;
      }
      pCVar16 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (pCVar19,g_CHealthItemClassInfo.name_hash);
      if (pCVar16 != (CDemonActor *)0x0) {
        pCVar16 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (pCVar19,g_CHealthItemClassInfo.name_hash);
        iVar8 = (*((pCVar16->vtable)._ub)->canPickup)
                          (pCVar16,(CDemonActor *)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]);
        if (iVar8 != 5) {
          pCStack_1c = pCVar19;
        }
        goto LAB_004c122b;
      }
      pCVar16 = (CLever *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar19,g_CLeverClassInfo.name_hash);
      if (pCVar16 != (CDemonActor *)0x0) {
        pCStack_24 = pCVar19;
        g_INT_01d1e354 = 8;
        goto LAB_004c122b;
      }
      pCVar16 = (CNPC *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar19,g_CNPCClassInfo.name_hash);
      if (pCVar16 != (CDemonActor *)0x0) {
        pCStack_24 = pCVar19;
        goto LAB_004c122b;
      }
      pCVar16 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar19,g_CHeroClassInfo.name_hash);
      if (pCVar16 != (CDemonActor *)0x0) {
        pCStack_24 = pCVar19;
        goto LAB_004c122b;
      }
      pCVar16 = (CConstruct *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar19,g_CConstructClassInfo.name_hash)
      ;
      if (((pCVar16 != (CDemonActor *)0x0) &&
          (pCVar16 = core_actor_cpp_castToClassHash_FUN_0040c840
                               (pCVar19,g_CConstructClassInfo.name_hash),
          pCVar16[0xa0].previous_transform_state.dirty_flags == 1)) &&
         (-1 < pCVar16[0xa0].render_needs_update)) {
        pCStack_24 = (CDemonActor *)
                     (&pCVar16[0x9c].orient_matrix)[pCVar16[0xa0].render_needs_update * 2 + -1].m[1]
                     .y;
        g_INT_01d1e354 = 4;
        goto LAB_004c122b;
      }
      pCVar16 = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar19,g_CTriggerClassInfo.name_hash);
      if (pCVar16 != (CDemonActor *)0x0) {
        pCStack_24 = pCVar19;
        goto LAB_004c122b;
      }
      if (pCVar19 != pCStack_24) {
        iVar8 = 0;
        for (iVar20 = 0; iVar20 < g_CDemonSetPtr->actor_count; iVar20 = iVar20 + 1) {
          pCVar16 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar8),
                               g_CTriggerClassInfo.name_hash);
          if ((pCVar16 != (CDemonActor *)0x0) &&
             (pCVar19 == (CDemonActor *)pCVar16[2].orient_matrix.m[1].y)) {
            g_INT_01d1e354 = 1;
            pCStack_24 = pCVar16;
            break;
          }
          iVar8 = iVar8 + 4;
        }
      }
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCVar19);
      if ((fVar9 < 0.0) || (iStack0000000c = iStack0000000c + 1, 0x3f800000 < (int)fVar9))
      goto LAB_004c122b;
    }
    pCStack_24 = pCVar19;
    g_INT_01d1e354 = 3;
LAB_004c122b:
    g_CDemonActor_PTR_01d1e350 = pCStack_24;
  }
  if ((pCStack_64 == (CDemonActor *)0x0) && ((g_MouseButtonFlags.dword & 2) != 0)) {
    (player_control->action_state).fire = 1;
  }
  if ((((unaff_retaddr != 0) &&
       (pCVar19 = *(CDemonActor **)(unaff_retaddr + 0x20c24), pCVar19 != (CDemonActor *)0x0)) &&
      ((pCVar19[2].orient.vec.x == 4.2039e-45 ||
       (((iVar8 = core_actor_cpp_isOfClass_FUN_0040c790(pCVar19,"CStorm"), iVar8 != 0 ||
         (iVar8 = core_actor_cpp_isOfClass_FUN_0040c790(pCVar19,"CHeal"), iVar8 != 0)) ||
        (iVar8 = core_actor_cpp_isOfClass_FUN_0040c790(pCVar19,"CFireStaff"), iVar8 != 0)))
       ))) && (g_CDemonActor_PTR_01d1e34c = (CDemonActor *)0x0, g_INT_01d22b48 == 5)) {
    g_INT_01d22b48 = 0;
  }
  if ((pCStack_64 == (CDemonActor *)0x0) || ((g_MouseButtonFlags.dword & 2) == 0)) {
    if (pCStack_64 == (CDemonActor *)0x0) {
      g_CDemonActor_PTR_01d1e34c = pCStack_64;
    }
  }
  else {
    if (((unaff_retaddr == 0) || (*(int *)(unaff_retaddr + 0x20c24) == 0)) ||
       (*(int *)(*(int *)(unaff_retaddr + 0x20c24) + 0x2e0) != 3)) {
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
                (&g_CDemonCameraInstance,iStack_38,(int)this_ptr,(CVector3i *)(auStack_328 + 4));
      pCVar27 = aCStack_1bc;
      aCStack_1bc[0].x = auStack_328._4_4_;
      *(float *)((int)aCStack_1bc + ((uint)bVar25 * -2 + -1) * 4 + 8) =
           afStack_320[(uint)bVar25 * -2];
      *(float *)((int)aCStack_1bc + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8) =
           afStack_320[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1];
      core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
                (&g_CDemonCameraInstance,pCVar27,&CStack_180);
      aCStack_1bc[0].x = CStack_180.x;
      *(uint *)((int)aCStack_1bc + ((uint)bVar25 * -2 + -1) * 4 + 8) =
           *(uint *)((int)aCStack_174 + (uint)bVar25 * -8 + -8);
      *(uint *)((int)aCStack_1bc + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8) =
           *(uint *)((int)aCStack_174 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + -4);
      auStack_3ec._20_4_ = (float)aCStack_1bc[0].x * 0.00390625f;
      fStack_3d4 = (float)aCStack_1bc[0].y * 0.00390625f;
      fStack_3d0 = (float)aCStack_1bc[0].z * 0.00390625f;
      fStack_1ec = g_CDemonCameraInstance.base.position.f.x;
      afStack_204[(uint)bVar25 * -2 + 7] =
           *(float *)((int)&g_CDemonCameraInstance + (uint)bVar25 * -8 + 8);
      afStack_204[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 8] =
           *(float *)((uint)bVar25 * -8 + 0x2038f58 + (uint)bVar25 * -8);
      fVar9 = fStack_3d4;
      uVar6 = auStack_3ec._20_4_;
      aCStack_294[0].x = fStack_1ec;
      *(float *)((int)aCStack_294 + ((uint)bVar25 * -2 + -1) * 4 + 8) =
           afStack_204[(uint)bVar25 * -2 + 7];
      *(float *)((int)aCStack_294 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8) =
           afStack_204[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 8];
      fStack_e4 = (float)uVar6 - aCStack_294[0].x;
      afStack_e0[0] = fVar9 - aCStack_294[0].y;
      afStack_e0[1] = fStack_3d0 - aCStack_294[0].z;
      afStack_5a0[3] = (float)uVar6 - aCStack_294[0].x;
      afStack_5a0[(uint)bVar25 * -2 + 4] = afStack_e0[(uint)bVar25 * -2];
      afStack_5a0[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 5] =
           afStack_e0[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1];
      fVar9 = SQRT(afStack_5a0[5] * afStack_5a0[5] +
                   afStack_5a0[3] * afStack_5a0[3] + afStack_5a0[4] * afStack_5a0[4]);
      if (fVar9 <= 0.0) {
        afStack_5a0[4] = 0.0;
        afStack_5a0[3] = 0.0;
        afStack_5a0[5] = 0.0;
      }
      else {
        fVar9 = 1.0 / fVar9;
        afStack_5a0[3] = afStack_5a0[3] * fVar9;
        afStack_5a0[4] = afStack_5a0[4] * fVar9;
        afStack_5a0[5] = afStack_5a0[5] * fVar9;
      }
      afStack_5a0[3] = afStack_5a0[3] * 1000.0f;
      afStack_5a0[4] = afStack_5a0[4] * 1000.0f;
      afStack_5a0[5] = afStack_5a0[5] * 1000.0f;
      afStack_26c[2] = aCStack_294[0].x + afStack_5a0[3];
      afStack_26c[3] = aCStack_294[0].y + afStack_5a0[4];
      fStack_25c = aCStack_294[0].z + afStack_5a0[5];
      afStack_110[2] = afStack_26c[2];
      afStack_110[(uint)bVar25 * -2 + 3] = afStack_26c[(uint)bVar25 * -2 + 3];
      afStack_110[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 4] =
           afStack_26c[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 4];
      if ((float *)(auStack_3ec + 0x14) != afStack_110 + 2) {
        auStack_3ec._20_4_ = afStack_110[2];
        fStack_3d4 = afStack_110[3];
        fStack_3d0 = fStack_100;
      }
      core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,4);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,(CDemonActor *)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]);
      iVar8 = 0;
      while( true ) {
        if (((3 < iVar8) ||
            (fVar9 = core_setcolid_cpp_CDemonSet_raycast_FUN_0053ccc0
                               (g_CDemonSetPtr,aCStack_294,(CVector3f *)(auStack_3ec + 0x14)),
            fVar9 < 0.0)) || (0x3f800000 < (int)fVar9)) goto joined_r0x004c309a;
        pCVar17 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CEnemyClassInfo.name_hash);
        if ((pCVar17 != (CCharacter *)0x0) &&
           (EVar14 = (*(((pCVar17->base).vtable._uc)->_uc).getDeathState)(pCVar17),
           EVar14 == DEATH_STATE_ALIVE)) break;
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                  (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        if ((fVar9 < 0.0) || (iVar8 = iVar8 + 1, 0x3f800000 < (int)fVar9)) goto joined_r0x004c309a;
      }
      g_INT_01d22b48 = 5;
      g_CDemonActor_PTR_01d1e34c = (CDemonActor *)pCVar17;
joined_r0x004c309a:
      if ((CCharacter *)g_CDemonActor_PTR_01d1e34c != (CCharacter *)0x0) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                  ((CDemonActor *)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14],
                   &(((CCharacter *)g_CDemonActor_PTR_01d1e34c)->base).location.position,
                   (CVector3f *)auStack_6e0);
        in_stack_fffff7e8 = (CBoundingBox3D *)auStack_3ec;
        auStack_3ec._0_4_ = auStack_6e0._0_4_;
        *(uint *)(auStack_3ec + (uint)bVar25 * -8 + 4) =
             *(uint *)(auStack_6e0 + (uint)bVar25 * -8 + 4);
        *(float *)(auStack_3ec + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8) =
             afStack_6d4[(uint)bVar25 * -2 + (uint)bVar25 * -2 + -1];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                  ((CVector3f *)in_stack_fffff7e8,&CStack_638);
        afStack_604[2] = CStack_638.x;
        afStack_604[(uint)bVar25 * -2 + 3] = afStack_62c[(uint)bVar25 * -2 + -2];
        afStack_604[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 4] =
             afStack_62c[(uint)bVar25 * -2 + (uint)bVar25 * -2 + -1];
        if ((afStack_604[3] <= -0.2617994f) || (0x3e860a91 < (int)afStack_604[3]))
        goto LAB_004c15df;
      }
    }
    else {
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
                (&g_CDemonCameraInstance,iStack_38,(int)this_ptr,&CStack_4f8);
      pCVar27 = &CStack_3a8;
      CStack_3a8.x = CStack_4f8.x;
      *(uint *)((int)&CStack_3a8 + (uint)bVar25 * -8 + 4) =
           *(uint *)((int)&CStack_4f8 + (uint)bVar25 * -8 + 4);
      *(uint *)((int)&CStack_3a8 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8) =
           *(uint *)((int)&CStack_4f8 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
      core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
                (&g_CDemonCameraInstance,pCVar27,&CStack_9c);
      CStack_3a8.x = CStack_9c.x;
      *(uint *)((int)&CStack_3a8 + (uint)bVar25 * -8 + 4) =
           *(uint *)((int)&CStack_9c + (uint)bVar25 * -8 + 4);
      *(uint *)((int)&CStack_3a8 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8) =
           *(uint *)((int)&CStack_9c + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
      auStack_378._0_4_ = (float)CStack_3a8.x * 0.00390625f;
      auStack_378._4_4_ = (float)CStack_3a8.y * 0.00390625f;
      fStack_370 = (float)CStack_3a8.z * 0.00390625f;
      fStack_2ac = g_CDemonCameraInstance.base.position.f.x;
      afStack_2a8[(uint)bVar25 * -2] =
           *(float *)((int)&g_CDemonCameraInstance + (uint)bVar25 * -8 + 8);
      afStack_2a8[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1] =
           *(float *)((uint)bVar25 * -8 + 0x2038f58 + (uint)bVar25 * -8);
      uVar7 = auStack_378._4_4_;
      uVar6 = auStack_378._0_4_;
      CStack_144.x = fStack_2ac;
      *(float *)((int)&CStack_144 + ((uint)bVar25 * -2 + -1) * 4 + 8) =
           afStack_2a8[(uint)bVar25 * -2];
      *(float *)((int)&CStack_144 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8) =
           afStack_2a8[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1];
      local_ac[1] = (float)uVar6 - CStack_144.x;
      local_ac[2] = (float)uVar7 - CStack_144.y;
      local_ac[3] = fStack_370 - CStack_144.z;
      fStack_21c = (float)uVar6 - CStack_144.x;
      *(float *)((int)&CStack_218 + (uint)bVar25 * -8) = local_ac[(uint)bVar25 * -2 + 2];
      *(float *)((int)&CStack_218 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 4) =
           local_ac[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 3];
      fVar9 = SQRT(CStack_218.y * CStack_218.y +
                   fStack_21c * fStack_21c + CStack_218.x * CStack_218.x);
      if (fVar9 <= 0.0) {
        CStack_218.x = 0.0;
        fStack_21c = 0.0;
        CStack_218.y = 0.0;
      }
      else {
        fVar9 = 1.0 / fVar9;
        fStack_21c = fStack_21c * fVar9;
        CStack_218.x = CStack_218.x * fVar9;
        CStack_218.y = CStack_218.y * fVar9;
      }
      fStack_21c = fStack_21c * 1000.0f;
      CStack_218.x = CStack_218.x * 1000.0f;
      CStack_218.y = CStack_218.y * 1000.0f;
      fStack_648 = CStack_144.x + fStack_21c;
      fStack_644 = CStack_144.y + CStack_218.x;
      fStack_640 = CStack_144.z + CStack_218.y;
      fStack_2dc = fStack_648;
      afStack_2d8[(uint)bVar25 * -2] = afStack_664[(uint)bVar25 * -2 + 8];
      afStack_2d8[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1] =
           afStack_664[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 9];
      if ((float *)auStack_378 != &fStack_2dc) {
        auStack_378._0_4_ = fStack_2dc;
        auStack_378._4_4_ = afStack_2d8[0];
        fStack_370 = afStack_2d8[1];
      }
      core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,4);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,(CDemonActor *)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]);
      core_setcolid_cpp_CDemonSet_raycast_FUN_0053ccc0
                (g_CDemonSetPtr,&CStack_144,(CVector3f *)auStack_378);
      if (&g_CDemonSetPtr->collision_impact_position != (CVector3f *)&g_FLOAT_01d22c30) {
        g_FLOAT_01d22c30 = (g_CDemonSetPtr->collision_impact_position).x;
        g_FLOAT_01d22c38 = (g_CDemonSetPtr->collision_impact_position).z;
        g_FLOAT_01d22c34 = (g_CDemonSetPtr->collision_impact_position).y;
      }
      pCVar13 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
      pCVar18 = &(pCVar13->base).base.location;
      if (pCVar18 != (CLocation *)&g_CVector3f_01d1e328) {
        g_CVector3f_01d1e328.x = (pCVar18->position).x;
        g_CVector3f_01d1e328.z = (pCVar13->base).base.location.position.z;
        g_CVector3f_01d1e328.y = (pCVar13->base).base.location.position.y;
      }
    }
    (player_control->action_state).fire = 1;
  }
LAB_004c15df:
  if (((((g_MouseButtonFlags.dword & 2) != 0) && (unaff_retaddr != 0)) &&
      (*(int *)(unaff_retaddr + 0x20c24) != 0)) &&
     (*(int *)(*(int *)(unaff_retaddr + 0x20c24) + 0x2e0) == 7)) {
    (player_control->action_state).fire = 1;
  }
  if ((g_MouseButtonFlags.dword & 1) == 0) {
    g_INT_01d1e358 = g_CDemonSetPtr->selected_camera_index;
  }
  if ((g_MouseButtonFlags.dword == 1) && (g_CDemonSetPtr->selected_camera_index == g_INT_01d1e358))
  {
    g_FLOAT_01d22c30 = 1e+30;
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
              (&g_CDemonCameraInstance,iStack_38,(int)this_ptr,&CStack_690);
    pCVar19 = pCStack_24;
    CStack_69c.x = CStack_690.x;
    *(uint *)((int)&CStack_69c + (uint)bVar25 * -8 + 4) =
         *(uint *)((int)&CStack_690 + (uint)bVar25 * -8 + 4);
    *(uint *)((int)&CStack_69c + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8) =
         *(uint *)((int)&CStack_690 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
    if (pCVar19 == (CDemonActor *)0x0) {
      if (((iStack_38 < 0x20) || (iStack_40 + -0x20 < iStack_38)) ||
         (((int)this_ptr < 0x20 || (iStack_5c + -0x20 < (int)this_ptr)))) {
        core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
                  (&g_CDemonCameraInstance,iStack_40 / 2,iStack_5c / 2,&CStack_528);
        pCVar27 = &CStack_5c4;
        CStack_5c4.x = CStack_528.x;
        *(uint *)((int)&CStack_5c4 + (uint)bVar25 * -8 + 4) =
             *(uint *)((int)&CStack_528 + (uint)bVar25 * -8 + 4);
        *(uint *)((int)&CStack_5c4 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8) =
             *(uint *)((int)&CStack_528 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
                  (&g_CDemonCameraInstance,pCVar27,&CStack_1e0);
        CStack_5c4.x = CStack_1e0.x;
        *(uint *)((int)&CStack_5c4 + (uint)bVar25 * -8 + 4) =
             *(uint *)((int)&CStack_1e0 + (uint)bVar25 * -8 + 4);
        *(uint *)((int)&CStack_5c4 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8) =
             *(uint *)((int)&CStack_1e0 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
        afStack_5a0[0] = (float)CStack_5c4.x * 0.00390625f;
        afStack_5a0[1] = (float)CStack_5c4.y * 0.00390625f;
        afStack_5a0[2] = (float)CStack_5c4.z * 0.00390625f;
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
                  (&g_CDemonCameraInstance,&CStack_69c,&CStack_12c);
        CStack_69c.x = CStack_12c.x;
        *(uint *)((int)&CStack_69c + (uint)bVar25 * -8 + 4) =
             *(uint *)((int)&CStack_12c + (uint)bVar25 * -8 + 4);
        *(uint *)((int)&CStack_69c + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8) =
             *(uint *)((int)&CStack_12c + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8);
        fStack_564 = (float)CStack_69c.x * 0.00390625f;
        fStack_560 = (float)CStack_69c.y * 0.00390625f;
        fStack_55c = (float)CStack_69c.z * 0.00390625f;
        fStack_4ec = (float)CStack_69c.x * 0.00390625f - afStack_5a0[0];
        afStack_4e8[0] = (float)CStack_69c.y * 0.00390625f - afStack_5a0[1];
        afStack_4e8[1] = (float)CStack_69c.z * 0.00390625f - afStack_5a0[2];
        fStack_54c = fStack_4ec;
        afStack_548[(uint)bVar25 * -2] = afStack_4e8[(uint)bVar25 * -2];
        afStack_548[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1] =
             afStack_4e8[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1];
        fVar5 = fStack_55c;
        fVar3 = fStack_560;
        fVar9 = fStack_564;
        fStack_20 = SQRT(afStack_548[1] * afStack_548[1] + fStack_54c * fStack_54c);
        afStack_548[0] = 0.0;
        if (fStack_20 <= 0.0) {
          fStack_54c = 0.0;
          afStack_548[1] = 0.0;
        }
        else {
          fVar2 = 1.0 / fStack_20;
          fStack_54c = fStack_54c * fVar2;
          afStack_548[0] = fVar2 * 0.0;
          afStack_548[1] = afStack_548[1] * fVar2;
        }
        if ((pCStack_64 != (CDemonActor *)0x0) && ((g_MouseButtonFlags.dword & 2) != 0)) {
          if (g_INT_01d1e334 != 1) {
            g_INT_01d1e334 = 0;
          }
          goto LAB_004c3ec2;
        }
        fStack_60c = fStack_54c * unaff_EBX;
        fStack_608 = afStack_548[0] * unaff_EBX;
        afStack_604[0] = afStack_548[1] * unaff_EBX;
        afStack_23c[2] = fStack_54c * unaff_EBX;
        afStack_23c[(uint)bVar25 * -2 + 3] = afStack_604[(uint)bVar25 * -2 + -1];
        afStack_23c[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 4] =
             afStack_604[(uint)bVar25 * -2 + (uint)bVar25 * -2];
        fStack_5f4 = fVar9 + afStack_23c[2];
        fStack_5f0 = fVar3 + afStack_23c[3];
        fStack_5ec = fVar5 + fStack_22c;
        fStack_414 = fVar9 + afStack_23c[2];
        afStack_410[(uint)bVar25 * -2] = afStack_604[(uint)bVar25 * -2 + 5];
        afStack_410[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1] =
             afStack_604[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 6];
        if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x20].y_min) {
          g_CVector3f_01d1e328.x = fStack_414;
          g_CVector3f_01d1e328.y = afStack_410[0];
          g_CVector3f_01d1e328.z = afStack_410[1];
        }
        g_FLOAT_01d1e344 = 0.0;
        g_INT_01d1e334 = 1;
      }
      else {
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
                  (&g_CDemonCameraInstance,&CStack_69c,&CStack_f0);
        CStack_69c.x = CStack_f0.x;
        *(uint *)((int)&CStack_69c + (uint)bVar25 * -8 + 4) =
             *(uint *)((int)&CStack_f0 + (uint)bVar25 * -8 + 4);
        *(uint *)((int)&CStack_69c + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8) =
             *(uint *)((int)&CStack_f0 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
        auStack_3b8._4_4_ = (CPrye *)((float)CStack_69c.x * 0.00390625f);
        fStack_3b0 = (float)CStack_69c.y * 0.00390625f;
        fStack_3ac = (float)CStack_69c.z * 0.00390625f;
        fStack_15c = g_CDemonCameraInstance.base.position.f.x;
        afStack_158[(uint)bVar25 * -2] =
             *(float *)((int)&g_CDemonCameraInstance + (uint)bVar25 * -8 + 8);
        afStack_158[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1] =
             *(float *)((uint)bVar25 * -8 + 0x2038f58 + (uint)bVar25 * -8);
        fVar9 = fStack_3b0;
        uVar6 = auStack_3b8._4_4_;
        CStack_354.x = fStack_15c;
        *(float *)((int)&CStack_354 + (uint)bVar25 * -8 + 4) = afStack_158[(uint)bVar25 * -2];
        *(float *)((int)&CStack_354 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8) =
             afStack_158[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1];
        afStack_2d8[2] = (float)uVar6 - CStack_354.x;
        afStack_2d8[3] = fVar9 - CStack_354.y;
        fStack_2c8 = fStack_3ac - CStack_354.z;
        afStack_344[2] = (float)uVar6 - CStack_354.x;
        afStack_344[(uint)bVar25 * -2 + 3] = afStack_2d8[(uint)bVar25 * -2 + 3];
        afStack_344[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 4] =
             afStack_2d8[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 4];
        fStack_18 = SQRT(afStack_344[4] * afStack_344[4] +
                         afStack_344[2] * afStack_344[2] + afStack_344[3] * afStack_344[3]);
        if (fStack_18 <= 0.0) {
          afStack_344[3] = 0.0;
          afStack_344[2] = 0.0;
          afStack_344[4] = 0.0;
        }
        else {
          fVar9 = 1.0 / fStack_18;
          afStack_344[2] = afStack_344[2] * fVar9;
          afStack_344[3] = afStack_344[3] * fVar9;
          afStack_344[4] = afStack_344[4] * fVar9;
        }
        afStack_344[2] = afStack_344[2] * 1000.0f;
        afStack_344[3] = afStack_344[3] * 1000.0f;
        afStack_344[4] = afStack_344[4] * 1000.0f;
        pCStack_240 = (CPrye *)(CStack_354.x + afStack_344[2]);
        afStack_23c[0] = CStack_354.y + afStack_344[3];
        afStack_23c[1] = CStack_354.z + afStack_344[4];
        CStack_310.y = (float)pCStack_240;
        afStack_304[(uint)bVar25 * -2 + -1] = afStack_23c[(uint)bVar25 * -2];
        afStack_304[(uint)bVar25 * -2 + (uint)bVar25 * -2] =
             afStack_23c[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1];
        if ((float *)(auStack_3b8 + 4) != &CStack_310.y) {
          auStack_3b8._4_4_ = CStack_310.y;
          fStack_3b0 = CStack_310.z;
          fStack_3ac = afStack_304[0];
        }
        core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,4);
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                  (g_CDemonSetPtr,(CDemonActor *)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]);
        core_setcolid_cpp_CDemonSet_raycast_FUN_0053ccc0
                  (g_CDemonSetPtr,&CStack_354,(CVector3f *)(auStack_3b8 + 4));
        if ((pCStack_64 != (CDemonActor *)0x0) && ((g_MouseButtonFlags.dword & 2) != 0)) {
          if (g_INT_01d1e334 != 1) {
            g_INT_01d1e334 = 0;
          }
LAB_004c3ec2:
          g_FLOAT_01d22c30 = 1e+30;
          goto LAB_004c3ecc;
        }
        if (g_MouseButtonFlags.dword != 1) goto LAB_004c3ecc;
        if (&g_CDemonSetPtr->collision_impact_position != &g_CVector3f_01d1e328) {
          g_CVector3f_01d1e328.x = (g_CDemonSetPtr->collision_impact_position).x;
          g_CVector3f_01d1e328.z = (g_CDemonSetPtr->collision_impact_position).z;
          g_CVector3f_01d1e328.y = (g_CDemonSetPtr->collision_impact_position).y;
        }
        g_FLOAT_01d1e344 = 0.0;
        g_INT_01d1e334 = 1;
      }
LAB_004c3ed9:
      if (this_ptr->always_run == 0) {
        bVar26 = g_KeyboardState[this_ptr->key_run];
      }
      else {
        bVar26 = g_KeyboardState[this_ptr->key_run] == '\0';
      }
      (player_control->action_state).run = (uint)bVar26;
      if ((player_control->action_state).run == 0) {
        g_INT_01d1e348 = 0;
      }
      else {
        g_INT_01d1e348 = 1;
      }
    }
    else {
      if (((g_MouseButtonFlags.dword & 2) != 0) &&
         (g_CDemonActor_PTR_01d1e34c == (CDemonActor *)0x0)) {
        g_INT_01d1e320 = 1;
        if (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->action_pending == 0) {
          core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0
                    (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base);
          fStack_7f4 = 2.0;
        }
      }
      fStack_7f4 = fStack_7f4 - this_ptr->delta_time_float;
      this_ptr_01 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (pCStack_24,g_CDoorClassInfo.name_hash);
      pCVar19 = pCStack_24;
      local_54 = this_ptr_01;
      pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (pCStack_24,g_CCharacterClassInfo.name_hash);
      local_50 = pCVar10;
      pCVar11 = (CPrye *)core_actor_cpp_castToClassHash_FUN_0040c840
                                   (pCVar19,g_CLeverClassInfo.name_hash);
      local_4c = pCVar11;
      pCStack_48 = core_actor_cpp_castToClassHash_FUN_0040c840
                             (pCVar19,g_CTriggerClassInfo.name_hash);
      pCVar12 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar19,g_CBoxActorClassInfo.name_hash);
      pCStack_44 = pCVar12;
      pCStack_34 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar19,g_CMeleeClassInfo.name_hash);
      actor_ptr = pCStack_24;
      this_ptr_02 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (pCStack_24,g_CWeaponClassInfo.name_hash);
      pCVar15 = pCStack_34;
      pCVar16 = pCStack_48;
      this_ptr_00 = local_4c;
      pCVar19 = local_54;
      in_stack_fffff7f0 = (CBoundingBox3D *)0x40200000;
      if (local_50 == (CDemonActor *)0x0) {
        if (this_ptr_01 == (CDemonActor *)0x0) {
          if (local_4c == (CPrye *)0x0) {
            if (pCStack_44 == (CDemonActor *)0x0) {
              if (pCStack_34 == (CDemonActor *)0x0) {
                if (this_ptr_02 == (CDemonActor *)0x0) {
                  if (pCStack_48 == (CDemonActor *)0x0) {
                    if ((g_MouseButtonFlags.dword == 1) &&
                       (&pCStack_24->location != (CLocation *)&g_CVector3f_01d1e328)) {
                      g_CVector3f_01d1e328.x = (pCStack_24->location).position.x;
                      g_CVector3f_01d1e328.z = (pCStack_24->location).position.z;
                      g_CVector3f_01d1e328.y = (pCStack_24->location).position.y;
                    }
                  }
                  else {
                    pCVar28 = &(g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.
                               position;
                    pfVar22 = (float *)((int)pCStack_48 + (uint)bVar25 * -8 + 0x24);
                    fStack_cc = (pCStack_48->location).position.x;
                    afStack_c8[(uint)bVar25 * -2] = *pfVar22;
                    afStack_c8[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1] =
                         pfVar22[(uint)bVar25 * -2 + 1];
                    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                              (pCVar16,pCVar28,&CStack_1d4);
                    pCVar19 = pCStack_48;
                    afStack_c8[0] =
                         (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.position.y
                    ;
                    (*((pCStack_48->vtable)._ub)->getBoundingBox)(pCStack_48,in_stack_fffff7e8);
                    puVar23 = (uint *)&stack0xfffff864;
                    puVar24 = (uint *)&stack0xfffff844;
                    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
                      *puVar24 = *puVar23;
                      puVar23 = puVar23 + (uint)bVar25 * -2 + 1;
                      puVar24 = puVar24 + (uint)bVar25 * -2 + 1;
                    }
                    auStack_46c._4_4_ = fStack_7a4;
                    auStack_46c._0_4_ = 0.0;
                    afStack_464[0] = 0.0;
                    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                              (pCVar19,(CVector3f *)auStack_46c,&CStack_5d4);
                    fStack_208 = CStack_5d4.x;
                    afStack_204[(uint)bVar25 * -2] =
                         *(float *)((int)&CStack_5d4 + (uint)bVar25 * -8 + 4);
                    afStack_204[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1] =
                         *(float *)((int)&CStack_5d4 +
                                   ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8);
                    if ((float *)auStack_46c != &fStack_208) {
                      auStack_46c._0_4_ = fStack_208;
                      auStack_46c._4_4_ = afStack_204[0];
                      afStack_464[0] = afStack_204[1];
                    }
                    if (&stack0x00000000 != g_CDemonLightInstance.base.camera_name + 0x4c) {
                      g_CVector3f_01d1e328.x = afStack_c8[1];
                      g_CVector3f_01d1e328.y = afStack_c8[2];
                      g_CVector3f_01d1e328.z = afStack_c8[3];
                    }
                    if ((int *)&stack0x00000000 != &g_BloodParticles[6].base.was_in_solid) {
                      g_FLOAT_01d22c30 = (float)auStack_46c._0_4_;
                      g_FLOAT_01d22c34 = (float)auStack_46c._4_4_;
                      g_FLOAT_01d22c38 = afStack_464[0];
                    }
                  }
                }
                else {
                  pCVar28 = &(g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.
                             position;
                  pfVar22 = (float *)((int)this_ptr_02 + (uint)bVar25 * -8 + 0x24);
                  afStack_204[0] = (this_ptr_02->location).position.x;
                  afStack_204[(uint)bVar25 * -2 + 1] = *pfVar22;
                  afStack_204[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 2] =
                       pfVar22[(uint)bVar25 * -2 + 1];
                  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                            (this_ptr_02,pCVar28,&CStack_2c4);
                  afStack_204[1] =
                       (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.position.y;
                  if ((int *)&stack0x00000000 !=
                      &g_CDemonLightInstance.base.cached_projection.center_y_fixed) {
                    g_CVector3f_01d1e328.x = afStack_204[0];
                    g_CVector3f_01d1e328.z = afStack_204[2];
                    g_CVector3f_01d1e328.y = afStack_204[1];
                  }
                  if (&this_ptr_02->location != (CLocation *)&g_FLOAT_01d22c30) {
                    g_FLOAT_01d22c30 = (this_ptr_02->location).position.x;
                    g_FLOAT_01d22c38 = (this_ptr_02->location).position.z;
                    g_FLOAT_01d22c34 = (this_ptr_02->location).position.y;
                  }
                }
              }
              else {
                pfVar22 = (float *)((int)pCStack_34 + (uint)bVar25 * -8 + 0x24);
                fStack_5e8 = (pCStack_34->location).position.x;
                afStack_604[(uint)bVar25 * -2 + 8] = *pfVar22;
                afStack_604[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 9] =
                     pfVar22[(uint)bVar25 * -2 + 1];
                (*((pCVar15->vtable)._ub)->getBoundingBox)(pCVar15,in_stack_fffff7e8);
                puVar23 = (uint *)&stack0xfffff894;
                puVar24 = (uint *)&stack0xfffff874;
                for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar24 = *puVar23;
                  puVar23 = puVar23 + (uint)bVar25 * -2 + 1;
                  puVar24 = puVar24 + (uint)bVar25 * -2 + 1;
                }
                fStack_3b0 = fStack_770;
                auStack_3b8._0_4_ = this_ptr_00;
                auStack_3b8._4_4_ = this_ptr_00;
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                          (pCStack_2c,(CVector3f *)auStack_3b8,(CVector3f *)auStack_328);
                pCStack_670 = (CPrye *)auStack_328._0_4_;
                (&pCStack_66c)[(uint)bVar25 * -2] = (CPrye *)afStack_320[(uint)bVar25 * -2 + -1];
                afStack_664[(uint)bVar25 * -2 + (uint)bVar25 * -2 + -1] =
                     afStack_320[(uint)bVar25 * -2 + (uint)bVar25 * -2];
                if ((CPrye **)auStack_3b8 != &pCStack_670) {
                  auStack_3b8._0_4_ = pCStack_670;
                  auStack_3b8._4_4_ = pCStack_66c;
                  fStack_3b0 = fStack_668;
                }
                fStack_5dc = (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.
                             position.y;
                if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x3d].x_max) {
                  g_CVector3f_01d1e328.x = fStack_5e0;
                  g_CVector3f_01d1e328.z = fStack_5d8;
                  g_CVector3f_01d1e328.y = fStack_5dc;
                }
                if ((float *)&stack0x00000000 != &g_BloodParticles[4].base.velocity.z) {
                  g_FLOAT_01d22c30 = (float)auStack_3b8._0_4_;
                  g_FLOAT_01d22c34 = (float)auStack_3b8._4_4_;
                  g_FLOAT_01d22c38 = fStack_3b0;
                }
              }
            }
            else {
              pCVar13 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
              pfVar22 = (float *)((int)pCStack_44 + (uint)bVar25 * -8 + 0x24);
              fStack_42c = (pCStack_44->location).position.x;
              afStack_428[(uint)bVar25 * -2] = *pfVar22;
              afStack_428[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1] =
                   pfVar22[(uint)bVar25 * -2 + 1];
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                        (pCStack_44,&(pCVar13->base).base.location.position,&CStack_6a8);
              afStack_428[0] =
                   (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.position.y;
              if ((CRect *)&stack0x00000000 != g_CDemonLightInstance.base.rect_array + 0x22) {
                g_CVector3f_01d1e328.x = fStack_42c;
                g_CVector3f_01d1e328.z = afStack_428[1];
                g_CVector3f_01d1e328.y = afStack_428[0];
              }
              if (&pCVar12->location != (CLocation *)&g_FLOAT_01d22c30) {
                g_FLOAT_01d22c30 = (pCVar12->location).position.x;
                g_FLOAT_01d22c38 = (pCVar12->location).position.z;
                g_FLOAT_01d22c34 = (pCVar12->location).position.y;
              }
            }
          }
          else {
            pCVar28 = &(g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.position;
            pfVar22 = (float *)((int)local_4c + (uint)bVar25 * -8 + 0x24);
            afStack_490[1] = (local_4c->base).base.base.location.position.x;
            afStack_490[(uint)bVar25 * -2 + 2] = *pfVar22;
            afStack_490[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 3] = pfVar22[(uint)bVar25 * -2 + 1];
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                      ((CDemonActor *)this_ptr_00,pCVar28,&CStack_558);
            pCVar13 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
            fStack_348 = CStack_558.x;
            afStack_344[(uint)bVar25 * -2] = *(float *)((int)&CStack_558 + (uint)bVar25 * -8 + 4);
            afStack_344[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1] =
                 *(float *)((int)&CStack_558 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
            afStack_490[2] = (pCVar13->base).base.location.position.y;
            if (0.0 <= afStack_344[1]) {
              CStack_84.x = 0.0;
              CStack_84.y = 0.0;
              CStack_84.z = 2.0;
              core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                        ((CDemonActor *)local_4c,&CStack_84,(CVector3f *)(auStack_46c + 4));
              CStack_278.z = (float)auStack_46c._4_4_;
              afStack_26c[(uint)bVar25 * -2] = afStack_464[(uint)bVar25 * -2];
              afStack_26c[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1] =
                   afStack_464[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1];
              afStack_490[1] = afStack_490[1] + CStack_278.z;
              afStack_490[2] = afStack_490[2] + afStack_26c[0];
              afStack_490[3] = afStack_490[3] + afStack_26c[1];
            }
            else {
              CStack_d8.x = 0.0;
              CStack_d8.y = 0.0;
              CStack_d8.z = -2.0;
              core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                        ((CDemonActor *)this_ptr_00,&CStack_d8,&CStack_2b8);
              CStack_150.x = CStack_2b8.x;
              *(uint *)((int)&CStack_150 + (uint)bVar25 * -8 + 4) =
                   *(uint *)((int)&CStack_2b8 + (uint)bVar25 * -8 + 4);
              *(uint *)((int)&CStack_150 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8) =
                   *(uint *)((int)&CStack_2b8 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
              afStack_490[1] = afStack_490[1] + CStack_150.x;
              afStack_490[2] = afStack_490[2] + CStack_150.y;
              afStack_490[3] = afStack_490[3] + CStack_150.z;
            }
            if ((CRect *)&stack0x00000000 != g_CDemonLightInstance.base.rect_array + 0x28) {
              g_CVector3f_01d1e328.x = afStack_490[1];
              g_CVector3f_01d1e328.y = afStack_490[2];
              g_CVector3f_01d1e328.z = afStack_490[3];
            }
            pCVar18 = &(pCVar11->base).base.base.location;
            if (pCVar18 != (CLocation *)&g_FLOAT_01d22c30) {
              g_FLOAT_01d22c30 = (pCVar18->position).x;
              g_FLOAT_01d22c38 = (pCVar11->base).base.base.location.position.z;
              g_FLOAT_01d22c34 = (pCVar11->base).base.base.location.position.y;
            }
          }
        }
        else if ((this_ptr_01[7].lifecycle_state == ACTOR_NOT_CREATED) &&
                (this_ptr_01[2].location.position.z != 0.0)) {
          (*((this_ptr_01->vtable)._ub)->getBoundingBox)(this_ptr_01,in_stack_fffff7e8);
          puVar23 = (uint *)&stack0xfffff8ac;
          puVar24 = (uint *)&stack0xfffff8ec;
          for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar24 = *puVar23;
            puVar23 = puVar23 + (uint)bVar25 * -2 + 1;
            puVar24 = puVar24 + (uint)bVar25 * -2 + 1;
          }
          fStack_4b4 = fStack_70c + fStack_700;
          afStack_4b0[0] = fStack_708 + fStack_6fc;
          afStack_4b0[1] = fStack_704 + fStack_6f8;
          fStack_3c4 = fStack_70c + fStack_700;
          afStack_3c0[(uint)bVar25 * -2] = afStack_4b0[(uint)bVar25 * -2];
          afStack_3c0[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1] =
               afStack_4b0[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1];
          pCVar28 = &CStack_49c;
          fStack_358 = fStack_3c4 * 0.5f;
          CStack_354.x = afStack_3c0[0] * 0.5f;
          CStack_354.y = afStack_3c0[1] * 0.5f;
          CStack_49c.x = fStack_3c4 * 0.5f;
          afStack_490[(uint)bVar25 * -2 + -2] = *(float *)((int)&CStack_354 + (uint)bVar25 * -8);
          afStack_490[(uint)bVar25 * -2 + (uint)bVar25 * -2 + -1] =
               *(float *)((int)&CStack_354 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 4);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(this_ptr_01,pCVar28,&CStack_6f4)
          ;
          pCVar28 = &(g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.position;
          fStack_130 = CStack_6f4.x;
          *(float *)((int)&CStack_12c + (uint)bVar25 * -8) = afStack_6e8[(uint)bVar25 * -2 + -2];
          *(float *)((int)&CStack_12c + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 4) =
               afStack_6e8[(uint)bVar25 * -2 + (uint)bVar25 * -2 + -1];
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0(this_ptr_01,pCVar28,&CStack_310)
          ;
          fStack_5a4 = CStack_310.x;
          afStack_5a0[(uint)bVar25 * -2] = afStack_304[(uint)bVar25 * -2 + -2];
          afStack_5a0[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1] =
               afStack_304[(uint)bVar25 * -2 + (uint)bVar25 * -2 + -1];
          (*((this_ptr_01->vtable)._ub)->getBoundingBox)(this_ptr_01,in_stack_fffff7f0);
          puVar23 = &stack0xfffff8e4;
          puVar24 = (uint *)&stack0xfffff834;
          for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar24 = *puVar23;
            puVar23 = puVar23 + (uint)bVar25 * -2 + 1;
            puVar24 = puVar24 + (uint)bVar25 * -2 + 1;
          }
          CStack_12c.z = (int)fStack_7c4;
          if (0.0 <= afStack_5a0[3]) {
            auStack_378._4_4_ = 0.0;
            fStack_370 = 0.0;
            uStack_36c = 0x3fc00000;
            core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                      (this_ptr_01,(CVector3f *)(auStack_378 + 4),&CStack_218);
            fStack_35c = CStack_218.x;
            (&fStack_358)[(uint)bVar25 * -2] = *(float *)((int)&CStack_218 + (uint)bVar25 * -8 + 4);
            *(uint *)((int)&CStack_354 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4) =
                 *(uint *)((int)&CStack_218 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
            CStack_12c.y = (int)((float)CStack_12c.y + fStack_35c);
            CStack_12c.z = (int)((float)CStack_12c.z + fStack_358);
            CStack_120.x = CStack_120.x + CStack_354.x;
          }
          else {
            local_ac[1] = -1.5;
            auStack_b4._4_4_ = 0.0;
            local_ac[0] = 0.0;
            core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                      (this_ptr_01,(CVector3f *)(auStack_b4 + 4),&CStack_278);
            afStack_6bc[0] = CStack_278.x;
            afStack_6bc[(uint)bVar25 * -2 + 1] = afStack_26c[(uint)bVar25 * -2 + -2];
            *(float *)((int)&CStack_6b4 + (uint)bVar25 * -8 + (uint)bVar25 * -8) =
                 afStack_26c[(uint)bVar25 * -2 + (uint)bVar25 * -2 + -1];
            CStack_12c.y = (int)((float)CStack_12c.y + afStack_6bc[0]);
            CStack_12c.z = (int)((float)CStack_12c.z + afStack_6bc[1]);
            CStack_120.x = CStack_120.x + CStack_6b4.x;
          }
          if (&stack0x00000000 != g_CDemonLightInstance.base.camera_name + 0xb0) {
            g_CVector3f_01d1e328.x = (float)CStack_12c.y;
            g_CVector3f_01d1e328.y = (float)CStack_12c.z;
            g_CVector3f_01d1e328.z = CStack_120.x;
          }
          in_stack_fffff7f0 = (CBoundingBox3D *)0x4c3643;
          (*((pCStack_44->vtable)._ub)->getBoundingBox)
                    (pCStack_44,(CBoundingBox3D *)in_stack_fffff7f8);
          puVar23 = (uint *)&stack0xfffff82c;
          puVar24 = (uint *)&stack0xfffff8cc;
          for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar24 = *puVar23;
            puVar23 = puVar23 + (uint)bVar25 * -2 + 1;
            puVar24 = puVar24 + (uint)bVar25 * -2 + 1;
          }
          fStack_198 = fStack_72c + fStack_720;
          afStack_194[0] = fStack_728 + fStack_71c;
          afStack_194[1] = fStack_724 + fStack_718;
          fStack_3f0 = fStack_72c + fStack_720;
          *(float *)(auStack_3ec + (uint)bVar25 * -8) = afStack_194[(uint)bVar25 * -2];
          *(float *)(auStack_3ec + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 4) =
               afStack_194[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1];
          pCVar28 = &CStack_420;
          CStack_180.x = (int)(fStack_3f0 * 0.5f);
          CStack_180.y = (int)((float)auStack_3ec._0_4_ * 0.5f);
          CStack_180.z = (int)((float)auStack_3ec._4_4_ * 0.5f);
          CStack_420.x = fStack_3f0 * 0.5f;
          *(uint *)((int)&CStack_420 + (uint)bVar25 * -8 + 4) =
               *(uint *)((int)aCStack_174 + (uint)bVar25 * -8 + -8);
          *(uint *)((int)&CStack_420 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8) =
               *(uint *)((int)aCStack_174 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + -4);
          in_stack_fffff7f8 = pCStack_3c;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(pCStack_3c,pCVar28,&CStack_150);
          afStack_410[2] = CStack_150.x;
          afStack_410[(uint)bVar25 * -2 + 3] = *(float *)((int)&CStack_150 + (uint)bVar25 * -8 + 4);
          afStack_410[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 4] =
               *(float *)((int)&CStack_150 + ((uint)bVar25 * -2 + (uint)bVar25 * -2) * 4 + 8);
          if ((float *)&stack0x00000000 != &g_BloodParticles[5].base.acceleration.y) {
            g_FLOAT_01d22c30 = afStack_410[2];
            g_FLOAT_01d22c34 = afStack_410[3];
            g_FLOAT_01d22c38 = fStack_400;
          }
        }
        else {
          pCVar28 = &(g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.position;
          pfVar22 = (float *)((int)local_54 + (uint)bVar25 * -8 + 0x9c0);
          fStack_51c = local_54[7].orient_matrix.m[2].x;
          afStack_518[(uint)bVar25 * -2] = *pfVar22;
          afStack_518[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1] = pfVar22[(uint)bVar25 * -2 + 1];
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0(pCVar19,pCVar28,&CStack_4c8);
          afStack_62c[2] = CStack_4c8.x;
          afStack_62c[(uint)bVar25 * -2 + 3] = *(float *)((int)&CStack_4c8 + (uint)bVar25 * -8 + 4);
          afStack_62c[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 4] =
               *(float *)((int)&CStack_4c8 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
          if (0.0 <= fStack_61c) {
            CStack_450.z = 1.5;
            CStack_450.x = 0.0;
            CStack_450.y = -3.5;
            core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                      (pCVar19,&CStack_450,(CVector3f *)auStack_b4);
            fStack_534 = (float)auStack_b4._0_4_;
            afStack_548[(uint)bVar25 * -2 + 6] = *(float *)(auStack_b4 + (uint)bVar25 * -8 + 4);
            afStack_548[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 7] =
                 local_ac[(uint)bVar25 * -2 + (uint)bVar25 * -2];
            fStack_51c = fStack_51c + fStack_534;
            afStack_518[0] = afStack_518[0] + fStack_530;
            afStack_518[1] = afStack_518[1] + fStack_52c;
          }
          else {
            CStack_5b8.x = 0.0;
            CStack_5b8.z = -1.5;
            CStack_5b8.y = -3.5;
            core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                      (local_54,&CStack_5b8,&CStack_24c);
            afStack_5a0[6] = CStack_24c.x;
            afStack_5a0[(uint)bVar25 * -2 + 7] =
                 *(float *)((int)&CStack_24c + (uint)bVar25 * -8 + 4);
            afStack_5a0[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 8] =
                 *(float *)((int)&CStack_24c + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
            fStack_51c = fStack_51c + afStack_5a0[6];
            afStack_518[0] = afStack_518[0] + fStack_584;
            afStack_518[1] = afStack_518[1] + fStack_580;
          }
          if ((CRect *)&stack0x00000000 != g_CDemonLightInstance.base.rect_array + 0x31) {
            g_CVector3f_01d1e328.x = fStack_51c;
            g_CVector3f_01d1e328.y = afStack_518[0];
            g_CVector3f_01d1e328.z = afStack_518[1];
          }
          pCVar28 = local_54[7].orient_matrix.m + 2;
          if (pCVar28 != (CVector3f *)&g_FLOAT_01d22c30) {
            g_FLOAT_01d22c30 = pCVar28->x;
            g_FLOAT_01d22c38 = local_54[7].orient_matrix.m[2].z;
            g_FLOAT_01d22c34 = local_54[7].orient_matrix.m[2].y;
          }
        }
      }
      else {
        iVar8 = core_actor_cpp_isOfClass_FUN_0040c790(local_50,"CEnemy");
        if (iVar8 == 0) {
          pCVar13 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
          pfVar22 = (float *)((int)local_50 + (uint)bVar25 * -8 + 0x24);
          afStack_518[2] = (local_50->location).position.x;
          afStack_518[(uint)bVar25 * -2 + 3] = *pfVar22;
          afStack_518[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 4] = pfVar22[(uint)bVar25 * -2 + 1];
          afStack_518[3] = (pCVar13->base).base.location.position.y;
          CStack_4d4.x = 0.0;
          CStack_4d4.y = 0.0;
          CStack_4d4.z = 2.0;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408b00(local_50,&CStack_4d4,&CStack_480);
          afStack_4b0[0] = CStack_480.x;
          afStack_4b0[(uint)bVar25 * -2 + 1] = *(float *)((int)&CStack_480 + (uint)bVar25 * -8 + 4);
          afStack_4b0[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 2] =
               *(float *)((int)&CStack_480 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
          afStack_518[2] = afStack_518[2] + afStack_4b0[0];
          afStack_518[3] = afStack_518[3] + afStack_4b0[1];
          fStack_508 = fStack_508 + afStack_4b0[2];
          if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x30].x_max) {
            g_CVector3f_01d1e328.x = afStack_518[2];
            g_CVector3f_01d1e328.y = afStack_518[3];
            g_CVector3f_01d1e328.z = fStack_508;
          }
          if (&pCVar10->location != (CLocation *)&g_FLOAT_01d22c30) {
            g_FLOAT_01d22c30 = (pCVar10->location).position.x;
            g_FLOAT_01d22c38 = (pCVar10->location).position.z;
            g_FLOAT_01d22c34 = (pCVar10->location).position.y;
          }
          in_stack_fffff7f0 = (CBoundingBox3D *)0x40400000;
        }
        else {
          pCVar13 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c840
                                       (actor_ptr,g_CConstructClassInfo.name_hash);
          if (pCVar13 != (CHero *)0x0) {
            in_stack_fffff7f0 = (CBoundingBox3D *)0x40a00000;
            (*(((pCVar13->base).base.vtable._uh)->_uh).reset)(pCVar13);
            afStack_464[2] = afStack_664[2];
            afStack_464[(uint)bVar25 * -2 + 3] = afStack_664[(uint)bVar25 * -2 + 3];
            afStack_464[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 4] =
                 afStack_664[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 4];
            if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.rect_array[0x24].y_max) {
              g_CVector3f_01d1e328.x = afStack_464[3];
              g_CVector3f_01d1e328.y = fStack_454;
              g_CVector3f_01d1e328.z = CStack_450.x;
            }
            if ((float *)&stack0x00000000 != &g_BloodParticles[6].base.lifetime_remaining) {
              g_FLOAT_01d22c30 = afStack_464[3];
              g_FLOAT_01d22c34 = fStack_454;
              g_FLOAT_01d22c38 = CStack_450.x;
            }
          }
        }
      }
      if ((pCStack_64 == (CDemonActor *)0x0) || ((g_MouseButtonFlags.dword & 2) == 0)) {
        g_FLOAT_01d1e344 = 0.0;
        g_INT_01d1e334 = 1;
        if (g_CDemonActor_PTR_01d1e34c != (CDemonActor *)0x0) goto LAB_004c3ec2;
LAB_004c3ecc:
        if (g_INT_01d1e334 != 0) goto LAB_004c3ed9;
      }
      else {
        g_FLOAT_01d22c30 = 1e+30;
        g_INT_01d1e334 = 0;
      }
    }
  }
  pCVar13 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
  fStack_78 = (pCVar13->base).base.location.position.x - g_CVector3f_01d1e328.x;
  afStack_74[0] = (pCVar13->base).base.location.position.y - g_CVector3f_01d1e328.y;
  afStack_74[1] = (pCVar13->base).base.location.position.z - g_CVector3f_01d1e328.z;
  CStack_49c.y = fStack_78;
  afStack_490[(uint)bVar25 * -2 + -1] = afStack_74[(uint)bVar25 * -2];
  afStack_490[(uint)bVar25 * -2 + (uint)bVar25 * -2] =
       afStack_74[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1];
  fVar9 = SQRT(afStack_490[0] * afStack_490[0] +
               CStack_49c.y * CStack_49c.y + CStack_49c.z * CStack_49c.z);
  if (((g_INT_01d1e334 == 0) || (g_CDemonActor_PTR_01d1e34c != (CDemonActor *)0x0)) &&
     ((float)9.9999999999999991e+28 <= g_FLOAT_01d22c30)) goto LAB_004c1e34;
  if (fVar9 - fVar9 * (float)0.25 <
      ABS(g_CVector3f_01d1e328.y -
          (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.position.y)) {
    g_INT_01d1e320 = 0;
    g_FLOAT_01d22c30 = 1e+30;
    g_INT_01d1e334 = 0;
  }
  this_ptr_03 = core_path_cpp_getPathMap_FUN_0050ced0((CLocation *)&g_CVector3f_01d1e328);
  iVar8 = core_path_cpp_CPathMap_findPathWithRetry_FUN_0050c680
                    (this_ptr_03,
                     &(g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.position,
                     &CStack_120,0);
  if (iVar8 == 0) {
    g_INT_01d1e334 = 0;
  }
  else {
    fStack_800 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                           (CStack_120.y -
                            (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.orient.vec.y);
    fVar3 = fStack_800 * 0.3183099f * (float)4;
    player_control->turn_speed = fVar3;
    if (fVar3 < -(float)in_stack_fffff7f8) {
      player_control->turn_speed =
           ABS(fStack_800) * -(float)in_stack_fffff7f8 * (float)2;
    }
    if ((float)in_stack_fffff7f8 < player_control->turn_speed) {
      player_control->turn_speed =
           ABS(fStack_800) * (float)in_stack_fffff7f8 * (float)2;
    }
    if (ABS(player_control->turn_speed) < (float)0.080000000000000002) {
      player_control->turn_speed = 0.0;
    }
    iVar8 = g_INT_01d1e348;
    (player_control->action_state).walk = 1;
    if (iVar8 != 0) {
      (player_control->action_state).run = 1;
    }
  }
  if (((fVar9 < (float)in_stack_fffff7f0 * 0.5f) && (g_INT_01d1e348 == 0)) ||
     ((fVar9 < (float)in_stack_fffff7f0 * (float)1.5 && (g_INT_01d1e348 == 1)))) {
    (player_control->action_state).walk = 0;
    if ((float)9.9999999999999991e+28 <= g_FLOAT_01d22c30) {
      g_INT_01d1e334 = 0;
    }
    else {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                ((CDemonActor *)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14],&g_CVector3f_01d1e328,
                 &CStack_504);
      pCStack_66c = (CPrye *)CStack_504.x;
      afStack_664[(uint)bVar25 * -2 + -1] = *(float *)((int)&CStack_504 + (uint)bVar25 * -8 + 4);
      afStack_664[(uint)bVar25 * -2 + (uint)bVar25 * -2] =
           *(float *)((int)&CStack_504 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
      if (fStack_30 < (float)pCStack_66c) {
        (player_control->action_state).run = 0;
        player_control->strafe_speed = 0.2;
      }
      if ((float)pCStack_66c < -fStack_30) {
        (player_control->action_state).run = 0;
        player_control->strafe_speed = -0.2;
      }
      if (fStack_30 < afStack_664[0]) {
        (player_control->action_state).run = 0;
        (player_control->action_state).walk = 1;
      }
      if (afStack_664[0] < -fStack_30) {
        (player_control->action_state).run = 0;
        (player_control->action_state).backup = 1;
      }
      pCVar13 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
      fStack_654 = g_FLOAT_01d22c30 - (pCVar13->base).base.location.position.x;
      fStack_650 = g_FLOAT_01d22c34 - (pCVar13->base).base.location.position.y;
      fStack_64c = g_FLOAT_01d22c38 - (pCVar13->base).base.location.position.z;
      auStack_6e0._8_4_ = fStack_654;
      afStack_6d4[(uint)bVar25 * -2] = afStack_664[(uint)bVar25 * -2 + 5];
      afStack_6d4[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1] =
           afStack_664[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 6];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                ((CVector3f *)(auStack_6e0 + 8),&CStack_6b4);
      afStack_304[1] = CStack_6b4.x;
      afStack_304[(uint)bVar25 * -2 + 2] = *(float *)((int)&CStack_6b4 + (uint)bVar25 * -8 + 4);
      afStack_304[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 3] =
           *(float *)((int)&CStack_6b4 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
      fStack_7fc = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                             (afStack_304[2] -
                              (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.orient.vec.y);
      fVar9 = fStack_7fc * 0.3183099f * (float)4;
      fStack_7f0 = -(float)in_stack_fffff7f8;
      player_control->turn_speed = fVar9;
      if (fVar9 < fStack_7f0) {
        player_control->turn_speed = ABS(fStack_7fc) * fStack_7f0 * (float)2;
      }
      if ((float)in_stack_fffff7f8 < player_control->turn_speed) {
        player_control->turn_speed =
             ABS(fStack_7fc) * (float)in_stack_fffff7f8 * (float)2;
      }
      if (ABS(player_control->turn_speed) < (float)0.080000000000000002) {
        (player_control->action_state).walk = 0;
        player_control->turn_speed = 0.0;
        g_INT_01d1e334 = 0;
        g_FLOAT_01d22c30 = 1e+30;
      }
    }
    if (((g_INT_01d1e320 != 0) && ((float)9.9999999999999991e+28 < g_FLOAT_01d22c30)) &&
       ((g_INT_01d1e320 = 0, pCStack_64 == (CDemonActor *)0x0 && (fStack_7f4 <= 0.0)))) {
      (player_control->action_state).fire = 1;
    }
  }
  pCVar13 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
  fStack_57c = g_FLOAT_01d1e338 - (pCVar13->base).base.location.position.x;
  fStack_578 = g_FLOAT_01d1e33c - (pCVar13->base).base.location.position.y;
  fStack_574 = g_FLOAT_01d1e340 - (pCVar13->base).base.location.position.z;
  fStack_fc = fStack_57c;
  afStack_110[(uint)bVar25 * -2 + 6] = afStack_5a0[(uint)bVar25 * -2 + 10];
  afStack_110[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 7] =
       afStack_5a0[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 0xb];
  player_control =
       (SPlayerInput *)SQRT(fStack_f4 * fStack_f4 + fStack_fc * fStack_fc + fStack_f8 * fStack_f8);
  pSVar29 = player_control;
  if (0.0 < this_ptr->delta_time_float) {
    pSVar29 = (SPlayerInput *)((float)player_control / this_ptr->delta_time_float);
  }
  if (0.4f <= (float)pSVar29) {
    g_FLOAT_01d1e344 = 0.0;
  }
  else {
    g_FLOAT_01d1e344 = this_ptr->delta_time_float + g_FLOAT_01d1e344;
    if (((0x3effffff < (int)g_FLOAT_01d1e344) && (g_INT_01d1e334 = 0, g_INT_01d1e320 != 0)) &&
       (g_INT_01d1e320 = 0, pCStack_64 == (CDemonActor *)0x0)) {
      (player_control->action_state).fire = 1;
    }
  }
  if ((g_INT_01d1e334 != 0) || (g_CDemonActor_PTR_01d1e350 == (CDemonActor *)0x0))
  goto LAB_004c1e34;
  pCVar19 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (g_CDemonActor_PTR_01d1e350,g_CTriggerClassInfo.name_hash);
  iVar8 = g_INT_01d5ba14;
  if (pCVar19 == (CDemonActor *)0x0) {
    pCVar19 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (g_CDemonActor_PTR_01d1e350,g_CDoorClassInfo.name_hash);
    if ((pCVar19 == (CDemonActor *)0x0) ||
       (pCVar19 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonActor_PTR_01d1e350,g_CDoorClassInfo.name_hash),
       pCVar19[7].lifecycle_state != ACTOR_NOT_CREATED)) {
      pCVar19 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (g_CDemonActor_PTR_01d1e350,g_CDoorClassInfo.name_hash);
      iVar8 = g_INT_01d5ba14;
      if (pCVar19 == (CDemonActor *)0x0) {
        g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->hero_action = g_INT_01d1e354;
        g_CHero_PTR_ARRAY_01d5ba04[iVar8]->hero_action_actor = g_CDemonActor_PTR_01d1e350;
        g_CHero_PTR_ARRAY_01d5ba04[iVar8]->hero_action_target = g_CDemonActor_PTR_01d1e350;
        g_CHero_PTR_ARRAY_01d5ba04[iVar8]->hero_action_range = 0.0;
        pCVar13 = g_CHero_PTR_ARRAY_01d5ba04[iVar8];
        goto LAB_004c46c3;
      }
      this_ptr_04 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c840
                                       (g_CDemonActor_PTR_01d1e350,g_CDoorClassInfo.name_hash);
      iVar20 = core_door_cpp_CDoor_getMoveType_FUN_00465380
                         (this_ptr_04,(CDemonActor *)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14],1);
      iVar8 = g_INT_01d5ba14;
      if (iVar20 != 0) {
        g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->hero_action = g_INT_01d1e354;
        pCVar19 = g_CDemonActor_PTR_01d1e350;
        g_CHero_PTR_ARRAY_01d5ba04[iVar8]->hero_action_actor = g_CDemonActor_PTR_01d1e350;
        g_CHero_PTR_ARRAY_01d5ba04[iVar8]->hero_action_target = pCVar19;
        g_CHero_PTR_ARRAY_01d5ba04[iVar8]->hero_action_range = 0.0;
        g_CHero_PTR_ARRAY_01d5ba04[iVar8]->hero_action_started = 1;
        iVar8 = core_door_cpp_CDoor_getMoveType_FUN_00465380
                          (this_ptr_04,(CDemonActor *)g_CHero_PTR_ARRAY_01d5ba04[iVar8],1);
        g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->hero_action_data = iVar8;
      }
    }
    else {
      core_hero_cpp_CHero_tryInteract_FUN_004d2cf0(g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]);
    }
  }
  else {
    g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->hero_action = g_INT_01d1e354;
    g_CHero_PTR_ARRAY_01d5ba04[iVar8]->hero_action_actor = g_CDemonActor_PTR_01d1e350;
    pCVar19 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (g_CDemonActor_PTR_01d1e350,g_CTriggerClassInfo.name_hash);
    iVar8 = g_INT_01d5ba14;
    g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->hero_action_target =
         (CDemonActor *)pCVar19[2].orient_matrix.m[1].y;
    g_CHero_PTR_ARRAY_01d5ba04[iVar8]->hero_action_range = 0.0;
    pCVar13 = g_CHero_PTR_ARRAY_01d5ba04[iVar8];
LAB_004c46c3:
    pCVar13->hero_action_started = 1;
  }
  g_CDemonActor_PTR_01d1e350 = (CDemonActor *)0x0;
  g_INT_01d1e354 = 0;
  (player_control->action_state).action = 1;
LAB_004c1e34:
  if (g_CDemonActor_PTR_01d1e34c != (CDemonActor *)0x0) {
    pCVar13 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
    fStack_2f4 = (g_CDemonActor_PTR_01d1e34c->location).position.x -
                 (pCVar13->base).base.location.position.x;
    fStack_2f0 = (g_CDemonActor_PTR_01d1e34c->location).position.y -
                 (pCVar13->base).base.location.position.y;
    fStack_2ec = (g_CDemonActor_PTR_01d1e34c->location).position.z -
                 (pCVar13->base).base.location.position.z;
    aCStack_390[0].x = fStack_2f4;
    *(float *)((int)aCStack_390 + (uint)bVar25 * -8 + 4) = afStack_304[(uint)bVar25 * -2 + 5];
    *(float *)((int)aCStack_390 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8) =
         afStack_304[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 6];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(aCStack_390,&CStack_2e8);
    fStack_6c0 = CStack_2e8.x;
    afStack_6bc[(uint)bVar25 * -2] = *(float *)((int)&CStack_2e8 + (uint)bVar25 * -8 + 4);
    afStack_6bc[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1] =
         *(float *)((int)&CStack_2e8 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
    fStack_7f8 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                           (afStack_6bc[0] -
                            (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.orient.vec.y);
    if ((float)2.8274333881499998 < ABS(fStack_7f8)) {
      g_FLOAT_01d1e344 = -1.0;
      (player_control->action_state).quick_turn = 1;
    }
    fVar9 = fStack_7f8 * 0.3183099f * (float)4;
    player_control->turn_speed = fVar9;
    if (fVar9 < -(float)in_stack_fffff7f8) {
      player_control->turn_speed =
           ABS(fStack_7f8) * -(float)in_stack_fffff7f8 * (float)2;
    }
    if ((float)in_stack_fffff7f8 < player_control->turn_speed) {
      player_control->turn_speed =
           ABS(fStack_7f8) * (float)in_stack_fffff7f8 * (float)2;
    }
    if (ABS(player_control->turn_speed) < (float)0.080000000000000002) {
      player_control->turn_speed = 0.0;
    }
    if (g_INT_01d1e334 != 0) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                ((CDemonActor *)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14],&g_CVector3f_01d1e328,
                 &CStack_1a4);
      fStack_3fc = CStack_1a4.x;
      afStack_410[(uint)bVar25 * -2 + 6] = *(float *)((int)&CStack_1a4 + (uint)bVar25 * -8 + 4);
      afStack_410[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 7] =
           *(float *)((int)&CStack_1a4 + (uint)bVar25 * -8 + (uint)bVar25 * -8 + 8);
      if ((float)in_stack_fffff7f0 < fStack_3fc) {
        (player_control->action_state).run = 1;
        player_control->strafe_speed = 1.0;
      }
      if (fStack_3fc < -(float)in_stack_fffff7f0) {
        (player_control->action_state).run = 1;
        player_control->strafe_speed = -1.0;
      }
      if ((float)in_stack_fffff7f0 < fStack_3f4) {
        (player_control->action_state).run = 1;
        (player_control->action_state).walk = 1;
      }
      if (fStack_3f4 < -(float)in_stack_fffff7f0) {
        (player_control->action_state).run = 1;
        (player_control->action_state).backup = 1;
      }
    }
    EVar14 = (*(((g_CDemonActor_PTR_01d1e34c->vtable)._uc)->_uc).getDeathState)
                       ((CCharacter *)g_CDemonActor_PTR_01d1e34c);
    if (EVar14 != DEATH_STATE_ALIVE) {
      g_CDemonActor_PTR_01d1e34c = (CDemonActor *)0x0;
    }
  }
  g_INT_01d1e324 = g_MouseButtonFlags.dword;
  pCVar13 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
  pCVar18 = &(pCVar13->base).base.location;
  if (pCVar18 != (CLocation *)&g_FLOAT_01d1e338) {
    g_FLOAT_01d1e338 = (pCVar18->position).x;
    g_FLOAT_01d1e340 = (pCVar13->base).base.location.position.z;
    g_FLOAT_01d1e33c = (pCVar13->base).base.location.position.y;
  }
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  return;
}
