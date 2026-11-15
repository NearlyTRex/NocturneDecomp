// Name: core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00477d90
// Address: 00477d90
// Address Range: [[00477d90, 00477dad]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00477d90(CDemonRaytrace *this_ptr,CVector3f *output_vector)

#include "nocturne.h"

CVector3f * __stack_esi core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00477d90(CDemonRaytrace *this_ptr,CVector3f *output_vector)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this_ptr->bbox_min).y;
  fVar2 = (this_ptr->bbox_min).z;
  output_vector->x = (this_ptr->bbox_min).x;
  output_vector->y = fVar1;
  output_vector->z = fVar2;
  return output_vector;
}
