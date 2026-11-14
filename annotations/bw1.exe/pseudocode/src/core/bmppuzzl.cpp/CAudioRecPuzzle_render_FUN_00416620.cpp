// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_render_FUN_00416620
// Address: 00416620
// Address Range: [[00416620, 00416786]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_render_FUN_00416620(CAudioRecPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_render_FUN_00416620(CAudioRecPuzzle *this_ptr)

{
  float fVar1;
  CAudioRecPuzzle *pCVar2;
  int iVar3;
  
  engine_special_cpp_clearScreen_FUN_0057dc40();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&this_ptr->background,0,0,0xffff);
  pCVar2 = this_ptr;
  for (iVar3 = 0; iVar3 < this_ptr->button_count + 1; iVar3 = iVar3 + 1) {
    if (pCVar2->buttons[0].visible == 1) {
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
                (&this_ptr->buttons[iVar3].bitmap,pCVar2->buttons[0].x,pCVar2->buttons[0].y,0xffff);
    }
    pCVar2 = (CAudioRecPuzzle *)&pCVar2->click_handled;
  }
  if (this_ptr->transport_state == 0) {
    this_ptr->reel_angle =
         (float)(this_ptr->speed_setting + 1) * g_CGamePtr->delta_time_float * (float)_DAT_005d3f42
         + this_ptr->reel_angle;
  }
  if (this_ptr->transport_state == 2) {
    this_ptr->reel_angle =
         this_ptr->reel_angle -
         (float)(this_ptr->speed_setting + 1) * g_CGamePtr->delta_time_float * (float)_DAT_005d3f42;
  }
  fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(this_ptr->reel_angle);
  this_ptr->reel_angle = fVar1;
  (**(code **)((int)(this_ptr->base).vtable + 0x3c))(this_ptr,1,0x10,this_ptr->reel_angle,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x3c))(this_ptr,4,4,this_ptr->reel_angle,1);
  (**(code **)((int)(this_ptr->base).vtable + 0x3c))(this_ptr,0x17d,0x10,this_ptr->reel_angle,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x3c))(this_ptr,0x181,4,this_ptr->reel_angle,1);
  iVar3 = this_ptr->cursor_index;
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
            (CAlphaBitmap_ARRAY_007c3984 + iVar3,_DAT_01c4353c - this_ptr->cursor_offset_x[iVar3],
             _DAT_01c43540 - this_ptr->cursor_offset_y[iVar3],0xffff);
  return;
}
