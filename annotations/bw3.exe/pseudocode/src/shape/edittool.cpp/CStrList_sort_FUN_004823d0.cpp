// Name: shape_edittool.cpp_CStrList_sort_FUN_004823d0
// Address: 004823d0
// Address Range: [[004823d0, 00482433]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_sort_FUN_004823d0(CStrList *this_ptr,int start_index,int end_index)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_sort_FUN_004823d0(CStrList *this_ptr,int start_index,int end_index)

{
  if (start_index < end_index) {
    if ((start_index < 0) || (this_ptr->item_count <= end_index)) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 3238;
      core_main_c_displayErrorAndQuit_FUN_004e4330("CStrList::sort - invalid range!");
    }
    _qsort
              (this_ptr->data_array + start_index,(end_index - start_index) + 1,4,
               shape_edittool_cpp_qsortByString_FUN_004823b0);
  }
  return;
}
