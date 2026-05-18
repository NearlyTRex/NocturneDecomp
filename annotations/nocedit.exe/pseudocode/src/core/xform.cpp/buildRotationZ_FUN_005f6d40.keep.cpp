// Name: core_xform.cpp_buildRotationZ_FUN_005f6d40
// Address: 005f6d40
// MANUAL RECONSTRUCTION
// Address Range: [[005f6d40, 005f6db7]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationZ_FUN_005f6d40(float angle_radians,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationZ_FUN_005f6d40(float angle_radians,CMatrix3x4f *matrix_out)

{
  float10 fVar4;
  float10 fVar5;

  fVar4 = (float10)fsin((float10)angle_radians);
  fVar5 = (float10)fcos((float10)angle_radians);
  matrix_out->m[0].w = (float)fVar5;
  matrix_out->m[0].x = -(float)fVar4;
  matrix_out->m[0].y = 0.0;
  matrix_out->m[0].z = 0.0;
  matrix_out->m[1].w = (float)fVar4;
  matrix_out->m[1].x = (float)fVar5;
  matrix_out->m[1].y = 0.0;
  matrix_out->m[1].z = 0.0;
  matrix_out->m[2].w = 0.0;
  matrix_out->m[2].x = 0.0;
  matrix_out->m[2].y = 1.0;
  matrix_out->m[2].z = 0.0;
  return matrix_out;
}
