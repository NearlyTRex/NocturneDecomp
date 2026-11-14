// Name: core_game.cpp_CGame_saveClockTime_FUN_004cbf10
// Address: 004cbf10
// Address Range: [[004cbf10, 004cbf1f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_saveClockTime_FUN_004cbf10(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_saveClockTime_FUN_004cbf10(CGame *this_ptr)

{
  int iVar1;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_005b2420();
  this_ptr->clocktime = iVar1;
  return;
}
