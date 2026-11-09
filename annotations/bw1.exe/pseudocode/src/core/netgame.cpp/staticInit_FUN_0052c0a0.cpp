// Name: core_netgame.cpp_staticInit_FUN_0052c0a0
// Address: 0052c0a0
// Address Range: [[0052c0a0, 0052c0e4]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_staticInit_FUN_0052c0a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_staticInit_FUN_0052c0a0(void)

{
  core_netgame_cpp_CNetGame_ctor_FUN_0052c470(&g_CNetGameInstance);
  _atexit();
  __arrinit(0x1d51db8,400);
  _DAT_01d7edb0 = 0x405;
  DAT_01d7edb4 = 0;
  return;
}
