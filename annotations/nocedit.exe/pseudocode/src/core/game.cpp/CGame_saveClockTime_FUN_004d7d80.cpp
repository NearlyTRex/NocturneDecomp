// Name: core_game.cpp_CGame_saveClockTime_FUN_004d7d80
// Address: 004d7d80
// Address Range: [[004d7d80, 004d7d8f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_saveClockTime_FUN_004d7d80(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_saveClockTime_FUN_004d7d80(CGame *this_ptr)

{
  int iVar1;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  this_ptr->clocktime = iVar1;
  return;
}
