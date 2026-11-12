// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_render_FUN_0059b430
// Address: 0059b430
// Address Range: [[0059b430, 0059b59e]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_render_FUN_0059b430(CAudioRecPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_render_FUN_0059b430(CAudioRecPuzzle *this_ptr)

{
  float fVar1;
  CAudioRecPuzzle *pCVar2;
  int iVar3;
  
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  iVar3 = 0;
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&this_ptr->background,0,0,0xffff);
  pCVar2 = this_ptr;
  if (0 < this_ptr->button_count) {
    do {
      if (pCVar2->buttons[0].visible == 1) {
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
                  (&this_ptr->buttons[iVar3].bitmap,pCVar2->buttons[0].x,pCVar2->buttons[0].y,0xffff
                  );
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CAudioRecPuzzle *)&pCVar2->click_handled;
    } while (iVar3 < this_ptr->button_count);
  }
  if (this_ptr->transport_state == 0) {
    this_ptr->reel_angle =
         (float)(this_ptr->speed_setting + 1) * g_CGamePtr->delta_time_float * (float)_DAT_005ef584
         + this_ptr->reel_angle;
  }
  if (this_ptr->transport_state == 2) {
    this_ptr->reel_angle =
         this_ptr->reel_angle -
         (float)(this_ptr->speed_setting + 1) * g_CGamePtr->delta_time_float * (float)_DAT_005ef584;
  }
  fVar1 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(this_ptr->reel_angle);
  this_ptr->reel_angle = fVar1;
  (**(code **)((int)this_ptr->vtable + 0x3c))(this_ptr,1,8,this_ptr->reel_angle,0);
  (**(code **)((int)this_ptr->vtable + 0x3c))(this_ptr,4,4,this_ptr->reel_angle,1);
  (**(code **)((int)this_ptr->vtable + 0x3c))(this_ptr,0x17d,8,this_ptr->reel_angle,0);
  (**(code **)((int)this_ptr->vtable + 0x3c))(this_ptr,0x181,4,this_ptr->reel_angle,1);
  iVar3 = this_ptr->cursor_index;
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
            (CAlphaBitmap_ARRAY_026677ec + iVar3,_DAT_01c2a37c - this_ptr->cursor_offset_x[iVar3],
             _DAT_01c2a380 - this_ptr->cursor_offset_y[iVar3],0xffff);
  return;
}
