// Name: shape_edittool.cpp_CPickList_swap_FUN_00476200
// Address: 00476200
// Address Range: [[00476200, 00476251]]
// Convention: unknown
// Signature: void shape_edittool_cpp_CPickList_swap_FUN_00476200(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void shape_edittool_cpp_CPickList_swap_FUN_00476200(int param_1,uint param_2,uint param_3)

{
  if (0 < *(int *)(param_1 + 0x130)) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0xe35;
    core_main_c_FUN_004c8440("CPickList::swap - can't do this after enableing/disabling items (yet)");
  }
  shape_edittool_cpp_CStrList_swap_FUN_00474300(param_1,param_2,param_3);
  return;
}
