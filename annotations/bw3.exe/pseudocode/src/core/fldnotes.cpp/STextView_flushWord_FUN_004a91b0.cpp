// Name: core_fldnotes.cpp_STextView_flushWord_FUN_004a91b0
// Address: 004a91b0
// Address Range: [[004a91b0, 004a922c]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_flushWord_FUN_004a91b0(STextView *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_STextView_flushWord_FUN_004a91b0(STextView *this_ptr)

{
  SPageResourceText *this_ptr_00;
  SPageResourceText *resource;
  
  if (this_ptr->word[0] == '\0') {
    return;
  }
  this_ptr_00 = (SPageResourceText *)operator_new(0x120);
  resource = (SPageResourceText *)0x0;
  if (this_ptr_00 != (SPageResourceText *)0x0) {
    resource = core_fldnotes_cpp_SPageResourceText_ctor_FUN_004a8490
                         (this_ptr_00,this_ptr->word,this_ptr->font);
  }
  if (resource == (SPageResourceText *)0x0) {
    _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
    _DAT_01d71de4 = 0x578;
    core_main_c_FUN_004e4330("Out of memory");
  }
  (resource->base).x = this_ptr->word_x;
  (resource->base).y = this_ptr->word_y;
  resource->underlined = this_ptr->underline;
  core_fldnotes_cpp_STextView_addResource_FUN_004a9230(this_ptr,&resource->base);
  this_ptr->word[0] = '\0';
  return;
}
