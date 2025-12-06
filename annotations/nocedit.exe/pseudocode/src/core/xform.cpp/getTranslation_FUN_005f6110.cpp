// Name: core_xform.cpp_getTranslation_FUN_005f6110
// Address: 005f6110
// Address Range: [[005f6110, 005f613d]]
// Convention: __cdecl
// Signature: void core_xform.cpp_getTranslation_FUN_005f6110(CVector3f * output_vector, CMatrix3x4f * input_matrix)

#include "nocturne.h"

void __cdecl
core_xform_cpp_getTranslation_FUN_005f6110(CVector3f *output_vector,CMatrix3x4f *input_matrix)

{
  float fVar1;
  float fVar2;
  
  fVar1 = output_vector[1].x;
  fVar2 = output_vector[3].z;
  input_matrix->m[0].x = output_vector[2].y;
  input_matrix->m[0].w = fVar1;
  input_matrix->m[0].y = fVar2;
  return;
}
