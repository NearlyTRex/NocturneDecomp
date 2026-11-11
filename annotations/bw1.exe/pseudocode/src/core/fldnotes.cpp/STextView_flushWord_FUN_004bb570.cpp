// Name: core_fldnotes.cpp_STextView_flushWord_FUN_004bb570
// Address: 004bb570
// Address Range: [[004bb570, 004bb5ec]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_flushWord_FUN_004bb570(STextView *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_STextView_flushWord_FUN_004bb570(STextView *this_ptr)

{
  SPageResourceText *this_ptr_00;
  int *piVar1;
  
  if (this_ptr->word[0] == '\0') {
    return;
  }
  this_ptr_00 = (SPageResourceText *)operator_new(0x120);
  piVar1 = (int *)0x0;
  if (this_ptr_00 != (SPageResourceText *)0x0) {
    piVar1 = (int *)core_fldnotes_cpp_SPageResourceText_ctor_FUN_004ba850
                              (this_ptr_00,this_ptr->word,this_ptr->font);
  }
  if (piVar1 == (int *)0x0) {
    _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
    _DAT_01d1d404 = 0x581;
    core_main_c_FUN_005030e0("Out of memory");
  }
  *piVar1 = this_ptr->word_x;
  piVar1[1] = this_ptr->word_y;
  piVar1[6] = this_ptr->underline;
  core_fldnotes_cpp_STextView_addResource_FUN_004bb5f0(this_ptr,piVar1);
  this_ptr->word[0] = '\0';
  return;
}
