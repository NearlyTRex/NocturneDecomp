// Name: core_menu.cpp_FUN_004d2c80
// Address: 004d2c80
// Address Range: [[004d2c80, 004d2cdd]]
// Convention: unknown
// Signature: int core_menu_cpp_FUN_004d2c80(void)

#include "nocturne.h"

int core_menu_cpp_FUN_004d2c80(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(0x01C775EC + 0xbc) == 2) {
    core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(0x01C775EC);
  }
  iVar1 = 0;
  iVar3 = -1;
  while( true ) {
    while( true ) {
      iVar2 = iVar1;
      iVar1 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,iVar2);
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
