// Name: core_course.cpp_CCourse_ctor_FUN_00447d10
// Address: 00447d10
// Address Range: [[00447d10, 00447d28]]
// Convention: __cdecl
// Signature: CCourse * __cdecl core_course_cpp_CCourse_ctor_FUN_00447d10(CCourse *this_ptr)

#include "nocturne.h"

CCourse * __cdecl core_course_cpp_CCourse_ctor_FUN_00447d10(CCourse *this_ptr)

{
  *(uint *)(this_ptr + 4) = 0;
  *(uint *)(this_ptr + 8) = 1;
  *(uint *)this_ptr = 0;
  return this_ptr;
}
