// Name: core_fldnotes.cpp_STextView_addResource_FUN_004bb5f0
// Address: 004bb5f0
// Address Range: [[004bb5f0, 004bb626]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_addResource_FUN_004bb5f0(STextView *this_ptr,SPageResource *resource)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_addResource_FUN_004bb5f0(STextView *this_ptr,SPageResource *resource)

{
  core_fldnotes_cpp_STextView_ensurePage_FUN_004bbbf0(this_ptr);
  core_fldnotes_cpp_STextPage_addResource_FUN_004bb0c0
            (this_ptr->pages + this_ptr->page_index,resource);
  return;
}
