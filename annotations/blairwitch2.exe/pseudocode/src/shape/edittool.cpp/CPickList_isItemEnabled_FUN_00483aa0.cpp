// Name: shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0
// Address: 00483aa0
// Address Range: [[00483aa0, 00483afb]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_isItemEnabled_FUN_00483aa0(CPickList *this_ptr,int item_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_CPickList_isItemEnabled_FUN_00483aa0(CPickList *this_ptr,int item_index)

{
  if ((item_index < 0) || ((this_ptr->base).item_count <= item_index)) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x1104;
    core_main_c_FUN_004e4500("CPickList::isItemEnabled - invalid index");
  }
  if (this_ptr->enabled_capacity <= item_index) {
    return 1;
  }
  return (uint)(this_ptr->enabled_array[item_index] != 0);
}
