// Name: shape_edittool.cpp_CStrList_sort_FUN_004a2f00
// Address: 004a2f00
// Address Range: [[004a2f00, 004a2f63]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_sort_FUN_004a2f00(CStrList *this_ptr,int sort_type,int sort_order)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_sort_FUN_004a2f00(CStrList *this_ptr,int sort_type,int sort_order)

{
  if (sort_type < sort_order) {
    if ((sort_type < 0) || (this_ptr->item_count <= sort_order)) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 0xbaa;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::sort - invalid range!");
    }
    _qsort
              (this_ptr->data_array + sort_type,(sort_order - sort_type) + 1,4,
               shape_edittool_cpp_CStrList_qsortByString_FUN_004a2ee0);
  }
  return;
}
