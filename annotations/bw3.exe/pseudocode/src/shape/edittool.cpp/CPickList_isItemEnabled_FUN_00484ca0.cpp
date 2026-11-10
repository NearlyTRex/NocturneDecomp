// Name: shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0
// Address: 00484ca0
// Address Range: [[00484ca0, 00484cfb]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_isItemEnabled_FUN_00484ca0(CPickList *this_ptr,int item_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_CPickList_isItemEnabled_FUN_00484ca0(CPickList *this_ptr,int item_index)

{
  if ((item_index < 0) || ((this_ptr->base).item_count <= item_index)) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0x1188;
    core_main_c_FUN_004e4330("CPickList::isItemEnabled - invalid index");
  }
  if (this_ptr->enabled_capacity <= item_index) {
    return 1;
  }
  return (uint)(this_ptr->enabled_array[item_index] != 0);
}
