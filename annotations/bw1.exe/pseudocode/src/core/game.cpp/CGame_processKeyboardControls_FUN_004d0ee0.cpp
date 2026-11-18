// Name: core_game.cpp_CGame_processKeyboardControls_FUN_004d0ee0
// Address: 004d0ee0
// Address Range: [[004d0ee0, 004d175b]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processKeyboardControls_FUN_004d0ee0(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processKeyboardControls_FUN_004d0ee0(CGame *this_ptr,SPlayerInput *player_control)

{
  float *pfVar1;
  float fVar2;
  EDeathState EVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  
  if (this_ptr->screen_clear_condition != 0) {
    (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIM_LBUTTON);
    (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIM_RBUTTON);
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
          (fVar2 = *pfVar1 - g_CGamePtr->delta_time_float / 0.01f, *pfVar1 = fVar2,
          fVar2 < -1.0f)) {
    *pfVar1 = -1.0;
  }
  if (g_KeyboardState[this_ptr->key_strafe] == '\0') {
    if ((g_KeyboardState[this_ptr->key_left] != '\0') ||
       (g_KeyboardState[this_ptr->key_right] != '\0')) {
      fVar2 = (float)this_ptr->x_mouse_sensitivity * (float)0.29999999999999999 *
              (float)1.52587890625e-05;
      pfVar1 = &player_control->turn_speed;
      if (g_KeyboardState[this_ptr->key_left] == '\0') {
        if (((g_KeyboardState[this_ptr->key_right] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
           (*pfVar1 = (g_CGamePtr->delta_time_float * 0.25f) / fVar2 + *pfVar1,
           0x3e800000 < (int)*pfVar1)) {
          *pfVar1 = 0.25;
        }
      }
      else if ((-0.25f < *pfVar1) &&
              (fVar2 = *pfVar1 - (g_CGamePtr->delta_time_float * 0.25f) / fVar2,
              *pfVar1 = fVar2, fVar2 < -0.25f)) {
        *pfVar1 = -0.25;
      }
      goto LAB_004d0feb;
    }
    fVar2 = (g_CGamePtr->delta_time_float * 0.25f) / 0.05f;
    pfVar1 = &player_control->turn_speed;
    if (0.0 <= *pfVar1) {
      *pfVar1 = *pfVar1 - fVar2;
      fVar2 = *pfVar1;
      goto joined_r0x004d1617;
    }
    fVar2 = *pfVar1 + fVar2;
LAB_004d0fd8:
    player_control->turn_speed = fVar2;
    if (player_control->turn_speed <= 0.0) goto LAB_004d0feb;
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
            (fVar2 = *pfVar1 - g_CGamePtr->delta_time_float / 0.01f, *pfVar1 = fVar2,
            fVar2 < -1.0f)) {
      *pfVar1 = -1.0;
    }
    fVar2 = (g_CGamePtr->delta_time_float * 0.25f) / 0.05f;
    pfVar1 = &player_control->turn_speed;
    if (*pfVar1 < 0.0) {
      fVar2 = *pfVar1 + fVar2;
      goto LAB_004d0fd8;
    }
    *pfVar1 = *pfVar1 - fVar2;
    fVar2 = *pfVar1;
joined_r0x004d1617:
    if (0.0 <= fVar2) goto LAB_004d0feb;
  }
  player_control->turn_speed = 0.0;
LAB_004d0feb:
  if ((g_KeyboardState[this_ptr->key_point_up] == '\0') &&
     (g_KeyboardState[this_ptr->key_point_down] == '\0')) {
    fVar2 = (g_CGamePtr->delta_time_float * 0.25f) / 0.1f;
    pfVar1 = &player_control->look_up_down_speed;
    if (0.0 <= *pfVar1) {
      *pfVar1 = *pfVar1 - fVar2;
      if (*pfVar1 < 0.0) {
        *pfVar1 = 0.0;
      }
    }
    else {
      *pfVar1 = *pfVar1 + fVar2;
      if (0.0 < *pfVar1) {
        *pfVar1 = 0.0;
      }
    }
  }
  else {
    fVar2 = (float)this_ptr->y_mouse_sensitivity * (float)0.20000000000000001 *
            (float)1.52587890625e-05;
    pfVar1 = &player_control->look_up_down_speed;
    if (g_KeyboardState[this_ptr->key_point_up] == '\0') {
      if (((g_KeyboardState[this_ptr->key_point_down] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
         (*pfVar1 = (g_CGamePtr->delta_time_float * 0.25f) / fVar2 + *pfVar1,
         0x3e800000 < (int)*pfVar1)) {
        *pfVar1 = 0.25;
      }
    }
    else if ((-0.25f < *pfVar1) &&
            (fVar2 = *pfVar1 - (g_CGamePtr->delta_time_float * 0.25f) / fVar2,
            *pfVar1 = fVar2, fVar2 < -0.25f)) {
      *pfVar1 = -0.25;
    }
  }
  if (this_ptr->always_run == 0) {
    bVar6 = g_KeyboardState[this_ptr->key_run];
  }
  else {
    bVar6 = g_KeyboardState[this_ptr->key_run] == '\0';
  }
  (player_control->action_state).run = (uint)bVar6;
  if (g_PrevKeyboardState[this_ptr->key_walk] != g_KeyboardState[this_ptr->key_walk]) {
    (player_control->action_state).walk = (uint)(byte)g_KeyboardState[this_ptr->key_walk];
  }
  iVar4 = this_ptr->key_backup;
  if (g_PrevKeyboardState[iVar4] != g_KeyboardState[iVar4]) {
    (player_control->action_state).backup = (uint)(byte)g_KeyboardState[iVar4];
  }
  EVar3 = (*(((g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.vtable._uc)->_uc).
            getDeathState)(&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base);
  if (EVar3 == DEATH_STATE_ALIVE) {
    iVar4 = this_ptr->key_fire;
    if (g_PrevKeyboardState[iVar4] != g_KeyboardState[iVar4]) {
      (player_control->action_state).fire = (uint)(byte)g_KeyboardState[iVar4];
    }
  }
  else {
    (player_control->action_state).fire = 0;
  }
  piVar5 = &(player_control->action_state).use_item;
  if (g_PrevKeyboardState[this_ptr->key_use_item] == g_KeyboardState[this_ptr->key_use_item]) {
    *piVar5 = 0;
  }
  else {
    *piVar5 = (uint)(byte)g_KeyboardState[this_ptr->key_use_item];
  }
  piVar5 = &(player_control->action_state).light;
  if (g_PrevKeyboardState[this_ptr->key_light] == g_KeyboardState[this_ptr->key_light]) {
    *piVar5 = 0;
  }
  else {
    *piVar5 = (uint)(byte)g_KeyboardState[this_ptr->key_light];
  }
  piVar5 = &(player_control->action_state).draw;
  if (g_PrevKeyboardState[this_ptr->key_draw] == g_KeyboardState[this_ptr->key_draw]) {
    *piVar5 = 0;
  }
  else {
    *piVar5 = (uint)(byte)g_KeyboardState[this_ptr->key_draw];
  }
  piVar5 = &(player_control->action_state).jump;
  if (g_PrevKeyboardState[this_ptr->key_jump] == g_KeyboardState[this_ptr->key_jump]) {
    *piVar5 = 0;
  }
  else {
    *piVar5 = (uint)(byte)g_KeyboardState[this_ptr->key_jump];
  }
  iVar4 = this_ptr->key_quick_turn;
  piVar5 = &(player_control->action_state).quick_turn;
  if (g_PrevKeyboardState[iVar4] == g_KeyboardState[iVar4]) {
    *piVar5 = 0;
  }
  else {
    *piVar5 = (uint)(byte)g_KeyboardState[iVar4];
  }
  iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_next_weapon);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,(CDemonActor *)0x0,5,1);
  }
  iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_prev_weapon);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,(CDemonActor *)0x0,5,-1);
  }
  iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_next_item);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004f8ec0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,1);
  }
  iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_prev_item);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004f8ec0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,-1);
  }
  iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_next_ammo);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004f8fe0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,1);
  }
  iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_item_desc);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_toggleDetailView_FUN_004fc370
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory);
  }
  iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_weapon_1);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,(CDemonActor *)0x0,0,1);
  }
  iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_weapon_2);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,(CDemonActor *)0x0,1,1);
  }
  iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_weapon_3);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,(CDemonActor *)0x0,2,1);
  }
  iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_weapon_4);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,(CDemonActor *)0x0,4,1);
  }
  iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_weapon_5);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,(CDemonActor *)0x0,3,1);
  }
  iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_0061f2a4,this_ptr->key_infrared);
  if (iVar4 == 0) {
    return;
  }
  (*(((g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.vtable._uh)->_uh).toggleGoggles)
            (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]);
  return;
}
