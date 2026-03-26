// Name: core_xform.cpp_invertAndGetTranslation_FUN_005f6140
// Address: 005f6140
// Address Range: [[005f6140, 005f6180] [03fc3a66, 03fc3ac4]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_xform_cpp_invertAndGetTranslation_FUN_005f6140(CMatrix3x4f *matrix_in,CVector3f *vector_out)

#include "nocturne.h"

CVector3f * __cdecl core_xform_cpp_invertAndGetTranslation_FUN_005f6140(CMatrix3x4f *matrix_in,CVector3f *vector_out)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_6c;
  CMatrix3x4f local_3c;
  
  core_xform_cpp_inverse_FUN_005f6210(matrix_in,&local_6c);
  core_xform_cpp_getTranslation_FUN_005f6110(&local_3c,vector_out);
  return vector_out;
}
