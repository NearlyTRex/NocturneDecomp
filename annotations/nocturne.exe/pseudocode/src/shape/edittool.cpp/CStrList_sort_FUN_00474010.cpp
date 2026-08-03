// Name: shape_edittool.cpp_CStrList_sort_FUN_00474010
// Address: 00474010
// Address Range: [[00474010, 00474073]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_sort_FUN_00474010(CStrList *this_ptr,int sort_type,int sort_order)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_sort_FUN_00474010(CStrList *this_ptr,int sort_type,int sort_order)

{
  if (sort_type < sort_order) {
    if ((sort_type < 0) || (this_ptr->item_count <= sort_order)) {
      g_CHAR_PTR_01cc4800 = "..\\shape\\edittool.cpp";
      g_INT_01cc4804 = 0xa32;
      core_main_c_FUN_004c8440("CStrList::sort - invalid range!");
    }
    _qsort
              (this_ptr->data_array + sort_type,(sort_order - sort_type) + 1,4,
               shape_edittool_cpp_FUN_00473ff0);
  }
  return;
}
