// Name: core_game.cpp_CGame_playerControls_FUN_004d0860
// Address: 004d0860
// Address Range: [[004d0860, 004d0955]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_playerControls_FUN_004d0860(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_playerControls_FUN_004d0860(CGame *this_ptr)

{
  SPlayerInput *player_control;
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (((g_INT_01cd01f8 == 0) && (g_CFieldNotesPtr->is_displayed == 0)) &&
     (g_CPuzzle_PTR_007c3978 == (CPuzzle *)0x0)) {
    if (this_ptr->is_paused == 0) {
      if (this_ptr->hero_controls_blocked == 0) {
        player_control = core_netgame_cpp_CNetGame_getMyControls_FUN_00530660(g_CNetGamePtr);
        switch(this_ptr->game_control) {
        case CONTROL_MODE_KEYBOARD:
          core_game_cpp_CGame_processKeyboardControls_FUN_004d0ee0(this_ptr,player_control);
          break;
        case CONTROL_MODE_MOUSE:
          core_game_cpp_CGame_processMouseControls_FUN_004d1820(this_ptr,player_control);
          break;
        case CONTROL_MODE_GAMEPAD:
          core_game_cpp_CGame_processJoystickControls_FUN_004d0d30(this_ptr,player_control);
          break;
        case CONTROL_MODE_POINT_AND_CLICK:
          core_game_cpp_CGame_processPointAndClickControls_FUN_004d9260(this_ptr,player_control);
          break;
        default:
          g_CHAR_PTR_01d1d400 = "..\\core\\game.cpp";
          g_INT_01d1d404 = 0x87c;
          core_main_c_displayErrorAndQuit_FUN_005030e0("CGame::playerControls - unknown control type");
        }
        pcVar2 = g_CHAR_ARRAY_01c50950;
        pcVar3 = g_CHAR_ARRAY_01ccff98;
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
        g_INT_01cd01f0 = g_BIT_INTEGER32_01c43544.dword;
        g_INT_01cd01f4 = g_CDemonSetPtr->selected_camera_index;
        return;
      }
      g_INT_01cd0b40 = -1;
    }
    return;
  }
  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004d19d0(this_ptr);
  return;
}
