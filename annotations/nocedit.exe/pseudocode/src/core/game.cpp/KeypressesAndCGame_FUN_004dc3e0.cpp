// Name: core_game.cpp_KeypressesAndCGame_FUN_004dc3e0
// Address: 004dc3e0
// Address Range: [[004dc3e0, 004dccb4]]
// Convention: __cdecl
// Signature: void core_game.cpp_KeypressesAndCGame_FUN_004dc3e0(CGame * game, SPlayerControl * ctrl)
// Cross-references:
//   core_game.cpp_CGame_playerControls_FUN_004dbd80 (004dbd80) at 004dbdb6 [UNCONDITIONAL_CALL]
//   core_game.cpp_CallToJoystickStuff_FUN_004dc230 (004dc230) at 004dc248 [UNCONDITIONAL_CALL]
//   core_game.cpp_SettingCursorPos_FUN_004dccc0 (004dccc0) at 004dccd4 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0062b875 = 0.01000000
//   float FLOAT_0062b879 = -1
//   float FLOAT_0062b87d = 0.25
//   float FLOAT_0062b881 = 0.05000000
//   double DOUBLE_0062b885 = 0.300000000000000
//   double DOUBLE_0062b88d = 0.0000152587890625
//   float FLOAT_0062b895 = -0.25
//   float FLOAT_0062b899 = 0.1000000
//   double DOUBLE_0062b89d = 0.200000000000000
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CScript* g_CScriptPtr = 0310f858
//   CDemonSet* g_CDemonSetPtr = 03114278
//   char[256] g_KeyboardState
//   undefined4 g_CGameInstance.delta_time_float
//   char[600] g_PrevKeyboardState
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   void* g_CKeysPtr
//   CScript g_CScriptInstance
//   undefined4 DAT_0310f864
//   undefined4 DAT_0310f868
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.selected_camera_index
// Function calls:
//   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10
//   core_inv.cpp_CInventory_selectItem_FUN_004fec10
//   core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
//   core_inv.cpp_CInventory_toggleDetailView_FUN_00501500
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0

#include "nocturne.h"

void __cdecl core_game_cpp_KeypressesAndCGame_FUN_004dc3e0(CGame *game,SPlayerControl *ctrl)

{
  float *pfVar1;
  float fVar2;
  CHero *this_ptr;
  CScript *pCVar3;
  CGame *pCVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  undefined4 uStack0000009c;
  SCollisionInfo *in_stack_00000134;
  undefined4 uStack00000138;
  
  pCVar4 = game;
  if (game->screen_clear_condition != 0) {
    (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x200);
    (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x201);
  }
  ctrl->strafe_speed = 0.0;
  pfVar1 = &ctrl->strafe_speed;
  if (g_KeyboardState[game->key_strafe_left] == '\0') {
    if (((g_KeyboardState[game->key_strafe_right] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
       (*pfVar1 = g_CGamePtr->delta_time_float / FLOAT_0062b875 + *pfVar1, 0x3f800000 < (int)*pfVar1
       )) {
      *pfVar1 = 1.0;
    }
  }
  else if ((FLOAT_0062b879 < *pfVar1) &&
          (fVar2 = *pfVar1 - g_CGamePtr->delta_time_float / FLOAT_0062b875, *pfVar1 = fVar2,
          fVar2 < FLOAT_0062b879)) {
    *pfVar1 = -1.0;
  }
  if (g_KeyboardState[game->key_strafe] == '\0') {
    if ((g_KeyboardState[game->key_left] != '\0') || (g_KeyboardState[game->key_right] != '\0')) {
      fVar2 = (float)game->x_mouse_sensitivity * (float)DOUBLE_0062b885 * (float)DOUBLE_0062b88d;
      pfVar1 = &ctrl->turn_speed;
      if (g_KeyboardState[game->key_left] == '\0') {
        if (((g_KeyboardState[game->key_right] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
           (*pfVar1 = (g_CGamePtr->delta_time_float * FLOAT_0062b87d) / fVar2 + *pfVar1,
           0x3e800000 < (int)*pfVar1)) {
          *pfVar1 = 0.25;
        }
      }
      else if ((FLOAT_0062b895 < *pfVar1) &&
              (fVar2 = *pfVar1 - (g_CGamePtr->delta_time_float * FLOAT_0062b87d) / fVar2,
              *pfVar1 = fVar2, fVar2 < FLOAT_0062b895)) {
        *pfVar1 = -0.25;
      }
      goto LAB_004dc4e9;
    }
    fVar2 = (g_CGamePtr->delta_time_float * FLOAT_0062b87d) / FLOAT_0062b881;
    pfVar1 = &ctrl->turn_speed;
    if (0.0 <= *pfVar1) {
      *pfVar1 = *pfVar1 - fVar2;
      fVar2 = *pfVar1;
      goto joined_r0x004dcb77;
    }
    fVar2 = *pfVar1 + fVar2;
LAB_004dc4d6:
    ctrl->turn_speed = fVar2;
    if (ctrl->turn_speed <= 0.0) goto LAB_004dc4e9;
  }
  else {
    pfVar1 = &ctrl->strafe_speed;
    if (g_KeyboardState[game->key_left] == '\0') {
      if (((g_KeyboardState[game->key_right] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
         (*pfVar1 = g_CGamePtr->delta_time_float / FLOAT_0062b875 + *pfVar1,
         0x3f800000 < (int)*pfVar1)) {
        *pfVar1 = 1.0;
      }
    }
    else if ((FLOAT_0062b879 < *pfVar1) &&
            (fVar2 = *pfVar1 - g_CGamePtr->delta_time_float / FLOAT_0062b875, *pfVar1 = fVar2,
            fVar2 < FLOAT_0062b879)) {
      *pfVar1 = -1.0;
    }
    game = (CGame *)((g_CGamePtr->delta_time_float * FLOAT_0062b87d) / FLOAT_0062b881);
    pfVar1 = &ctrl->turn_speed;
    if (*pfVar1 < 0.0) {
      fVar2 = *pfVar1 + (float)game;
      goto LAB_004dc4d6;
    }
    *pfVar1 = *pfVar1 - (float)game;
    fVar2 = *pfVar1;
joined_r0x004dcb77:
    if (0.0 <= fVar2) goto LAB_004dc4e9;
  }
  ctrl->turn_speed = 0.0;
LAB_004dc4e9:
  if ((g_KeyboardState[pCVar4->key_point_up] == '\0') &&
     (g_KeyboardState[pCVar4->key_point_down] == '\0')) {
    fVar2 = (g_CGamePtr->delta_time_float * FLOAT_0062b87d) / FLOAT_0062b899;
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
    fVar2 = (float)pCVar4->y_mouse_sensitivity * (float)DOUBLE_0062b89d * (float)DOUBLE_0062b88d;
    pfVar1 = &ctrl->look_up_down_speed;
    if (g_KeyboardState[pCVar4->key_point_up] == '\0') {
      if (((g_KeyboardState[pCVar4->key_point_down] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
         (*pfVar1 = (g_CGamePtr->delta_time_float * FLOAT_0062b87d) / fVar2 + *pfVar1,
         0x3e800000 < (int)*pfVar1)) {
        *pfVar1 = 0.25;
      }
    }
    else if ((FLOAT_0062b895 < *pfVar1) &&
            (fVar2 = *pfVar1 - (g_CGamePtr->delta_time_float * FLOAT_0062b87d) / fVar2,
            *pfVar1 = fVar2, fVar2 < FLOAT_0062b895)) {
      *pfVar1 = -0.25;
    }
  }
  if (pCVar4->always_run == 0) {
    bVar7 = g_KeyboardState[pCVar4->key_run];
  }
  else {
    bVar7 = g_KeyboardState[pCVar4->key_run] == '\0';
  }
  ctrl->action_states[2] = (uint)bVar7;
  iVar5 = pCVar4->key_walk;
  if (g_PrevKeyboardState[iVar5] != g_KeyboardState[iVar5]) {
    ctrl->action_states[0] = (uint)(byte)g_KeyboardState[iVar5];
  }
  iVar5 = pCVar4->key_backup;
  if (g_PrevKeyboardState[iVar5] != g_KeyboardState[iVar5]) {
    ctrl->action_states[1] = (uint)(byte)g_KeyboardState[iVar5];
  }
  iVar5 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].hasCollision)
                    ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],(SCollisionInfo *)game);
  if (iVar5 == 0) {
    iVar5 = pCVar4->key_fire;
    if (g_PrevKeyboardState[iVar5] != g_KeyboardState[iVar5]) {
      ctrl->action_states[3] = (uint)(byte)g_KeyboardState[iVar5];
    }
  }
  else {
    ctrl->action_states[3] = 0;
  }
  if (g_PrevKeyboardState[pCVar4->key_use_item] == g_KeyboardState[pCVar4->key_use_item]) {
    ctrl->action_states[4] = 0;
  }
  else {
    ctrl->action_states[4] = (uint)(byte)g_KeyboardState[pCVar4->key_use_item];
  }
  if (g_PrevKeyboardState[pCVar4->key_light] == g_KeyboardState[pCVar4->key_light]) {
    ctrl->action_states[5] = 0;
  }
  else {
    ctrl->action_states[5] = (uint)(byte)g_KeyboardState[pCVar4->key_light];
  }
  if (g_PrevKeyboardState[pCVar4->key_draw] == g_KeyboardState[pCVar4->key_draw]) {
    ctrl->action_states[6] = 0;
  }
  else {
    ctrl->action_states[6] = (uint)(byte)g_KeyboardState[pCVar4->key_draw];
  }
  iVar5 = pCVar4->key_jump;
  if (g_PrevKeyboardState[iVar5] == g_KeyboardState[iVar5]) {
    ctrl->action_states[7] = 0;
  }
  else {
    ctrl->action_states[7] = (uint)(byte)g_KeyboardState[iVar5];
  }
  iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,pCVar4->key_next_weapon);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,5,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,pCVar4->key_prev_weapon);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,5,-1);
  }
  iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,pCVar4->key_next_item);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004fec10(&g_HeroActors[g_LocalHeroIndex]->inventory,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,pCVar4->key_prev_item);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004fec10(&g_HeroActors[g_LocalHeroIndex]->inventory,-1);
  }
  iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,pCVar4->key_next_ammo);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,pCVar4->key_item_desc);
  if (iVar5 != 0) {
    uStack0000009c = 0x4dc7cb;
    core_inv_cpp_CInventory_toggleDetailView_FUN_00501500
              (&g_HeroActors[g_LocalHeroIndex]->inventory);
  }
  uStack0000009c = 0x4dc7dd;
  iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,pCVar4->key_weapon_1);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,0,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,pCVar4->key_weapon_2);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,1,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,pCVar4->key_weapon_3);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,2,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,pCVar4->key_weapon_4);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,4,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,pCVar4->key_weapon_5);
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
              (&g_HeroActors[g_LocalHeroIndex]->inventory,(CDemonActor *)0x0,3,1);
  }
  iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,pCVar4->key_infrared);
  if (iVar5 != 0) {
    uVar6 = (uint)(pCVar4->block_auto_save == 0);
    pCVar4->block_auto_save = uVar6;
    if (((uVar6 == 0) || (this_ptr = g_HeroActors[g_LocalHeroIndex], this_ptr == (CHero *)0x0)) ||
       (iVar5 = (*(this_ptr->base_character).base_actor.vtable[1].hasCollision)
                          ((CDemonActor *)this_ptr,in_stack_00000134), iVar5 == 0)) {
      if (pCVar4->block_auto_save != 0) {
        return;
      }
    }
    else {
      pCVar4->block_auto_save = 0;
    }
    iVar5 = g_CDemonSetPtr->selected_camera_index;
    uStack00000138 = 0x4dc967;
    core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
              (g_CDemonSetPtr,(CDemonActor *)g_CScriptPtr->focusActor,1);
    pCVar3 = g_CScriptPtr;
    pCVar3->padding_0x10[0] = '\0';
    pCVar3->padding_0x10[1] = '\0';
    pCVar3->padding_0x10[2] = '\0';
    pCVar3->padding_0x10[3] = '\0';
    if (iVar5 == g_CDemonSetPtr->selected_camera_index) {
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
      return;
    }
  }
  return;
}


// Assembly code:
// 004dc3e0: PUSH EBX
//   Label: core_game.cpp_KeypressesAndCGame_FUN_004dc3e0
// 004dc3e1: PUSH ESI
// 004dc3e2: PUSH EDI
// 004dc3e3: PUSH EBP
// 004dc3e4: SUB ESP,0x14
// 004dc3e7: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 004dc3eb: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 004dc3ef: CMP dword ptr [EBX + 0x27c],0x0
// 004dc3f6: JNZ 0x004dc991
//   XREF to: 004dc991 (CONDITIONAL_JUMP)
// 004dc3fc: MOV dword ptr [ESI + 0x20],0x0
//   Label: LAB_004dc3fc
// 004dc403: MOV EAX,dword ptr [EBX + 0x38]
// 004dc406: LEA EDX,[ESI + 0x20]
// 004dc409: MOV ECX,dword ptr [EBX + 0x3c]
// 004dc40c: CMP byte ptr [EAX + 0x2d03e98],0x0
//   XREF to: 02d03e98 (DATA)
// 004dc413: JZ 0x004dc9bc
//   XREF to: 004dc9bc (CONDITIONAL_JUMP)
// 004dc419: FLD float ptr [EDX]
// 004dc41b: FCOMP float ptr [0x0062b879]
//   XREF to: 0062b879 (READ)
// 004dc421: FNSTSW AX
// 004dc423: SAHF
// 004dc424: JBE 0x004dc44c
//   XREF to: 004dc44c (CONDITIONAL_JUMP)
// 004dc426: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004dc42b: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004dc431: FDIV float ptr [0x0062b875]
//   XREF to: 0062b875 (READ)
// 004dc437: FSUBR float ptr [EDX]
// 004dc439: FST float ptr [EDX]
// 004dc43b: FCOMP float ptr [0x0062b879]
//   XREF to: 0062b879 (READ)
// 004dc441: FNSTSW AX
// 004dc443: SAHF
// 004dc444: JNC 0x004dc44c
//   XREF to: 004dc44c (CONDITIONAL_JUMP)
// 004dc446: MOV dword ptr [EDX],0xbf800000
// 004dc44c: MOV EAX,dword ptr [EBX + 0x34]
//   Label: LAB_004dc44c
// 004dc44f: CMP byte ptr [EAX + 0x2d03e98],0x0
//   XREF to: 02d03e98 (DATA)
// 004dc456: JZ 0x004dca61
//   XREF to: 004dca61 (CONDITIONAL_JUMP)
// 004dc45c: MOV EAX,dword ptr [EBX + 0x44]
// 004dc45f: LEA EDX,[ESI + 0x20]
// 004dc462: MOV ECX,dword ptr [EBX + 0x40]
// 004dc465: CMP byte ptr [EAX + 0x2d03e98],0x0
//   XREF to: 02d03e98 (DATA)
// 004dc46c: JZ 0x004dca01
//   XREF to: 004dca01 (CONDITIONAL_JUMP)
// 004dc472: FLD float ptr [EDX]
// 004dc474: FCOMP float ptr [0x0062b879]
//   XREF to: 0062b879 (READ)
// 004dc47a: FNSTSW AX
// 004dc47c: SAHF
// 004dc47d: JBE 0x004dc4a5
//   XREF to: 004dc4a5 (CONDITIONAL_JUMP)
// 004dc47f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004dc484: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004dc48a: FDIV float ptr [0x0062b875]
//   XREF to: 0062b875 (READ)
// 004dc490: FSUBR float ptr [EDX]
// 004dc492: FST float ptr [EDX]
// 004dc494: FCOMP float ptr [0x0062b879]
//   XREF to: 0062b879 (READ)
// 004dc49a: FNSTSW AX
// 004dc49c: SAHF
// 004dc49d: JNC 0x004dc4a5
//   XREF to: 004dc4a5 (CONDITIONAL_JUMP)
// 004dc49f: MOV dword ptr [EDX],0xbf800000
// 004dc4a5: MOV EAX,[0x0067b654]
//   Label: LAB_004dc4a5
//   XREF to: 0067b654 (READ)
// 004dc4aa: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004dc4b0: FMUL float ptr [0x0062b87d]
//   XREF to: 0062b87d (READ)
// 004dc4b6: FDIV float ptr [0x0062b881]
//   XREF to: 0062b881 (READ)
// 004dc4bc: FLDZ
// 004dc4be: LEA EDX,[ESI + 0x24]
// 004dc4c1: FXCH
// 004dc4c3: FSTP float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004dc4c6: FCOMP float ptr [EDX]
// 004dc4c8: FNSTSW AX
// 004dc4ca: SAHF
// 004dc4cb: JBE 0x004dca46
//   XREF to: 004dca46 (CONDITIONAL_JUMP)
// 004dc4d1: FLD float ptr [EDX]
// 004dc4d3: FADD float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004dc4d6: FLDZ
//   Label: LAB_004dc4d6
// 004dc4d8: FXCH
// 004dc4da: FSTP float ptr [EDX]
// 004dc4dc: FCOMP float ptr [EDX]
// 004dc4de: FNSTSW AX
// 004dc4e0: SAHF
// 004dc4e1: JNC 0x004dc4e9
//   XREF to: 004dc4e9 (CONDITIONAL_JUMP)
// 004dc4e3: MOV dword ptr [EDX],0x0
//   Label: LAB_004dc4e3
// 004dc4e9: MOV EAX,dword ptr [EBX + 0x60]
//   Label: LAB_004dc4e9
// 004dc4ec: CMP byte ptr [EAX + 0x2d03e98],0x0
//   XREF to: 02d03e98 (DATA)
// 004dc4f3: JZ 0x004dcb82
//   XREF to: 004dcb82 (CONDITIONAL_JUMP)
// 004dc4f9: FILD dword ptr [EBX + 0xa0]
//   Label: LAB_004dc4f9
// 004dc4ff: FMUL double ptr [0x0062b89d]
//   XREF to: 0062b89d (READ)
// 004dc505: FMUL double ptr [0x0062b88d]
//   XREF to: 0062b88d (READ)
// 004dc50b: LEA EDX,[ESI + 0x28]
// 004dc50e: MOV ECX,dword ptr [EBX + 0x60]
// 004dc511: MOV EAX,dword ptr [EBX + 0x64]
// 004dc514: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (WRITE)
// 004dc518: CMP byte ptr [ECX + 0x2d03e98],0x0
//   XREF to: 02d03e98 (DATA)
// 004dc51f: JZ 0x004dcbdd
//   XREF to: 004dcbdd (CONDITIONAL_JUMP)
// 004dc525: FLD float ptr [EDX]
// 004dc527: FCOMP float ptr [0x0062b895]
//   XREF to: 0062b895 (READ)
// 004dc52d: FNSTSW AX
// 004dc52f: SAHF
// 004dc530: JBE 0x004dc55c
//   XREF to: 004dc55c (CONDITIONAL_JUMP)
// 004dc532: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004dc537: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004dc53d: FMUL float ptr [0x0062b87d]
//   XREF to: 0062b87d (READ)
// 004dc543: FDIV float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004dc547: FSUBR float ptr [EDX]
// 004dc549: FST float ptr [EDX]
// 004dc54b: FCOMP float ptr [0x0062b895]
//   XREF to: 0062b895 (READ)
// 004dc551: FNSTSW AX
// 004dc553: SAHF
// 004dc554: JNC 0x004dc55c
//   XREF to: 004dc55c (CONDITIONAL_JUMP)
// 004dc556: MOV dword ptr [EDX],0xbe800000
// 004dc55c: CMP dword ptr [EBX + 0x98],0x0
//   Label: LAB_004dc55c
// 004dc563: JZ 0x004dcc48
//   XREF to: 004dcc48 (CONDITIONAL_JUMP)
// 004dc569: MOV EAX,dword ptr [EBX + 0x30]
// 004dc56c: CMP byte ptr [EAX + 0x2d03e98],0x0
//   XREF to: 02d03e98 (DATA)
// 004dc573: SETZ AL
// 004dc576: AND EAX,0xff
//   Label: LAB_004dc576
// 004dc57b: MOV dword ptr [ESI + 0x8],EAX
// 004dc57e: MOV EDX,dword ptr [EBX + 0x28]
// 004dc581: MOV AL,byte ptr [EDX + 0x2d82670]
//   XREF to: 02d82670 (DATA)
// 004dc587: CMP AL,byte ptr [EDX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 004dc58d: JZ 0x004dc599
//   XREF to: 004dc599 (CONDITIONAL_JUMP)
// 004dc58f: XOR EAX,EAX
// 004dc591: MOV AL,byte ptr [EDX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 004dc597: MOV dword ptr [ESI],EAX
// 004dc599: MOV EDX,dword ptr [EBX + 0x2c]
//   Label: LAB_004dc599
// 004dc59c: MOV AL,byte ptr [EDX + 0x2d82670]
//   XREF to: 02d82670 (DATA)
// 004dc5a2: MOV AH,byte ptr [EDX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 004dc5a8: LEA ECX,[ESI + 0x4]
// 004dc5ab: CMP AL,AH
// 004dc5ad: JZ 0x004dc5b9
//   XREF to: 004dc5b9 (CONDITIONAL_JUMP)
// 004dc5af: XOR EAX,EAX
// 004dc5b1: MOV AL,byte ptr [EDX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 004dc5b7: MOV dword ptr [ECX],EAX
// 004dc5b9: MOV EAX,[0x02db87d0]
//   Label: LAB_004dc5b9
//   XREF to: 02db87d0 (READ)
// 004dc5be: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004dc5c5: PUSH EAX
// 004dc5c6: MOV EDX,dword ptr [EAX + 0x154]
// 004dc5cc: CALL dword ptr [EDX + 0x120]
// 004dc5d2: ADD ESP,0x4
// 004dc5d5: TEST EAX,EAX
// 004dc5d7: JNZ 0x004dcc56
//   XREF to: 004dcc56 (CONDITIONAL_JUMP)
// 004dc5dd: MOV EDX,dword ptr [EBX + 0x48]
// 004dc5e0: MOV AL,byte ptr [EDX + 0x2d82670]
//   XREF to: 02d82670 (DATA)
// 004dc5e6: MOV AH,byte ptr [EDX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 004dc5ec: LEA ECX,[ESI + 0xc]
// 004dc5ef: CMP AL,AH
// 004dc5f1: JZ 0x004dc5fd
//   XREF to: 004dc5fd (CONDITIONAL_JUMP)
// 004dc5f3: XOR EAX,EAX
// 004dc5f5: MOV AL,byte ptr [EDX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 004dc5fb: MOV dword ptr [ECX],EAX
// 004dc5fd: MOV EDX,dword ptr [EBX + 0x4c]
//   Label: LAB_004dc5fd
// 004dc600: MOV CL,byte ptr [EDX + 0x2d82670]
//   XREF to: 02d82670 (DATA)
// 004dc606: MOV CH,byte ptr [EDX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 004dc60c: LEA EAX,[ESI + 0x10]
// 004dc60f: CMP CL,CH
// 004dc611: JZ 0x004dcc62
//   XREF to: 004dcc62 (CONDITIONAL_JUMP)
// 004dc617: MOV DL,CH
// 004dc619: AND EDX,0xff
// 004dc61f: MOV dword ptr [EAX],EDX
// 004dc621: MOV EDX,dword ptr [EBX + 0x50]
//   Label: LAB_004dc621
// 004dc624: MOV CL,byte ptr [EDX + 0x2d82670]
//   XREF to: 02d82670 (DATA)
// 004dc62a: MOV CH,byte ptr [EDX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 004dc630: LEA EAX,[ESI + 0x14]
// 004dc633: CMP CL,CH
// 004dc635: JZ 0x004dcc6d
//   XREF to: 004dcc6d (CONDITIONAL_JUMP)
// 004dc63b: MOV DL,CH
// 004dc63d: AND EDX,0xff
// 004dc643: MOV dword ptr [EAX],EDX
// 004dc645: MOV EDX,dword ptr [EBX + 0x58]
//   Label: LAB_004dc645
// 004dc648: MOV CL,byte ptr [EDX + 0x2d82670]
//   XREF to: 02d82670 (DATA)
// 004dc64e: MOV CH,byte ptr [EDX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 004dc654: LEA EAX,[ESI + 0x18]
// 004dc657: CMP CL,CH
// 004dc659: JZ 0x004dcc78
//   XREF to: 004dcc78 (CONDITIONAL_JUMP)
// 004dc65f: MOV DL,CH
// 004dc661: AND EDX,0xff
// 004dc667: MOV dword ptr [EAX],EDX
// 004dc669: MOV EDX,dword ptr [EBX + 0x5c]
//   Label: LAB_004dc669
// 004dc66c: MOV AL,byte ptr [EDX + 0x2d82670]
//   XREF to: 02d82670 (DATA)
// 004dc672: MOV AH,byte ptr [EDX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 004dc678: ADD ESI,0x1c
// 004dc67b: CMP AL,AH
// 004dc67d: JZ 0x004dcc83
//   XREF to: 004dcc83 (CONDITIONAL_JUMP)
// 004dc683: XOR EAX,EAX
// 004dc685: MOV AL,byte ptr [EDX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 004dc68b: MOV dword ptr [ESI],EAX
// 004dc68d: MOV ECX,dword ptr [EBX + 0x7c]
//   Label: LAB_004dc68d
// 004dc690: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc695: PUSH ECX
// 004dc696: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dc698: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc699: CALL dword ptr [EDX + 0x4]
// 004dc69c: ADD ESP,0x8
// 004dc69f: TEST EAX,EAX
// 004dc6a1: JZ 0x004dc6c3
//   XREF to: 004dc6c3 (CONDITIONAL_JUMP)
// 004dc6a3: PUSH 0x1
// 004dc6a5: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004dc6aa: PUSH 0x5
// 004dc6ac: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004dc6b3: PUSH 0x0
// 004dc6b5: ADD EAX,0x1f738
// 004dc6ba: PUSH EAX
// 004dc6bb: CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
//   XREF to: 004feb10 (UNCONDITIONAL_CALL)
// 004dc6c0: ADD ESP,0x10
// 004dc6c3: MOV ESI,dword ptr [EBX + 0x80]
//   Label: LAB_004dc6c3
// 004dc6c9: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc6ce: PUSH ESI
// 004dc6cf: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dc6d1: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc6d2: CALL dword ptr [EDX + 0x4]
// 004dc6d5: ADD ESP,0x8
// 004dc6d8: TEST EAX,EAX
// 004dc6da: JZ 0x004dc6fc
//   XREF to: 004dc6fc (CONDITIONAL_JUMP)
// 004dc6dc: PUSH -0x1
// 004dc6de: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004dc6e3: PUSH 0x5
// 004dc6e5: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004dc6ec: PUSH 0x0
// 004dc6ee: ADD EAX,0x1f738
// 004dc6f3: PUSH EAX
// 004dc6f4: CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
//   XREF to: 004feb10 (UNCONDITIONAL_CALL)
// 004dc6f9: ADD ESP,0x10
// 004dc6fc: MOV EDI,dword ptr [EBX + 0x84]
//   Label: LAB_004dc6fc
// 004dc702: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc707: PUSH EDI
// 004dc708: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dc70a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc70b: CALL dword ptr [EDX + 0x4]
// 004dc70e: ADD ESP,0x8
// 004dc711: TEST EAX,EAX
// 004dc713: JZ 0x004dc731
//   XREF to: 004dc731 (CONDITIONAL_JUMP)
// 004dc715: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004dc71a: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004dc721: PUSH 0x1
// 004dc723: ADD EAX,0x1f738
// 004dc728: PUSH EAX
// 004dc729: CALL core_inv.cpp_CInventory_selectItem_FUN_004fec10
//   XREF to: 004fec10 (UNCONDITIONAL_CALL)
// 004dc72e: ADD ESP,0x8
// 004dc731: MOV EBP,dword ptr [EBX + 0x88]
//   Label: LAB_004dc731
// 004dc737: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc73c: PUSH EBP
// 004dc73d: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dc73f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc740: CALL dword ptr [EDX + 0x4]
// 004dc743: ADD ESP,0x8
// 004dc746: TEST EAX,EAX
// 004dc748: JZ 0x004dc766
//   XREF to: 004dc766 (CONDITIONAL_JUMP)
// 004dc74a: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004dc74f: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004dc756: PUSH -0x1
// 004dc758: ADD EAX,0x1f738
// 004dc75d: PUSH EAX
// 004dc75e: CALL core_inv.cpp_CInventory_selectItem_FUN_004fec10
//   XREF to: 004fec10 (UNCONDITIONAL_CALL)
// 004dc763: ADD ESP,0x8
// 004dc766: MOV ECX,dword ptr [EBX + 0x90]
//   Label: LAB_004dc766
// 004dc76c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc771: PUSH ECX
// 004dc772: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dc774: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc775: CALL dword ptr [EDX + 0x4]
// 004dc778: ADD ESP,0x8
// 004dc77b: TEST EAX,EAX
// 004dc77d: JZ 0x004dc79b
//   XREF to: 004dc79b (CONDITIONAL_JUMP)
// 004dc77f: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004dc784: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004dc78b: PUSH 0x1
// 004dc78d: ADD EAX,0x1f738
// 004dc792: PUSH EAX
// 004dc793: CALL core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10
//   XREF to: 004fed10 (UNCONDITIONAL_CALL)
// 004dc798: ADD ESP,0x8
// 004dc79b: MOV ESI,dword ptr [EBX + 0x8c]
//   Label: LAB_004dc79b
// 004dc7a1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc7a6: PUSH ESI
// 004dc7a7: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dc7a9: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc7aa: CALL dword ptr [EDX + 0x4]
// 004dc7ad: ADD ESP,0x8
// 004dc7b0: TEST EAX,EAX
// 004dc7b2: JZ 0x004dc7ce
//   XREF to: 004dc7ce (CONDITIONAL_JUMP)
// 004dc7b4: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004dc7b9: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004dc7c0: ADD EAX,0x1f738
// 004dc7c5: PUSH EAX
// 004dc7c6: CALL core_inv.cpp_CInventory_toggleDetailView_FUN_00501500
//   XREF to: 00501500 (UNCONDITIONAL_CALL)
// 004dc7cb: ADD ESP,0x4
// 004dc7ce: MOV EDI,dword ptr [EBX + 0x68]
//   Label: LAB_004dc7ce
// 004dc7d1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc7d6: PUSH EDI
// 004dc7d7: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dc7d9: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc7da: CALL dword ptr [EDX + 0x4]
// 004dc7dd: ADD ESP,0x8
// 004dc7e0: TEST EAX,EAX
// 004dc7e2: JZ 0x004dc804
//   XREF to: 004dc804 (CONDITIONAL_JUMP)
// 004dc7e4: PUSH 0x1
// 004dc7e6: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004dc7eb: PUSH 0x0
// 004dc7ed: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004dc7f4: PUSH 0x0
// 004dc7f6: ADD EAX,0x1f738
// 004dc7fb: PUSH EAX
// 004dc7fc: CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
//   XREF to: 004feb10 (UNCONDITIONAL_CALL)
// 004dc801: ADD ESP,0x10
// 004dc804: MOV EBP,dword ptr [EBX + 0x6c]
//   Label: LAB_004dc804
// 004dc807: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc80c: PUSH EBP
// 004dc80d: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dc80f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc810: CALL dword ptr [EDX + 0x4]
// 004dc813: ADD ESP,0x8
// 004dc816: TEST EAX,EAX
// 004dc818: JZ 0x004dc83a
//   XREF to: 004dc83a (CONDITIONAL_JUMP)
// 004dc81a: PUSH 0x1
// 004dc81c: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004dc821: PUSH 0x1
// 004dc823: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004dc82a: PUSH 0x0
// 004dc82c: ADD EAX,0x1f738
// 004dc831: PUSH EAX
// 004dc832: CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
//   XREF to: 004feb10 (UNCONDITIONAL_CALL)
// 004dc837: ADD ESP,0x10
// 004dc83a: MOV ECX,dword ptr [EBX + 0x70]
//   Label: LAB_004dc83a
// 004dc83d: MOV EDX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004dc843: PUSH ECX
// 004dc844: MOV EAX,dword ptr [EDX]
//   XREF to: 02dcd7d4 (READ)
// 004dc846: PUSH EDX
//   XREF to: 02dcd7d4 (DATA)
// 004dc847: CALL dword ptr [EAX + 0x4]
// 004dc84a: ADD ESP,0x8
// 004dc84d: TEST EAX,EAX
// 004dc84f: JZ 0x004dc871
//   XREF to: 004dc871 (CONDITIONAL_JUMP)
// 004dc851: PUSH 0x1
// 004dc853: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004dc858: PUSH 0x2
// 004dc85a: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004dc861: PUSH 0x0
// 004dc863: ADD EAX,0x1f738
// 004dc868: PUSH EAX
// 004dc869: CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
//   XREF to: 004feb10 (UNCONDITIONAL_CALL)
// 004dc86e: ADD ESP,0x10
// 004dc871: MOV ESI,dword ptr [EBX + 0x74]
//   Label: LAB_004dc871
// 004dc874: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc879: PUSH ESI
// 004dc87a: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dc87c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc87d: CALL dword ptr [EDX + 0x4]
// 004dc880: ADD ESP,0x8
// 004dc883: TEST EAX,EAX
// 004dc885: JZ 0x004dc8a7
//   XREF to: 004dc8a7 (CONDITIONAL_JUMP)
// 004dc887: PUSH 0x1
// 004dc889: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004dc88e: PUSH 0x4
// 004dc890: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004dc897: PUSH 0x0
// 004dc899: ADD EAX,0x1f738
// 004dc89e: PUSH EAX
// 004dc89f: CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
//   XREF to: 004feb10 (UNCONDITIONAL_CALL)
// 004dc8a4: ADD ESP,0x10
// 004dc8a7: MOV EDI,dword ptr [EBX + 0x78]
//   Label: LAB_004dc8a7
// 004dc8aa: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc8af: PUSH EDI
// 004dc8b0: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dc8b2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc8b3: CALL dword ptr [EDX + 0x4]
// 004dc8b6: ADD ESP,0x8
// 004dc8b9: TEST EAX,EAX
// 004dc8bb: JZ 0x004dc8dd
//   XREF to: 004dc8dd (CONDITIONAL_JUMP)
// 004dc8bd: PUSH 0x1
// 004dc8bf: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004dc8c4: PUSH 0x3
// 004dc8c6: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004dc8cd: PUSH 0x0
// 004dc8cf: ADD EAX,0x1f738
// 004dc8d4: PUSH EAX
// 004dc8d5: CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
//   XREF to: 004feb10 (UNCONDITIONAL_CALL)
// 004dc8da: ADD ESP,0x10
// 004dc8dd: MOV EBP,dword ptr [EBX + 0x54]
//   Label: LAB_004dc8dd
// 004dc8e0: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc8e5: PUSH EBP
// 004dc8e6: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dc8e8: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc8e9: CALL dword ptr [EDX + 0x4]
// 004dc8ec: ADD ESP,0x8
// 004dc8ef: TEST EAX,EAX
// 004dc8f1: JZ 0x004dc989
//   XREF to: 004dc989 (CONDITIONAL_JUMP)
// 004dc8f7: CMP dword ptr [EBX + 0x240],0x0
// 004dc8fe: SETZ AL
// 004dc901: AND EAX,0xff
// 004dc906: MOV dword ptr [EBX + 0x240],EAX
// 004dc90c: JZ 0x004dcc8e
//   XREF to: 004dcc8e (CONDITIONAL_JUMP)
// 004dc912: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004dc917: SHL EAX,0x2
// 004dc91a: MOV ESI,dword ptr [EAX + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004dc920: TEST ESI,ESI
// 004dc922: JZ 0x004dcc8e
//   XREF to: 004dcc8e (CONDITIONAL_JUMP)
// 004dc928: PUSH ESI
// 004dc929: MOV EDX,dword ptr [ESI + 0x154]
// 004dc92f: CALL dword ptr [EDX + 0x120]
// 004dc935: ADD ESP,0x4
// 004dc938: TEST EAX,EAX
// 004dc93a: JZ 0x004dcc8e
//   XREF to: 004dcc8e (CONDITIONAL_JUMP)
// 004dc940: MOV dword ptr [EBX + 0x240],0x0
// 004dc94a: MOV EDX,dword ptr [0x00680d50]
//   Label: LAB_004dc94a
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 004dc950: PUSH 0x1
// 004dc952: MOV EBP,dword ptr [EDX + 0xc]
//   XREF to: 0310f864 (READ)
// 004dc955: PUSH EBP
// 004dc956: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004dc95b: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004dc95c: MOV EBX,dword ptr [EAX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 004dc962: CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
//   XREF to: 005751d0 (UNCONDITIONAL_CALL)
// 004dc967: MOV EAX,[0x00680d50]
//   XREF to: 00680d50 (READ)
// 004dc96c: MOV dword ptr [EAX + 0x10],0x0
//   XREF to: 0310f868 (WRITE)
// 004dc973: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (DATA)
//   XREF to: 006810c8 (READ)
// 004dc978: MOV EDX,dword ptr [EAX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 004dc97e: ADD ESP,0xc
// 004dc981: CMP EBX,EDX
// 004dc983: JZ 0x004dcca3
//   XREF to: 004dcca3 (CONDITIONAL_JUMP)
// 004dc989: ADD ESP,0x14
//   Label: LAB_004dc989
// 004dc98c: POP EBP
// 004dc98d: POP EDI
// 004dc98e: POP ESI
// 004dc98f: POP EBX
// 004dc990: RET
// 004dc991: PUSH 0x200
//   Label: LAB_004dc991
// 004dc996: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc99b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc99c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dc99e: CALL dword ptr [EDX + 0x4]
// 004dc9a1: ADD ESP,0x8
// 004dc9a4: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc9a9: PUSH 0x201
// 004dc9ae: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dc9b0: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc9b1: CALL dword ptr [EDX + 0x4]
// 004dc9b4: ADD ESP,0x8
// 004dc9b7: JMP 0x004dc3fc
//   XREF to: 004dc3fc (UNCONDITIONAL_JUMP)
// 004dc9bc: CMP byte ptr [ECX + 0x2d03e98],0x0
//   Label: LAB_004dc9bc
//   XREF to: 02d03e98 (DATA)
// 004dc9c3: JZ 0x004dc44c
//   XREF to: 004dc44c (CONDITIONAL_JUMP)
// 004dc9c9: CMP dword ptr [EDX],0x3f800000
// 004dc9cf: JGE 0x004dc44c
//   XREF to: 004dc44c (CONDITIONAL_JUMP)
// 004dc9d5: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004dc9da: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004dc9e0: FDIV float ptr [0x0062b875]
//   XREF to: 0062b875 (READ)
// 004dc9e6: FADD float ptr [EDX]
// 004dc9e8: FSTP float ptr [EDX]
// 004dc9ea: CMP dword ptr [EDX],0x3f800000
// 004dc9f0: JLE 0x004dc44c
//   XREF to: 004dc44c (CONDITIONAL_JUMP)
// 004dc9f6: MOV dword ptr [EDX],0x3f800000
// 004dc9fc: JMP 0x004dc44c
//   XREF to: 004dc44c (UNCONDITIONAL_JUMP)
// 004dca01: CMP byte ptr [ECX + 0x2d03e98],0x0
//   Label: LAB_004dca01
//   XREF to: 02d03e98 (DATA)
// 004dca08: JZ 0x004dc4a5
//   XREF to: 004dc4a5 (CONDITIONAL_JUMP)
// 004dca0e: CMP dword ptr [EDX],0x3f800000
// 004dca14: JGE 0x004dc4a5
//   XREF to: 004dc4a5 (CONDITIONAL_JUMP)
// 004dca1a: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004dca1f: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004dca25: FDIV float ptr [0x0062b875]
//   XREF to: 0062b875 (READ)
// 004dca2b: FADD float ptr [EDX]
// 004dca2d: FSTP float ptr [EDX]
// 004dca2f: CMP dword ptr [EDX],0x3f800000
// 004dca35: JLE 0x004dc4a5
//   XREF to: 004dc4a5 (CONDITIONAL_JUMP)
// 004dca3b: MOV dword ptr [EDX],0x3f800000
// 004dca41: JMP 0x004dc4a5
//   XREF to: 004dc4a5 (UNCONDITIONAL_JUMP)
// 004dca46: FLD float ptr [EDX]
//   Label: LAB_004dca46
// 004dca48: FSUB float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004dca4b: FLDZ
// 004dca4d: FXCH
// 004dca4f: FSTP float ptr [EDX]
// 004dca51: FCOMP float ptr [EDX]
// 004dca53: FNSTSW AX
// 004dca55: SAHF
// 004dca56: JBE 0x004dc4e9
//   XREF to: 004dc4e9 (CONDITIONAL_JUMP)
// 004dca5c: JMP 0x004dc4e3
//   XREF to: 004dc4e3 (UNCONDITIONAL_JUMP)
// 004dca61: MOV EAX,dword ptr [EBX + 0x44]
//   Label: LAB_004dca61
// 004dca64: CMP byte ptr [EAX + 0x2d03e98],0x0
//   XREF to: 02d03e98 (DATA)
// 004dca6b: JZ 0x004dcadd
//   XREF to: 004dcadd (CONDITIONAL_JUMP)
// 004dca6d: FILD dword ptr [EBX + 0x9c]
//   Label: LAB_004dca6d
// 004dca73: FMUL double ptr [0x0062b885]
//   XREF to: 0062b885 (READ)
// 004dca79: FMUL double ptr [0x0062b88d]
//   XREF to: 0062b88d (READ)
// 004dca7f: LEA EDX,[ESI + 0x24]
// 004dca82: MOV ECX,dword ptr [EBX + 0x44]
// 004dca85: MOV EAX,dword ptr [EBX + 0x40]
// 004dca88: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (WRITE)
// 004dca8c: CMP byte ptr [ECX + 0x2d03e98],0x0
//   XREF to: 02d03e98 (DATA)
// 004dca93: JZ 0x004dcb1d
//   XREF to: 004dcb1d (CONDITIONAL_JUMP)
// 004dca99: FLD float ptr [EDX]
// 004dca9b: FCOMP float ptr [0x0062b895]
//   XREF to: 0062b895 (READ)
// 004dcaa1: FNSTSW AX
// 004dcaa3: SAHF
// 004dcaa4: JBE 0x004dc4e9
//   XREF to: 004dc4e9 (CONDITIONAL_JUMP)
// 004dcaaa: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004dcaaf: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004dcab5: FMUL float ptr [0x0062b87d]
//   XREF to: 0062b87d (READ)
// 004dcabb: FDIV float ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 004dcabf: FSUBR float ptr [EDX]
// 004dcac1: FST float ptr [EDX]
// 004dcac3: FCOMP float ptr [0x0062b895]
//   XREF to: 0062b895 (READ)
// 004dcac9: FNSTSW AX
// 004dcacb: SAHF
// 004dcacc: JNC 0x004dc4e9
//   XREF to: 004dc4e9 (CONDITIONAL_JUMP)
// 004dcad2: MOV dword ptr [EDX],0xbe800000
// 004dcad8: JMP 0x004dc4e9
//   XREF to: 004dc4e9 (UNCONDITIONAL_JUMP)
// 004dcadd: MOV EAX,dword ptr [EBX + 0x40]
//   Label: LAB_004dcadd
// 004dcae0: CMP byte ptr [EAX + 0x2d03e98],0x0
//   XREF to: 02d03e98 (DATA)
// 004dcae7: JNZ 0x004dca6d
//   XREF to: 004dca6d (CONDITIONAL_JUMP)
// 004dcae9: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004dcaee: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004dcaf4: FMUL float ptr [0x0062b87d]
//   XREF to: 0062b87d (READ)
// 004dcafa: FDIV float ptr [0x0062b881]
//   XREF to: 0062b881 (READ)
// 004dcb00: FLDZ
// 004dcb02: LEA EDX,[ESI + 0x24]
// 004dcb05: FXCH
// 004dcb07: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (WRITE)
// 004dcb0b: FCOMP float ptr [EDX]
// 004dcb0d: FNSTSW AX
// 004dcb0f: SAHF
// 004dcb10: JBE 0x004dcb66
//   XREF to: 004dcb66 (CONDITIONAL_JUMP)
// 004dcb12: FLD float ptr [EDX]
// 004dcb14: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 004dcb18: JMP 0x004dc4d6
//   XREF to: 004dc4d6 (UNCONDITIONAL_JUMP)
// 004dcb1d: CMP byte ptr [EAX + 0x2d03e98],0x0
//   Label: LAB_004dcb1d
//   XREF to: 02d03e98 (DATA)
// 004dcb24: JZ 0x004dc4e9
//   XREF to: 004dc4e9 (CONDITIONAL_JUMP)
// 004dcb2a: CMP dword ptr [EDX],0x3e800000
// 004dcb30: JGE 0x004dc4e9
//   XREF to: 004dc4e9 (CONDITIONAL_JUMP)
// 004dcb36: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004dcb3b: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004dcb41: FMUL float ptr [0x0062b87d]
//   XREF to: 0062b87d (READ)
// 004dcb47: FDIV float ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 004dcb4b: FADD float ptr [EDX]
// 004dcb4d: FSTP float ptr [EDX]
// 004dcb4f: CMP dword ptr [EDX],0x3e800000
// 004dcb55: JLE 0x004dc4e9
//   XREF to: 004dc4e9 (CONDITIONAL_JUMP)
// 004dcb5b: MOV dword ptr [EDX],0x3e800000
// 004dcb61: JMP 0x004dc4e9
//   XREF to: 004dc4e9 (UNCONDITIONAL_JUMP)
// 004dcb66: FLD float ptr [EDX]
//   Label: LAB_004dcb66
// 004dcb68: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 004dcb6c: FLDZ
// 004dcb6e: FXCH
// 004dcb70: FSTP float ptr [EDX]
// 004dcb72: FCOMP float ptr [EDX]
// 004dcb74: FNSTSW AX
// 004dcb76: SAHF
// 004dcb77: JBE 0x004dc4e9
//   XREF to: 004dc4e9 (CONDITIONAL_JUMP)
// 004dcb7d: JMP 0x004dc4e3
//   XREF to: 004dc4e3 (UNCONDITIONAL_JUMP)
// 004dcb82: MOV EAX,dword ptr [EBX + 0x64]
//   Label: LAB_004dcb82
// 004dcb85: CMP byte ptr [EAX + 0x2d03e98],0x0
//   XREF to: 02d03e98 (DATA)
// 004dcb8c: JNZ 0x004dc4f9
//   XREF to: 004dc4f9 (CONDITIONAL_JUMP)
// 004dcb92: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004dcb97: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004dcb9d: FMUL float ptr [0x0062b87d]
//   XREF to: 0062b87d (READ)
// 004dcba3: FDIV float ptr [0x0062b899]
//   XREF to: 0062b899 (READ)
// 004dcba9: FLDZ
// 004dcbab: LEA EDX,[ESI + 0x28]
// 004dcbae: FXCH
// 004dcbb0: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (WRITE)
// 004dcbb4: FCOMP float ptr [EDX]
// 004dcbb6: FNSTSW AX
// 004dcbb8: SAHF
// 004dcbb9: JBE 0x004dcc26
//   XREF to: 004dcc26 (CONDITIONAL_JUMP)
// 004dcbbb: FLD float ptr [EDX]
// 004dcbbd: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 004dcbc1: FLDZ
// 004dcbc3: FXCH
// 004dcbc5: FSTP float ptr [EDX]
// 004dcbc7: FCOMP float ptr [EDX]
// 004dcbc9: FNSTSW AX
// 004dcbcb: SAHF
// 004dcbcc: JNC 0x004dc55c
//   XREF to: 004dc55c (CONDITIONAL_JUMP)
// 004dcbd2: MOV dword ptr [EDX],0x0
// 004dcbd8: JMP 0x004dc55c
//   XREF to: 004dc55c (UNCONDITIONAL_JUMP)
// 004dcbdd: CMP byte ptr [EAX + 0x2d03e98],0x0
//   Label: LAB_004dcbdd
//   XREF to: 02d03e98 (DATA)
// 004dcbe4: JZ 0x004dc55c
//   XREF to: 004dc55c (CONDITIONAL_JUMP)
// 004dcbea: CMP dword ptr [EDX],0x3e800000
// 004dcbf0: JGE 0x004dc55c
//   XREF to: 004dc55c (CONDITIONAL_JUMP)
// 004dcbf6: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004dcbfb: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004dcc01: FMUL float ptr [0x0062b87d]
//   XREF to: 0062b87d (READ)
// 004dcc07: FDIV float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004dcc0b: FADD float ptr [EDX]
// 004dcc0d: FSTP float ptr [EDX]
// 004dcc0f: CMP dword ptr [EDX],0x3e800000
// 004dcc15: JLE 0x004dc55c
//   XREF to: 004dc55c (CONDITIONAL_JUMP)
// 004dcc1b: MOV dword ptr [EDX],0x3e800000
// 004dcc21: JMP 0x004dc55c
//   XREF to: 004dc55c (UNCONDITIONAL_JUMP)
// 004dcc26: FLD float ptr [EDX]
//   Label: LAB_004dcc26
// 004dcc28: FSUB float ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 004dcc2c: FLDZ
// 004dcc2e: FXCH
// 004dcc30: FSTP float ptr [EDX]
// 004dcc32: FCOMP float ptr [EDX]
// 004dcc34: FNSTSW AX
// 004dcc36: SAHF
// 004dcc37: JBE 0x004dc55c
//   XREF to: 004dc55c (CONDITIONAL_JUMP)
// 004dcc3d: MOV dword ptr [EDX],0x0
// 004dcc43: JMP 0x004dc55c
//   XREF to: 004dc55c (UNCONDITIONAL_JUMP)
// 004dcc48: MOV EAX,dword ptr [EBX + 0x30]
//   Label: LAB_004dcc48
// 004dcc4b: MOV AL,byte ptr [EAX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 004dcc51: JMP 0x004dc576
//   XREF to: 004dc576 (UNCONDITIONAL_JUMP)
// 004dcc56: MOV dword ptr [ESI + 0xc],0x0
//   Label: LAB_004dcc56
// 004dcc5d: JMP 0x004dc5fd
//   XREF to: 004dc5fd (UNCONDITIONAL_JUMP)
// 004dcc62: MOV dword ptr [EAX],0x0
//   Label: LAB_004dcc62
// 004dcc68: JMP 0x004dc621
//   XREF to: 004dc621 (UNCONDITIONAL_JUMP)
// 004dcc6d: MOV dword ptr [EAX],0x0
//   Label: LAB_004dcc6d
// 004dcc73: JMP 0x004dc645
//   XREF to: 004dc645 (UNCONDITIONAL_JUMP)
// 004dcc78: MOV dword ptr [EAX],0x0
//   Label: LAB_004dcc78
// 004dcc7e: JMP 0x004dc669
//   XREF to: 004dc669 (UNCONDITIONAL_JUMP)
// 004dcc83: MOV dword ptr [ESI],0x0
//   Label: LAB_004dcc83
// 004dcc89: JMP 0x004dc68d
//   XREF to: 004dc68d (UNCONDITIONAL_JUMP)
// 004dcc8e: CMP dword ptr [EBX + 0x240],0x0
//   Label: LAB_004dcc8e
// 004dcc95: JZ 0x004dc94a
//   XREF to: 004dc94a (CONDITIONAL_JUMP)
// 004dcc9b: ADD ESP,0x14
// 004dcc9e: POP EBP
// 004dcc9f: POP EDI
// 004dcca0: POP ESI
// 004dcca1: POP EBX
// 004dcca2: RET
// 004dcca3: PUSH EDX
//   Label: LAB_004dcca3
// 004dcca4: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004dcca5: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 004dccaa: ADD ESP,0x8
// 004dccad: ADD ESP,0x14
// 004dccb0: POP EBP
// 004dccb1: POP EDI
// 004dccb2: POP ESI
// 004dccb3: POP EBX
// 004dccb4: RET
