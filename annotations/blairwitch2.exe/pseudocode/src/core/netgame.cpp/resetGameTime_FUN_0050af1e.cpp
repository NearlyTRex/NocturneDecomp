// Name: core_netgame.cpp_resetGameTime_FUN_0050af1e
// Address: 0050af1e
// Address Range: [[0050af1e, 0050af40]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_resetGameTime_FUN_0050af1e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_resetGameTime_FUN_0050af1e(void)

{
  int iVar1;
  
  _DAT_01d34e38 = 1;
  iVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  _DAT_01d34e34 = iVar1 / 0x12;
  return;
}
