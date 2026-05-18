// Name: core_xform.cpp_buildRotationX_FUN_005f6c40
// Address: 005f6c40
// MANUAL RECONSTRUCTION
// Address Range: [[005f6c40, 005f6cb5]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationX_FUN_005f6c40(float angle_radians,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationX_FUN_005f6c40(float angle_radians,CMatrix3x4f *matrix_out)

{
  float10 fVar4;
  float10 fVar5;

  fVar4 = (float10)fsin((float10)angle_radians);
  fVar5 = (float10)fcos((float10)angle_radians);
  matrix_out->m[0].w = 1.0;
  matrix_out->m[0].x = 0.0;
  matrix_out->m[0].y = 0.0;
  matrix_out->m[0].z = 0.0;
  matrix_out->m[1].w = 0.0;
  matrix_out->m[1].x = (float)fVar5;
  matrix_out->m[1].y = -(float)fVar4;
  matrix_out->m[1].z = 0.0;
  matrix_out->m[2].w = 0.0;
  matrix_out->m[2].x = (float)fVar4;
  matrix_out->m[2].y = (float)fVar5;
  matrix_out->m[2].z = 0.0;
  return matrix_out;
}
