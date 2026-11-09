// Name: shape_edittool.cpp_FUN_00484eb0
// Address: 00484eb0
// Address Range: [[00484eb0, 00484f0a]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00484eb0(CPickList *param_1,int param_2,int param_3)

#include "nocturne.h"

void shape_edittool_cpp_FUN_00484eb0(CPickList *param_1,int param_2,int param_3)

{
  int iVar1;
  int item_index;
  int item_index_00;
  
  item_index_00 = param_2;
  item_index = param_3;
  while (item_index = item_index + 1, item_index < *(int *)param_1) {
    iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00484ca0(param_1,item_index);
    shape_edittool_cpp_CPickList_enableItem_FUN_00484bd0(param_1,item_index_00,iVar1);
    iVar1 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_00484dd0(param_1,item_index);
    shape_edittool_cpp_CPickList_setItemHotKey_FUN_00484d00(param_1,item_index_00,iVar1);
    item_index_00 = item_index_00 + 1;
  }
  shape_edittool_cpp_CStrList_remove_FUN_004822d0((CStrList *)param_1,param_2,param_3);
  return;
}
