// Name: core_game.cpp_CGame_playerControls_FUN_004d0860
// Address: 004d0860
// Address Range: [[004d0860, 004d0955]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_playerControls_FUN_004d0860(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_playerControls_FUN_004d0860(CGame *this_ptr)

{
  SPlayerInput *player_control;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (((_DAT_01cd01f8 == 0) && (g_CFieldNotesPtr->is_displayed == 0)) && (DAT_007c3978 == 0)) {
    if (this_ptr->is_paused == 0) {
      if (this_ptr->hero_controls_blocked == 0) {
        player_control = core_netgame_cpp_CNetGame_getMyControls_FUN_00530660(g_CNetGamePtr);
        switch(this_ptr->game_control) {
        case CONTROL_MODE_KEYBOARD:
          core_game_cpp_FUN_004d0ee0(this_ptr,player_control);
          break;
        case CONTROL_MODE_MOUSE:
          core_game_cpp_CGame_processMouseControls_FUN_004d1820(this_ptr,player_control);
          break;
        case CONTROL_MODE_GAMEPAD:
          core_game_cpp_CGame_processJoystickControls_FUN_004d0d30(this_ptr,player_control);
          break;
        case CONTROL_MODE_POINT_AND_CLICK:
          core_game_cpp_FUN_004d9260(this_ptr,player_control);
          break;
        default:
          _DAT_01d1d400 = "..\\core\\game.cpp";
          _DAT_01d1d404 = 0x87c;
          core_main_c_FUN_005030e0("CGame::playerControls - unknown control type");
        }
        puVar2 = (uint *)&DAT_01c50950;
        puVar3 = (uint *)&DAT_01ccff98;
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
        _DAT_01cd01f0 = _DAT_01c43544;
        _DAT_01cd01f4 = g_CDemonSetPtr->selected_camera_index;
        return;
      }
      _DAT_01cd0b40 = 0xffffffff;
    }
    return;
  }
  core_game_cpp_FUN_004d19d0(this_ptr);
  return;
}
