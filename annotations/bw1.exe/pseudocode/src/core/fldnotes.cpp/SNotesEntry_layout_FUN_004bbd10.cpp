// Name: core_fldnotes.cpp_SNotesEntry_layout_FUN_004bbd10
// Address: 004bbd10
// Address Range: [[004bbd10, 004bbf0e]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_SNotesEntry_layout_FUN_004bbd10(SNotesEntry *this_ptr,STextView *view)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fldnotes_cpp_SNotesEntry_layout_FUN_004bbd10(SNotesEntry *this_ptr,STextView *view)

{
  char cVar1;
  char *text;
  int iVar2;
  char *text_00;
  int iVar3;
  int iVar4;
  int local_14;
  
  iVar3 = _DAT_01cc4268;
  this_ptr->page = view->page_index;
  if (iVar3 == 0) {
    iVar3 = this_ptr->kind;
    if (iVar3 == 0) {
      return 1;
    }
    if (iVar3 == 2) {
      return 1;
    }
    if (iVar3 == 5) {
      return 1;
    }
  }
  if (this_ptr->kind == 3) {
    iVar3 = core_fldnotes_cpp_STextView_addText_FUN_004bb290(view,"<image box 32 32>");
    if (iVar3 == 0) {
      return 0;
    }
  }
  else if ((this_ptr->kind == 4) &&
          (iVar3 = core_fldnotes_cpp_STextView_addText_FUN_004bb290
                             (view,"<image check 32 32>"), iVar3 == 0)) {
    return 0;
  }
  if ((-1 < this_ptr->map_index) &&
     (iVar3 = core_fldnotes_cpp_SNotesMap_paginate_FUN_004bca60
                        (SNotesMap_ARRAY_01cc55d0 + this_ptr->map_index,view), iVar3 == 0)) {
    return 0;
  }
  iVar3 = -1;
  local_14 = 0;
  do {
    if ((this_ptr->lines).item_count <= local_14) {
      return 1;
    }
    iVar4 = 0;
    text = shape_edittool_cpp_CStrList_getStringAt_FUN_004998a0(&this_ptr->lines,local_14);
    cVar1 = *text;
    while (cVar1 != '\0') {
      if (iVar3 != view->page_index) {
        if (this_ptr->title[0] != '\0') {
          iVar2 = core_fldnotes_cpp_STextView_addText_FUN_004bb290(view,&DAT_005dfb63);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = core_fldnotes_cpp_STextView_addText_FUN_004bb290(view,this_ptr->title);
          if (iVar2 == 0) {
            return 0;
          }
          if (iVar3 != -1) {
            text_00 = support_newmsg_cpp_getLocalizedString_FUN_00531090("(cont.)");
            iVar3 = core_fldnotes_cpp_STextView_addText_FUN_004bb290(view,text_00);
            if (iVar3 == 0) {
              return 0;
            }
          }
          iVar3 = core_fldnotes_cpp_STextView_addText_FUN_004bb290(view,"</ul><br>");
          if (iVar3 == 0) {
            return 0;
          }
        }
        iVar3 = view->page_index;
      }
      iVar2 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004bb2f0(view,text);
      if (iVar2 < 0) {
        return 0;
      }
      if (iVar2 < 1) {
        iVar4 = iVar4 + 1;
        if (1 < iVar4) {
          core_fldnotes_cpp_STextView_addText_FUN_004bb290(view,"ERROR: item won't fit<br>");
          break;
        }
      }
      else {
        text = text + iVar2;
      }
      cVar1 = *text;
    }
    local_14 = local_14 + 1;
  } while( true );
}
