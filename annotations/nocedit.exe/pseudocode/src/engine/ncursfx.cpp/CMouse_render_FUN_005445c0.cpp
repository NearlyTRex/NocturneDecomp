// Name: engine_ncursfx.cpp_CMouse_render_FUN_005445c0
// Address: 005445c0
// Address Range: [[005445c0, 00544725]]
// Convention: __cdecl
// Signature: void __cdecl engine_ncursfx_cpp_CMouse_render_FUN_005445c0(CMouse *this_ptr)

#include "nocturne.h"

void __cdecl engine_ncursfx_cpp_CMouse_render_FUN_005445c0(CMouse *this_ptr)

{
  int iVar1;
  CMouse *this_ptr_00;
  
  if (this_ptr->effect_mode == 1) {
    iVar1 = this_ptr->anim_timer >> 0x1f;
    this_ptr_00 = (CMouse *)
                  (this_ptr->cursors +
                  ((int)((this_ptr->anim_timer + iVar1 * -0x10000) - (uint)(iVar1 << 0xf < 0)) >>
                  0x10) + 1);
  }
  else {
    this_ptr_00 = this_ptr;
    if (this_ptr->effect_mode == 2) {
      iVar1 = this_ptr->anim_timer >> 0x1f;
      this_ptr_00 = (CMouse *)
                    (this_ptr->skulls +
                    ((int)((this_ptr->anim_timer + iVar1 * -0x10000) - (uint)(iVar1 << 0xf < 0)) >>
                    0x10));
    }
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
            (this_ptr_00->cursors,g_MouseX + -0xd,g_MouseY + -0xc,0xffff);
  if (this_ptr->effect_mode != 0) {
    if (this_ptr->effect_mode != 2) {
      engine_3d_c_setBlendMode_FUN_00406dd0(1);
      iVar1 = this_ptr->anim_timer >> 0x1f;
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
                (this_ptr->flames +
                 ((int)((this_ptr->anim_timer + iVar1 * -0x10000) - (uint)(iVar1 << 0xf < 0)) >>
                 0x10),g_MouseX + -0xd,g_MouseY + -0xc,0x8000);
      engine_3d_c_setBlendMode_FUN_00406dd0(0);
    }
    iVar1 = 7;
    this_ptr->anim_timer = this_ptr->anim_timer + g_GlobalDeltaTimeInt * 0x20;
    if (this_ptr->effect_mode == 2) {
      iVar1 = 0xf;
    }
    if (iVar1 * 0x10000 <= this_ptr->anim_timer) {
      this_ptr->effect_mode = 0;
      this_ptr->anim_timer = 0;
      return;
    }
  }
  return;
}
