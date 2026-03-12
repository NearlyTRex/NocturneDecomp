// Name: core_game.cpp_CGame_updateStatusDisplays_FUN_004d85a0
// Address: 004d85a0
// Address Range: [[004d85a0, 004d8721]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateStatusDisplays_FUN_004d85a0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_updateStatusDisplays_FUN_004d85a0(CGame *this_ptr)

{
  float fVar2;
  int iVar2;
  int iVar3;
  CGame *pCVar4;
  char (*local_1c) [256];
  char (*local_18) [256];
  float fVar1;
  
  fVar1 = this_ptr->message_timer - this_ptr->delta_time_float;
  this_ptr->message_timer = fVar1;
  if (fVar1 < 0.0) {
    this_ptr->message_timer = 0.0;
  }
  g_OverlayDisplayTimer = g_OverlayDisplayTimer - this_ptr->delta_time_float;
  if (g_OverlayDisplayTimer < 0.0) {
    g_OverlayDisplayTimer = 0.0;
  }
  iVar3 = 0;
  if (0 < this_ptr->status_display_count) {
    local_18 = this_ptr->status_bar_names;
    local_1c = this_ptr->status_bar_names + 1;
    pCVar4 = this_ptr;
    do {
      while( true ) {
        fVar2 = pCVar4->status_bar_timers[0] - this_ptr->delta_time_float;
        pCVar4->status_bar_timers[0] = fVar2;
        if (0.0 < fVar2) break;
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
