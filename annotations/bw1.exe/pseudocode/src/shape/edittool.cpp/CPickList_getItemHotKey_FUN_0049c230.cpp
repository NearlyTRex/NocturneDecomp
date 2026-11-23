// Name: shape_edittool.cpp_CPickList_getItemHotKey_FUN_0049c230
// Address: 0049c230
// Address Range: [[0049c230, 0049c289]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_getItemHotKey_FUN_0049c230(CPickList *this_ptr,int index)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_getItemHotKey_FUN_0049c230(CPickList *this_ptr,int index)

{
  if ((index < 0) || ((this_ptr->base).item_count <= index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 4527;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CPickList::getItemHotKey - invalid index");
  }
  if (this_ptr->hotkey_capacity <= index) {
    return -1;
  }
  return this_ptr->hotkey_array[index];
}
