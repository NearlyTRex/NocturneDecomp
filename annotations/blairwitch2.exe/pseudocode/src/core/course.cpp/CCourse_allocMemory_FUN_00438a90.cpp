// Name: core_course.cpp_CCourse_allocMemory_FUN_00438a90
// Address: 00438a90
// Address Range: [[00438a90, 00438ae4]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_allocMemory_FUN_00438a90(CCourse *this_ptr,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_course_cpp_CCourse_allocMemory_FUN_00438a90(CCourse *this_ptr,int param_2)

{
  CCourseFrame *pCVar1;
  
  core_course_cpp_FUN_00438c20(this_ptr);
  this_ptr->len = param_2;
  pCVar1 = (CCourseFrame *)operator_new_array(param_2 * 0x1c);
  this_ptr->frames = pCVar1;
  if (pCVar1 != (CCourseFrame *)0x0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\course.cpp";
  _DAT_01d046a4 = 0x6e;
  core_main_c_FUN_004e4500("CCourse::allocMemory - out of hunk!");
  return;
}
