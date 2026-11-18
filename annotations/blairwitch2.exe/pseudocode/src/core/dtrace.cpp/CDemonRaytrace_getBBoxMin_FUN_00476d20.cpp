// Name: core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00476d20
// Address: 00476d20
// Address Range: [[00476d20, 00476d3d]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00476d20(CDemonRaytrace *this_ptr,CVector3f *output_vector)

#include "nocturne.h"

CVector3f * __stack_esi core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00476d20(CDemonRaytrace *this_ptr,CVector3f *output_vector)

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
