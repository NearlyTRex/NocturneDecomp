// Name: core_fldnotes.cpp_STextView_setRect_FUN_004a8eb0
// Address: 004a8eb0
// Address Range: [[004a8eb0, 004a8ecf]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_setRect_FUN_004a8eb0(STextView *this_ptr,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_setRect_FUN_004a8eb0(STextView *this_ptr,int param_2,int param_3,int param_4,int param_5)

{
  this_ptr->rect_left = param_2;
  this_ptr->rect_top = param_3;
  this_ptr->rect_right = param_4;
  this_ptr->rect_bottom = param_5;
  return;
}
