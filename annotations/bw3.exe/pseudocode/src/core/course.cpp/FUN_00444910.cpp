// Name: core_course.cpp_FUN_00444910
// Address: 00444910
// Address Range: [[00444910, 00444964]]
// Convention: unknown
// Signature: void core_course_cpp_FUN_00444910(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_course_cpp_FUN_00444910(int *param_1,int param_2)

{
  int iVar1;
  
  core_course_cpp_FUN_00444aa0(param_1);
  *param_1 = param_2;
  iVar1 = operator_new_array(param_2 * 0x1c);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\course.cpp";
  _DAT_01d71de4 = 0x6e;
  core_main_c_FUN_004e4330("CCourse::allocMemory - out of hunk!");
  return;
}
