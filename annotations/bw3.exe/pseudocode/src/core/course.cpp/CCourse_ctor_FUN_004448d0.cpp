// Name: core_course.cpp_CCourse_ctor_FUN_004448d0
// Address: 004448d0
// Address Range: [[004448d0, 004448e8]]
// Convention: __cdecl
// Signature: CCourse * __cdecl core_course_cpp_CCourse_ctor_FUN_004448d0(CCourse *this_ptr)

#include "nocturne.h"

CCourse * __cdecl core_course_cpp_CCourse_ctor_FUN_004448d0(CCourse *this_ptr)

{
  *(uint *)(this_ptr + 4) = 0;
  *(uint *)(this_ptr + 8) = 1;
  *(uint *)this_ptr = 0;
  return this_ptr;
}
