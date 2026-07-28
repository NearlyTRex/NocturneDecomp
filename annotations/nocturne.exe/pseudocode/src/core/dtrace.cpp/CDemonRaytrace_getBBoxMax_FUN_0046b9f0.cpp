// Name: core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0
// Address: 0046b9f0
// Address Range: [[0046b9f0, 0046ba13]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0(CDemonRaytrace *this_ptr,CVector3f *output_vector)

#include "nocturne.h"

CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0(CDemonRaytrace *this_ptr,CVector3f *output_vector)

{
  output_vector->x = (this_ptr->bbox_max).x;
  output_vector->y = (this_ptr->bbox_max).y;
  output_vector->z = (this_ptr->bbox_max).z;
  return output_vector;
}
