// Name: core_fldnotes.cpp_STextView_drawPage_FUN_004a3240
// Address: 004a3240
// Address Range: [[004a3240, 004a3271]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_drawPage_FUN_004a3240(STextView *this_ptr,int page)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_drawPage_FUN_004a3240(STextView *this_ptr,int page)

{
  if ((-1 < page) && (page < this_ptr->page_count)) {
    core_fldnotes_cpp_STextPage_draw_FUN_004a2780(this_ptr->pages + page);
    return;
  }
  return;
}
