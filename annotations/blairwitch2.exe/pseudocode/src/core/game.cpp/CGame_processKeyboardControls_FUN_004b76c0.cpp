// Name: core_game.cpp_CGame_processKeyboardControls_FUN_004b76c0
// Address: 004b76c0
// Address Range: [[004b76c0, 004b7fb6]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processKeyboardControls_FUN_004b76c0(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processKeyboardControls_FUN_004b76c0(CGame *this_ptr,SPlayerInput *player_control)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  EDeathState EVar4;
  int iVar5;
  CDemonActor *pCVar6;
  byte bVar7;
  
  if (this_ptr->screen_clear_condition != 0) {
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIM_LBUTTON);
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIM_RBUTTON);
  }
  player_control->strafe_speed = 0.0;
  pfVar1 = &player_control->strafe_speed;
  if (g_KeyboardState[this_ptr->key_strafe_left] == '\0') {
    if (((g_KeyboardState[this_ptr->key_strafe_right] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
       (*pfVar1 = g_CGamePtr->delta_time_float / 0.01f + *pfVar1,
       0x3f800000 < (int)*pfVar1)) {
      *pfVar1 = 1.0;
    }
  }
  else if ((-1.0f < *pfVar1) &&
          (fVar3 = *pfVar1 - g_CGamePtr->delta_time_float / 0.01f, *pfVar1 = fVar3,
          fVar3 < -1.0f)) {
    *pfVar1 = -1.0;
  }
  if (g_KeyboardState[this_ptr->key_strafe] == '\0') {
    if ((g_KeyboardState[this_ptr->key_left] != '\0') ||
       (g_KeyboardState[this_ptr->key_right] != '\0')) {
      fVar3 = (float)this_ptr->x_mouse_sensitivity * (float)0.29999999999999999 *
              (float)1.52587890625e-05;
      pfVar1 = &player_control->turn_speed;
      if (g_KeyboardState[this_ptr->key_left] == '\0') {
        if (((g_KeyboardState[this_ptr->key_right] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
           (*pfVar1 = (g_CGamePtr->delta_time_float * 0.25f) / fVar3 + *pfVar1,
           0x3e800000 < (int)*pfVar1)) {
          *pfVar1 = 0.25;
        }
      }
      else if ((-0.25f < *pfVar1) &&
              (fVar3 = *pfVar1 - (g_CGamePtr->delta_time_float * 0.25f) / fVar3,
              *pfVar1 = fVar3, fVar3 < -0.25f)) {
        *pfVar1 = -0.25;
      }
      goto LAB_004b77cb;
    }
    fVar3 = (g_CGamePtr->delta_time_float * 0.25f) / 0.05f;
    pfVar1 = &player_control->turn_speed;
    if (0.0 <= *pfVar1) {
      *pfVar1 = *pfVar1 - fVar3;
      fVar3 = *pfVar1;
      goto joined_r0x004b7da7;
    }
    fVar3 = *pfVar1 + fVar3;
LAB_004b77b8:
    player_control->turn_speed = fVar3;
    if (player_control->turn_speed <= 0.0) goto LAB_004b77cb;
  }
  else {
    pfVar1 = &player_control->strafe_speed;
    if (g_KeyboardState[this_ptr->key_left] == '\0') {
      if (((g_KeyboardState[this_ptr->key_right] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
         (*pfVar1 = g_CGamePtr->delta_time_float / 0.01f + *pfVar1,
         0x3f800000 < (int)*pfVar1)) {
        *pfVar1 = 1.0;
      }
    }
    else if ((-1.0f < *pfVar1) &&
            (fVar3 = *pfVar1 - g_CGamePtr->delta_time_float / 0.01f, *pfVar1 = fVar3,
            fVar3 < -1.0f)) {
      *pfVar1 = -1.0;
    }
    fVar3 = (g_CGamePtr->delta_time_float * 0.25f) / 0.05f;
    pfVar1 = &player_control->turn_speed;
    if (*pfVar1 < 0.0) {
      fVar3 = *pfVar1 + fVar3;
      goto LAB_004b77b8;
    }
    *pfVar1 = *pfVar1 - fVar3;
    fVar3 = *pfVar1;
joined_r0x004b7da7:
    if (0.0 <= fVar3) goto LAB_004b77cb;
  }
  player_control->turn_speed = 0.0;
LAB_004b77cb:
  if ((g_KeyboardState[this_ptr->key_point_up] == '\0') &&
     (g_KeyboardState[this_ptr->key_point_down] == '\0')) {
    fVar3 = (g_CGamePtr->delta_time_float * 0.25f) / 0.1f;
    pfVar1 = &player_control->look_up_down_speed;
    if (0.0 <= *pfVar1) {
      *pfVar1 = *pfVar1 - fVar3;
      if (*pfVar1 < 0.0) {
        *pfVar1 = 0.0;
      }
    }
    else {
      *pfVar1 = *pfVar1 + fVar3;
      if (0.0 < *pfVar1) {
        *pfVar1 = 0.0;
      }
    }
  }
  else {
    fVar3 = (float)this_ptr->y_mouse_sensitivity * (float)0.20000000000000001 *
            (float)1.52587890625e-05;
    pfVar1 = &player_control->look_up_down_speed;
    if (g_KeyboardState[this_ptr->key_point_up] == '\0') {
      if (((g_KeyboardState[this_ptr->key_point_down] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
         (*pfVar1 = (g_CGamePtr->delta_time_float * 0.25f) / fVar3 + *pfVar1,
         0x3e800000 < (int)*pfVar1)) {
        *pfVar1 = 0.25;
      }
    }
    else if ((-0.25f < *pfVar1) &&
            (fVar3 = *pfVar1 - (g_CGamePtr->delta_time_float * 0.25f) / fVar3,
            *pfVar1 = fVar3, fVar3 < -0.25f)) {
      *pfVar1 = -0.25;
    }
  }
  if (this_ptr->always_run == 0) {
    bVar7 = g_KeyboardState[this_ptr->key_run];
  }
  else {
    bVar7 = g_KeyboardState[this_ptr->key_run] == '\0';
  }
  (player_control->action_state).run = (uint)bVar7;
  if (g_PrevKeyboardState[this_ptr->key_walk] != g_KeyboardState[this_ptr->key_walk]) {
    (player_control->action_state).walk = (uint)(byte)g_KeyboardState[this_ptr->key_walk];
  }
  if (g_PrevKeyboardState[this_ptr->key_backup] != g_KeyboardState[this_ptr->key_backup]) {
    (player_control->action_state).backup = (uint)(byte)g_KeyboardState[this_ptr->key_backup];
  }
  EVar4 = (*(((g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.vtable._uc)->_uc).
            getDeathState)(&g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base);
  if (EVar4 == DEATH_STATE_ALIVE) {
    if (g_PrevKeyboardState[this_ptr->key_fire] != g_KeyboardState[this_ptr->key_fire]) {
      (player_control->action_state).fire = (uint)(byte)g_KeyboardState[this_ptr->key_fire];
    }
  }
  else {
    (player_control->action_state).fire = 0;
  }
  piVar2 = &(player_control->action_state).use_item;
  if (g_PrevKeyboardState[this_ptr->key_use_item] == g_KeyboardState[this_ptr->key_use_item]) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = (uint)(byte)g_KeyboardState[this_ptr->key_use_item];
  }
  piVar2 = &(player_control->action_state).light;
  if (g_PrevKeyboardState[this_ptr->key_light] == g_KeyboardState[this_ptr->key_light]) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = (uint)(byte)g_KeyboardState[this_ptr->key_light];
  }
  piVar2 = &(player_control->action_state).draw;
  if (g_PrevKeyboardState[this_ptr->key_draw] == g_KeyboardState[this_ptr->key_draw]) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = (uint)(byte)g_KeyboardState[this_ptr->key_draw];
  }
  piVar2 = &(player_control->action_state).quick_turn;
  if (g_PrevKeyboardState[this_ptr->key_quick_turn] == g_KeyboardState[this_ptr->key_quick_turn]) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = (uint)(byte)g_KeyboardState[this_ptr->key_quick_turn];
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
    return;
  }
  return;
}
