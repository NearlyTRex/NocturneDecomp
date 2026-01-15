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
  float *pfVar2;
  CVector3f *pCVar3;
  byte bVar4;
  CMatrix3x4f *in_stack_ffffff94;
  CVector3f local_3c [4];
  
  bVar4 = 0;
  core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)output_vector,in_stack_ffffff94);
  pfVar2 = (float *)&stack0xffffff94;
  pCVar3 = local_3c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->x = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CVector3f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  core_xform_cpp_getTranslation_FUN_005f6110(local_3c,input_matrix);
  return (CVector3f *)input_matrix;
}
