// Name: core_course.cpp_CCourse_allocMemory_FUN_00442500
// Address: 00442500
// Address Range: [[00442500, 00442577]]
// Convention: __cdecl
// Signature: void core_course.cpp_CCourse_allocMemory_FUN_00442500(CCourse * this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0044253f) */

void __cdecl core_course_cpp_CCourse_allocMemory_FUN_00442500(CCourse *this_ptr)

{
  int *piVar1;
  int in_stack_0000000c;
  
  core_course_cpp_CCourse_free_FUN_004426c0(this_ptr);
  this_ptr->len = in_stack_0000000c;
  piVar1 = (int *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                            (in_stack_0000000c * 0x1c + 4,"..\\core\\course.cpp",0x6d);
  if (piVar1 == (int *)0x0) {
    this_ptr->frame_list = (CCourseFrameList *)0x0;
  }
  else {
    *piVar1 = in_stack_0000000c;
    this_ptr->frame_list = (CCourseFrameList *)(piVar1 + 1);
    if ((CCourseFrameList *)(piVar1 + 1) != (CCourseFrameList *)0x0) {
      return;
    }
  }
  g_CurrentFilename = "..\\core\\course.cpp";
  g_CurrentLineNumber = 0x6e;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CCourse::allocMemory - out of hunk!");
  return;
}
