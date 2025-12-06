// Name: core_menu.cpp_getSinglePressedKey_FUN_00513860
// Address: 00513860
// Address Range: [[00513860, 005138bd]]
// Convention: __cdecl
// Signature: int core_menu.cpp_getSinglePressedKey_FUN_00513860(void)

#include "nocturne.h"

int __cdecl core_menu_cpp_getSinglePressedKey_FUN_00513860(void)

{
  int iVar1;
  int keyCode;
  int iVar2;
  
  if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
    core_game_cpp_CGame_resetKeyState_FUN_004dbe60();
  }
  iVar1 = 0;
  iVar2 = -1;
  while( true ) {
    while( true ) {
      keyCode = iVar1;
      iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,keyCode);
      if (iVar1 != 0) break;
      iVar1 = keyCode + 1;
      if (599 < keyCode + 1) {
        return iVar2;
      }
    }
    if (-1 < iVar2) break;
    iVar1 = keyCode + 1;
    iVar2 = keyCode;
    if (599 < keyCode + 1) {
      return keyCode;
    }
  }
  return -2;
}
