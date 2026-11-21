// Name: core_fldnotes.cpp_STextPage_addResource_FUN_004bb0c0
// Address: 004bb0c0
// Address Range: [[004bb0c0, 004bb10a]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextPage_addResource_FUN_004bb0c0(STextPage *this_ptr,SPageResource *resource)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextPage_addResource_FUN_004bb0c0(STextPage *this_ptr,SPageResource *resource)

{
  if (this_ptr->resource_count < 0x50) {
    this_ptr->resources[this_ptr->resource_count] = resource;
    this_ptr->resource_count = this_ptr->resource_count + 1;
    return;
  }
  g_CurrentFilename = "..\\core\\fldnotes.cpp";
  g_CurrentLineNumber = 1156;
  core_main_c_displayErrorAndQuit_FUN_005030e0("TextPage::addResource - too many resources!");
  this_ptr->resources[this_ptr->resource_count] = resource;
  this_ptr->resource_count = this_ptr->resource_count + 1;
  return;
}
