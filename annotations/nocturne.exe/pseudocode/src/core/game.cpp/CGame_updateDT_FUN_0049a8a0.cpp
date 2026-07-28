// Name: core_game.cpp_CGame_updateDT_FUN_0049a8a0
// Address: 0049a8a0
// Address Range: [[0049a8a0, 0049a956]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateDT_FUN_0049a8a0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_updateDT_FUN_0049a8a0(CGame *this_ptr)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
  iVar2 = (iVar1 - this_ptr->clocktime) / 0x12;
  this_ptr->delta_time_int = iVar2;
  if (iVar2 < 0) {
    this_ptr->delta_time_int = 0;
  }
  this_ptr->clocktime = iVar1;
  if (0x4000 < this_ptr->delta_time_int) {
    this_ptr->delta_time_int = 0x4000;
  }
  iVar1 = _DAT_01c78acc;
  dVar3 = round
                    ((double)((float)this_ptr->delta_time_int * this_ptr->time_scale_factor));
  this_ptr->delta_time_int = (int)ROUND(dVar3);
  if (iVar1 != 0) {
    dVar3 = round
                      ((double)((65536.0f / _DAT_005b9360) * this_ptr->time_scale_factor));
    this_ptr->delta_time_int = (int)ROUND(dVar3);
  }
  _DAT_01bd1d80 = this_ptr->delta_time_int;
  this_ptr->delta_time_float = (float)this_ptr->delta_time_int * (float)1.52587890625e-05;
  return;
}
