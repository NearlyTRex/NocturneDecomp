// Name: core_netgame.cpp_updateGameTime_FUN_0050af50
// Address: 0050af50
// Address Range: [[0050af50, 0050af90]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_updateGameTime_FUN_0050af50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_updateGameTime_FUN_0050af50(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  iVar2 = iVar1 / 0x12 - _DAT_01d34e34;
  _DAT_01d34e34 = iVar1 / 0x12;
  if (-1 < iVar2) {
    if (0x20000 < iVar2) {
      iVar2 = 0x20000;
    }
    _DAT_01d34e38 = _DAT_01d34e38 + iVar2;
    return;
  }
  return;
}
