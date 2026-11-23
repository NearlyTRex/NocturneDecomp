// Name: core_fldnotes.cpp_STextView_flushWord_FUN_004a2b30
// Address: 004a2b30
// Address Range: [[004a2b30, 004a2bac]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_flushWord_FUN_004a2b30(STextView *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_flushWord_FUN_004a2b30(STextView *this_ptr)

{
  SPageResourceText *this_ptr_00;
  SPageResourceText *resource;
  
  if (this_ptr->word[0] == '\0') {
    return;
  }
  this_ptr_00 = operator_new(0x120);
  resource = (SPageResourceText *)0x0;
  if (this_ptr_00 != (SPageResourceText *)0x0) {
    resource = core_fldnotes_cpp_SPageResourceText_ctor_FUN_004a1f80
                         (this_ptr_00,this_ptr->word,this_ptr->font);
  }
  if (resource == (SPageResourceText *)0x0) {
    g_CurrentFilename = "..\\core\\fldnotes.cpp";
    g_CurrentLineNumber = 1336;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Out of memory");
  }
  (resource->base).x = this_ptr->word_x;
  (resource->base).y = this_ptr->word_y;
  resource->underlined = this_ptr->underline;
  core_fldnotes_cpp_STextView_addResource_FUN_004a2bb0(this_ptr,&resource->base);
  this_ptr->word[0] = '\0';
  return;
}
