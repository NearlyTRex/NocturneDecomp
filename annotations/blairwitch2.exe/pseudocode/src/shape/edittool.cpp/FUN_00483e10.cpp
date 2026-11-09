// Name: shape_edittool.cpp_FUN_00483e10
// Address: 00483e10
// Address Range: [[00483e10, 00483e94]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00483e10(CPickList *param_1,int param_2,int param_3)

#include "nocturne.h"

void shape_edittool_cpp_FUN_00483e10(CPickList *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  shape_edittool_cpp_CStrList_swap_FUN_004814c0((CStrList *)param_1,param_2,param_3);
  iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00483aa0(param_1,param_2);
  iVar2 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00483aa0(param_1,param_3);
  if (iVar1 != iVar2) {
    shape_edittool_cpp_CPickList_enableItem_FUN_004839d0(param_1,param_2,iVar2);
    shape_edittool_cpp_CPickList_enableItem_FUN_004839d0(param_1,param_3,iVar1);
  }
  iVar1 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_00483bd0(param_1,param_2);
  iVar2 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_00483bd0(param_1,param_3);
  if (iVar1 == iVar2) {
    return;
  }
  shape_edittool_cpp_CPickList_setItemHotKey_FUN_00483b00(param_1,param_2,iVar2);
  shape_edittool_cpp_CPickList_setItemHotKey_FUN_00483b00(param_1,param_3,iVar1);
  return;
}
