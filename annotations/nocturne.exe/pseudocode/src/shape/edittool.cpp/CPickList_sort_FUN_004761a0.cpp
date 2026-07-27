// Name: shape_edittool.cpp_CPickList_sort_FUN_004761a0
// Address: 004761a0
// Address Range: [[004761a0, 004761f1]]
// Convention: unknown
// Signature: void shape_edittool_cpp_CPickList_sort_FUN_004761a0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void shape_edittool_cpp_CPickList_sort_FUN_004761a0(int param_1,uint param_2,uint param_3)

{
  if (0 < *(int *)(param_1 + 0x130)) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0xe30;
    core_main_c_FUN_004c8440("CPickList::sort - can't do this after enableing/disabling items (yet)");
  }
  shape_edittool_cpp_CStrList_sort_FUN_00474010(param_1,param_2,param_3);
  return;
}
