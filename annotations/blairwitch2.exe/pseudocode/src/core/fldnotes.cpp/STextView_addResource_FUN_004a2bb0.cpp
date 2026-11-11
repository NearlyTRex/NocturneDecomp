// Name: core_fldnotes.cpp_STextView_addResource_FUN_004a2bb0
// Address: 004a2bb0
// Address Range: [[004a2bb0, 004a2be6]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_addResource_FUN_004a2bb0(STextView *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_addResource_FUN_004a2bb0(STextView *this_ptr,int param_2)

{
  core_fldnotes_cpp_STextView_ensurePage_FUN_004a31c0(this_ptr);
  core_fldnotes_cpp_STextPage_addResource_FUN_004a26e0
            (this_ptr->pages + this_ptr->page_index,param_2);
  return;
}
