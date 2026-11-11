// Name: core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a35e0
// Address: 004a35e0
// Address Range: [[004a35e0, 004a362d]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a35e0(SNotesSection *this_ptr,char *param_2)

#include "nocturne.h"

uint __cdecl core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a35e0(SNotesSection *this_ptr,char *param_2)

{
  int iVar1;
  SNotesSection *pSVar2;
  int iVar3;
  
  iVar3 = 0;
  pSVar2 = this_ptr;
  if (0 < this_ptr->entry_count) {
    do {
      iVar1 = _stricmp(pSVar2->entries[0]->name,param_2);
      if (iVar1 == 0) {
        return pSVar2->entries[0];
      }
      iVar3 = iVar3 + 1;
      pSVar2 = (SNotesSection *)(pSVar2->name + 4);
    } while (iVar3 < this_ptr->entry_count);
  }
  return 0;
}
