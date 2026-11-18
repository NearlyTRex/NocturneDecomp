// Name: shape_edittool.cpp_CPickList_insert_FUN_0049c290
// Address: 0049c290
// Address Range: [[0049c290, 0049c302]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_insert_FUN_0049c290(CPickList *this_ptr,int insert_index,char *string_data)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_insert_FUN_0049c290(CPickList *this_ptr,int insert_index,char *string_data)

{
  int iVar1;
  int item_index;
  
  shape_edittool_cpp_CStrList_insert_FUN_00499510(&this_ptr->base,insert_index,string_data);
  for (item_index = (this_ptr->base).item_count + -2; insert_index < item_index;
      item_index = item_index + -1) {
    iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_0049c100(this_ptr,item_index + -1);
    shape_edittool_cpp_CPickList_enableItem_FUN_0049c030(this_ptr,item_index,iVar1);
    iVar1 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_0049c230(this_ptr,item_index + -1);
    shape_edittool_cpp_CPickList_setItemHotKey_FUN_0049c160(this_ptr,item_index,iVar1);
  }
  shape_edittool_cpp_CPickList_enableItem_FUN_0049c030(this_ptr,insert_index,1);
  shape_edittool_cpp_CPickList_setItemHotKey_FUN_0049c160(this_ptr,insert_index,-1);
  return;
}
