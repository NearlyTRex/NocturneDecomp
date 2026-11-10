// Name: shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_00483950
// Address: 00483950
// Address Range: [[00483950, 004839ca]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_getItemAtMousePosition_FUN_00483950(CPickList *this_ptr,int mouse_x,int mouse_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_CPickList_getItemAtMousePosition_FUN_00483950(CPickList *this_ptr,int mouse_x,int mouse_y)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < mouse_x - _DAT_01c35e48) && (-1 < mouse_y - _DAT_01c35e4c)) {
    iVar1 = (mouse_y - _DAT_01c35e4c) / this_ptr->row_height;
    iVar2 = (mouse_x - _DAT_01c35e48) / this_ptr->column_width;
    if (((-1 < iVar1) &&
        (((iVar1 < this_ptr->rows_per_column && (-1 < iVar2)) && (iVar2 < this_ptr->column_count))))
       && ((iVar1 = iVar2 * this_ptr->rows_per_column + this_ptr->scroll_top + iVar1, -1 < iVar1 &&
           (iVar1 < (this_ptr->base).item_count)))) {
      return iVar1;
    }
  }
  return -1;
}
