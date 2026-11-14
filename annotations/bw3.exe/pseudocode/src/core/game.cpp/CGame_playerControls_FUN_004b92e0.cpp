// Name: core_game.cpp_CGame_playerControls_FUN_004b92e0
// Address: 004b92e0
// Address Range: [[004b92e0, 004b93d5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_playerControls_FUN_004b92e0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_playerControls_FUN_004b92e0(CGame *this_ptr)

{
  SPlayerInput *player_control;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (((_DAT_01d22200 == 0) && (g_CFieldNotesPtr->is_displayed == 0)) && (DAT_007dffb4 == 0)) {
    if (this_ptr->is_paused == 0) {
      if (this_ptr->hero_controls_blocked == 0) {
        player_control = core_netgame_cpp_CNetGame_getMyControls_FUN_00507f10(g_CNetGamePtr);
        switch(this_ptr->game_control) {
        case CONTROL_MODE_KEYBOARD:
          core_game_cpp_FUN_004b9960(this_ptr,player_control);
          break;
        case CONTROL_MODE_MOUSE:
          core_game_cpp_CGame_processMouseControls_FUN_004ba2e0(this_ptr,player_control);
          break;
        case CONTROL_MODE_GAMEPAD:
          core_game_cpp_CGame_processJoystickControls_FUN_004b97b0(this_ptr,player_control);
          break;
        case CONTROL_MODE_POINT_AND_CLICK:
          core_game_cpp_FUN_004c07b0(this_ptr,player_control);
          break;
        default:
          _DAT_01d71de0 = "..\\core\\game.cpp";
          _DAT_01d71de4 = 0x88c;
          core_main_c_FUN_004e4330("CGame::playerControls - unknown control type");
        }
        puVar2 = (uint *)&DAT_01c6cef0;
        puVar3 = (uint *)&DAT_01d21fa0;
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
        _DAT_01d221f8 = _DAT_01c5fae4;
        _DAT_01d221fc = g_CDemonSetPtr->selected_camera_index;
        return;
      }
      _DAT_01d22b48 = 0xffffffff;
    }
    return;
  }
  core_game_cpp_FUN_004ba490(this_ptr);
  return;
}
