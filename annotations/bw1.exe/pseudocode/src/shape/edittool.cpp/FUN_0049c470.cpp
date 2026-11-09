// Name: shape_edittool.cpp_FUN_0049c470
// Address: 0049c470
// Address Range: [[0049c470, 0049c4f4]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0049c470(CPickList *param_1,int param_2,int param_3)

#include "nocturne.h"

void shape_edittool_cpp_FUN_0049c470(CPickList *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  shape_edittool_cpp_CStrList_swap_FUN_00499b20((CStrList *)param_1,param_2,param_3);
  iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_0049c100(param_1,param_2);
  iVar2 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_0049c100(param_1,param_3);
  if (iVar1 != iVar2) {
    shape_edittool_cpp_CPickList_enableItem_FUN_0049c030(param_1,param_2,iVar2);
    shape_edittool_cpp_CPickList_enableItem_FUN_0049c030(param_1,param_3,iVar1);
  }
  iVar1 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_0049c230(param_1,param_2);
  iVar2 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_0049c230(param_1,param_3);
  if (iVar1 == iVar2) {
    return;
  }
  shape_edittool_cpp_CPickList_setItemHotKey_FUN_0049c160(param_1,param_2,iVar2);
  shape_edittool_cpp_CPickList_setItemHotKey_FUN_0049c160(param_1,param_3,iVar1);
  return;
}
