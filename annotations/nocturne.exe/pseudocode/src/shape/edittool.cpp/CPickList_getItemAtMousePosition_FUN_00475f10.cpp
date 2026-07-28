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
  
  iVar1 = (mouse_y - _DAT_01c00c5c) / *(int *)(this_ptr->search_text_buffer + 4);
  iVar2 = (mouse_x - _DAT_01c00c58) / *(int *)(this_ptr->search_text_buffer + 0x1c);
  if ((((iVar1 < 0) || (*(int *)(this_ptr->search_text_buffer + 0x18) <= iVar1)) || (iVar2 < 0)) ||
     (((*(int *)(this_ptr->search_text_buffer + 0x20) <= iVar2 ||
       (iVar1 = iVar2 * *(int *)(this_ptr->search_text_buffer + 0x18) +
                *(int *)(this_ptr->search_text_buffer + 0x10) + iVar1, iVar1 < 0)) ||
      ((this_ptr->base).item_count <= iVar1)))) {
    iVar1 = -1;
  }
  return iVar1;
}
