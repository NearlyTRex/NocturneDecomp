// Name: core_menu.cpp_getSinglePressedKey_FUN_004eece0
// Address: 004eece0
// Address Range: [[004eece0, 004eed3d]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_getSinglePressedKey_FUN_004eece0(void)

#include "nocturne.h"

int __cdecl core_menu_cpp_getSinglePressedKey_FUN_004eece0(void)

{
  EInputCodeType EVar1;
  int iVar2;
  EInputCodeType key_code;
  EInputCodeType EVar3;
  
  if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
    core_game_cpp_CGame_resetKeyState_FUN_004b7140(g_CGamePtr);
  }
  EVar1 = 0;
  EVar3 = 0xffffffff;
  while( true ) {
    while( true ) {
      key_code = EVar1;
      iVar2 = (*g_CKeys_PTR_00617dd4->vtable->getKeyState)(g_CKeys_PTR_00617dd4,key_code);
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
