// Name: core_xform.cpp_buildUniformScaleMatrix_FUN_005f6e20
// Address: 005f6e20
// MANUAL RECONSTRUCTION
// Address Range: [[005f6e20, 005f6e70]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_buildUniformScaleMatrix_FUN_005f6e20(float scale_factor,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi core_xform_cpp_buildUniformScaleMatrix_FUN_005f6e20(float scale_factor,CMatrix3x4f *matrix_out)

{
  matrix_out->m[0].w = scale_factor;
  matrix_out->m[0].x = 0.0;
  matrix_out->m[0].y = 0.0;
  matrix_out->m[0].z = 0.0;
  matrix_out->m[1].w = 0.0;
  matrix_out->m[1].x = scale_factor;
  matrix_out->m[1].y = 0.0;
  matrix_out->m[1].z = 0.0;
  matrix_out->m[2].w = 0.0;
  matrix_out->m[2].x = 0.0;
  matrix_out->m[2].y = scale_factor;
  matrix_out->m[2].z = 0.0;
  return matrix_out;
}
