// Name: core_game.cpp_CGame_processPointAndClickControls_FUN_004be8a0
// Address: 004be8a0
// Address Range: [[004be8a0, 004bfa65]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processPointAndClickControls_FUN_004be8a0(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_game_cpp_CGame_processPointAndClickControls_FUN_004be8a0(CGame *this_ptr,SPlayerInput *player_control)

{
  CHero *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CDemonActor *pCVar6;
  float fVar7;
  CDoor *this_ptr_00;
  CPathMap *this_ptr_01;
  EDeathState EVar8;
  CLocation *pCVar9;
  int *piVar10;
  byte bVar11;
  float in_stack_00000010;
  CDemonActor *pCStack00000014;
  CDemonActor *pCStack00000018;
  int in_stack_0000001c;
  float in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  float fStack00000030;
  float afStackY_11b4 [87];
  int aiStackY_1058 [9];
  float afStackY_1034 [6];
  int aiStackY_101c [9];
  float afStackY_ff8 [885];
  CDemonSet *this_ptr_02;
  CVector3i *pCVar12;
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
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  CVector3i CStack_184;
  CVector3f CStack_178;
  CVector3f CStack_16c;
  float fStack_160;
  float afStack_15c [4];
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  CVector3f CStack_13c;
  CVector3i CStack_130;
  CVector3i CStack_124;
  float fStack_118;
  float afStack_114 [2];
  CVector3i CStack_10c;
  CVector3i CStack_100;
  float fStack_f4;
  float afStack_f0 [2];
  CVector3i CStack_e8;
  float fStack_dc;
  float afStack_d8 [2];
  CVector3f CStack_d0;
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  CVector3i CStack_ac;
  float fStack_a0;
  float afStack_9c [6];
  float fStack_84;
  float fStack_80;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3i CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float afStack_48 [5];
  float fStack_34;
  int local_30 [2];
  CVector3i local_28;
  CVector3i CStack_1c;
  
  bVar11 = 0;
  if ((g_BYTE_01cb394c & 1) == 0) {
    g_BYTE_01cb394c = g_BYTE_01cb394c | 1;
  }
  local_30[1] = 0x3e800000;
  if ((g_BYTE_01cb394c & 2) == 0) {
    g_BYTE_01cb394c = g_BYTE_01cb394c | 2;
  }
  local_28.y = g_MouseX;
  local_28.x = g_MouseY;
  local_28.z = g_INT_006141b8;
  afStack_48[3] = 4.0;
  local_30[0] = g_INT_006141bc;
  if (0x1e0 < g_INT_006141bc) {
    local_28.y = (g_MouseX * g_INT_006141bc) / 0x1e0;
    local_28.x = (g_MouseY * g_INT_006141bc) / 0x1e0;
    local_30[0] = 0x1e0;
    local_28.z = 0x280;
  }
  if (local_28.y < 2) {
    local_28.y = 2;
  }
  if (g_INT_006141b8 + -2 < local_28.y) {
    local_28.y = g_INT_006141b8 + -2;
  }
  if (local_28.x < 2) {
    local_28.x = 2;
  }
  if (g_INT_006141bc + -2 < local_28.x) {
    local_28.x = g_INT_006141bc + -2;
  }
  memset(player_control,0,0x34);
  piVar10 = &(player_control->action_state).use_item;
  if (g_PrevKeyboardState[this_ptr->key_use_item] == g_KeyboardState[this_ptr->key_use_item]) {
    *piVar10 = 0;
  }
  else {
    *piVar10 = (uint)(byte)g_KeyboardState[this_ptr->key_use_item];
  }
  piVar10 = &(player_control->action_state).light;
  if (g_PrevKeyboardState[this_ptr->key_light] == g_KeyboardState[this_ptr->key_light]) {
    *piVar10 = 0;
  }
  else {
    *piVar10 = (uint)(byte)g_KeyboardState[this_ptr->key_light];
  }
  piVar10 = &(player_control->action_state).draw;
  if (g_PrevKeyboardState[this_ptr->key_draw] == g_KeyboardState[this_ptr->key_draw]) {
    *piVar10 = 0;
  }
  else {
    *piVar10 = (uint)(byte)g_KeyboardState[this_ptr->key_draw];
  }
  if (g_PrevKeyboardState[this_ptr->key_drop] == g_KeyboardState[this_ptr->key_drop]) {
    player_control->drop_item = 0;
  }
  else {
    player_control->drop_item = (uint)(byte)g_KeyboardState[this_ptr->key_drop];
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_next_weapon);
  if ((iVar5 != 0) &&
     ((pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          ((CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4],
                           g_CDocClassInfo.name_hash), pCVar6 == (CDemonActor *)0x0 ||
      (pCVar6[0xde].particle_systems[1].position.x <= 0.0)))) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004db9d0
              (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories,(CDemonActor *)0x0,5,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_prev_weapon);
  if ((iVar5 != 0) &&
     ((pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          ((CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4],
                           g_CDocClassInfo.name_hash), pCVar6 == (CDemonActor *)0x0 ||
      (pCVar6[0xde].particle_systems[1].position.x <= 0.0)))) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004db9d0
              (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories,(CDemonActor *)0x0,5,-1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_next_item);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbb50
              (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_prev_item);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbb50
              (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories,-1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_next_ammo);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004dbc60
              (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_item_desc);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_toggleDetailView_FUN_004defa0
              (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_1);
  if ((iVar5 != 0) &&
     ((pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          ((CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4],
                           g_CDocClassInfo.name_hash), pCVar6 == (CDemonActor *)0x0 ||
      (pCVar6[0xde].particle_systems[1].position.x <= 0.0)))) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004db9d0
              (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories,(CDemonActor *)0x0,0,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_2);
  if ((iVar5 != 0) &&
     ((pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          ((CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4],
                           g_CDocClassInfo.name_hash), pCVar6 == (CDemonActor *)0x0 ||
      (pCVar6[0xde].particle_systems[1].position.x <= 0.0)))) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004db9d0
              (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories,(CDemonActor *)0x0,3,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_3);
  if ((iVar5 != 0) &&
     ((pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          ((CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4],
                           g_CDocClassInfo.name_hash), pCVar6 == (CDemonActor *)0x0 ||
      (pCVar6[0xde].particle_systems[1].position.x <= 0.0)))) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004db9d0
              (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories,(CDemonActor *)0x0,6,1);
  }
  if ((g_INT_01cb811c != 0) ||
     (iVar5 = core_script_cpp_CScript_getLetterboxHeight_FUN_00521840(g_CScriptPtr), 2 < iVar5)) {
    g_CLocation_01cb3924.area_id = 0;
    g_INT_01cb3920 = 0;
    g_MouseButtonFlags.dword = 0;
    g_CDemonActor_PTR_01cb3948 = (CDemonActor *)0x0;
    g_INT_01cb811c = 0;
  }
  pCStack00000014 =
       (CDemonActor *)
       (*(((g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.vtable._uh)->_uh).isWeaponDrawn)
                 (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]);
  pCStack00000018 = (CDemonActor *)0x0;
  if ((g_INT_01cb3920 == 0) && (g_MouseButtonFlags.dword == 1)) {
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0043c6b0
              (&g_CDemonCameraInstance,in_stack_00000028,in_stack_00000024,&local_28);
    pCVar12 = &CStack_130;
    CStack_130.x = local_28.x;
    *(uint *)((int)&CStack_130 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&local_28 + (uint)bVar11 * -8 + 4);
    *(uint *)((int)&CStack_130 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
         *(uint *)((int)&local_28 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8);
    core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780
              (&g_CDemonCameraInstance,pCVar12,&CStack_100);
    CStack_130.x = CStack_100.x;
    *(uint *)((int)&CStack_130 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&CStack_100 + (uint)bVar11 * -8 + 4);
    *(uint *)((int)&CStack_130 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
         *(uint *)((int)&CStack_100 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    CStack_7c.x = (float)CStack_130.x * 0.00390625f;
    CStack_7c.y = (float)CStack_130.y * 0.00390625f;
    CStack_7c.z = (float)CStack_130.z * 0.00390625f;
    iVar5 = 1;
    fStack_34 = g_CDemonCameraInstance.base.position.f.x;
    local_30[(uint)bVar11 * -2] = *(int *)((int)&g_CDemonCameraInstance + (uint)bVar11 * -8 + 8);
    local_30[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         *(int *)((uint)bVar11 * -8 + 0x1fc7844 + (uint)bVar11 * -8);
    CStack_70.x = fStack_34;
    *(int *)((int)&CStack_70 + (uint)bVar11 * -8 + 4) = local_30[(uint)bVar11 * -2];
    this_ptr_02 = g_CDemonSetPtr;
    *(int *)((int)&CStack_70 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         local_30[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(this_ptr_02,iVar5);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
              (g_CDemonSetPtr,(CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]);
    fVar7 = core_setcolid_cpp_CDemonSet_raycast_FUN_00535ee0(g_CDemonSetPtr,&CStack_70,&CStack_7c);
    if ((0.0 <= fVar7) && ((int)fVar7 < 0x3f800001)) {
      pCStack00000018 = g_CDemonSetPtr->collision_actor;
    }
  }
  if ((pCStack00000014 == (CDemonActor *)0x0) || ((g_MouseButtonFlags.dword & 2) == 0)) {
    if (pCStack00000014 == (CDemonActor *)0x0) {
      g_CDemonActor_PTR_01cb3948 = pCStack00000014;
    }
  }
  else {
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0043c6b0
              (&g_CDemonCameraInstance,in_stack_00000028,in_stack_00000024,&CStack_ac);
    pCVar12 = &CStack_184;
    CStack_184.x = CStack_ac.x;
    *(uint *)((int)&CStack_184 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&CStack_ac + (uint)bVar11 * -8 + 4);
    *(uint *)((int)&CStack_184 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
         *(uint *)((int)&CStack_ac + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780
              (&g_CDemonCameraInstance,pCVar12,&CStack_1c);
    CStack_184.x = CStack_1c.x;
    *(uint *)((int)&CStack_184 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&CStack_1c + (uint)bVar11 * -8 + 4);
    *(uint *)((int)&CStack_184 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
         *(uint *)((int)&CStack_1c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    CStack_16c.x = (float)CStack_184.x * 0.00390625f;
    CStack_16c.y = (float)CStack_184.y * 0.00390625f;
    CStack_16c.z = (float)CStack_184.z * 0.00390625f;
    fStack_a0 = g_CDemonCameraInstance.base.position.f.x;
    afStack_9c[(uint)bVar11 * -2] = *(float *)((int)&g_CDemonCameraInstance + (uint)bVar11 * -8 + 8)
    ;
    afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         *(float *)((uint)bVar11 * -8 + 0x1fc7844 + (uint)bVar11 * -8);
    CStack_b8.x = fStack_a0;
    *(float *)((int)&CStack_b8 + (uint)bVar11 * -8 + 4) = afStack_9c[(uint)bVar11 * -2];
    *(float *)((int)&CStack_b8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
              (g_CDemonSetPtr,(CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]);
    player_control =
         (SPlayerInput *)
         core_setcolid_cpp_CDemonSet_raycast_FUN_00535ee0(g_CDemonSetPtr,&CStack_b8,&CStack_16c);
    if (((0.0 <= (float)player_control) && ((int)player_control < 0x3f800001)) &&
       (pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (g_CDemonSetPtr->collision_actor,g_CEnemyClassInfo.name_hash),
       pCVar6 != (CDemonActor *)0x0)) {
      g_CDemonActor_PTR_01cb3948 = pCVar6;
    }
    (player_control->action_state).fire = 1;
  }
  if ((g_INT_01cb3920 == 0) && (g_MouseButtonFlags.dword == 1)) {
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0043c6b0
              (&g_CDemonCameraInstance,in_stack_00000028,in_stack_00000024,&CStack_10c);
    CStack_64.x = CStack_10c.x;
    *(uint *)((int)&CStack_64 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&CStack_10c + (uint)bVar11 * -8 + 4);
    *(uint *)((int)&CStack_64 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
         *(uint *)((int)&CStack_10c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    if (pCStack00000018 == (CDemonActor *)0x0) {
      if (((in_stack_00000028 < 0x20) || (in_stack_0000002c + -0x20 < in_stack_00000028)) ||
         ((in_stack_00000024 < 0x20 || (in_stack_0000001c + -0x20 < in_stack_00000024)))) {
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780
                  (&g_CDemonCameraInstance,&CStack_64,&CStack_e8);
        CStack_64.x = CStack_e8.x;
        *(uint *)((int)&CStack_64 + (uint)bVar11 * -8 + 4) =
             *(uint *)((int)&CStack_e8 + (uint)bVar11 * -8 + 4);
        *(uint *)((int)&CStack_64 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
             *(uint *)((int)&CStack_e8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        fStack_58 = (float)CStack_64.x * 0.00390625f;
        fStack_54 = (float)CStack_64.y * 0.00390625f;
        fStack_50 = (float)CStack_64.z * 0.00390625f;
        pCVar1 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
        fStack_1a8 = (float)CStack_64.x * 0.00390625f - (pCVar1->base).base.location.position.x
        ;
        fStack_1a4 = (float)CStack_64.y * 0.00390625f - (pCVar1->base).base.location.position.y
        ;
        fStack_1a0 = (float)CStack_64.z * 0.00390625f - (pCVar1->base).base.location.position.z
        ;
        afStack_9c[2] = fStack_1a8;
        afStack_9c[(uint)bVar11 * -2 + 3] = (&stack0xfffffe38)[(uint)bVar11 * -2 + 9];
        fVar4 = fStack_50;
        fVar3 = fStack_54;
        fVar7 = fStack_58;
        afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
             (&stack0xfffffe38)[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
        this_ptr = (CGame *)SQRT(afStack_9c[4] * afStack_9c[4] + afStack_9c[2] * afStack_9c[2]);
        afStack_9c[3] = 0.0;
        if ((float)this_ptr <= 0.0) {
          afStack_9c[2] = 0.0;
          afStack_9c[4] = 0.0;
        }
        else {
          fVar2 = 1.0 / (float)this_ptr;
          afStack_9c[2] = afStack_9c[2] * fVar2;
          afStack_9c[3] = fVar2 * 0.0;
          afStack_9c[4] = afStack_9c[4] * fVar2;
        }
        afStack_15c[2] = afStack_9c[2] * in_stack_00000010;
        afStack_15c[3] = afStack_9c[3] * in_stack_00000010;
        fStack_14c = afStack_9c[4] * in_stack_00000010;
        fStack_148 = afStack_9c[2] * in_stack_00000010;
        afStack_15c[(uint)bVar11 * -2 + 6] = afStack_15c[(uint)bVar11 * -2 + 3];
        afStack_15c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
             afStack_15c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        fStack_1c0 = fVar7 + fStack_148;
        fStack_1bc = fVar3 + fStack_144;
        fStack_1b8 = fVar4 + fStack_140;
        afStack_48[2] = fVar7 + fStack_148;
        afStack_48[(uint)bVar11 * -2 + 3] = (&stack0xfffffe38)[(uint)bVar11 * -2 + 3];
        afStack_48[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
             (&stack0xfffffe38)[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        if ((float *)&stack0x00000000 != &g_CDemonLightInstance.base.base.rotation_matrix.m[0].y) {
          g_CLocation_01cb3924.position.x = afStack_48[2];
          g_CLocation_01cb3924.position.y = afStack_48[3];
          g_CLocation_01cb3924.position.z = afStack_48[4];
        }
      }
      else {
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780
                  (&g_CDemonCameraInstance,&CStack_64,&CStack_124);
        CStack_64.x = CStack_124.x;
        *(uint *)((int)&CStack_64 + (uint)bVar11 * -8 + 4) =
             *(uint *)((int)&CStack_124 + (uint)bVar11 * -8 + 4);
        *(uint *)((int)&CStack_64 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
             *(uint *)((int)&CStack_124 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        g_CLocation_01cb3924.position.x = (float)CStack_64.x * 0.00390625f;
        g_CLocation_01cb3924.position.y = (float)CStack_64.y * 0.00390625f;
        g_CLocation_01cb3924.position.z = (float)CStack_64.z * 0.00390625f;
      }
    }
    else {
      this_ptr_00 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                       (pCStack00000018,g_CDoorClassInfo.name_hash);
      if (this_ptr_00 == (CDoor *)0x0) {
        if (&pCStack00000018->location != &g_CLocation_01cb3924) {
          g_CLocation_01cb3924.position.x = (pCStack00000018->location).position.x;
          g_CLocation_01cb3924.position.z = (pCStack00000018->location).position.z;
          g_CLocation_01cb3924.position.y = (pCStack00000018->location).position.y;
        }
      }
      else {
        core_door_cpp_CDoor_getHandlePosition_FUN_0045fec0(this_ptr_00,&CStack_c4);
        fStack_19c = CStack_c4.x;
        (&stack0xfffffe38)[(uint)bVar11 * -2 + 0xc] =
             *(float *)((int)&CStack_c4 + (uint)bVar11 * -8 + 4);
        (&stack0xfffffe38)[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
             *(float *)((int)&CStack_c4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.camera_origin.y) {
          g_CLocation_01cb3924.position.x = fStack_19c;
          g_CLocation_01cb3924.position.y = fStack_198;
          g_CLocation_01cb3924.position.z = fStack_194;
        }
      }
    }
    g_FLOAT_01cb3940 = 0.0;
    g_CLocation_01cb3924.area_id = 1;
    pCVar1 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
    fStack_dc = g_CLocation_01cb3924.position.x - (pCVar1->base).base.location.position.x;
    afStack_d8[0] = g_CLocation_01cb3924.position.y - (pCVar1->base).base.location.position.y;
    afStack_d8[1] = g_CLocation_01cb3924.position.z - (pCVar1->base).base.location.position.z;
    fStack_118 = fStack_dc;
    afStack_114[(uint)bVar11 * -2] = afStack_d8[(uint)bVar11 * -2];
    afStack_114[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_d8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    if (SQRT(afStack_114[1] * afStack_114[1] +
             fStack_118 * fStack_118 + afStack_114[0] * afStack_114[0]) <= 10.0f) {
      g_INT_01cb3944 = 0;
    }
    else {
      g_INT_01cb3944 = 1;
    }
  }
  pCVar1 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
  afStack_9c[5] = (pCVar1->base).base.location.position.x - g_CLocation_01cb3924.position.x;
  fStack_84 = (pCVar1->base).base.location.position.y - g_CLocation_01cb3924.position.y;
  fStack_80 = (pCVar1->base).base.location.position.z - g_CLocation_01cb3924.position.z;
  fStack_160 = afStack_9c[5];
  afStack_15c[(uint)bVar11 * -2] = afStack_9c[(uint)bVar11 * -2 + 6];
  afStack_15c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
  if ((g_CLocation_01cb3924.area_id != 0) && (g_CDemonActor_PTR_01cb3948 == (CDemonActor *)0x0)) {
    if ((SQRT(afStack_15c[1] * afStack_15c[1] +
              fStack_160 * fStack_160 + afStack_15c[0] * afStack_15c[0]) < 2.0f) &&
       (g_CLocation_01cb3924.area_id = (int)g_CDemonActor_PTR_01cb3948,
       pCStack00000014 == (CDemonActor *)0x0)) {
      (player_control->action_state).fire = 1;
    }
    pCVar1 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
    fStack_1b4 = g_FLOAT_01cb3934 - (pCVar1->base).base.location.position.x;
    fStack_1b0 = g_FLOAT_01cb3938 - (pCVar1->base).base.location.position.y;
    fStack_1ac = g_FLOAT_01cb393c - (pCVar1->base).base.location.position.z;
    fStack_190 = fStack_1b4;
    (&stack0xfffffe38)[(uint)bVar11 * -2 + 0xf] = (&stack0xfffffe38)[(uint)bVar11 * -2 + 6];
    (&stack0xfffffe38)[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
         (&stack0xfffffe38)[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    if (0.1f <=
        SQRT(fStack_188 * fStack_188 + fStack_190 * fStack_190 + fStack_18c * fStack_18c)) {
      g_FLOAT_01cb3940 = 0.0;
    }
    else {
      g_FLOAT_01cb3940 = this_ptr->delta_time_float + g_FLOAT_01cb3940;
      if ((0x3f7fffff < (int)g_FLOAT_01cb3940) &&
         (g_CLocation_01cb3924.area_id = 0, pCStack00000014 == (CDemonActor *)0x0)) {
        (player_control->action_state).fire = 1;
      }
    }
    this_ptr_01 = core_path_cpp_getPathMap_FUN_00513ea0(&g_CLocation_01cb3924);
    iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                      (this_ptr_01,
                       &(g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.location.position,
                       &CStack_d0,0);
    if (iVar5 == 0) {
      g_CLocation_01cb3924.area_id = 0;
    }
    else {
      fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                        (CStack_d0.y -
                         (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.orient.vec.y);
      fVar7 = fVar7 * 0.3183099f * (float)4;
      player_control->turn_speed = fVar7;
      if (fVar7 < -in_stack_00000020) {
        player_control->turn_speed = -in_stack_00000020;
      }
      if (in_stack_00000020 < player_control->turn_speed) {
        player_control->turn_speed = in_stack_00000020;
      }
      iVar5 = g_INT_01cb3944;
      (player_control->action_state).walk = 1;
      if (iVar5 != 0) {
        (player_control->action_state).run = 1;
      }
    }
  }
  if (g_CDemonActor_PTR_01cb3948 != (CDemonActor *)0x0) {
    fStack_1c8 = (g_CDemonActor_PTR_01cb3948->location).position.y -
                 (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.location.position.y;
    fStack_1c4 = (g_CDemonActor_PTR_01cb3948->location).position.z -
                 (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.location.position.z;
    *(float *)(&stack0xfffffff4 + (uint)bVar11 * -8) = (&stack0xfffffe38)[(uint)bVar11 * -2];
    *(float *)(&stack0xfffffff8 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
         (&stack0xfffffe38)[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
              ((CVector3f *)&stack0xfffffff0,&CStack_13c);
    fStack_4c = CStack_13c.x;
    afStack_48[(uint)bVar11 * -2] = *(float *)((int)&CStack_13c + (uint)bVar11 * -8 + 4);
    afStack_48[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         *(float *)((int)&CStack_13c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                      (afStack_48[0] -
                       (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.orient.vec.y);
    fVar7 = fVar7 * 0.3183099f * (float)4;
    fStack00000030 = -in_stack_00000020;
    player_control->turn_speed = fVar7;
    if (fVar7 < fStack00000030) {
      player_control->turn_speed = fStack00000030;
    }
    if (in_stack_00000020 < player_control->turn_speed) {
      player_control->turn_speed = in_stack_00000020;
    }
    if (g_CLocation_01cb3924.area_id != 0) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                ((CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4],
                 &g_CLocation_01cb3924.position,&CStack_178);
      fStack_f4 = CStack_178.x;
      afStack_f0[(uint)bVar11 * -2] = *(float *)((int)&CStack_178 + (uint)bVar11 * -8 + 4);
      afStack_f0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           *(float *)((int)&CStack_178 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      if (0x40000000 < (int)fStack_f4) {
        (player_control->action_state).run = 1;
        player_control->strafe_speed = 1.0;
      }
      if (fStack_f4 < -2.0f) {
        (player_control->action_state).run = 1;
        player_control->strafe_speed = -1.0;
      }
      if (0x40000000 < (int)afStack_f0[1]) {
        (player_control->action_state).run = 1;
        (player_control->action_state).walk = 1;
      }
      if (afStack_f0[1] < -2.0f) {
        (player_control->action_state).run = 1;
        (player_control->action_state).backup = 1;
      }
    }
    EVar8 = (*(((g_CDemonActor_PTR_01cb3948->vtable)._uc)->_uc).getDeathState)
                      ((CCharacter *)g_CDemonActor_PTR_01cb3948);
    if (EVar8 != DEATH_STATE_ALIVE) {
      g_CDemonActor_PTR_01cb3948 = (CDemonActor *)0x0;
    }
  }
  g_INT_01cb3920 = g_MouseButtonFlags.dword;
  pCVar1 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
  pCVar9 = &(pCVar1->base).base.location;
  if (pCVar9 != (CLocation *)&g_FLOAT_01cb3934) {
    g_FLOAT_01cb3938 = (pCVar1->base).base.location.position.y;
    g_FLOAT_01cb393c = (pCVar1->base).base.location.position.z;
    g_FLOAT_01cb3934 = (pCVar9->position).x;
    return;
  }
  return;
}
