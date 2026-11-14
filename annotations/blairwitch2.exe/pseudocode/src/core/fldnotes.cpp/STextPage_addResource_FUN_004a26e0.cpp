// Name: core_fldnotes.cpp_STextPage_addResource_FUN_004a26e0
// Address: 004a26e0
// Address Range: [[004a26e0, 004a272a]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextPage_addResource_FUN_004a26e0(STextPage *this_ptr,SPageResource *resource)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_STextPage_addResource_FUN_004a26e0(STextPage *this_ptr,SPageResource *resource)

{
  if (this_ptr->resource_count < 0x50) {
    this_ptr->resources[this_ptr->resource_count] = resource;
    this_ptr->resource_count = this_ptr->resource_count + 1;
    return;
  }
  _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
  _DAT_01d046a4 = 0x450;
  core_main_c_FUN_004e4500("TextPage::addResource - too many resources!");
  this_ptr->resources[this_ptr->resource_count] = resource;
  this_ptr->resource_count = this_ptr->resource_count + 1;
  return;
}
