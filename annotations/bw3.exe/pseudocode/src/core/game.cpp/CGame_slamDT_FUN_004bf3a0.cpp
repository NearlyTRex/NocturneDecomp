// Name: core_game.cpp_CGame_slamDT_FUN_004bf3a0
// Address: 004bf3a0
// Address Range: [[004bf3a0, 004bf405]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_slamDT_FUN_004bf3a0(CGame *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_slamDT_FUN_004bf3a0(CGame *this_ptr,float delta_time)

{
  double dVar1;
  
  if (delta_time < 0.0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\game.cpp";
    g_INT_01d71de4 = 0x1317;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CGame::slamDT - invalid dt!");
  }
  this_ptr->delta_time_float = delta_time;
  dVar1 = round((double)(this_ptr->delta_time_float * 65536.0f));
  this_ptr->delta_time_int = (int)ROUND(dVar1);
  g_INT_01c5fad0 = this_ptr->delta_time_int;
  return;
}
