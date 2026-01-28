// Name: core_netgame.cpp_FUN_0053f360
// Address: 0053f360
// Address Range: [[0053f360, 0053f380]]
// Convention: unknown
// Signature: void core_netgame_cpp_FUN_0053f360(void)

#include "nocturne.h"

void core_netgame_cpp_FUN_0053f360(void)

{
  int iVar1;
  
  g_CurrentGameTime = 1;
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  g_LastPingTime = iVar1 / 0x12;
  return;
}
