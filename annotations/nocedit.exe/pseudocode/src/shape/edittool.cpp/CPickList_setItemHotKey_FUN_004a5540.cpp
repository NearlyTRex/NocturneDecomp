// Name: shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540
// Address: 004a5540
// Address Range: [[004a5540, 004a5601]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540(CPickList *this_ptr,int item_index,int hotkey_code)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540(CPickList *this_ptr,int item_index,int hotkey_code)

{
  int *piVar1;
  
  if ((item_index < 0) || ((this_ptr->base).item_count <= item_index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 4174;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::setItemHotKey - invalid index");
  }
  if (this_ptr->hotkey_capacity <= item_index) {
    piVar1 = (int *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (this_ptr->hotkey_array,(this_ptr->base).item_count << 2,
                        "..\\shape\\edittool.cpp",4180);
    this_ptr->hotkey_array = piVar1;
    if (piVar1 == (int *)0x0) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 4181;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
    }
    while (this_ptr->hotkey_capacity < (this_ptr->base).item_count) {
      this_ptr->hotkey_array[this_ptr->hotkey_capacity] = -1;
      this_ptr->hotkey_capacity = this_ptr->hotkey_capacity + 1;
    }
  }
  this_ptr->hotkey_array[item_index] = hotkey_code;
  return;
}
