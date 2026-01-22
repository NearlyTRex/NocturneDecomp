// Name: core_xform.cpp_invertAndGetTranslation_FUN_005f6140
// Address: 005f6140
// Address Range: [[005f6140, 005f6180]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_invertAndGetTranslation_FUN_005f6140(CMatrix3x4f * matrix_in, CVector3f * vector_out)

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_invertAndGetTranslation_FUN_005f6140(CMatrix3x4f *matrix_in,CVector3f *vector_out)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_6c;
  CMatrix3x4f local_3c;
  
  bVar4 = 0;
  core_xform_cpp_inverse_FUN_005f6210(matrix_in,&local_6c);
  pCVar2 = &local_6c;
  pCVar3 = &local_3c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  core_xform_cpp_getTranslation_FUN_005f6110(&local_3c,vector_out);
  return vector_out;
}
