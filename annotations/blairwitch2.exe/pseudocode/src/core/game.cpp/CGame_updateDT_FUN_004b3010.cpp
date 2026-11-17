// Name: core_game.cpp_CGame_updateDT_FUN_004b3010
// Address: 004b3010
// Address Range: [[004b3010, 004b30c6]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateDT_FUN_004b3010(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_updateDT_FUN_004b3010(CGame *this_ptr)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  iVar2 = (iVar1 - this_ptr->clocktime) / 0x12;
  this_ptr->delta_time_int = iVar2;
  if (iVar2 < 0) {
    this_ptr->delta_time_int = 0;
  }
  this_ptr->clocktime = iVar1;
  if (0x4000 < this_ptr->delta_time_int) {
    this_ptr->delta_time_int = 0x4000;
  }
  iVar1 = g_INT_01cb80d4;
  dVar3 = round
                    ((double)((float)this_ptr->delta_time_int * this_ptr->time_scale_factor));
  this_ptr->delta_time_int = (int)ROUND(dVar3);
  if (iVar1 != 0) {
    dVar3 = round
                      ((double)((65536.0f / 30.0f) * this_ptr->time_scale_factor)
                      );
    this_ptr->delta_time_int = (int)ROUND(dVar3);
  }
  g_INT_01c2a370 = this_ptr->delta_time_int;
  this_ptr->delta_time_float = (float)this_ptr->delta_time_int * (float)1.52587890625e-05;
  return;
}
