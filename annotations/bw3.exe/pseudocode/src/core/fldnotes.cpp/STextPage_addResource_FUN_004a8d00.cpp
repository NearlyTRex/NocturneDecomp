// Name: core_fldnotes.cpp_STextPage_addResource_FUN_004a8d00
// Address: 004a8d00
// Address Range: [[004a8d00, 004a8d4a]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextPage_addResource_FUN_004a8d00(STextPage *this_ptr,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_STextPage_addResource_FUN_004a8d00(STextPage *this_ptr,int param_2)

{
  if (this_ptr->resource_count < 0x50) {
    this_ptr->resources[this_ptr->resource_count] = (SPageResource *)param_2;
    this_ptr->resource_count = this_ptr->resource_count + 1;
    return;
  }
  _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
  _DAT_01d71de4 = 0x47d;
  core_main_c_FUN_004e4330("TextPage::addResource - too many resources!");
  this_ptr->resources[this_ptr->resource_count] = (SPageResource *)param_2;
  this_ptr->resource_count = this_ptr->resource_count + 1;
  return;
}
