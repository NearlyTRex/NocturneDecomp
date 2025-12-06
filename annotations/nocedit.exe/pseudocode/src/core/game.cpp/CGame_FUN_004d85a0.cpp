// Name: core_game.cpp_CGame_FUN_004d85a0
// Address: 004d85a0
// Address Range: [[004d85a0, 004d8721]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_FUN_004d85a0(CGame * this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_FUN_004d85a0(CGame *this_ptr)

{
  float fVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  int unaff_EDI;
  CGame *pCVar4;
  char *local_1c;
  char *local_18;
  
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
    local_18 = this_ptr->field101_0x38c;
    local_1c = this_ptr->field101_0x38c + 0x100;
    pCVar4 = this_ptr;
    do {
      while( true ) {
        fVar1 = *(float *)(pCVar4->field101_0x38c + 0x514) - this_ptr->delta_time_float;
        *(float *)(pCVar4->field101_0x38c + 0x514) = fVar1;
        if (0.0 < fVar1) break;
        iVar2 = this_ptr->status_display_count + -1;
        this_ptr->status_display_count = iVar2;
        crt_string_c_memmove_FUN_005fe5e0(local_18,local_1c,(iVar2 - iVar3) * 0x100);
        crt_string_c_memmove_FUN_005fe5e0
                  (local_1c + unaff_EBP,local_1c + unaff_EBP + 4,
                   (this_ptr->status_display_count - iVar3) * 4);
        crt_string_c_memmove_FUN_005fe5e0
                  (local_1c + unaff_EDI,local_1c + (int)(this_ptr->field101_0x38c + 0x500),
                   (this_ptr->status_display_count - iVar3) * 4);
        if (this_ptr->status_display_count <= iVar3) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      pCVar4 = (CGame *)&pCVar4->game_pixy;
      local_18 = local_18 + 0x100;
      local_1c = local_1c + 0x100;
    } while (iVar3 < this_ptr->status_display_count);
  }
  return;
}
