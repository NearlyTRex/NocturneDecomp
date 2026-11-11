// Name: core_game.cpp_FUN_004d0ee0
// Address: 004d0ee0
// Address Range: [[004d0ee0, 004d175b]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004d0ee0(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004d0ee0(CGame *this_ptr,SPlayerInput *player_control)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  
  if (this_ptr->screen_clear_condition != 0) {
    (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x200);
    (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x201);
  }
  player_control->strafe_speed = 0.0;
  pfVar1 = &player_control->strafe_speed;
  if ((&DAT_01c50950)[this_ptr->key_strafe_left] == '\0') {
    if ((((&DAT_01c50950)[this_ptr->key_strafe_right] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
       (*pfVar1 = g_CGamePtr->delta_time_float / _DAT_005e19c4 + *pfVar1, 0x3f800000 < (int)*pfVar1)
       ) {
      *pfVar1 = 1.0;
    }
  }
  else if ((_DAT_005e19c8 < *pfVar1) &&
          (fVar2 = *pfVar1 - g_CGamePtr->delta_time_float / _DAT_005e19c4, *pfVar1 = fVar2,
          fVar2 < _DAT_005e19c8)) {
    *pfVar1 = -1.0;
  }
  if ((&DAT_01c50950)[this_ptr->key_strafe] == '\0') {
    if (((&DAT_01c50950)[this_ptr->key_left] != '\0') ||
       ((&DAT_01c50950)[this_ptr->key_right] != '\0')) {
      fVar2 = (float)this_ptr->x_mouse_sensitivity * (float)_DAT_005e19d4 * (float)_DAT_005e19dc;
      pfVar1 = &player_control->turn_speed;
      if ((&DAT_01c50950)[this_ptr->key_left] == '\0') {
        if ((((&DAT_01c50950)[this_ptr->key_right] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
           (*pfVar1 = (g_CGamePtr->delta_time_float * _DAT_005e19cc) / fVar2 + *pfVar1,
           0x3e800000 < (int)*pfVar1)) {
          *pfVar1 = 0.25;
        }
      }
      else if ((_DAT_005e19e4 < *pfVar1) &&
              (fVar2 = *pfVar1 - (g_CGamePtr->delta_time_float * _DAT_005e19cc) / fVar2,
              *pfVar1 = fVar2, fVar2 < _DAT_005e19e4)) {
        *pfVar1 = -0.25;
      }
      goto LAB_004d0feb;
    }
    fVar2 = (g_CGamePtr->delta_time_float * _DAT_005e19cc) / _DAT_005e19d0;
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
    if ((&DAT_01c50950)[this_ptr->key_left] == '\0') {
      if ((((&DAT_01c50950)[this_ptr->key_right] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
         (*pfVar1 = g_CGamePtr->delta_time_float / _DAT_005e19c4 + *pfVar1,
         0x3f800000 < (int)*pfVar1)) {
        *pfVar1 = 1.0;
      }
    }
    else if ((_DAT_005e19c8 < *pfVar1) &&
            (fVar2 = *pfVar1 - g_CGamePtr->delta_time_float / _DAT_005e19c4, *pfVar1 = fVar2,
            fVar2 < _DAT_005e19c8)) {
      *pfVar1 = -1.0;
    }
    fVar2 = (g_CGamePtr->delta_time_float * _DAT_005e19cc) / _DAT_005e19d0;
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
  if (((&DAT_01c50950)[this_ptr->key_point_up] == '\0') &&
     ((&DAT_01c50950)[this_ptr->key_point_down] == '\0')) {
    fVar2 = (g_CGamePtr->delta_time_float * _DAT_005e19cc) / _DAT_005e19e8;
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
    fVar2 = (float)this_ptr->y_mouse_sensitivity * (float)_DAT_005e19ec * (float)_DAT_005e19dc;
    pfVar1 = &player_control->look_up_down_speed;
    if ((&DAT_01c50950)[this_ptr->key_point_up] == '\0') {
      if ((((&DAT_01c50950)[this_ptr->key_point_down] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
         (*pfVar1 = (g_CGamePtr->delta_time_float * _DAT_005e19cc) / fVar2 + *pfVar1,
         0x3e800000 < (int)*pfVar1)) {
        *pfVar1 = 0.25;
      }
    }
    else if ((_DAT_005e19e4 < *pfVar1) &&
            (fVar2 = *pfVar1 - (g_CGamePtr->delta_time_float * _DAT_005e19cc) / fVar2,
            *pfVar1 = fVar2, fVar2 < _DAT_005e19e4)) {
      *pfVar1 = -0.25;
    }
  }
  if (this_ptr->always_run == 0) {
    bVar5 = (&DAT_01c50950)[this_ptr->key_run];
  }
  else {
    bVar5 = (&DAT_01c50950)[this_ptr->key_run] == '\0';
  }
  (player_control->action_state).run = (uint)bVar5;
  if ((&DAT_01ccff98)[this_ptr->key_walk] != (&DAT_01c50950)[this_ptr->key_walk]) {
    (player_control->action_state).walk = (uint)(byte)(&DAT_01c50950)[this_ptr->key_walk];
  }
  iVar3 = this_ptr->key_backup;
  if ((&DAT_01ccff98)[iVar3] != (&DAT_01c50950)[iVar3]) {
    (player_control->action_state).backup = (uint)(byte)(&DAT_01c50950)[iVar3];
  }
  iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
  if (iVar3 == 0) {
    iVar3 = this_ptr->key_fire;
    if ((&DAT_01ccff98)[iVar3] != (&DAT_01c50950)[iVar3]) {
      (player_control->action_state).fire = (uint)(byte)(&DAT_01c50950)[iVar3];
    }
  }
  else {
    (player_control->action_state).fire = 0;
  }
  piVar4 = &(player_control->action_state).use_item;
  if ((&DAT_01ccff98)[this_ptr->key_use_item] == (&DAT_01c50950)[this_ptr->key_use_item]) {
    *piVar4 = 0;
  }
  else {
    *piVar4 = (uint)(byte)(&DAT_01c50950)[this_ptr->key_use_item];
  }
  piVar4 = &(player_control->action_state).light;
  if ((&DAT_01ccff98)[this_ptr->key_light] == (&DAT_01c50950)[this_ptr->key_light]) {
    *piVar4 = 0;
  }
  else {
    *piVar4 = (uint)(byte)(&DAT_01c50950)[this_ptr->key_light];
  }
  piVar4 = &(player_control->action_state).draw;
  if ((&DAT_01ccff98)[this_ptr->key_draw] == (&DAT_01c50950)[this_ptr->key_draw]) {
    *piVar4 = 0;
  }
  else {
    *piVar4 = (uint)(byte)(&DAT_01c50950)[this_ptr->key_draw];
  }
  piVar4 = &(player_control->action_state).jump;
  if ((&DAT_01ccff98)[this_ptr->key_jump] == (&DAT_01c50950)[this_ptr->key_jump]) {
    *piVar4 = 0;
  }
  else {
    *piVar4 = (uint)(byte)(&DAT_01c50950)[this_ptr->key_jump];
  }
  iVar3 = this_ptr->key_quick_turn;
  piVar4 = &(player_control->action_state).quick_turn;
  if ((&DAT_01ccff98)[iVar3] == (&DAT_01c50950)[iVar3]) {
    *piVar4 = 0;
  }
  else {
    *piVar4 = (uint)(byte)(&DAT_01c50950)[iVar3];
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,this_ptr->key_next_weapon);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               5,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,this_ptr->key_prev_weapon);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               5,-1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,this_ptr->key_next_item);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004f8ec0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,this_ptr->key_prev_item);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004f8ec0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),-1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,this_ptr->key_next_ammo);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004f8fe0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,this_ptr->key_item_desc);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_toggleDetailView_FUN_004fc370
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8));
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,this_ptr->key_weapon_1);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               0,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,this_ptr->key_weapon_2);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               1,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,this_ptr->key_weapon_3);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               2,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,this_ptr->key_weapon_4);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               4,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,this_ptr->key_weapon_5);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               3,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,this_ptr->key_infrared);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  (**(code **)(*(int *)(iVar3 + 0x154) + 0x150))(iVar3);
  return;
}
