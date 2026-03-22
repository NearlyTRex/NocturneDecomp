// Name: core_xform.cpp_negateFirstComponent_FUN_005f75e0
// Address: 005f75e0
// Address Range: [[005f75e0, 005f7614] [00604c81, 00604ca3]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f *vector_in,CQuaternion4f *vector_out)

#include "nocturne.h"

CQuaternion4f * __stack_esi core_xform_cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f *vector_in,CQuaternion4f *vector_out)

{
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar2;
  float fVar3;
  float fVar1;
  
  fVar4 = vector_in->x;
  fVar5 = vector_in->y;
  fVar6 = vector_in->z;
  vector_out->w = -vector_in->w;
  vector_out->x = fVar4;
  vector_out->y = fVar5;
  vector_out->z = fVar6;
  return vector_out;
}
