// Name: core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
// Address: 00499b70
// MANUAL RECONSTRUCTION
// Address Range: [[00499b70, 00499b93]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(CDemonRaytrace *this_ptr,CVector3f *output_vector)

#include "nocturne.h"

CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(CDemonRaytrace *this_ptr,CVector3f *output_vector)

{
  *output_vector = this_ptr->bbox_max;
  return output_vector;
}
