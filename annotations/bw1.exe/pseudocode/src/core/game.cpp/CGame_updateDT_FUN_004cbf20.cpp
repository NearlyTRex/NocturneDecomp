// Name: core_game.cpp_CGame_updateDT_FUN_004cbf20
// Address: 004cbf20
// Address Range: [[004cbf20, 004cc0b8]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateDT_FUN_004cbf20(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_updateDT_FUN_004cbf20(CGame *this_ptr)

{
  float fVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  if (this_ptr->slow_motion_mode == 1) {
    if (this_ptr->slow_motion_timer <= 0.0) {
      this_ptr->slow_motion_timer = 1.0;
    }
    fVar1 = (float)0.90000000000000002 - this_ptr->slow_motion_timer;
    this_ptr->time_scale_factor = fVar1;
    if ((float)0.10000000000000001 <= fVar1) {
      if (1.0 < fVar1) {
        this_ptr->time_scale_factor = 1.0;
      }
    }
    else {
      this_ptr->time_scale_factor = 0.1;
    }
  }
  else if (this_ptr->slow_motion_mode != 2) {
    this_ptr->time_scale_factor = 1.0;
  }
  this_ptr->slow_motion_timer = this_ptr->slow_motion_timer - this_ptr->delta_time_float;
  if ((this_ptr->slow_motion_mode == 1) && (this_ptr->slow_motion_timer <= 0.0)) {
    this_ptr->slow_motion_mode = 0;
    this_ptr->time_scale_factor = 1.0;
  }
  iVar2 = wincore_winrun_cpp_getTime_FUN_005b2420();
  iVar3 = (iVar2 - this_ptr->clocktime) / 0x12;
  this_ptr->delta_time_int = iVar3;
  if (iVar3 < 0) {
    this_ptr->delta_time_int = 0;
  }
  this_ptr->clocktime = iVar2;
  if (0x4000 < this_ptr->delta_time_int) {
    this_ptr->delta_time_int = 0x4000;
  }
  iVar2 = g_MovieRecordingActive;
  dVar4 = round
                    ((double)((float)this_ptr->delta_time_int * this_ptr->time_scale_factor));
  this_ptr->delta_time_int = (int)ROUND(dVar4);
  if (iVar2 != 0) {
    dVar4 = round
                      ((double)((65536.0f / 30.0f) *
                               this_ptr->time_scale_factor));
    this_ptr->delta_time_int = (int)ROUND(dVar4);
  }
  g_GlobalDeltaTimeInt = this_ptr->delta_time_int;
  this_ptr->delta_time_float = (float)this_ptr->delta_time_int * (float)1.52587890625e-05;
  return;
}
