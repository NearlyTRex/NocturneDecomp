// Name: core_dtrace.cpp_CDemonRaytrace_allocTris_FUN_004950b0
// Address: 004950b0
// Address Range: [[004950b0, 004950f7]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_allocTris_FUN_004950b0(CDemonRaytrace * this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocTris_FUN_004950b0(CDemonRaytrace *this_ptr)

{
  this_ptr->triangle_count = 200000;
  core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00494600(this_ptr);
  this_ptr->triangle_count = 0;
  (this_ptr->bbox_min).x = 99999.9;
  (this_ptr->bbox_min).y = 99999.9;
  (this_ptr->bbox_min).z = 99999.9;
  (this_ptr->bbox_max).x = -99999.9;
  (this_ptr->bbox_max).y = -99999.9;
  (this_ptr->bbox_max).z = -99999.9;
  return;
}
