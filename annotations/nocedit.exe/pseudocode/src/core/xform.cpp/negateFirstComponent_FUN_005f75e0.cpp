// Name: core_xform.cpp_negateFirstComponent_FUN_005f75e0
// Address: 005f75e0
// Address Range: [[005f75e0, 005f7614]]
// Convention: __stack_esi
// Signature: void core_xform.cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f * output_vector, CQuaternion4f * input_vector)

#include "nocturne.h"

void __stack_esi
core_xform_cpp_negateFirstComponent_FUN_005f75e0
          (CQuaternion4f *output_vector,CQuaternion4f *input_vector)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = output_vector->x;
  fVar2 = output_vector->y;
  fVar3 = output_vector->z;
  input_vector->w = -output_vector->w;
  input_vector->x = fVar1;
  input_vector->y = fVar2;
  input_vector->z = fVar3;
  return;
}
