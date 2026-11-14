// Name: core_fldnotes.cpp_STextView_setRect_FUN_004bb270
// Address: 004bb270
// Address Range: [[004bb270, 004bb28f]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_setRect_FUN_004bb270(STextView *this_ptr,int left,int top,int right,int bottom)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_setRect_FUN_004bb270(STextView *this_ptr,int left,int top,int right,int bottom)

{
  this_ptr->rect_left = left;
  this_ptr->rect_top = top;
  this_ptr->rect_right = right;
  this_ptr->rect_bottom = bottom;
  return;
}
