// Name: shape_edittool.cpp_CPickList_remove_FUN_0049c310
// Address: 0049c310
// Address Range: [[0049c310, 0049c36a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_remove_FUN_0049c310(CPickList *this_ptr,int start_index,int end_index)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_remove_FUN_0049c310(CPickList *this_ptr,int start_index,int end_index)

{
  int iVar1;
  int item_index;
  int item_index_00;
  
  item_index_00 = start_index;
  item_index = end_index;
  while (item_index = item_index + 1, item_index < (this_ptr->base).item_count) {
    iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_0049c100(this_ptr,item_index);
    shape_edittool_cpp_CPickList_enableItem_FUN_0049c030(this_ptr,item_index_00,iVar1);
    iVar1 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_0049c230(this_ptr,item_index);
    shape_edittool_cpp_CPickList_setItemHotKey_FUN_0049c160(this_ptr,item_index_00,iVar1);
    item_index_00 = item_index_00 + 1;
  }
  shape_edittool_cpp_CStrList_remove_FUN_00499730(&this_ptr->base,start_index,end_index);
  return;
}
