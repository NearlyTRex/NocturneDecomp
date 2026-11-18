// Name: core_fldnotes.cpp_SNotesSection_clear_FUN_004a3570
// Address: 004a3570
// Address Range: [[004a3570, 004a35d4]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SNotesSection_clear_FUN_004a3570(SNotesSection *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SNotesSection_clear_FUN_004a3570(SNotesSection *this_ptr)

{
  char ***ptr;
  int iVar1;
  SNotesSection *pSVar2;
  
  iVar1 = 0;
  pSVar2 = this_ptr;
  if (0 < this_ptr->entry_count) {
    do {
      if (pSVar2->entries[0] != (SNotesEntry *)0x0) {
        ptr = core_fldnotes_cpp_SNotesEntry_dtor_FUN_004a32c0(pSVar2->entries[0]);
        debugFreeChecked(ptr);
      }
      iVar1 = iVar1 + 1;
      pSVar2 = (SNotesSection *)(pSVar2->name + 4);
    } while (iVar1 < this_ptr->entry_count);
  }
  this_ptr->first_page = 0;
  this_ptr->page_count = 0;
  this_ptr->entry_count = 0;
  return;
}
