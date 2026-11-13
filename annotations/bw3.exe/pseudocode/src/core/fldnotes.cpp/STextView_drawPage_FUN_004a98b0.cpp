// Name: core_fldnotes.cpp_STextView_drawPage_FUN_004a98b0
// Address: 004a98b0
// Address Range: [[004a98b0, 004a98e1]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_drawPage_FUN_004a98b0(STextView *this_ptr,int page)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_drawPage_FUN_004a98b0(STextView *this_ptr,int page)

{
  if ((-1 < page) && (page < this_ptr->page_count)) {
    core_fldnotes_cpp_STextPage_draw_FUN_004a8da0(this_ptr->pages + page);
    return;
  }
  return;
}
