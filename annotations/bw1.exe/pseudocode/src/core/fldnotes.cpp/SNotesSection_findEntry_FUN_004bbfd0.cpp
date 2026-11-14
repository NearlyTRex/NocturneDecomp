// Name: core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0
// Address: 004bbfd0
// Address Range: [[004bbfd0, 004bc01d]]
// Convention: __cdecl
// Signature: SNotesEntry * __cdecl core_fldnotes_cpp_SNotesSection_findEntry_FUN_004bbfd0(SNotesSection *this_ptr,char *name)

#include "nocturne.h"

SNotesEntry * __cdecl core_fldnotes_cpp_SNotesSection_findEntry_FUN_004bbfd0(SNotesSection *this_ptr,char *name)

{
  int iVar1;
  SNotesSection *pSVar2;
  int iVar3;
  
  iVar3 = 0;
  pSVar2 = this_ptr;
  if (0 < this_ptr->entry_count) {
    do {
      iVar1 = _stricmp(pSVar2->entries[0]->name,name);
      if (iVar1 == 0) {
        return pSVar2->entries[0];
      }
      iVar3 = iVar3 + 1;
      pSVar2 = (SNotesSection *)(pSVar2->name + 4);
    } while (iVar3 < this_ptr->entry_count);
  }
  return (SNotesEntry *)0x0;
}
