// Name: core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690
// Address: 00494690
// Address Range: [[00494690, 00494707]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690(CDemonRaytrace * this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00494690(CDemonRaytrace *this_ptr)

{
  if (this_ptr->triangle_list != (CDemonTriangle *)0x0) {
    g_CurrentDebugLine = 0x104;
    g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
    crt_memory_c_free_FUN_005fe659(&this_ptr->triangle_list[-1].area);
  }
  if (this_ptr->triangle_flags != (uchar *)0x0) {
    g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
    g_CurrentDebugLine = 0x107;
    crt_memory_c_free_FUN_005fe659(this_ptr->triangle_flags);
  }
  this_ptr->triangle_flags = (uchar *)0x0;
  this_ptr->triangle_count = 0;
  this_ptr->triangle_list = (CDemonTriangle *)0x0;
  return;
}
