// Name: shape_edittool.cpp_CPickList_sort_FUN_004a57f0
// Address: 004a57f0
// Address Range: [[004a57f0, 004a5868]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_sort_FUN_004a57f0(CPickList *this_ptr,int sort_type,int sort_order)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_sort_FUN_004a57f0(CPickList *this_ptr,int sort_type,int sort_order)

{
  if (0 < this_ptr->enabled_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x108d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::sort - can't do this after enableing/disabling items (yet)");
  }
  if (0 < this_ptr->hotkey_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x108e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::sort - can't do this after setting hotkeys (yet)");
  }
  shape_edittool_cpp_CStrList_sort_FUN_004a2f00(&this_ptr->base,sort_type,sort_order);
  return;
}
