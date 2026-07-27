// Name: shape_edittool.cpp_CStrList_sort_FUN_00474010
// Address: 00474010
// Address Range: [[00474010, 00474073]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_sort_FUN_00474010(int *param_1,int param_2,int param_3)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_sort_FUN_00474010(int *param_1,int param_2,int param_3)

{
  if (param_2 < param_3) {
    if ((param_2 < 0) || (*param_1 <= param_3)) {
      PTR_01cc4800 = "..\\shape\\edittool.cpp";
      INT_01cc4804 = 0xa32;
      core_main_c_FUN_004c8440("CStrList::sort - invalid range!");
    }
    _qsort
              (param_1[2] + param_2 * 4,(param_3 - param_2) + 1,4,shape_edittool_cpp_FUN_00473ff0);
  }
  return;
}
