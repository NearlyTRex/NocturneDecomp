// Name: core_game.cpp_CGame_slamDT_FUN_004e3080
// Address: 004e3080
// Address Range: [[004e3080, 004e30e5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_slamDT_FUN_004e3080(CGame *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_game_cpp_CGame_slamDT_FUN_004e3080(CGame *this_ptr,float delta_time)

{
  if (delta_time < 0.0) {
    g_CurrentFilename = "..\\core\\game.cpp";
    g_CurrentLineNumber = 0x10ac;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CGame::slamDT - invalid dt!");
  }
  this_ptr->delta_time_float = delta_time;
  this_ptr->delta_time_int = (int)ROUND(ROUND(this_ptr->delta_time_float * 65536.0f));
  g_GlobalDeltaTimeInt = this_ptr->delta_time_int;
  return;
}
