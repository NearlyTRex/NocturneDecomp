// Name: core_menu.cpp_getSinglePressedKey_FUN_00513860
// Address: 00513860
// Address Range: [[00513860, 005138bd]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_getSinglePressedKey_FUN_00513860(void)

#include "nocturne.h"

int __cdecl core_menu_cpp_getSinglePressedKey_FUN_00513860(void)

{
  int iVar1;
  int key_code;
  int iVar2;
  
  if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
    core_game_cpp_CGame_resetKeyState_FUN_004dbe60(g_CGamePtr);
  }
  iVar1 = 0;
  iVar2 = -1;
  while( true ) {
    while( true ) {
      key_code = iVar1;
      iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,key_code);
      if (iVar1 != 0) break;
      iVar1 = key_code + 1;
      if (599 < key_code + 1) {
        return iVar2;
      }
    }
    if (-1 < iVar2) break;
    iVar1 = key_code + 1;
    iVar2 = key_code;
    if (599 < key_code + 1) {
      return key_code;
    }
  }
  return -2;
}
