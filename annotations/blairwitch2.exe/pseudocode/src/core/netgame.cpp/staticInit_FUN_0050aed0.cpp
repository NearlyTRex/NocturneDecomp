// Name: core_netgame.cpp_staticInit_FUN_0050aed0
// Address: 0050aed0
// Address Range: [[0050aed0, 0050af14]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_staticInit_FUN_0050aed0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_staticInit_FUN_0050aed0(void)

{
  core_netgame_cpp_CNetGame_ctor_FUN_0050b290(&g_CNetGameInstance);
  _atexit();
  __arrinit(0x1d34e50,400);
  _DAT_01d62e48 = 0x405;
  DAT_01d62e4c = 0;
  return;
}
