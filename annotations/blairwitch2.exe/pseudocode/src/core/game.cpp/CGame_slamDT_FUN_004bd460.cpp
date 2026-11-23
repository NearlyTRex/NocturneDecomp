// Name: core_game.cpp_CGame_slamDT_FUN_004bd460
// Address: 004bd460
// Address Range: [[004bd460, 004bd4c5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_slamDT_FUN_004bd460(CGame *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_slamDT_FUN_004bd460(CGame *this_ptr,float delta_time)

{
  double dVar1;
  
  if (delta_time < 0.0) {
    g_CurrentFilename = "..\\core\\game.cpp";
    g_CurrentLineNumber = 4883;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CGame::slamDT - invalid dt!");
  }
  this_ptr->delta_time_float = delta_time;
  dVar1 = round((double)(this_ptr->delta_time_float * 65536.0f));
  this_ptr->delta_time_int = (int)ROUND(dVar1);
  g_GlobalDeltaTimeInt = this_ptr->delta_time_int;
  return;
}
