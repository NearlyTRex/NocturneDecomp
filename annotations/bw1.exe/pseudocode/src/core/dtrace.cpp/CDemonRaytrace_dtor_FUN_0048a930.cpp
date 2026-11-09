// Name: core_dtrace.cpp_CDemonRaytrace_dtor_FUN_0048a930
// Address: 0048a930
// Address Range: [[0048a930, 0048a953]]
// Convention: __cdecl
// Signature: CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_dtor_FUN_0048a930(CDemonRaytrace *this_ptr,uint flags)

#include "nocturne.h"

CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_dtor_FUN_0048a930(CDemonRaytrace *this_ptr,uint flags)

{
  core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_0048a9b0(this_ptr);
  core_dtrace_cpp_FUN_0048ace0(this_ptr);
  core_dtrace_cpp_FUN_0048aab0(this_ptr);
  return this_ptr;
}
