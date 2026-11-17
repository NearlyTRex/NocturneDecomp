// Name: core_course.cpp_CCourse_allocMemory_FUN_00438a90
// Address: 00438a90
// Address Range: [[00438a90, 00438ae4]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_allocMemory_FUN_00438a90(CCourse *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_allocMemory_FUN_00438a90(CCourse *this_ptr,int param_2)

{
  CCourseFrame *pCVar1;
  
  core_course_cpp_CCourse_free_FUN_00438c20(this_ptr);
  this_ptr->len = param_2;
  pCVar1 = operator_new_array(param_2 * 0x1c);
  this_ptr->frames = pCVar1;
  if (pCVar1 != (CCourseFrame *)0x0) {
    return;
  }
  g_CHAR_PTR_01d046a0 = "..\\core\\course.cpp";
  g_INT_01d046a4 = 0x6e;
  core_main_c_displayErrorAndQuit_FUN_004e4500("CCourse::allocMemory - out of hunk!");
  return;
}
