// Name: core_game.cpp_CGame_processKeyboardControls_FUN_004b9960
// Address: 004b9960
// Address Range: [[004b9960, 004ba213]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processKeyboardControls_FUN_004b9960(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processKeyboardControls_FUN_004b9960(CGame *this_ptr,SPlayerInput *player_control)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  EDeathState EVar4;
  int iVar5;
  int iVar6;
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
      goto LAB_004b9a6d;
    }
    fVar3 = (g_CGamePtr->delta_time_float * 0.25f) / 0.05f;
    pfVar1 = &player_control->turn_speed;
    if (0.0 <= *pfVar1) {
      *pfVar1 = *pfVar1 - fVar3;
      fVar3 = *pfVar1;
      goto joined_r0x004ba097;
    }
    fVar3 = *pfVar1 + fVar3;
LAB_004b9a5a:
    player_control->turn_speed = fVar3;
    if (player_control->turn_speed <= 0.0) goto LAB_004b9a6d;
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
      goto LAB_004b9a5a;
    }
    *pfVar1 = *pfVar1 - fVar3;
    fVar3 = *pfVar1;
joined_r0x004ba097:
    if (0.0 <= fVar3) goto LAB_004b9a6d;
  }
  player_control->turn_speed = 0.0;
LAB_004b9a6d:
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
  EVar4 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uc)->_uc).
            getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base);
  if (EVar4 == DEATH_STATE_ALIVE) {
    iVar5 = this_ptr->key_fire;
    if (g_PrevKeyboardState[iVar5] != g_KeyboardState[iVar5]) {
      (player_control->action_state).fire = (uint)(byte)g_KeyboardState[iVar5];
    }
    if (g_PrevKeyboardState[this_ptr->key_action] != g_KeyboardState[this_ptr->key_action]) {
      (player_control->action_state).action = (uint)(byte)g_KeyboardState[this_ptr->key_action];
    }
  }
  else {
    (player_control->action_state).action = 0;
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
  piVar2 = &(player_control->action_state).jump;
  if (g_PrevKeyboardState[this_ptr->key_jump] == g_KeyboardState[this_ptr->key_jump]) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = (uint)(byte)g_KeyboardState[this_ptr->key_jump];
  }
  piVar2 = &(player_control->action_state).quick_turn;
  if (g_PrevKeyboardState[this_ptr->key_quick_turn] == g_KeyboardState[this_ptr->key_quick_turn]) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = (uint)(byte)g_KeyboardState[this_ptr->key_quick_turn];
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_next_weapon);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
              (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,(CDemonActor *)0x0,5,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_prev_weapon);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
              (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,(CDemonActor *)0x0,5,-1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_next_item);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbc40
              (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_prev_item);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbc40
              (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,-1);
  }
  iVar5 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._ue)->_ue).randomize)
                    ((CEnemy *)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]);
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_1);
  if ((iVar6 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,(CDemonActor *)0x0,0,1),
     iVar5 == 0)) {
    (player_control->action_state).draw = 1;
  }
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_2);
  if ((iVar6 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,(CDemonActor *)0x0,1,1),
     iVar5 == 0)) {
    (player_control->action_state).draw = 1;
  }
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_3);
  if ((iVar6 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,(CDemonActor *)0x0,2,1),
     iVar5 == 0)) {
    (player_control->action_state).draw = 1;
  }
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_4);
  if ((iVar6 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,(CDemonActor *)0x0,3,1),
     iVar5 == 0)) {
    (player_control->action_state).draw = 1;
  }
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_5);
  if ((iVar6 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,(CDemonActor *)0x0,4,1),
     iVar5 == 0)) {
    (player_control->action_state).draw = 1;
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_infrared);
  if (iVar5 == 0) {
    return;
  }
  (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uh)->_uh).toggleGoggles)
            (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]);
  return;
}
