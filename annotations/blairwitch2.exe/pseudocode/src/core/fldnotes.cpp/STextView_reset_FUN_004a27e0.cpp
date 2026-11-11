// Name: core_fldnotes.cpp_STextView_reset_FUN_004a27e0
// Address: 004a27e0
// Address Range: [[004a27e0, 004a2883]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_reset_FUN_004a27e0(STextView *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_STextView_reset_FUN_004a27e0(STextView *this_ptr)

{
  int iVar1;
  int iVar2;
  
  if (this_ptr->pages != (STextPage *)0x0) {
    iVar2 = 0;
    if (0 < this_ptr->page_count) {
      iVar1 = 0;
      do {
        iVar2 = iVar2 + 1;
        core_fldnotes_cpp_STextPage_clear_FUN_004a26a0
                  ((STextPage *)((int)this_ptr->pages->resources + iVar1 + -4));
        iVar1 = iVar1 + 0x144;
      } while (iVar2 < this_ptr->page_count);
    }
    FUN_005b86a0(this_ptr->pages);
    this_ptr->pages = (STextPage *)0x0;
  }
  this_ptr->page_index = 0;
  this_ptr->unknown_0x30 = 0;
  this_ptr->underline = 0;
  this_ptr->word[0] = '\0';
  this_ptr->page_count = 0;
  this_ptr->margin_left = this_ptr->rect_left;
  this_ptr->margin_top = this_ptr->rect_top;
  this_ptr->margin_right = this_ptr->rect_right;
  this_ptr->margin_bottom = this_ptr->rect_bottom;
  this_ptr->cursor_x = this_ptr->margin_left;
  this_ptr->cursor_y = this_ptr->margin_top;
  this_ptr->font = _DAT_01511cd0;
  this_ptr->word_x = this_ptr->margin_left;
  this_ptr->word_y = this_ptr->margin_bottom;
  return;
}
