// Name: core_game.cpp_CGame_processKeyboardControls_FUN_0049ee30
// Address: 0049ee30
// Address Range: [[0049ee30, 0049f704]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processKeyboardControls_FUN_0049ee30(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processKeyboardControls_FUN_0049ee30(CGame *this_ptr,SPlayerInput *player_control)

{
  float *pfVar1;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  byte bVar7;
  
  if (this_ptr->screen_clear_condition != 0) {
    (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x200);
    (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x201);
  }
  player_control->strafe_speed = 0.0;
  pfVar1 = &player_control->strafe_speed;
  if ((&DAT_01c02598)[this_ptr->key_strafe_left] == '\0') {
    if ((((&DAT_01c02598)[this_ptr->key_strafe_right] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
       (*pfVar1 = *(float *)(0x01C775EC + 0x264) / 0.01f + *pfVar1,
       0x3f800000 < (int)*pfVar1)) {
      *pfVar1 = 1.0;
    }
  }
  else if ((-1.0f < *pfVar1) &&
          (fVar2 = *pfVar1 - *(float *)(0x01C775EC + 0x264) / 0.01f, *pfVar1 = fVar2,
          fVar2 < -1.0f)) {
    *pfVar1 = -1.0;
  }
  if ((&DAT_01c02598)[this_ptr->key_strafe] == '\0') {
    if (((&DAT_01c02598)[this_ptr->key_left] != '\0') ||
       ((&DAT_01c02598)[this_ptr->key_right] != '\0')) {
      fVar2 = (float)this_ptr->x_mouse_sensitivity * (float)0.29999999999999999 * (float)1.52587890625e-05
      ;
      pfVar1 = &player_control->turn_speed;
      if ((&DAT_01c02598)[this_ptr->key_left] == '\0') {
        if ((((&DAT_01c02598)[this_ptr->key_right] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
           (*pfVar1 = (*(float *)(0x01C775EC + 0x264) * 0.25f) / fVar2 + *pfVar1,
           0x3e800000 < (int)*pfVar1)) {
          *pfVar1 = 0.25;
        }
      }
      else if ((-0.25f < *pfVar1) &&
              (fVar2 = *pfVar1 - (*(float *)(0x01C775EC + 0x264) * 0.25f) / fVar2,
              *pfVar1 = fVar2, fVar2 < -0.25f)) {
        *pfVar1 = -0.25;
      }
      goto LAB_0049ef39;
    }
    fVar2 = (*(float *)(0x01C775EC + 0x264) * 0.25f) / 0.05f;
    pfVar1 = &player_control->turn_speed;
    if (0.0 <= *pfVar1) {
      *pfVar1 = *pfVar1 - fVar2;
      fVar2 = *pfVar1;
      goto joined_r0x0049f5c7;
    }
    fVar2 = *pfVar1 + fVar2;
LAB_0049ef26:
    player_control->turn_speed = fVar2;
    if (player_control->turn_speed <= 0.0) goto LAB_0049ef39;
  }
  else {
    pfVar1 = &player_control->strafe_speed;
    if ((&DAT_01c02598)[this_ptr->key_left] == '\0') {
      if ((((&DAT_01c02598)[this_ptr->key_right] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
         (*pfVar1 = *(float *)(0x01C775EC + 0x264) / 0.01f + *pfVar1,
         0x3f800000 < (int)*pfVar1)) {
        *pfVar1 = 1.0;
      }
    }
    else if ((-1.0f < *pfVar1) &&
            (fVar2 = *pfVar1 - *(float *)(0x01C775EC + 0x264) / 0.01f, *pfVar1 = fVar2,
            fVar2 < -1.0f)) {
      *pfVar1 = -1.0;
    }
    fVar2 = (*(float *)(0x01C775EC + 0x264) * 0.25f) / 0.05f;
    pfVar1 = &player_control->turn_speed;
    if (*pfVar1 < 0.0) {
      fVar2 = *pfVar1 + fVar2;
      goto LAB_0049ef26;
    }
    *pfVar1 = *pfVar1 - fVar2;
    fVar2 = *pfVar1;
joined_r0x0049f5c7:
    if (0.0 <= fVar2) goto LAB_0049ef39;
  }
  player_control->turn_speed = 0.0;
LAB_0049ef39:
  if (((&DAT_01c02598)[this_ptr->key_point_up] == '\0') &&
     ((&DAT_01c02598)[this_ptr->key_point_down] == '\0')) {
    fVar2 = (*(float *)(0x01C775EC + 0x264) * 0.25f) / 0.1f;
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
    fVar2 = (float)this_ptr->y_mouse_sensitivity * (float)0.20000000000000001 * (float)1.52587890625e-05;
    pfVar1 = &player_control->look_up_down_speed;
    if ((&DAT_01c02598)[this_ptr->key_point_up] == '\0') {
      if ((((&DAT_01c02598)[this_ptr->key_point_down] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
         (*pfVar1 = (*(float *)(0x01C775EC + 0x264) * 0.25f) / fVar2 + *pfVar1,
         0x3e800000 < (int)*pfVar1)) {
        *pfVar1 = 0.25;
      }
    }
    else if ((-0.25f < *pfVar1) &&
            (fVar2 = *pfVar1 - (*(float *)(0x01C775EC + 0x264) * 0.25f) / fVar2,
            *pfVar1 = fVar2, fVar2 < -0.25f)) {
      *pfVar1 = -0.25;
    }
  }
  if (this_ptr->always_run == 0) {
    bVar7 = (&DAT_01c02598)[this_ptr->key_run];
  }
  else {
    bVar7 = (&DAT_01c02598)[this_ptr->key_run] == '\0';
  }
  (player_control->action_state).run = (uint)bVar7;
  iVar4 = this_ptr->key_walk;
  if ((&DAT_01c781c0)[iVar4] != (&DAT_01c02598)[iVar4]) {
    (player_control->action_state).walk = (uint)(byte)(&DAT_01c02598)[iVar4];
  }
  iVar4 = this_ptr->key_backup;
  if ((&DAT_01c781c0)[iVar4] != (&DAT_01c02598)[iVar4]) {
    (player_control->action_state).backup = (uint)(byte)(&DAT_01c02598)[iVar4];
  }
  iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x104))(iVar4);
  if (iVar4 == 0) {
    iVar4 = this_ptr->key_fire;
    if ((&DAT_01c781c0)[iVar4] != (&DAT_01c02598)[iVar4]) {
      (player_control->action_state).fire = (uint)(byte)(&DAT_01c02598)[iVar4];
    }
  }
  else {
    (player_control->action_state).fire = 0;
  }
  piVar6 = &(player_control->action_state).use_item;
  if ((&DAT_01c781c0)[this_ptr->key_use_item] == (&DAT_01c02598)[this_ptr->key_use_item]) {
    *piVar6 = 0;
  }
  else {
    *piVar6 = (uint)(byte)(&DAT_01c02598)[this_ptr->key_use_item];
  }
  piVar6 = &(player_control->action_state).light;
  if ((&DAT_01c781c0)[this_ptr->key_light] == (&DAT_01c02598)[this_ptr->key_light]) {
    *piVar6 = 0;
  }
  else {
    *piVar6 = (uint)(byte)(&DAT_01c02598)[this_ptr->key_light];
  }
  piVar6 = &(player_control->action_state).draw;
  if ((&DAT_01c781c0)[this_ptr->key_draw] == (&DAT_01c02598)[this_ptr->key_draw]) {
    *piVar6 = 0;
  }
  else {
    *piVar6 = (uint)(byte)(&DAT_01c02598)[this_ptr->key_draw];
  }
  iVar4 = this_ptr->key_jump;
  piVar6 = &(player_control->action_state).jump;
  if ((&DAT_01c781c0)[iVar4] == (&DAT_01c02598)[iVar4]) {
    *piVar6 = 0;
  }
  else {
    *piVar6 = (uint)(byte)(&DAT_01c02598)[iVar4];
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,this_ptr->key_next_weapon);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004c0850
              ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),(CDemonActor *)0x0,
               5,1);
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,this_ptr->key_prev_weapon);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004c0850
              ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),(CDemonActor *)0x0,
               5,-1);
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,this_ptr->key_next_item);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004c0950
              ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),1);
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,this_ptr->key_prev_item);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004c0950
              ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),-1);
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,this_ptr->key_next_ammo);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004c0a50
              ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),1);
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,this_ptr->key_item_desc);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_toggleDetailView_FUN_004c32e0
              ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0));
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,this_ptr->key_weapon_1);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004c0850
              ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),(CDemonActor *)0x0,
               0,1);
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,this_ptr->key_weapon_2);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004c0850
              ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),(CDemonActor *)0x0,
               1,1);
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,this_ptr->key_weapon_3);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004c0850
              ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),(CDemonActor *)0x0,
               2,1);
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,this_ptr->key_weapon_4);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004c0850
              ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),(CDemonActor *)0x0,
               4,1);
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,this_ptr->key_weapon_5);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004c0850
              ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),(CDemonActor *)0x0,
               3,1);
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,this_ptr->key_infrared);
  if (iVar4 != 0) {
    uVar5 = (uint)(this_ptr->goggles_active == 0);
    this_ptr->goggles_active = uVar5;
    if (((uVar5 == 0) || (iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8), iVar4 == 0)) ||
       (iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x104))(iVar4), iVar4 == 0)) {
      if (this_ptr->goggles_active != 0) {
        return;
      }
    }
    else {
      this_ptr->goggles_active = 0;
    }
    pCVar3 = 0x01E57284->renderable_actors[0x773];
    core_setdir_cpp_FUN_005125a0(0x01E57284,*(uint *)(0x01E56DA0 + 0xc),1);
    *(uint *)(0x01E56DA0 + 0x10) = 0;
    if (pCVar3 == 0x01E57284->renderable_actors[0x773]) {
      core_set_cpp_CDemonSet_setCameraView_FUN_005088f0
                (0x01E57284,(int)0x01E57284->renderable_actors[0x773]);
      return;
    }
  }
  return;
}
