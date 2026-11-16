// Name: core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00473860
// Address: 00473860
// Address Range: [[00473860, 004738a1]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00473860(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00473860(CDemonRaytrace *this_ptr)

{
  if (this_ptr->triangle_list != (CDemonTriangle *)0x0) {
    free(this_ptr->triangle_list);
  }
  if (this_ptr->triangle_flags != (uchar *)0x0) {
    free(this_ptr->triangle_flags);
  }
  this_ptr->triangle_flags = (uchar *)0x0;
  this_ptr->triangle_count = 0;
  this_ptr->triangle_list = (CDemonTriangle *)0x0;
  return;
}
