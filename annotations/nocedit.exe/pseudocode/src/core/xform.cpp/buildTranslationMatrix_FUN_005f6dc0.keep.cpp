// Name: core_xform.cpp_buildTranslationMatrix_FUN_005f6dc0
// Address: 005f6dc0
// MANUAL RECONSTRUCTION
// Address Range: [[005f6dc0, 005f6e1b]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_buildTranslationMatrix_FUN_005f6dc0(CVector3f *translation,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi core_xform_cpp_buildTranslationMatrix_FUN_005f6dc0(CVector3f *translation,CMatrix3x4f *matrix_out)

{
  matrix_out->m[0].w = 1.0;
  matrix_out->m[0].x = 0.0;
  matrix_out->m[0].y = 0.0;
  matrix_out->m[0].z = translation->x;
  matrix_out->m[1].w = 0.0;
  matrix_out->m[1].x = 1.0;
  matrix_out->m[1].y = 0.0;
  matrix_out->m[1].z = translation->y;
  matrix_out->m[2].w = 0.0;
  matrix_out->m[2].x = 0.0;
  matrix_out->m[2].y = 1.0;
  matrix_out->m[2].z = translation->z;
  return matrix_out;
}
