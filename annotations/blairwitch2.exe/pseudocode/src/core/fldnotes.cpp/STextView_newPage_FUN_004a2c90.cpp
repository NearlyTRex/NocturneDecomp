// Name: core_fldnotes.cpp_STextView_newPage_FUN_004a2c90
// Address: 004a2c90
// Address Range: [[004a2c90, 004a2cbb]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_newPage_FUN_004a2c90(STextView *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_newPage_FUN_004a2c90(STextView *this_ptr)

{
  core_fldnotes_cpp_STextView_flushWord_FUN_004a2b30(this_ptr);
  this_ptr->cursor_x = this_ptr->margin_left;
  this_ptr->page_index = this_ptr->page_index + 1;
  this_ptr->cursor_y = this_ptr->margin_top;
  core_fldnotes_cpp_STextView_ensurePage_FUN_004a31c0(this_ptr);
  return;
}
