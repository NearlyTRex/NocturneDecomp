// Name: core_menu.cpp_getSinglePressedKey_FUN_00513860
// Address: 00513860
// Address Range: [[00513860, 005138bd]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_getSinglePressedKey_FUN_00513860(void)

#include "nocturne.h"

int __cdecl core_menu_cpp_getSinglePressedKey_FUN_00513860(void)

{
  EInputCodeType EVar1;
  int iVar2;
  EInputCodeType key_code;
  EInputCodeType EVar3;
  
  if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
    core_game_cpp_CGame_resetKeyState_FUN_004dbe60(g_CGamePtr);
  }
  EVar1 = 0;
  EVar3 = 0xffffffff;
  while( true ) {
    while( true ) {
      key_code = EVar1;
      iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,key_code);
      if (iVar2 != 0) break;
      EVar1 = key_code + DIK_ESCAPE;
      if (599 < (int)(key_code + DIK_ESCAPE)) {
        return EVar3;
      }
    }
    if (-1 < (int)EVar3) break;
    EVar1 = key_code + DIK_ESCAPE;
    EVar3 = key_code;
    if (599 < (int)(key_code + DIK_ESCAPE)) {
      return key_code;
    }
  }
  return -2;
}
