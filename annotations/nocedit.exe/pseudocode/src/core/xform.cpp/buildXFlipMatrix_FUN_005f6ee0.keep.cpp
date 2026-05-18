// Name: core_xform.cpp_buildXFlipMatrix_FUN_005f6ee0
// Address: 005f6ee0
// MANUAL RECONSTRUCTION
// Address Range: [[005f6ee0, 005f6f3a]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_buildXFlipMatrix_FUN_005f6ee0(float x_offset,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi core_xform_cpp_buildXFlipMatrix_FUN_005f6ee0(float x_offset,CMatrix3x4f *matrix_out)

{
  matrix_out->m[0].w = -1.0;
  matrix_out->m[0].x = 0.0;
  matrix_out->m[0].y = 0.0;
  matrix_out->m[0].z = x_offset * (float)2;
  matrix_out->m[1].w = 0.0;
  matrix_out->m[1].x = 1.0;
  matrix_out->m[1].y = 0.0;
  matrix_out->m[1].z = 0.0;
  matrix_out->m[2].w = 0.0;
  matrix_out->m[2].x = 0.0;
  matrix_out->m[2].y = 1.0;
  matrix_out->m[2].z = 0.0;
  return matrix_out;
}
