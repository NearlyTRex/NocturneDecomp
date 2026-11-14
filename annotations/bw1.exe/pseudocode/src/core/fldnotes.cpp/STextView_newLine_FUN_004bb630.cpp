// Name: core_fldnotes.cpp_STextView_newLine_FUN_004bb630
// Address: 004bb630
// Address Range: [[004bb630, 004bb6bb]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_newLine_FUN_004bb630(STextView *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_newLine_FUN_004bb630(STextView *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  core_fldnotes_cpp_STextView_flushWord_FUN_004bb570(this_ptr);
  this_ptr->cursor_x = this_ptr->margin_left;
  iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(this_ptr->font,0x6a);
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
  core_fldnotes_cpp_STextView_newPage_FUN_004bb6c0(this_ptr);
  return;
}
