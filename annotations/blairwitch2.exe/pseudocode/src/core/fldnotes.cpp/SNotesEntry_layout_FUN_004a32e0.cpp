// Name: core_fldnotes.cpp_SNotesEntry_layout_FUN_004a32e0
// Address: 004a32e0
// Address Range: [[004a32e0, 004a3514]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fldnotes_cpp_SNotesEntry_layout_FUN_004a32e0(SNotesEntry *this_ptr,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_fldnotes_cpp_SNotesEntry_layout_FUN_004a32e0(SNotesEntry *this_ptr,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  
  iVar5 = _DAT_01cab7e8;
  this_ptr->page = *(int *)(param_2 + 0x10);
  if ((iVar5 != 0) || (((iVar5 = this_ptr->kind, iVar5 != 0 && (iVar5 != 2)) && (iVar5 != 5)))) {
    if (this_ptr->kind == 3) {
      iVar5 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0
                        ((STextView *)param_2,"<image box 32 32>");
      if (iVar5 < 1) {
        return 0;
      }
    }
    else if ((this_ptr->kind == 4) &&
            (iVar5 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0
                               ((STextView *)param_2,"<image check 32 32>"), iVar5 < 1)) {
      return 0;
    }
    if ((-1 < this_ptr->map_index) &&
       (iVar5 = core_fldnotes_cpp_SNotesMap_paginate_FUN_004a4070
                          (SNotesMap_ARRAY_01cacb50 + this_ptr->map_index,param_2), iVar5 == 0)) {
      return 0;
    }
    iVar5 = -1;
    local_1c = 0;
LAB_004a3356:
    if (local_1c < (this_ptr->lines).item_count) {
      iVar6 = 0;
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240(&this_ptr->lines,local_1c);
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        if (iVar5 != *(int *)(param_2 + 0x10)) {
          if (this_ptr->title[0] != '\0') {
            iVar3 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0
                              ((STextView *)param_2,&DAT_005d5ce8);
            if (iVar3 < 1) {
              return 0;
            }
            iVar3 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0
                              ((STextView *)param_2,this_ptr->title);
            if (iVar3 < 1) {
              return 0;
            }
            if (iVar5 != -1) {
              pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("(cont.)");
              iVar5 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0
                                ((STextView *)param_2,pcVar4);
              if (iVar5 < 1) {
                return 0;
              }
            }
            iVar5 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0
                              ((STextView *)param_2,"</ul><br>");
            if (iVar5 < 1) {
              return 0;
            }
          }
          iVar5 = *(int *)(param_2 + 0x10);
        }
        iVar3 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0((STextView *)param_2,pcVar2);
        if (iVar3 < 0) {
          return 0;
        }
        if (iVar3 < 1) {
          iVar6 = iVar6 + 1;
          if (1 < iVar6) {
            core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0
                      ((STextView *)param_2,"ERROR: item won't fit<br>");
            local_1c = local_1c + 1;
            goto LAB_004a3356;
          }
        }
        else {
          pcVar2 = pcVar2 + iVar3;
        }
        cVar1 = *pcVar2;
      }
      local_1c = local_1c + 1;
      goto LAB_004a3356;
    }
    iVar5 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0((STextView *)param_2,&DAT_005d5d19)
    ;
    if (iVar5 < 1) {
      return 0;
    }
    iVar5 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0((STextView *)param_2,&DAT_005d5d1e)
    ;
    if (iVar5 < 1) {
      return 0;
    }
  }
  return 1;
}
