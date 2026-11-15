// Name: core_game.cpp_CGame_slamDT_FUN_004d7f50
// Address: 004d7f50
// Address Range: [[004d7f50, 004d7fb5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_slamDT_FUN_004d7f50(CGame *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_slamDT_FUN_004d7f50(CGame *this_ptr,float delta_time)

{
  double dVar1;
  
  if (delta_time < 0.0) {
    _DAT_01d1d400 = "..\\core\\game.cpp";
    _DAT_01d1d404 = 0x12e0;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CGame::slamDT - invalid dt!");
  }
  this_ptr->delta_time_float = delta_time;
  dVar1 = round((double)(this_ptr->delta_time_float * _DAT_005e33a8));
  this_ptr->delta_time_int = (int)ROUND(dVar1);
  _DAT_01c43530 = this_ptr->delta_time_int;
  return;
}
