// Name: core_netgame.cpp_staticInit_FUN_004e94a0
// Address: 004e94a0
// Address Range: [[004e94a0, 004e94e4]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_staticInit_FUN_004e94a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_staticInit_FUN_004e94a0(void)

{
  core_netgame_cpp_CNetGame_ctor_FUN_004e9860(&DAT_01cea280);
  FUN_00564bb0(0x5bded0);
  __arrinit(0x1cea410,400,&g_SChatHistoryTypeInfo_005a0de0);
  _DAT_01d16408 = 0x405;
  DAT_01d1640c = 0;
  return;
}
