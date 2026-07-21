// Name: core_course.cpp_CCourse_free_FUN_0043b7c0
// Address: 0043b7c0
// Address Range: [[0043b7c0, 0043b7f5]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_free_FUN_0043b7c0(undefined4 *param_1)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_free_FUN_0043b7c0(uint *param_1)

{
  if (param_1[1] == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  shape_memdbg_cpp_free_FUN_00564486(param_1[1] + -4);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}
