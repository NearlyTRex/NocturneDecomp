// Name: shape_edittool.cpp_FUN_00484e30
// Address: 00484e30
// Address Range: [[00484e30, 00484ea2]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00484e30(CPickList *param_1,int param_2,char *param_3)

#include "nocturne.h"

void shape_edittool_cpp_FUN_00484e30(CPickList *param_1,int param_2,char *param_3)

{
  int iVar1;
  int item_index;
  
  shape_edittool_cpp_CStrList_insert_FUN_004820b0((CStrList *)param_1,param_2,param_3);
  for (item_index = *(int *)param_1 + -2; param_2 < item_index; item_index = item_index + -1) {
    iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00484ca0(param_1,item_index + -1);
    shape_edittool_cpp_CPickList_enableItem_FUN_00484bd0(param_1,item_index,iVar1);
    iVar1 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_00484dd0(param_1,item_index + -1);
    shape_edittool_cpp_CPickList_setItemHotKey_FUN_00484d00(param_1,item_index,iVar1);
  }
  shape_edittool_cpp_CPickList_enableItem_FUN_00484bd0(param_1,param_2,1);
  shape_edittool_cpp_CPickList_setItemHotKey_FUN_00484d00(param_1,param_2,-1);
  return;
}
