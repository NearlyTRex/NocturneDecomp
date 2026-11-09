// Name: core_game.cpp_CGame_saveClockTime_FUN_004cbf10
// Address: 004cbf10
// Address Range: [[004cbf10, 004cbf1f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_saveClockTime_FUN_004cbf10(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_saveClockTime_FUN_004cbf10(CGame *this_ptr)

{
  uint uVar1;
  
  uVar1 = wincore_winrun_cpp_FUN_005b2420();
  *(uint *)&this_ptr->field_0x28c = uVar1;
  return;
}
