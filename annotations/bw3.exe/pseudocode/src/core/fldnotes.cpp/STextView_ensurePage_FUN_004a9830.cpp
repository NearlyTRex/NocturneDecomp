// Name: core_fldnotes.cpp_STextView_ensurePage_FUN_004a9830
// Address: 004a9830
// Address Range: [[004a9830, 004a98a6]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_ensurePage_FUN_004a9830(STextView *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_STextView_ensurePage_FUN_004a9830(STextView *this_ptr)

{
  STextPage *pSVar1;
  int iVar2;
  
  if (this_ptr->page_count <= this_ptr->page_index) {
    do {
      pSVar1 = (STextPage *)realloc(this_ptr->pages,(this_ptr->page_count + 1) * 0x144)
      ;
      this_ptr->pages = pSVar1;
      if (pSVar1 == (STextPage *)0x0) {
        _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
        _DAT_01d71de4 = 0x67d;
        core_main_c_FUN_004e4330("Out of memory");
      }
      core_fldnotes_cpp_STextPage_init_FUN_004a8cb0(this_ptr->pages + this_ptr->page_count);
      iVar2 = this_ptr->page_count + 1;
      this_ptr->page_count = iVar2;
    } while (iVar2 <= this_ptr->page_index);
  }
  return;
}
