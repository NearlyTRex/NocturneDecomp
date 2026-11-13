// Name: core_fldnotes.cpp_SNotesEntry_layout_FUN_004a32e0
// Address: 004a32e0
// Address Range: [[004a32e0, 004a3514]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_SNotesEntry_layout_FUN_004a32e0(SNotesEntry *this_ptr,STextView *view)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fldnotes_cpp_SNotesEntry_layout_FUN_004a32e0(SNotesEntry *this_ptr,STextView *view)

{
  char cVar1;
  char *text;
  int iVar2;
  char *text_00;
  int iVar3;
  int iVar4;
  int local_1c;
  
  iVar3 = _DAT_01cab7e8;
  this_ptr->page = view->page_index;
  if ((iVar3 != 0) || (((iVar3 = this_ptr->kind, iVar3 != 0 && (iVar3 != 2)) && (iVar3 != 5)))) {
    if (this_ptr->kind == 3) {
      iVar3 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0(view,"<image box 32 32>");
      if (iVar3 < 1) {
        return 0;
      }
    }
    else if ((this_ptr->kind == 4) &&
            (iVar3 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0
                               (view,"<image check 32 32>"), iVar3 < 1)) {
      return 0;
    }
    if ((-1 < this_ptr->map_index) &&
       (iVar3 = core_fldnotes_cpp_SNotesMap_paginate_FUN_004a4070
                          (SNotesMap_ARRAY_01cacb50 + this_ptr->map_index,view), iVar3 == 0)) {
      return 0;
    }
    iVar3 = -1;
    local_1c = 0;
LAB_004a3356:
    if (local_1c < (this_ptr->lines).item_count) {
      iVar4 = 0;
      text = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240(&this_ptr->lines,local_1c);
      cVar1 = *text;
      while (cVar1 != '\0') {
        if (iVar3 != view->page_index) {
          if (this_ptr->title[0] != '\0') {
            iVar2 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0(view,&DAT_005d5ce8);
            if (iVar2 < 1) {
              return 0;
            }
            iVar2 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0(view,this_ptr->title);
            if (iVar2 < 1) {
              return 0;
            }
            if (iVar3 != -1) {
              text_00 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("(cont.)");
              iVar3 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0(view,text_00);
              if (iVar3 < 1) {
                return 0;
              }
            }
            iVar3 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0(view,"</ul><br>");
            if (iVar3 < 1) {
              return 0;
            }
          }
          iVar3 = view->page_index;
        }
        iVar2 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0(view,text);
        if (iVar2 < 0) {
          return 0;
        }
        if (iVar2 < 1) {
          iVar4 = iVar4 + 1;
          if (1 < iVar4) {
            core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0
                      (view,"ERROR: item won't fit<br>");
            local_1c = local_1c + 1;
            goto LAB_004a3356;
          }
        }
        else {
          text = text + iVar2;
        }
        cVar1 = *text;
      }
      local_1c = local_1c + 1;
      goto LAB_004a3356;
    }
    iVar3 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0(view,&DAT_005d5d19);
    if (iVar3 < 1) {
      return 0;
    }
    iVar3 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0(view,&DAT_005d5d1e);
    if (iVar3 < 1) {
      return 0;
    }
  }
  return 1;
}
