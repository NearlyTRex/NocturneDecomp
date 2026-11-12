// Name: core_menu.cpp_getSinglePressedKey_FUN_004eece0
// Address: 004eece0
// Address Range: [[004eece0, 004eed3d]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_getSinglePressedKey_FUN_004eece0(void)

#include "nocturne.h"

int __cdecl core_menu_cpp_getSinglePressedKey_FUN_004eece0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
    core_game_cpp_CGame_resetKeyState_FUN_004b7140(g_CGamePtr);
  }
  iVar1 = 0;
  iVar3 = -1;
  while( true ) {
    while( true ) {
      iVar2 = iVar1;
      iVar1 = (**(code **)*0x01D02F84)(0x01D02F84,iVar2);
      if (iVar1 != 0) break;
      iVar1 = iVar2 + 1;
      if (599 < iVar2 + 1) {
        return iVar3;
      }
    }
    if (-1 < iVar3) break;
    iVar1 = iVar2 + 1;
    iVar3 = iVar2;
    if (599 < iVar2 + 1) {
      return iVar2;
    }
  }
  return -2;
}
