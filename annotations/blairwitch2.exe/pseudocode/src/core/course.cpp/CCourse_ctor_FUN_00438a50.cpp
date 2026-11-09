// Name: core_course.cpp_CCourse_ctor_FUN_00438a50
// Address: 00438a50
// Address Range: [[00438a50, 00438a68]]
// Convention: __cdecl
// Signature: CCourse * __cdecl core_course_cpp_CCourse_ctor_FUN_00438a50(CCourse *this_ptr)

#include "nocturne.h"

CCourse * __cdecl core_course_cpp_CCourse_ctor_FUN_00438a50(CCourse *this_ptr)

{
  *(uint *)(this_ptr + 4) = 0;
  *(uint *)(this_ptr + 8) = 1;
  *(uint *)this_ptr = 0;
  return this_ptr;
}
