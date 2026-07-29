// Name: engine_ncursfx.cpp_CMouse_render_FUN_004ee740
// Address: 004ee740
// Address Range: [[004ee740, 004ee8a5]]
// Convention: __cdecl
// Signature: void __cdecl engine_ncursfx_cpp_CMouse_render_FUN_004ee740(CMouse *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_ncursfx_cpp_CMouse_render_FUN_004ee740(CMouse *this_ptr)

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
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710
            (this_ptr_00->cursors,_DAT_01bd1d8c + -0xd,_DAT_01bd1d90 + -0xc,0xffff);
  if (this_ptr->effect_mode != 0) {
    if (this_ptr->effect_mode != 2) {
      engine_3d_c_setBlendMode_FUN_004083c0(1);
      iVar1 = this_ptr->anim_timer >> 0x1f;
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710
                (this_ptr->flames +
                 ((int)((this_ptr->anim_timer + iVar1 * -0x10000) - (uint)(iVar1 << 0xf < 0)) >>
                 0x10),_DAT_01bd1d8c + -0xd,_DAT_01bd1d90 + -0xc,0x8000);
      engine_3d_c_setBlendMode_FUN_004083c0(0);
    }
    iVar1 = 7;
    this_ptr->anim_timer = this_ptr->anim_timer + _DAT_01bd1d80 * 0x20;
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
