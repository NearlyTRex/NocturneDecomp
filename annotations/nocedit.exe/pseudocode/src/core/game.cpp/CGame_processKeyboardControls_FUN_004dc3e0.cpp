// Name: core_game.cpp_CGame_processKeyboardControls_FUN_004dc3e0
// Address: 004dc3e0
// Address Range: [[004dc3e0, 004dccb4]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processKeyboardControls_FUN_004dc3e0 (CGame *this_ptr,SPlayerControl *player_control)

#include "nocturne.h"

void __cdecl
core_game_cpp_CGame_processKeyboardControls_FUN_004dc3e0
          (CGame *this_ptr,SPlayerControl *player_control)

{
  float *pfVar1;
  float fVar2;
  CHero *this_ptr_00;
  int iVar3;
  uint uVar4;
  byte bVar5;
  
  if (this_ptr->screen_clear_condition != 0) {
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x200);
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x201);
  }
  player_control->strafe_speed = 0.0;
  pfVar1 = &player_control->strafe_speed;
  if (g_KeyboardState[this_ptr->key_strafe_left] == '\0') {
    if (((g_KeyboardState[this_ptr->key_strafe_right] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
       (*pfVar1 = g_CGamePtr->delta_time_float / 0.01f + *pfVar1, 0x3f800000 < (int)*pfVar1
       )) {
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
      fVar2 = (float)this_ptr->x_mouse_sensitivity * (float)0.29999999999999999 * (float)1.52587890625e-05
      ;
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
      goto LAB_004dc4e9;
    }
    fVar2 = (g_CGamePtr->delta_time_float * 0.25f) / 0.05f;
    pfVar1 = &player_control->turn_speed;
    if (0.0 <= *pfVar1) {
      *pfVar1 = *pfVar1 - fVar2;
      fVar2 = *pfVar1;
      goto joined_r0x004dcb77;
    }
    fVar2 = *pfVar1 + fVar2;
LAB_004dc4d6:
    player_control->turn_speed = fVar2;
    if (player_control->turn_speed <= 0.0) goto LAB_004dc4e9;
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
      goto LAB_004dc4d6;
    }
    *pfVar1 = *pfVar1 - fVar2;
    fVar2 = *pfVar1;
joined_r0x004dcb77:
    if (0.0 <= fVar2) goto LAB_004dc4e9;
  }
  player_control->turn_speed = 0.0;
LAB_004dc4e9:
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
    fVar2 = (float)this_ptr->y_mouse_sensitivity * (float)0.20000000000000001 * (float)1.52587890625e-05;
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
    bVar5 = g_KeyboardState[this_ptr->key_run];
  }
  else {
    bVar5 = g_KeyboardState[this_ptr->key_run] == '\0';
  }
  player_control->action_states[2] = (uint)bVar5;
  iVar3 = this_ptr->key_walk;
  if (g_PrevKeyboardState[iVar3] != g_KeyboardState[iVar3]) {
    player_control->action_states[0] = (uint)(byte)g_KeyboardState[iVar3];
  }
  iVar3 = this_ptr->key_backup;
  if (g_PrevKeyboardState[iVar3] != g_KeyboardState[iVar3]) {
    player_control->action_states[1] = (uint)(byte)g_KeyboardState[iVar3];
  }
  iVar3 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                    (&g_HeroActors[g_LocalHeroIndex]->base);
  if (iVar3 == 0) {
    iVar3 = this_ptr->key_fire;
    if (g_PrevKeyboardState[iVar3] != g_KeyboardState[iVar3]) {
      player_control->action_states[3] = (uint)(byte)g_KeyboardState[iVar3];
    }
  }
  else {
    player_control->action_states[3] = 0;
  }
  if (g_PrevKeyboardState[this_ptr->key_use_item] == g_KeyboardState[this_ptr->key_use_item]) {
    player_control->action_states[4] = 0;
  }
  else {
    player_control->action_states[4] = (uint)(byte)g_KeyboardState[this_ptr->key_use_item];
  }
  if (g_PrevKeyboardState[this_ptr->key_light] == g_KeyboardState[this_ptr->key_light]) {
    player_control->action_states[5] = 0;
  }
  else {
    player_control->action_states[5] = (uint)(byte)g_KeyboardState[this_ptr->key_light];
  }
  if (g_PrevKeyboardState[this_ptr->key_draw] == g_KeyboardState[this_ptr->key_draw]) {
    player_control->action_states[6] = 0;
  }
  else {
    player_control->action_states[6] = (uint)(byte)g_KeyboardState[this_ptr->key_draw];
  }
  iVar3 = this_ptr->key_jump;
  if (g_PrevKeyboardState[iVar3] == g_KeyboardState[iVar3]) {
    player_control->action_states[7] = 0;
  }
  else {
    player_control->action_states[7] = (uint)(byte)g_KeyboardState[iVar3];
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_next_weapon);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,5,1);
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_prev_weapon);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,5,-1);
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_next_item);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004fec10(&g_HeroActors[g_LocalHeroIndex]->inventory,1);
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_prev_item);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004fec10(&g_HeroActors[g_LocalHeroIndex]->inventory,-1);
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_next_ammo);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,1);
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_item_desc);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_toggleDetailView_FUN_00501500
              (&g_HeroActors[g_LocalHeroIndex]->inventory);
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_1);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,0,1);
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_2);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,1,1);
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_3);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,2,1);
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_4);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,4,1);
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_5);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,3,1);
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_infrared);
  if (iVar3 != 0) {
    uVar4 = (uint)(this_ptr->block_auto_save == 0);
    this_ptr->block_auto_save = uVar4;
    if (((uVar4 == 0) || (this_ptr_00 = g_HeroActors[g_LocalHeroIndex], this_ptr_00 == (CHero *)0x0)
        ) || (iVar3 = (*(((this_ptr_00->base).base.vtable._uc)->_uc).getDeathState)
                                (&this_ptr_00->base), iVar3 == 0)) {
      if (this_ptr->block_auto_save != 0) {
        return;
      }
    }
    else {
      this_ptr->block_auto_save = 0;
    }
    iVar3 = g_CDemonSetPtr->selected_camera_index;
    core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
              (g_CDemonSetPtr,g_CScriptPtr->focus_actor,1);
    g_CScriptPtr->unk2 = 0;
    if (iVar3 == g_CDemonSetPtr->selected_camera_index) {
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
      return;
    }
  }
  return;
}
