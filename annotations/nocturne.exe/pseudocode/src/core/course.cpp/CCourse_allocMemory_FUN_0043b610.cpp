// Name: core_course.cpp_CCourse_allocMemory_FUN_0043b610
// Address: 0043b610
// Address Range: [[0043b610, 0043b680]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_allocMemory_FUN_0043b610(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043b648) */

void __cdecl core_course_cpp_CCourse_allocMemory_FUN_0043b610(int *param_1,int param_2)

{
  int *piVar1;
  
  core_course_cpp_CCourse_free_FUN_0043b7c0(param_1);
  *param_1 = param_2;
  piVar1 = (int *)shape_memdbg_cpp_malloc_FUN_00564c18(param_2 * 0x1c + 4);
  if (piVar1 == (int *)0x0) {
    param_1[1] = 0;
  }
  else {
    *piVar1 = param_2;
    param_1[1] = (int)(piVar1 + 1);
    if (piVar1 + 1 != (int *)0x0) {
      return;
    }
  }
  PTR_01cc4800 = "..\\core\\course.cpp";
  INT_01cc4804 = 0x6e;
  core_main_c_FUN_004c8440("CCourse::allocMemory - out of hunk!");
  return;
}
