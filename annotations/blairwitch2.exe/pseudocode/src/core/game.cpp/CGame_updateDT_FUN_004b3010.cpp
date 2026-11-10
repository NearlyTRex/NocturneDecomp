// Name: core_game.cpp_CGame_updateDT_FUN_004b3010
// Address: 004b3010
// Address Range: [[004b3010, 004b30c6]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateDT_FUN_004b3010(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_updateDT_FUN_004b3010(CGame *this_ptr)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
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
  iVar1 = _DAT_01cb80d4;
  fVar3 = (float10)this_ptr->delta_time_int * (float10)this_ptr->time_scale_factor;
  round();
  this_ptr->delta_time_int = (int)ROUND(fVar3);
  if (iVar1 != 0) {
    fVar3 = ((float10)_DAT_005d72ef / (float10)_DAT_006164a0) * (float10)this_ptr->time_scale_factor
    ;
    round();
    this_ptr->delta_time_int = (int)ROUND(fVar3);
  }
  _DAT_01c2a370 = this_ptr->delta_time_int;
  this_ptr->delta_time_float = (float)this_ptr->delta_time_int * (float)_DAT_005d72f3;
  return;
}
