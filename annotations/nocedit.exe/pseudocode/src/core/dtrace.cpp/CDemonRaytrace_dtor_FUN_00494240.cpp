// Name: core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00494240
// Address: 00494240
// Address Range: [[00494240, 00494263]]
// Convention: __cdecl
// Signature: CDemonRaytrace * core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00494240(CDemonRaytrace * this_ptr)

#include "nocturne.h"

CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_dtor_FUN_00494240(CDemonRaytrace *this_ptr)

{
  core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(this_ptr);
  core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00494690(this_ptr);
  core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400(this_ptr);
  return this_ptr;
}
