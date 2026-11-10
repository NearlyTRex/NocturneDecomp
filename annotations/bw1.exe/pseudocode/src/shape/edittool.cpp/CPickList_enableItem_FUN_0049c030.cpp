// Name: shape_edittool.cpp_CPickList_enableItem_FUN_0049c030
// Address: 0049c030
// Address Range: [[0049c030, 0049c0fd]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_0049c030(CPickList *this_ptr,int item_index,int enable_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_0049c030(CPickList *this_ptr,int item_index,int enable_flag)

{
  int *piVar1;
  
  if ((item_index < 0) || ((this_ptr->base).item_count <= item_index)) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x116c;
    core_main_c_FUN_005030e0("CPickList::enableItem - invalid index");
  }
  if (this_ptr->enabled_capacity <= item_index) {
    if (enable_flag != 0) {
      return;
    }
    piVar1 = (int *)realloc
                       (this_ptr->enabled_array,(this_ptr->base).item_count << 2);
    this_ptr->enabled_array = piVar1;
    if (piVar1 == (int *)0x0) {
      _DAT_01d1d400 = "..\\shape\\edittool.cpp";
      _DAT_01d1d404 = 0x1174;
      core_main_c_FUN_005030e0("Out of memory");
    }
    while (this_ptr->enabled_capacity < (this_ptr->base).item_count) {
      this_ptr->enabled_array[this_ptr->enabled_capacity] = 1;
      this_ptr->enabled_capacity = this_ptr->enabled_capacity + 1;
    }
  }
  this_ptr->enabled_array[item_index] = (uint)(enable_flag != 0);
  return;
}
