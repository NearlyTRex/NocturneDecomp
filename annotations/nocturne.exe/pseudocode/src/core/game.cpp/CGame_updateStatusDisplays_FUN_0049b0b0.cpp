// Name: core_game.cpp_CGame_updateStatusDisplays_FUN_0049b0b0
// Address: 0049b0b0
// Address Range: [[0049b0b0, 0049b231]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateStatusDisplays_FUN_0049b0b0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_updateStatusDisplays_FUN_0049b0b0(CGame *this_ptr)

{
  float fVar1;
  int iVar2;
  int iVar3;
  CGame *pCVar4;
  char (*local_1c) [256];
  char (*local_18) [256];
  
  fVar1 = this_ptr->message_timer - this_ptr->delta_time_float;
  this_ptr->message_timer = fVar1;
  if (fVar1 < 0.0) {
    this_ptr->message_timer = 0.0;
  }
  _DAT_01c78ac4 = _DAT_01c78ac4 - this_ptr->delta_time_float;
  if (_DAT_01c78ac4 < 0.0) {
    _DAT_01c78ac4 = 0.0;
  }
  iVar3 = 0;
  if (0 < this_ptr->status_display_count) {
    local_18 = this_ptr->status_bar_names;
    local_1c = this_ptr->status_bar_names + 1;
    pCVar4 = this_ptr;
    do {
      while( true ) {
        fVar1 = pCVar4->status_bar_timers[0] - this_ptr->delta_time_float;
        pCVar4->status_bar_timers[0] = fVar1;
        if (0.0 < fVar1) break;
        iVar2 = this_ptr->status_display_count + -1;
        this_ptr->status_display_count = iVar2;
        memmove(local_18,local_1c,(iVar2 - iVar3) * 0x100);
        memmove
                  (this_ptr->status_bar_values + iVar3,this_ptr->status_bar_values + iVar3 + 1,
                   (this_ptr->status_display_count - iVar3) * 4);
        memmove
                  (this_ptr->status_bar_timers + iVar3,this_ptr->status_bar_timers + iVar3 + 1,
                   (this_ptr->status_display_count - iVar3) * 4);
        if (this_ptr->status_display_count <= iVar3) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      pCVar4 = (CGame *)&pCVar4->game_pixy;
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
    } while (iVar3 < this_ptr->status_display_count);
  }
  return;
}
