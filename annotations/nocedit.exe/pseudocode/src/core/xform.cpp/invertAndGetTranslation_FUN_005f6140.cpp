// Name: core_xform.cpp_invertAndGetTranslation_FUN_005f6140
// Address: 005f6140
// Address Range: [[005f6140, 005f6180]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_invertAndGetTranslation_FUN_005f6140(CVector3f * output_vector, CMatrix3x4f * input_matrix)

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_invertAndGetTranslation_FUN_005f6140
          (CVector3f *output_vector,CMatrix3x4f *input_matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CVector3f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_6c;
  CVector3f local_3c [4];
  
  bVar4 = 0;
  core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)output_vector,&local_6c);
  pCVar2 = &local_6c;
  pCVar3 = local_3c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->x = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar3 = (CVector3f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  core_xform_cpp_getTranslation_FUN_005f6110(local_3c,input_matrix);
  return (CVector3f *)input_matrix;
}
