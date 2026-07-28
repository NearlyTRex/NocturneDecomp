// Name: core_xform.cpp_getTranslation_FUN_0055bc00
// Address: 0055bc00
// Address Range: [[0055bc00, 0055bc2d]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_xform_cpp_getTranslation_FUN_0055bc00(CMatrix3x4f *matrix_in,CVector3f *vector_out)

#include "nocturne.h"

CVector3f * __cdecl core_xform_cpp_getTranslation_FUN_0055bc00(CMatrix3x4f *matrix_in,CVector3f *vector_out)

{
  float fVar1;
  float fVar2;
  
  fVar1 = matrix_in->m[0].z;
  fVar2 = matrix_in->m[2].z;
  vector_out->y = matrix_in->m[1].z;
  vector_out->x = fVar1;
  vector_out->z = fVar2;
  return vector_out;
}
