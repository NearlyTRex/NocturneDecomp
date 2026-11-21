// Name: shape_edittool.cpp_CPickList_setItemHotKey_FUN_00483b00
// Address: 00483b00
// Address Range: [[00483b00, 00483bc6]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_setItemHotKey_FUN_00483b00(CPickList *this_ptr,int item_index,int hotkey_code)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_setItemHotKey_FUN_00483b00(CPickList *this_ptr,int item_index,int hotkey_code)

{
  int *piVar1;
  
  if ((item_index < 0) || ((this_ptr->base).item_count <= item_index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 4373;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CPickList::setItemHotKey - invalid index");
  }
  if (this_ptr->hotkey_capacity <= item_index) {
    if (hotkey_code == -1) {
      return;
    }
    piVar1 = (int *)realloc
                       (this_ptr->hotkey_array,(this_ptr->base).item_count << 2);
    this_ptr->hotkey_array = piVar1;
    if (piVar1 == (int *)0x0) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 4381;
      core_main_c_displayErrorAndQuit_FUN_004e4500("Out of memory");
    }
    while (this_ptr->hotkey_capacity < (this_ptr->base).item_count) {
      this_ptr->hotkey_array[this_ptr->hotkey_capacity] = -1;
      this_ptr->hotkey_capacity = this_ptr->hotkey_capacity + 1;
    }
  }
  this_ptr->hotkey_array[item_index] = hotkey_code;
  return;
}
