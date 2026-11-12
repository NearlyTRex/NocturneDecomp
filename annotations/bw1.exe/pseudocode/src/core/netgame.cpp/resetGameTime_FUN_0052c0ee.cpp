// Name: core_netgame.cpp_resetGameTime_FUN_0052c0ee
// Address: 0052c0ee
// Address Range: [[0052c0ee, 0052c110]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_resetGameTime_FUN_0052c0ee(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_resetGameTime_FUN_0052c0ee(void)

{
  int iVar1;
  
  _DAT_01d51da0 = 1;
  iVar1 = wincore_winrun_cpp_getTime_FUN_005b2420();
  _DAT_01d51d9c = iVar1 / 0x12;
  return;
}
