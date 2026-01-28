// Name: core_game.cpp_CGame_FUN_004d85a0
// Address: 004d85a0
// Address Range: [[004d85a0, 004d8721]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_FUN_004d85a0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_FUN_004d85a0(CGame *this_ptr)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  CGame *pCVar5;
  char *local_1c;
  char *local_18;
  
  fVar2 = this_ptr->message_timer - this_ptr->delta_time_float;
  this_ptr->message_timer = fVar2;
  if (fVar2 < 0.0) {
    this_ptr->message_timer = 0.0;
  }
  g_OverlayDisplayTimer = g_OverlayDisplayTimer - this_ptr->delta_time_float;
  if (g_OverlayDisplayTimer < 0.0) {
    g_OverlayDisplayTimer = 0.0;
  }
  iVar4 = 0;
  if (0 < this_ptr->status_display_count) {
    local_18 = this_ptr->unk13;
    local_1c = this_ptr->unk13 + 0x100;
    pCVar5 = this_ptr;
    do {
      while( true ) {
        iVar1 = iVar4 * 4;
        fVar2 = *(float *)(pCVar5->unk13 + 0x514) - this_ptr->delta_time_float;
        *(float *)(pCVar5->unk13 + 0x514) = fVar2;
        if (0.0 < fVar2) break;
        iVar3 = this_ptr->status_display_count + -1;
        this_ptr->status_display_count = iVar3;
        crt_string_c_memmove_FUN_005fe5e0(local_18,local_1c,(iVar3 - iVar4) * 0x100);
        crt_string_c_memmove_FUN_005fe5e0
                  (this_ptr->unk13 + iVar1 + 0x500,this_ptr->unk13 + iVar1 + 0x504,
                   (this_ptr->status_display_count - iVar4) * 4);
        crt_string_c_memmove_FUN_005fe5e0
                  (this_ptr->unk13 + iVar1 + 0x514,this_ptr->unk13 + iVar1 + 0x518,
                   (this_ptr->status_display_count - iVar4) * 4);
        if (this_ptr->status_display_count <= iVar4) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
      pCVar5 = (CGame *)&pCVar5->game_pixy;
      local_18 = local_18 + 0x100;
      local_1c = local_1c + 0x100;
    } while (iVar4 < this_ptr->status_display_count);
  }
  return;
}
