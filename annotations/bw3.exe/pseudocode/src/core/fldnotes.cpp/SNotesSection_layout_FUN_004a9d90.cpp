// Name: core_fldnotes.cpp_SNotesSection_layout_FUN_004a9d90
// Address: 004a9d90
// Address Range: [[004a9d90, 004a9e01]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_SNotesSection_layout_FUN_004a9d90(SNotesSection *this_ptr,STextView *view)

#include "nocturne.h"

int __cdecl core_fldnotes_cpp_SNotesSection_layout_FUN_004a9d90(SNotesSection *this_ptr,STextView *view)

{
  int iVar1;
  int iVar2;
  SNotesSection *pSVar3;
  
  iVar2 = 0;
  this_ptr->first_page = view->page_index;
  pSVar3 = this_ptr;
  if (0 < this_ptr->entry_count) {
    do {
      iVar1 = core_fldnotes_cpp_SNotesEntry_layout_FUN_004a9950(pSVar3->entries[0],view);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      pSVar3 = (SNotesSection *)(pSVar3->name + 4);
    } while (iVar2 < this_ptr->entry_count);
  }
  iVar2 = core_fldnotes_cpp_STextView_addText_FUN_004a8ed0(view,&DAT_005c1126);
  if (iVar2 != 0) {
    this_ptr->page_count = view->page_index - this_ptr->first_page;
  }
  return (uint)(iVar2 != 0);
}
