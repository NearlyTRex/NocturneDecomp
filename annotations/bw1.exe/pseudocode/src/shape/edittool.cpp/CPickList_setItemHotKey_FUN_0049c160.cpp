// Name: shape_edittool.cpp_CPickList_setItemHotKey_FUN_0049c160
// Address: 0049c160
// Address Range: [[0049c160, 0049c226]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_setItemHotKey_FUN_0049c160(CPickList *this_ptr,int item_index,int hotkey_code)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CPickList_setItemHotKey_FUN_0049c160(CPickList *this_ptr,int item_index,int hotkey_code)

{
  int *piVar1;
  
  if ((item_index < 0) || ((this_ptr->base).item_count <= item_index)) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x1196;
    core_main_c_FUN_005030e0("CPickList::setItemHotKey - invalid index");
  }
  if (this_ptr->hotkey_capacity <= item_index) {
    if (hotkey_code == -1) {
      return;
    }
    piVar1 = (int *)realloc
                       (this_ptr->hotkey_array,(this_ptr->base).item_count << 2);
    this_ptr->hotkey_array = piVar1;
    if (piVar1 == (int *)0x0) {
      _DAT_01d1d400 = "..\\shape\\edittool.cpp";
      _DAT_01d1d404 = 0x119e;
      core_main_c_FUN_005030e0("Out of memory");
    }
    while (this_ptr->hotkey_capacity < (this_ptr->base).item_count) {
      this_ptr->hotkey_array[this_ptr->hotkey_capacity] = -1;
      this_ptr->hotkey_capacity = this_ptr->hotkey_capacity + 1;
    }
  }
  this_ptr->hotkey_array[item_index] = hotkey_code;
  return;
}
