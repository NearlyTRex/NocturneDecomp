// Name: core_fldnotes.cpp_STextView_drawPage_FUN_004bbc70
// Address: 004bbc70
// Address Range: [[004bbc70, 004bbca1]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_drawPage_FUN_004bbc70(STextView *this_ptr,int page)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_drawPage_FUN_004bbc70(STextView *this_ptr,int page)

{
  if ((-1 < page) && (page < this_ptr->page_count)) {
    core_fldnotes_cpp_STextPage_draw_FUN_004bb160(this_ptr->pages + page);
    return;
  }
  return;
}
