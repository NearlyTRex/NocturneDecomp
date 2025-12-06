// Name: core_xform.cpp_negateFirstComponent_FUN_005f75e0
// Address: 005f75e0
// Address Range: [[005f75e0, 005f7614]]
// Convention: __cdecl
// Signature: void core_xform.cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f * output_vector, CQuaternion4f * input_vector)

#include "nocturne.h"

void __cdecl
core_xform_cpp_negateFirstComponent_FUN_005f75e0
          (CQuaternion4f *output_vector,CQuaternion4f *input_vector)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *unaff_ESI;
  
  fVar1 = output_vector->x;
  fVar2 = output_vector->y;
  fVar3 = output_vector->z;
  *unaff_ESI = -output_vector->w;
  unaff_ESI[1] = fVar1;
  unaff_ESI[2] = fVar2;
  unaff_ESI[3] = fVar3;
  return;
}
