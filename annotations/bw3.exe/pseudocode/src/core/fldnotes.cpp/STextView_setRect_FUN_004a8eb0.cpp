// Name: core_fldnotes.cpp_STextView_setRect_FUN_004a8eb0
// Address: 004a8eb0
// Address Range: [[004a8eb0, 004a8ecf]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_setRect_FUN_004a8eb0(STextView *this_ptr,int left,int top,int right,int bottom)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_setRect_FUN_004a8eb0(STextView *this_ptr,int left,int top,int right,int bottom)

{
  this_ptr->rect_left = left;
  this_ptr->rect_top = top;
  this_ptr->rect_right = right;
  this_ptr->rect_bottom = bottom;
  return;
}
