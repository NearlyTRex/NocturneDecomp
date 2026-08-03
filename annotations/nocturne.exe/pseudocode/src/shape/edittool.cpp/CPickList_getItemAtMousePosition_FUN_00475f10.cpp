// Name: shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_00475f10
// Address: 00475f10
// Address Range: [[00475f10, 00475f7e]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_getItemAtMousePosition_FUN_00475f10(CPickList *this_ptr,int mouse_x,int mouse_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_CPickList_getItemAtMousePosition_FUN_00475f10(CPickList *this_ptr,int mouse_x,int mouse_y)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (mouse_y - _DAT_01c00c5c) / this_ptr->character_width;
  iVar2 = (mouse_x - _DAT_01c00c58) / this_ptr->total_content_width;
  if ((((iVar1 < 0) || (this_ptr->vertical_page_size <= iVar1)) || (iVar2 < 0)) ||
     (((this_ptr->column_count <= iVar2 ||
       (iVar1 = iVar2 * this_ptr->vertical_page_size + this_ptr->scroll_top + iVar1, iVar1 < 0)) ||
      ((this_ptr->base).item_count <= iVar1)))) {
    iVar1 = -1;
  }
  return iVar1;
}
