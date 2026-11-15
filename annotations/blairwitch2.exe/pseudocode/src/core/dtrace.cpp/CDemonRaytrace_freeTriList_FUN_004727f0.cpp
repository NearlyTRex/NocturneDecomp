// Name: core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_004727f0
// Address: 004727f0
// Address Range: [[004727f0, 00472831]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_004727f0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_004727f0(CDemonRaytrace *this_ptr)

{
  if (this_ptr->triangle_list != (CDemonTriangle *)0x0) {
    FUN_005b7fce(this_ptr->triangle_list);
  }
  if (this_ptr->triangle_flags != (uchar *)0x0) {
    FUN_005b7fce(this_ptr->triangle_flags);
  }
  this_ptr->triangle_flags = (uchar *)0x0;
  this_ptr->triangle_count = 0;
  this_ptr->triangle_list = (CDemonTriangle *)0x0;
  return;
}
