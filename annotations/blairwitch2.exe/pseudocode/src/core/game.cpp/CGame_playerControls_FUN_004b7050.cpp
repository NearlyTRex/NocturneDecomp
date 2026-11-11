// Name: core_game.cpp_CGame_playerControls_FUN_004b7050
// Address: 004b7050
// Address Range: [[004b7050, 004b713b]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_playerControls_FUN_004b7050(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_playerControls_FUN_004b7050(CGame *this_ptr)

{
  SPlayerInput *player_control;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (((_DAT_01cb7788 == 0) && (g_CFieldNotesPtr->is_displayed == 0)) && (_DAT_026677e0 == 0)) {
    if ((this_ptr->is_paused == 0) && (this_ptr->hero_controls_blocked == 0)) {
      player_control = core_netgame_cpp_CNetGame_getMyControls_FUN_0050f430(g_CNetGamePtr);
      switch(this_ptr->game_control) {
      case CONTROL_MODE_KEYBOARD:
        core_game_cpp_FUN_004b76c0(this_ptr,player_control);
        break;
      case CONTROL_MODE_MOUSE:
        core_game_cpp_CGame_processMouseControls_FUN_004b80a0(this_ptr,player_control);
        break;
      case CONTROL_MODE_GAMEPAD:
        core_game_cpp_CGame_processJoystickControls_FUN_004b7510(this_ptr,player_control);
        break;
      case CONTROL_MODE_POINT_AND_CLICK:
        core_game_cpp_FUN_004be8a0(this_ptr,player_control);
        break;
      default:
        _DAT_01d046a0 = "..\\core\\game.cpp";
        _DAT_01d046a4 = 0x7d9;
        core_main_c_FUN_004e4500("CGame::playerControls - unknown control type");
      }
      puVar2 = (uint *)&DAT_01c37790;
      puVar3 = (uint *)&DAT_01cb7528;
      for (iVar1 = 0x96; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(byte *)puVar3 = *(byte *)puVar2;
        puVar2 = (uint *)((int)puVar2 + (uint)bVar4 * -2 + 1);
        puVar3 = (uint *)((int)puVar3 + (uint)bVar4 * -2 + 1);
      }
      _DAT_01cb7780 = _DAT_01c2a384;
      _DAT_01cb7784 = g_CDemonSetPtr->selected_camera_index;
      return;
    }
    return;
  }
  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004b8250(this_ptr);
  return;
}
