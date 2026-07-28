// Name: core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0
// Address: 0046b9c0
// Address Range: [[0046b9c0, 0046b9e3]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0(CDemonRaytrace *this_ptr,CVector3f *output_vector)

#include "nocturne.h"

CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0(CDemonRaytrace *this_ptr,CVector3f *output_vector)

{
  output_vector->x = (this_ptr->bbox_min).x;
  output_vector->y = (this_ptr->bbox_min).y;
  output_vector->z = (this_ptr->bbox_min).z;
  return output_vector;
}
