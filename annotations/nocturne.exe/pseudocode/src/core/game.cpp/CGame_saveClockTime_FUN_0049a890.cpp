// Name: core_game.cpp_CGame_saveClockTime_FUN_0049a890
// Address: 0049a890
// Address Range: [[0049a890, 0049a89f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_saveClockTime_FUN_0049a890(int param_1)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_saveClockTime_FUN_0049a890(int param_1)

{
  uint uVar1;
  
  uVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
  *(uint *)(param_1 + 0x25c) = uVar1;
  return;
}
