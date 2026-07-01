// Name: core_course.cpp_CCourse_allocMemory_FUN_00442500
// Address: 00442500
// Address Range: [[00442500, 00442577]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_allocMemory_FUN_00442500(CCourse *this_ptr,int count)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0044253f) */

void __cdecl core_course_cpp_CCourse_allocMemory_FUN_00442500(CCourse *this_ptr,int count)

{
  int *piVar1;
  
  core_course_cpp_CCourse_free_FUN_004426c0(this_ptr);
  this_ptr->len = count;
  piVar1 = (int *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                     (count * 0x1c + 4,"..\\core\\course.cpp",109);
  if (piVar1 == (int *)0x0) {
    this_ptr->frames = (CCourseFrame *)0x0;
  }
  else {
    *piVar1 = count;
    this_ptr->frames = (CCourseFrame *)(piVar1 + 1);
    if ((CCourseFrame *)(piVar1 + 1) != (CCourseFrame *)0x0) {
      return;
    }
  }
  g_CurrentFilename = "..\\core\\course.cpp";
  g_CurrentLineNumber = 110;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CCourse::allocMemory - out of hunk!");
  return;
}
