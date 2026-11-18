// Name: shape_edittool.cpp_CPickList_remove_FUN_00483cb0
// Address: 00483cb0
// Address Range: [[00483cb0, 00483d0a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_remove_FUN_00483cb0(CPickList *this_ptr,int start_index,int end_index)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_remove_FUN_00483cb0(CPickList *this_ptr,int start_index,int end_index)

{
  int iVar1;
  int item_index;
  int item_index_00;
  
  item_index_00 = start_index;
  item_index = end_index;
  while (item_index = item_index + 1, item_index < (this_ptr->base).item_count) {
    iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00483aa0(this_ptr,item_index);
    shape_edittool_cpp_CPickList_enableItem_FUN_004839d0(this_ptr,item_index_00,iVar1);
    iVar1 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_00483bd0(this_ptr,item_index);
    shape_edittool_cpp_CPickList_setItemHotKey_FUN_00483b00(this_ptr,item_index_00,iVar1);
    item_index_00 = item_index_00 + 1;
  }
  shape_edittool_cpp_CStrList_remove_FUN_004810d0(&this_ptr->base,start_index,end_index);
  return;
}
