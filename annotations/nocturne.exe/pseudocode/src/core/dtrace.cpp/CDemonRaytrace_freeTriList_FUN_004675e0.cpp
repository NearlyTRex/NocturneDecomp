// Name: core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_004675e0
// Address: 004675e0
// Address Range: [[004675e0, 00467624]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_004675e0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_004675e0(CDemonRaytrace *this_ptr)

{
  if (this_ptr->triangle_list != (CDemonTriangle *)0x0) {
    shape_memdbg_cpp_free_FUN_00564486(&this_ptr->triangle_list[-1].dominant_axis);
  }
  if (this_ptr->triangle_flags != (uchar *)0x0) {
    shape_memdbg_cpp_free_FUN_00564486(this_ptr->triangle_flags);
  }
  this_ptr->triangle_flags = (uchar *)0x0;
  this_ptr->triangle_count = 0;
  this_ptr->triangle_list = (CDemonTriangle *)0x0;
  return;
}
