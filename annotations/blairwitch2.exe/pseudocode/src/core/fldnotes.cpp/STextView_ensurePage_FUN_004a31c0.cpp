// Name: core_fldnotes.cpp_STextView_ensurePage_FUN_004a31c0
// Address: 004a31c0
// Address Range: [[004a31c0, 004a3236]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_ensurePage_FUN_004a31c0(STextView *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_STextView_ensurePage_FUN_004a31c0(STextView *this_ptr)

{
  STextPage *pSVar1;
  int iVar2;
  
  if (this_ptr->page_count <= this_ptr->page_index) {
    do {
      pSVar1 = (STextPage *)realloc(this_ptr->pages,(this_ptr->page_count + 1) * 0x144)
      ;
      this_ptr->pages = pSVar1;
      if (pSVar1 == (STextPage *)0x0) {
        _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
        _DAT_01d046a4 = 0x62d;
        core_main_c_FUN_004e4500("Out of memory");
      }
      core_fldnotes_cpp_STextPage_init_FUN_004a2690(this_ptr->pages + this_ptr->page_count);
      iVar2 = this_ptr->page_count + 1;
      this_ptr->page_count = iVar2;
    } while (iVar2 <= this_ptr->page_index);
  }
  return;
}
