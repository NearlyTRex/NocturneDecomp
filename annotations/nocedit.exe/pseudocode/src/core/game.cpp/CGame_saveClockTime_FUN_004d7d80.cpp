// Name: core_game.cpp_CGame_saveClockTime_FUN_004d7d80
// Address: 004d7d80
// Address Range: [[004d7d80, 004d7d8f]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * n1, CGame * n2)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_saveClockTime_FUN_004d7d80(CGame *n1,CGame *n2)

{
  int iVar1;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  n1->clocktime = iVar1;
  return;
}
