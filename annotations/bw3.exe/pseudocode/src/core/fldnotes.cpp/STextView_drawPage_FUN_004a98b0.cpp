// Name: core_fldnotes.cpp_STextView_drawPage_FUN_004a98b0
// Address: 004a98b0
// Address Range: [[004a98b0, 004a98e1]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_drawPage_FUN_004a98b0(STextView *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_drawPage_FUN_004a98b0(STextView *this_ptr,int param_2)

{
  if ((-1 < param_2) && (param_2 < this_ptr->page_count)) {
    core_fldnotes_cpp_STextPage_draw_FUN_004a8da0(this_ptr->pages + param_2);
    return;
  }
  return;
}
