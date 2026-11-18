// Name: shape_edittool.cpp_CPickList_insert_FUN_00483c30
// Address: 00483c30
// Address Range: [[00483c30, 00483ca2]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_insert_FUN_00483c30(CPickList *this_ptr,int insert_index,char *string_data)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_insert_FUN_00483c30(CPickList *this_ptr,int insert_index,char *string_data)

{
  int iVar1;
  int item_index;
  
  shape_edittool_cpp_CStrList_insert_FUN_00480eb0(&this_ptr->base,insert_index,string_data);
  for (item_index = (this_ptr->base).item_count + -2; insert_index < item_index;
      item_index = item_index + -1) {
    iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00483aa0(this_ptr,item_index + -1);
    shape_edittool_cpp_CPickList_enableItem_FUN_004839d0(this_ptr,item_index,iVar1);
    iVar1 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_00483bd0(this_ptr,item_index + -1);
    shape_edittool_cpp_CPickList_setItemHotKey_FUN_00483b00(this_ptr,item_index,iVar1);
  }
  shape_edittool_cpp_CPickList_enableItem_FUN_004839d0(this_ptr,insert_index,1);
  shape_edittool_cpp_CPickList_setItemHotKey_FUN_00483b00(this_ptr,insert_index,-1);
  return;
}
