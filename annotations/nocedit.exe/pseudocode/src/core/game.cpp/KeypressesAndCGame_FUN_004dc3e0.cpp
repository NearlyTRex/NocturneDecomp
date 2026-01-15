// Name: core_game.cpp_KeypressesAndCGame_FUN_004dc3e0
// Address: 004dc3e0
// Address Range: [[004dc3e0, 004dccb4]]
// Convention: __cdecl
// Signature: void core_game.cpp_KeypressesAndCGame_FUN_004dc3e0(CGame * game, SPlayerControl * ctrl)

#include "nocturne.h"

void __cdecl core_game_cpp_KeypressesAndCGame_FUN_004dc3e0(CGame *game,SPlayerControl *ctrl)

{
  float *pfVar1;
  float fVar2;
  CHero *this_ptr;
  CScript *pCVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uStack0000004c;
  SCollisionInfo *in_stack_00000054;
  SCollisionInfo *in_stack_ffffffec;
  
  if (game->screen_clear_condition != 0) {
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x200);
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x201);
  }
  ctrl->strafe_speed = 0.0;
  pfVar1 = &ctrl->strafe_speed;
  if (g_KeyboardState[game->key_strafe_left] == '\0') {
    if (((g_KeyboardState[game->key_strafe_right] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
       (*pfVar1 = g_CGamePtr->delta_time_float / 0.01f + *pfVar1, 0x3f800000 < (int)*pfVar1
       )) {
      *pfVar1 = 1.0;
    }
  }
  else if ((-1f < *pfVar1) &&
          (fVar2 = *pfVar1 - g_CGamePtr->delta_time_float / 0.01f, *pfVar1 = fVar2,
          fVar2 < -1f)) {
    *pfVar1 = -1.0;
  }
  if (g_KeyboardState[game->key_strafe] == '\0') {
    if ((g_KeyboardState[game->key_left] == '\0') && (g_KeyboardState[game->key_right] == '\0')) {
      fVar2 = (g_CGamePtr->delta_time_float * 0.25f) / 0.05f;
      pfVar1 = &ctrl->turn_speed;
      if (0.0 <= *pfVar1) {
        *pfVar1 = *pfVar1 - fVar2;
        fVar2 = *pfVar1;
        goto joined_r0x004dcb77;
      }
      fVar2 = *pfVar1 + fVar2;
      goto LAB_004dc4d6;
    }
    fVar2 = (float)game->x_mouse_sensitivity * (float)0.29999999999999999 * (float)1.52587890625e-05;
    pfVar1 = &ctrl->turn_speed;
    if (g_KeyboardState[game->key_left] == '\0') {
      if (((g_KeyboardState[game->key_right] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
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
  else {
    pfVar1 = &ctrl->strafe_speed;
    if (g_KeyboardState[game->key_left] == '\0') {
      if (((g_KeyboardState[game->key_right] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
         (*pfVar1 = g_CGamePtr->delta_time_float / 0.01f + *pfVar1,
         0x3f800000 < (int)*pfVar1)) {
        *pfVar1 = 1.0;
      }
    }
    else if ((-1f < *pfVar1) &&
            (fVar2 = *pfVar1 - g_CGamePtr->delta_time_float / 0.01f, *pfVar1 = fVar2,
            fVar2 < -1f)) {
      *pfVar1 = -1.0;
    }
    in_stack_ffffffec =
         (SCollisionInfo *)((g_CGamePtr->delta_time_float * 0.25f) / 0.05f);
    pfVar1 = &ctrl->turn_speed;
    if (0.0 <= *pfVar1) {
      *pfVar1 = *pfVar1 - (float)in_stack_ffffffec;
      fVar2 = *pfVar1;
joined_r0x004dcb77:
      if (0.0 <= fVar2) goto LAB_004dc4e9;
    }
    else {
      fVar2 = *pfVar1 + (float)in_stack_ffffffec;
LAB_004dc4d6:
      ctrl->turn_speed = fVar2;
      if (ctrl->turn_speed <= 0.0) goto LAB_004dc4e9;
    }
    ctrl->turn_speed = 0.0;
  }
LAB_004dc4e9:
  if ((g_KeyboardState[game->key_point_up] == '\0') &&
     (g_KeyboardState[game->key_point_down] == '\0')) {
    fVar2 = (g_CGamePtr->delta_time_float * 0.25f) / 0.1f;
    pfVar1 = &ctrl->look_up_down_speed;
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
    fVar2 = (float)game->y_mouse_sensitivity * (float)0.20000000000000001 * (float)1.52587890625e-05;
    pfVar1 = &ctrl->look_up_down_speed;
    if (g_KeyboardState[game->key_point_up] == '\0') {
      if (((g_KeyboardState[game->key_point_down] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
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
  if (game->always_run == 0) {
    bVar6 = g_KeyboardState[game->key_run];
  }
  else {
    bVar6 = g_KeyboardState[game->key_run] == '\0';
  }
  ctrl->action_states[2] = (uint)bVar6;
  iVar4 = game->key_walk;
  if (g_PrevKeyboardState[iVar4] != g_KeyboardState[iVar4]) {
    ctrl->action_states[0] = (uint)(byte)g_KeyboardState[iVar4];
  }
  iVar4 = game->key_backup;
  if (g_PrevKeyboardState[iVar4] != g_KeyboardState[iVar4]) {
    ctrl->action_states[1] = (uint)(byte)g_KeyboardState[iVar4];
  }
  iVar4 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].hasCollision)
                    ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_ffffffec);
  if (iVar4 == 0) {
    iVar4 = game->key_fire;
    if (g_PrevKeyboardState[iVar4] != g_KeyboardState[iVar4]) {
      ctrl->action_states[3] = (uint)(byte)g_KeyboardState[iVar4];
    }
  }
  else {
    ctrl->action_states[3] = 0;
  }
  if (g_PrevKeyboardState[game->key_use_item] == g_KeyboardState[game->key_use_item]) {
    ctrl->action_states[4] = 0;
  }
  else {
    ctrl->action_states[4] = (uint)(byte)g_KeyboardState[game->key_use_item];
  }
  if (g_PrevKeyboardState[game->key_light] == g_KeyboardState[game->key_light]) {
    ctrl->action_states[5] = 0;
  }
  else {
    ctrl->action_states[5] = (uint)(byte)g_KeyboardState[game->key_light];
  }
  if (g_PrevKeyboardState[game->key_draw] == g_KeyboardState[game->key_draw]) {
    ctrl->action_states[6] = 0;
  }
  else {
    ctrl->action_states[6] = (uint)(byte)g_KeyboardState[game->key_draw];
  }
  iVar4 = game->key_jump;
  if (g_PrevKeyboardState[iVar4] == g_KeyboardState[iVar4]) {
    ctrl->action_states[7] = 0;
  }
  else {
    ctrl->action_states[7] = (uint)(byte)g_KeyboardState[iVar4];
  }
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,game->key_next_weapon);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,5,1);
  }
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,game->key_prev_weapon);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,5,-1);
  }
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,game->key_next_item);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004fec10(&g_HeroActors[g_LocalHeroIndex]->inventory,1);
  }
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,game->key_prev_item);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004fec10(&g_HeroActors[g_LocalHeroIndex]->inventory,-1);
  }
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,game->key_next_ammo);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,1);
  }
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,game->key_item_desc);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_toggleDetailView_FUN_00501500
              (&g_HeroActors[g_LocalHeroIndex]->inventory);
  }
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,game->key_weapon_1);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,0,1);
  }
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,game->key_weapon_2);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,1,1);
  }
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,game->key_weapon_3);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,2,1);
  }
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,game->key_weapon_4);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,4,1);
  }
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,game->key_weapon_5);
  if (iVar4 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,3,1);
  }
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,game->key_infrared);
  if (iVar4 == 0) {
    return;
  }
  uVar5 = (uint)(game->block_auto_save == 0);
  game->block_auto_save = uVar5;
  if ((uVar5 != 0) && (this_ptr = g_HeroActors[g_LocalHeroIndex], this_ptr != (CHero *)0x0)) {
    uStack0000004c = 0x4dc935;
    iVar4 = (*(this_ptr->base_character).base_actor.vtable[1].hasCollision)
                      ((CDemonActor *)this_ptr,in_stack_00000054);
    if (iVar4 != 0) {
      game->block_auto_save = 0;
      goto LAB_004dc94a;
    }
  }
  if (game->block_auto_save != 0) {
    return;
  }
LAB_004dc94a:
  iVar4 = g_CDemonSetPtr->selected_camera_index;
  uStack0000004c = 0x4dc967;
  core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
            (g_CDemonSetPtr,(CDemonActor *)g_CScriptPtr->focusActor,1);
  pCVar3 = g_CScriptPtr;
  pCVar3->padding_0x10[0] = '\0';
  pCVar3->padding_0x10[1] = '\0';
  pCVar3->padding_0x10[2] = '\0';
  pCVar3->padding_0x10[3] = '\0';
  if (iVar4 != g_CDemonSetPtr->selected_camera_index) {
    return;
  }
  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
            (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
  return;
}
