// Name: shape_edittool.cpp_CStrList_sort_FUN_004a2f00
// Address: 004a2f00
// MANUAL RECONSTRUCTION
// Address Range: [[004a2f00, 004a2f63]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_sort_FUN_004a2f00(CStrList *this_ptr,int start_index,int end_index)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_sort_FUN_004a2f00(CStrList *this_ptr,int start_index,int end_index)

{
  if (start_index < end_index) {
    if ((start_index < 0) || (this_ptr->item_count <= end_index)) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 2986;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::sort - invalid range!");
    }
    _qsort
              (this_ptr->data_array + start_index,(end_index - start_index) + 1,sizeof(*this_ptr->data_array),
               shape_edittool_cpp_qsortByString_FUN_004a2ee0);
  }
  return;
}
