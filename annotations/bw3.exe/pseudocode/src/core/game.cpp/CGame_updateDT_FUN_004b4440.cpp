// Name: core_game.cpp_CGame_updateDT_FUN_004b4440
// Address: 004b4440
// Address Range: [[004b4440, 004b45d8]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateDT_FUN_004b4440(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_updateDT_FUN_004b4440(CGame *this_ptr)

{
  float fVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  if (this_ptr->slow_motion_mode == 1) {
    if (this_ptr->slow_motion_timer <= 0.0) {
      this_ptr->slow_motion_timer = 1.0;
    }
    fVar1 = (float)_DAT_005c21e8 - this_ptr->slow_motion_timer;
    this_ptr->time_scale_factor = fVar1;
    if ((float)_DAT_005c21f0 <= fVar1) {
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
  iVar2 = wincore_winrun_cpp_getTime_FUN_005806a0();
  iVar3 = (iVar2 - this_ptr->clocktime) / 0x12;
  this_ptr->delta_time_int = iVar3;
  if (iVar3 < 0) {
    this_ptr->delta_time_int = 0;
  }
  this_ptr->clocktime = iVar2;
  if (0x4000 < this_ptr->delta_time_int) {
    this_ptr->delta_time_int = 0x4000;
  }
  iVar2 = _DAT_01d22c44;
  dVar4 = round
                    ((double)((float)this_ptr->delta_time_int * this_ptr->time_scale_factor));
  this_ptr->delta_time_int = (int)ROUND(dVar4);
  if (iVar2 != 0) {
    dVar4 = round
                      ((double)((_DAT_005c21f8 / _DAT_005fe9e8) * this_ptr->time_scale_factor));
    this_ptr->delta_time_int = (int)ROUND(dVar4);
  }
  _DAT_01c5fad0 = this_ptr->delta_time_int;
  this_ptr->delta_time_float = (float)this_ptr->delta_time_int * (float)_DAT_005c2200;
  return;
}
