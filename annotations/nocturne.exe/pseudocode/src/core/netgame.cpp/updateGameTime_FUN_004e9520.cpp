// Name: core_netgame.cpp_updateGameTime_FUN_004e9520
// Address: 004e9520
// Address Range: [[004e9520, 004e9560]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_updateGameTime_FUN_004e9520(void)

#include "nocturne.h"

void __cdecl core_netgame_cpp_updateGameTime_FUN_004e9520(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
  iVar2 = iVar1 / 0x12 - g_LastPingTime;
  g_LastPingTime = iVar1 / 0x12;
  if (-1 < iVar2) {
    if (0x20000 < iVar2) {
      iVar2 = 0x20000;
    }
    g_CurrentGameTime = g_CurrentGameTime + iVar2;
    return;
  }
  return;
}
