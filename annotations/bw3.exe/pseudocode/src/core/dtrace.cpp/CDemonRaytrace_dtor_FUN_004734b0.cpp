// Name: core_dtrace.cpp_CDemonRaytrace_dtor_FUN_004734b0
// Address: 004734b0
// Address Range: [[004734b0, 004734d3]]
// Convention: __cdecl
// Signature: CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_dtor_FUN_004734b0(CDemonRaytrace *this_ptr,uint flags)

#include "nocturne.h"

CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_dtor_FUN_004734b0(CDemonRaytrace *this_ptr,uint flags)

{
  core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_00473530(this_ptr);
  core_dtrace_cpp_FUN_00473860(this_ptr);
  core_dtrace_cpp_FUN_00473630(this_ptr);
  return this_ptr;
}
