// Name: shape_edittool.cpp_FUN_0049c310
// Address: 0049c310
// Address Range: [[0049c310, 0049c36a]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0049c310(CPickList *param_1,int param_2,int param_3)

#include "nocturne.h"

void shape_edittool_cpp_FUN_0049c310(CPickList *param_1,int param_2,int param_3)

{
  int iVar1;
  int item_index;
  int item_index_00;
  
  item_index_00 = param_2;
  item_index = param_3;
  while (item_index = item_index + 1, item_index < (param_1->base).item_count) {
    iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_0049c100(param_1,item_index);
    shape_edittool_cpp_CPickList_enableItem_FUN_0049c030(param_1,item_index_00,iVar1);
    iVar1 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_0049c230(param_1,item_index);
    shape_edittool_cpp_CPickList_setItemHotKey_FUN_0049c160(param_1,item_index_00,iVar1);
    item_index_00 = item_index_00 + 1;
  }
  shape_edittool_cpp_CStrList_remove_FUN_00499730(&param_1->base,param_2,param_3);
  return;
}
