// Name: core_game.cpp_CGame_slamDT_FUN_004a5f00
// Address: 004a5f00
// Address Range: [[004a5f00, 004a5f65]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_slamDT_FUN_004a5f00(CGame *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_slamDT_FUN_004a5f00(CGame *this_ptr,float delta_time)

{
  double dVar1;
  
  if (delta_time < 0.0) {
    g_CurrentFilename = "..\\core\\game.cpp";
    g_CurrentLineNumber = 4277;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CGame::slamDT - invalid dt!");
  }
  this_ptr->delta_time_float = delta_time;
  dVar1 = round((double)(this_ptr->delta_time_float * 65536.0f));
  this_ptr->delta_time_int = (int)ROUND(dVar1);
  _DAT_01bd1d80 = this_ptr->delta_time_int;
  return;
}
