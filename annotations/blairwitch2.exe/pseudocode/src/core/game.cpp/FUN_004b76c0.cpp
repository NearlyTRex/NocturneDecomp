// Name: core_game.cpp_FUN_004b76c0
// Address: 004b76c0
// Address Range: [[004b76c0, 004b7fb6]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004b76c0(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004b76c0(CGame *this_ptr,SPlayerInput *player_control)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  CDemonActor *pCVar5;
  byte bVar6;
  
  if (this_ptr->screen_clear_condition != 0) {
    (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x200);
    (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x201);
  }
  player_control->strafe_speed = 0.0;
  pfVar1 = &player_control->strafe_speed;
  if ((&DAT_01c37790)[this_ptr->key_strafe_left] == '\0') {
    if ((((&DAT_01c37790)[this_ptr->key_strafe_right] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
       (*pfVar1 = g_CGamePtr->delta_time_float / _DAT_005d78c3 + *pfVar1, 0x3f800000 < (int)*pfVar1)
       ) {
      *pfVar1 = 1.0;
    }
  }
  else if ((_DAT_005d78c7 < *pfVar1) &&
          (fVar3 = *pfVar1 - g_CGamePtr->delta_time_float / _DAT_005d78c3, *pfVar1 = fVar3,
          fVar3 < _DAT_005d78c7)) {
    *pfVar1 = -1.0;
  }
  if ((&DAT_01c37790)[this_ptr->key_strafe] == '\0') {
    if (((&DAT_01c37790)[this_ptr->key_left] != '\0') ||
       ((&DAT_01c37790)[this_ptr->key_right] != '\0')) {
      fVar3 = (float)this_ptr->x_mouse_sensitivity * (float)_DAT_005d78d3 * (float)_DAT_005d78db;
      pfVar1 = &player_control->turn_speed;
      if ((&DAT_01c37790)[this_ptr->key_left] == '\0') {
        if ((((&DAT_01c37790)[this_ptr->key_right] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
           (*pfVar1 = (g_CGamePtr->delta_time_float * _DAT_005d78cb) / fVar3 + *pfVar1,
           0x3e800000 < (int)*pfVar1)) {
          *pfVar1 = 0.25;
        }
      }
      else if ((_DAT_005d78e3 < *pfVar1) &&
              (fVar3 = *pfVar1 - (g_CGamePtr->delta_time_float * _DAT_005d78cb) / fVar3,
              *pfVar1 = fVar3, fVar3 < _DAT_005d78e3)) {
        *pfVar1 = -0.25;
      }
      goto LAB_004b77cb;
    }
    fVar3 = (g_CGamePtr->delta_time_float * _DAT_005d78cb) / _DAT_005d78cf;
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
    if ((&DAT_01c37790)[this_ptr->key_left] == '\0') {
      if ((((&DAT_01c37790)[this_ptr->key_right] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
         (*pfVar1 = g_CGamePtr->delta_time_float / _DAT_005d78c3 + *pfVar1,
         0x3f800000 < (int)*pfVar1)) {
        *pfVar1 = 1.0;
      }
    }
    else if ((_DAT_005d78c7 < *pfVar1) &&
            (fVar3 = *pfVar1 - g_CGamePtr->delta_time_float / _DAT_005d78c3, *pfVar1 = fVar3,
            fVar3 < _DAT_005d78c7)) {
      *pfVar1 = -1.0;
    }
    fVar3 = (g_CGamePtr->delta_time_float * _DAT_005d78cb) / _DAT_005d78cf;
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
  if (((&DAT_01c37790)[this_ptr->key_point_up] == '\0') &&
     ((&DAT_01c37790)[this_ptr->key_point_down] == '\0')) {
    fVar3 = (g_CGamePtr->delta_time_float * _DAT_005d78cb) / _DAT_005d78e7;
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
    fVar3 = (float)this_ptr->y_mouse_sensitivity * (float)_DAT_005d78eb * (float)_DAT_005d78db;
    pfVar1 = &player_control->look_up_down_speed;
    if ((&DAT_01c37790)[this_ptr->key_point_up] == '\0') {
      if ((((&DAT_01c37790)[this_ptr->key_point_down] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
         (*pfVar1 = (g_CGamePtr->delta_time_float * _DAT_005d78cb) / fVar3 + *pfVar1,
         0x3e800000 < (int)*pfVar1)) {
        *pfVar1 = 0.25;
      }
    }
    else if ((_DAT_005d78e3 < *pfVar1) &&
            (fVar3 = *pfVar1 - (g_CGamePtr->delta_time_float * _DAT_005d78cb) / fVar3,
            *pfVar1 = fVar3, fVar3 < _DAT_005d78e3)) {
      *pfVar1 = -0.25;
    }
  }
  if (this_ptr->always_run == 0) {
    bVar6 = (&DAT_01c37790)[this_ptr->key_run];
  }
  else {
    bVar6 = (&DAT_01c37790)[this_ptr->key_run] == '\0';
  }
  (player_control->action_state).run = (uint)bVar6;
  if ((&DAT_01cb7528)[this_ptr->key_walk] != (&DAT_01c37790)[this_ptr->key_walk]) {
    (player_control->action_state).walk = (uint)(byte)(&DAT_01c37790)[this_ptr->key_walk];
  }
  if ((&DAT_01cb7528)[this_ptr->key_backup] != (&DAT_01c37790)[this_ptr->key_backup]) {
    (player_control->action_state).backup = (uint)(byte)(&DAT_01c37790)[this_ptr->key_backup];
  }
  iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x114))(iVar4);
  if (iVar4 == 0) {
    if ((&DAT_01cb7528)[this_ptr->key_fire] != (&DAT_01c37790)[this_ptr->key_fire]) {
      (player_control->action_state).fire = (uint)(byte)(&DAT_01c37790)[this_ptr->key_fire];
    }
  }
  else {
    (player_control->action_state).fire = 0;
  }
  piVar2 = &(player_control->action_state).use_item;
  if ((&DAT_01cb7528)[this_ptr->key_use_item] == (&DAT_01c37790)[this_ptr->key_use_item]) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = (uint)(byte)(&DAT_01c37790)[this_ptr->key_use_item];
  }
  piVar2 = &(player_control->action_state).light;
  if ((&DAT_01cb7528)[this_ptr->key_light] == (&DAT_01c37790)[this_ptr->key_light]) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = (uint)(byte)(&DAT_01c37790)[this_ptr->key_light];
  }
  piVar2 = &(player_control->action_state).draw;
  if ((&DAT_01cb7528)[this_ptr->key_draw] == (&DAT_01c37790)[this_ptr->key_draw]) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = (uint)(byte)(&DAT_01c37790)[this_ptr->key_draw];
  }
  piVar2 = &(player_control->action_state).quick_turn;
  if ((&DAT_01cb7528)[this_ptr->key_quick_turn] == (&DAT_01c37790)[this_ptr->key_quick_turn]) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = (uint)(byte)(&DAT_01c37790)[this_ptr->key_quick_turn];
  }
  if ((&DAT_01cb7528)[this_ptr->key_drop] == (&DAT_01c37790)[this_ptr->key_drop]) {
    player_control->drop_item = 0;
  }
  else {
    player_control->drop_item = (uint)(byte)(&DAT_01c37790)[this_ptr->key_drop];
  }
  iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,this_ptr->key_next_weapon);
  if ((iVar4 != 0) &&
     ((pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4),
                           g_CDocClassInfo.name_hash), pCVar5 == (CDemonActor *)0x0 ||
      (pCVar5[0xde].particle_systems[1].position.x <= 0.0)))) {
    core_inv_cpp_FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0,5,1);
  }
  iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,this_ptr->key_prev_weapon);
  if ((iVar4 != 0) &&
     ((pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4),
                           g_CDocClassInfo.name_hash), pCVar5 == (CDemonActor *)0x0 ||
      (pCVar5[0xde].particle_systems[1].position.x <= 0.0)))) {
    core_inv_cpp_FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0,5,0xffffffff);
  }
  iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,this_ptr->key_next_item);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbb50
              ((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),1);
  }
  iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,this_ptr->key_prev_item);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbb50
              ((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),-1);
  }
  iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,this_ptr->key_next_ammo);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004dbc60
              ((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),1);
  }
  iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,this_ptr->key_item_desc);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_toggleDetailView_FUN_004defa0
              ((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c));
  }
  iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,this_ptr->key_weapon_1);
  if ((iVar4 != 0) &&
     ((pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4),
                           g_CDocClassInfo.name_hash), pCVar5 == (CDemonActor *)0x0 ||
      (pCVar5[0xde].particle_systems[1].position.x <= 0.0)))) {
    core_inv_cpp_FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0,0,1);
  }
  iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,this_ptr->key_weapon_2);
  if ((iVar4 != 0) &&
     ((pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4),
                           g_CDocClassInfo.name_hash), pCVar5 == (CDemonActor *)0x0 ||
      (pCVar5[0xde].particle_systems[1].position.x <= 0.0)))) {
    core_inv_cpp_FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0,3,1);
  }
  iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,this_ptr->key_weapon_3);
  if ((iVar4 != 0) &&
     ((pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4),
                           g_CDocClassInfo.name_hash), pCVar5 == (CDemonActor *)0x0 ||
      (pCVar5[0xde].particle_systems[1].position.x <= 0.0)))) {
    core_inv_cpp_FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0,6,1);
    return;
  }
  return;
}
