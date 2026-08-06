// Name: core_course.cpp_CCourse_allocMemory_FUN_0043b610
// Address: 0043b610
// Address Range: [[0043b610, 0043b680]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_allocMemory_FUN_0043b610(CCourse *this_ptr,int count)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043b648) */

void __cdecl core_course_cpp_CCourse_allocMemory_FUN_0043b610(CCourse *this_ptr,int count)

{
  int *piVar1;
  
  core_course_cpp_CCourse_free_FUN_0043b7c0(this_ptr);
  this_ptr->len = count;
  piVar1 = shape_memdbg_cpp_malloc_FUN_00564c18(count * 0x1c + 4);
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
  core_main_c_displayErrorAndQuit_FUN_004c8440("CCourse::allocMemory - out of hunk!");
  return;
}
