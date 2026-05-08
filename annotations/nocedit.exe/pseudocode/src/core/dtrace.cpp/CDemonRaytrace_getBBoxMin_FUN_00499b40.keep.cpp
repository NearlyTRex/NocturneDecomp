// Name: core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
// Address: 00499b40
// MANUAL RECONSTRUCTION
// Address Range: [[00499b40, 00499b63]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(CDemonRaytrace *this_ptr,CVector3f *output_vector)

#include "nocturne.h"

CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(CDemonRaytrace *this_ptr,CVector3f *output_vector)

{
  *output_vector = this_ptr->bbox_min;
  return output_vector;
}
