// Name: core_course.cpp_CCourse_allocMemory_FUN_00444910
// Address: 00444910
// Address Range: [[00444910, 00444964]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_allocMemory_FUN_00444910(CCourse *this_ptr,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_course_cpp_CCourse_allocMemory_FUN_00444910(CCourse *this_ptr,int param_2)

{
  CCourseFrame *pCVar1;
  
  core_course_cpp_CCourse_free_FUN_00444aa0(this_ptr);
  this_ptr->len = param_2;
  pCVar1 = (CCourseFrame *)operator_new_array(param_2 * 0x1c);
  this_ptr->frames = pCVar1;
  if (pCVar1 != (CCourseFrame *)0x0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\course.cpp";
  _DAT_01d71de4 = 0x6e;
  core_main_c_displayErrorAndQuit_FUN_004e4330("CCourse::allocMemory - out of hunk!");
  return;
}
