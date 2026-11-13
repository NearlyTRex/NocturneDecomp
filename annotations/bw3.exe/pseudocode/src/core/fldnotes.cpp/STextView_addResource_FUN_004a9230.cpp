// Name: core_fldnotes.cpp_STextView_addResource_FUN_004a9230
// Address: 004a9230
// Address Range: [[004a9230, 004a9266]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_addResource_FUN_004a9230(STextView *this_ptr,SPageResource *resource)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_addResource_FUN_004a9230(STextView *this_ptr,SPageResource *resource)

{
  core_fldnotes_cpp_STextView_ensurePage_FUN_004a9830(this_ptr);
  core_fldnotes_cpp_STextPage_addResource_FUN_004a8d00
            (this_ptr->pages + this_ptr->page_index,resource);
  return;
}
