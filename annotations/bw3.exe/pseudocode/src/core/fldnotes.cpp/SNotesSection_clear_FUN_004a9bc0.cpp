// Name: core_fldnotes.cpp_SNotesSection_clear_FUN_004a9bc0
// Address: 004a9bc0
// Address Range: [[004a9bc0, 004a9c24]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SNotesSection_clear_FUN_004a9bc0(SNotesSection *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SNotesSection_clear_FUN_004a9bc0(SNotesSection *this_ptr)

{
  char ***pppcVar1;
  int iVar2;
  SNotesSection *pSVar3;
  
  iVar2 = 0;
  pSVar3 = this_ptr;
  if (0 < this_ptr->entry_count) {
    do {
      if (pSVar3->entries[0] != (SNotesEntry *)0x0) {
        pppcVar1 = core_fldnotes_cpp_SNotesEntry_dtor_FUN_004a9930(pSVar3->entries[0]);
        FUN_005a30c4(pppcVar1);
      }
      iVar2 = iVar2 + 1;
      pSVar3 = (SNotesSection *)(pSVar3->name + 4);
    } while (iVar2 < this_ptr->entry_count);
  }
  this_ptr->first_page = 0;
  this_ptr->page_count = 0;
  this_ptr->entry_count = 0;
  return;
}
