// Name: core_fldnotes.cpp_SNotesSection_layout_FUN_004a3740
// Address: 004a3740
// Address Range: [[004a3740, 004a37b8]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fldnotes_cpp_SNotesSection_layout_FUN_004a3740(SNotesSection *this_ptr,int param_2)

#include "nocturne.h"

uint __cdecl core_fldnotes_cpp_SNotesSection_layout_FUN_004a3740(SNotesSection *this_ptr,int param_2)

{
  int iVar1;
  int iVar2;
  SNotesSection *pSVar3;
  
  iVar2 = 0;
  this_ptr->first_page = *(int *)(param_2 + 0x10);
  pSVar3 = this_ptr;
  if (0 < this_ptr->entry_count) {
    do {
      iVar1 = core_fldnotes_cpp_SNotesEntry_layout_FUN_004a32e0(pSVar3->entries[0],param_2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      pSVar3 = (SNotesSection *)(pSVar3->name + 4);
    } while (iVar2 < this_ptr->entry_count);
  }
  iVar2 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0((STextView *)param_2,&DAT_005d5dc8);
  if (-1 < iVar2) {
    this_ptr->page_count = *(int *)(param_2 + 0x10) - this_ptr->first_page;
    return 1;
  }
  return 0;
}
