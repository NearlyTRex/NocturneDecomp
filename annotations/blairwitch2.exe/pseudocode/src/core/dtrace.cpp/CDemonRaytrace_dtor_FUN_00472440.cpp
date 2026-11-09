// Name: core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00472440
// Address: 00472440
// Address Range: [[00472440, 00472463]]
// Convention: __cdecl
// Signature: CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_dtor_FUN_00472440(CDemonRaytrace *this_ptr,uint flags)

#include "nocturne.h"

CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_dtor_FUN_00472440(CDemonRaytrace *this_ptr,uint flags)

{
  core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004724c0(this_ptr);
  core_dtrace_cpp_FUN_004727f0(this_ptr);
  core_dtrace_cpp_FUN_004725c0(this_ptr);
  return this_ptr;
}
