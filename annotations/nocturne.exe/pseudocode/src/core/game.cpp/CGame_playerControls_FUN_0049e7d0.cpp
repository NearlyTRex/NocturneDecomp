// Name: core_game.cpp_CGame_playerControls_FUN_0049e7d0
// Address: 0049e7d0
// Address Range: [[0049e7d0, 0049e8ad]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_playerControls_FUN_0049e7d0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0049e87e) */

void __cdecl core_game_cpp_CGame_playerControls_FUN_0049e7d0(CGame *this_ptr)

{
  EControlMode EVar1;
  SPlayerInput *player_control;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (g_INT_01c78420 != 0) {
    core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(this_ptr);
    return;
  }
  if ((this_ptr->is_paused == 0) && (this_ptr->hero_controls_blocked == 0)) {
    player_control = core_netgame_cpp_CNetGame_getMyControls_FUN_004eda40(g_CNetGamePtr);
    EVar1 = this_ptr->game_control;
    if (EVar1 == CONTROL_MODE_KEYBOARD) {
      core_game_cpp_CGame_processKeyboardControls_FUN_0049ee30(this_ptr,player_control);
    }
    else if (EVar1 < CONTROL_MODE_GAMEPAD) {
      core_game_cpp_CGame_processMouseControls_FUN_0049f710(this_ptr,player_control);
    }
    else if (EVar1 == CONTROL_MODE_GAMEPAD) {
      core_game_cpp_CGame_processJoystickControls_FUN_0049ec80(this_ptr,player_control);
    }
    else {
      g_CurrentFilename = "..\\core\\game.cpp";
      g_CurrentLineNumber = 1821;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CGame::playerControls - unknown control type");
    }
    pcVar3 = g_CHAR_ARRAY_01c02598;
    pcVar4 = g_CHAR_ARRAY_01c781c0;
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
    g_INT_01c78418 = g_BIT_INTEGER32_01bd1d94.dword;
    g_INT_01c7841c = g_CDemonSetPtr->selected_camera_index;
    return;
  }
  return;
}
