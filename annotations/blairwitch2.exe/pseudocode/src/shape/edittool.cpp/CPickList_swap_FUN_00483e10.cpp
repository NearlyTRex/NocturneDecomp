// Name: shape_edittool.cpp_CPickList_swap_FUN_00483e10
// Address: 00483e10
// Address Range: [[00483e10, 00483e94]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_swap_FUN_00483e10(CPickList *this_ptr,int index1,int index2)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_swap_FUN_00483e10(CPickList *this_ptr,int index1,int index2)

{
  int iVar1;
  int iVar2;
  
  shape_edittool_cpp_CStrList_swap_FUN_004814c0(&this_ptr->base,index1,index2);
  iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00483aa0(this_ptr,index1);
  iVar2 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00483aa0(this_ptr,index2);
  if (iVar1 != iVar2) {
    shape_edittool_cpp_CPickList_enableItem_FUN_004839d0(this_ptr,index1,iVar2);
    shape_edittool_cpp_CPickList_enableItem_FUN_004839d0(this_ptr,index2,iVar1);
  }
  iVar1 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_00483bd0(this_ptr,index1);
  iVar2 = shape_edittool_cpp_CPickList_getItemHotKey_FUN_00483bd0(this_ptr,index2);
  if (iVar1 == iVar2) {
    return;
  }
  shape_edittool_cpp_CPickList_setItemHotKey_FUN_00483b00(this_ptr,index1,iVar2);
  shape_edittool_cpp_CPickList_setItemHotKey_FUN_00483b00(this_ptr,index2,iVar1);
  return;
}
