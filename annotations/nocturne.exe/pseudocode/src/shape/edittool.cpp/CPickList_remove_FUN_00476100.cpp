// Name: shape_edittool.cpp_CPickList_remove_FUN_00476100
// Address: 00476100
// Address Range: [[00476100, 00476151]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_remove_FUN_00476100(CPickList *this_ptr,int start_index,int end_index)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_remove_FUN_00476100(CPickList *this_ptr,int start_index,int end_index)

{
  if (0 < this_ptr->enabled_capacity) {
    g_CHAR_PTR_01cc4800 = "..\\shape\\edittool.cpp";
    g_INT_01cc4804 = 0xe22;
    core_main_c_FUN_004c8440("CPickList::remove - can't do this after enableing/disabling items (yet)");
  }
  shape_edittool_cpp_CStrList_remove_FUN_00473f10(&this_ptr->base,start_index,end_index);
  return;
}
