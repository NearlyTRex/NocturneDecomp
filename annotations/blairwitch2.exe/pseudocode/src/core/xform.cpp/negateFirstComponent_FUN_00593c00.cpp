// Name: core_xform.cpp_negateFirstComponent_FUN_00593c00
// Address: 00593c00
// Address Range: [[00593c00, 00593c34]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_negateFirstComponent_FUN_00593c00(CQuaternion4f *vector_in,CQuaternion4f *vector_out)

#include "nocturne.h"

CQuaternion4f * __stack_esi core_xform_cpp_negateFirstComponent_FUN_00593c00(CQuaternion4f *vector_in,CQuaternion4f *vector_out)

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
