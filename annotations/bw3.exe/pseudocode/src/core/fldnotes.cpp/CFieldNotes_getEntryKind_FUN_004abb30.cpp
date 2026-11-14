// Name: core_fldnotes.cpp_CFieldNotes_getEntryKind_FUN_004abb30
// Address: 004abb30
// Address Range: [[004abb30, 004abb8d]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004abb30(CFieldNotes *this_ptr,char *entry_name)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004abb5f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004abb30(CFieldNotes *this_ptr,char *entry_name)

{
  SNotesEntry *pSVar1;
  int iVar2;
  SNotesSection *this_ptr_00;
  
  iVar2 = 0;
  if (0 < _DAT_01d0d210) {
    this_ptr_00 = SNotesSection_ARRAY_01d0d214;
    do {
      pSVar1 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a9c30(this_ptr_00,entry_name);
      if (pSVar1 != (SNotesEntry *)0x0) {
        if (pSVar1 == (SNotesEntry *)0x0) {
          return -1;
        }
        return pSVar1->kind;
      }
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < _DAT_01d0d210);
  }
  return -1;
}
