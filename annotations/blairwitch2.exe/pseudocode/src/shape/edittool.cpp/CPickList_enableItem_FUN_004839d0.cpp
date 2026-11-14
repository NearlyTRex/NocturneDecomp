// Name: shape_edittool.cpp_CPickList_enableItem_FUN_004839d0
// Address: 004839d0
// Address Range: [[004839d0, 00483a9d]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_004839d0(CPickList *this_ptr,int item_index,int enable_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_004839d0(CPickList *this_ptr,int item_index,int enable_flag)

{
  int *piVar1;
  
  if ((item_index < 0) || ((this_ptr->base).item_count <= item_index)) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x10eb;
    core_main_c_FUN_004e4500("CPickList::enableItem - invalid index");
  }
  if (this_ptr->enabled_capacity <= item_index) {
    if (enable_flag != 0) {
      return;
    }
    piVar1 = (int *)realloc
                       (this_ptr->enabled_array,(this_ptr->base).item_count << 2);
    this_ptr->enabled_array = piVar1;
    if (piVar1 == (int *)0x0) {
      _DAT_01d046a0 = "..\\shape\\edittool.cpp";
      _DAT_01d046a4 = 0x10f3;
      core_main_c_FUN_004e4500("Out of memory");
    }
    while (this_ptr->enabled_capacity < (this_ptr->base).item_count) {
      this_ptr->enabled_array[this_ptr->enabled_capacity] = 1;
      this_ptr->enabled_capacity = this_ptr->enabled_capacity + 1;
    }
  }
  this_ptr->enabled_array[item_index] = (uint)(enable_flag != 0);
  return;
}
