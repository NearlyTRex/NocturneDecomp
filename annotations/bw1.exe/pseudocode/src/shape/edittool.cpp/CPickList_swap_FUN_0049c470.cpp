// Name: shape_edittool.cpp_CPickList_swap_FUN_0049c470
// Address: 0049c470
// Address Range: [[0049c470, 0049c4f4]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_swap_FUN_0049c470(CPickList *this_ptr,int index1,int index2)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_swap_FUN_0049c470(CPickList *this_ptr,int index1,int index2)

{
  int iVar1;
  int iVar2;
  
  shape_edittool_cpp_CStrList_swap_FUN_00499b20(&this_ptr->base,index1,index2);
  iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_0049c100(this_ptr,index1);
  iVar2 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_0049c100(this_ptr,index2);
  if (iVar1 != iVar2) {
    shape_edittool_cpp_CPickList_enableItem_FUN_0049c030(this_ptr,index1,iVar2);
    shape_edittool_cpp_CPickList_enableItem_FUN_0049c030(this_ptr,index2,iVar1);
  }
  iVar1 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_0049c230(this_ptr,index1);
  iVar2 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_0049c230(this_ptr,index2);
  if (iVar1 == iVar2) {
    return;
  }
  shape_edittool_cpp_CPickList_setItemHotKey_FUN_0049c160(this_ptr,index1,iVar2);
  shape_edittool_cpp_CPickList_setItemHotKey_FUN_0049c160(this_ptr,index2,iVar1);
  return;
}
