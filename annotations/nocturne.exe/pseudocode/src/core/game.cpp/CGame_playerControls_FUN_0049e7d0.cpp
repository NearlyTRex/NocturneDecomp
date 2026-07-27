// Name: core_game.cpp_CGame_playerControls_FUN_0049e7d0
// Address: 0049e7d0
// Address Range: [[0049e7d0, 0049e8ad]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_playerControls_FUN_0049e7d0(int param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0049e87e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_playerControls_FUN_0049e7d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (_DAT_01c78420 != 0) {
    core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(param_1);
    return;
  }
  if ((*(int *)(param_1 + 0x1fc) == 0) && (*(int *)(param_1 + 0x238) == 0)) {
    uVar2 = core_netgame_cpp_CNetGame_getMyControls_FUN_004eda40(0x01CEA280);
    uVar1 = *(uint *)(param_1 + 0xbc);
    if (uVar1 == 0) {
      core_game_cpp_CGame_processKeyboardControls_FUN_0049ee30(param_1,uVar2);
    }
    else if (uVar1 < 2) {
      core_game_cpp_CGame_processMouseControls_FUN_0049f710(param_1,uVar2);
    }
    else if (uVar1 == 2) {
      core_game_cpp_CGame_processJoystickControls_FUN_0049ec80(param_1,uVar2);
    }
    else {
      PTR_01cc4800 = "..\\core\\game.cpp";
      INT_01cc4804 = 0x71d;
      core_main_c_FUN_004c8440("CGame::playerControls - unknown control type");
    }
    puVar4 = (uint *)&DAT_01c02598;
    puVar5 = (uint *)&DAT_01c781c0;
    for (iVar3 = 0x96; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(byte *)puVar5 = *(byte *)puVar4;
      puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
    }
    _DAT_01c78418 = _DAT_01bd1d94;
    _DAT_01c7841c = *(uint *)(0x01E57284 + 0x15aabc);
    return;
  }
  return;
}
