// Name: core_netgame.cpp_resetGameTime_FUN_004e94f0
// Address: 004e94f0
// Address Range: [[004e94f0, 004e9510]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_resetGameTime_FUN_004e94f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_resetGameTime_FUN_004e94f0(void)

{
  int iVar1;
  
  _DAT_01cea3f8 = 1;
  iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
  _DAT_01cea3f4 = iVar1 / 0x12;
  return;
}
