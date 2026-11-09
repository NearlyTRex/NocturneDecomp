// Name: core_game.cpp_CGame_slamDT_FUN_004bf3a0
// Address: 004bf3a0
// Address Range: [[004bf3a0, 004bf405]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_slamDT_FUN_004bf3a0(CGame *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_slamDT_FUN_004bf3a0(CGame *this_ptr,float delta_time)

{
  float10 fVar1;
  
  if (delta_time < 0.0) {
    _DAT_01d71de0 = "..\\core\\game.cpp";
    _DAT_01d71de4 = 0x1317;
    core_main_c_FUN_004e4330("CGame::slamDT - invalid dt!");
  }
  *(float *)&this_ptr->field_0x314 = delta_time;
  fVar1 = (float10)*(float *)&this_ptr->field_0x314 * (float10)_DAT_005c39ac;
  round();
  *(int *)&this_ptr->field_0x310 = (int)ROUND(fVar1);
  _DAT_01c5fad0 = *(uint *)&this_ptr->field_0x310;
  return;
}
