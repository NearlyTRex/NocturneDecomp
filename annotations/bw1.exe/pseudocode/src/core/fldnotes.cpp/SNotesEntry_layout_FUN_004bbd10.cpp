// Name: core_fldnotes.cpp_SNotesEntry_layout_FUN_004bbd10
// Address: 004bbd10
// Address Range: [[004bbd10, 004bbf0e]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fldnotes_cpp_SNotesEntry_layout_FUN_004bbd10(SNotesEntry *this_ptr,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_fldnotes_cpp_SNotesEntry_layout_FUN_004bbd10(SNotesEntry *this_ptr,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int local_14;
  
  iVar5 = _DAT_01cc4268;
  this_ptr->page = *(int *)(param_2 + 0x10);
  if (iVar5 == 0) {
    iVar5 = this_ptr->kind;
    if (iVar5 == 0) {
      return 1;
    }
    if (iVar5 == 2) {
      return 1;
    }
    if (iVar5 == 5) {
      return 1;
    }
  }
  if (this_ptr->kind == 3) {
    iVar5 = core_fldnotes_cpp_STextView_addText_FUN_004bb290
                      ((STextView *)param_2,"<image box 32 32>");
    if (iVar5 == 0) {
      return 0;
    }
  }
  else if ((this_ptr->kind == 4) &&
          (iVar5 = core_fldnotes_cpp_STextView_addText_FUN_004bb290
                             ((STextView *)param_2,"<image check 32 32>"), iVar5 == 0)) {
    return 0;
  }
  if ((-1 < this_ptr->map_index) &&
     (iVar5 = core_fldnotes_cpp_SNotesMap_paginate_FUN_004bca60
                        (SNotesMap_ARRAY_01cc55d0 + this_ptr->map_index,param_2), iVar5 == 0)) {
    return 0;
  }
  iVar5 = -1;
  local_14 = 0;
  do {
    if ((this_ptr->lines).item_count <= local_14) {
      return 1;
    }
    iVar6 = 0;
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004998a0(&this_ptr->lines,local_14);
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
      if (iVar5 != *(int *)(param_2 + 0x10)) {
        if (this_ptr->title[0] != '\0') {
          iVar3 = core_fldnotes_cpp_STextView_addText_FUN_004bb290
                            ((STextView *)param_2,&DAT_005dfb63);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = core_fldnotes_cpp_STextView_addText_FUN_004bb290
                            ((STextView *)param_2,this_ptr->title);
          if (iVar3 == 0) {
            return 0;
          }
          if (iVar5 != -1) {
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090("(cont.)");
            iVar5 = core_fldnotes_cpp_STextView_addText_FUN_004bb290((STextView *)param_2,pcVar4);
            if (iVar5 == 0) {
              return 0;
            }
          }
          iVar5 = core_fldnotes_cpp_STextView_addText_FUN_004bb290
                            ((STextView *)param_2,"</ul><br>");
          if (iVar5 == 0) {
            return 0;
          }
        }
        iVar5 = *(int *)(param_2 + 0x10);
      }
      iVar3 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004bb2f0((STextView *)param_2,pcVar2);
      if (iVar3 < 0) {
        return 0;
      }
      if (iVar3 < 1) {
        iVar6 = iVar6 + 1;
        if (1 < iVar6) {
          core_fldnotes_cpp_STextView_addText_FUN_004bb290
                    ((STextView *)param_2,"ERROR: item won't fit<br>");
          break;
        }
      }
      else {
        pcVar2 = pcVar2 + iVar3;
      }
      cVar1 = *pcVar2;
    }
    local_14 = local_14 + 1;
  } while( true );
}
