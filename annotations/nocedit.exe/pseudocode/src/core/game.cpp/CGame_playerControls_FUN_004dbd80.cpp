// Name: core_game.cpp_CGame_playerControls_FUN_004dbd80
// Address: 004dbd80
// Address Range: [[004dbd80, 004dbe5d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_playerControls_FUN_004dbd80(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004dbe2e) */

void __cdecl core_game_cpp_CGame_playerControls_FUN_004dbd80(CGame *this_ptr)

{
  uint uVar1;
  SPlayerControl *player_control;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (g_CheatSystemEnabled != 0) {
    core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(this_ptr);
    return;
  }
  if ((this_ptr->is_paused == 0) && (this_ptr->allow_hero_controls_flag == 0)) {
    player_control =
         (SPlayerControl *)core_netgame_cpp_CNetGame_getMyControls_FUN_005438c0(g_CNetGamePtr);
    uVar1 = this_ptr->game_control;
    if (uVar1 == 0) {
      core_game_cpp_CGame_processKeyboardControls_FUN_004dc3e0(this_ptr,player_control);
    }
    else if (uVar1 < 2) {
      core_game_cpp_CGame_processMouseControls_FUN_004dccc0(this_ptr,player_control);
    }
    else if (uVar1 == 2) {
      core_game_cpp_CGame_processJoystickControls_FUN_004dc230(this_ptr,player_control);
    }
    else {
      g_CurrentFilename = "..\\core\\game.cpp";
      g_CurrentLineNumber = 0x728;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CGame::playerControls - unknown control type");
    }
    pcVar3 = g_KeyboardState;
    pcVar4 = g_PrevKeyboardState;
    for (iVar2 = 0x96; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar4 = *(uint *)pcVar3;
      pcVar3 = pcVar3 + ((uint)bVar5 * -2 + 1) * 4;
      pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pcVar4 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar5 * -2 + 1;
      pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
    }
    g_InputResetFlag = g_MouseButtonFlags;
    g_StoredCameraValue = g_CDemonSetPtr->selected_camera_index;
    return;
  }
  return;
}
