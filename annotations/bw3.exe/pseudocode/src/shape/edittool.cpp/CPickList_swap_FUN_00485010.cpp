// Name: shape_edittool.cpp_CPickList_swap_FUN_00485010
// Address: 00485010
// Address Range: [[00485010, 00485094]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_swap_FUN_00485010(CPickList *this_ptr,int index1,int index2)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_swap_FUN_00485010(CPickList *this_ptr,int index1,int index2)

{
  int iVar1;
  int iVar2;
  
  shape_edittool_cpp_CStrList_swap_FUN_004826c0(&this_ptr->base,index1,index2);
  iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00484ca0(this_ptr,index1);
  iVar2 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00484ca0(this_ptr,index2);
  if (iVar1 != iVar2) {
    shape_edittool_cpp_CPickList_enableItem_FUN_00484bd0(this_ptr,index1,iVar2);
    shape_edittool_cpp_CPickList_enableItem_FUN_00484bd0(this_ptr,index2,iVar1);
  }
  iVar1 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_00484dd0(this_ptr,index1);
  iVar2 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_00484dd0(this_ptr,index2);
  if (iVar1 == iVar2) {
    return;
  }
  shape_edittool_cpp_CPickList_setItemHotKey_FUN_00484d00(this_ptr,index1,iVar2);
  shape_edittool_cpp_CPickList_setItemHotKey_FUN_00484d00(this_ptr,index2,iVar1);
  return;
}
