// Name: unkafter_bmppuzzl.cpp_CAudioRecPuzzle_render_FUN_004123c0
// Address: 004123c0
// Address Range: [[004123c0, 00412523]]
// Convention: __cdecl
// Signature: void __cdecl unkafter_bmppuzzl_cpp_CAudioRecPuzzle_render_FUN_004123c0(CAudioRecPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl unkafter_bmppuzzl_cpp_CAudioRecPuzzle_render_FUN_004123c0(CAudioRecPuzzle *this_ptr)

{
  float fVar1;
  CAudioRecPuzzle *pCVar2;
  int iVar3;
  
  engine_special_cpp_clearScreen_FUN_00560d70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&this_ptr->background,0,0,0xffff);
  pCVar2 = this_ptr;
  for (iVar3 = 0; iVar3 < this_ptr->button_count + 1; iVar3 = iVar3 + 1) {
    if (pCVar2->buttons[0].visible == 1) {
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
                (&this_ptr->buttons[iVar3].bitmap,pCVar2->buttons[0].x,pCVar2->buttons[0].y,0xffff);
    }
    pCVar2 = (CAudioRecPuzzle *)&pCVar2->click_handled;
  }
  if (this_ptr->transport_state == 0) {
    this_ptr->reel_angle =
         (float)(this_ptr->speed_setting + 1) * g_CGamePtr->delta_time_float * (float)_DAT_005b678e
         + this_ptr->reel_angle;
  }
  if (this_ptr->transport_state == 2) {
    this_ptr->reel_angle =
         this_ptr->reel_angle -
         (float)(this_ptr->speed_setting + 1) * g_CGamePtr->delta_time_float * (float)_DAT_005b678e;
  }
  fVar1 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(this_ptr->reel_angle);
  this_ptr->reel_angle = fVar1;
  (**(code **)((int)this_ptr->vtable + 0x3c))(this_ptr,1,0x10,this_ptr->reel_angle,0);
  (**(code **)((int)this_ptr->vtable + 0x3c))(this_ptr,4,4,this_ptr->reel_angle,1);
  (**(code **)((int)this_ptr->vtable + 0x3c))(this_ptr,0x17d,0x10,this_ptr->reel_angle,0);
  (**(code **)((int)this_ptr->vtable + 0x3c))(this_ptr,0x181,4,this_ptr->reel_angle,1);
  iVar3 = this_ptr->cursor_index;
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
            (CAlphaBitmap_ARRAY_007dffc0 + iVar3,_DAT_01c5fadc - this_ptr->cursor_offset_x[iVar3],
             _DAT_01c5fae0 - this_ptr->cursor_offset_y[iVar3],0xffff);
  return;
}
