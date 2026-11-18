// Name: core_xform.cpp_getTranslation_FUN_00592720
// Address: 00592720
// Address Range: [[00592720, 00592759]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_xform_cpp_getTranslation_FUN_00592720(CMatrix3x4f *matrix_in,CVector3f *vector_out)

#include "nocturne.h"

CVector3f * __stack_esi core_xform_cpp_getTranslation_FUN_00592720(CMatrix3x4f *matrix_in,CVector3f *vector_out)

{
  float fVar1;
  float fVar2;
  
  fVar1 = matrix_in->m[1].z;
  fVar2 = matrix_in->m[2].z;
  vector_out->x = matrix_in->m[0].z;
  vector_out->y = fVar1;
  vector_out->z = fVar2;
  return vector_out;
}
