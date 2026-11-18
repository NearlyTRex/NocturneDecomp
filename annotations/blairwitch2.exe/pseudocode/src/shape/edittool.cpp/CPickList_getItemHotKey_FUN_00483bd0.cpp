// Name: shape_edittool.cpp_CPickList_getItemHotKey_FUN_00483bd0
// Address: 00483bd0
// Address Range: [[00483bd0, 00483c29]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_getItemHotKey_FUN_00483bd0(CPickList *this_ptr,int index)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_getItemHotKey_FUN_00483bd0(CPickList *this_ptr,int index)

{
  if ((index < 0) || ((this_ptr->base).item_count <= index)) {
    g_CHAR_PTR_01d046a0 = "..\\shape\\edittool.cpp";
    g_INT_01d046a4 = 0x112e;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CPickList::getItemHotKey - invalid index");
  }
  if (this_ptr->hotkey_capacity <= index) {
    return -1;
  }
  return this_ptr->hotkey_array[index];
}
