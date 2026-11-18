// Name: core_menu.cpp_getSinglePressedKey_FUN_0050d5b0
// Address: 0050d5b0
// Address Range: [[0050d5b0, 0050d627]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_getSinglePressedKey_FUN_0050d5b0(void)

#include "nocturne.h"

int __cdecl core_menu_cpp_getSinglePressedKey_FUN_0050d5b0(void)

{
  int iVar1;
  EInputCodeType key_code;
  EInputCodeType EVar2;
  bool bVar3;
  
  if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
    core_game_cpp_CGame_resetKeyState_FUN_004d0960(g_CGamePtr);
  }
  EVar2 = 0xffffffff;
  key_code = 0;
  do {
    iVar1 = (*g_CKeys_PTR_0061f2a4->vtable->getKeyState)(g_CKeys_PTR_0061f2a4,key_code);
    if ((iVar1 != 0) && (bVar3 = -1 < (int)EVar2, EVar2 = key_code, bVar3)) {
      return -2;
    }
    key_code = key_code + DIK_ESCAPE;
  } while ((int)key_code < 600);
  if ((g_CGamePtr->game_control == CONTROL_MODE_POINT_AND_CLICK) &&
     ((EVar2 == DIM_LBUTTON || (EVar2 == DIM_RBUTTON)))) {
    return -3;
  }
  return EVar2;
}
