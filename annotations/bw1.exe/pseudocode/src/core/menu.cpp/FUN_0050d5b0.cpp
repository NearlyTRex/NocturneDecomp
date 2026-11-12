// Name: core_menu.cpp_FUN_0050d5b0
// Address: 0050d5b0
// Address Range: [[0050d5b0, 0050d627]]
// Convention: unknown
// Signature: int core_menu_cpp_FUN_0050d5b0(void)

#include "nocturne.h"

int core_menu_cpp_FUN_0050d5b0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
    core_game_cpp_CGame_resetKeyState_FUN_004d0960(g_CGamePtr);
  }
  iVar3 = -1;
  iVar2 = 0;
  do {
    iVar1 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,iVar2);
    if ((iVar1 != 0) && (bVar4 = -1 < iVar3, iVar3 = iVar2, bVar4)) {
      return -2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 600);
  if ((g_CGamePtr->game_control == CONTROL_MODE_POINT_AND_CLICK) &&
     ((iVar3 == 0x200 || (iVar3 == 0x201)))) {
    return -3;
  }
  return iVar3;
}
