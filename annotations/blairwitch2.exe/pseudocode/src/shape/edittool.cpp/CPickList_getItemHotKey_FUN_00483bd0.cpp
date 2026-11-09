// Name: shape_edittool.cpp_CPickList_getItemHotKey_FUN_00483bd0
// Address: 00483bd0
// Address Range: [[00483bd0, 00483c29]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_getItemHotKey_FUN_00483bd0(CPickList *this_ptr,int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_CPickList_getItemHotKey_FUN_00483bd0(CPickList *this_ptr,int index)

{
  if ((index < 0) || (*(int *)this_ptr <= index)) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x112e;
    core_main_c_FUN_004e4500("CPickList::getItemHotKey - invalid index");
  }
  if (*(int *)&this_ptr->field_0x1b4 <= index) {
    return -1;
  }
  return *(int *)(*(int *)&this_ptr->field_0x1b8 + index * 4);
}
