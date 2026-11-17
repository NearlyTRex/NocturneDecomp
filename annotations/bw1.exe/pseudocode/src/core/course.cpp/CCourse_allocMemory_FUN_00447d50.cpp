// Name: core_course.cpp_CCourse_allocMemory_FUN_00447d50
// Address: 00447d50
// Address Range: [[00447d50, 00447da4]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_allocMemory_FUN_00447d50(CCourse *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_allocMemory_FUN_00447d50(CCourse *this_ptr,int param_2)

{
  CCourseFrame *pCVar1;
  
  core_course_cpp_CCourse_free_FUN_00447ee0(this_ptr);
  this_ptr->len = param_2;
  pCVar1 = operator_new_array(param_2 * 0x1c);
  this_ptr->frames = pCVar1;
  if (pCVar1 != (CCourseFrame *)0x0) {
    return;
  }
  g_CHAR_PTR_01d1d400 = "..\\core\\course.cpp";
  g_INT_01d1d404 = 0x6e;
  core_main_c_displayErrorAndQuit_FUN_005030e0("CCourse::allocMemory - out of hunk!");
  return;
}
