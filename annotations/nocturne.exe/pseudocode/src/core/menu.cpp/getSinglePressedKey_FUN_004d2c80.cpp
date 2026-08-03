// Name: core_menu.cpp_getSinglePressedKey_FUN_004d2c80
// Address: 004d2c80
// Address Range: [[004d2c80, 004d2cdd]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_getSinglePressedKey_FUN_004d2c80(void)

#include "nocturne.h"

int __cdecl core_menu_cpp_getSinglePressedKey_FUN_004d2c80(void)

{
  EInputCodeType EVar1;
  int iVar2;
  EInputCodeType key_code;
  EInputCodeType EVar3;
  
  if (g_CGame_PTR_005b9354->game_control == CONTROL_MODE_GAMEPAD) {
    core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(g_CGame_PTR_005b9354);
  }
  EVar1 = 0;
  EVar3 = 0xffffffff;
  while( true ) {
    while( true ) {
      key_code = EVar1;
      iVar2 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,key_code);
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
