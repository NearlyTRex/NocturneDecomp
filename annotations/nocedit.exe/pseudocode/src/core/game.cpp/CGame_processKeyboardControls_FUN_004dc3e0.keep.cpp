// Name: core_game.cpp_CGame_processKeyboardControls_FUN_004dc3e0
// Address: 004dc3e0
// MANUAL RECONSTRUCTION
// Address Range: [[004dc3e0, 004dccb4]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processKeyboardControls_FUN_004dc3e0(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processKeyboardControls_FUN_004dc3e0(CGame *this_ptr,SPlayerInput *player_control)

{
  float *pfVar2;
  CHero *this_ptr_01;
  float fVar3;
  EDeathState EVar3;
  int iVar4;
  int iVar5;
  uint uVar5;
  EDeathState EVar6;
  int *piVar7;
  byte bVar6;
  CHero *this_ptr_00;
  float fVar2;
  float *pfVar1;
  
  if (this_ptr->screen_clear_condition != 0) {
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIM_LBUTTON);
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIM_RBUTTON);
  }
  player_control->strafe_speed = 0.0;
  pfVar1 = &player_control->strafe_speed;
  if (g_KeyboardState[this_ptr->key_strafe_left] == '\0') {
    if (((g_KeyboardState[this_ptr->key_strafe_right] != '\0') && (*pfVar1 < 1.0f)) &&
       (*pfVar1 = g_CGamePtr->delta_time_float / 0.01f + *pfVar1, 1.0f < *pfVar1
       )) {
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
      fVar3 = (float)this_ptr->x_mouse_sensitivity * (float)0.29999999999999999 * (float)1.52587890625e-05
      ;
      pfVar2 = &player_control->turn_speed;
      if (g_KeyboardState[this_ptr->key_left] == '\0') {
        if (((g_KeyboardState[this_ptr->key_right] != '\0') && (*pfVar2 < 0.25f)) &&
           (*pfVar2 = (g_CGamePtr->delta_time_float * 0.25f) / fVar3 + *pfVar2,
           0.25f < *pfVar2)) {
          *pfVar2 = 0.25;
        }
      }
      else if ((-0.25f < *pfVar2) &&
              (fVar3 = *pfVar2 - (g_CGamePtr->delta_time_float * 0.25f) / fVar3,
              *pfVar2 = fVar3, fVar3 < -0.25f)) {
        *pfVar2 = -0.25;
      }
      goto LAB_004dc4e9;
    }
    fVar3 = (g_CGamePtr->delta_time_float * 0.25f) / 0.05f;
    pfVar2 = &player_control->turn_speed;
    if (0.0 <= *pfVar2) {
      *pfVar2 = *pfVar2 - fVar3;
      fVar2 = *pfVar2;
      goto joined_r0x004dcb77;
    }
    fVar3 = *pfVar2 + fVar3;
LAB_004dc4d6:
    player_control->turn_speed = fVar3;
    if (player_control->turn_speed <= 0.0) goto LAB_004dc4e9;
  }
  else {
    pfVar2 = &player_control->strafe_speed;
    if (g_KeyboardState[this_ptr->key_left] == '\0') {
      if (((g_KeyboardState[this_ptr->key_right] != '\0') && (*pfVar2 < 1.0f)) &&
         (*pfVar2 = g_CGamePtr->delta_time_float / 0.01f + *pfVar2,
         1.0f < *pfVar2)) {
        *pfVar2 = 1.0;
      }
    }
    else if ((-1.0f < *pfVar2) &&
            (fVar3 = *pfVar2 - g_CGamePtr->delta_time_float / 0.01f, *pfVar2 = fVar3,
            fVar3 < -1.0f)) {
      *pfVar2 = -1.0;
    }
    fVar3 = (g_CGamePtr->delta_time_float * 0.25f) / 0.05f;
    pfVar2 = &player_control->turn_speed;
    if (*pfVar2 < 0.0) {
      fVar3 = *pfVar2 + fVar3;
      goto LAB_004dc4d6;
    }
    *pfVar2 = *pfVar2 - fVar3;
    fVar2 = *pfVar2;
joined_r0x004dcb77:
    if (0.0 <= fVar2) goto LAB_004dc4e9;
  }
  player_control->turn_speed = 0.0;
LAB_004dc4e9:
  if ((g_KeyboardState[this_ptr->key_point_up] == '\0') &&
     (g_KeyboardState[this_ptr->key_point_down] == '\0')) {
    fVar3 = (g_CGamePtr->delta_time_float * 0.25f) / 0.1f;
    pfVar2 = &player_control->look_up_down_speed;
    if (0.0 <= *pfVar2) {
      *pfVar2 = *pfVar2 - fVar3;
      if (*pfVar2 < 0.0) {
        *pfVar2 = 0.0;
      }
    }
    else {
      *pfVar2 = *pfVar2 + fVar3;
      if (0.0 < *pfVar2) {
        *pfVar2 = 0.0;
      }
    }
  }
  else {
    fVar3 = (float)this_ptr->y_mouse_sensitivity * (float)0.20000000000000001 * (float)1.52587890625e-05;
    pfVar2 = &player_control->look_up_down_speed;
    if (g_KeyboardState[this_ptr->key_point_up] == '\0') {
      if (((g_KeyboardState[this_ptr->key_point_down] != '\0') && (*pfVar2 < 0.25f)) &&
         (*pfVar2 = (g_CGamePtr->delta_time_float * 0.25f) / fVar3 + *pfVar2,
         0.25f < *pfVar2)) {
        *pfVar2 = 0.25;
      }
    }
    else if ((-0.25f < *pfVar2) &&
            (fVar3 = *pfVar2 - (g_CGamePtr->delta_time_float * 0.25f) / fVar3,
            *pfVar2 = fVar3, fVar3 < -0.25f)) {
      *pfVar2 = -0.25;
    }
  }
  if (this_ptr->always_run == 0) {
    bVar6 = g_KeyboardState[this_ptr->key_run];
  }
  else {
    bVar6 = g_KeyboardState[this_ptr->key_run] == '\0';
  }
  (player_control->action_state).run = (uint)bVar6;
  iVar5 = this_ptr->key_walk;
  if (g_PrevKeyboardState[iVar5] != g_KeyboardState[iVar5]) {
    (player_control->action_state).walk = (uint)(byte)g_KeyboardState[iVar5];
  }
  iVar5 = this_ptr->key_backup;
  if (g_PrevKeyboardState[iVar5] != g_KeyboardState[iVar5]) {
    (player_control->action_state).backup = (uint)(byte)g_KeyboardState[iVar5];
  }
  EVar3 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                    (&g_HeroActors[g_LocalHeroIndex]->base);
  if (EVar3 == DEATH_STATE_ALIVE) {
    iVar5 = this_ptr->key_fire;
    if (g_PrevKeyboardState[iVar5] != g_KeyboardState[iVar5]) {
      (player_control->action_state).fire = (uint)(byte)g_KeyboardState[iVar5];
    }
  }
  else {
    (player_control->action_state).fire = 0;
  }
  piVar7 = &(player_control->action_state).use_item;
  if (g_PrevKeyboardState[this_ptr->key_use_item] == g_KeyboardState[this_ptr->key_use_item]) {
    *piVar7 = 0;
  }
  else {
    *piVar7 = (uint)(byte)g_KeyboardState[this_ptr->key_use_item];
  }
  piVar7 = &(player_control->action_state).light;
  if (g_PrevKeyboardState[this_ptr->key_light] == g_KeyboardState[this_ptr->key_light]) {
    *piVar7 = 0;
  }
  else {
    *piVar7 = (uint)(byte)g_KeyboardState[this_ptr->key_light];
  }
  piVar7 = &(player_control->action_state).draw;
  if (g_PrevKeyboardState[this_ptr->key_draw] == g_KeyboardState[this_ptr->key_draw]) {
    *piVar7 = 0;
  }
  else {
    *piVar7 = (uint)(byte)g_KeyboardState[this_ptr->key_draw];
  }
  iVar5 = this_ptr->key_jump;
  piVar7 = &(player_control->action_state).jump;
  if (g_PrevKeyboardState[iVar5] == g_KeyboardState[iVar5]) {
    *piVar7 = 0;
  }
  else {
    *piVar7 = (uint)(byte)g_KeyboardState[iVar5];
  }
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_next_weapon);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,5,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_prev_weapon);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,5,-1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_next_item);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004fec10(&g_HeroActors[g_LocalHeroIndex]->inventory,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_prev_item);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004fec10(&g_HeroActors[g_LocalHeroIndex]->inventory,-1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_next_ammo);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_item_desc);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_toggleDetailView_FUN_00501500
              (&g_HeroActors[g_LocalHeroIndex]->inventory);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_1);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,0,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_2);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,1,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_3);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,2,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_4);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,4,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_weapon_5);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,3,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_infrared);
  if (iVar5 != 0) {
    uVar5 = (uint)(this_ptr->goggles_active == 0);
    this_ptr->goggles_active = uVar5;
    if (((uVar5 == 0) || (this_ptr_01 = g_HeroActors[g_LocalHeroIndex], this_ptr_01 == (CHero *)0x0)
        ) || (EVar6 = (*(((this_ptr_01->base).base.vtable._uc)->_uc).getDeathState)
                                (&this_ptr_01->base), EVar6 == DEATH_STATE_ALIVE)) {
      if (this_ptr->goggles_active != 0) {
        return;
      }
    }
    else {
      this_ptr->goggles_active = 0;
    }
    iVar5 = g_CDemonSetPtr->selected_camera_index;
    core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
              (g_CDemonSetPtr,g_CScriptPtr->focus_actor,1);
    g_CScriptPtr->focus_actor_changed = 0;
    if (iVar5 == g_CDemonSetPtr->selected_camera_index) {
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
      return;
    }
  }
  return;
}
