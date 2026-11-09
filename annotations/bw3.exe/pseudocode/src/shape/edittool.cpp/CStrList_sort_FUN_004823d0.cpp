// Name: shape_edittool.cpp_CStrList_sort_FUN_004823d0
// Address: 004823d0
// Address Range: [[004823d0, 00482433]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_sort_FUN_004823d0(CStrList *this_ptr,int start_index,int end_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_sort_FUN_004823d0(CStrList *this_ptr,int start_index,int end_index)

{
  if (start_index < end_index) {
    if ((start_index < 0) || (*(int *)this_ptr <= end_index)) {
      _DAT_01d71de0 = "..\\shape\\edittool.cpp";
      _DAT_01d71de4 = 0xca6;
      core_main_c_FUN_004e4330("CStrList::sort - invalid range!");
    }
    _qsort
              (*(int *)&this_ptr->field_0x8 + start_index * 4,(end_index - start_index) + 1,4,
               shape_edittool_cpp_FUN_004823b0);
  }
  return;
}
