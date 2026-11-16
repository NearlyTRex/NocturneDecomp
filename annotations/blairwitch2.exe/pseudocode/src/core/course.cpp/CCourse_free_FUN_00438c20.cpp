// Name: core_course.cpp_CCourse_free_FUN_00438c20
// Address: 00438c20
// Address Range: [[00438c20, 00438c3f]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_free_FUN_00438c20(CCourse *this_ptr)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_free_FUN_00438c20(CCourse *this_ptr)

{
  free(this_ptr->frames);
  this_ptr->frames = (CCourseFrame *)0x0;
  this_ptr->len = 0;
  return;
}
