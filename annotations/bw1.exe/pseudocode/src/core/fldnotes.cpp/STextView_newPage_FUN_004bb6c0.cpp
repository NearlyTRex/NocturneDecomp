// Name: core_fldnotes.cpp_STextView_newPage_FUN_004bb6c0
// Address: 004bb6c0
// Address Range: [[004bb6c0, 004bb6eb]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_newPage_FUN_004bb6c0(STextView *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_newPage_FUN_004bb6c0(STextView *this_ptr)

{
  core_fldnotes_cpp_STextView_flushWord_FUN_004bb570(this_ptr);
  this_ptr->cursor_x = this_ptr->margin_left;
  this_ptr->page_index = this_ptr->page_index + 1;
  this_ptr->cursor_y = this_ptr->margin_top;
  core_fldnotes_cpp_STextView_ensurePage_FUN_004bbbf0(this_ptr);
  return;
}
