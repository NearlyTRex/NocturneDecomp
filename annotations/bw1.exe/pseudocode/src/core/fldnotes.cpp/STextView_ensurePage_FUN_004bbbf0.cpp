// Name: core_fldnotes.cpp_STextView_ensurePage_FUN_004bbbf0
// Address: 004bbbf0
// Address Range: [[004bbbf0, 004bbc66]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_ensurePage_FUN_004bbbf0(STextView *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_STextView_ensurePage_FUN_004bbbf0(STextView *this_ptr)

{
  STextPage *pSVar1;
  int iVar2;
  
  if (this_ptr->page_count <= this_ptr->page_index) {
    do {
      pSVar1 = (STextPage *)realloc(this_ptr->pages,(this_ptr->page_count + 1) * 0x144)
      ;
      this_ptr->pages = pSVar1;
      if (pSVar1 == (STextPage *)0x0) {
        _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
        _DAT_01d1d404 = 0x686;
        core_main_c_FUN_005030e0("Out of memory");
      }
      core_fldnotes_cpp_STextPage_init_FUN_004bb070(this_ptr->pages + this_ptr->page_count);
      iVar2 = this_ptr->page_count + 1;
      this_ptr->page_count = iVar2;
    } while (iVar2 <= this_ptr->page_index);
  }
  return;
}
