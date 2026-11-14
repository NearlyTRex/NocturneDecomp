// Name: core_fldnotes.cpp_STextView_newLine_FUN_004a9270
// Address: 004a9270
// Address Range: [[004a9270, 004a92fb]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_newLine_FUN_004a9270(STextView *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_newLine_FUN_004a9270(STextView *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  core_fldnotes_cpp_STextView_flushWord_FUN_004a91b0(this_ptr);
  this_ptr->cursor_x = this_ptr->margin_left;
  iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(this_ptr->font,0x6a);
  this_ptr->cursor_y = this_ptr->cursor_y + iVar1 + this_ptr->font->line_spacing;
  iVar3 = 0;
  for (iVar4 = 0; iVar4 < this_ptr->pages[this_ptr->page_index].resource_count; iVar4 = iVar4 + 1) {
    iVar2 = *(int *)((int)this_ptr->pages[this_ptr->page_index].resources + iVar3);
    iVar2 = *(int *)(iVar2 + 4) + *(int *)(iVar2 + 0xc);
    if (this_ptr->cursor_y < iVar2) {
      this_ptr->cursor_y = iVar2;
    }
    iVar3 = iVar3 + 4;
  }
  if (iVar1 + this_ptr->cursor_y <= this_ptr->margin_bottom) {
    return;
  }
  core_fldnotes_cpp_STextView_newPage_FUN_004a9300(this_ptr);
  return;
}
