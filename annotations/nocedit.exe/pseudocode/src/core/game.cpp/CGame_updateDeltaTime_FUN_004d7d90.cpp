// Name: core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
// Address: 004d7d90
// Address Range: [[004d7d90, 004d7e46]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  double value;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar2 = iVar1 - this_ptr->clocktime;
  iVar3 = iVar2 / 0x12;
  this_ptr->delta_time_int = iVar3;
  if (iVar3 < 0) {
    this_ptr->delta_time_int = 0;
  }
  this_ptr->clocktime = iVar1;
  if (0x4000 < this_ptr->delta_time_int) {
    this_ptr->delta_time_int = 0x4000;
  }
  iVar1 = g_DebugRecording;
  fVar4 = (float10)this_ptr->delta_time_int * (float10)this_ptr->time_scale_factor;
  value = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar2 % 0x12,iVar3));
  this_ptr->delta_time_int = (int)ROUND(fVar4);
  if (iVar1 != 0) {
    fVar4 = ((float10)65536f / (float10)30f) *
            (float10)this_ptr->time_scale_factor;
    crt_math_c_round_FUN_005fe6b0(value);
    this_ptr->delta_time_int = (int)ROUND(fVar4);
  }
  g_GlobalDeltaTimeInt = this_ptr->delta_time_int;
  this_ptr->delta_time_float = (float)this_ptr->delta_time_int * (float)1.52587890625e-05;
  return;
}
