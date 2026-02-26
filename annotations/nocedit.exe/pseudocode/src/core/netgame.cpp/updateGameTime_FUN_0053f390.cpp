// Name: core_netgame.cpp_updateGameTime_FUN_0053f390
// Address: 0053f390
// Address Range: [[0053f390, 0053f3d0]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_updateGameTime_FUN_0053f390(void)

#include "nocturne.h"

void __cdecl core_netgame_cpp_updateGameTime_FUN_0053f390(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
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
