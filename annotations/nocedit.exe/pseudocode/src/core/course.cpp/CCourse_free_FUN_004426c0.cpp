// Name: core_course.cpp_CCourse_free_FUN_004426c0
// Address: 004426c0
// Address Range: [[004426c0, 0044270b]]
// Convention: __cdecl
// Signature: void core_course.cpp_CCourse_free_FUN_004426c0(CCourse * this_ptr)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_free_FUN_004426c0(CCourse *this_ptr)

{
  g_CurrentDebugLine = 0xa8;
  g_CurrentDebugFilename = "..\\core\\course.cpp";
  if (this_ptr->frame_list == (CCourseFrameList *)0x0) {
    this_ptr->len = 0;
    this_ptr->frame_list = (CCourseFrameList *)0x0;
    return;
  }
  crt_memory_c_free_FUN_005fe659(&this_ptr->frame_list[-1].frame4.orient.z);
  this_ptr->len = 0;
  this_ptr->frame_list = (CCourseFrameList *)0x0;
  return;
}
