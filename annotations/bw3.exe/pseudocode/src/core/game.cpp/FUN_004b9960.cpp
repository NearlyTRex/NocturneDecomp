// Name: core_game.cpp_FUN_004b9960
// Address: 004b9960
// Address Range: [[004b9960, 004ba213]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004b9960(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004b9960(CGame *this_ptr,SPlayerInput *player_control)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  if (this_ptr->screen_clear_condition != 0) {
    (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x200);
    (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x201);
  }
  player_control->strafe_speed = 0.0;
  pfVar1 = &player_control->strafe_speed;
  if ((&DAT_01c6cef0)[this_ptr->key_strafe_left] == '\0') {
    if ((((&DAT_01c6cef0)[this_ptr->key_strafe_right] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
       (*pfVar1 = g_CGamePtr->delta_time_float / _DAT_005c2800 + *pfVar1, 0x3f800000 < (int)*pfVar1)
       ) {
      *pfVar1 = 1.0;
    }
  }
  else if ((_DAT_005c2804 < *pfVar1) &&
          (fVar3 = *pfVar1 - g_CGamePtr->delta_time_float / _DAT_005c2800, *pfVar1 = fVar3,
          fVar3 < _DAT_005c2804)) {
    *pfVar1 = -1.0;
  }
  if ((&DAT_01c6cef0)[this_ptr->key_strafe] == '\0') {
    if (((&DAT_01c6cef0)[this_ptr->key_left] != '\0') ||
       ((&DAT_01c6cef0)[this_ptr->key_right] != '\0')) {
      fVar3 = (float)this_ptr->x_mouse_sensitivity * (float)_DAT_005c2810 * (float)_DAT_005c2818;
      pfVar1 = &player_control->turn_speed;
      if ((&DAT_01c6cef0)[this_ptr->key_left] == '\0') {
        if ((((&DAT_01c6cef0)[this_ptr->key_right] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
           (*pfVar1 = (g_CGamePtr->delta_time_float * _DAT_005c2808) / fVar3 + *pfVar1,
           0x3e800000 < (int)*pfVar1)) {
          *pfVar1 = 0.25;
        }
      }
      else if ((_DAT_005c2820 < *pfVar1) &&
              (fVar3 = *pfVar1 - (g_CGamePtr->delta_time_float * _DAT_005c2808) / fVar3,
              *pfVar1 = fVar3, fVar3 < _DAT_005c2820)) {
        *pfVar1 = -0.25;
      }
      goto LAB_004b9a6d;
    }
    fVar3 = (g_CGamePtr->delta_time_float * _DAT_005c2808) / _DAT_005c280c;
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
    if ((&DAT_01c6cef0)[this_ptr->key_left] == '\0') {
      if ((((&DAT_01c6cef0)[this_ptr->key_right] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
         (*pfVar1 = g_CGamePtr->delta_time_float / _DAT_005c2800 + *pfVar1,
         0x3f800000 < (int)*pfVar1)) {
        *pfVar1 = 1.0;
      }
    }
    else if ((_DAT_005c2804 < *pfVar1) &&
            (fVar3 = *pfVar1 - g_CGamePtr->delta_time_float / _DAT_005c2800, *pfVar1 = fVar3,
            fVar3 < _DAT_005c2804)) {
      *pfVar1 = -1.0;
    }
    fVar3 = (g_CGamePtr->delta_time_float * _DAT_005c2808) / _DAT_005c280c;
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
  if (((&DAT_01c6cef0)[this_ptr->key_point_up] == '\0') &&
     ((&DAT_01c6cef0)[this_ptr->key_point_down] == '\0')) {
    fVar3 = (g_CGamePtr->delta_time_float * _DAT_005c2808) / _DAT_005c2824;
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
    fVar3 = (float)this_ptr->y_mouse_sensitivity * (float)_DAT_005c2828 * (float)_DAT_005c2818;
    pfVar1 = &player_control->look_up_down_speed;
    if ((&DAT_01c6cef0)[this_ptr->key_point_up] == '\0') {
      if ((((&DAT_01c6cef0)[this_ptr->key_point_down] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
         (*pfVar1 = (g_CGamePtr->delta_time_float * _DAT_005c2808) / fVar3 + *pfVar1,
         0x3e800000 < (int)*pfVar1)) {
        *pfVar1 = 0.25;
      }
    }
    else if ((_DAT_005c2820 < *pfVar1) &&
            (fVar3 = *pfVar1 - (g_CGamePtr->delta_time_float * _DAT_005c2808) / fVar3,
            *pfVar1 = fVar3, fVar3 < _DAT_005c2820)) {
      *pfVar1 = -0.25;
    }
  }
  if (this_ptr->always_run == 0) {
    bVar6 = (&DAT_01c6cef0)[this_ptr->key_run];
  }
  else {
    bVar6 = (&DAT_01c6cef0)[this_ptr->key_run] == '\0';
  }
  (player_control->action_state).run = (uint)bVar6;
  if ((&DAT_01d21fa0)[this_ptr->key_walk] != (&DAT_01c6cef0)[this_ptr->key_walk]) {
    (player_control->action_state).walk = (uint)(byte)(&DAT_01c6cef0)[this_ptr->key_walk];
  }
  if ((&DAT_01d21fa0)[this_ptr->key_backup] != (&DAT_01c6cef0)[this_ptr->key_backup]) {
    (player_control->action_state).backup = (uint)(byte)(&DAT_01c6cef0)[this_ptr->key_backup];
  }
  iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
  if (iVar4 == 0) {
    iVar4 = this_ptr->key_fire;
    if ((&DAT_01d21fa0)[iVar4] != (&DAT_01c6cef0)[iVar4]) {
      (player_control->action_state).fire = (uint)(byte)(&DAT_01c6cef0)[iVar4];
    }
    if ((&DAT_01d21fa0)[this_ptr->key_action] != (&DAT_01c6cef0)[this_ptr->key_action]) {
      (player_control->action_state).action = (uint)(byte)(&DAT_01c6cef0)[this_ptr->key_action];
    }
  }
  else {
    (player_control->action_state).action = 0;
    (player_control->action_state).fire = 0;
  }
  piVar2 = &(player_control->action_state).use_item;
  if ((&DAT_01d21fa0)[this_ptr->key_use_item] == (&DAT_01c6cef0)[this_ptr->key_use_item]) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = (uint)(byte)(&DAT_01c6cef0)[this_ptr->key_use_item];
  }
  piVar2 = &(player_control->action_state).light;
  if ((&DAT_01d21fa0)[this_ptr->key_light] == (&DAT_01c6cef0)[this_ptr->key_light]) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = (uint)(byte)(&DAT_01c6cef0)[this_ptr->key_light];
  }
  piVar2 = &(player_control->action_state).draw;
  if ((&DAT_01d21fa0)[this_ptr->key_draw] == (&DAT_01c6cef0)[this_ptr->key_draw]) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = (uint)(byte)(&DAT_01c6cef0)[this_ptr->key_draw];
  }
  piVar2 = &(player_control->action_state).jump;
  if ((&DAT_01d21fa0)[this_ptr->key_jump] == (&DAT_01c6cef0)[this_ptr->key_jump]) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = (uint)(byte)(&DAT_01c6cef0)[this_ptr->key_jump];
  }
  piVar2 = &(player_control->action_state).quick_turn;
  if ((&DAT_01d21fa0)[this_ptr->key_quick_turn] == (&DAT_01c6cef0)[this_ptr->key_quick_turn]) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = (uint)(byte)(&DAT_01c6cef0)[this_ptr->key_quick_turn];
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,this_ptr->key_next_weapon);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
              ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),(CDemonActor *)0x0,
               5,1);
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,this_ptr->key_prev_weapon);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
              ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),(CDemonActor *)0x0,
               5,-1);
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,this_ptr->key_next_item);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbc40
              ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),1);
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,this_ptr->key_prev_item);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbc40
              ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),-1);
  }
  iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x148))(iVar4);
  iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,this_ptr->key_weapon_1);
  if ((iVar5 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,0,1), iVar4 == 0)) {
    (player_control->action_state).draw = 1;
  }
  iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,this_ptr->key_weapon_2);
  if ((iVar5 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,1,1), iVar4 == 0)) {
    (player_control->action_state).draw = 1;
  }
  iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,this_ptr->key_weapon_3);
  if ((iVar5 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,2,1), iVar4 == 0)) {
    (player_control->action_state).draw = 1;
  }
  iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,this_ptr->key_weapon_4);
  if ((iVar5 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,3,1), iVar4 == 0)) {
    (player_control->action_state).draw = 1;
  }
  iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,this_ptr->key_weapon_5);
  if ((iVar5 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,4,1), iVar4 == 0)) {
    (player_control->action_state).draw = 1;
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,this_ptr->key_infrared);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  (**(code **)(*(int *)(iVar4 + 0x154) + 0x150))(iVar4);
  return;
}
