// Name: core_game.cpp_CGame_playerControls_FUN_004b92e0
// Address: 004b92e0
// Address Range: [[004b92e0, 004b93d5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_playerControls_FUN_004b92e0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_playerControls_FUN_004b92e0(CGame *this_ptr)

{
  SPlayerInput *player_control;
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (((g_INT_01d22200 == 0) && (g_CFieldNotesPtr->is_displayed == 0)) &&
     (g_CPuzzle_PTR_007dffb4 == (CPuzzle *)0x0)) {
    if (this_ptr->is_paused == 0) {
      if (this_ptr->hero_controls_blocked == 0) {
        player_control = core_netgame_cpp_CNetGame_getMyControls_FUN_00507f10(g_CNetGamePtr);
        switch(this_ptr->game_control) {
        case CONTROL_MODE_KEYBOARD:
          core_game_cpp_CGame_processKeyboardControls_FUN_004b9960(this_ptr,player_control);
          break;
        case CONTROL_MODE_MOUSE:
          core_game_cpp_CGame_processMouseControls_FUN_004ba2e0(this_ptr,player_control);
          break;
        case CONTROL_MODE_GAMEPAD:
          core_game_cpp_CGame_processJoystickControls_FUN_004b97b0(this_ptr,player_control);
          break;
        case CONTROL_MODE_POINT_AND_CLICK:
          core_game_cpp_CGame_processPointAndClickControls_FUN_004c07b0(this_ptr,player_control);
          break;
        default:
          g_CurrentFilename = "..\\core\\game.cpp";
          g_CurrentLineNumber = 2188;
          core_main_c_displayErrorAndQuit_FUN_004e4330("CGame::playerControls - unknown control type");
        }
        pcVar2 = g_KeyboardState;
        pcVar3 = g_PrevKeyboardState;
        for (iVar1 = 0x96; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(uint *)pcVar3 = *(uint *)pcVar2;
          pcVar2 = pcVar2 + ((uint)bVar4 * -2 + 1) * 4;
          pcVar3 = pcVar3 + ((uint)bVar4 * -2 + 1) * 4;
        }
        for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pcVar3 = *pcVar2;
          pcVar2 = pcVar2 + (uint)bVar4 * -2 + 1;
          pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
        }
        g_InputResetFlag = g_MouseButtonFlags.dword;
        g_INT_01d221fc = g_CDemonSetPtr->selected_camera_index;
        return;
      }
      g_INT_01d22b48 = -1;
    }
    return;
  }
  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004ba490(this_ptr);
  return;
}
