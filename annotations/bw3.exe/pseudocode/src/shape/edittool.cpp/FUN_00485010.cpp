// Name: shape_edittool.cpp_FUN_00485010
// Address: 00485010
// Address Range: [[00485010, 00485094]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00485010(CPickList *param_1,int param_2,int param_3)

#include "nocturne.h"

void shape_edittool_cpp_FUN_00485010(CPickList *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  shape_edittool_cpp_CStrList_swap_FUN_004826c0(&param_1->base,param_2,param_3);
  iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00484ca0(param_1,param_2);
  iVar2 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00484ca0(param_1,param_3);
  if (iVar1 != iVar2) {
    shape_edittool_cpp_CPickList_enableItem_FUN_00484bd0(param_1,param_2,iVar2);
    shape_edittool_cpp_CPickList_enableItem_FUN_00484bd0(param_1,param_3,iVar1);
  }
  iVar1 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_00484dd0(param_1,param_2);
  iVar2 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_00484dd0(param_1,param_3);
  if (iVar1 == iVar2) {
    return;
  }
  shape_edittool_cpp_CPickList_setItemHotKey_FUN_00484d00(param_1,param_2,iVar2);
  shape_edittool_cpp_CPickList_setItemHotKey_FUN_00484d00(param_1,param_3,iVar1);
  return;
}
