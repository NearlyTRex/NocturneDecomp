// Name: shape_edittool.cpp_CPickList_getItemHotKey_FUN_00484dd0
// Address: 00484dd0
// Address Range: [[00484dd0, 00484e29]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_getItemHotKey_FUN_00484dd0(CPickList *this_ptr,int index)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_getItemHotKey_FUN_00484dd0(CPickList *this_ptr,int index)

{
  if ((index < 0) || ((this_ptr->base).item_count <= index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 4530;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CPickList::getItemHotKey - invalid index");
  }
  if (this_ptr->hotkey_capacity <= index) {
    return -1;
  }
  return this_ptr->hotkey_array[index];
}
