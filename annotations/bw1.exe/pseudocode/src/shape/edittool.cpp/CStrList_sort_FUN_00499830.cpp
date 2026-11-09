// Name: shape_edittool.cpp_CStrList_sort_FUN_00499830
// Address: 00499830
// Address Range: [[00499830, 00499893]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_sort_FUN_00499830(CStrList *this_ptr,int start_index,int end_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_sort_FUN_00499830(CStrList *this_ptr,int start_index,int end_index)

{
  if (start_index < end_index) {
    if ((start_index < 0) || (*(int *)this_ptr <= end_index)) {
      _DAT_01d1d400 = "..\\shape\\edittool.cpp";
      _DAT_01d1d404 = 0xca3;
      core_main_c_FUN_005030e0("CStrList::sort - invalid range!");
    }
    _qsort
              (*(int *)&this_ptr->field_0x8 + start_index * 4,(end_index - start_index) + 1,4,
               shape_edittool_cpp_FUN_00499810);
  }
  return;
}
