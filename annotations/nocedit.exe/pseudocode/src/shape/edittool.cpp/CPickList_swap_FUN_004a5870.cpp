// Name: shape_edittool.cpp_CPickList_swap_FUN_004a5870
// Address: 004a5870
// Address Range: [[004a5870, 004a58e8]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_swap_FUN_004a5870(CPickList *this_ptr,int index1,int index2)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_swap_FUN_004a5870(CPickList *this_ptr,int index1,int index2)

{
  if (0 < this_ptr->enabled_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 4243;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::swap - can't do this after enableing/disabling items (yet)");
  }
  if (0 < this_ptr->hotkey_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 4244;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::swap - can't do this after setting hotkeys (yet)");
  }
  shape_edittool_cpp_CStrList_swap_FUN_004a31f0(&this_ptr->base,index1,index2);
  return;
}
