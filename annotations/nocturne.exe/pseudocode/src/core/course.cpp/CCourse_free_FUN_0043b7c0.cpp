// Name: core_course.cpp_CCourse_free_FUN_0043b7c0
// Address: 0043b7c0
// Address Range: [[0043b7c0, 0043b7f5]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_free_FUN_0043b7c0(CCourse *this_ptr)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_free_FUN_0043b7c0(CCourse *this_ptr)

{
  if (this_ptr->frames == (CCourseFrame *)0x0) {
    this_ptr->len = 0;
    this_ptr->frames = (CCourseFrame *)0x0;
    return;
  }
  shape_memdbg_cpp_free_FUN_00564486(&this_ptr->frames[-1].orient.z);
  this_ptr->len = 0;
  this_ptr->frames = (CCourseFrame *)0x0;
  return;
}
