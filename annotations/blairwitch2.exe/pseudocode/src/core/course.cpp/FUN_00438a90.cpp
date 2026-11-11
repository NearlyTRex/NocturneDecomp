// Name: core_course.cpp_FUN_00438a90
// Address: 00438a90
// Address Range: [[00438a90, 00438ae4]]
// Convention: unknown
// Signature: void core_course_cpp_FUN_00438a90(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_course_cpp_FUN_00438a90(int *param_1,int param_2)

{
  int iVar1;
  
  core_course_cpp_FUN_00438c20(param_1);
  *param_1 = param_2;
  iVar1 = operator_new_array(param_2 * 0x1c);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\course.cpp";
  _DAT_01d046a4 = 0x6e;
  core_main_c_FUN_004e4500("CCourse::allocMemory - out of hunk!");
  return;
}
