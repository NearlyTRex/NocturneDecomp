// Name: core_fldnotes.cpp_SPageResourceText_draw_FUN_004a8570
// Address: 004a8570
// Address Range: [[004a8570, 004a8647]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SPageResourceText_draw_FUN_004a8570(SPageResourceText *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_SPageResourceText_draw_FUN_004a8570(SPageResourceText *this_ptr)

{
  int iVar1;
  int iVar2;
  int x;
  
  engine_font_cpp_FUN_004b0a20
            (this_ptr->font,this_ptr->text,(this_ptr->base).x,(this_ptr->base).y,0,0xffffffff);
  if (this_ptr->underlined == 0) {
    return;
  }
  iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(this_ptr->font,0x78);
  iVar1 = (this_ptr->base).y + iVar1;
  if (this_ptr->font != _DAT_01549ac0) {
    _DAT_01c6b5c0 = 0;
    engine_2d_c_drawHLine_FUN_00402f30
              ((this_ptr->base).x,iVar1,(this_ptr->base).x + (this_ptr->base).width + -1);
    return;
  }
  iVar2 = (this_ptr->base).width;
  x = (this_ptr->base).x;
  if (CAlphaBitmap_01d19cd8.width < iVar2) {
    do {
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&CAlphaBitmap_01d19cd8,x,iVar1,0xffff);
      iVar2 = iVar2 - CAlphaBitmap_01d19cd8.width;
      x = x + CAlphaBitmap_01d19cd8.width;
    } while (CAlphaBitmap_01d19cd8.width < iVar2);
  }
  engine_alphabit_cpp_FUN_0040d8a0
            (&CAlphaBitmap_01d19cd8,x,iVar1,0,0,iVar2 + -1,CAlphaBitmap_01d19cd8.height + -1,0xffff)
  ;
  return;
}
