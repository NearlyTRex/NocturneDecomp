// Name: core_fldnotes.cpp_STextPage_addResource_FUN_004a8d00
// Address: 004a8d00
// Address Range: [[004a8d00, 004a8d4a]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextPage_addResource_FUN_004a8d00(STextPage *this_ptr,SPageResource *resource)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextPage_addResource_FUN_004a8d00(STextPage *this_ptr,SPageResource *resource)

{
  if (this_ptr->resource_count < 0x50) {
    this_ptr->resources[this_ptr->resource_count] = resource;
    this_ptr->resource_count = this_ptr->resource_count + 1;
    return;
  }
  g_CHAR_PTR_01d71de0 = "..\\core\\fldnotes.cpp";
  g_INT_01d71de4 = 0x47d;
  core_main_c_displayErrorAndQuit_FUN_004e4330("TextPage::addResource - too many resources!");
  this_ptr->resources[this_ptr->resource_count] = resource;
  this_ptr->resource_count = this_ptr->resource_count + 1;
  return;
}
