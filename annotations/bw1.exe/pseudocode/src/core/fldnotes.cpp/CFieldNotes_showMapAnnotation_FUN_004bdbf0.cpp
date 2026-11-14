// Name: core_fldnotes.cpp_CFieldNotes_showMapAnnotation_FUN_004bdbf0
// Address: 004bdbf0
// Address Range: [[004bdbf0, 004bdcd8]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_CFieldNotes_showMapAnnotation_FUN_004bdbf0(CFieldNotes *this_ptr,char *entry_name,char *annotation_name,char *error_text)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004bdc23) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fldnotes_cpp_CFieldNotes_showMapAnnotation_FUN_004bdbf0(CFieldNotes *this_ptr,char *entry_name,char *annotation_name,char *error_text)

{
  SNotesEntry *pSVar1;
  int iVar2;
  SNotesSection *this_ptr_00;
  
  iVar2 = 0;
  if (0 < _DAT_01cc4470) {
    this_ptr_00 = SNotesSection_ARRAY_01cc4474;
    do {
      pSVar1 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004bbfd0(this_ptr_00,entry_name);
      if (pSVar1 != (SNotesEntry *)0x0) goto LAB_004bdc28;
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < _DAT_01cc4470);
  }
  pSVar1 = (SNotesEntry *)0x0;
LAB_004bdc28:
  if (pSVar1 == (SNotesEntry *)0x0) {
    _sprintf(error_text,"No such entry '%s'");
    return 0;
  }
  if ((pSVar1->kind != 5) && (pSVar1->kind != 6)) {
    _sprintf(error_text,"'%s' is not a map");
    return 0;
  }
  iVar2 = core_fldnotes_cpp_SNotesMap_showAnnotation_FUN_004bc540
                    (SNotesMap_ARRAY_01cc55d0 + pSVar1->map_index,annotation_name);
  if (iVar2 != 0) {
    return 1;
  }
  _sprintf(error_text,"No such annotion '%s' found on map '%s'");
  return 0;
}
