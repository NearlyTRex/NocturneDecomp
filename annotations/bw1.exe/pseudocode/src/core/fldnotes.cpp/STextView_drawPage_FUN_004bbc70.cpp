// Name: core_fldnotes.cpp_STextView_drawPage_FUN_004bbc70
// Address: 004bbc70
// Address Range: [[004bbc70, 004bbca1]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_drawPage_FUN_004bbc70(STextView *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_drawPage_FUN_004bbc70(STextView *this_ptr,int param_2)

{
  if ((-1 < param_2) && (param_2 < this_ptr->page_count)) {
    core_fldnotes_cpp_STextPage_draw_FUN_004bb160(this_ptr->pages + param_2);
    return;
  }
  return;
}
