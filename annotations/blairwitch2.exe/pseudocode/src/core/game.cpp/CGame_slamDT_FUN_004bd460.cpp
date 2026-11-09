// Name: core_game.cpp_CGame_slamDT_FUN_004bd460
// Address: 004bd460
// Address Range: [[004bd460, 004bd4c5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_slamDT_FUN_004bd460(CGame *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_slamDT_FUN_004bd460(CGame *this_ptr,float delta_time)

{
  float10 fVar1;
  
  if (delta_time < 0.0) {
    _DAT_01d046a0 = "..\\core\\game.cpp";
    _DAT_01d046a4 = 0x1313;
    core_main_c_FUN_004e4500("CGame::slamDT - invalid dt!");
  }
  *(float *)&this_ptr->field_0x284 = delta_time;
  fVar1 = (float10)*(float *)&this_ptr->field_0x284 * (float10)_DAT_005d884b;
  round();
  *(int *)&this_ptr->field_0x280 = (int)ROUND(fVar1);
  _DAT_01c2a370 = *(uint *)&this_ptr->field_0x280;
  return;
}
