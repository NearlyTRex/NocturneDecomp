// Name: core_game.cpp_CGame_updateDT_FUN_004d7d90
// Address: 004d7d90
// MANUAL RECONSTRUCTION
// Address Range: [[004d7d90, 004d7e46]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateDT_FUN_004d7d90(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_updateDT_FUN_004d7d90(CGame *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar2 = (iVar1 - this_ptr->clocktime) / 0x12;
  this_ptr->delta_time_int = iVar2;
  if (iVar2 < 0) {
    this_ptr->delta_time_int = 0;
  }
  this_ptr->clocktime = iVar1;
  if (0x4000 < this_ptr->delta_time_int) {
    this_ptr->delta_time_int = 0x4000;
  }
  iVar1 = g_MovieRecordingActive;
  this_ptr->delta_time_int =
       (int)ROUND(ROUND((float)this_ptr->delta_time_int * this_ptr->time_scale_factor));
  if (iVar1 != 0) {
    this_ptr->delta_time_int =
         (int)ROUND(ROUND((65536.0f / 30.0f) *
                          this_ptr->time_scale_factor));
  }
  g_GlobalDeltaTimeInt = this_ptr->delta_time_int;
  this_ptr->delta_time_float = (float)this_ptr->delta_time_int * (float)1.52587890625e-05;
  return;
}
