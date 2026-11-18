// Name: core_netgame.cpp_resetGameTime_FUN_0052c0f0
// Address: 0052c0f0
// Address Range: [[0052c0f0, 0052c110]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_resetGameTime_FUN_0052c0f0(void)

#include "nocturne.h"

void __cdecl core_netgame_cpp_resetGameTime_FUN_0052c0f0(void)

{
  int iVar1;
  
  g_UINT_01d51da0 = 1;
  iVar1 = wincore_winrun_cpp_getTime_FUN_005b2420();
  g_LastPingTime = iVar1 / 0x12;
  return;
}
