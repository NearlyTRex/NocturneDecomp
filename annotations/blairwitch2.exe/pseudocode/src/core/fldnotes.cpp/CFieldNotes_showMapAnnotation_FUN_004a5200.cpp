// Name: core_fldnotes.cpp_CFieldNotes_showMapAnnotation_FUN_004a5200
// Address: 004a5200
// Address Range: [[004a5200, 004a52e8]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_CFieldNotes_showMapAnnotation_FUN_004a5200(CFieldNotes *this_ptr,char *entry_name,char *annotation_name,char *error_text)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004a5233) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fldnotes_cpp_CFieldNotes_showMapAnnotation_FUN_004a5200(CFieldNotes *this_ptr,char *entry_name,char *annotation_name,char *error_text)

{
  SNotesEntry *pSVar1;
  int iVar2;
  SNotesSection *this_ptr_00;
  
  iVar2 = 0;
  if (0 < _DAT_01cab9f0) {
    this_ptr_00 = SNotesSection_ARRAY_01cab9f4;
    do {
      pSVar1 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a35e0(this_ptr_00,entry_name);
      if (pSVar1 != (SNotesEntry *)0x0) goto LAB_004a5238;
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < _DAT_01cab9f0);
  }
  pSVar1 = (SNotesEntry *)0x0;
LAB_004a5238:
  if (pSVar1 == (SNotesEntry *)0x0) {
    _sprintf(error_text,"No such entry '%s'");
    return 0;
  }
  if ((pSVar1->kind != 5) && (pSVar1->kind != 6)) {
    _sprintf(error_text,"'%s' is not a map");
    return 0;
  }
  iVar2 = core_fldnotes_cpp_SNotesMap_showAnnotation_FUN_004a3b50
                    (SNotesMap_ARRAY_01cacb50 + pSVar1->map_index,annotation_name);
  if (iVar2 != 0) {
    return 1;
  }
  _sprintf(error_text,"No such annotion '%s' found on map '%s'");
  return 0;
}
