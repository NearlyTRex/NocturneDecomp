// Name: core_fldnotes.cpp_SNotesMap_showAnnotation_FUN_004aa1a0
// Address: 004aa1a0
// Address Range: [[004aa1a0, 004aa1fe]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_SNotesMap_showAnnotation_FUN_004aa1a0(SNotesMap *this_ptr,char *name)

#include "nocturne.h"

int __cdecl core_fldnotes_cpp_SNotesMap_showAnnotation_FUN_004aa1a0(SNotesMap *this_ptr,char *name)

{
  int iVar1;
  int iVar2;
  SNotesMapAnnotation *str1;
  
  iVar2 = 0;
  if (0 < this_ptr->annotation_count) {
    str1 = this_ptr->annotations;
    do {
      iVar1 = _stricmp(str1->name,name);
      if (iVar1 == 0) {
        this_ptr->annotations[iVar2].visible = 1;
        return 1;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < this_ptr->annotation_count);
  }
  return 0;
}
