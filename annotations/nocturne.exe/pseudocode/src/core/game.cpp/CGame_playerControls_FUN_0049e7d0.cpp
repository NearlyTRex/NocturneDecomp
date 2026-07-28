// Name: core_game.cpp_CGame_playerControls_FUN_0049e7d0
// Address: 0049e7d0
// Address Range: [[0049e7d0, 0049e8ad]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_playerControls_FUN_0049e7d0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0049e87e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_playerControls_FUN_0049e7d0(CGame *this_ptr)

{
  EControlMode EVar1;
  SPlayerInput *player_control;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (_DAT_01c78420 != 0) {
    core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(this_ptr);
    return;
  }
  if ((this_ptr->is_paused == 0) && (this_ptr->allow_hero_controls_flag == 0)) {
    player_control = core_netgame_cpp_CNetGame_getMyControls_FUN_004eda40(0x01CEA280);
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
      PTR_01cc4800 = "..\\core\\game.cpp";
      INT_01cc4804 = 0x71d;
      core_main_c_FUN_004c8440("CGame::playerControls - unknown control type");
    }
    puVar3 = (uint *)&DAT_01c02598;
    puVar4 = (uint *)&DAT_01c781c0;
    for (iVar2 = 0x96; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)puVar4 = *(byte *)puVar3;
      puVar3 = (uint *)((int)puVar3 + (uint)bVar5 * -2 + 1);
      puVar4 = (uint *)((int)puVar4 + (uint)bVar5 * -2 + 1);
    }
    _DAT_01c78418 = _DAT_01bd1d94;
    _DAT_01c7841c = *(uint *)(0x01E57284 + 0x15aabc);
    return;
  }
  return;
}
