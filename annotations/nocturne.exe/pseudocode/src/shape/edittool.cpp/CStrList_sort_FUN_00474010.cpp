// Name: shape_edittool.cpp_CStrList_sort_FUN_00474010
// Address: 00474010
// Address Range: [[00474010, 00474073]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_sort_FUN_00474010(CStrList *this_ptr,int start_index,int end_index)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_sort_FUN_00474010(CStrList *this_ptr,int start_index,int end_index)

{
  if (start_index < end_index) {
    if ((start_index < 0) || (this_ptr->item_count <= end_index)) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 2610;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CStrList::sort - invalid range!");
    }
    _qsort
              (this_ptr->data_array + start_index,(end_index - start_index) + 1,4,
               shape_edittool_cpp_qsortByString_FUN_00473ff0);
  }
  return;
}
