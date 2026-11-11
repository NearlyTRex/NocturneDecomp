// Name: core_fldnotes.cpp_SPageResourceText_draw_FUN_004a2060
// Address: 004a2060
// Address Range: [[004a2060, 004a2137]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SPageResourceText_draw_FUN_004a2060(SPageResourceText *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_SPageResourceText_draw_FUN_004a2060(SPageResourceText *this_ptr)

{
  int iVar1;
  int iVar2;
  int x;
  
  engine_font_cpp_FUN_004a8df0
            (this_ptr->font,this_ptr->text,(this_ptr->base).x,(this_ptr->base).y,0,0xffffffff);
  if (this_ptr->underlined == 0) {
    return;
  }
  iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(this_ptr->font,0x78);
  iVar1 = (this_ptr->base).y + iVar1;
  if (this_ptr->font != _DAT_01511cd0) {
    _DAT_01c35e60 = 0;
    engine_2d_c_drawHLine_FUN_00402f30
              ((this_ptr->base).x,iVar1,(this_ptr->base).x + (this_ptr->base).width + -1);
    return;
  }
  iVar2 = (this_ptr->base).width;
  x = (this_ptr->base).x;
  if (CAlphaBitmap_01caf22c.width < iVar2) {
    do {
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&CAlphaBitmap_01caf22c,x,iVar1,0xffff);
      iVar2 = iVar2 - CAlphaBitmap_01caf22c.width;
      x = x + CAlphaBitmap_01caf22c.width;
    } while (CAlphaBitmap_01caf22c.width < iVar2);
  }
  engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040dab0
            (&CAlphaBitmap_01caf22c,x,iVar1,0,0,iVar2 + -1,CAlphaBitmap_01caf22c.height + -1,0xffff)
  ;
  return;
}
