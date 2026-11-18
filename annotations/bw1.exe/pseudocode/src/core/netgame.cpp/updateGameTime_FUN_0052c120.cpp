// Name: core_netgame.cpp_updateGameTime_FUN_0052c120
// Address: 0052c120
// Address Range: [[0052c120, 0052c160]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_updateGameTime_FUN_0052c120(void)

#include "nocturne.h"

void __cdecl core_netgame_cpp_updateGameTime_FUN_0052c120(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_005b2420();
  iVar2 = iVar1 / 0x12 - g_LastPingTime;
  g_LastPingTime = iVar1 / 0x12;
  if (-1 < iVar2) {
    if (0x20000 < iVar2) {
      iVar2 = 0x20000;
    }
    g_UINT_01d51da0 = g_UINT_01d51da0 + iVar2;
    return;
  }
  return;
}
