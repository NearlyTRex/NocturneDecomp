// Name: core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_0048ace0
// Address: 0048ace0
// Address Range: [[0048ace0, 0048ad21]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_0048ace0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_0048ace0(CDemonRaytrace *this_ptr)

{
  if (this_ptr->triangle_list != (CDemonTriangle *)0x0) {
    FUN_005c0336(this_ptr->triangle_list);
  }
  if (this_ptr->triangle_flags != (uchar *)0x0) {
    FUN_005c0336(this_ptr->triangle_flags);
  }
  this_ptr->triangle_flags = (uchar *)0x0;
  this_ptr->triangle_count = 0;
  this_ptr->triangle_list = (CDemonTriangle *)0x0;
  return;
}
