// Name: shape_edittool.cpp_CPickList_sort_FUN_004761a0
// Address: 004761a0
// Address Range: [[004761a0, 004761f1]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_sort_FUN_004761a0(CPickList *this_ptr,int sort_type,int sort_order)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_sort_FUN_004761a0(CPickList *this_ptr,int sort_type,int sort_order)

{
  if (0 < this_ptr->enabled_capacity) {
    g_CHAR_PTR_01cc4800 = "..\\shape\\edittool.cpp";
    g_INT_01cc4804 = 0xe30;
    core_main_c_FUN_004c8440("CPickList::sort - can't do this after enableing/disabling items (yet)");
  }
  shape_edittool_cpp_CStrList_sort_FUN_00474010(&this_ptr->base,sort_type,sort_order);
  return;
}
