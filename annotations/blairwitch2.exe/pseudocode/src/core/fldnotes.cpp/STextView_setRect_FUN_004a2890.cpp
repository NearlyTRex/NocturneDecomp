// Name: core_fldnotes.cpp_STextView_setRect_FUN_004a2890
// Address: 004a2890
// Address Range: [[004a2890, 004a28af]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_setRect_FUN_004a2890(STextView *this_ptr,int left,int top,int right,int bottom)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_setRect_FUN_004a2890(STextView *this_ptr,int left,int top,int right,int bottom)

{
  this_ptr->rect_left = left;
  this_ptr->rect_top = top;
  this_ptr->rect_right = right;
  this_ptr->rect_bottom = bottom;
  return;
}
