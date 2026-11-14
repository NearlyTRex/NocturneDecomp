// Name: core_fldnotes.cpp_CFieldNotes_getEntryKind_FUN_004bde20
// Address: 004bde20
// Address Range: [[004bde20, 004bde7d]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004bde20(CFieldNotes *this_ptr,char *entry_name)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004bde4f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004bde20(CFieldNotes *this_ptr,char *entry_name)

{
  SNotesEntry *pSVar1;
  int iVar2;
  SNotesSection *this_ptr_00;
  
  iVar2 = 0;
  if (0 < _DAT_01cc4470) {
    this_ptr_00 = SNotesSection_ARRAY_01cc4474;
    do {
      pSVar1 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004bbfd0(this_ptr_00,entry_name);
      if (pSVar1 != (SNotesEntry *)0x0) {
        if (pSVar1 == (SNotesEntry *)0x0) {
          return -1;
        }
        return pSVar1->kind;
      }
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < _DAT_01cc4470);
  }
  return -1;
}
