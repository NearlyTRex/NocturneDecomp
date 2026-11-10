// Name: shape_edittool.cpp_CPickList_setItemHotKey_FUN_00483b00
// Address: 00483b00
// Address Range: [[00483b00, 00483bc6]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_setItemHotKey_FUN_00483b00(CPickList *this_ptr,int item_index,int hotkey_code)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CPickList_setItemHotKey_FUN_00483b00(CPickList *this_ptr,int item_index,int hotkey_code)

{
  int *piVar1;
  
  if ((item_index < 0) || ((this_ptr->base).item_count <= item_index)) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x1115;
    core_main_c_FUN_004e4500("CPickList::setItemHotKey - invalid index");
  }
  if (this_ptr->hotkey_capacity <= item_index) {
    if (hotkey_code == -1) {
      return;
    }
    piVar1 = (int *)realloc
                       (this_ptr->hotkey_array,(this_ptr->base).item_count << 2);
    this_ptr->hotkey_array = piVar1;
    if (piVar1 == (int *)0x0) {
      _DAT_01d046a0 = "..\\shape\\edittool.cpp";
      _DAT_01d046a4 = 0x111d;
      core_main_c_FUN_004e4500("Out of memory");
    }
    while (this_ptr->hotkey_capacity < (this_ptr->base).item_count) {
      this_ptr->hotkey_array[this_ptr->hotkey_capacity] = -1;
      this_ptr->hotkey_capacity = this_ptr->hotkey_capacity + 1;
    }
  }
  this_ptr->hotkey_array[item_index] = hotkey_code;
  return;
}
