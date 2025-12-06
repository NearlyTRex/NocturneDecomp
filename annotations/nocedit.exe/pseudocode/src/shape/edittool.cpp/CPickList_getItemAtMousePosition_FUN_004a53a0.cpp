// Name: shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_004a53a0
// Address: 004a53a0
// Address Range: [[004a53a0, 004a540e]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_004a53a0(CPickList * this_ptr, int mouse_x, int mouse_y)

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CPickList_getItemAtMousePosition_FUN_004a53a0
          (CPickList *this_ptr,int mouse_x,int mouse_y)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (mouse_y - g_ClipTop) / this_ptr->character_width;
  iVar2 = (mouse_x - g_ClipLeft) / this_ptr->total_content_width;
  if ((((iVar1 < 0) || (this_ptr->vertical_page_size <= iVar1)) || (iVar2 < 0)) ||
     (((this_ptr->column_count <= iVar2 ||
       (iVar1 = iVar2 * this_ptr->vertical_page_size + this_ptr->scroll_top + iVar1, iVar1 < 0)) ||
      ((this_ptr->base_strlist).item_count <= iVar1)))) {
    iVar1 = -1;
  }
  return iVar1;
}
