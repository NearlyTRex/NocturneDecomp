// Name: core_game.cpp_CGame_saveClockTime_FUN_004b3000
// Address: 004b3000
// Address Range: [[004b3000, 004b300f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_saveClockTime_FUN_004b3000(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_saveClockTime_FUN_004b3000(CGame *this_ptr)

{
  int iVar1;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  this_ptr->clocktime = iVar1;
  return;
}
