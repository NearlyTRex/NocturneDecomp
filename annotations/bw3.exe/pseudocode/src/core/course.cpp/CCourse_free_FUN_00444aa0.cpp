// Name: core_course.cpp_CCourse_free_FUN_00444aa0
// Address: 00444aa0
// Address Range: [[00444aa0, 00444abf]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_free_FUN_00444aa0(CCourse *this_ptr)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_free_FUN_00444aa0(CCourse *this_ptr)

{
  free(this_ptr->frames);
  this_ptr->frames = (CCourseFrame *)0x0;
  this_ptr->len = 0;
  return;
}
