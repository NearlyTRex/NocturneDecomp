// Name: core_netgame.cpp_resetGameTime_FUN_00503a00
// Address: 00503a00
// Address Range: [[00503a00, 00503a20]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_resetGameTime_FUN_00503a00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_resetGameTime_FUN_00503a00(void)

{
  int iVar1;
  
  _DAT_01da6478 = 1;
  iVar1 = wincore_winrun_cpp_getTime_FUN_005806a0();
  _DAT_01da6474 = iVar1 / 0x12;
  return;
}
