// Name: unkafter_superopt.cpp_CChemPuzzle_render_FUN_00413d50
// Address: 00413d50
// Address Range: [[00413d50, 00413e2d]]
// Convention: __cdecl
// Signature: void __cdecl unkafter_superopt_cpp_CChemPuzzle_render_FUN_00413d50(CChemPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl unkafter_superopt_cpp_CChemPuzzle_render_FUN_00413d50(CChemPuzzle *this_ptr)

{
  CChemPuzzle *pCVar1;
  int iVar2;
  
  engine_special_cpp_clearScreen_FUN_00560d70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&this_ptr->background,0,0,0xffff);
  pCVar1 = this_ptr;
  for (iVar2 = 0; iVar2 < this_ptr->button_count + 1; iVar2 = iVar2 + 1) {
    if (pCVar1->buttons[0].visible == 1) {
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
                (&this_ptr->buttons[iVar2].bitmap,pCVar1->buttons[0].x,pCVar1->buttons[0].y,0xffff);
    }
    pCVar1 = (CChemPuzzle *)&pCVar1->previous_mouse_button;
  }
  if (this_ptr->hovering != 0) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
              (CAlphaBitmap_ARRAY_007e0010 + 4,_DAT_01c5fadc - this_ptr->cursor_offset_x[4],
               _DAT_01c5fae0 - this_ptr->cursor_offset_y[4],0xffff);
  }
  iVar2 = this_ptr->dropper_level;
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
            (CAlphaBitmap_ARRAY_007e0010 + iVar2,_DAT_01c5fadc - this_ptr->cursor_offset_x[iVar2],
             _DAT_01c5fae0 - this_ptr->cursor_offset_y[iVar2],0xffff);
  return;
}
