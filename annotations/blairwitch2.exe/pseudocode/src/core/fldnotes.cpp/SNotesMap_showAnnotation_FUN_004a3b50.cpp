// Name: core_fldnotes.cpp_SNotesMap_showAnnotation_FUN_004a3b50
// Address: 004a3b50
// Address Range: [[004a3b50, 004a3bae]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fldnotes_cpp_SNotesMap_showAnnotation_FUN_004a3b50(SNotesMap *this_ptr,char *param_2)

#include "nocturne.h"

uint __cdecl core_fldnotes_cpp_SNotesMap_showAnnotation_FUN_004a3b50(SNotesMap *this_ptr,char *param_2)

{
  int iVar1;
  int iVar2;
  SNotesMapAnnotation *str1;
  
  iVar2 = 0;
  if (0 < this_ptr->annotation_count) {
    str1 = this_ptr->annotations;
    do {
      iVar1 = _stricmp(str1->name,param_2);
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
