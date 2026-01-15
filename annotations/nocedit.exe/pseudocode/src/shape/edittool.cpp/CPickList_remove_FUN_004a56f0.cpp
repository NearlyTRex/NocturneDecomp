// Name: shape_edittool.cpp_CPickList_remove_FUN_004a56f0
// Address: 004a56f0
// Address Range: [[004a56f0, 004a5768]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_remove_FUN_004a56f0(CPickList * this_ptr, int start_index, int end_index)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CPickList_remove_FUN_004a56f0(CPickList *this_ptr,int start_index,int end_index)

{
  if (0 < this_ptr->enabled_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x1079;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::remove - can't do this after enableing/disabling items (yet)");
  }
  if (0 < this_ptr->hotkey_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x107a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::removeRange - can't do this after setting hotkeys (yet)");
  }
  shape_edittool_cpp_CStrList_remove_FUN_004a2e00(&this_ptr->base_strlist,start_index,end_index);
  return;
}
