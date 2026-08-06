// Name: shape_edittool.cpp_CPickList_insert_FUN_004760a0
// Address: 004760a0
// Address Range: [[004760a0, 004760f1]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_insert_FUN_004760a0(CPickList *this_ptr,int insert_index,char *string_data)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_insert_FUN_004760a0(CPickList *this_ptr,int insert_index,char *string_data)

{
  if (0 < this_ptr->enabled_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 3613;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CPickList::insert - can't do this after enableing/disabling items (yet)");
  }
  shape_edittool_cpp_CStrList_insert_FUN_00473cf0(&this_ptr->base,insert_index,string_data);
  return;
}
