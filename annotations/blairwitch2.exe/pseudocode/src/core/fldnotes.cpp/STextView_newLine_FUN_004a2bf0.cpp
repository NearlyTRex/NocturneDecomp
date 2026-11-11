// Name: core_fldnotes.cpp_STextView_newLine_FUN_004a2bf0
// Address: 004a2bf0
// Address Range: [[004a2bf0, 004a2c87]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_newLine_FUN_004a2bf0(STextView *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_newLine_FUN_004a2bf0(STextView *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  core_fldnotes_cpp_STextView_flushWord_FUN_004a2b30(this_ptr);
  this_ptr->cursor_x = this_ptr->margin_left;
  iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(this_ptr->font,0x6a);
  this_ptr->cursor_y = this_ptr->cursor_y + this_ptr->font->line_spacing + iVar2;
  if (this_ptr->margin_bottom < iVar2 + this_ptr->cursor_y) {
    core_fldnotes_cpp_STextView_newPage_FUN_004a2c90(this_ptr);
  }
  iVar2 = 0;
  iVar3 = 0;
  while (iVar3 < this_ptr->pages[this_ptr->page_index].resource_count) {
    piVar1 = *(int **)((int)this_ptr->pages[this_ptr->page_index].resources + iVar2);
    if ((this_ptr->cursor_y < piVar1[1] + piVar1[3]) && (this_ptr->cursor_x <= *piVar1 + piVar1[2]))
    {
      this_ptr->cursor_x = *piVar1 + piVar1[2];
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    else {
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
  }
  return;
}
