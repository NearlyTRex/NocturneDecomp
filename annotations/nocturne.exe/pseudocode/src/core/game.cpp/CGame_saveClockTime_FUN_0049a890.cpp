// Name: core_game.cpp_CGame_saveClockTime_FUN_0049a890
// Address: 0049a890
// Address Range: [[0049a890, 0049a89f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_saveClockTime_FUN_0049a890(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_saveClockTime_FUN_0049a890(CGame *this_ptr)

{
  int iVar1;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
  this_ptr->clocktime = iVar1;
  return;
}
