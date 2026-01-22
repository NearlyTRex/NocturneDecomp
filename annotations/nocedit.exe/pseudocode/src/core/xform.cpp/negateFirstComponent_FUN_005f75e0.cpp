// Name: core_xform.cpp_negateFirstComponent_FUN_005f75e0
// Address: 005f75e0
// Address Range: [[005f75e0, 005f7614]]
// Convention: __stack_esi
// Signature: CQuaternion4f * core_xform.cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f * vector_in, CQuaternion4f * vector_out)

#include "nocturne.h"

CQuaternion4f * __stack_esi
core_xform_cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f *vector_in,CQuaternion4f *vector_out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = vector_in->x;
  fVar2 = vector_in->y;
  fVar3 = vector_in->z;
  vector_out->w = -vector_in->w;
  vector_out->x = fVar1;
  vector_out->y = fVar2;
  vector_out->z = fVar3;
  return vector_out;
}
