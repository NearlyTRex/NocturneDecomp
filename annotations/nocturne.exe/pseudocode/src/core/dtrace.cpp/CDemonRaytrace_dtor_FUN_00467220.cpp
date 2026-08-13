// Name: core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00467220
// Address: 00467220
// Address Range: [[00467220, 00467243]]
// Convention: __cdecl
// Signature: CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_dtor_FUN_00467220(CDemonRaytrace *this_ptr,uint flags)

#include "nocturne.h"

CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_dtor_FUN_00467220(CDemonRaytrace *this_ptr,uint flags)

{
  core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004672a0(this_ptr);
  core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_004675e0(this_ptr);
  core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_004673a0(this_ptr);
  return this_ptr;
}
