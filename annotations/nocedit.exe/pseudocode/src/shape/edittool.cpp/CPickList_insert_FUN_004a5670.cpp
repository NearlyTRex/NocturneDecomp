// Name: shape_edittool.cpp_CPickList_insert_FUN_004a5670
// Address: 004a5670
// Address Range: [[004a5670, 004a56e8]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_insert_FUN_004a5670(CPickList *this_ptr,int insert_index,char *string_data)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_insert_FUN_004a5670(CPickList *this_ptr,int insert_index,char *string_data)

{
  if (0 < this_ptr->enabled_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 4211;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::insert - can't do this after enableing/disabling items (yet)");
  }
  if (0 < this_ptr->hotkey_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 4212;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::insert - can't do this after setting hotkeys (yet)");
  }
  shape_edittool_cpp_CStrList_insert_FUN_004a2bc0(&this_ptr->base,insert_index,string_data);
  return;
}
