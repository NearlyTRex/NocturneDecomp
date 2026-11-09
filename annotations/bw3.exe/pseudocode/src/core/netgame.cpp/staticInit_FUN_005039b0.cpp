// Name: core_netgame.cpp_staticInit_FUN_005039b0
// Address: 005039b0
// Address Range: [[005039b0, 005039f4]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_staticInit_FUN_005039b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_staticInit_FUN_005039b0(void)

{
  core_netgame_cpp_CNetGame_ctor_FUN_00503d70(&g_CNetGameInstance);
  _atexit();
  __arrinit(0x1da6490,400);
  _DAT_01dd4488 = 0x405;
  DAT_01dd448c = 0;
  return;
}
